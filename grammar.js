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
				$.separator,
				$.ref_line,
				$.ref_block,
				$.delay_block,
				$.space,
				$.activation,
				$.return,
				$.create,
				$.pragma,
				$.title,
				$.title_block,
				$.box_block,
				$.footnote,
			),
		footnote: ($) => seq("hide", "footbox", $._NEWLINE),
		box_block: ($) =>
			seq(
				"box",
				alias(/\S[^#]+/, $.title),
				optional($.color),
				$._NEWLINE,
				repeat($.expression),
				choice("endbox", "end box"),
			),
		title: ($) => seq("title", $.line),
		title_block: ($) =>
			seq(/title\s*\r?\n/, repeat($.line), choice("endtitle", "end title")),
		pragma: ($) => seq("!pragma", "teoz", choice("true", "false")),
		create: ($) =>
			seq("create", $.participant_name, choice($._NEWLINE, $.line)),
		return: ($) => seq("return", $.line),
		space: ($) => choice(seq("|||", $._NEWLINE), seq("||", $.digit, "||")),
		activation: ($) =>
			seq(
				choice("activate", "destroy", "deactivate"),
				$.participant_name,
				optional($.color),
			),
		delay_title: ($) =>
			seq(
				"...",
				optional(seq(alias(/\S[^\r?\n\.]+/, $.content), "...")),
				$._NEWLINE,
			),
		delay_block: ($) =>
			prec.left(seq($.delay_title, repeat($.expression), $.delay_title)),
		ref_line: ($) =>
			seq("ref", "over", commaSep1($.participant_name), ":", $.line),
		ref_block: ($) =>
			seq(
				"ref",
				"over",
				commaSep1($.participant_name),
				$._NEWLINE,
				repeat($.line),
				"end ref",
			),
		separator: ($) => seq("==", /[^=]+/, "==", $._NEWLINE),
		label: ($) => seq(/\S[^\r?\n\[]*/, optional($.custom_label), $._NEWLINE),
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
					seq("left", optional(seq("of", commaSep1($.participant_name)))),
					seq("right", optional(seq("of", commaSep1($.participant_name)))),
					"across",
					seq("over", commaSep1($.participant_name)),
				),
				optional($.color),
				":",
				$.line,
			),
		block_note: ($) =>
			seq(
				"note",
				choice(
					seq("left", optional(seq("of", commaSep1($.participant_name)))),
					seq("right", optional(seq("of", commaSep1($.participant_name)))),
					"across",
					seq("over", commaSep1($.participant_name)),
				),
				optional($.color),
				$._NEWLINE,
				repeat($.line),
				choice("endnote", "end note"),
			),
		block_rnote: ($) =>
			seq(
				"rnote",
				choice(
					seq("left", optional(seq("of", commaSep1($.participant_name)))),
					seq("right", optional(seq("of", commaSep1($.participant_name)))),
					"across",
					seq("over", commaSep1($.participant_name)),
				),
				optional($.color),
				$._NEWLINE,
				repeat($.line),
				choice("endrnote", "end rnote"),
			),
		block_hnote: ($) =>
			seq(
				"note",
				choice(
					seq("left", optional(seq("of", commaSep1($.participant_name)))),
					seq("right", optional(seq("of", commaSep1($.participant_name)))),
					"across",
					seq("over", commaSep1($.participant_name)),
				),
				optional($.color),
				$._NEWLINE,
				repeat($.line),
				choice("endhnote", "end hnote"),
			),
		loop_block: ($) => seq("loop", $.label, repeat($.expression), "end"),
		group_block: ($) => seq("group", $.label, repeat($.expression), "end"),
		digit: ($) => /\d+/,
		// https://plantuml.com/skinparam
		skinparam: ($) =>
			seq(
				"skinparam",
				choice(
					$.skinparam_attr,
					seq("sequence", "{", repeat($.skinparam_attr), "}"),
				),
				$._NEWLINE,
			),
		skinparam_attr: ($) =>
			choice(
				seq(
					/sequenceMessageAlign/i,
					alias(choice("left", "right", "center"), $.align),
				),
				seq(/responseMessageBelowArrow/i, $.boolean_literal),
				seq(/maxMessageSize/i, $.digit),
				seq(/stereotypePosition/i, choice("top", "bottom")),
				seq(/sequenceArrowThickness/i, $.digit),
				seq(/roundcorner/i, $.digit),
				seq(/sequenceParticipant/i, /underline/i),
				seq(/backgroundColor/i, $.color),
				seq(/handwritten/i, $.boolean_literal),
				seq(/ArrowColor/i, $.color),
				seq(/ActorBorderColor/i, $.color),
				seq(/LifeLineBorderColor/i, $.color),
				seq(/LifeLineBackgroundColor/i, $.color),

				seq(/ParticipantBorderColor/i, $.color),
				seq(/ParticipantBackgroundColor/i, $.color),
				seq(/ParticipantFontName/i, $.color),
				seq(/ParticipantFontSize/i, $.digit),
				seq(/ParticipantFontColor/i, $.color),
				seq(/ActorBackgroundColor/i, $.color),
				seq(/ActorFontColor/i, $.color),
				seq(/ActorFontSize/i, $.digit),
				seq(/ActorFontName/i, $.font_name),
				seq(/ParticipantPadding/i, $.digit),
				seq(/BoxPadding/i, $.digit),
			),
		font_name: ($) => /\S+/,
		boolean_literal: ($) => choice("true", "false"),
		attribute: ($) =>
			prec.right(
				choice(
					seq("autoactivate", choice("on", "off")),
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
						repeat(choice($.color, $.attr_order, $.attr_alias)),
						optional($.stereotypes),
					),
				),
			),
		multiline: ($) => seq("[", repeat(choice(/[^\]]/, $.escape_char)), "]"),
		attr_alias: ($) => seq("as", alias(/\w+/, $.new_name)),
		attr_order: ($) => seq("order", alias(/\d+/, $.value)),
		string: ($) => seq('"', repeat(choice(/[^"]/, '\\"', $.escape_char)), '"'),
		escape_char: ($) => seq("\\", /./),
		anchor: ($) => seq("{", /[^}]+/, "}"),
		participant_name: ($) => seq(choice($.anchor, /\w+/, $.string)),
		stereotypes: ($) => seq("<<", alias(/[^>]*/, $.content), ">>"),
		sequence_diagram: ($) =>
			seq(
				optional($.anchor),
				choice(
					seq(alias($.participant_name, $.left), $.connector),
					$.iconnector,
				),
				choice(
					alias($.participant_name, $.right),
					alias(token.immediate("]"), $.outgoing),
				),
				optional($.stereotypes),
				optional($.attr_alias),
				repeat(choice("++", "--", "**", "!!")),
				optional($.color),
				optional(seq(":", alias(/[^\r?\n]+/, $.activity))),
			),
		connector: ($) => choice(...generate_connectors($)),
		iconnector: ($) => choice(...generate_incoming_connectors($)),

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
				seq(
					"#",
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
	const color = seq("[", $.color, "]");
	const lines = ["-", "--", seq("-", color), seq("-", color, "-")];
	const left_arrows = ["<", "<<", "/", "//", "\\", "\\\\"];
	const right_arrows = [">", ">>", "\\", "\\\\", "/", "//"];
	const append = ["", "o", "x"];
	// to_right
	for (const line of lines) {
		for (const a of right_arrows) {
			for (const x of append) {
				const arr = [line, a, x].filter((x) => x !== "");
				const marr = arr.map((v, i) => (i === 0 ? v : token.immediate(v)));
				res.push(seq(...marr));
			}
		}
	}

	// to left

	for (const line of lines) {
		for (const a of left_arrows) {
			for (const x of append) {
				const arr = [x, a, line].filter((x) => x !== "");
				const marr = arr.map((v, i) =>
					i === arr.length - 1 || i === 0 ? v : token.immediate(v),
				);
				res.push(seq(...marr));
			}
		}
	}

	// two ways
	for (const line of lines) {
		for (const la of left_arrows) {
			for (const ra of right_arrows) {
				for (const lx of append) {
					for (const rx of append) {
						const arr = [lx, la, line, ra, rx].filter((x) => x !== "");
						res.push(seq(...arr));
					}
				}
			}
		}
	}

	return res;
}

function generate_incoming_connectors($) {
	const res = [];
	const color = seq("[", $.color, "]");
	const lines = ["-", "--", seq("-", color), seq("-", color, "-")];
	const left_arrows = ["<", "<<", "/", "//", "\\", "\\\\"];
	const right_arrows = [">", ">>", "\\", "\\\\", "/", "//"];
	const append = ["", "o", "x"];
	// to_right

	{
		const lines = ["[-", "[--", seq("[-", color), seq("[-", color, "-")];
		for (const line of lines) {
			for (const a of right_arrows) {
				for (const x of append) {
					const arr = [line, a, x].filter((x) => x !== "");
					const marr = arr.map((v, i) => (i === 0 ? v : token.immediate(v)));
					res.push(seq(...marr));
				}
			}
		}
	}

	// to left
	{
		const append = ["[", "[o", "[x"];
		for (const line of lines) {
			for (const a of left_arrows) {
				for (const x of append) {
					const arr = [x, token.immediate(a), line];
					res.push(seq(...arr));
				}
			}
		}
	}

	// two ways
	{
		const lappend = ["[", "[o", "[x"];
		for (const line of lines) {
			for (const la of left_arrows) {
				for (const ra of right_arrows) {
					for (const lx of lappend) {
						for (const rx of append) {
							const arr = [lx, token.immediate(la), line, ra, rx].filter(
								(x) => x !== "",
							);
							res.push(seq(...arr));
						}
					}
				}
			}
		}
	}

	return res;
}
