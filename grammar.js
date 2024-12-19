/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
const { commaSep1 } = require("./common/common");
module.exports = grammar({
	name: "plantuml",

	extras: ($) => [/\s/, $.comment],
	rules: {
		diagram: ($) =>
			choice(
				$.uml,
				$.json,
				$.yaml,
				$.json,
				$.yaml,
				$.ebnf,
				$.regex,
				$.ditaa,
				$.gantt,
				$.chronology,
				$.mindmap,
				$.wbs,
				$.chen,
			),
		_NEWLINE: ($) => /\r?\n/,
		uml: ($) => seq("@startuml", repeat($.expression), "@enduml"),
		expression: ($) =>
			choice(
				$.sequence_diagram,
				$.attribute,
				$.group_block,
				$.loop_block,
				$.skinparam,
				$.alt_block,
				$.line_note,
				$.block_note,
				$.block_rnote,
				$.block_hnote,
			),
		label: ($) => seq(/\S[^\r?\n\[]*/, optional($.custom_label)),
		custom_label: ($) => seq("[", alias(/[^\]]*/, $.content), "]"),
		alt_block: ($) =>
			seq(
				"alt",
				$.label,
				repeat($.expression),
				repeat(seq("else", $.label, repeat($.expression))),
				"end",
			),
		line: ($) => seq(/[^\r\n]*/, $._NEWLINE),

		line_note: ($) =>
			seq(
				optional("/"),
				choice("note", "rnote", "hnote"),
				choice(
					"left",
					"right",
					"across",
					seq("over", commaSep1($.participant_name)),
				),
				optional(seq("#", $.color)),
				":",
				$.line,
			),
		block_note: ($) =>
			seq(
				"note",
				choice(
					"left",
					"right",
					"across",
					seq("over", commaSep1($.participant_name)),
				),
				$._NEWLINE,
				repeat($.line),
				"endnote",
			),
		block_rnote: ($) =>
			seq(
				"rnote",
				choice(
					"left",
					"right",
					"across",
					seq("over", commaSep1($.participant_name)),
				),
				$._NEWLINE,
				repeat($.line),
				"endrnote",
			),
		block_hnote: ($) =>
			seq(
				"note",
				choice(
					"left",
					"right",
					"across",
					seq("over", commaSep1($.participant_name)),
				),
				$._NEWLINE,
				repeat($.line),
				"endhnote",
			),
		loop_block: ($) => seq("loop", $.label, repeat($.expression), "end"),
		group_block: ($) => seq("group", $.label, repeat($.expression), "end"),
		// https://plantuml.com/skinparam
		skinparam: ($) =>
			seq(
				"skinparam",
				choice(
					seq(
						"sequenceMessageAlign",
						alias(choice("left", "right", "center"), $.align),
					),
					seq("responseMessageBelowArrow", $.boolean_literal),
				),
			),
		boolean_literal: ($) => choice("true", "false"),
		attribute: ($) =>
			choice(
				prec.left(
					seq(
						"autonumber",
						choice("inc", "resume"),
						choice(/\d+\.\d+\.\d/, optional($.string)),
						/\w/,
					),
				),
				seq("autonumber", repeat(/\d+/), optional($.string), /\r?\n/),
				"autonumber stop",
				seq(
					alias(
						choice(
							"participant",
							"actor",
							"boundary",
							"control",
							"entity",
							"database",
							"collections",
							"queue",
						),
						$.kind,
					),
					alias($.participant_name, $.name),
					optional($.multiline),
					repeat(choice(seq("#", $.color), $.attr_order, $.attr_alias)),
				),
			),
		multiline: ($) => seq("[", repeat(choice(/[^\]]/, $.escape_char)), "]"),
		attr_alias: ($) => seq("as", alias(/\w+/, $.new_name)),
		attr_order: ($) => seq("order", alias(/\d+/, $.value)),
		string: ($) => seq('"', repeat(choice(/[^"]/, '\\"', $.escape_char)), '"'),
		escape_char: ($) => seq("\\", /./),
		participant_name: ($) => choice(/\w+/, $.string),
		sequence_diagram: ($) =>
			seq(
				alias($.participant_name, $.left),
				$.connector,
				alias($.participant_name, $.right),
				optional($.attr_alias),
				optional(seq(":", alias(/[^\r?\n]+/, $.activity))),
			),
		connector: ($) => choice(...generate_connectors($)),

		json: ($) => create_non_uml($, "json"),
		yaml: ($) => create_non_uml($, "yaml"),
		ebnf: ($) => create_non_uml($, "ebnf"),
		regex: ($) => create_non_uml($, "regex"),
		ditaa: ($) => create_non_uml($, "ditaa"),
		gantt: ($) => create_non_uml($, "gantt"),
		chronology: ($) => create_non_uml($, "chronology"),
		mindmap: ($) => create_non_uml($, "mindmap"),
		wbs: ($) => create_non_uml($, "wbs"),
		chen: ($) => create_non_uml($, "chen"),
		comment: ($) =>
			choice(
				seq("'", /[^\r\n]*\r?\n/),
				seq("/'", /[^']*\'+([^/'][^']*\'+)*/, "/"),
			),

		color: ($) =>
			token(
				choice(
					/[0-9a-fA-F]{3,6}/,
					/[0-9a-fA-F]{8}/,
					/transparent/i,
					/transparent black/i,
					// https://www.w3.org/TR/css-color-4/#named-colors
					/aliceblue/i,
					/antiquewhite/i,
					/aqua/i,
					/aquamarine/i,
					/azure/i,
					/beige/i,
					/bisque/i,
					/black/i,
					/blanchedalmond/i,
					/blue/i,
					/blueviolet/i,
					/brown/i,
					/burlywood/i,
					/cadetblue/i,
					/chartreuse/i,
					/chocolate/i,
					/coral/i,
					/cornflowerblue/i,
					/cornsilk/i,
					/crimson/i,
					/cyan/i,
					/darkblue/i,
					/darkcyan/i,
					/darkgoldenrod/i,
					/darkgray/i,
					/darkgreen/i,
					/darkgrey/i,
					/darkkhaki/i,
					/darkmagenta/i,
					/darkolivegreen/i,
					/darkorange/i,
					/darkorchid/i,
					/darkred/i,
					/darksalmon/i,
					/darkseagreen/i,
					/darkslateblue/i,
					/darkslategray/i,
					/darkslategrey/i,
					/darkturquoise/i,
					/darkviolet/i,
					/deeppink/i,
					/deepskyblue/i,
					/dimgray/i,
					/dimgrey/i,
					/dodgerblue/i,
					/firebrick/i,
					/floralwhite/i,
					/forestgreen/i,
					/fuchsia/i,
					/gainsboro/i,
					/ghostwhite/i,
					/gold/i,
					/goldenrod/i,
					/gray/i,
					/green/i,
					/greenyellow/i,
					/grey/i,
					/honeydew/i,
					/hotpink/i,
					/indianred/i,
					/indigo/i,
					/ivory/i,
					/khaki/i,
					/lavender/i,
					/lavenderblush/i,
					/lawngreen/i,
					/lemonchiffon/i,
					/lightblue/i,
					/lightcoral/i,
					/lightcyan/i,
					/lightgoldenrodyellow/i,
					/lightgray/i,
					/lightgreen/i,
					/lightgrey/i,
					/lightpink/i,
					/lightsalmon/i,
					/lightseagreen/i,
					/lightskyblue/i,
					/lightslategray/i,
					/lightslategrey/i,
					/lightsteelblue/i,
					/lightyellow/i,
					/lime/i,
					/limegreen/i,
					/linen/i,
					/magenta/i,
					/maroon/i,
					/mediumaquamarine/i,
					/mediumblue/i,
					/mediumorchid/i,
					/mediumpurple/i,
					/mediumseagreen/i,
					/mediumslateblue/i,
					/mediumspringgreen/i,
					/mediumturquoise/i,
					/mediumvioletred/i,
					/midnightblue/i,
					/mintcream/i,
					/mistyrose/i,
					/moccasin/i,
					/navajowhite/i,
					/navy/i,
					/oldlace/i,
					/olive/i,
					/olivedrab/i,
					/orange/i,
					/orangered/i,
					/orchid/i,
					/palegoldenrod/i,
					/palegreen/i,
					/paleturquoise/i,
					/palevioletred/i,
					/papayawhip/i,
					/peachpuff/i,
					/peru/i,
					/pink/i,
					/plum/i,
					/powderblue/i,
					/purple/i,
					/rebeccapurple/i,
					/red/i,
					/rosybrown/i,
					/royalblue/i,
					/saddlebrown/i,
					/salmon/i,
					/sandybrown/i,
					/seagreen/i,
					/seashell/i,
					/sienna/i,
					/silver/i,
					/skyblue/i,
					/slateblue/i,
					/slategray/i,
					/slategrey/i,
					/snow/i,
					/springgreen/i,
					/steelblue/i,
					/tan/i,
					/teal/i,
					/thistle/i,
					/tomato/i,
					/turquoise/i,
					/violet/i,
					/wheat/i,
					/white/i,
					/whitesmoke/i,
					/yellow/i,
					/yellowgreen/i,
					// https://www.w3schools.com/colors/colors_names.asp
					/AliceBlue/i,
					/AntiqueWhite/i,
					/Aqua/i,
					/Aquamarine/i,
					/Azure/i,
					/Beige/i,
					/Bisque/i,
					/Black/i,
					/BlanchedAlmond/i,
					/Blue/i,
					/BlueViolet/i,
					/Brown/i,
					/BurlyWood/i,
					/CadetBlue/i,
					/Chartreuse/i,
					/Chocolate/i,
					/Coral/i,
					/CornflowerBlue/i,
					/Cornsilk/i,
					/Crimson/i,
					/Cyan/i,
					/DarkBlue/i,
					/DarkCyan/i,
					/DarkGoldenRod/i,
					/DarkGray/i,
					/DarkGrey/i,
					/DarkGreen/i,
					/DarkKhaki/i,
					/DarkMagenta/i,
					/DarkOliveGreen/i,
					/DarkOrange/i,
					/DarkOrchid/i,
					/DarkRed/i,
					/DarkSalmon/i,
					/DarkSeaGreen/i,
					/DarkSlateBlue/i,
					/DarkSlateGray/i,
					/DarkSlateGrey/i,
					/DarkTurquoise/i,
					/DarkViolet/i,
					/DeepPink/i,
					/DeepSkyBlue/i,
					/DimGray/i,
					/DimGrey/i,
					/DodgerBlue/i,
					/FireBrick/i,
					/FloralWhite/i,
					/ForestGreen/i,
					/Fuchsia/i,
					/Gainsboro/i,
					/GhostWhite/i,
					/Gold/i,
					/GoldenRod/i,
					/Gray/i,
					/Grey/i,
					/Green/i,
					/GreenYellow/i,
					/HoneyDew/i,
					/HotPink/i,
					/IndianRed/i,
					/Indigo/i,
					/Ivory/i,
					/Khaki/i,
					/Lavender/i,
					/LavenderBlush/i,
					/LawnGreen/i,
					/LemonChiffon/i,
					/LightBlue/i,
					/LightCoral/i,
					/LightCyan/i,
					/LightGoldenRodYellow/i,
					/LightGray/i,
					/LightGrey/i,
					/LightGreen/i,
					/LightPink/i,
					/LightSalmon/i,
					/LightSeaGreen/i,
					/LightSkyBlue/i,
					/LightSlateGray/i,
					/LightSlateGrey/i,
					/LightSteelBlue/i,
					/LightYellow/i,
					/Lime/i,
					/LimeGreen/i,
					/Linen/i,
					/Magenta/i,
					/Maroon/i,
					/MediumAquaMarine/i,
					/MediumBlue/i,
					/MediumOrchid/i,
					/MediumPurple/i,
					/MediumSeaGreen/i,
					/MediumSlateBlue/i,
					/MediumSpringGreen/i,
					/MediumTurquoise/i,
					/MediumVioletRed/i,
					/MidnightBlue/i,
					/MintCream/i,
					/MistyRose/i,
					/Moccasin/i,
					/NavajoWhite/i,
					/Navy/i,
					/OldLace/i,
					/Olive/i,
					/OliveDrab/i,
					/Orange/i,
					/OrangeRed/i,
					/Orchid/i,
					/PaleGoldenRod/i,
					/PaleGreen/i,
					/PaleTurquoise/i,
					/PaleVioletRed/i,
					/PapayaWhip/i,
					/PeachPuff/i,
					/Peru/i,
					/Pink/i,
					/Plum/i,
					/PowderBlue/i,
					/Purple/i,
					/RebeccaPurple/i,
					/Red/i,
					/RosyBrown/i,
					/RoyalBlue/i,
					/SaddleBrown/i,
					/Salmon/i,
					/SandyBrown/i,
					/SeaGreen/i,
					/SeaShell/i,
					/Sienna/i,
					/Silver/i,
					/SkyBlue/i,
					/SlateBlue/i,
					/SlateGray/i,
					/SlateGrey/i,
					/Snow/i,
					/SpringGreen/i,
					/SteelBlue/i,
					/Tan/i,
					/Teal/i,
					/Thistle/i,
					/Tomato/i,
					/Turquoise/i,
					/Violet/i,
					/Wheat/i,
					/White/i,
					/WhiteSmoke/i,
					/Yellow/i,
					/YellowGreen/i,
				),
			),
	},
});

function create_non_uml($, ty) {
	return seq(
		token(`@start${ty}`),
		alias(repeat(choice("@", /[^@]/)), $[`${ty}_data`]),
		token(prec(1, `@end${ty}`)),
		repeat(/\r?\n/),
	);
}

function generate_connectors($) {
	const res = [];
	const color = seq("[#", $.color, "]");
	// to_right
	{
		const lines = ["-", "--", seq("-", color), seq("-", color, "-")];
		const arrows = [">", ">>", "\\", "\\\\", "/", "//"];
		const append = ["", "o", "x", "ox"];

		for (const line of lines) {
			for (const a of arrows) {
				for (const x of append) {
					const arr = [line, a, x].filter((x) => x !== "");
					res.push(seq(...arr));
				}
			}
		}
	}
	// to left
	{
		const lines = ["-", "--", seq("-", color), seq("-", color, "-")];
		const arrows = ["<", "<<", "/", "//", "\\", "\\\\"];
		const append = ["", "o", "x", "xo"];

		for (const line of lines) {
			for (const a of arrows) {
				for (const x of append) {
					const arr = [x, a, line].filter((x) => x !== "");
					res.push(seq(...arr));
				}
			}
		}
	}
	// two ways
	{
		const lines = ["-", "--", seq("-", color), seq("-", color, "-")];
		const left_arrows = ["<", "<<", "/", "//", "\\", "\\\\"];
		const right_arrows = [">", ">>", "\\", "\\\\", "/", "//"];
		const left_append = ["", "o", "x", "xo"];
		const right_append = ["", "o", "x", "ox"];

		for (const line of lines) {
			for (const la of left_arrows) {
				for (const ra of right_arrows) {
					for (const lx of left_append) {
						for (const rx of right_append) {
							const arr = [lx, la, line, ra, rx].filter((x) => x !== "");
							res.push(seq(...arr));
						}
					}
				}
			}
		}
	}

	return res;
}
