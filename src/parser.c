#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 628
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 15
#define TOKEN_COUNT 101
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  aux_sym__NEWLINE_token1 = 1,
  anon_sym_ATstartuml = 2,
  anon_sym_ATenduml = 3,
  anon_sym_EQ_EQ = 4,
  aux_sym_separator_token1 = 5,
  aux_sym_label_token1 = 6,
  anon_sym_LBRACK = 7,
  aux_sym_custom_label_token1 = 8,
  anon_sym_RBRACK = 9,
  anon_sym_alt = 10,
  anon_sym_else = 11,
  anon_sym_end = 12,
  aux_sym_line_token1 = 13,
  anon_sym_SLASH = 14,
  anon_sym_note = 15,
  anon_sym_rnote = 16,
  anon_sym_hnote = 17,
  anon_sym_left = 18,
  anon_sym_right = 19,
  anon_sym_across = 20,
  anon_sym_over = 21,
  anon_sym_COMMA = 22,
  anon_sym_POUND = 23,
  anon_sym_COLON = 24,
  anon_sym_endnote = 25,
  anon_sym_endrnote = 26,
  anon_sym_endhnote = 27,
  anon_sym_loop = 28,
  anon_sym_group = 29,
  anon_sym_skinparam = 30,
  anon_sym_sequenceMessageAlign = 31,
  anon_sym_center = 32,
  anon_sym_responseMessageBelowArrow = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_autonumber = 36,
  anon_sym_inc = 37,
  anon_sym_resume = 38,
  aux_sym_attribute_token1 = 39,
  aux_sym_attribute_token2 = 40,
  aux_sym_attribute_token3 = 41,
  anon_sym_autonumberstop = 42,
  anon_sym_participant = 43,
  anon_sym_actor = 44,
  anon_sym_boundary = 45,
  anon_sym_control = 46,
  anon_sym_entity = 47,
  anon_sym_database = 48,
  anon_sym_collections = 49,
  anon_sym_queue = 50,
  aux_sym_multiline_token1 = 51,
  anon_sym_as = 52,
  aux_sym_attr_alias_token1 = 53,
  anon_sym_order = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_string_token1 = 56,
  anon_sym_BSLASH_DQUOTE = 57,
  anon_sym_BSLASH = 58,
  aux_sym_escape_char_token1 = 59,
  aux_sym_sequence_diagram_token1 = 60,
  anon_sym_DASH = 61,
  anon_sym_GT = 62,
  anon_sym_o = 63,
  anon_sym_x = 64,
  anon_sym_ox = 65,
  anon_sym_GT_GT = 66,
  anon_sym_BSLASH_BSLASH = 67,
  anon_sym_SLASH_SLASH = 68,
  anon_sym_DASH_DASH = 69,
  anon_sym_LBRACK_POUND = 70,
  anon_sym_LT = 71,
  anon_sym_xo = 72,
  anon_sym_LT_LT = 73,
  anon_sym_ATstartjson = 74,
  anon_sym_AT = 75,
  aux_sym_json_token1 = 76,
  anon_sym_ATendjson = 77,
  anon_sym_ATstartyaml = 78,
  anon_sym_ATendyaml = 79,
  anon_sym_ATstartebnf = 80,
  anon_sym_ATendebnf = 81,
  anon_sym_ATstartregex = 82,
  anon_sym_ATendregex = 83,
  anon_sym_ATstartditaa = 84,
  anon_sym_ATendditaa = 85,
  anon_sym_ATstartgantt = 86,
  anon_sym_ATendgantt = 87,
  anon_sym_ATstartchronology = 88,
  anon_sym_ATendchronology = 89,
  anon_sym_ATstartmindmap = 90,
  anon_sym_ATendmindmap = 91,
  anon_sym_ATstartwbs = 92,
  anon_sym_ATendwbs = 93,
  anon_sym_ATstartchen = 94,
  anon_sym_ATendchen = 95,
  anon_sym_SQUOTE = 96,
  aux_sym_comment_token1 = 97,
  anon_sym_SLASH_SQUOTE = 98,
  aux_sym_comment_token2 = 99,
  sym_color = 100,
  sym_diagram = 101,
  sym__NEWLINE = 102,
  sym_uml = 103,
  sym_expression = 104,
  sym_separator = 105,
  sym_label = 106,
  sym_custom_label = 107,
  sym_alt_block = 108,
  sym_line = 109,
  sym_line_note = 110,
  sym_block_note = 111,
  sym_block_rnote = 112,
  sym_block_hnote = 113,
  sym_loop_block = 114,
  sym_group_block = 115,
  sym_skinparam = 116,
  sym_boolean_literal = 117,
  sym_attribute = 118,
  sym_multiline = 119,
  sym_attr_alias = 120,
  sym_attr_order = 121,
  sym_string = 122,
  sym_escape_char = 123,
  sym_participant_name = 124,
  sym_sequence_diagram = 125,
  sym_connector = 126,
  sym_json = 127,
  sym_yaml = 128,
  sym_ebnf = 129,
  sym_regex = 130,
  sym_ditaa = 131,
  sym_gantt = 132,
  sym_chronology = 133,
  sym_mindmap = 134,
  sym_wbs = 135,
  sym_chen = 136,
  sym_comment = 137,
  aux_sym_uml_repeat1 = 138,
  aux_sym_alt_block_repeat1 = 139,
  aux_sym_line_note_repeat1 = 140,
  aux_sym_block_note_repeat1 = 141,
  aux_sym_attribute_repeat1 = 142,
  aux_sym_attribute_repeat2 = 143,
  aux_sym_multiline_repeat1 = 144,
  aux_sym_string_repeat1 = 145,
  aux_sym_json_repeat1 = 146,
  aux_sym_json_repeat2 = 147,
  alias_sym_chen_data = 148,
  alias_sym_chronology_data = 149,
  alias_sym_ditaa_data = 150,
  alias_sym_ebnf_data = 151,
  alias_sym_gantt_data = 152,
  alias_sym_json_data = 153,
  alias_sym_left = 154,
  alias_sym_mindmap_data = 155,
  alias_sym_name = 156,
  alias_sym_new_name = 157,
  alias_sym_regex_data = 158,
  alias_sym_right = 159,
  alias_sym_value = 160,
  alias_sym_wbs_data = 161,
  alias_sym_yaml_data = 162,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__NEWLINE_token1] = "_NEWLINE_token1",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_EQ_EQ] = "==",
  [aux_sym_separator_token1] = "separator_token1",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_custom_label_token1] = "content",
  [anon_sym_RBRACK] = "]",
  [anon_sym_alt] = "alt",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [aux_sym_line_token1] = "line_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_note] = "note",
  [anon_sym_rnote] = "rnote",
  [anon_sym_hnote] = "hnote",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_across] = "across",
  [anon_sym_over] = "over",
  [anon_sym_COMMA] = ",",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ":",
  [anon_sym_endnote] = "endnote",
  [anon_sym_endrnote] = "endrnote",
  [anon_sym_endhnote] = "endhnote",
  [anon_sym_loop] = "loop",
  [anon_sym_group] = "group",
  [anon_sym_skinparam] = "skinparam",
  [anon_sym_sequenceMessageAlign] = "sequenceMessageAlign",
  [anon_sym_center] = "align",
  [anon_sym_responseMessageBelowArrow] = "responseMessageBelowArrow",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_autonumber] = "autonumber",
  [anon_sym_inc] = "inc",
  [anon_sym_resume] = "resume",
  [aux_sym_attribute_token1] = "attribute_token1",
  [aux_sym_attribute_token2] = "attribute_token2",
  [aux_sym_attribute_token3] = "attribute_token3",
  [anon_sym_autonumberstop] = "autonumber stop",
  [anon_sym_participant] = "kind",
  [anon_sym_actor] = "kind",
  [anon_sym_boundary] = "kind",
  [anon_sym_control] = "kind",
  [anon_sym_entity] = "kind",
  [anon_sym_database] = "kind",
  [anon_sym_collections] = "kind",
  [anon_sym_queue] = "kind",
  [aux_sym_multiline_token1] = "multiline_token1",
  [anon_sym_as] = "as",
  [aux_sym_attr_alias_token1] = "attr_alias_token1",
  [anon_sym_order] = "order",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_char_token1] = "escape_char_token1",
  [aux_sym_sequence_diagram_token1] = "activity",
  [anon_sym_DASH] = "-",
  [anon_sym_GT] = ">",
  [anon_sym_o] = "o",
  [anon_sym_x] = "x",
  [anon_sym_ox] = "ox",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LBRACK_POUND] = "[#",
  [anon_sym_LT] = "<",
  [anon_sym_xo] = "xo",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_ATstartjson] = "@startjson",
  [anon_sym_AT] = "@",
  [aux_sym_json_token1] = "json_token1",
  [anon_sym_ATendjson] = "@endjson",
  [anon_sym_ATstartyaml] = "@startyaml",
  [anon_sym_ATendyaml] = "@endyaml",
  [anon_sym_ATstartebnf] = "@startebnf",
  [anon_sym_ATendebnf] = "@endebnf",
  [anon_sym_ATstartregex] = "@startregex",
  [anon_sym_ATendregex] = "@endregex",
  [anon_sym_ATstartditaa] = "@startditaa",
  [anon_sym_ATendditaa] = "@endditaa",
  [anon_sym_ATstartgantt] = "@startgantt",
  [anon_sym_ATendgantt] = "@endgantt",
  [anon_sym_ATstartchronology] = "@startchronology",
  [anon_sym_ATendchronology] = "@endchronology",
  [anon_sym_ATstartmindmap] = "@startmindmap",
  [anon_sym_ATendmindmap] = "@endmindmap",
  [anon_sym_ATstartwbs] = "@startwbs",
  [anon_sym_ATendwbs] = "@endwbs",
  [anon_sym_ATstartchen] = "@startchen",
  [anon_sym_ATendchen] = "@endchen",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_SQUOTE] = "/'",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_color] = "color",
  [sym_diagram] = "diagram",
  [sym__NEWLINE] = "_NEWLINE",
  [sym_uml] = "uml",
  [sym_expression] = "expression",
  [sym_separator] = "separator",
  [sym_label] = "label",
  [sym_custom_label] = "custom_label",
  [sym_alt_block] = "alt_block",
  [sym_line] = "line",
  [sym_line_note] = "line_note",
  [sym_block_note] = "block_note",
  [sym_block_rnote] = "block_rnote",
  [sym_block_hnote] = "block_hnote",
  [sym_loop_block] = "loop_block",
  [sym_group_block] = "group_block",
  [sym_skinparam] = "skinparam",
  [sym_boolean_literal] = "boolean_literal",
  [sym_attribute] = "attribute",
  [sym_multiline] = "multiline",
  [sym_attr_alias] = "attr_alias",
  [sym_attr_order] = "attr_order",
  [sym_string] = "string",
  [sym_escape_char] = "escape_char",
  [sym_participant_name] = "participant_name",
  [sym_sequence_diagram] = "sequence_diagram",
  [sym_connector] = "connector",
  [sym_json] = "json",
  [sym_yaml] = "yaml",
  [sym_ebnf] = "ebnf",
  [sym_regex] = "regex",
  [sym_ditaa] = "ditaa",
  [sym_gantt] = "gantt",
  [sym_chronology] = "chronology",
  [sym_mindmap] = "mindmap",
  [sym_wbs] = "wbs",
  [sym_chen] = "chen",
  [sym_comment] = "comment",
  [aux_sym_uml_repeat1] = "uml_repeat1",
  [aux_sym_alt_block_repeat1] = "alt_block_repeat1",
  [aux_sym_line_note_repeat1] = "line_note_repeat1",
  [aux_sym_block_note_repeat1] = "block_note_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_attribute_repeat2] = "attribute_repeat2",
  [aux_sym_multiline_repeat1] = "multiline_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_json_repeat1] = "json_repeat1",
  [aux_sym_json_repeat2] = "json_repeat2",
  [alias_sym_chen_data] = "chen_data",
  [alias_sym_chronology_data] = "chronology_data",
  [alias_sym_ditaa_data] = "ditaa_data",
  [alias_sym_ebnf_data] = "ebnf_data",
  [alias_sym_gantt_data] = "gantt_data",
  [alias_sym_json_data] = "json_data",
  [alias_sym_left] = "left",
  [alias_sym_mindmap_data] = "mindmap_data",
  [alias_sym_name] = "name",
  [alias_sym_new_name] = "new_name",
  [alias_sym_regex_data] = "regex_data",
  [alias_sym_right] = "right",
  [alias_sym_value] = "value",
  [alias_sym_wbs_data] = "wbs_data",
  [alias_sym_yaml_data] = "yaml_data",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__NEWLINE_token1] = aux_sym__NEWLINE_token1,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [aux_sym_separator_token1] = aux_sym_separator_token1,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_custom_label_token1] = aux_sym_custom_label_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_line_token1] = aux_sym_line_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_rnote] = anon_sym_rnote,
  [anon_sym_hnote] = anon_sym_hnote,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_across] = anon_sym_across,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_endnote] = anon_sym_endnote,
  [anon_sym_endrnote] = anon_sym_endrnote,
  [anon_sym_endhnote] = anon_sym_endhnote,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_skinparam] = anon_sym_skinparam,
  [anon_sym_sequenceMessageAlign] = anon_sym_sequenceMessageAlign,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_responseMessageBelowArrow] = anon_sym_responseMessageBelowArrow,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_autonumber] = anon_sym_autonumber,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_resume] = anon_sym_resume,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [aux_sym_attribute_token2] = aux_sym_attribute_token2,
  [aux_sym_attribute_token3] = aux_sym_attribute_token3,
  [anon_sym_autonumberstop] = anon_sym_autonumberstop,
  [anon_sym_participant] = anon_sym_participant,
  [anon_sym_actor] = anon_sym_participant,
  [anon_sym_boundary] = anon_sym_participant,
  [anon_sym_control] = anon_sym_participant,
  [anon_sym_entity] = anon_sym_participant,
  [anon_sym_database] = anon_sym_participant,
  [anon_sym_collections] = anon_sym_participant,
  [anon_sym_queue] = anon_sym_participant,
  [aux_sym_multiline_token1] = aux_sym_multiline_token1,
  [anon_sym_as] = anon_sym_as,
  [aux_sym_attr_alias_token1] = aux_sym_attr_alias_token1,
  [anon_sym_order] = anon_sym_order,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_char_token1] = aux_sym_escape_char_token1,
  [aux_sym_sequence_diagram_token1] = aux_sym_sequence_diagram_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_ox] = anon_sym_ox,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LBRACK_POUND] = anon_sym_LBRACK_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_xo] = anon_sym_xo,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_ATstartjson] = anon_sym_ATstartjson,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_json_token1] = aux_sym_json_token1,
  [anon_sym_ATendjson] = anon_sym_ATendjson,
  [anon_sym_ATstartyaml] = anon_sym_ATstartyaml,
  [anon_sym_ATendyaml] = anon_sym_ATendyaml,
  [anon_sym_ATstartebnf] = anon_sym_ATstartebnf,
  [anon_sym_ATendebnf] = anon_sym_ATendebnf,
  [anon_sym_ATstartregex] = anon_sym_ATstartregex,
  [anon_sym_ATendregex] = anon_sym_ATendregex,
  [anon_sym_ATstartditaa] = anon_sym_ATstartditaa,
  [anon_sym_ATendditaa] = anon_sym_ATendditaa,
  [anon_sym_ATstartgantt] = anon_sym_ATstartgantt,
  [anon_sym_ATendgantt] = anon_sym_ATendgantt,
  [anon_sym_ATstartchronology] = anon_sym_ATstartchronology,
  [anon_sym_ATendchronology] = anon_sym_ATendchronology,
  [anon_sym_ATstartmindmap] = anon_sym_ATstartmindmap,
  [anon_sym_ATendmindmap] = anon_sym_ATendmindmap,
  [anon_sym_ATstartwbs] = anon_sym_ATstartwbs,
  [anon_sym_ATendwbs] = anon_sym_ATendwbs,
  [anon_sym_ATstartchen] = anon_sym_ATstartchen,
  [anon_sym_ATendchen] = anon_sym_ATendchen,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_SQUOTE] = anon_sym_SLASH_SQUOTE,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_color] = sym_color,
  [sym_diagram] = sym_diagram,
  [sym__NEWLINE] = sym__NEWLINE,
  [sym_uml] = sym_uml,
  [sym_expression] = sym_expression,
  [sym_separator] = sym_separator,
  [sym_label] = sym_label,
  [sym_custom_label] = sym_custom_label,
  [sym_alt_block] = sym_alt_block,
  [sym_line] = sym_line,
  [sym_line_note] = sym_line_note,
  [sym_block_note] = sym_block_note,
  [sym_block_rnote] = sym_block_rnote,
  [sym_block_hnote] = sym_block_hnote,
  [sym_loop_block] = sym_loop_block,
  [sym_group_block] = sym_group_block,
  [sym_skinparam] = sym_skinparam,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_attribute] = sym_attribute,
  [sym_multiline] = sym_multiline,
  [sym_attr_alias] = sym_attr_alias,
  [sym_attr_order] = sym_attr_order,
  [sym_string] = sym_string,
  [sym_escape_char] = sym_escape_char,
  [sym_participant_name] = sym_participant_name,
  [sym_sequence_diagram] = sym_sequence_diagram,
  [sym_connector] = sym_connector,
  [sym_json] = sym_json,
  [sym_yaml] = sym_yaml,
  [sym_ebnf] = sym_ebnf,
  [sym_regex] = sym_regex,
  [sym_ditaa] = sym_ditaa,
  [sym_gantt] = sym_gantt,
  [sym_chronology] = sym_chronology,
  [sym_mindmap] = sym_mindmap,
  [sym_wbs] = sym_wbs,
  [sym_chen] = sym_chen,
  [sym_comment] = sym_comment,
  [aux_sym_uml_repeat1] = aux_sym_uml_repeat1,
  [aux_sym_alt_block_repeat1] = aux_sym_alt_block_repeat1,
  [aux_sym_line_note_repeat1] = aux_sym_line_note_repeat1,
  [aux_sym_block_note_repeat1] = aux_sym_block_note_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_attribute_repeat2] = aux_sym_attribute_repeat2,
  [aux_sym_multiline_repeat1] = aux_sym_multiline_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_json_repeat1] = aux_sym_json_repeat1,
  [aux_sym_json_repeat2] = aux_sym_json_repeat2,
  [alias_sym_chen_data] = alias_sym_chen_data,
  [alias_sym_chronology_data] = alias_sym_chronology_data,
  [alias_sym_ditaa_data] = alias_sym_ditaa_data,
  [alias_sym_ebnf_data] = alias_sym_ebnf_data,
  [alias_sym_gantt_data] = alias_sym_gantt_data,
  [alias_sym_json_data] = alias_sym_json_data,
  [alias_sym_left] = alias_sym_left,
  [alias_sym_mindmap_data] = alias_sym_mindmap_data,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_new_name] = alias_sym_new_name,
  [alias_sym_regex_data] = alias_sym_regex_data,
  [alias_sym_right] = alias_sym_right,
  [alias_sym_value] = alias_sym_value,
  [alias_sym_wbs_data] = alias_sym_wbs_data,
  [alias_sym_yaml_data] = alias_sym_yaml_data,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__NEWLINE_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATstartuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenduml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_separator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_custom_label_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_across] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endrnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endhnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skinparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequenceMessageAlign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_responseMessageBelowArrow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autonumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resume] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_autonumberstop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_participant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_actor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_boundary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_database] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_collections] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_queue] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_multiline_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attr_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_order] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_diagram_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATendjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartyaml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendyaml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartebnf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendebnf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartregex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendregex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartditaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendditaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartgantt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendgantt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartchronology] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendchronology] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartmindmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendmindmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartwbs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendwbs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartchen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendchen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram] = {
    .visible = true,
    .named = true,
  },
  [sym__NEWLINE] = {
    .visible = false,
    .named = true,
  },
  [sym_uml] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_label] = {
    .visible = true,
    .named = true,
  },
  [sym_alt_block] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_line_note] = {
    .visible = true,
    .named = true,
  },
  [sym_block_note] = {
    .visible = true,
    .named = true,
  },
  [sym_block_rnote] = {
    .visible = true,
    .named = true,
  },
  [sym_block_hnote] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_block] = {
    .visible = true,
    .named = true,
  },
  [sym_group_block] = {
    .visible = true,
    .named = true,
  },
  [sym_skinparam] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_order] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_char] = {
    .visible = true,
    .named = true,
  },
  [sym_participant_name] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_diagram] = {
    .visible = true,
    .named = true,
  },
  [sym_connector] = {
    .visible = true,
    .named = true,
  },
  [sym_json] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml] = {
    .visible = true,
    .named = true,
  },
  [sym_ebnf] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_ditaa] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt] = {
    .visible = true,
    .named = true,
  },
  [sym_chronology] = {
    .visible = true,
    .named = true,
  },
  [sym_mindmap] = {
    .visible = true,
    .named = true,
  },
  [sym_wbs] = {
    .visible = true,
    .named = true,
  },
  [sym_chen] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_uml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alt_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_note_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_note_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_chen_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_chronology_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_ditaa_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_ebnf_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_json_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_left] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_mindmap_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_new_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_regex_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_right] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_wbs_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_yaml_data] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_name,
  },
  [2] = {
    [1] = alias_sym_json_data,
  },
  [3] = {
    [1] = alias_sym_yaml_data,
  },
  [4] = {
    [1] = alias_sym_ebnf_data,
  },
  [5] = {
    [1] = alias_sym_regex_data,
  },
  [6] = {
    [1] = alias_sym_ditaa_data,
  },
  [7] = {
    [1] = alias_sym_gantt_data,
  },
  [8] = {
    [1] = alias_sym_chronology_data,
  },
  [9] = {
    [1] = alias_sym_mindmap_data,
  },
  [10] = {
    [1] = alias_sym_wbs_data,
  },
  [11] = {
    [1] = alias_sym_chen_data,
  },
  [12] = {
    [2] = anon_sym_center,
  },
  [13] = {
    [0] = alias_sym_left,
    [2] = alias_sym_right,
  },
  [14] = {
    [1] = alias_sym_new_name,
  },
  [15] = {
    [1] = alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_participant_name, 4,
    sym_participant_name,
    alias_sym_left,
    alias_sym_name,
    alias_sym_right,
  aux_sym_json_repeat1, 11,
    aux_sym_json_repeat1,
    alias_sym_chen_data,
    alias_sym_chronology_data,
    alias_sym_ditaa_data,
    alias_sym_ebnf_data,
    alias_sym_gantt_data,
    alias_sym_json_data,
    alias_sym_mindmap_data,
    alias_sym_regex_data,
    alias_sym_wbs_data,
    alias_sym_yaml_data,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 4,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 9,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 12,
  [19] = 19,
  [20] = 16,
  [21] = 19,
  [22] = 15,
  [23] = 12,
  [24] = 16,
  [25] = 19,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 31,
  [36] = 32,
  [37] = 30,
  [38] = 32,
  [39] = 30,
  [40] = 31,
  [41] = 33,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 42,
  [50] = 50,
  [51] = 44,
  [52] = 52,
  [53] = 42,
  [54] = 54,
  [55] = 55,
  [56] = 43,
  [57] = 57,
  [58] = 44,
  [59] = 47,
  [60] = 57,
  [61] = 61,
  [62] = 54,
  [63] = 50,
  [64] = 50,
  [65] = 52,
  [66] = 52,
  [67] = 55,
  [68] = 47,
  [69] = 48,
  [70] = 55,
  [71] = 54,
  [72] = 43,
  [73] = 42,
  [74] = 48,
  [75] = 57,
  [76] = 76,
  [77] = 61,
  [78] = 42,
  [79] = 48,
  [80] = 43,
  [81] = 44,
  [82] = 43,
  [83] = 44,
  [84] = 42,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 48,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 76,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 48,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 76,
  [131] = 131,
  [132] = 117,
  [133] = 99,
  [134] = 108,
  [135] = 100,
  [136] = 109,
  [137] = 101,
  [138] = 104,
  [139] = 118,
  [140] = 86,
  [141] = 131,
  [142] = 118,
  [143] = 107,
  [144] = 114,
  [145] = 108,
  [146] = 109,
  [147] = 110,
  [148] = 112,
  [149] = 113,
  [150] = 115,
  [151] = 87,
  [152] = 102,
  [153] = 119,
  [154] = 121,
  [155] = 122,
  [156] = 123,
  [157] = 124,
  [158] = 125,
  [159] = 126,
  [160] = 127,
  [161] = 128,
  [162] = 129,
  [163] = 103,
  [164] = 89,
  [165] = 90,
  [166] = 119,
  [167] = 131,
  [168] = 91,
  [169] = 87,
  [170] = 88,
  [171] = 89,
  [172] = 90,
  [173] = 91,
  [174] = 104,
  [175] = 92,
  [176] = 88,
  [177] = 94,
  [178] = 95,
  [179] = 96,
  [180] = 97,
  [181] = 85,
  [182] = 99,
  [183] = 100,
  [184] = 101,
  [185] = 102,
  [186] = 103,
  [187] = 110,
  [188] = 116,
  [189] = 112,
  [190] = 113,
  [191] = 121,
  [192] = 115,
  [193] = 114,
  [194] = 98,
  [195] = 116,
  [196] = 122,
  [197] = 123,
  [198] = 124,
  [199] = 92,
  [200] = 107,
  [201] = 125,
  [202] = 126,
  [203] = 106,
  [204] = 93,
  [205] = 127,
  [206] = 94,
  [207] = 117,
  [208] = 128,
  [209] = 129,
  [210] = 95,
  [211] = 96,
  [212] = 97,
  [213] = 86,
  [214] = 85,
  [215] = 93,
  [216] = 44,
  [217] = 42,
  [218] = 43,
  [219] = 219,
  [220] = 219,
  [221] = 219,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 231,
  [233] = 233,
  [234] = 231,
  [235] = 235,
  [236] = 236,
  [237] = 235,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 242,
  [247] = 235,
  [248] = 242,
  [249] = 235,
  [250] = 242,
  [251] = 245,
  [252] = 242,
  [253] = 235,
  [254] = 242,
  [255] = 235,
  [256] = 242,
  [257] = 242,
  [258] = 235,
  [259] = 242,
  [260] = 235,
  [261] = 240,
  [262] = 241,
  [263] = 244,
  [264] = 245,
  [265] = 240,
  [266] = 241,
  [267] = 244,
  [268] = 235,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 272,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 269,
  [283] = 273,
  [284] = 270,
  [285] = 270,
  [286] = 286,
  [287] = 279,
  [288] = 280,
  [289] = 289,
  [290] = 277,
  [291] = 281,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 275,
  [296] = 296,
  [297] = 277,
  [298] = 298,
  [299] = 272,
  [300] = 279,
  [301] = 280,
  [302] = 281,
  [303] = 269,
  [304] = 273,
  [305] = 275,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 298,
  [311] = 274,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 42,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 307,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 321,
  [340] = 340,
  [341] = 341,
  [342] = 321,
  [343] = 343,
  [344] = 321,
  [345] = 345,
  [346] = 321,
  [347] = 347,
  [348] = 321,
  [349] = 349,
  [350] = 321,
  [351] = 321,
  [352] = 319,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 332,
  [357] = 357,
  [358] = 358,
  [359] = 312,
  [360] = 360,
  [361] = 361,
  [362] = 308,
  [363] = 335,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 309,
  [368] = 368,
  [369] = 319,
  [370] = 370,
  [371] = 332,
  [372] = 372,
  [373] = 357,
  [374] = 365,
  [375] = 312,
  [376] = 366,
  [377] = 377,
  [378] = 357,
  [379] = 334,
  [380] = 335,
  [381] = 43,
  [382] = 321,
  [383] = 365,
  [384] = 366,
  [385] = 309,
  [386] = 321,
  [387] = 358,
  [388] = 377,
  [389] = 44,
  [390] = 313,
  [391] = 328,
  [392] = 336,
  [393] = 353,
  [394] = 358,
  [395] = 377,
  [396] = 313,
  [397] = 328,
  [398] = 336,
  [399] = 353,
  [400] = 314,
  [401] = 315,
  [402] = 316,
  [403] = 355,
  [404] = 370,
  [405] = 306,
  [406] = 364,
  [407] = 308,
  [408] = 314,
  [409] = 315,
  [410] = 316,
  [411] = 355,
  [412] = 370,
  [413] = 306,
  [414] = 364,
  [415] = 334,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 417,
  [420] = 420,
  [421] = 417,
  [422] = 417,
  [423] = 417,
  [424] = 424,
  [425] = 417,
  [426] = 114,
  [427] = 116,
  [428] = 428,
  [429] = 429,
  [430] = 428,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 428,
  [444] = 429,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 417,
  [449] = 432,
  [450] = 417,
  [451] = 451,
  [452] = 360,
  [453] = 433,
  [454] = 433,
  [455] = 455,
  [456] = 432,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 322,
  [470] = 470,
  [471] = 429,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 417,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 417,
  [486] = 486,
  [487] = 474,
  [488] = 474,
  [489] = 489,
  [490] = 470,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 496,
  [500] = 500,
  [501] = 501,
  [502] = 497,
  [503] = 500,
  [504] = 492,
  [505] = 505,
  [506] = 497,
  [507] = 501,
  [508] = 495,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 496,
  [513] = 114,
  [514] = 501,
  [515] = 116,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 509,
  [525] = 500,
  [526] = 501,
  [527] = 511,
  [528] = 528,
  [529] = 510,
  [530] = 518,
  [531] = 519,
  [532] = 520,
  [533] = 521,
  [534] = 534,
  [535] = 523,
  [536] = 509,
  [537] = 501,
  [538] = 518,
  [539] = 519,
  [540] = 520,
  [541] = 492,
  [542] = 521,
  [543] = 523,
  [544] = 495,
  [545] = 545,
  [546] = 510,
  [547] = 511,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 554,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 551,
  [561] = 561,
  [562] = 559,
  [563] = 563,
  [564] = 564,
  [565] = 553,
  [566] = 552,
  [567] = 567,
  [568] = 548,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 548,
  [576] = 576,
  [577] = 572,
  [578] = 554,
  [579] = 579,
  [580] = 558,
  [581] = 564,
  [582] = 582,
  [583] = 558,
  [584] = 573,
  [585] = 571,
  [586] = 586,
  [587] = 549,
  [588] = 574,
  [589] = 553,
  [590] = 590,
  [591] = 551,
  [592] = 550,
  [593] = 571,
  [594] = 569,
  [595] = 573,
  [596] = 574,
  [597] = 582,
  [598] = 553,
  [599] = 599,
  [600] = 552,
  [601] = 601,
  [602] = 602,
  [603] = 43,
  [604] = 549,
  [605] = 553,
  [606] = 576,
  [607] = 563,
  [608] = 608,
  [609] = 602,
  [610] = 582,
  [611] = 44,
  [612] = 608,
  [613] = 613,
  [614] = 572,
  [615] = 553,
  [616] = 616,
  [617] = 550,
  [618] = 618,
  [619] = 576,
  [620] = 563,
  [621] = 608,
  [622] = 602,
  [623] = 569,
  [624] = 624,
  [625] = 601,
  [626] = 626,
  [627] = 627,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(680);
      ADVANCE_MAP(
        '"', 866,
        '#', 735,
        '\'', 941,
        ',', 734,
        '-', 882,
        '/', 723,
        ':', 736,
        '<', 895,
        '=', 44,
        '>', 883,
        '@', 899,
        '[', 690,
        '\\', 873,
        ']', 694,
        'o', 884,
        'x', 886,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 681,
        '\r', 1,
        '"', 866,
        '#', 735,
        '\'', 941,
        ',', 734,
        '/', 35,
        ':', 736,
        'i', 178,
        'r', 115,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(877);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(876);
      if (lookahead != 0) ADVANCE(875);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(942);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(949);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(949);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(952);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(949);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 866,
        '#', 735,
        '\'', 941,
        '/', 722,
        '=', 44,
        '@', 119,
        '[', 690,
        'a', 778,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 813,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'o', 835,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 866,
        '#', 735,
        '\'', 941,
        '/', 722,
        '=', 44,
        '[', 690,
        'a', 778,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 801,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'o', 835,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 866,
        '#', 735,
        '\'', 941,
        '/', 722,
        '=', 44,
        '[', 690,
        'a', 778,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 807,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'o', 835,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 866,
        '\'', 941,
        '-', 881,
        '/', 723,
        ':', 736,
        '<', 895,
        '=', 44,
        '>', 883,
        '@', 239,
        '[', 690,
        '\\', 874,
        'a', 779,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 801,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '-') ADVANCE(881);
      if (lookahead == '/') ADVANCE(723);
      if (lookahead == '>') ADVANCE(883);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(874);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 866,
        '\'', 941,
        '/', 723,
        ':', 736,
        '=', 44,
        '>', 883,
        '@', 119,
        '[', 21,
        '\\', 874,
        'a', 779,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 813,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 866,
        '\'', 941,
        '/', 722,
        ':', 736,
        '=', 44,
        '@', 119,
        'a', 778,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 813,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 866,
        '\'', 941,
        '/', 722,
        ':', 736,
        '=', 44,
        '[', 690,
        'a', 779,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 807,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 866,
        '\'', 941,
        '/', 722,
        ':', 736,
        '=', 44,
        'a', 778,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 801,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 866,
        '\'', 941,
        '/', 722,
        ':', 736,
        '=', 44,
        'a', 778,
        'b', 818,
        'c', 817,
        'd', 771,
        'e', 807,
        'g', 840,
        'h', 814,
        'l', 824,
        'n', 823,
        'p', 769,
        'q', 857,
        'r', 815,
        's', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 'x') ADVANCE(888);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(872);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(868);
      if (lookahead != 0) ADVANCE(867);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '#', 735,
        '\'', 941,
        ',', 734,
        '-', 882,
        '/', 723,
        ':', 736,
        '<', 895,
        '\\', 874,
        'c', 116,
        'e', 155,
        'f', 59,
        'h', 195,
        'l', 107,
        'n', 204,
        'o', 884,
        'r', 112,
        's', 95,
        't', 220,
        'x', 887,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(894);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 941,
        '/', 35,
        'A', 478,
        'L', 271,
        'O', 475,
        'R', 366,
        'a', 71,
        'l', 48,
        'o', 262,
        'r', 142,
        'B', 367,
        'b', 367,
        'C', 272,
        'c', 272,
        'D', 273,
        'd', 273,
        'F', 448,
        'f', 448,
        'G', 290,
        'g', 290,
        'H', 537,
        'h', 537,
        'I', 517,
        'i', 517,
        'K', 432,
        'k', 432,
        'M', 274,
        'm', 274,
        'N', 275,
        'n', 275,
        'P', 276,
        'p', 276,
        'S', 277,
        's', 277,
        'T', 284,
        't', 284,
        'V', 452,
        'v', 452,
        'W', 430,
        'w', 430,
        'Y', 378,
        'y', 378,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(871);
      if (lookahead == ']') ADVANCE(694);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0) ADVANCE(764);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(911);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(901);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(912);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(902);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(913);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(903);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(914);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(904);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(915);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(905);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(916);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(906);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(917);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(907);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(918);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(908);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(919);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(909);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(920);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(951);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(944);
      if (lookahead == '/') ADVANCE(688);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(945);
      if (lookahead == '/') ADVANCE(879);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(880);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(947);
      if (lookahead == '/') ADVANCE(686);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(687);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(943);
      if (lookahead == '/') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\'') ADVANCE(953);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(684);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(222);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(152);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(120);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(508);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 49:
      if (lookahead == 'M') ADVANCE(114);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(121);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(930);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(929);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 69:
      ADVANCE_MAP(
        'c', 136,
        'd', 141,
        'e', 65,
        'g', 57,
        'j', 226,
        'm', 144,
        'r', 93,
        'w', 66,
        'y', 51,
      );
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(749);
      END_STATE();
    case 71:
      ADVANCE_MAP(
        'c', 224,
        'L', 449,
        'l', 449,
        'N', 625,
        'n', 625,
        'Q', 644,
        'q', 644,
        'Z', 651,
        'z', 651,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        'c', 140,
        'd', 145,
        'e', 68,
        'g', 61,
        'j', 240,
        'm', 146,
        'r', 118,
        'u', 160,
        'w', 67,
        'y', 63,
      );
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(698);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(926);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(925);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(246);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(247);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 147:
      if (lookahead == 'j') ADVANCE(226);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(924);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(923);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(940);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(922);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(939);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(898);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(936);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(935);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(755);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 216:
      if (lookahead == 'q') ADVANCE(260);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(977);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(938);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(937);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(932);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(931);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 262:
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 263:
      if (lookahead == 'w') ADVANCE(745);
      END_STATE();
    case 264:
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 265:
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 266:
      if (lookahead == 'x') ADVANCE(928);
      END_STATE();
    case 267:
      if (lookahead == 'x') ADVANCE(927);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(934);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(933);
      END_STATE();
    case 270:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 271:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 272:
      ADVANCE_MAP(
        'A', 349,
        'a', 349,
        'H', 299,
        'h', 299,
        'O', 577,
        'o', 577,
        'R', 451,
        'r', 451,
        'Y', 283,
        'y', 283,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 273:
      ADVANCE_MAP(
        'A', 578,
        'a', 578,
        'E', 369,
        'e', 369,
        'I', 506,
        'i', 506,
        'O', 361,
        'o', 361,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 274:
      ADVANCE_MAP(
        'A', 427,
        'a', 427,
        'E', 355,
        'e', 355,
        'I', 353,
        'i', 353,
        'O', 337,
        'o', 337,
      );
      END_STATE();
    case 275:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 276:
      ADVANCE_MAP(
        'A', 488,
        'a', 488,
        'E', 310,
        'e', 310,
        'I', 518,
        'i', 518,
        'L', 641,
        'l', 641,
        'O', 660,
        'o', 660,
        'U', 584,
        'u', 584,
      );
      END_STATE();
    case 277:
      ADVANCE_MAP(
        'A', 352,
        'a', 352,
        'E', 280,
        'e', 280,
        'I', 388,
        'i', 388,
        'K', 666,
        'k', 666,
        'L', 291,
        'l', 291,
        'N', 542,
        'n', 542,
        'P', 602,
        'p', 602,
        'T', 404,
        't', 404,
      );
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(960);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 281:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(967);
      END_STATE();
    case 282:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(960);
      END_STATE();
    case 283:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 284:
      ADVANCE_MAP(
        'A', 514,
        'a', 514,
        'E', 295,
        'e', 295,
        'H', 463,
        'h', 463,
        'O', 510,
        'o', 510,
        'R', 302,
        'r', 302,
        'U', 600,
        'u', 600,
      );
      END_STATE();
    case 285:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 286:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 288:
      ADVANCE_MAP(
        'A', 574,
        'a', 574,
        'B', 482,
        'b', 482,
        'O', 606,
        'o', 606,
        'P', 640,
        'p', 640,
        'S', 402,
        's', 402,
        'T', 643,
        't', 643,
        'V', 468,
        'v', 468,
      );
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 290:
      ADVANCE_MAP(
        'A', 453,
        'a', 453,
        'H', 539,
        'h', 539,
        'O', 479,
        'o', 479,
        'R', 285,
        'r', 285,
      );
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 292:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 295:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 296:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      END_STATE();
    case 298:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 299:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 300:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 301:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 302:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 303:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 304:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 305:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 306:
      ADVANCE_MAP(
        'A', 495,
        'a', 495,
        'E', 311,
        'e', 311,
        'K', 666,
        'k', 666,
        'L', 319,
        'l', 319,
        'T', 404,
        't', 404,
      );
      END_STATE();
    case 307:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 308:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(538);
      END_STATE();
    case 309:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 310:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 311:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 313:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 314:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 315:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 316:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 317:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 318:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 319:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 320:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 321:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 322:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 323:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(960);
      END_STATE();
    case 324:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      END_STATE();
    case 325:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(482);
      END_STATE();
    case 326:
      ADVANCE_MAP(
        'B', 482,
        'b', 482,
        'C', 557,
        'c', 557,
        'G', 564,
        'g', 564,
        'P', 443,
        'p', 443,
        'S', 306,
        's', 306,
        'Y', 412,
        'y', 412,
      );
      END_STATE();
    case 327:
      ADVANCE_MAP(
        'B', 482,
        'b', 482,
        'C', 667,
        'c', 667,
        'G', 561,
        'g', 561,
        'K', 432,
        'k', 432,
        'M', 318,
        'm', 318,
        'O', 491,
        'o', 491,
        'R', 387,
        'r', 387,
        'S', 307,
        's', 307,
        'T', 643,
        't', 643,
        'V', 452,
        'v', 452,
      );
      END_STATE();
    case 328:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(482);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(582);
      END_STATE();
    case 329:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(581);
      END_STATE();
    case 330:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(601);
      END_STATE();
    case 331:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(559);
      END_STATE();
    case 332:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(493);
      END_STATE();
    case 333:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 334:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 335:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 336:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 337:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 338:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 339:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(562);
      END_STATE();
    case 340:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 341:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 342:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 343:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 344:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 345:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 346:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 347:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(599);
      END_STATE();
    case 348:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      END_STATE();
    case 349:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(977);
      END_STATE();
    case 350:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(965);
      END_STATE();
    case 351:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 352:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(363);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(509);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 353:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(524);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      END_STATE();
    case 354:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 355:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 356:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(673);
      END_STATE();
    case 357:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(396);
      END_STATE();
    case 358:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 359:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 360:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(668);
      END_STATE();
    case 361:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 362:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 363:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 364:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 365:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 367:
      ADVANCE_MAP(
        'E', 445,
        'e', 445,
        'I', 607,
        'i', 607,
        'L', 279,
        'l', 279,
        'R', 541,
        'r', 541,
        'U', 585,
        'u', 585,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(977);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(972);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(963);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(970);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(960);
      END_STATE();
    case 381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 391:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 393:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(960);
      END_STATE();
    case 396:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 397:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 398:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 399:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 400:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 401:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 402:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(602);
      END_STATE();
    case 403:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 404:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 405:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 406:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 407:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 408:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 409:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 410:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 411:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 412:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 413:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(960);
      END_STATE();
    case 414:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(413);
      END_STATE();
    case 415:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(540);
      END_STATE();
    case 417:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(500);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 418:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(468);
      END_STATE();
    case 419:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(435);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 420:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(582);
      END_STATE();
    case 421:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 422:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(396);
      END_STATE();
    case 423:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(377);
      END_STATE();
    case 424:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 425:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(437);
      END_STATE();
    case 426:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 427:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 428:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(597);
      END_STATE();
    case 429:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(597);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      END_STATE();
    case 430:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 431:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(960);
      END_STATE();
    case 432:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 433:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(566);
      END_STATE();
    case 434:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(616);
      END_STATE();
    case 435:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(621);
      END_STATE();
    case 436:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(456);
      END_STATE();
    case 437:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(620);
      END_STATE();
    case 438:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(462);
      END_STATE();
    case 439:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(466);
      END_STATE();
    case 440:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(454);
      END_STATE();
    case 441:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(390);
      END_STATE();
    case 442:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(405);
      END_STATE();
    case 443:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 444:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(960);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(977);
      END_STATE();
    case 446:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 448:
      ADVANCE_MAP(
        'I', 588,
        'i', 588,
        'L', 550,
        'l', 550,
        'O', 589,
        'o', 589,
        'U', 336,
        'u', 336,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 449:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 452:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 455:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 457:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 458:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 461:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 462:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 463:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 464:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 465:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 466:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 467:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 468:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 469:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(543);
      END_STATE();
    case 470:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(666);
      END_STATE();
    case 471:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(960);
      END_STATE();
    case 472:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(327);
      END_STATE();
    case 473:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(444);
      END_STATE();
    case 474:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(368);
      END_STATE();
    case 475:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 476:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(960);
      END_STATE();
    case 477:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 478:
      ADVANCE_MAP(
        'L', 449,
        'l', 449,
        'N', 625,
        'n', 625,
        'Q', 644,
        'q', 644,
        'Z', 651,
        'z', 651,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 479:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 480:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(669);
      END_STATE();
    case 481:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 482:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 483:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 484:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(663);
      END_STATE();
    case 485:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 486:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 487:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 488:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 489:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 490:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 491:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 492:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 493:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 494:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 495:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 496:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 497:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 498:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 499:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 500:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 501:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 502:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 503:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 504:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(960);
      END_STATE();
    case 505:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 506:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 507:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 508:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      END_STATE();
    case 509:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 510:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 511:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(544);
      END_STATE();
    case 512:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 513:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(558);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(973);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(552);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(630);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 535:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(960);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 565:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(960);
      END_STATE();
    case 566:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(639);
      END_STATE();
    case 567:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 568:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(443);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      END_STATE();
    case 569:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 570:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(490);
      END_STATE();
    case 571:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
      END_STATE();
    case 572:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(648);
      END_STATE();
    case 573:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(647);
      END_STATE();
    case 574:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(649);
      END_STATE();
    case 575:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(650);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(977);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      END_STATE();
    case 608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      END_STATE();
    case 609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      END_STATE();
    case 610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      END_STATE();
    case 611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(634);
      END_STATE();
    case 612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(540);
      END_STATE();
    case 613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      END_STATE();
    case 614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(633);
      END_STATE();
    case 615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 617:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(447);
      END_STATE();
    case 618:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(960);
      END_STATE();
    case 620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(961);
      END_STATE();
    case 623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      END_STATE();
    case 624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(670);
      END_STATE();
    case 625:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 626:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 627:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      END_STATE();
    case 628:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 630:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 632:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 633:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      END_STATE();
    case 634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      END_STATE();
    case 635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 636:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      END_STATE();
    case 637:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      END_STATE();
    case 638:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(960);
      END_STATE();
    case 639:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 640:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 641:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 642:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(505);
      END_STATE();
    case 643:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(600);
      END_STATE();
    case 644:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 645:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(615);
      END_STATE();
    case 646:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(613);
      END_STATE();
    case 647:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 648:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 649:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 650:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 651:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(593);
      END_STATE();
    case 652:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(282);
      END_STATE();
    case 653:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(392);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(532);
      END_STATE();
    case 654:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(374);
      END_STATE();
    case 655:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(398);
      END_STATE();
    case 656:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(406);
      END_STATE();
    case 657:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(960);
      END_STATE();
    case 658:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(966);
      END_STATE();
    case 659:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(514);
      END_STATE();
    case 660:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(357);
      END_STATE();
    case 661:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(396);
      END_STATE();
    case 662:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(555);
      END_STATE();
    case 663:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(439);
      END_STATE();
    case 664:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(440);
      END_STATE();
    case 665:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(960);
      END_STATE();
    case 666:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 667:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 668:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      END_STATE();
    case 669:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(662);
      END_STATE();
    case 670:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(591);
      END_STATE();
    case 671:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 672:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(359);
      END_STATE();
    case 673:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 674:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 675:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 676:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(977);
      END_STATE();
    case 677:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(960);
      END_STATE();
    case 678:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 679:
      if (eof) ADVANCE(680);
      ADVANCE_MAP(
        '\n', 681,
        '\r', 1,
        '"', 866,
        '#', 735,
        '\'', 941,
        ',', 734,
        '/', 35,
        ':', 736,
        'i', 178,
        'r', 115,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__NEWLINE_token1);
      if (lookahead == '\n') ADVANCE(681);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_separator_token1);
      if (lookahead == '\'') ADVANCE(947);
      if (lookahead == '/') ADVANCE(686);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_separator_token1);
      if (lookahead == '\'') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_separator_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\'') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(689);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(948);
      if (lookahead == '/') ADVANCE(692);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(693);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(693);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(946);
      if (lookahead == '/') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(721);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(946);
      if (lookahead == '/') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(721);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(946);
      if (lookahead == '/') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(702);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(721);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(951);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(892);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_rnote);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_rnote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_hnote);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_hnote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_across);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_endnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_endrnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_endhnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(871);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(764);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(951);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(854);
      if (lookahead == 'l') ADVANCE(844);
      if (lookahead == 's') ADVANCE(767);
      if (lookahead == 'u') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(854);
      if (lookahead == 'l') ADVANCE(844);
      if (lookahead == 'u') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(699);
      if (lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(842);
      if (lookahead == 'n') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(804);
      if (lookahead == 'n') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(872);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(867);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(951);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(870);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(891);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(891);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(875);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(951);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(945);
      if (lookahead == '/') ADVANCE(879);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(878);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(880);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(880);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(880);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(893);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(890);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(897);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(911);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(901);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(912);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(902);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(913);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(903);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(914);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(904);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(915);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(905);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(916);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(906);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(917);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(907);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(918);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(908);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(919);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(921);
      if (lookahead == '@') ADVANCE(909);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(920);
      if (lookahead != 0) ADVANCE(910);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(949);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(689);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(880);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(687);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(693);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(942);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(949);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(689);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(880);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(687);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(693);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(332);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(486);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(976);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(597);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(976);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(974);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(452);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(975);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(677);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(974);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(976);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 12},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 679},
  [232] = {.lex_state = 679},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 679},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 19},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 679},
  [241] = {.lex_state = 679},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 679},
  [245] = {.lex_state = 679},
  [246] = {.lex_state = 19},
  [247] = {.lex_state = 19},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 19},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 679},
  [252] = {.lex_state = 19},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 19},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 19},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 19},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 19},
  [261] = {.lex_state = 679},
  [262] = {.lex_state = 679},
  [263] = {.lex_state = 679},
  [264] = {.lex_state = 679},
  [265] = {.lex_state = 679},
  [266] = {.lex_state = 679},
  [267] = {.lex_state = 679},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 700},
  [270] = {.lex_state = 700},
  [271] = {.lex_state = 17},
  [272] = {.lex_state = 24},
  [273] = {.lex_state = 700},
  [274] = {.lex_state = 679},
  [275] = {.lex_state = 679},
  [276] = {.lex_state = 17},
  [277] = {.lex_state = 700},
  [278] = {.lex_state = 24},
  [279] = {.lex_state = 700},
  [280] = {.lex_state = 700},
  [281] = {.lex_state = 24},
  [282] = {.lex_state = 700},
  [283] = {.lex_state = 700},
  [284] = {.lex_state = 700},
  [285] = {.lex_state = 700},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 700},
  [288] = {.lex_state = 700},
  [289] = {.lex_state = 17},
  [290] = {.lex_state = 700},
  [291] = {.lex_state = 24},
  [292] = {.lex_state = 24},
  [293] = {.lex_state = 17},
  [294] = {.lex_state = 17},
  [295] = {.lex_state = 679},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 700},
  [298] = {.lex_state = 700},
  [299] = {.lex_state = 24},
  [300] = {.lex_state = 700},
  [301] = {.lex_state = 700},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 700},
  [304] = {.lex_state = 700},
  [305] = {.lex_state = 679},
  [306] = {.lex_state = 11},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 11},
  [309] = {.lex_state = 701},
  [310] = {.lex_state = 701},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 701},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 22},
  [315] = {.lex_state = 22},
  [316] = {.lex_state = 22},
  [317] = {.lex_state = 679},
  [318] = {.lex_state = 679},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 25},
  [321] = {.lex_state = 26},
  [322] = {.lex_state = 19},
  [323] = {.lex_state = 27},
  [324] = {.lex_state = 26},
  [325] = {.lex_state = 28},
  [326] = {.lex_state = 29},
  [327] = {.lex_state = 25},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 27},
  [330] = {.lex_state = 30},
  [331] = {.lex_state = 11},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 26},
  [334] = {.lex_state = 701},
  [335] = {.lex_state = 701},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 28},
  [338] = {.lex_state = 29},
  [339] = {.lex_state = 28},
  [340] = {.lex_state = 31},
  [341] = {.lex_state = 32},
  [342] = {.lex_state = 29},
  [343] = {.lex_state = 33},
  [344] = {.lex_state = 31},
  [345] = {.lex_state = 34},
  [346] = {.lex_state = 32},
  [347] = {.lex_state = 30},
  [348] = {.lex_state = 33},
  [349] = {.lex_state = 31},
  [350] = {.lex_state = 34},
  [351] = {.lex_state = 30},
  [352] = {.lex_state = 11},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 32},
  [355] = {.lex_state = 22},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 679},
  [359] = {.lex_state = 701},
  [360] = {.lex_state = 679},
  [361] = {.lex_state = 19},
  [362] = {.lex_state = 11},
  [363] = {.lex_state = 701},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 701},
  [366] = {.lex_state = 701},
  [367] = {.lex_state = 701},
  [368] = {.lex_state = 33},
  [369] = {.lex_state = 11},
  [370] = {.lex_state = 11},
  [371] = {.lex_state = 18},
  [372] = {.lex_state = 34},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 701},
  [375] = {.lex_state = 701},
  [376] = {.lex_state = 701},
  [377] = {.lex_state = 679},
  [378] = {.lex_state = 11},
  [379] = {.lex_state = 701},
  [380] = {.lex_state = 701},
  [381] = {.lex_state = 679},
  [382] = {.lex_state = 27},
  [383] = {.lex_state = 701},
  [384] = {.lex_state = 701},
  [385] = {.lex_state = 701},
  [386] = {.lex_state = 25},
  [387] = {.lex_state = 679},
  [388] = {.lex_state = 679},
  [389] = {.lex_state = 679},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 679},
  [395] = {.lex_state = 679},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 22},
  [401] = {.lex_state = 22},
  [402] = {.lex_state = 22},
  [403] = {.lex_state = 22},
  [404] = {.lex_state = 11},
  [405] = {.lex_state = 11},
  [406] = {.lex_state = 11},
  [407] = {.lex_state = 11},
  [408] = {.lex_state = 22},
  [409] = {.lex_state = 22},
  [410] = {.lex_state = 22},
  [411] = {.lex_state = 22},
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 11},
  [414] = {.lex_state = 11},
  [415] = {.lex_state = 701},
  [416] = {.lex_state = 679},
  [417] = {.lex_state = 31},
  [418] = {.lex_state = 679},
  [419] = {.lex_state = 32},
  [420] = {.lex_state = 679},
  [421] = {.lex_state = 26},
  [422] = {.lex_state = 33},
  [423] = {.lex_state = 34},
  [424] = {.lex_state = 679},
  [425] = {.lex_state = 30},
  [426] = {.lex_state = 700},
  [427] = {.lex_state = 700},
  [428] = {.lex_state = 20},
  [429] = {.lex_state = 20},
  [430] = {.lex_state = 20},
  [431] = {.lex_state = 679},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 20},
  [434] = {.lex_state = 679},
  [435] = {.lex_state = 679},
  [436] = {.lex_state = 679},
  [437] = {.lex_state = 679},
  [438] = {.lex_state = 679},
  [439] = {.lex_state = 679},
  [440] = {.lex_state = 679},
  [441] = {.lex_state = 679},
  [442] = {.lex_state = 679},
  [443] = {.lex_state = 20},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 679},
  [446] = {.lex_state = 679},
  [447] = {.lex_state = 679},
  [448] = {.lex_state = 25},
  [449] = {.lex_state = 20},
  [450] = {.lex_state = 27},
  [451] = {.lex_state = 679},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 20},
  [455] = {.lex_state = 20},
  [456] = {.lex_state = 20},
  [457] = {.lex_state = 679},
  [458] = {.lex_state = 679},
  [459] = {.lex_state = 679},
  [460] = {.lex_state = 679},
  [461] = {.lex_state = 679},
  [462] = {.lex_state = 679},
  [463] = {.lex_state = 679},
  [464] = {.lex_state = 679},
  [465] = {.lex_state = 679},
  [466] = {.lex_state = 679},
  [467] = {.lex_state = 679},
  [468] = {.lex_state = 679},
  [469] = {.lex_state = 24},
  [470] = {.lex_state = 700},
  [471] = {.lex_state = 20},
  [472] = {.lex_state = 679},
  [473] = {.lex_state = 679},
  [474] = {.lex_state = 20},
  [475] = {.lex_state = 679},
  [476] = {.lex_state = 679},
  [477] = {.lex_state = 679},
  [478] = {.lex_state = 679},
  [479] = {.lex_state = 679},
  [480] = {.lex_state = 679},
  [481] = {.lex_state = 28},
  [482] = {.lex_state = 24},
  [483] = {.lex_state = 679},
  [484] = {.lex_state = 679},
  [485] = {.lex_state = 29},
  [486] = {.lex_state = 679},
  [487] = {.lex_state = 20},
  [488] = {.lex_state = 20},
  [489] = {.lex_state = 679},
  [490] = {.lex_state = 701},
  [491] = {.lex_state = 11},
  [492] = {.lex_state = 702},
  [493] = {.lex_state = 11},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 702},
  [496] = {.lex_state = 702},
  [497] = {.lex_state = 679},
  [498] = {.lex_state = 11},
  [499] = {.lex_state = 702},
  [500] = {.lex_state = 702},
  [501] = {.lex_state = 679},
  [502] = {.lex_state = 679},
  [503] = {.lex_state = 702},
  [504] = {.lex_state = 702},
  [505] = {.lex_state = 679},
  [506] = {.lex_state = 679},
  [507] = {.lex_state = 679},
  [508] = {.lex_state = 702},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 702},
  [511] = {.lex_state = 702},
  [512] = {.lex_state = 702},
  [513] = {.lex_state = 701},
  [514] = {.lex_state = 679},
  [515] = {.lex_state = 701},
  [516] = {.lex_state = 11},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 36},
  [519] = {.lex_state = 36},
  [520] = {.lex_state = 36},
  [521] = {.lex_state = 20},
  [522] = {.lex_state = 11},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 702},
  [526] = {.lex_state = 679},
  [527] = {.lex_state = 702},
  [528] = {.lex_state = 11},
  [529] = {.lex_state = 702},
  [530] = {.lex_state = 36},
  [531] = {.lex_state = 36},
  [532] = {.lex_state = 36},
  [533] = {.lex_state = 20},
  [534] = {.lex_state = 36},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 679},
  [538] = {.lex_state = 36},
  [539] = {.lex_state = 36},
  [540] = {.lex_state = 36},
  [541] = {.lex_state = 702},
  [542] = {.lex_state = 20},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 702},
  [545] = {.lex_state = 11},
  [546] = {.lex_state = 702},
  [547] = {.lex_state = 702},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 23},
  [550] = {.lex_state = 679},
  [551] = {.lex_state = 20},
  [552] = {.lex_state = 22},
  [553] = {.lex_state = 11},
  [554] = {.lex_state = 679},
  [555] = {.lex_state = 679},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 691},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 22},
  [562] = {.lex_state = 691},
  [563] = {.lex_state = 22},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 11},
  [566] = {.lex_state = 22},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 37},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 37},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 22},
  [577] = {.lex_state = 37},
  [578] = {.lex_state = 679},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 38},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 22},
  [587] = {.lex_state = 23},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 11},
  [590] = {.lex_state = 22},
  [591] = {.lex_state = 20},
  [592] = {.lex_state = 679},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 37},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 38},
  [598] = {.lex_state = 11},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 22},
  [601] = {.lex_state = 2},
  [602] = {.lex_state = 22},
  [603] = {.lex_state = 23},
  [604] = {.lex_state = 23},
  [605] = {.lex_state = 11},
  [606] = {.lex_state = 22},
  [607] = {.lex_state = 22},
  [608] = {.lex_state = 22},
  [609] = {.lex_state = 22},
  [610] = {.lex_state = 38},
  [611] = {.lex_state = 23},
  [612] = {.lex_state = 22},
  [613] = {.lex_state = 39},
  [614] = {.lex_state = 37},
  [615] = {.lex_state = 11},
  [616] = {.lex_state = 3},
  [617] = {.lex_state = 679},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 22},
  [620] = {.lex_state = 22},
  [621] = {.lex_state = 22},
  [622] = {.lex_state = 22},
  [623] = {.lex_state = 37},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 2},
  [626] = {(TSStateId)(-1)},
  [627] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(1),
    [aux_sym_attribute_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_ATendjson] = ACTIONS(1),
    [anon_sym_ATendyaml] = ACTIONS(1),
    [anon_sym_ATendebnf] = ACTIONS(1),
    [anon_sym_ATendregex] = ACTIONS(1),
    [anon_sym_ATendditaa] = ACTIONS(1),
    [anon_sym_ATendgantt] = ACTIONS(1),
    [anon_sym_ATendchronology] = ACTIONS(1),
    [anon_sym_ATendmindmap] = ACTIONS(1),
    [anon_sym_ATendwbs] = ACTIONS(1),
    [anon_sym_ATendchen] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(5),
  },
  [1] = {
    [sym_diagram] = STATE(599),
    [sym_uml] = STATE(624),
    [sym_json] = STATE(624),
    [sym_yaml] = STATE(624),
    [sym_ebnf] = STATE(624),
    [sym_regex] = STATE(624),
    [sym_ditaa] = STATE(624),
    [sym_gantt] = STATE(624),
    [sym_chronology] = STATE(624),
    [sym_mindmap] = STATE(624),
    [sym_wbs] = STATE(624),
    [sym_chen] = STATE(624),
    [sym_comment] = STATE(1),
    [anon_sym_ATstartuml] = ACTIONS(7),
    [anon_sym_ATstartjson] = ACTIONS(9),
    [anon_sym_ATstartyaml] = ACTIONS(11),
    [anon_sym_ATstartebnf] = ACTIONS(13),
    [anon_sym_ATstartregex] = ACTIONS(15),
    [anon_sym_ATstartditaa] = ACTIONS(17),
    [anon_sym_ATstartgantt] = ACTIONS(19),
    [anon_sym_ATstartchronology] = ACTIONS(21),
    [anon_sym_ATstartmindmap] = ACTIONS(23),
    [anon_sym_ATstartwbs] = ACTIONS(25),
    [anon_sym_ATstartchen] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ,
    ACTIONS(31), 1,
      anon_sym_alt,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_end,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_note,
    ACTIONS(41), 1,
      anon_sym_rnote,
    ACTIONS(43), 1,
      anon_sym_hnote,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(49), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(53), 1,
      anon_sym_autonumberstop,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    STATE(453), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [93] = 25,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ,
    ACTIONS(31), 1,
      anon_sym_alt,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_note,
    ACTIONS(41), 1,
      anon_sym_rnote,
    ACTIONS(43), 1,
      anon_sym_hnote,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(49), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(53), 1,
      anon_sym_autonumberstop,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    STATE(433), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [186] = 25,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ,
    ACTIONS(31), 1,
      anon_sym_alt,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_note,
    ACTIONS(41), 1,
      anon_sym_rnote,
    ACTIONS(43), 1,
      anon_sym_hnote,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(49), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(53), 1,
      anon_sym_autonumberstop,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(2), 1,
      aux_sym_uml_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    STATE(456), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [279] = 25,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ,
    ACTIONS(31), 1,
      anon_sym_alt,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_note,
    ACTIONS(41), 1,
      anon_sym_rnote,
    ACTIONS(43), 1,
      anon_sym_hnote,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(49), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(53), 1,
      anon_sym_autonumberstop,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    STATE(432), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [372] = 25,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ,
    ACTIONS(31), 1,
      anon_sym_alt,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_note,
    ACTIONS(41), 1,
      anon_sym_rnote,
    ACTIONS(43), 1,
      anon_sym_hnote,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(49), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(53), 1,
      anon_sym_autonumberstop,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    STATE(449), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [465] = 25,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ,
    ACTIONS(31), 1,
      anon_sym_alt,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_note,
    ACTIONS(41), 1,
      anon_sym_rnote,
    ACTIONS(43), 1,
      anon_sym_hnote,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(49), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(53), 1,
      anon_sym_autonumberstop,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    STATE(454), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [558] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ,
    ACTIONS(31), 1,
      anon_sym_alt,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_note,
    ACTIONS(41), 1,
      anon_sym_rnote,
    ACTIONS(43), 1,
      anon_sym_hnote,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(49), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(53), 1,
      anon_sym_autonumberstop,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    ACTIONS(71), 2,
      anon_sym_else,
      anon_sym_end,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [646] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_EQ_EQ,
    ACTIONS(76), 1,
      anon_sym_alt,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(84), 1,
      anon_sym_note,
    ACTIONS(87), 1,
      anon_sym_rnote,
    ACTIONS(90), 1,
      anon_sym_hnote,
    ACTIONS(93), 1,
      anon_sym_loop,
    ACTIONS(96), 1,
      anon_sym_group,
    ACTIONS(99), 1,
      anon_sym_skinparam,
    ACTIONS(102), 1,
      anon_sym_autonumber,
    ACTIONS(105), 1,
      anon_sym_autonumberstop,
    ACTIONS(111), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    ACTIONS(79), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(9), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [732] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ,
    ACTIONS(31), 1,
      anon_sym_alt,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_note,
    ACTIONS(41), 1,
      anon_sym_rnote,
    ACTIONS(43), 1,
      anon_sym_hnote,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(49), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(53), 1,
      anon_sym_autonumberstop,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(118), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(219), 1,
      sym_participant_name,
    ACTIONS(117), 2,
      anon_sym_else,
      anon_sym_end,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(86), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [820] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_ATenduml,
    ACTIONS(121), 1,
      anon_sym_EQ_EQ,
    ACTIONS(123), 1,
      anon_sym_alt,
    ACTIONS(125), 1,
      anon_sym_SLASH,
    ACTIONS(127), 1,
      anon_sym_note,
    ACTIONS(129), 1,
      anon_sym_rnote,
    ACTIONS(131), 1,
      anon_sym_hnote,
    ACTIONS(133), 1,
      anon_sym_loop,
    ACTIONS(135), 1,
      anon_sym_group,
    ACTIONS(137), 1,
      anon_sym_skinparam,
    ACTIONS(139), 1,
      anon_sym_autonumber,
    ACTIONS(141), 1,
      anon_sym_autonumberstop,
    STATE(11), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(142), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(220), 1,
      sym_participant_name,
    ACTIONS(143), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(213), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [907] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(149), 1,
      anon_sym_end,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    STATE(12), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [994] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_ATenduml,
    ACTIONS(173), 1,
      anon_sym_EQ_EQ,
    ACTIONS(176), 1,
      anon_sym_alt,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_note,
    ACTIONS(185), 1,
      anon_sym_rnote,
    ACTIONS(188), 1,
      anon_sym_hnote,
    ACTIONS(191), 1,
      anon_sym_loop,
    ACTIONS(194), 1,
      anon_sym_group,
    ACTIONS(197), 1,
      anon_sym_skinparam,
    ACTIONS(200), 1,
      anon_sym_autonumber,
    ACTIONS(203), 1,
      anon_sym_autonumberstop,
    STATE(142), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(220), 1,
      sym_participant_name,
    STATE(13), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(206), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(213), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1079] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(79), 1,
      anon_sym_end,
    ACTIONS(111), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_EQ_EQ,
    ACTIONS(212), 1,
      anon_sym_alt,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_note,
    ACTIONS(221), 1,
      anon_sym_rnote,
    ACTIONS(224), 1,
      anon_sym_hnote,
    ACTIONS(227), 1,
      anon_sym_loop,
    ACTIONS(230), 1,
      anon_sym_group,
    ACTIONS(233), 1,
      anon_sym_skinparam,
    ACTIONS(236), 1,
      anon_sym_autonumber,
    ACTIONS(239), 1,
      anon_sym_autonumberstop,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    STATE(14), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(242), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1164] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(245), 1,
      anon_sym_end,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1251] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(247), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1338] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(249), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1425] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(251), 1,
      anon_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1512] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(253), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1599] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(255), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1686] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(257), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1773] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(259), 1,
      anon_sym_end,
    STATE(22), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_uml_repeat1,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1860] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(261), 1,
      anon_sym_end,
    STATE(23), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_uml_repeat1,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [1947] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(263), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [2034] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_alt,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_note,
    ACTIONS(155), 1,
      anon_sym_rnote,
    ACTIONS(157), 1,
      anon_sym_hnote,
    ACTIONS(159), 1,
      anon_sym_loop,
    ACTIONS(161), 1,
      anon_sym_group,
    ACTIONS(163), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(167), 1,
      anon_sym_autonumberstop,
    ACTIONS(265), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(139), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(221), 1,
      sym_participant_name,
    ACTIONS(169), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(140), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [2121] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_EQ_EQ,
    ACTIONS(123), 1,
      anon_sym_alt,
    ACTIONS(125), 1,
      anon_sym_SLASH,
    ACTIONS(127), 1,
      anon_sym_note,
    ACTIONS(129), 1,
      anon_sym_rnote,
    ACTIONS(131), 1,
      anon_sym_hnote,
    ACTIONS(133), 1,
      anon_sym_loop,
    ACTIONS(135), 1,
      anon_sym_group,
    ACTIONS(137), 1,
      anon_sym_skinparam,
    ACTIONS(139), 1,
      anon_sym_autonumber,
    ACTIONS(141), 1,
      anon_sym_autonumberstop,
    ACTIONS(267), 1,
      anon_sym_ATenduml,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(142), 1,
      sym_expression,
    STATE(217), 1,
      sym_string,
    STATE(220), 1,
      sym_participant_name,
    ACTIONS(143), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(213), 11,
      sym_separator,
      sym_alt_block,
      sym_line_note,
      sym_block_note,
      sym_block_rnote,
      sym_block_hnote,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
  [2208] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_order,
    STATE(27), 1,
      sym_comment,
    STATE(30), 1,
      sym_multiline,
    STATE(31), 1,
      aux_sym_attribute_repeat2,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(269), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(273), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2267] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      anon_sym_as,
    ACTIONS(287), 1,
      anon_sym_order,
    STATE(28), 1,
      sym_comment,
    STATE(39), 1,
      sym_multiline,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(269), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(273), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2325] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_as,
    ACTIONS(295), 1,
      anon_sym_order,
    STATE(29), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_attribute_repeat2,
    STATE(37), 1,
      sym_multiline,
    STATE(64), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(269), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(273), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2383] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_order,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_attribute_repeat2,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(297), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(299), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2436] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_order,
    STATE(31), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_attribute_repeat2,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(297), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(299), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2489] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_order,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_attribute_repeat2,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(301), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(303), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2542] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(309), 1,
      anon_sym_POUND,
    ACTIONS(312), 1,
      anon_sym_as,
    ACTIONS(315), 1,
      anon_sym_order,
    STATE(33), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(305), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(307), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2593] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(318), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      anon_sym_as,
    ACTIONS(324), 1,
      anon_sym_order,
    STATE(34), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(64), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(305), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(307), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2643] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_as,
    ACTIONS(295), 1,
      anon_sym_order,
    STATE(34), 1,
      aux_sym_attribute_repeat2,
    STATE(35), 1,
      sym_comment,
    STATE(64), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(297), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(299), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2695] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(283), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      anon_sym_as,
    ACTIONS(287), 1,
      anon_sym_order,
    STATE(36), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(301), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(303), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2747] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_as,
    ACTIONS(295), 1,
      anon_sym_order,
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_attribute_repeat2,
    STATE(64), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(297), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(299), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2799] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_as,
    ACTIONS(295), 1,
      anon_sym_order,
    STATE(34), 1,
      aux_sym_attribute_repeat2,
    STATE(38), 1,
      sym_comment,
    STATE(64), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(301), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(303), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2851] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(283), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      anon_sym_as,
    ACTIONS(287), 1,
      anon_sym_order,
    STATE(36), 1,
      aux_sym_attribute_repeat2,
    STATE(39), 1,
      sym_comment,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(297), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(299), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2903] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(283), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      anon_sym_as,
    ACTIONS(287), 1,
      anon_sym_order,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(297), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(299), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2955] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(327), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_as,
    ACTIONS(333), 1,
      anon_sym_order,
    STATE(41), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(305), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(307), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [3005] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(336), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3046] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(340), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3087] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(344), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3128] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(340), 6,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3168] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(344), 6,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3208] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(348), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(350), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3248] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3288] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(336), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3328] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(358), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3368] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(344), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3408] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_as,
    STATE(52), 1,
      sym_comment,
    STATE(76), 1,
      sym_attr_alias,
    ACTIONS(360), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(362), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [3454] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(336), 6,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3494] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(368), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(370), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3534] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(305), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(307), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3574] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(340), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3614] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(374), 22,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3654] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 21,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [3693] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(348), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(350), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3732] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(374), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3771] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_comment,
    STATE(106), 1,
      sym_custom_label,
    ACTIONS(376), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(380), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [3814] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(368), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(370), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3853] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(356), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(358), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3892] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(358), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [3931] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(384), 1,
      anon_sym_as,
    STATE(65), 1,
      sym_comment,
    STATE(111), 1,
      sym_attr_alias,
    ACTIONS(360), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(362), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [3976] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      anon_sym_as,
    STATE(66), 1,
      sym_comment,
    STATE(130), 1,
      sym_attr_alias,
    ACTIONS(360), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(362), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4021] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(305), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(307), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [4060] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(348), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(350), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [4099] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 21,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [4138] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(305), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(307), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [4177] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(370), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [4216] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 21,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [4255] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 21,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [4294] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(352), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [4333] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(374), 20,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [4372] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(392), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4412] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_comment,
    STATE(203), 1,
      sym_custom_label,
    ACTIONS(376), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(380), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4454] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(336), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 19,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [4492] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4530] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 20,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [4568] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(344), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 19,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [4606] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(340), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 19,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [4644] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 20,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [4682] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 20,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      anon_sym_as,
      aux_sym_attr_alias_token1,
  [4720] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(400), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4757] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(404), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4794] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(408), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4831] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(412), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4868] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(416), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4905] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(420), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4942] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(424), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4979] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(428), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5016] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(432), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5053] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(436), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5090] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(440), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5127] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
      sym_comment,
    ACTIONS(442), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(444), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5164] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(448), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5201] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(452), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5238] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
      sym_comment,
    ACTIONS(454), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(456), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5275] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(460), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5312] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(101), 1,
      sym_comment,
    ACTIONS(462), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(464), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5349] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(102), 1,
      sym_comment,
    ACTIONS(466), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(468), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5386] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(103), 1,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(472), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5423] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(474), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(476), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5460] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(352), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5497] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
      sym_comment,
    ACTIONS(478), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(480), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5534] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
      sym_comment,
    ACTIONS(482), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(484), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5571] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
      sym_comment,
    ACTIONS(486), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(488), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5608] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
      sym_comment,
    ACTIONS(490), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(492), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5645] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(494), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(496), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5682] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(498), 1,
      anon_sym_COLON,
    STATE(111), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(392), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5721] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(502), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5758] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(506), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5795] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(114), 1,
      sym_comment,
    ACTIONS(508), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(510), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5832] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(115), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(514), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5869] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(518), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5906] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(514), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5943] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
      sym_comment,
    ACTIONS(520), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(522), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5980] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(524), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(526), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6017] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6054] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(528), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(530), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6091] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(532), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(534), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6128] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
      sym_comment,
    ACTIONS(536), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(538), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6165] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(124), 1,
      sym_comment,
    ACTIONS(540), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(542), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6202] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(544), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(546), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6239] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(548), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(550), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6276] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(552), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(554), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6313] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(556), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(558), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6350] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(129), 1,
      sym_comment,
    ACTIONS(556), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(558), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6387] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(560), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_comment,
    ACTIONS(390), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(392), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6426] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
      sym_comment,
    ACTIONS(562), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(564), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6463] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(514), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6499] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(456), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6535] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(488), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6571] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(460), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6607] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(490), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(492), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6643] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
      sym_comment,
    ACTIONS(462), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(464), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6679] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
      sym_comment,
    ACTIONS(474), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(476), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6715] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_comment,
    ACTIONS(520), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(522), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6751] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(404), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6787] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
      sym_comment,
    ACTIONS(562), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(564), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6823] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(522), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6859] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(482), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(484), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6895] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
      sym_comment,
    ACTIONS(508), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(510), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6931] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(486), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(488), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6967] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
      sym_comment,
    ACTIONS(490), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(492), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7003] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
      sym_comment,
    ACTIONS(494), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(496), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7039] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(502), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7075] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(506), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7111] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(514), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7147] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
      sym_comment,
    ACTIONS(406), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(408), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7183] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(468), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7219] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(524), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(526), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7255] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
      sym_comment,
    ACTIONS(528), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(530), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7291] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(532), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(534), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7327] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(156), 1,
      sym_comment,
    ACTIONS(536), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(538), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7363] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(540), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(542), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7399] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
      sym_comment,
    ACTIONS(544), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(546), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
      sym_comment,
    ACTIONS(548), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(550), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7471] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(160), 1,
      sym_comment,
    ACTIONS(552), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(554), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7507] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
      sym_comment,
    ACTIONS(556), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(558), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7543] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
      sym_comment,
    ACTIONS(556), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(558), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7579] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(163), 1,
      sym_comment,
    ACTIONS(470), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(472), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7615] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
      sym_comment,
    ACTIONS(414), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(416), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7651] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(165), 1,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(420), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7687] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
      sym_comment,
    ACTIONS(524), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(526), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7723] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
      sym_comment,
    ACTIONS(562), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(564), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7759] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(168), 1,
      sym_comment,
    ACTIONS(422), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(424), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7795] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(169), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(408), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7831] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(170), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(412), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7867] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(171), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(416), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7903] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(420), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7939] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(173), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(424), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [7975] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(174), 1,
      sym_comment,
    ACTIONS(474), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(476), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8011] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(175), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(428), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8047] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(176), 1,
      sym_comment,
    ACTIONS(410), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(412), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8083] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(436), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8119] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(178), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(440), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8155] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(179), 1,
      sym_comment,
    ACTIONS(442), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(444), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8191] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(180), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(448), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8227] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(181), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(400), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8263] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(182), 1,
      sym_comment,
    ACTIONS(454), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(456), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8299] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(183), 1,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(460), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8335] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(184), 1,
      sym_comment,
    ACTIONS(462), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(464), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8371] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(185), 1,
      sym_comment,
    ACTIONS(466), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(468), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8407] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(186), 1,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(472), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8443] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(187), 1,
      sym_comment,
    ACTIONS(494), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(496), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8479] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(188), 1,
      sym_comment,
    ACTIONS(516), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(518), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8515] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(189), 1,
      sym_comment,
    ACTIONS(500), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(502), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8551] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(190), 1,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(506), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8587] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(191), 1,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(530), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8623] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(192), 1,
      sym_comment,
    ACTIONS(512), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(514), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8659] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(193), 1,
      sym_comment,
    ACTIONS(508), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(510), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8695] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(194), 1,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(452), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8731] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(195), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(518), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8767] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(196), 1,
      sym_comment,
    ACTIONS(532), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(534), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8803] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(197), 1,
      sym_comment,
    ACTIONS(536), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(538), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8839] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(198), 1,
      sym_comment,
    ACTIONS(540), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(542), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8875] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(199), 1,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(428), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8911] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(200), 1,
      sym_comment,
    ACTIONS(482), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(484), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8947] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(201), 1,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(546), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [8983] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(202), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(550), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9019] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(203), 1,
      sym_comment,
    ACTIONS(478), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(480), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9055] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(204), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(432), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9091] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(205), 1,
      sym_comment,
    ACTIONS(552), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(554), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9127] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(206), 1,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(436), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9163] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(207), 1,
      sym_comment,
    ACTIONS(512), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(514), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9199] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(208), 1,
      sym_comment,
    ACTIONS(556), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(558), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9235] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(209), 1,
      sym_comment,
    ACTIONS(556), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(558), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9271] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(210), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(440), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9307] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(211), 1,
      sym_comment,
    ACTIONS(442), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(444), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9343] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(212), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(448), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9379] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(213), 1,
      sym_comment,
    ACTIONS(402), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(404), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9415] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(214), 1,
      sym_comment,
    ACTIONS(398), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(400), 18,
      anon_sym_alt,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9451] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(215), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(432), 19,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_SLASH,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [9487] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(216), 1,
      sym_comment,
    ACTIONS(346), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(344), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [9515] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(217), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(336), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [9543] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(218), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(340), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [9571] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DASH,
    ACTIONS(572), 1,
      anon_sym_x,
    ACTIONS(576), 1,
      anon_sym_DASH_DASH,
    STATE(219), 1,
      sym_comment,
    STATE(357), 1,
      sym_connector,
    ACTIONS(570), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(566), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(574), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [9607] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DASH,
    ACTIONS(572), 1,
      anon_sym_x,
    ACTIONS(576), 1,
      anon_sym_DASH_DASH,
    STATE(220), 1,
      sym_comment,
    STATE(378), 1,
      sym_connector,
    ACTIONS(570), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(566), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(574), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [9643] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DASH,
    ACTIONS(572), 1,
      anon_sym_x,
    ACTIONS(576), 1,
      anon_sym_DASH_DASH,
    STATE(221), 1,
      sym_comment,
    STATE(373), 1,
      sym_connector,
    ACTIONS(570), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(566), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(574), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [9679] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(582), 1,
      anon_sym_DASH,
    STATE(222), 1,
      sym_comment,
    ACTIONS(580), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(578), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(584), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9706] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(590), 1,
      anon_sym_DASH,
    STATE(223), 1,
      sym_comment,
    ACTIONS(588), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(586), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(592), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9733] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(600), 1,
      anon_sym_LBRACK_POUND,
    STATE(224), 1,
      sym_comment,
    ACTIONS(596), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(594), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(598), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9760] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(608), 1,
      anon_sym_LBRACK_POUND,
    STATE(225), 1,
      sym_comment,
    ACTIONS(604), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(602), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(606), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9787] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(226), 1,
      sym_comment,
    ACTIONS(580), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(578), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(584), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9811] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(227), 1,
      sym_comment,
    ACTIONS(612), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(610), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(614), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9835] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(228), 1,
      sym_comment,
    ACTIONS(596), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(594), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(598), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9859] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(229), 1,
      sym_comment,
    ACTIONS(604), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(602), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(606), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9883] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(618), 1,
      anon_sym_DASH,
    STATE(230), 1,
      sym_comment,
    ACTIONS(616), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(620), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9906] = 9,
    ACTIONS(622), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(626), 1,
      aux_sym_attribute_token3,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(231), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_attribute_repeat1,
    STATE(578), 1,
      sym_string,
    ACTIONS(624), 2,
      anon_sym_inc,
      anon_sym_resume,
  [9935] = 9,
    ACTIONS(626), 1,
      aux_sym_attribute_token3,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(634), 1,
      aux_sym__NEWLINE_token1,
    STATE(232), 1,
      sym_comment,
    STATE(305), 1,
      aux_sym_attribute_repeat1,
    STATE(555), 1,
      sym_string,
    ACTIONS(636), 2,
      anon_sym_inc,
      anon_sym_resume,
  [9964] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(642), 1,
      anon_sym_LBRACK_POUND,
    STATE(233), 1,
      sym_comment,
    ACTIONS(638), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(640), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9987] = 9,
    ACTIONS(626), 1,
      aux_sym_attribute_token3,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(644), 1,
      aux_sym__NEWLINE_token1,
    STATE(234), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym_attribute_repeat1,
    STATE(554), 1,
      sym_string,
    ACTIONS(646), 2,
      anon_sym_inc,
      anon_sym_resume,
  [10016] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    STATE(235), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10042] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(236), 1,
      sym_comment,
    ACTIONS(586), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(592), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10062] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(654), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10088] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(238), 1,
      sym_comment,
    ACTIONS(656), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(658), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [10108] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(239), 1,
      sym_comment,
    ACTIONS(638), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(640), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10128] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      anon_sym_COLON,
    STATE(240), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_line_note_repeat1,
    STATE(288), 1,
      sym__NEWLINE,
  [10156] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    STATE(241), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_line_note_repeat1,
    STATE(335), 1,
      sym__NEWLINE,
  [10184] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym_string_repeat1,
    STATE(242), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10210] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    ACTIONS(677), 1,
      anon_sym_BSLASH,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(674), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(243), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [10234] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_COLON,
    STATE(244), 1,
      sym_comment,
    STATE(273), 1,
      sym__NEWLINE,
    STATE(274), 1,
      aux_sym_line_note_repeat1,
  [10262] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(680), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_COLON,
    STATE(245), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_line_note_repeat1,
    STATE(376), 1,
      sym__NEWLINE,
  [10290] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    STATE(246), 1,
      sym_comment,
    STATE(247), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10316] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(247), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10342] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(688), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      sym_comment,
    STATE(249), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10368] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(249), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10394] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    STATE(250), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10420] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(694), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      anon_sym_COLON,
    STATE(251), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_line_note_repeat1,
    STATE(384), 1,
      sym__NEWLINE,
  [10448] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10474] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(253), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10500] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10526] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(255), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10552] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(706), 1,
      anon_sym_DQUOTE,
    STATE(235), 1,
      aux_sym_string_repeat1,
    STATE(256), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10578] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      sym_comment,
    STATE(258), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10604] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(258), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10630] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(712), 1,
      anon_sym_DQUOTE,
    STATE(259), 1,
      sym_comment,
    STATE(260), 1,
      aux_sym_string_repeat1,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10656] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(714), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(260), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10682] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      anon_sym_COLON,
    STATE(261), 1,
      sym_comment,
    STATE(263), 1,
      aux_sym_line_note_repeat1,
    STATE(301), 1,
      sym__NEWLINE,
  [10710] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(716), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      anon_sym_COLON,
    STATE(262), 1,
      sym_comment,
    STATE(264), 1,
      aux_sym_line_note_repeat1,
    STATE(363), 1,
      sym__NEWLINE,
  [10738] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_POUND,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(263), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_line_note_repeat1,
    STATE(304), 1,
      sym__NEWLINE,
  [10766] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(720), 1,
      anon_sym_POUND,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(264), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_line_note_repeat1,
    STATE(366), 1,
      sym__NEWLINE,
  [10794] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      anon_sym_COLON,
    STATE(265), 1,
      sym_comment,
    STATE(267), 1,
      aux_sym_line_note_repeat1,
    STATE(280), 1,
      sym__NEWLINE,
  [10822] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(724), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      anon_sym_COLON,
    STATE(251), 1,
      aux_sym_line_note_repeat1,
    STATE(266), 1,
      sym_comment,
    STATE(380), 1,
      sym__NEWLINE,
  [10850] = 9,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      anon_sym_COLON,
    STATE(267), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_line_note_repeat1,
    STATE(283), 1,
      sym__NEWLINE,
  [10878] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_string_repeat1,
    STATE(268), 1,
      sym_comment,
    STATE(361), 1,
      sym_escape_char,
    ACTIONS(650), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10904] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(732), 1,
      anon_sym_endnote,
    ACTIONS(734), 1,
      anon_sym_endhnote,
    STATE(269), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [10929] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(736), 1,
      anon_sym_endnote,
    ACTIONS(738), 1,
      anon_sym_endhnote,
    STATE(270), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [10954] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(740), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      sym_comment,
    ACTIONS(744), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [10975] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
    ACTIONS(748), 1,
      aux_sym_multiline_token1,
    ACTIONS(750), 1,
      anon_sym_BSLASH,
    STATE(272), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_multiline_repeat1,
    STATE(482), 1,
      sym_escape_char,
  [11000] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(732), 1,
      anon_sym_endnote,
    ACTIONS(734), 1,
      anon_sym_endhnote,
    STATE(273), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11025] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(752), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(757), 2,
      anon_sym_POUND,
      anon_sym_COLON,
    STATE(274), 2,
      sym_comment,
      aux_sym_line_note_repeat1,
  [11046] = 8,
    ACTIONS(626), 1,
      aux_sym_attribute_token3,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(759), 1,
      aux_sym__NEWLINE_token1,
    STATE(275), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_attribute_repeat1,
    STATE(592), 1,
      sym_string,
  [11071] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(761), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    STATE(276), 1,
      sym_comment,
    ACTIONS(765), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11092] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(767), 1,
      anon_sym_endnote,
    ACTIONS(769), 1,
      anon_sym_endhnote,
    STATE(277), 1,
      sym_comment,
    STATE(279), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11117] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(748), 1,
      aux_sym_multiline_token1,
    ACTIONS(750), 1,
      anon_sym_BSLASH,
    ACTIONS(771), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      sym_comment,
    STATE(281), 1,
      aux_sym_multiline_repeat1,
    STATE(482), 1,
      sym_escape_char,
  [11142] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(773), 1,
      anon_sym_endnote,
    ACTIONS(775), 1,
      anon_sym_endhnote,
    STATE(279), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11167] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(773), 1,
      anon_sym_endnote,
    ACTIONS(775), 1,
      anon_sym_endhnote,
    STATE(280), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11192] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(748), 1,
      aux_sym_multiline_token1,
    ACTIONS(750), 1,
      anon_sym_BSLASH,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
    STATE(281), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_multiline_repeat1,
    STATE(482), 1,
      sym_escape_char,
  [11217] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(779), 1,
      anon_sym_endnote,
    ACTIONS(781), 1,
      anon_sym_endhnote,
    STATE(282), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11242] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(779), 1,
      anon_sym_endnote,
    ACTIONS(781), 1,
      anon_sym_endhnote,
    STATE(283), 1,
      sym_comment,
    STATE(284), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11267] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(783), 1,
      anon_sym_endnote,
    ACTIONS(785), 1,
      anon_sym_endhnote,
    STATE(284), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11292] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(787), 1,
      anon_sym_endnote,
    ACTIONS(789), 1,
      anon_sym_endhnote,
    STATE(285), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11317] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      aux_sym_attr_alias_token1,
    STATE(286), 1,
      sym_comment,
    ACTIONS(793), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11338] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(795), 1,
      anon_sym_endnote,
    ACTIONS(797), 1,
      anon_sym_endhnote,
    STATE(287), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11363] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(795), 1,
      anon_sym_endnote,
    ACTIONS(797), 1,
      anon_sym_endhnote,
    STATE(269), 1,
      aux_sym_block_note_repeat1,
    STATE(288), 1,
      sym_comment,
    STATE(470), 1,
      sym_line,
  [11388] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    ACTIONS(799), 1,
      aux_sym_attr_alias_token1,
    STATE(289), 1,
      sym_comment,
    ACTIONS(801), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11409] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(803), 1,
      anon_sym_endnote,
    ACTIONS(805), 1,
      anon_sym_endhnote,
    STATE(287), 1,
      aux_sym_block_note_repeat1,
    STATE(290), 1,
      sym_comment,
    STATE(470), 1,
      sym_line,
  [11434] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(748), 1,
      aux_sym_multiline_token1,
    ACTIONS(750), 1,
      anon_sym_BSLASH,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
    STATE(291), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_multiline_repeat1,
    STATE(482), 1,
      sym_escape_char,
  [11459] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    ACTIONS(811), 1,
      aux_sym_multiline_token1,
    ACTIONS(814), 1,
      anon_sym_BSLASH,
    STATE(482), 1,
      sym_escape_char,
    STATE(292), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [11482] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
    ACTIONS(817), 1,
      aux_sym_attr_alias_token1,
    STATE(293), 1,
      sym_comment,
    ACTIONS(819), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11503] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(821), 1,
      aux_sym_attr_alias_token1,
    STATE(294), 1,
      sym_comment,
    ACTIONS(823), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11524] = 8,
    ACTIONS(626), 1,
      aux_sym_attribute_token3,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(825), 1,
      aux_sym__NEWLINE_token1,
    STATE(295), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_attribute_repeat1,
    STATE(550), 1,
      sym_string,
  [11549] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      aux_sym_attr_alias_token1,
    STATE(296), 1,
      sym_comment,
    ACTIONS(829), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11570] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(831), 1,
      anon_sym_endnote,
    ACTIONS(833), 1,
      anon_sym_endhnote,
    STATE(297), 1,
      sym_comment,
    STATE(300), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11595] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(835), 1,
      aux_sym_line_token1,
    STATE(470), 1,
      sym_line,
    ACTIONS(838), 2,
      anon_sym_endnote,
      anon_sym_endhnote,
    STATE(298), 2,
      sym_comment,
      aux_sym_block_note_repeat1,
  [11616] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(748), 1,
      aux_sym_multiline_token1,
    ACTIONS(750), 1,
      anon_sym_BSLASH,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      sym_comment,
    STATE(302), 1,
      aux_sym_multiline_repeat1,
    STATE(482), 1,
      sym_escape_char,
  [11641] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(842), 1,
      anon_sym_endnote,
    ACTIONS(844), 1,
      anon_sym_endhnote,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(300), 1,
      sym_comment,
    STATE(470), 1,
      sym_line,
  [11666] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(842), 1,
      anon_sym_endnote,
    ACTIONS(844), 1,
      anon_sym_endhnote,
    STATE(301), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_block_note_repeat1,
    STATE(470), 1,
      sym_line,
  [11691] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(748), 1,
      aux_sym_multiline_token1,
    ACTIONS(750), 1,
      anon_sym_BSLASH,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_multiline_repeat1,
    STATE(302), 1,
      sym_comment,
    STATE(482), 1,
      sym_escape_char,
  [11716] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(848), 1,
      anon_sym_endnote,
    ACTIONS(850), 1,
      anon_sym_endhnote,
    STATE(298), 1,
      aux_sym_block_note_repeat1,
    STATE(303), 1,
      sym_comment,
    STATE(470), 1,
      sym_line,
  [11741] = 8,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_line_token1,
    ACTIONS(848), 1,
      anon_sym_endnote,
    ACTIONS(850), 1,
      anon_sym_endhnote,
    STATE(270), 1,
      aux_sym_block_note_repeat1,
    STATE(304), 1,
      sym_comment,
    STATE(470), 1,
      sym_line,
  [11766] = 8,
    ACTIONS(626), 1,
      aux_sym_attribute_token3,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    STATE(305), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_attribute_repeat1,
    STATE(617), 1,
      sym_string,
  [11791] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      sym_participant_name,
    STATE(306), 1,
      sym_comment,
    STATE(318), 1,
      sym_string,
  [11813] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_string,
    STATE(307), 1,
      sym_comment,
    STATE(452), 1,
      sym_participant_name,
  [11835] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_string,
    STATE(308), 1,
      sym_comment,
    STATE(328), 1,
      sym_participant_name,
  [11857] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(862), 1,
      anon_sym_endrnote,
    STATE(309), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [11879] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(838), 1,
      anon_sym_endrnote,
    ACTIONS(864), 1,
      aux_sym_line_token1,
    STATE(490), 1,
      sym_line,
    STATE(310), 2,
      sym_comment,
      aux_sym_block_note_repeat1,
  [11899] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    ACTIONS(752), 2,
      anon_sym_POUND,
      anon_sym_COLON,
    STATE(311), 2,
      sym_comment,
      aux_sym_line_note_repeat1,
  [11917] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(870), 1,
      anon_sym_endrnote,
    STATE(312), 1,
      sym_comment,
    STATE(334), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [11939] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_POUND,
    ACTIONS(876), 1,
      anon_sym_COLON,
    STATE(313), 1,
      sym_comment,
    STATE(336), 1,
      aux_sym_line_note_repeat1,
  [11961] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(880), 1,
      anon_sym_over,
    STATE(314), 1,
      sym_comment,
    ACTIONS(878), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [11979] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(884), 1,
      anon_sym_over,
    STATE(315), 1,
      sym_comment,
    ACTIONS(882), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [11997] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(888), 1,
      anon_sym_over,
    STATE(316), 1,
      sym_comment,
    ACTIONS(886), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [12015] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(890), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(892), 1,
      aux_sym_attribute_token3,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
    STATE(317), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [12035] = 5,
    ACTIONS(336), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(318), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [12053] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(897), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(899), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_participant_name,
    STATE(53), 1,
      sym_string,
    STATE(319), 1,
      sym_comment,
  [12075] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(903), 1,
      anon_sym_ATendjson,
    STATE(320), 1,
      sym_comment,
    STATE(327), 1,
      aux_sym_json_repeat1,
    ACTIONS(901), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12095] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendebnf,
    ACTIONS(905), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(321), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12113] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(322), 1,
      sym_comment,
    ACTIONS(910), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [12129] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(914), 1,
      anon_sym_ATendyaml,
    STATE(323), 1,
      sym_comment,
    STATE(329), 1,
      aux_sym_json_repeat1,
    ACTIONS(912), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12149] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(918), 1,
      anon_sym_ATendebnf,
    STATE(324), 1,
      sym_comment,
    STATE(333), 1,
      aux_sym_json_repeat1,
    ACTIONS(916), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12169] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(922), 1,
      anon_sym_ATendregex,
    STATE(325), 1,
      sym_comment,
    STATE(337), 1,
      aux_sym_json_repeat1,
    ACTIONS(920), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12189] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(926), 1,
      anon_sym_ATendditaa,
    STATE(326), 1,
      sym_comment,
    STATE(338), 1,
      aux_sym_json_repeat1,
    ACTIONS(924), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12209] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(928), 1,
      anon_sym_ATendjson,
    STATE(327), 1,
      sym_comment,
    STATE(386), 1,
      aux_sym_json_repeat1,
    ACTIONS(901), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12229] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_POUND,
    ACTIONS(932), 1,
      anon_sym_COLON,
    STATE(328), 1,
      sym_comment,
    STATE(353), 1,
      aux_sym_line_note_repeat1,
  [12251] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(934), 1,
      anon_sym_ATendyaml,
    STATE(329), 1,
      sym_comment,
    STATE(382), 1,
      aux_sym_json_repeat1,
    ACTIONS(912), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12271] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(938), 1,
      anon_sym_ATendchen,
    STATE(330), 1,
      sym_comment,
    STATE(347), 1,
      aux_sym_json_repeat1,
    ACTIONS(936), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12291] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      sym_string,
    STATE(331), 1,
      sym_comment,
    STATE(360), 1,
      sym_participant_name,
  [12313] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(940), 1,
      aux_sym_attribute_token1,
    ACTIONS(942), 1,
      aux_sym_attribute_token2,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    STATE(332), 1,
      sym_comment,
    STATE(604), 1,
      sym_string,
  [12335] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(946), 1,
      anon_sym_ATendebnf,
    STATE(321), 1,
      aux_sym_json_repeat1,
    STATE(333), 1,
      sym_comment,
    ACTIONS(916), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12355] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(948), 1,
      anon_sym_endrnote,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(334), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [12377] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(948), 1,
      anon_sym_endrnote,
    STATE(335), 1,
      sym_comment,
    STATE(374), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [12399] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_POUND,
    ACTIONS(932), 1,
      anon_sym_COLON,
    STATE(311), 1,
      aux_sym_line_note_repeat1,
    STATE(336), 1,
      sym_comment,
  [12421] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(950), 1,
      anon_sym_ATendregex,
    STATE(337), 1,
      sym_comment,
    STATE(339), 1,
      aux_sym_json_repeat1,
    ACTIONS(920), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12441] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(952), 1,
      anon_sym_ATendditaa,
    STATE(338), 1,
      sym_comment,
    STATE(342), 1,
      aux_sym_json_repeat1,
    ACTIONS(924), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12461] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendregex,
    ACTIONS(954), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(339), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12479] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(959), 1,
      anon_sym_ATendgantt,
    STATE(340), 1,
      sym_comment,
    STATE(344), 1,
      aux_sym_json_repeat1,
    ACTIONS(957), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12499] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(963), 1,
      anon_sym_ATendchronology,
    STATE(341), 1,
      sym_comment,
    STATE(346), 1,
      aux_sym_json_repeat1,
    ACTIONS(961), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12519] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendditaa,
    ACTIONS(965), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(342), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12537] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(970), 1,
      anon_sym_ATendmindmap,
    STATE(343), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym_json_repeat1,
    ACTIONS(968), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12557] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendgantt,
    ACTIONS(972), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(344), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12575] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(977), 1,
      anon_sym_ATendwbs,
    STATE(345), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_json_repeat1,
    ACTIONS(975), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12595] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendchronology,
    ACTIONS(979), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(346), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12613] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(982), 1,
      anon_sym_ATendchen,
    STATE(347), 1,
      sym_comment,
    STATE(351), 1,
      aux_sym_json_repeat1,
    ACTIONS(936), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12633] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendmindmap,
    ACTIONS(984), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(348), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12651] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(987), 1,
      anon_sym_ATendgantt,
    STATE(340), 1,
      aux_sym_json_repeat1,
    STATE(349), 1,
      sym_comment,
    ACTIONS(957), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12671] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendwbs,
    ACTIONS(989), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(350), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12689] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendchen,
    ACTIONS(992), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(351), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12707] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(995), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(997), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_participant_name,
    STATE(42), 1,
      sym_string,
    STATE(352), 1,
      sym_comment,
  [12729] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_COLON,
    STATE(311), 1,
      aux_sym_line_note_repeat1,
    STATE(353), 1,
      sym_comment,
  [12751] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1003), 1,
      anon_sym_ATendchronology,
    STATE(341), 1,
      aux_sym_json_repeat1,
    STATE(354), 1,
      sym_comment,
    ACTIONS(961), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12771] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1007), 1,
      anon_sym_over,
    STATE(355), 1,
      sym_comment,
    ACTIONS(1005), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [12789] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(1009), 1,
      aux_sym_attribute_token1,
    ACTIONS(1011), 1,
      aux_sym_attribute_token2,
    STATE(356), 1,
      sym_comment,
    STATE(549), 1,
      sym_string,
  [12811] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1015), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_participant_name,
    STATE(73), 1,
      sym_string,
    STATE(357), 1,
      sym_comment,
  [12833] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1017), 1,
      anon_sym_POUND,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    STATE(290), 1,
      sym__NEWLINE,
    STATE(358), 1,
      sym_comment,
  [12855] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1021), 1,
      anon_sym_endrnote,
    STATE(359), 1,
      sym_comment,
    STATE(415), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [12877] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(752), 1,
      aux_sym__NEWLINE_token1,
    STATE(360), 1,
      sym_comment,
    ACTIONS(757), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [12895] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(361), 1,
      sym_comment,
    ACTIONS(1023), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [12911] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_string,
    STATE(362), 1,
      sym_comment,
    STATE(397), 1,
      sym_participant_name,
  [12933] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1025), 1,
      anon_sym_endrnote,
    STATE(363), 1,
      sym_comment,
    STATE(365), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [12955] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_string,
    STATE(313), 1,
      sym_participant_name,
    STATE(364), 1,
      sym_comment,
  [12977] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1027), 1,
      anon_sym_endrnote,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(365), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [12999] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1027), 1,
      anon_sym_endrnote,
    STATE(366), 1,
      sym_comment,
    STATE(367), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [13021] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1029), 1,
      anon_sym_endrnote,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(367), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [13043] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1031), 1,
      anon_sym_ATendmindmap,
    STATE(343), 1,
      aux_sym_json_repeat1,
    STATE(368), 1,
      sym_comment,
    ACTIONS(968), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13063] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1033), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1035), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_participant_name,
    STATE(49), 1,
      sym_string,
    STATE(369), 1,
      sym_comment,
  [13085] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      sym_participant_name,
    STATE(318), 1,
      sym_string,
    STATE(370), 1,
      sym_comment,
  [13107] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      aux_sym_attribute_token1,
    ACTIONS(1039), 1,
      aux_sym_attribute_token2,
    STATE(371), 1,
      sym_comment,
    STATE(587), 1,
      sym_string,
  [13129] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1041), 1,
      anon_sym_ATendwbs,
    STATE(345), 1,
      aux_sym_json_repeat1,
    STATE(372), 1,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13149] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1043), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1045), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_participant_name,
    STATE(84), 1,
      sym_string,
    STATE(373), 1,
      sym_comment,
  [13171] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1047), 1,
      anon_sym_endrnote,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(374), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [13193] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1049), 1,
      anon_sym_endrnote,
    STATE(375), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [13215] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1047), 1,
      anon_sym_endrnote,
    STATE(309), 1,
      aux_sym_block_note_repeat1,
    STATE(376), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [13237] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1017), 1,
      anon_sym_POUND,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    STATE(312), 1,
      sym__NEWLINE,
    STATE(377), 1,
      sym_comment,
  [13259] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1051), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1053), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_participant_name,
    STATE(78), 1,
      sym_string,
    STATE(378), 1,
      sym_comment,
  [13281] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1055), 1,
      anon_sym_endrnote,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(379), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [13303] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1055), 1,
      anon_sym_endrnote,
    STATE(380), 1,
      sym_comment,
    STATE(383), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [13325] = 5,
    ACTIONS(340), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(381), 1,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [13343] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendyaml,
    ACTIONS(1057), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(382), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13361] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1060), 1,
      anon_sym_endrnote,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(383), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [13383] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1060), 1,
      anon_sym_endrnote,
    STATE(384), 1,
      sym_comment,
    STATE(385), 1,
      aux_sym_block_note_repeat1,
    STATE(490), 1,
      sym_line,
  [13405] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1062), 1,
      anon_sym_endrnote,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(385), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [13427] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      anon_sym_ATendjson,
    ACTIONS(1064), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(386), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13445] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1067), 1,
      anon_sym_POUND,
    ACTIONS(1069), 1,
      anon_sym_COLON,
    STATE(297), 1,
      sym__NEWLINE,
    STATE(387), 1,
      sym_comment,
  [13467] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1067), 1,
      anon_sym_POUND,
    ACTIONS(1069), 1,
      anon_sym_COLON,
    STATE(359), 1,
      sym__NEWLINE,
    STATE(388), 1,
      sym_comment,
  [13489] = 5,
    ACTIONS(344), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(389), 1,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [13507] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_POUND,
    ACTIONS(1073), 1,
      anon_sym_COLON,
    STATE(390), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_line_note_repeat1,
  [13529] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_POUND,
    ACTIONS(1077), 1,
      anon_sym_COLON,
    STATE(391), 1,
      sym_comment,
    STATE(393), 1,
      aux_sym_line_note_repeat1,
  [13551] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_POUND,
    ACTIONS(1077), 1,
      anon_sym_COLON,
    STATE(311), 1,
      aux_sym_line_note_repeat1,
    STATE(392), 1,
      sym_comment,
  [13573] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1079), 1,
      anon_sym_POUND,
    ACTIONS(1081), 1,
      anon_sym_COLON,
    STATE(311), 1,
      aux_sym_line_note_repeat1,
    STATE(393), 1,
      sym_comment,
  [13595] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1083), 1,
      anon_sym_POUND,
    ACTIONS(1085), 1,
      anon_sym_COLON,
    STATE(277), 1,
      sym__NEWLINE,
    STATE(394), 1,
      sym_comment,
  [13617] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1083), 1,
      anon_sym_POUND,
    ACTIONS(1085), 1,
      anon_sym_COLON,
    STATE(375), 1,
      sym__NEWLINE,
    STATE(395), 1,
      sym_comment,
  [13639] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_POUND,
    ACTIONS(1089), 1,
      anon_sym_COLON,
    STATE(396), 1,
      sym_comment,
    STATE(398), 1,
      aux_sym_line_note_repeat1,
  [13661] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_POUND,
    ACTIONS(1093), 1,
      anon_sym_COLON,
    STATE(397), 1,
      sym_comment,
    STATE(399), 1,
      aux_sym_line_note_repeat1,
  [13683] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_POUND,
    ACTIONS(1093), 1,
      anon_sym_COLON,
    STATE(311), 1,
      aux_sym_line_note_repeat1,
    STATE(398), 1,
      sym_comment,
  [13705] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_POUND,
    ACTIONS(1097), 1,
      anon_sym_COLON,
    STATE(311), 1,
      aux_sym_line_note_repeat1,
    STATE(399), 1,
      sym_comment,
  [13727] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1101), 1,
      anon_sym_over,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1099), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13745] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1105), 1,
      anon_sym_over,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1103), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13763] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1109), 1,
      anon_sym_over,
    STATE(402), 1,
      sym_comment,
    ACTIONS(1107), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13781] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1113), 1,
      anon_sym_over,
    STATE(403), 1,
      sym_comment,
    ACTIONS(1111), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13799] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(261), 1,
      sym_participant_name,
    STATE(318), 1,
      sym_string,
    STATE(404), 1,
      sym_comment,
  [13821] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym_participant_name,
    STATE(318), 1,
      sym_string,
    STATE(405), 1,
      sym_comment,
  [13843] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_string,
    STATE(390), 1,
      sym_participant_name,
    STATE(406), 1,
      sym_comment,
  [13865] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_string,
    STATE(391), 1,
      sym_participant_name,
    STATE(407), 1,
      sym_comment,
  [13887] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1117), 1,
      anon_sym_over,
    STATE(408), 1,
      sym_comment,
    ACTIONS(1115), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13905] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1121), 1,
      anon_sym_over,
    STATE(409), 1,
      sym_comment,
    ACTIONS(1119), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13923] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1125), 1,
      anon_sym_over,
    STATE(410), 1,
      sym_comment,
    ACTIONS(1123), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13941] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1129), 1,
      anon_sym_over,
    STATE(411), 1,
      sym_comment,
    ACTIONS(1127), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13959] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(265), 1,
      sym_participant_name,
    STATE(318), 1,
      sym_string,
    STATE(412), 1,
      sym_comment,
  [13981] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(266), 1,
      sym_participant_name,
    STATE(318), 1,
      sym_string,
    STATE(413), 1,
      sym_comment,
  [14003] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_string,
    STATE(396), 1,
      sym_participant_name,
    STATE(414), 1,
      sym_comment,
  [14025] = 7,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(860), 1,
      aux_sym_line_token1,
    ACTIONS(1025), 1,
      anon_sym_endrnote,
    STATE(310), 1,
      aux_sym_block_note_repeat1,
    STATE(415), 1,
      sym_comment,
    STATE(490), 1,
      sym_line,
  [14047] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1131), 1,
      ts_builtin_sym_end,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    STATE(416), 1,
      sym_comment,
    STATE(435), 1,
      aux_sym_json_repeat2,
  [14066] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(417), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [14081] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1137), 1,
      ts_builtin_sym_end,
    STATE(416), 1,
      aux_sym_json_repeat2,
    STATE(418), 1,
      sym_comment,
  [14100] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(419), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [14115] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1139), 1,
      ts_builtin_sym_end,
    STATE(420), 1,
      sym_comment,
    STATE(431), 1,
      aux_sym_json_repeat2,
  [14134] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(421), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [14149] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(422), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [14164] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(423), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [14179] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1141), 1,
      ts_builtin_sym_end,
    STATE(424), 1,
      sym_comment,
    STATE(446), 1,
      aux_sym_json_repeat2,
  [14198] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(425), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [14213] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(426), 1,
      sym_comment,
    ACTIONS(510), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [14228] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(427), 1,
      sym_comment,
    ACTIONS(518), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [14243] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(428), 1,
      sym_comment,
    ACTIONS(1143), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [14258] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_boolean_literal,
    STATE(429), 1,
      sym_comment,
    ACTIONS(1145), 2,
      anon_sym_true,
      anon_sym_false,
  [14275] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(430), 1,
      sym_comment,
    ACTIONS(1147), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [14290] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1149), 1,
      ts_builtin_sym_end,
    STATE(431), 1,
      sym_comment,
    STATE(435), 1,
      aux_sym_json_repeat2,
  [14309] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1151), 1,
      anon_sym_else,
    ACTIONS(1153), 1,
      anon_sym_end,
    STATE(432), 1,
      sym_comment,
    STATE(455), 1,
      aux_sym_alt_block_repeat1,
  [14328] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1151), 1,
      anon_sym_else,
    ACTIONS(1155), 1,
      anon_sym_end,
    STATE(433), 1,
      sym_comment,
    STATE(455), 1,
      aux_sym_alt_block_repeat1,
  [14347] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1157), 1,
      ts_builtin_sym_end,
    STATE(434), 1,
      sym_comment,
    STATE(447), 1,
      aux_sym_json_repeat2,
  [14366] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1159), 1,
      ts_builtin_sym_end,
    ACTIONS(1161), 1,
      aux_sym__NEWLINE_token1,
    STATE(435), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [14383] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1164), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(436), 1,
      sym_comment,
  [14402] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1166), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(437), 1,
      sym_comment,
  [14421] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1168), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(438), 1,
      sym_comment,
  [14440] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1170), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(439), 1,
      sym_comment,
  [14459] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1172), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(440), 1,
      sym_comment,
  [14478] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1174), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(441), 1,
      sym_comment,
  [14497] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1176), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(442), 1,
      sym_comment,
  [14516] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(443), 1,
      sym_comment,
    ACTIONS(1178), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [14531] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
      sym_boolean_literal,
    STATE(444), 1,
      sym_comment,
    ACTIONS(1180), 2,
      anon_sym_true,
      anon_sym_false,
  [14548] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1182), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(445), 1,
      sym_comment,
  [14567] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1184), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(446), 1,
      sym_comment,
  [14586] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1186), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(447), 1,
      sym_comment,
  [14605] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(448), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [14620] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1151), 1,
      anon_sym_else,
    ACTIONS(1188), 1,
      anon_sym_end,
    STATE(449), 1,
      sym_comment,
    STATE(455), 1,
      aux_sym_alt_block_repeat1,
  [14639] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(450), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [14654] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1190), 1,
      ts_builtin_sym_end,
    STATE(451), 1,
      sym_comment,
    STATE(489), 1,
      aux_sym_json_repeat2,
  [14673] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(452), 1,
      sym_comment,
    ACTIONS(752), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [14688] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1151), 1,
      anon_sym_else,
    ACTIONS(1192), 1,
      anon_sym_end,
    STATE(453), 1,
      sym_comment,
    STATE(455), 1,
      aux_sym_alt_block_repeat1,
  [14707] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1151), 1,
      anon_sym_else,
    ACTIONS(1194), 1,
      anon_sym_end,
    STATE(454), 1,
      sym_comment,
    STATE(455), 1,
      aux_sym_alt_block_repeat1,
  [14726] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1196), 1,
      anon_sym_else,
    ACTIONS(1199), 1,
      anon_sym_end,
    STATE(455), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [14743] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1151), 1,
      anon_sym_else,
    ACTIONS(1201), 1,
      anon_sym_end,
    STATE(455), 1,
      aux_sym_alt_block_repeat1,
    STATE(456), 1,
      sym_comment,
  [14762] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1203), 1,
      ts_builtin_sym_end,
    STATE(457), 1,
      sym_comment,
    STATE(459), 1,
      aux_sym_json_repeat2,
  [14781] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1205), 1,
      ts_builtin_sym_end,
    STATE(436), 1,
      aux_sym_json_repeat2,
    STATE(458), 1,
      sym_comment,
  [14800] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1207), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(459), 1,
      sym_comment,
  [14819] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1209), 1,
      ts_builtin_sym_end,
    STATE(437), 1,
      aux_sym_json_repeat2,
    STATE(460), 1,
      sym_comment,
  [14838] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1211), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(461), 1,
      sym_comment,
  [14857] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1213), 1,
      ts_builtin_sym_end,
    STATE(438), 1,
      aux_sym_json_repeat2,
    STATE(462), 1,
      sym_comment,
  [14876] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1215), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(463), 1,
      sym_comment,
  [14895] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1217), 1,
      ts_builtin_sym_end,
    STATE(439), 1,
      aux_sym_json_repeat2,
    STATE(464), 1,
      sym_comment,
  [14914] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1219), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(465), 1,
      sym_comment,
  [14933] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1221), 1,
      ts_builtin_sym_end,
    STATE(440), 1,
      aux_sym_json_repeat2,
    STATE(466), 1,
      sym_comment,
  [14952] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1223), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(467), 1,
      sym_comment,
  [14971] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1225), 1,
      ts_builtin_sym_end,
    STATE(461), 1,
      aux_sym_json_repeat2,
    STATE(468), 1,
      sym_comment,
  [14990] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(469), 1,
      sym_comment,
    ACTIONS(910), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [15005] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(470), 1,
      sym_comment,
    ACTIONS(1227), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [15020] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(190), 1,
      sym_boolean_literal,
    STATE(471), 1,
      sym_comment,
    ACTIONS(1229), 2,
      anon_sym_true,
      anon_sym_false,
  [15037] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1231), 1,
      ts_builtin_sym_end,
    STATE(441), 1,
      aux_sym_json_repeat2,
    STATE(472), 1,
      sym_comment,
  [15056] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1233), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(473), 1,
      sym_comment,
  [15075] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(474), 1,
      sym_comment,
    ACTIONS(1235), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [15090] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1237), 1,
      ts_builtin_sym_end,
    STATE(442), 1,
      aux_sym_json_repeat2,
    STATE(475), 1,
      sym_comment,
  [15109] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1239), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(476), 1,
      sym_comment,
  [15128] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1241), 1,
      ts_builtin_sym_end,
    STATE(445), 1,
      aux_sym_json_repeat2,
    STATE(477), 1,
      sym_comment,
  [15147] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1243), 1,
      ts_builtin_sym_end,
    STATE(463), 1,
      aux_sym_json_repeat2,
    STATE(478), 1,
      sym_comment,
  [15166] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1245), 1,
      ts_builtin_sym_end,
    STATE(465), 1,
      aux_sym_json_repeat2,
    STATE(479), 1,
      sym_comment,
  [15185] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1247), 1,
      ts_builtin_sym_end,
    STATE(467), 1,
      aux_sym_json_repeat2,
    STATE(480), 1,
      sym_comment,
  [15204] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(481), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [15219] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(482), 1,
      sym_comment,
    ACTIONS(1249), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [15234] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1251), 1,
      aux_sym__NEWLINE_token1,
    STATE(483), 1,
      sym_comment,
    ACTIONS(1253), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [15251] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1255), 1,
      ts_builtin_sym_end,
    STATE(473), 1,
      aux_sym_json_repeat2,
    STATE(484), 1,
      sym_comment,
  [15270] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(485), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [15285] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1257), 1,
      ts_builtin_sym_end,
    STATE(476), 1,
      aux_sym_json_repeat2,
    STATE(486), 1,
      sym_comment,
  [15304] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(487), 1,
      sym_comment,
    ACTIONS(1259), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [15319] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(488), 1,
      sym_comment,
    ACTIONS(1261), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [15334] = 6,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1263), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_json_repeat2,
    STATE(489), 1,
      sym_comment,
  [15353] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(490), 1,
      sym_comment,
    ACTIONS(1227), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [15367] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(491), 1,
      sym_comment,
    ACTIONS(596), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15381] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1265), 1,
      aux_sym_line_token1,
    STATE(204), 1,
      sym_line,
    STATE(492), 1,
      sym_comment,
  [15397] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(493), 1,
      sym_comment,
    ACTIONS(1267), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15411] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1269), 1,
      anon_sym_DASH,
    ACTIONS(1271), 1,
      anon_sym_DASH_DASH,
    STATE(494), 1,
      sym_comment,
  [15427] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1265), 1,
      aux_sym_line_token1,
    STATE(214), 1,
      sym_line,
    STATE(495), 1,
      sym_comment,
  [15443] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1265), 1,
      aux_sym_line_token1,
    STATE(196), 1,
      sym_line,
    STATE(496), 1,
      sym_comment,
  [15459] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1273), 1,
      aux_sym__NEWLINE_token1,
    STATE(153), 1,
      sym__NEWLINE,
    STATE(497), 1,
      sym_comment,
  [15475] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(498), 1,
      sym_comment,
    ACTIONS(588), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15489] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1275), 1,
      aux_sym_line_token1,
    STATE(155), 1,
      sym_line,
    STATE(499), 1,
      sym_comment,
  [15505] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1275), 1,
      aux_sym_line_token1,
    STATE(170), 1,
      sym_line,
    STATE(500), 1,
      sym_comment,
  [15521] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1277), 1,
      aux_sym__NEWLINE_token1,
    STATE(116), 1,
      sym__NEWLINE,
    STATE(501), 1,
      sym_comment,
  [15537] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1277), 1,
      aux_sym__NEWLINE_token1,
    STATE(119), 1,
      sym__NEWLINE,
    STATE(502), 1,
      sym_comment,
  [15553] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1265), 1,
      aux_sym_line_token1,
    STATE(176), 1,
      sym_line,
    STATE(503), 1,
      sym_comment,
  [15569] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1275), 1,
      aux_sym_line_token1,
    STATE(215), 1,
      sym_line,
    STATE(504), 1,
      sym_comment,
  [15585] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(505), 1,
      sym_comment,
    ACTIONS(1279), 2,
      ts_builtin_sym_end,
      aux_sym__NEWLINE_token1,
  [15599] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1281), 1,
      aux_sym__NEWLINE_token1,
    STATE(166), 1,
      sym__NEWLINE,
    STATE(506), 1,
      sym_comment,
  [15615] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1281), 1,
      aux_sym__NEWLINE_token1,
    STATE(188), 1,
      sym__NEWLINE,
    STATE(507), 1,
      sym_comment,
  [15631] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1275), 1,
      aux_sym_line_token1,
    STATE(181), 1,
      sym_line,
    STATE(508), 1,
      sym_comment,
  [15647] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(874), 1,
      anon_sym_POUND,
    ACTIONS(876), 1,
      anon_sym_COLON,
    STATE(509), 1,
      sym_comment,
  [15663] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1275), 1,
      aux_sym_line_token1,
    STATE(185), 1,
      sym_line,
    STATE(510), 1,
      sym_comment,
  [15679] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1275), 1,
      aux_sym_line_token1,
    STATE(186), 1,
      sym_line,
    STATE(511), 1,
      sym_comment,
  [15695] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1283), 1,
      aux_sym_line_token1,
    STATE(122), 1,
      sym_line,
    STATE(512), 1,
      sym_comment,
  [15711] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(513), 1,
      sym_comment,
    ACTIONS(510), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [15725] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1273), 1,
      aux_sym__NEWLINE_token1,
    STATE(195), 1,
      sym__NEWLINE,
    STATE(514), 1,
      sym_comment,
  [15741] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(515), 1,
      sym_comment,
    ACTIONS(518), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [15755] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(516), 1,
      sym_comment,
    ACTIONS(580), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15769] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1285), 1,
      anon_sym_DASH,
    ACTIONS(1287), 1,
      anon_sym_DASH_DASH,
    STATE(517), 1,
      sym_comment,
  [15785] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1289), 1,
      aux_sym_label_token1,
    STATE(5), 1,
      sym_label,
    STATE(518), 1,
      sym_comment,
  [15801] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1291), 1,
      aux_sym_label_token1,
    STATE(17), 1,
      sym_label,
    STATE(519), 1,
      sym_comment,
  [15817] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1291), 1,
      aux_sym_label_token1,
    STATE(18), 1,
      sym_label,
    STATE(520), 1,
      sym_comment,
  [15833] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1293), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1295), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(521), 1,
      sym_comment,
  [15849] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(522), 1,
      sym_comment,
    ACTIONS(742), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15863] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1297), 1,
      anon_sym_POUND,
    ACTIONS(1299), 1,
      anon_sym_COLON,
    STATE(523), 1,
      sym_comment,
  [15879] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1071), 1,
      anon_sym_POUND,
    ACTIONS(1073), 1,
      anon_sym_COLON,
    STATE(524), 1,
      sym_comment,
  [15895] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1283), 1,
      aux_sym_line_token1,
    STATE(88), 1,
      sym_line,
    STATE(525), 1,
      sym_comment,
  [15911] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(668), 1,
      aux_sym__NEWLINE_token1,
    STATE(515), 1,
      sym__NEWLINE,
    STATE(526), 1,
      sym_comment,
  [15927] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1265), 1,
      aux_sym_line_token1,
    STATE(163), 1,
      sym_line,
    STATE(527), 1,
      sym_comment,
  [15943] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(528), 1,
      sym_comment,
    ACTIONS(612), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15957] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1265), 1,
      aux_sym_line_token1,
    STATE(152), 1,
      sym_line,
    STATE(529), 1,
      sym_comment,
  [15973] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1289), 1,
      aux_sym_label_token1,
    STATE(6), 1,
      sym_label,
    STATE(530), 1,
      sym_comment,
  [15989] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1291), 1,
      aux_sym_label_token1,
    STATE(22), 1,
      sym_label,
    STATE(531), 1,
      sym_comment,
  [16005] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1291), 1,
      aux_sym_label_token1,
    STATE(23), 1,
      sym_label,
    STATE(532), 1,
      sym_comment,
  [16021] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1301), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1303), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(533), 1,
      sym_comment,
  [16037] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1289), 1,
      aux_sym_label_token1,
    STATE(8), 1,
      sym_label,
    STATE(534), 1,
      sym_comment,
  [16053] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1305), 1,
      anon_sym_POUND,
    ACTIONS(1307), 1,
      anon_sym_COLON,
    STATE(535), 1,
      sym_comment,
  [16069] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1087), 1,
      anon_sym_POUND,
    ACTIONS(1089), 1,
      anon_sym_COLON,
    STATE(536), 1,
      sym_comment,
  [16085] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      aux_sym__NEWLINE_token1,
    STATE(427), 1,
      sym__NEWLINE,
    STATE(537), 1,
      sym_comment,
  [16101] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1289), 1,
      aux_sym_label_token1,
    STATE(4), 1,
      sym_label,
    STATE(538), 1,
      sym_comment,
  [16117] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1291), 1,
      aux_sym_label_token1,
    STATE(15), 1,
      sym_label,
    STATE(539), 1,
      sym_comment,
  [16133] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1291), 1,
      aux_sym_label_token1,
    STATE(12), 1,
      sym_label,
    STATE(540), 1,
      sym_comment,
  [16149] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1283), 1,
      aux_sym_line_token1,
    STATE(93), 1,
      sym_line,
    STATE(541), 1,
      sym_comment,
  [16165] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1309), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1311), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(542), 1,
      sym_comment,
  [16181] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1313), 1,
      anon_sym_POUND,
    ACTIONS(1315), 1,
      anon_sym_COLON,
    STATE(543), 1,
      sym_comment,
  [16197] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1283), 1,
      aux_sym_line_token1,
    STATE(85), 1,
      sym_line,
    STATE(544), 1,
      sym_comment,
  [16213] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(545), 1,
      sym_comment,
    ACTIONS(763), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [16227] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1283), 1,
      aux_sym_line_token1,
    STATE(102), 1,
      sym_line,
    STATE(546), 1,
      sym_comment,
  [16243] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1283), 1,
      aux_sym_line_token1,
    STATE(103), 1,
      sym_line,
    STATE(547), 1,
      sym_comment,
  [16259] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1093), 1,
      anon_sym_COLON,
    STATE(548), 1,
      sym_comment,
  [16272] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1317), 1,
      aux_sym_attribute_token2,
    STATE(549), 1,
      sym_comment,
  [16285] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1319), 1,
      aux_sym__NEWLINE_token1,
    STATE(550), 1,
      sym_comment,
  [16298] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1321), 1,
      aux_sym_attribute_token3,
    STATE(551), 1,
      sym_comment,
  [16311] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1323), 1,
      sym_color,
    STATE(552), 1,
      sym_comment,
  [16324] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1325), 1,
      aux_sym_attr_alias_token1,
    STATE(553), 1,
      sym_comment,
  [16337] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(759), 1,
      aux_sym__NEWLINE_token1,
    STATE(554), 1,
      sym_comment,
  [16350] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    STATE(555), 1,
      sym_comment,
  [16363] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1327), 1,
      ts_builtin_sym_end,
    STATE(556), 1,
      sym_comment,
  [16376] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1329), 1,
      anon_sym_SLASH,
    STATE(557), 1,
      sym_comment,
  [16389] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1331), 1,
      anon_sym_EQ_EQ,
    STATE(558), 1,
      sym_comment,
  [16402] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1333), 1,
      aux_sym_custom_label_token1,
    STATE(559), 1,
      sym_comment,
  [16415] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1335), 1,
      aux_sym_attribute_token3,
    STATE(560), 1,
      sym_comment,
  [16428] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      sym_color,
    STATE(561), 1,
      sym_comment,
  [16441] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1339), 1,
      aux_sym_custom_label_token1,
    STATE(562), 1,
      sym_comment,
  [16454] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1341), 1,
      sym_color,
    STATE(563), 1,
      sym_comment,
  [16467] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1343), 1,
      anon_sym_RBRACK,
    STATE(564), 1,
      sym_comment,
  [16480] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1345), 1,
      aux_sym_attr_alias_token1,
    STATE(565), 1,
      sym_comment,
  [16493] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1347), 1,
      sym_color,
    STATE(566), 1,
      sym_comment,
  [16506] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1349), 1,
      ts_builtin_sym_end,
    STATE(567), 1,
      sym_comment,
  [16519] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1077), 1,
      anon_sym_COLON,
    STATE(568), 1,
      sym_comment,
  [16532] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1351), 1,
      aux_sym_sequence_diagram_token1,
    STATE(569), 1,
      sym_comment,
  [16545] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      anon_sym_RBRACK,
    STATE(570), 1,
      sym_comment,
  [16558] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1081), 1,
      anon_sym_COLON,
    STATE(571), 1,
      sym_comment,
  [16571] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_sequence_diagram_token1,
    STATE(572), 1,
      sym_comment,
  [16584] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1357), 1,
      anon_sym_COLON,
    STATE(573), 1,
      sym_comment,
  [16597] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1359), 1,
      anon_sym_COLON,
    STATE(574), 1,
      sym_comment,
  [16610] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(932), 1,
      anon_sym_COLON,
    STATE(575), 1,
      sym_comment,
  [16623] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1361), 1,
      sym_color,
    STATE(576), 1,
      sym_comment,
  [16636] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1363), 1,
      aux_sym_sequence_diagram_token1,
    STATE(577), 1,
      sym_comment,
  [16649] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(825), 1,
      aux_sym__NEWLINE_token1,
    STATE(578), 1,
      sym_comment,
  [16662] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1365), 1,
      anon_sym_RBRACK,
    STATE(579), 1,
      sym_comment,
  [16675] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1367), 1,
      anon_sym_EQ_EQ,
    STATE(580), 1,
      sym_comment,
  [16688] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1369), 1,
      anon_sym_RBRACK,
    STATE(581), 1,
      sym_comment,
  [16701] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1371), 1,
      aux_sym_separator_token1,
    STATE(582), 1,
      sym_comment,
  [16714] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1373), 1,
      anon_sym_EQ_EQ,
    STATE(583), 1,
      sym_comment,
  [16727] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1375), 1,
      anon_sym_COLON,
    STATE(584), 1,
      sym_comment,
  [16740] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1001), 1,
      anon_sym_COLON,
    STATE(585), 1,
      sym_comment,
  [16753] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1377), 1,
      sym_color,
    STATE(586), 1,
      sym_comment,
  [16766] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1379), 1,
      aux_sym_attribute_token2,
    STATE(587), 1,
      sym_comment,
  [16779] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1381), 1,
      anon_sym_COLON,
    STATE(588), 1,
      sym_comment,
  [16792] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1383), 1,
      aux_sym_attr_alias_token1,
    STATE(589), 1,
      sym_comment,
  [16805] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1385), 1,
      sym_color,
    STATE(590), 1,
      sym_comment,
  [16818] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1387), 1,
      aux_sym_attribute_token3,
    STATE(591), 1,
      sym_comment,
  [16831] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1389), 1,
      aux_sym__NEWLINE_token1,
    STATE(592), 1,
      sym_comment,
  [16844] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1097), 1,
      anon_sym_COLON,
    STATE(593), 1,
      sym_comment,
  [16857] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1391), 1,
      aux_sym_sequence_diagram_token1,
    STATE(594), 1,
      sym_comment,
  [16870] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1393), 1,
      anon_sym_COLON,
    STATE(595), 1,
      sym_comment,
  [16883] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1395), 1,
      anon_sym_COLON,
    STATE(596), 1,
      sym_comment,
  [16896] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1397), 1,
      aux_sym_separator_token1,
    STATE(597), 1,
      sym_comment,
  [16909] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1399), 1,
      aux_sym_attr_alias_token1,
    STATE(598), 1,
      sym_comment,
  [16922] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1401), 1,
      ts_builtin_sym_end,
    STATE(599), 1,
      sym_comment,
  [16935] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1403), 1,
      sym_color,
    STATE(600), 1,
      sym_comment,
  [16948] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1405), 1,
      aux_sym_escape_char_token1,
    STATE(601), 1,
      sym_comment,
  [16961] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1407), 1,
      sym_color,
    STATE(602), 1,
      sym_comment,
  [16974] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(340), 1,
      aux_sym_attribute_token2,
    STATE(603), 1,
      sym_comment,
  [16987] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1409), 1,
      aux_sym_attribute_token2,
    STATE(604), 1,
      sym_comment,
  [17000] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1411), 1,
      aux_sym_attr_alias_token1,
    STATE(605), 1,
      sym_comment,
  [17013] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1413), 1,
      sym_color,
    STATE(606), 1,
      sym_comment,
  [17026] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1415), 1,
      sym_color,
    STATE(607), 1,
      sym_comment,
  [17039] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1417), 1,
      sym_color,
    STATE(608), 1,
      sym_comment,
  [17052] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1419), 1,
      sym_color,
    STATE(609), 1,
      sym_comment,
  [17065] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1421), 1,
      aux_sym_separator_token1,
    STATE(610), 1,
      sym_comment,
  [17078] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(344), 1,
      aux_sym_attribute_token2,
    STATE(611), 1,
      sym_comment,
  [17091] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1423), 1,
      sym_color,
    STATE(612), 1,
      sym_comment,
  [17104] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1425), 1,
      aux_sym_comment_token2,
    STATE(613), 1,
      sym_comment,
  [17117] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1427), 1,
      aux_sym_sequence_diagram_token1,
    STATE(614), 1,
      sym_comment,
  [17130] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1429), 1,
      aux_sym_attr_alias_token1,
    STATE(615), 1,
      sym_comment,
  [17143] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1431), 1,
      aux_sym_comment_token1,
    STATE(616), 1,
      sym_comment,
  [17156] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1433), 1,
      aux_sym__NEWLINE_token1,
    STATE(617), 1,
      sym_comment,
  [17169] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1435), 1,
      anon_sym_RBRACK,
    STATE(618), 1,
      sym_comment,
  [17182] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1437), 1,
      sym_color,
    STATE(619), 1,
      sym_comment,
  [17195] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1439), 1,
      sym_color,
    STATE(620), 1,
      sym_comment,
  [17208] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1441), 1,
      sym_color,
    STATE(621), 1,
      sym_comment,
  [17221] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1443), 1,
      sym_color,
    STATE(622), 1,
      sym_comment,
  [17234] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1445), 1,
      aux_sym_sequence_diagram_token1,
    STATE(623), 1,
      sym_comment,
  [17247] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1447), 1,
      ts_builtin_sym_end,
    STATE(624), 1,
      sym_comment,
  [17260] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1449), 1,
      aux_sym_escape_char_token1,
    STATE(625), 1,
      sym_comment,
  [17273] = 1,
    ACTIONS(1451), 1,
      ts_builtin_sym_end,
  [17277] = 1,
    ACTIONS(1453), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 279,
  [SMALL_STATE(6)] = 372,
  [SMALL_STATE(7)] = 465,
  [SMALL_STATE(8)] = 558,
  [SMALL_STATE(9)] = 646,
  [SMALL_STATE(10)] = 732,
  [SMALL_STATE(11)] = 820,
  [SMALL_STATE(12)] = 907,
  [SMALL_STATE(13)] = 994,
  [SMALL_STATE(14)] = 1079,
  [SMALL_STATE(15)] = 1164,
  [SMALL_STATE(16)] = 1251,
  [SMALL_STATE(17)] = 1338,
  [SMALL_STATE(18)] = 1425,
  [SMALL_STATE(19)] = 1512,
  [SMALL_STATE(20)] = 1599,
  [SMALL_STATE(21)] = 1686,
  [SMALL_STATE(22)] = 1773,
  [SMALL_STATE(23)] = 1860,
  [SMALL_STATE(24)] = 1947,
  [SMALL_STATE(25)] = 2034,
  [SMALL_STATE(26)] = 2121,
  [SMALL_STATE(27)] = 2208,
  [SMALL_STATE(28)] = 2267,
  [SMALL_STATE(29)] = 2325,
  [SMALL_STATE(30)] = 2383,
  [SMALL_STATE(31)] = 2436,
  [SMALL_STATE(32)] = 2489,
  [SMALL_STATE(33)] = 2542,
  [SMALL_STATE(34)] = 2593,
  [SMALL_STATE(35)] = 2643,
  [SMALL_STATE(36)] = 2695,
  [SMALL_STATE(37)] = 2747,
  [SMALL_STATE(38)] = 2799,
  [SMALL_STATE(39)] = 2851,
  [SMALL_STATE(40)] = 2903,
  [SMALL_STATE(41)] = 2955,
  [SMALL_STATE(42)] = 3005,
  [SMALL_STATE(43)] = 3046,
  [SMALL_STATE(44)] = 3087,
  [SMALL_STATE(45)] = 3128,
  [SMALL_STATE(46)] = 3168,
  [SMALL_STATE(47)] = 3208,
  [SMALL_STATE(48)] = 3248,
  [SMALL_STATE(49)] = 3288,
  [SMALL_STATE(50)] = 3328,
  [SMALL_STATE(51)] = 3368,
  [SMALL_STATE(52)] = 3408,
  [SMALL_STATE(53)] = 3454,
  [SMALL_STATE(54)] = 3494,
  [SMALL_STATE(55)] = 3534,
  [SMALL_STATE(56)] = 3574,
  [SMALL_STATE(57)] = 3614,
  [SMALL_STATE(58)] = 3654,
  [SMALL_STATE(59)] = 3693,
  [SMALL_STATE(60)] = 3732,
  [SMALL_STATE(61)] = 3771,
  [SMALL_STATE(62)] = 3814,
  [SMALL_STATE(63)] = 3853,
  [SMALL_STATE(64)] = 3892,
  [SMALL_STATE(65)] = 3931,
  [SMALL_STATE(66)] = 3976,
  [SMALL_STATE(67)] = 4021,
  [SMALL_STATE(68)] = 4060,
  [SMALL_STATE(69)] = 4099,
  [SMALL_STATE(70)] = 4138,
  [SMALL_STATE(71)] = 4177,
  [SMALL_STATE(72)] = 4216,
  [SMALL_STATE(73)] = 4255,
  [SMALL_STATE(74)] = 4294,
  [SMALL_STATE(75)] = 4333,
  [SMALL_STATE(76)] = 4372,
  [SMALL_STATE(77)] = 4412,
  [SMALL_STATE(78)] = 4454,
  [SMALL_STATE(79)] = 4492,
  [SMALL_STATE(80)] = 4530,
  [SMALL_STATE(81)] = 4568,
  [SMALL_STATE(82)] = 4606,
  [SMALL_STATE(83)] = 4644,
  [SMALL_STATE(84)] = 4682,
  [SMALL_STATE(85)] = 4720,
  [SMALL_STATE(86)] = 4757,
  [SMALL_STATE(87)] = 4794,
  [SMALL_STATE(88)] = 4831,
  [SMALL_STATE(89)] = 4868,
  [SMALL_STATE(90)] = 4905,
  [SMALL_STATE(91)] = 4942,
  [SMALL_STATE(92)] = 4979,
  [SMALL_STATE(93)] = 5016,
  [SMALL_STATE(94)] = 5053,
  [SMALL_STATE(95)] = 5090,
  [SMALL_STATE(96)] = 5127,
  [SMALL_STATE(97)] = 5164,
  [SMALL_STATE(98)] = 5201,
  [SMALL_STATE(99)] = 5238,
  [SMALL_STATE(100)] = 5275,
  [SMALL_STATE(101)] = 5312,
  [SMALL_STATE(102)] = 5349,
  [SMALL_STATE(103)] = 5386,
  [SMALL_STATE(104)] = 5423,
  [SMALL_STATE(105)] = 5460,
  [SMALL_STATE(106)] = 5497,
  [SMALL_STATE(107)] = 5534,
  [SMALL_STATE(108)] = 5571,
  [SMALL_STATE(109)] = 5608,
  [SMALL_STATE(110)] = 5645,
  [SMALL_STATE(111)] = 5682,
  [SMALL_STATE(112)] = 5721,
  [SMALL_STATE(113)] = 5758,
  [SMALL_STATE(114)] = 5795,
  [SMALL_STATE(115)] = 5832,
  [SMALL_STATE(116)] = 5869,
  [SMALL_STATE(117)] = 5906,
  [SMALL_STATE(118)] = 5943,
  [SMALL_STATE(119)] = 5980,
  [SMALL_STATE(120)] = 6017,
  [SMALL_STATE(121)] = 6054,
  [SMALL_STATE(122)] = 6091,
  [SMALL_STATE(123)] = 6128,
  [SMALL_STATE(124)] = 6165,
  [SMALL_STATE(125)] = 6202,
  [SMALL_STATE(126)] = 6239,
  [SMALL_STATE(127)] = 6276,
  [SMALL_STATE(128)] = 6313,
  [SMALL_STATE(129)] = 6350,
  [SMALL_STATE(130)] = 6387,
  [SMALL_STATE(131)] = 6426,
  [SMALL_STATE(132)] = 6463,
  [SMALL_STATE(133)] = 6499,
  [SMALL_STATE(134)] = 6535,
  [SMALL_STATE(135)] = 6571,
  [SMALL_STATE(136)] = 6607,
  [SMALL_STATE(137)] = 6643,
  [SMALL_STATE(138)] = 6679,
  [SMALL_STATE(139)] = 6715,
  [SMALL_STATE(140)] = 6751,
  [SMALL_STATE(141)] = 6787,
  [SMALL_STATE(142)] = 6823,
  [SMALL_STATE(143)] = 6859,
  [SMALL_STATE(144)] = 6895,
  [SMALL_STATE(145)] = 6931,
  [SMALL_STATE(146)] = 6967,
  [SMALL_STATE(147)] = 7003,
  [SMALL_STATE(148)] = 7039,
  [SMALL_STATE(149)] = 7075,
  [SMALL_STATE(150)] = 7111,
  [SMALL_STATE(151)] = 7147,
  [SMALL_STATE(152)] = 7183,
  [SMALL_STATE(153)] = 7219,
  [SMALL_STATE(154)] = 7255,
  [SMALL_STATE(155)] = 7291,
  [SMALL_STATE(156)] = 7327,
  [SMALL_STATE(157)] = 7363,
  [SMALL_STATE(158)] = 7399,
  [SMALL_STATE(159)] = 7435,
  [SMALL_STATE(160)] = 7471,
  [SMALL_STATE(161)] = 7507,
  [SMALL_STATE(162)] = 7543,
  [SMALL_STATE(163)] = 7579,
  [SMALL_STATE(164)] = 7615,
  [SMALL_STATE(165)] = 7651,
  [SMALL_STATE(166)] = 7687,
  [SMALL_STATE(167)] = 7723,
  [SMALL_STATE(168)] = 7759,
  [SMALL_STATE(169)] = 7795,
  [SMALL_STATE(170)] = 7831,
  [SMALL_STATE(171)] = 7867,
  [SMALL_STATE(172)] = 7903,
  [SMALL_STATE(173)] = 7939,
  [SMALL_STATE(174)] = 7975,
  [SMALL_STATE(175)] = 8011,
  [SMALL_STATE(176)] = 8047,
  [SMALL_STATE(177)] = 8083,
  [SMALL_STATE(178)] = 8119,
  [SMALL_STATE(179)] = 8155,
  [SMALL_STATE(180)] = 8191,
  [SMALL_STATE(181)] = 8227,
  [SMALL_STATE(182)] = 8263,
  [SMALL_STATE(183)] = 8299,
  [SMALL_STATE(184)] = 8335,
  [SMALL_STATE(185)] = 8371,
  [SMALL_STATE(186)] = 8407,
  [SMALL_STATE(187)] = 8443,
  [SMALL_STATE(188)] = 8479,
  [SMALL_STATE(189)] = 8515,
  [SMALL_STATE(190)] = 8551,
  [SMALL_STATE(191)] = 8587,
  [SMALL_STATE(192)] = 8623,
  [SMALL_STATE(193)] = 8659,
  [SMALL_STATE(194)] = 8695,
  [SMALL_STATE(195)] = 8731,
  [SMALL_STATE(196)] = 8767,
  [SMALL_STATE(197)] = 8803,
  [SMALL_STATE(198)] = 8839,
  [SMALL_STATE(199)] = 8875,
  [SMALL_STATE(200)] = 8911,
  [SMALL_STATE(201)] = 8947,
  [SMALL_STATE(202)] = 8983,
  [SMALL_STATE(203)] = 9019,
  [SMALL_STATE(204)] = 9055,
  [SMALL_STATE(205)] = 9091,
  [SMALL_STATE(206)] = 9127,
  [SMALL_STATE(207)] = 9163,
  [SMALL_STATE(208)] = 9199,
  [SMALL_STATE(209)] = 9235,
  [SMALL_STATE(210)] = 9271,
  [SMALL_STATE(211)] = 9307,
  [SMALL_STATE(212)] = 9343,
  [SMALL_STATE(213)] = 9379,
  [SMALL_STATE(214)] = 9415,
  [SMALL_STATE(215)] = 9451,
  [SMALL_STATE(216)] = 9487,
  [SMALL_STATE(217)] = 9515,
  [SMALL_STATE(218)] = 9543,
  [SMALL_STATE(219)] = 9571,
  [SMALL_STATE(220)] = 9607,
  [SMALL_STATE(221)] = 9643,
  [SMALL_STATE(222)] = 9679,
  [SMALL_STATE(223)] = 9706,
  [SMALL_STATE(224)] = 9733,
  [SMALL_STATE(225)] = 9760,
  [SMALL_STATE(226)] = 9787,
  [SMALL_STATE(227)] = 9811,
  [SMALL_STATE(228)] = 9835,
  [SMALL_STATE(229)] = 9859,
  [SMALL_STATE(230)] = 9883,
  [SMALL_STATE(231)] = 9906,
  [SMALL_STATE(232)] = 9935,
  [SMALL_STATE(233)] = 9964,
  [SMALL_STATE(234)] = 9987,
  [SMALL_STATE(235)] = 10016,
  [SMALL_STATE(236)] = 10042,
  [SMALL_STATE(237)] = 10062,
  [SMALL_STATE(238)] = 10088,
  [SMALL_STATE(239)] = 10108,
  [SMALL_STATE(240)] = 10128,
  [SMALL_STATE(241)] = 10156,
  [SMALL_STATE(242)] = 10184,
  [SMALL_STATE(243)] = 10210,
  [SMALL_STATE(244)] = 10234,
  [SMALL_STATE(245)] = 10262,
  [SMALL_STATE(246)] = 10290,
  [SMALL_STATE(247)] = 10316,
  [SMALL_STATE(248)] = 10342,
  [SMALL_STATE(249)] = 10368,
  [SMALL_STATE(250)] = 10394,
  [SMALL_STATE(251)] = 10420,
  [SMALL_STATE(252)] = 10448,
  [SMALL_STATE(253)] = 10474,
  [SMALL_STATE(254)] = 10500,
  [SMALL_STATE(255)] = 10526,
  [SMALL_STATE(256)] = 10552,
  [SMALL_STATE(257)] = 10578,
  [SMALL_STATE(258)] = 10604,
  [SMALL_STATE(259)] = 10630,
  [SMALL_STATE(260)] = 10656,
  [SMALL_STATE(261)] = 10682,
  [SMALL_STATE(262)] = 10710,
  [SMALL_STATE(263)] = 10738,
  [SMALL_STATE(264)] = 10766,
  [SMALL_STATE(265)] = 10794,
  [SMALL_STATE(266)] = 10822,
  [SMALL_STATE(267)] = 10850,
  [SMALL_STATE(268)] = 10878,
  [SMALL_STATE(269)] = 10904,
  [SMALL_STATE(270)] = 10929,
  [SMALL_STATE(271)] = 10954,
  [SMALL_STATE(272)] = 10975,
  [SMALL_STATE(273)] = 11000,
  [SMALL_STATE(274)] = 11025,
  [SMALL_STATE(275)] = 11046,
  [SMALL_STATE(276)] = 11071,
  [SMALL_STATE(277)] = 11092,
  [SMALL_STATE(278)] = 11117,
  [SMALL_STATE(279)] = 11142,
  [SMALL_STATE(280)] = 11167,
  [SMALL_STATE(281)] = 11192,
  [SMALL_STATE(282)] = 11217,
  [SMALL_STATE(283)] = 11242,
  [SMALL_STATE(284)] = 11267,
  [SMALL_STATE(285)] = 11292,
  [SMALL_STATE(286)] = 11317,
  [SMALL_STATE(287)] = 11338,
  [SMALL_STATE(288)] = 11363,
  [SMALL_STATE(289)] = 11388,
  [SMALL_STATE(290)] = 11409,
  [SMALL_STATE(291)] = 11434,
  [SMALL_STATE(292)] = 11459,
  [SMALL_STATE(293)] = 11482,
  [SMALL_STATE(294)] = 11503,
  [SMALL_STATE(295)] = 11524,
  [SMALL_STATE(296)] = 11549,
  [SMALL_STATE(297)] = 11570,
  [SMALL_STATE(298)] = 11595,
  [SMALL_STATE(299)] = 11616,
  [SMALL_STATE(300)] = 11641,
  [SMALL_STATE(301)] = 11666,
  [SMALL_STATE(302)] = 11691,
  [SMALL_STATE(303)] = 11716,
  [SMALL_STATE(304)] = 11741,
  [SMALL_STATE(305)] = 11766,
  [SMALL_STATE(306)] = 11791,
  [SMALL_STATE(307)] = 11813,
  [SMALL_STATE(308)] = 11835,
  [SMALL_STATE(309)] = 11857,
  [SMALL_STATE(310)] = 11879,
  [SMALL_STATE(311)] = 11899,
  [SMALL_STATE(312)] = 11917,
  [SMALL_STATE(313)] = 11939,
  [SMALL_STATE(314)] = 11961,
  [SMALL_STATE(315)] = 11979,
  [SMALL_STATE(316)] = 11997,
  [SMALL_STATE(317)] = 12015,
  [SMALL_STATE(318)] = 12035,
  [SMALL_STATE(319)] = 12053,
  [SMALL_STATE(320)] = 12075,
  [SMALL_STATE(321)] = 12095,
  [SMALL_STATE(322)] = 12113,
  [SMALL_STATE(323)] = 12129,
  [SMALL_STATE(324)] = 12149,
  [SMALL_STATE(325)] = 12169,
  [SMALL_STATE(326)] = 12189,
  [SMALL_STATE(327)] = 12209,
  [SMALL_STATE(328)] = 12229,
  [SMALL_STATE(329)] = 12251,
  [SMALL_STATE(330)] = 12271,
  [SMALL_STATE(331)] = 12291,
  [SMALL_STATE(332)] = 12313,
  [SMALL_STATE(333)] = 12335,
  [SMALL_STATE(334)] = 12355,
  [SMALL_STATE(335)] = 12377,
  [SMALL_STATE(336)] = 12399,
  [SMALL_STATE(337)] = 12421,
  [SMALL_STATE(338)] = 12441,
  [SMALL_STATE(339)] = 12461,
  [SMALL_STATE(340)] = 12479,
  [SMALL_STATE(341)] = 12499,
  [SMALL_STATE(342)] = 12519,
  [SMALL_STATE(343)] = 12537,
  [SMALL_STATE(344)] = 12557,
  [SMALL_STATE(345)] = 12575,
  [SMALL_STATE(346)] = 12595,
  [SMALL_STATE(347)] = 12613,
  [SMALL_STATE(348)] = 12633,
  [SMALL_STATE(349)] = 12651,
  [SMALL_STATE(350)] = 12671,
  [SMALL_STATE(351)] = 12689,
  [SMALL_STATE(352)] = 12707,
  [SMALL_STATE(353)] = 12729,
  [SMALL_STATE(354)] = 12751,
  [SMALL_STATE(355)] = 12771,
  [SMALL_STATE(356)] = 12789,
  [SMALL_STATE(357)] = 12811,
  [SMALL_STATE(358)] = 12833,
  [SMALL_STATE(359)] = 12855,
  [SMALL_STATE(360)] = 12877,
  [SMALL_STATE(361)] = 12895,
  [SMALL_STATE(362)] = 12911,
  [SMALL_STATE(363)] = 12933,
  [SMALL_STATE(364)] = 12955,
  [SMALL_STATE(365)] = 12977,
  [SMALL_STATE(366)] = 12999,
  [SMALL_STATE(367)] = 13021,
  [SMALL_STATE(368)] = 13043,
  [SMALL_STATE(369)] = 13063,
  [SMALL_STATE(370)] = 13085,
  [SMALL_STATE(371)] = 13107,
  [SMALL_STATE(372)] = 13129,
  [SMALL_STATE(373)] = 13149,
  [SMALL_STATE(374)] = 13171,
  [SMALL_STATE(375)] = 13193,
  [SMALL_STATE(376)] = 13215,
  [SMALL_STATE(377)] = 13237,
  [SMALL_STATE(378)] = 13259,
  [SMALL_STATE(379)] = 13281,
  [SMALL_STATE(380)] = 13303,
  [SMALL_STATE(381)] = 13325,
  [SMALL_STATE(382)] = 13343,
  [SMALL_STATE(383)] = 13361,
  [SMALL_STATE(384)] = 13383,
  [SMALL_STATE(385)] = 13405,
  [SMALL_STATE(386)] = 13427,
  [SMALL_STATE(387)] = 13445,
  [SMALL_STATE(388)] = 13467,
  [SMALL_STATE(389)] = 13489,
  [SMALL_STATE(390)] = 13507,
  [SMALL_STATE(391)] = 13529,
  [SMALL_STATE(392)] = 13551,
  [SMALL_STATE(393)] = 13573,
  [SMALL_STATE(394)] = 13595,
  [SMALL_STATE(395)] = 13617,
  [SMALL_STATE(396)] = 13639,
  [SMALL_STATE(397)] = 13661,
  [SMALL_STATE(398)] = 13683,
  [SMALL_STATE(399)] = 13705,
  [SMALL_STATE(400)] = 13727,
  [SMALL_STATE(401)] = 13745,
  [SMALL_STATE(402)] = 13763,
  [SMALL_STATE(403)] = 13781,
  [SMALL_STATE(404)] = 13799,
  [SMALL_STATE(405)] = 13821,
  [SMALL_STATE(406)] = 13843,
  [SMALL_STATE(407)] = 13865,
  [SMALL_STATE(408)] = 13887,
  [SMALL_STATE(409)] = 13905,
  [SMALL_STATE(410)] = 13923,
  [SMALL_STATE(411)] = 13941,
  [SMALL_STATE(412)] = 13959,
  [SMALL_STATE(413)] = 13981,
  [SMALL_STATE(414)] = 14003,
  [SMALL_STATE(415)] = 14025,
  [SMALL_STATE(416)] = 14047,
  [SMALL_STATE(417)] = 14066,
  [SMALL_STATE(418)] = 14081,
  [SMALL_STATE(419)] = 14100,
  [SMALL_STATE(420)] = 14115,
  [SMALL_STATE(421)] = 14134,
  [SMALL_STATE(422)] = 14149,
  [SMALL_STATE(423)] = 14164,
  [SMALL_STATE(424)] = 14179,
  [SMALL_STATE(425)] = 14198,
  [SMALL_STATE(426)] = 14213,
  [SMALL_STATE(427)] = 14228,
  [SMALL_STATE(428)] = 14243,
  [SMALL_STATE(429)] = 14258,
  [SMALL_STATE(430)] = 14275,
  [SMALL_STATE(431)] = 14290,
  [SMALL_STATE(432)] = 14309,
  [SMALL_STATE(433)] = 14328,
  [SMALL_STATE(434)] = 14347,
  [SMALL_STATE(435)] = 14366,
  [SMALL_STATE(436)] = 14383,
  [SMALL_STATE(437)] = 14402,
  [SMALL_STATE(438)] = 14421,
  [SMALL_STATE(439)] = 14440,
  [SMALL_STATE(440)] = 14459,
  [SMALL_STATE(441)] = 14478,
  [SMALL_STATE(442)] = 14497,
  [SMALL_STATE(443)] = 14516,
  [SMALL_STATE(444)] = 14531,
  [SMALL_STATE(445)] = 14548,
  [SMALL_STATE(446)] = 14567,
  [SMALL_STATE(447)] = 14586,
  [SMALL_STATE(448)] = 14605,
  [SMALL_STATE(449)] = 14620,
  [SMALL_STATE(450)] = 14639,
  [SMALL_STATE(451)] = 14654,
  [SMALL_STATE(452)] = 14673,
  [SMALL_STATE(453)] = 14688,
  [SMALL_STATE(454)] = 14707,
  [SMALL_STATE(455)] = 14726,
  [SMALL_STATE(456)] = 14743,
  [SMALL_STATE(457)] = 14762,
  [SMALL_STATE(458)] = 14781,
  [SMALL_STATE(459)] = 14800,
  [SMALL_STATE(460)] = 14819,
  [SMALL_STATE(461)] = 14838,
  [SMALL_STATE(462)] = 14857,
  [SMALL_STATE(463)] = 14876,
  [SMALL_STATE(464)] = 14895,
  [SMALL_STATE(465)] = 14914,
  [SMALL_STATE(466)] = 14933,
  [SMALL_STATE(467)] = 14952,
  [SMALL_STATE(468)] = 14971,
  [SMALL_STATE(469)] = 14990,
  [SMALL_STATE(470)] = 15005,
  [SMALL_STATE(471)] = 15020,
  [SMALL_STATE(472)] = 15037,
  [SMALL_STATE(473)] = 15056,
  [SMALL_STATE(474)] = 15075,
  [SMALL_STATE(475)] = 15090,
  [SMALL_STATE(476)] = 15109,
  [SMALL_STATE(477)] = 15128,
  [SMALL_STATE(478)] = 15147,
  [SMALL_STATE(479)] = 15166,
  [SMALL_STATE(480)] = 15185,
  [SMALL_STATE(481)] = 15204,
  [SMALL_STATE(482)] = 15219,
  [SMALL_STATE(483)] = 15234,
  [SMALL_STATE(484)] = 15251,
  [SMALL_STATE(485)] = 15270,
  [SMALL_STATE(486)] = 15285,
  [SMALL_STATE(487)] = 15304,
  [SMALL_STATE(488)] = 15319,
  [SMALL_STATE(489)] = 15334,
  [SMALL_STATE(490)] = 15353,
  [SMALL_STATE(491)] = 15367,
  [SMALL_STATE(492)] = 15381,
  [SMALL_STATE(493)] = 15397,
  [SMALL_STATE(494)] = 15411,
  [SMALL_STATE(495)] = 15427,
  [SMALL_STATE(496)] = 15443,
  [SMALL_STATE(497)] = 15459,
  [SMALL_STATE(498)] = 15475,
  [SMALL_STATE(499)] = 15489,
  [SMALL_STATE(500)] = 15505,
  [SMALL_STATE(501)] = 15521,
  [SMALL_STATE(502)] = 15537,
  [SMALL_STATE(503)] = 15553,
  [SMALL_STATE(504)] = 15569,
  [SMALL_STATE(505)] = 15585,
  [SMALL_STATE(506)] = 15599,
  [SMALL_STATE(507)] = 15615,
  [SMALL_STATE(508)] = 15631,
  [SMALL_STATE(509)] = 15647,
  [SMALL_STATE(510)] = 15663,
  [SMALL_STATE(511)] = 15679,
  [SMALL_STATE(512)] = 15695,
  [SMALL_STATE(513)] = 15711,
  [SMALL_STATE(514)] = 15725,
  [SMALL_STATE(515)] = 15741,
  [SMALL_STATE(516)] = 15755,
  [SMALL_STATE(517)] = 15769,
  [SMALL_STATE(518)] = 15785,
  [SMALL_STATE(519)] = 15801,
  [SMALL_STATE(520)] = 15817,
  [SMALL_STATE(521)] = 15833,
  [SMALL_STATE(522)] = 15849,
  [SMALL_STATE(523)] = 15863,
  [SMALL_STATE(524)] = 15879,
  [SMALL_STATE(525)] = 15895,
  [SMALL_STATE(526)] = 15911,
  [SMALL_STATE(527)] = 15927,
  [SMALL_STATE(528)] = 15943,
  [SMALL_STATE(529)] = 15957,
  [SMALL_STATE(530)] = 15973,
  [SMALL_STATE(531)] = 15989,
  [SMALL_STATE(532)] = 16005,
  [SMALL_STATE(533)] = 16021,
  [SMALL_STATE(534)] = 16037,
  [SMALL_STATE(535)] = 16053,
  [SMALL_STATE(536)] = 16069,
  [SMALL_STATE(537)] = 16085,
  [SMALL_STATE(538)] = 16101,
  [SMALL_STATE(539)] = 16117,
  [SMALL_STATE(540)] = 16133,
  [SMALL_STATE(541)] = 16149,
  [SMALL_STATE(542)] = 16165,
  [SMALL_STATE(543)] = 16181,
  [SMALL_STATE(544)] = 16197,
  [SMALL_STATE(545)] = 16213,
  [SMALL_STATE(546)] = 16227,
  [SMALL_STATE(547)] = 16243,
  [SMALL_STATE(548)] = 16259,
  [SMALL_STATE(549)] = 16272,
  [SMALL_STATE(550)] = 16285,
  [SMALL_STATE(551)] = 16298,
  [SMALL_STATE(552)] = 16311,
  [SMALL_STATE(553)] = 16324,
  [SMALL_STATE(554)] = 16337,
  [SMALL_STATE(555)] = 16350,
  [SMALL_STATE(556)] = 16363,
  [SMALL_STATE(557)] = 16376,
  [SMALL_STATE(558)] = 16389,
  [SMALL_STATE(559)] = 16402,
  [SMALL_STATE(560)] = 16415,
  [SMALL_STATE(561)] = 16428,
  [SMALL_STATE(562)] = 16441,
  [SMALL_STATE(563)] = 16454,
  [SMALL_STATE(564)] = 16467,
  [SMALL_STATE(565)] = 16480,
  [SMALL_STATE(566)] = 16493,
  [SMALL_STATE(567)] = 16506,
  [SMALL_STATE(568)] = 16519,
  [SMALL_STATE(569)] = 16532,
  [SMALL_STATE(570)] = 16545,
  [SMALL_STATE(571)] = 16558,
  [SMALL_STATE(572)] = 16571,
  [SMALL_STATE(573)] = 16584,
  [SMALL_STATE(574)] = 16597,
  [SMALL_STATE(575)] = 16610,
  [SMALL_STATE(576)] = 16623,
  [SMALL_STATE(577)] = 16636,
  [SMALL_STATE(578)] = 16649,
  [SMALL_STATE(579)] = 16662,
  [SMALL_STATE(580)] = 16675,
  [SMALL_STATE(581)] = 16688,
  [SMALL_STATE(582)] = 16701,
  [SMALL_STATE(583)] = 16714,
  [SMALL_STATE(584)] = 16727,
  [SMALL_STATE(585)] = 16740,
  [SMALL_STATE(586)] = 16753,
  [SMALL_STATE(587)] = 16766,
  [SMALL_STATE(588)] = 16779,
  [SMALL_STATE(589)] = 16792,
  [SMALL_STATE(590)] = 16805,
  [SMALL_STATE(591)] = 16818,
  [SMALL_STATE(592)] = 16831,
  [SMALL_STATE(593)] = 16844,
  [SMALL_STATE(594)] = 16857,
  [SMALL_STATE(595)] = 16870,
  [SMALL_STATE(596)] = 16883,
  [SMALL_STATE(597)] = 16896,
  [SMALL_STATE(598)] = 16909,
  [SMALL_STATE(599)] = 16922,
  [SMALL_STATE(600)] = 16935,
  [SMALL_STATE(601)] = 16948,
  [SMALL_STATE(602)] = 16961,
  [SMALL_STATE(603)] = 16974,
  [SMALL_STATE(604)] = 16987,
  [SMALL_STATE(605)] = 17000,
  [SMALL_STATE(606)] = 17013,
  [SMALL_STATE(607)] = 17026,
  [SMALL_STATE(608)] = 17039,
  [SMALL_STATE(609)] = 17052,
  [SMALL_STATE(610)] = 17065,
  [SMALL_STATE(611)] = 17078,
  [SMALL_STATE(612)] = 17091,
  [SMALL_STATE(613)] = 17104,
  [SMALL_STATE(614)] = 17117,
  [SMALL_STATE(615)] = 17130,
  [SMALL_STATE(616)] = 17143,
  [SMALL_STATE(617)] = 17156,
  [SMALL_STATE(618)] = 17169,
  [SMALL_STATE(619)] = 17182,
  [SMALL_STATE(620)] = 17195,
  [SMALL_STATE(621)] = 17208,
  [SMALL_STATE(622)] = 17221,
  [SMALL_STATE(623)] = 17234,
  [SMALL_STATE(624)] = 17247,
  [SMALL_STATE(625)] = 17260,
  [SMALL_STATE(626)] = 17273,
  [SMALL_STATE(627)] = 17277,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(597),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(538),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(540),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(610),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(552),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(605),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(560),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(600),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(598),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(551),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(566),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(565),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(591),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 15),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 15),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 7, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 7, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 5, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 5, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 5, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 5, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 5, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 5, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 5, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 5, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 6, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 6, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 6, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 6, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 6, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 6, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 6, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 6, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_label, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_label, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 7, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 7, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 7, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 7, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 7, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 7, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 8, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 8, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 9, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 9, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 12),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 12),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__NEWLINE, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator, 4, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_separator, 4, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 4, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 4, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 4, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 4, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 4, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 4, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 4, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 4, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(601),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [811] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(625),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_note_repeat1, 2, 0, 0), SHIFT_REPEAT(537),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_note_repeat1, 2, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_note_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [892] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [954] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [965] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(485),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [979] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [984] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [992] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1057] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 10),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 11),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(505),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 2),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 3),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 4),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 5),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 6),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 7),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 8),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 9),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 10),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 11),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 2),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 3),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 4),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 5),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 6),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_note_repeat1, 1, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 7),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 8),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 9),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1401] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_plantuml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
