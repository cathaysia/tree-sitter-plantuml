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
#define STATE_COUNT 678
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 15
#define TOKEN_COUNT 103
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  aux_sym__NEWLINE_token1 = 1,
  anon_sym_ATstartuml = 2,
  anon_sym_ATenduml = 3,
  anon_sym_ref = 4,
  anon_sym_over = 5,
  anon_sym_COMMA = 6,
  anon_sym_COLON = 7,
  anon_sym_endref = 8,
  anon_sym_EQ_EQ = 9,
  aux_sym_separator_token1 = 10,
  aux_sym_label_token1 = 11,
  anon_sym_LBRACK = 12,
  aux_sym_custom_label_token1 = 13,
  anon_sym_RBRACK = 14,
  anon_sym_alt = 15,
  anon_sym_else = 16,
  anon_sym_end = 17,
  aux_sym_line_token1 = 18,
  anon_sym_SLASH = 19,
  anon_sym_note = 20,
  anon_sym_rnote = 21,
  anon_sym_hnote = 22,
  anon_sym_left = 23,
  anon_sym_right = 24,
  anon_sym_across = 25,
  anon_sym_POUND = 26,
  anon_sym_endnote = 27,
  anon_sym_endrnote = 28,
  anon_sym_endhnote = 29,
  anon_sym_loop = 30,
  anon_sym_group = 31,
  anon_sym_skinparam = 32,
  anon_sym_sequenceMessageAlign = 33,
  anon_sym_center = 34,
  anon_sym_responseMessageBelowArrow = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  anon_sym_autonumber = 38,
  anon_sym_inc = 39,
  anon_sym_resume = 40,
  aux_sym_attribute_token1 = 41,
  aux_sym_attribute_token2 = 42,
  aux_sym_attribute_token3 = 43,
  anon_sym_autonumberstop = 44,
  anon_sym_participant = 45,
  anon_sym_actor = 46,
  anon_sym_boundary = 47,
  anon_sym_control = 48,
  anon_sym_entity = 49,
  anon_sym_database = 50,
  anon_sym_collections = 51,
  anon_sym_queue = 52,
  aux_sym_multiline_token1 = 53,
  anon_sym_as = 54,
  aux_sym_attr_alias_token1 = 55,
  anon_sym_order = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_string_token1 = 58,
  anon_sym_BSLASH_DQUOTE = 59,
  anon_sym_BSLASH = 60,
  aux_sym_escape_char_token1 = 61,
  aux_sym_sequence_diagram_token1 = 62,
  anon_sym_DASH = 63,
  anon_sym_GT = 64,
  anon_sym_o = 65,
  anon_sym_x = 66,
  anon_sym_ox = 67,
  anon_sym_GT_GT = 68,
  anon_sym_BSLASH_BSLASH = 69,
  anon_sym_SLASH_SLASH = 70,
  anon_sym_DASH_DASH = 71,
  anon_sym_LBRACK_POUND = 72,
  anon_sym_LT = 73,
  anon_sym_xo = 74,
  anon_sym_LT_LT = 75,
  anon_sym_ATstartjson = 76,
  anon_sym_AT = 77,
  aux_sym_json_token1 = 78,
  anon_sym_ATendjson = 79,
  anon_sym_ATstartyaml = 80,
  anon_sym_ATendyaml = 81,
  anon_sym_ATstartebnf = 82,
  anon_sym_ATendebnf = 83,
  anon_sym_ATstartregex = 84,
  anon_sym_ATendregex = 85,
  anon_sym_ATstartditaa = 86,
  anon_sym_ATendditaa = 87,
  anon_sym_ATstartgantt = 88,
  anon_sym_ATendgantt = 89,
  anon_sym_ATstartchronology = 90,
  anon_sym_ATendchronology = 91,
  anon_sym_ATstartmindmap = 92,
  anon_sym_ATendmindmap = 93,
  anon_sym_ATstartwbs = 94,
  anon_sym_ATendwbs = 95,
  anon_sym_ATstartchen = 96,
  anon_sym_ATendchen = 97,
  anon_sym_SQUOTE = 98,
  aux_sym_comment_token1 = 99,
  anon_sym_SLASH_SQUOTE = 100,
  aux_sym_comment_token2 = 101,
  sym_color = 102,
  sym_diagram = 103,
  sym__NEWLINE = 104,
  sym_uml = 105,
  sym_expression = 106,
  sym_ref_line = 107,
  sym_ref_block = 108,
  sym_separator = 109,
  sym_label = 110,
  sym_custom_label = 111,
  sym_alt_block = 112,
  sym_line = 113,
  sym_line_note = 114,
  sym_block_note = 115,
  sym_block_rnote = 116,
  sym_block_hnote = 117,
  sym_loop_block = 118,
  sym_group_block = 119,
  sym_skinparam = 120,
  sym_boolean_literal = 121,
  sym_attribute = 122,
  sym_multiline = 123,
  sym_attr_alias = 124,
  sym_attr_order = 125,
  sym_string = 126,
  sym_escape_char = 127,
  sym_participant_name = 128,
  sym_sequence_diagram = 129,
  sym_connector = 130,
  sym_json = 131,
  sym_yaml = 132,
  sym_ebnf = 133,
  sym_regex = 134,
  sym_ditaa = 135,
  sym_gantt = 136,
  sym_chronology = 137,
  sym_mindmap = 138,
  sym_wbs = 139,
  sym_chen = 140,
  sym_comment = 141,
  aux_sym_uml_repeat1 = 142,
  aux_sym_ref_line_repeat1 = 143,
  aux_sym_ref_block_repeat1 = 144,
  aux_sym_alt_block_repeat1 = 145,
  aux_sym_attribute_repeat1 = 146,
  aux_sym_attribute_repeat2 = 147,
  aux_sym_multiline_repeat1 = 148,
  aux_sym_string_repeat1 = 149,
  aux_sym_json_repeat1 = 150,
  aux_sym_json_repeat2 = 151,
  alias_sym_chen_data = 152,
  alias_sym_chronology_data = 153,
  alias_sym_ditaa_data = 154,
  alias_sym_ebnf_data = 155,
  alias_sym_gantt_data = 156,
  alias_sym_json_data = 157,
  alias_sym_left = 158,
  alias_sym_mindmap_data = 159,
  alias_sym_name = 160,
  alias_sym_new_name = 161,
  alias_sym_regex_data = 162,
  alias_sym_right = 163,
  alias_sym_value = 164,
  alias_sym_wbs_data = 165,
  alias_sym_yaml_data = 166,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__NEWLINE_token1] = "_NEWLINE_token1",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_ref] = "ref",
  [anon_sym_over] = "over",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_endref] = "end ref",
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
  [anon_sym_POUND] = "#",
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
  [sym_ref_line] = "ref_line",
  [sym_ref_block] = "ref_block",
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
  [aux_sym_ref_line_repeat1] = "ref_line_repeat1",
  [aux_sym_ref_block_repeat1] = "ref_block_repeat1",
  [aux_sym_alt_block_repeat1] = "alt_block_repeat1",
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
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_endref] = anon_sym_endref,
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
  [anon_sym_POUND] = anon_sym_POUND,
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
  [sym_ref_line] = sym_ref_line,
  [sym_ref_block] = sym_ref_block,
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
  [aux_sym_ref_line_repeat1] = aux_sym_ref_line_repeat1,
  [aux_sym_ref_block_repeat1] = aux_sym_ref_block_repeat1,
  [aux_sym_alt_block_repeat1] = aux_sym_alt_block_repeat1,
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
  [anon_sym_ref] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endref] = {
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
  [anon_sym_POUND] = {
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
  [sym_ref_line] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_block] = {
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
  [aux_sym_ref_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ref_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alt_block_repeat1] = {
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
  [3] = 3,
  [4] = 3,
  [5] = 3,
  [6] = 2,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 18,
  [21] = 17,
  [22] = 14,
  [23] = 17,
  [24] = 15,
  [25] = 18,
  [26] = 9,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 30,
  [36] = 31,
  [37] = 33,
  [38] = 31,
  [39] = 30,
  [40] = 33,
  [41] = 32,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 47,
  [48] = 43,
  [49] = 42,
  [50] = 43,
  [51] = 42,
  [52] = 44,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 54,
  [59] = 53,
  [60] = 47,
  [61] = 55,
  [62] = 45,
  [63] = 57,
  [64] = 56,
  [65] = 54,
  [66] = 55,
  [67] = 53,
  [68] = 56,
  [69] = 47,
  [70] = 42,
  [71] = 45,
  [72] = 43,
  [73] = 73,
  [74] = 57,
  [75] = 44,
  [76] = 76,
  [77] = 73,
  [78] = 45,
  [79] = 42,
  [80] = 44,
  [81] = 43,
  [82] = 42,
  [83] = 43,
  [84] = 44,
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
  [101] = 76,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 45,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 45,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 76,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 105,
  [138] = 87,
  [139] = 125,
  [140] = 126,
  [141] = 85,
  [142] = 129,
  [143] = 130,
  [144] = 131,
  [145] = 132,
  [146] = 133,
  [147] = 134,
  [148] = 135,
  [149] = 93,
  [150] = 90,
  [151] = 91,
  [152] = 88,
  [153] = 92,
  [154] = 94,
  [155] = 95,
  [156] = 96,
  [157] = 110,
  [158] = 88,
  [159] = 102,
  [160] = 87,
  [161] = 89,
  [162] = 98,
  [163] = 93,
  [164] = 97,
  [165] = 99,
  [166] = 100,
  [167] = 105,
  [168] = 111,
  [169] = 112,
  [170] = 113,
  [171] = 103,
  [172] = 104,
  [173] = 106,
  [174] = 125,
  [175] = 126,
  [176] = 127,
  [177] = 85,
  [178] = 129,
  [179] = 130,
  [180] = 131,
  [181] = 132,
  [182] = 133,
  [183] = 134,
  [184] = 108,
  [185] = 136,
  [186] = 115,
  [187] = 116,
  [188] = 90,
  [189] = 91,
  [190] = 92,
  [191] = 94,
  [192] = 95,
  [193] = 96,
  [194] = 98,
  [195] = 103,
  [196] = 104,
  [197] = 106,
  [198] = 108,
  [199] = 136,
  [200] = 115,
  [201] = 116,
  [202] = 117,
  [203] = 118,
  [204] = 119,
  [205] = 120,
  [206] = 121,
  [207] = 122,
  [208] = 123,
  [209] = 86,
  [210] = 117,
  [211] = 107,
  [212] = 118,
  [213] = 119,
  [214] = 120,
  [215] = 121,
  [216] = 122,
  [217] = 123,
  [218] = 107,
  [219] = 110,
  [220] = 86,
  [221] = 97,
  [222] = 99,
  [223] = 100,
  [224] = 102,
  [225] = 111,
  [226] = 128,
  [227] = 112,
  [228] = 113,
  [229] = 89,
  [230] = 127,
  [231] = 42,
  [232] = 44,
  [233] = 43,
  [234] = 234,
  [235] = 234,
  [236] = 234,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 245,
  [249] = 245,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 250,
  [255] = 250,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 257,
  [260] = 260,
  [261] = 257,
  [262] = 262,
  [263] = 250,
  [264] = 257,
  [265] = 250,
  [266] = 257,
  [267] = 250,
  [268] = 257,
  [269] = 250,
  [270] = 257,
  [271] = 250,
  [272] = 257,
  [273] = 250,
  [274] = 257,
  [275] = 258,
  [276] = 252,
  [277] = 253,
  [278] = 278,
  [279] = 258,
  [280] = 252,
  [281] = 253,
  [282] = 278,
  [283] = 278,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 287,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 289,
  [300] = 293,
  [301] = 301,
  [302] = 302,
  [303] = 296,
  [304] = 286,
  [305] = 305,
  [306] = 306,
  [307] = 289,
  [308] = 297,
  [309] = 292,
  [310] = 292,
  [311] = 311,
  [312] = 306,
  [313] = 293,
  [314] = 294,
  [315] = 315,
  [316] = 287,
  [317] = 296,
  [318] = 294,
  [319] = 306,
  [320] = 297,
  [321] = 298,
  [322] = 315,
  [323] = 298,
  [324] = 324,
  [325] = 315,
  [326] = 286,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 285,
  [333] = 333,
  [334] = 311,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 42,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 311,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 343,
  [371] = 343,
  [372] = 343,
  [373] = 343,
  [374] = 374,
  [375] = 343,
  [376] = 343,
  [377] = 377,
  [378] = 343,
  [379] = 343,
  [380] = 380,
  [381] = 361,
  [382] = 367,
  [383] = 383,
  [384] = 336,
  [385] = 346,
  [386] = 348,
  [387] = 362,
  [388] = 363,
  [389] = 389,
  [390] = 368,
  [391] = 391,
  [392] = 374,
  [393] = 377,
  [394] = 380,
  [395] = 327,
  [396] = 361,
  [397] = 367,
  [398] = 398,
  [399] = 383,
  [400] = 391,
  [401] = 336,
  [402] = 346,
  [403] = 348,
  [404] = 362,
  [405] = 363,
  [406] = 43,
  [407] = 368,
  [408] = 369,
  [409] = 374,
  [410] = 343,
  [411] = 377,
  [412] = 383,
  [413] = 413,
  [414] = 380,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 354,
  [421] = 356,
  [422] = 44,
  [423] = 413,
  [424] = 335,
  [425] = 340,
  [426] = 426,
  [427] = 349,
  [428] = 365,
  [429] = 354,
  [430] = 356,
  [431] = 431,
  [432] = 413,
  [433] = 340,
  [434] = 349,
  [435] = 365,
  [436] = 389,
  [437] = 327,
  [438] = 398,
  [439] = 347,
  [440] = 352,
  [441] = 353,
  [442] = 355,
  [443] = 357,
  [444] = 391,
  [445] = 389,
  [446] = 398,
  [447] = 347,
  [448] = 352,
  [449] = 353,
  [450] = 355,
  [451] = 357,
  [452] = 369,
  [453] = 453,
  [454] = 454,
  [455] = 110,
  [456] = 456,
  [457] = 457,
  [458] = 454,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 454,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 454,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 453,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 360,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 471,
  [493] = 493,
  [494] = 494,
  [495] = 477,
  [496] = 477,
  [497] = 454,
  [498] = 471,
  [499] = 453,
  [500] = 472,
  [501] = 107,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 329,
  [510] = 454,
  [511] = 454,
  [512] = 512,
  [513] = 513,
  [514] = 454,
  [515] = 515,
  [516] = 493,
  [517] = 454,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 454,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 493,
  [526] = 472,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 528,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 537,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 527,
  [544] = 544,
  [545] = 539,
  [546] = 546,
  [547] = 534,
  [548] = 541,
  [549] = 528,
  [550] = 544,
  [551] = 551,
  [552] = 110,
  [553] = 551,
  [554] = 554,
  [555] = 555,
  [556] = 541,
  [557] = 107,
  [558] = 541,
  [559] = 559,
  [560] = 546,
  [561] = 561,
  [562] = 535,
  [563] = 542,
  [564] = 539,
  [565] = 529,
  [566] = 540,
  [567] = 567,
  [568] = 534,
  [569] = 561,
  [570] = 544,
  [571] = 561,
  [572] = 535,
  [573] = 542,
  [574] = 555,
  [575] = 541,
  [576] = 546,
  [577] = 529,
  [578] = 540,
  [579] = 579,
  [580] = 463,
  [581] = 541,
  [582] = 537,
  [583] = 110,
  [584] = 584,
  [585] = 585,
  [586] = 463,
  [587] = 551,
  [588] = 554,
  [589] = 527,
  [590] = 107,
  [591] = 554,
  [592] = 592,
  [593] = 593,
  [594] = 555,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 596,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 596,
  [606] = 604,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 595,
  [615] = 615,
  [616] = 609,
  [617] = 617,
  [618] = 603,
  [619] = 599,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 607,
  [625] = 601,
  [626] = 620,
  [627] = 621,
  [628] = 609,
  [629] = 617,
  [630] = 608,
  [631] = 631,
  [632] = 597,
  [633] = 43,
  [634] = 601,
  [635] = 607,
  [636] = 623,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 44,
  [641] = 603,
  [642] = 599,
  [643] = 620,
  [644] = 613,
  [645] = 617,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 622,
  [651] = 607,
  [652] = 623,
  [653] = 653,
  [654] = 631,
  [655] = 602,
  [656] = 638,
  [657] = 615,
  [658] = 613,
  [659] = 637,
  [660] = 621,
  [661] = 622,
  [662] = 597,
  [663] = 663,
  [664] = 595,
  [665] = 607,
  [666] = 666,
  [667] = 667,
  [668] = 631,
  [669] = 602,
  [670] = 638,
  [671] = 615,
  [672] = 612,
  [673] = 612,
  [674] = 674,
  [675] = 607,
  [676] = 676,
  [677] = 677,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(680);
      ADVANCE_MAP(
        '"', 876,
        '#', 745,
        '\'', 951,
        ',', 686,
        '-', 892,
        '/', 735,
        ':', 687,
        '<', 905,
        '=', 44,
        '>', 893,
        '@', 909,
        '[', 695,
        '\\', 883,
        ']', 699,
        'o', 894,
        'x', 896,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(761);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 681,
        '\r', 1,
        '"', 876,
        '#', 745,
        '\'', 951,
        ',', 686,
        '/', 35,
        ':', 687,
        'i', 178,
        'r', 115,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(887);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(960);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(952);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(959);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(959);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(962);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(959);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 876,
        '#', 745,
        '\'', 951,
        '/', 734,
        '=', 44,
        '@', 119,
        '[', 695,
        'a', 787,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 824,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'o', 845,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 876,
        '#', 745,
        '\'', 951,
        '/', 734,
        '=', 44,
        '[', 695,
        'a', 787,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 812,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'o', 845,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 876,
        '#', 745,
        '\'', 951,
        '/', 734,
        '=', 44,
        '[', 695,
        'a', 787,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 818,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'o', 845,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 876,
        '\'', 951,
        '-', 891,
        '/', 735,
        ':', 687,
        '<', 905,
        '=', 44,
        '>', 893,
        '@', 239,
        '[', 695,
        '\\', 884,
        'a', 788,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 812,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(876);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '-') ADVANCE(891);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(884);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 876,
        '\'', 951,
        '/', 735,
        ':', 687,
        '=', 44,
        '>', 893,
        '@', 119,
        '[', 21,
        '\\', 884,
        'a', 788,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 824,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 876,
        '\'', 951,
        '/', 734,
        ':', 687,
        '=', 44,
        '@', 119,
        'a', 787,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 824,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 876,
        '\'', 951,
        '/', 734,
        ':', 687,
        '=', 44,
        '[', 695,
        'a', 788,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 818,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 876,
        '\'', 951,
        '/', 734,
        ':', 687,
        '=', 44,
        'a', 787,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 812,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 876,
        '\'', 951,
        '/', 734,
        ':', 687,
        '=', 44,
        'a', 787,
        'b', 828,
        'c', 827,
        'd', 780,
        'e', 818,
        'g', 850,
        'h', 825,
        'l', 834,
        'n', 833,
        'p', 778,
        'q', 867,
        'r', 794,
        's', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(876);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 'x') ADVANCE(898);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(876);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(761);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(876);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(882);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(878);
      if (lookahead != 0) ADVANCE(877);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '#', 745,
        '\'', 951,
        ',', 686,
        '-', 892,
        '/', 735,
        ':', 687,
        '<', 905,
        '\\', 884,
        'c', 116,
        'e', 155,
        'f', 59,
        'h', 195,
        'l', 107,
        'n', 204,
        'o', 894,
        'r', 112,
        's', 95,
        't', 220,
        'x', 897,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(904);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 951,
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
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(761);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(775);
      if (lookahead == '\\') ADVANCE(881);
      if (lookahead == ']') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(774);
      if (lookahead != 0) ADVANCE(773);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(910);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(921);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(911);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(922);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(912);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(923);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(913);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(924);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(914);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(915);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(926);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(927);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(917);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(918);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(919);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(930);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(961);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(954);
      if (lookahead == '/') ADVANCE(693);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0) ADVANCE(694);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(955);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(890);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(957);
      if (lookahead == '/') ADVANCE(691);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(692);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(953);
      if (lookahead == '/') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\'') ADVANCE(963);
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
      if (lookahead == '=') ADVANCE(689);
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
      if (lookahead == 'a') ADVANCE(940);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(939);
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
      if (lookahead == 'c') ADVANCE(758);
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
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(139);
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
      if (lookahead == 'd') ADVANCE(703);
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
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(738);
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
      if (lookahead == 'e') ADVANCE(759);
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
      if (lookahead == 'f') ADVANCE(936);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(935);
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
      if (lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(933);
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
      if (lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(932);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(949);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(752);
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
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(86);
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
      if (lookahead == 'p') ADVANCE(946);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(945);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(764);
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
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(685);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(948);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(947);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(744);
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
      if (lookahead == 't') ADVANCE(942);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(941);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(743);
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
      if (lookahead == 'w') ADVANCE(754);
      END_STATE();
    case 264:
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 265:
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 266:
      if (lookahead == 'x') ADVANCE(938);
      END_STATE();
    case 267:
      if (lookahead == 'x') ADVANCE(937);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(944);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(943);
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
          lookahead == 'a') ADVANCE(970);
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
          lookahead == 'a') ADVANCE(977);
      END_STATE();
    case 282:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(970);
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
          lookahead == 'b') ADVANCE(970);
      END_STATE();
    case 324:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(970);
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
          lookahead == 'd') ADVANCE(970);
      END_STATE();
    case 349:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      END_STATE();
    case 350:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(975);
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
          lookahead == 'e') ADVANCE(970);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(976);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(979);
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
          lookahead == 'y') ADVANCE(970);
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
          lookahead == 'y') ADVANCE(970);
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
          lookahead == 'f') ADVANCE(970);
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
          lookahead == 'h') ADVANCE(970);
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
          lookahead == 'i') ADVANCE(970);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
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
          lookahead == 'k') ADVANCE(970);
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
          lookahead == 'l') ADVANCE(970);
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
          lookahead == 'm') ADVANCE(970);
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
          lookahead == 'n') ADVANCE(970);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(983);
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
          lookahead == 'o') ADVANCE(970);
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
          lookahead == 'p') ADVANCE(970);
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
          lookahead == 'r') ADVANCE(970);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(972);
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
          lookahead == 't') ADVANCE(970);
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
          lookahead == 't') ADVANCE(971);
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
          lookahead == 'u') ADVANCE(970);
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
          lookahead == 'w') ADVANCE(970);
      END_STATE();
    case 658:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(976);
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
          lookahead == 'y') ADVANCE(970);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(760);
      END_STATE();
    case 675:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 676:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      END_STATE();
    case 677:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(970);
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
        '"', 876,
        '#', 745,
        '\'', 951,
        ',', 686,
        '/', 35,
        ':', 687,
        'i', 178,
        'r', 115,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
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
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_endref);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_separator_token1);
      if (lookahead == '\'') ADVANCE(957);
      if (lookahead == '/') ADVANCE(691);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(692);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_separator_token1);
      if (lookahead == '\'') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(692);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_separator_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\'') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(958);
      if (lookahead == '/') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(698);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(956);
      if (lookahead == '/') ADVANCE(710);
      if (lookahead == 'e') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(733);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(956);
      if (lookahead == '/') ADVANCE(710);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(707);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(733);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(956);
      if (lookahead == '/') ADVANCE(710);
      if (lookahead == 'e') ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(733);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(956);
      if (lookahead == '/') ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(733);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'f') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'h') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(961);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(961);
      if (lookahead == '/') ADVANCE(902);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_rnote);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_rnote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_hnote);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_hnote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_across);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_endnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_endrnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_endhnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(775);
      if (lookahead == '\\') ADVANCE(881);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(961);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(864);
      if (lookahead == 'l') ADVANCE(854);
      if (lookahead == 's') ADVANCE(776);
      if (lookahead == 'u') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(864);
      if (lookahead == 'l') ADVANCE(854);
      if (lookahead == 'u') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(704);
      if (lookahead == 't') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(805);
      if (lookahead == 'n') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'f') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(852);
      if (lookahead == 'n') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(815);
      if (lookahead == 'n') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(882);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(877);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(961);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(880);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(901);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(901);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(887);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(885);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(961);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(955);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(890);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(890);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(903);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(900);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(906);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(907);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(910);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(921);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(911);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(922);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(912);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(923);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(913);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(924);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(914);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(915);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(926);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(927);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(917);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(918);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead == '/') ADVANCE(931);
      if (lookahead == '@') ADVANCE(919);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(930);
      if (lookahead != 0) ADVANCE(920);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(961);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(959);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(694);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(890);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(692);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(698);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(960);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(952);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(959);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(694);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(890);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(733);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(692);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(698);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(332);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(486);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(986);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(597);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(986);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(452);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(985);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(677);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(986);
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
  [12] = {.lex_state = 12},
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
  [26] = {.lex_state = 14},
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
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 16},
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
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 14},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 20},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 11},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 679},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 679},
  [249] = {.lex_state = 679},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 679},
  [253] = {.lex_state = 679},
  [254] = {.lex_state = 19},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 679},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 19},
  [263] = {.lex_state = 19},
  [264] = {.lex_state = 19},
  [265] = {.lex_state = 19},
  [266] = {.lex_state = 19},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 19},
  [270] = {.lex_state = 19},
  [271] = {.lex_state = 19},
  [272] = {.lex_state = 19},
  [273] = {.lex_state = 19},
  [274] = {.lex_state = 19},
  [275] = {.lex_state = 679},
  [276] = {.lex_state = 679},
  [277] = {.lex_state = 679},
  [278] = {.lex_state = 679},
  [279] = {.lex_state = 679},
  [280] = {.lex_state = 679},
  [281] = {.lex_state = 679},
  [282] = {.lex_state = 679},
  [283] = {.lex_state = 679},
  [284] = {.lex_state = 17},
  [285] = {.lex_state = 679},
  [286] = {.lex_state = 679},
  [287] = {.lex_state = 24},
  [288] = {.lex_state = 17},
  [289] = {.lex_state = 706},
  [290] = {.lex_state = 17},
  [291] = {.lex_state = 17},
  [292] = {.lex_state = 24},
  [293] = {.lex_state = 706},
  [294] = {.lex_state = 706},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 706},
  [297] = {.lex_state = 706},
  [298] = {.lex_state = 706},
  [299] = {.lex_state = 706},
  [300] = {.lex_state = 706},
  [301] = {.lex_state = 17},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 706},
  [304] = {.lex_state = 679},
  [305] = {.lex_state = 17},
  [306] = {.lex_state = 679},
  [307] = {.lex_state = 706},
  [308] = {.lex_state = 706},
  [309] = {.lex_state = 24},
  [310] = {.lex_state = 24},
  [311] = {.lex_state = 706},
  [312] = {.lex_state = 679},
  [313] = {.lex_state = 706},
  [314] = {.lex_state = 706},
  [315] = {.lex_state = 679},
  [316] = {.lex_state = 24},
  [317] = {.lex_state = 706},
  [318] = {.lex_state = 706},
  [319] = {.lex_state = 679},
  [320] = {.lex_state = 706},
  [321] = {.lex_state = 706},
  [322] = {.lex_state = 679},
  [323] = {.lex_state = 706},
  [324] = {.lex_state = 17},
  [325] = {.lex_state = 679},
  [326] = {.lex_state = 679},
  [327] = {.lex_state = 22},
  [328] = {.lex_state = 25},
  [329] = {.lex_state = 19},
  [330] = {.lex_state = 26},
  [331] = {.lex_state = 27},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 28},
  [334] = {.lex_state = 707},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 708},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 30},
  [339] = {.lex_state = 31},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 679},
  [342] = {.lex_state = 32},
  [343] = {.lex_state = 26},
  [344] = {.lex_state = 33},
  [345] = {.lex_state = 34},
  [346] = {.lex_state = 707},
  [347] = {.lex_state = 11},
  [348] = {.lex_state = 707},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 30},
  [351] = {.lex_state = 32},
  [352] = {.lex_state = 22},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 679},
  [355] = {.lex_state = 11},
  [356] = {.lex_state = 679},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 33},
  [359] = {.lex_state = 34},
  [360] = {.lex_state = 679},
  [361] = {.lex_state = 18},
  [362] = {.lex_state = 708},
  [363] = {.lex_state = 708},
  [364] = {.lex_state = 708},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 19},
  [367] = {.lex_state = 11},
  [368] = {.lex_state = 707},
  [369] = {.lex_state = 707},
  [370] = {.lex_state = 27},
  [371] = {.lex_state = 28},
  [372] = {.lex_state = 31},
  [373] = {.lex_state = 29},
  [374] = {.lex_state = 708},
  [375] = {.lex_state = 30},
  [376] = {.lex_state = 32},
  [377] = {.lex_state = 707},
  [378] = {.lex_state = 33},
  [379] = {.lex_state = 34},
  [380] = {.lex_state = 11},
  [381] = {.lex_state = 18},
  [382] = {.lex_state = 11},
  [383] = {.lex_state = 707},
  [384] = {.lex_state = 708},
  [385] = {.lex_state = 707},
  [386] = {.lex_state = 707},
  [387] = {.lex_state = 708},
  [388] = {.lex_state = 708},
  [389] = {.lex_state = 22},
  [390] = {.lex_state = 707},
  [391] = {.lex_state = 11},
  [392] = {.lex_state = 708},
  [393] = {.lex_state = 707},
  [394] = {.lex_state = 11},
  [395] = {.lex_state = 22},
  [396] = {.lex_state = 18},
  [397] = {.lex_state = 11},
  [398] = {.lex_state = 22},
  [399] = {.lex_state = 707},
  [400] = {.lex_state = 11},
  [401] = {.lex_state = 708},
  [402] = {.lex_state = 707},
  [403] = {.lex_state = 707},
  [404] = {.lex_state = 708},
  [405] = {.lex_state = 708},
  [406] = {.lex_state = 679},
  [407] = {.lex_state = 707},
  [408] = {.lex_state = 707},
  [409] = {.lex_state = 708},
  [410] = {.lex_state = 25},
  [411] = {.lex_state = 707},
  [412] = {.lex_state = 707},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 11},
  [415] = {.lex_state = 31},
  [416] = {.lex_state = 25},
  [417] = {.lex_state = 26},
  [418] = {.lex_state = 27},
  [419] = {.lex_state = 28},
  [420] = {.lex_state = 679},
  [421] = {.lex_state = 679},
  [422] = {.lex_state = 679},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 11},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 29},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 679},
  [430] = {.lex_state = 679},
  [431] = {.lex_state = 679},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 22},
  [437] = {.lex_state = 22},
  [438] = {.lex_state = 22},
  [439] = {.lex_state = 11},
  [440] = {.lex_state = 22},
  [441] = {.lex_state = 11},
  [442] = {.lex_state = 11},
  [443] = {.lex_state = 11},
  [444] = {.lex_state = 11},
  [445] = {.lex_state = 22},
  [446] = {.lex_state = 22},
  [447] = {.lex_state = 11},
  [448] = {.lex_state = 22},
  [449] = {.lex_state = 11},
  [450] = {.lex_state = 11},
  [451] = {.lex_state = 11},
  [452] = {.lex_state = 707},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 30},
  [455] = {.lex_state = 706},
  [456] = {.lex_state = 679},
  [457] = {.lex_state = 679},
  [458] = {.lex_state = 32},
  [459] = {.lex_state = 679},
  [460] = {.lex_state = 679},
  [461] = {.lex_state = 679},
  [462] = {.lex_state = 33},
  [463] = {.lex_state = 706},
  [464] = {.lex_state = 679},
  [465] = {.lex_state = 679},
  [466] = {.lex_state = 34},
  [467] = {.lex_state = 679},
  [468] = {.lex_state = 679},
  [469] = {.lex_state = 679},
  [470] = {.lex_state = 679},
  [471] = {.lex_state = 20},
  [472] = {.lex_state = 20},
  [473] = {.lex_state = 679},
  [474] = {.lex_state = 679},
  [475] = {.lex_state = 679},
  [476] = {.lex_state = 679},
  [477] = {.lex_state = 20},
  [478] = {.lex_state = 679},
  [479] = {.lex_state = 679},
  [480] = {.lex_state = 679},
  [481] = {.lex_state = 679},
  [482] = {.lex_state = 20},
  [483] = {.lex_state = 679},
  [484] = {.lex_state = 679},
  [485] = {.lex_state = 679},
  [486] = {.lex_state = 679},
  [487] = {.lex_state = 679},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 679},
  [490] = {.lex_state = 24},
  [491] = {.lex_state = 679},
  [492] = {.lex_state = 20},
  [493] = {.lex_state = 20},
  [494] = {.lex_state = 679},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 20},
  [497] = {.lex_state = 25},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 20},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 706},
  [502] = {.lex_state = 679},
  [503] = {.lex_state = 679},
  [504] = {.lex_state = 679},
  [505] = {.lex_state = 20},
  [506] = {.lex_state = 679},
  [507] = {.lex_state = 679},
  [508] = {.lex_state = 679},
  [509] = {.lex_state = 24},
  [510] = {.lex_state = 31},
  [511] = {.lex_state = 26},
  [512] = {.lex_state = 679},
  [513] = {.lex_state = 679},
  [514] = {.lex_state = 27},
  [515] = {.lex_state = 679},
  [516] = {.lex_state = 20},
  [517] = {.lex_state = 28},
  [518] = {.lex_state = 679},
  [519] = {.lex_state = 679},
  [520] = {.lex_state = 679},
  [521] = {.lex_state = 29},
  [522] = {.lex_state = 679},
  [523] = {.lex_state = 679},
  [524] = {.lex_state = 679},
  [525] = {.lex_state = 20},
  [526] = {.lex_state = 20},
  [527] = {.lex_state = 709},
  [528] = {.lex_state = 679},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 11},
  [531] = {.lex_state = 36},
  [532] = {.lex_state = 11},
  [533] = {.lex_state = 679},
  [534] = {.lex_state = 709},
  [535] = {.lex_state = 36},
  [536] = {.lex_state = 11},
  [537] = {.lex_state = 709},
  [538] = {.lex_state = 709},
  [539] = {.lex_state = 709},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 679},
  [542] = {.lex_state = 36},
  [543] = {.lex_state = 709},
  [544] = {.lex_state = 709},
  [545] = {.lex_state = 709},
  [546] = {.lex_state = 709},
  [547] = {.lex_state = 709},
  [548] = {.lex_state = 679},
  [549] = {.lex_state = 679},
  [550] = {.lex_state = 709},
  [551] = {.lex_state = 709},
  [552] = {.lex_state = 707},
  [553] = {.lex_state = 709},
  [554] = {.lex_state = 709},
  [555] = {.lex_state = 20},
  [556] = {.lex_state = 679},
  [557] = {.lex_state = 707},
  [558] = {.lex_state = 679},
  [559] = {.lex_state = 11},
  [560] = {.lex_state = 709},
  [561] = {.lex_state = 36},
  [562] = {.lex_state = 36},
  [563] = {.lex_state = 36},
  [564] = {.lex_state = 709},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 709},
  [569] = {.lex_state = 36},
  [570] = {.lex_state = 709},
  [571] = {.lex_state = 36},
  [572] = {.lex_state = 36},
  [573] = {.lex_state = 36},
  [574] = {.lex_state = 20},
  [575] = {.lex_state = 679},
  [576] = {.lex_state = 709},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 11},
  [580] = {.lex_state = 707},
  [581] = {.lex_state = 679},
  [582] = {.lex_state = 709},
  [583] = {.lex_state = 708},
  [584] = {.lex_state = 11},
  [585] = {.lex_state = 679},
  [586] = {.lex_state = 708},
  [587] = {.lex_state = 709},
  [588] = {.lex_state = 709},
  [589] = {.lex_state = 709},
  [590] = {.lex_state = 708},
  [591] = {.lex_state = 709},
  [592] = {.lex_state = 11},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 20},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 37},
  [597] = {.lex_state = 679},
  [598] = {.lex_state = 37},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 22},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 696},
  [605] = {.lex_state = 37},
  [606] = {.lex_state = 696},
  [607] = {.lex_state = 11},
  [608] = {.lex_state = 2},
  [609] = {.lex_state = 23},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 22},
  [613] = {.lex_state = 38},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 22},
  [616] = {.lex_state = 23},
  [617] = {.lex_state = 679},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 20},
  [622] = {.lex_state = 37},
  [623] = {.lex_state = 22},
  [624] = {.lex_state = 11},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 20},
  [628] = {.lex_state = 23},
  [629] = {.lex_state = 679},
  [630] = {.lex_state = 2},
  [631] = {.lex_state = 22},
  [632] = {.lex_state = 679},
  [633] = {.lex_state = 23},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 11},
  [636] = {.lex_state = 22},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 22},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 23},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 38},
  [645] = {.lex_state = 679},
  [646] = {.lex_state = 22},
  [647] = {.lex_state = 39},
  [648] = {.lex_state = 22},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 37},
  [651] = {.lex_state = 11},
  [652] = {.lex_state = 22},
  [653] = {.lex_state = 22},
  [654] = {.lex_state = 22},
  [655] = {.lex_state = 22},
  [656] = {.lex_state = 22},
  [657] = {.lex_state = 22},
  [658] = {.lex_state = 38},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 20},
  [661] = {.lex_state = 37},
  [662] = {.lex_state = 679},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 11},
  [666] = {.lex_state = 3},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 22},
  [669] = {.lex_state = 22},
  [670] = {.lex_state = 22},
  [671] = {.lex_state = 22},
  [672] = {.lex_state = 22},
  [673] = {.lex_state = 22},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 11},
  [676] = {(TSStateId)(-1)},
  [677] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
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
    [sym_diagram] = STATE(600),
    [sym_uml] = STATE(667),
    [sym_json] = STATE(667),
    [sym_yaml] = STATE(667),
    [sym_ebnf] = STATE(667),
    [sym_regex] = STATE(667),
    [sym_ditaa] = STATE(667),
    [sym_gantt] = STATE(667),
    [sym_chronology] = STATE(667),
    [sym_mindmap] = STATE(667),
    [sym_wbs] = STATE(667),
    [sym_chen] = STATE(667),
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
  [0] = 26,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ref,
    ACTIONS(31), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(37), 1,
      anon_sym_end,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_note,
    ACTIONS(43), 1,
      anon_sym_rnote,
    ACTIONS(45), 1,
      anon_sym_hnote,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    STATE(453), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [98] = 26,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ref,
    ACTIONS(31), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_note,
    ACTIONS(43), 1,
      anon_sym_rnote,
    ACTIONS(45), 1,
      anon_sym_hnote,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(2), 1,
      aux_sym_uml_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    STATE(496), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [196] = 26,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ref,
    ACTIONS(31), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_note,
    ACTIONS(43), 1,
      anon_sym_rnote,
    ACTIONS(45), 1,
      anon_sym_hnote,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_uml_repeat1,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    STATE(477), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [294] = 26,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ref,
    ACTIONS(31), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_note,
    ACTIONS(43), 1,
      anon_sym_rnote,
    ACTIONS(45), 1,
      anon_sym_hnote,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    STATE(495), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [392] = 26,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ref,
    ACTIONS(31), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_note,
    ACTIONS(43), 1,
      anon_sym_rnote,
    ACTIONS(45), 1,
      anon_sym_hnote,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    STATE(482), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [490] = 26,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ref,
    ACTIONS(31), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_note,
    ACTIONS(43), 1,
      anon_sym_rnote,
    ACTIONS(45), 1,
      anon_sym_hnote,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    STATE(499), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [588] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ref,
    ACTIONS(31), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_alt,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_note,
    ACTIONS(43), 1,
      anon_sym_rnote,
    ACTIONS(45), 1,
      anon_sym_hnote,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    ACTIONS(73), 2,
      anon_sym_else,
      anon_sym_end,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [681] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_ref,
    ACTIONS(78), 1,
      anon_sym_EQ_EQ,
    ACTIONS(81), 1,
      anon_sym_alt,
    ACTIONS(86), 1,
      anon_sym_SLASH,
    ACTIONS(89), 1,
      anon_sym_note,
    ACTIONS(92), 1,
      anon_sym_rnote,
    ACTIONS(95), 1,
      anon_sym_hnote,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(104), 1,
      anon_sym_skinparam,
    ACTIONS(107), 1,
      anon_sym_autonumber,
    ACTIONS(110), 1,
      anon_sym_autonumberstop,
    ACTIONS(116), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    ACTIONS(84), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(9), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(113), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [772] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ref,
    ACTIONS(31), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_alt,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_note,
    ACTIONS(43), 1,
      anon_sym_rnote,
    ACTIONS(45), 1,
      anon_sym_hnote,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(102), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(235), 1,
      sym_participant_name,
    ACTIONS(122), 2,
      anon_sym_else,
      anon_sym_end,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(87), 13,
      sym_ref_line,
      sym_ref_block,
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
  [865] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_ATenduml,
    ACTIONS(126), 1,
      anon_sym_ref,
    ACTIONS(128), 1,
      anon_sym_EQ_EQ,
    ACTIONS(130), 1,
      anon_sym_alt,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_note,
    ACTIONS(136), 1,
      anon_sym_rnote,
    ACTIONS(138), 1,
      anon_sym_hnote,
    ACTIONS(140), 1,
      anon_sym_loop,
    ACTIONS(142), 1,
      anon_sym_group,
    ACTIONS(144), 1,
      anon_sym_skinparam,
    ACTIONS(146), 1,
      anon_sym_autonumber,
    ACTIONS(148), 1,
      anon_sym_autonumberstop,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(224), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(234), 1,
      sym_participant_name,
    ACTIONS(150), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(138), 13,
      sym_ref_line,
      sym_ref_block,
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
  [957] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_ref,
    ACTIONS(128), 1,
      anon_sym_EQ_EQ,
    ACTIONS(130), 1,
      anon_sym_alt,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_note,
    ACTIONS(136), 1,
      anon_sym_rnote,
    ACTIONS(138), 1,
      anon_sym_hnote,
    ACTIONS(140), 1,
      anon_sym_loop,
    ACTIONS(142), 1,
      anon_sym_group,
    ACTIONS(144), 1,
      anon_sym_skinparam,
    ACTIONS(146), 1,
      anon_sym_autonumber,
    ACTIONS(148), 1,
      anon_sym_autonumberstop,
    ACTIONS(152), 1,
      anon_sym_ATenduml,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(224), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(234), 1,
      sym_participant_name,
    ACTIONS(150), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(138), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1049] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(116), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_ATenduml,
    ACTIONS(156), 1,
      anon_sym_ref,
    ACTIONS(159), 1,
      anon_sym_EQ_EQ,
    ACTIONS(162), 1,
      anon_sym_alt,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_note,
    ACTIONS(171), 1,
      anon_sym_rnote,
    ACTIONS(174), 1,
      anon_sym_hnote,
    ACTIONS(177), 1,
      anon_sym_loop,
    ACTIONS(180), 1,
      anon_sym_group,
    ACTIONS(183), 1,
      anon_sym_skinparam,
    ACTIONS(186), 1,
      anon_sym_autonumber,
    ACTIONS(189), 1,
      anon_sym_autonumberstop,
    STATE(224), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(234), 1,
      sym_participant_name,
    STATE(13), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(192), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(138), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1139] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(201), 1,
      anon_sym_end,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1231] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(223), 1,
      anon_sym_end,
    STATE(15), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1323] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(225), 1,
      anon_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1415] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(227), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1507] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(229), 1,
      anon_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1599] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(231), 1,
      anon_sym_end,
    STATE(19), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1691] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(233), 1,
      anon_sym_end,
    STATE(20), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1783] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(235), 1,
      anon_sym_end,
    STATE(18), 1,
      aux_sym_uml_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1875] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(237), 1,
      anon_sym_end,
    STATE(22), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [1967] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(239), 1,
      anon_sym_end,
    STATE(23), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [2059] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(241), 1,
      anon_sym_end,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [2151] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_alt,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_note,
    ACTIONS(207), 1,
      anon_sym_rnote,
    ACTIONS(209), 1,
      anon_sym_hnote,
    ACTIONS(211), 1,
      anon_sym_loop,
    ACTIONS(213), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_skinparam,
    ACTIONS(217), 1,
      anon_sym_autonumber,
    ACTIONS(219), 1,
      anon_sym_autonumberstop,
    ACTIONS(243), 1,
      anon_sym_end,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    ACTIONS(221), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [2243] = 23,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_end,
    ACTIONS(116), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_ref,
    ACTIONS(248), 1,
      anon_sym_EQ_EQ,
    ACTIONS(251), 1,
      anon_sym_alt,
    ACTIONS(254), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_note,
    ACTIONS(260), 1,
      anon_sym_rnote,
    ACTIONS(263), 1,
      anon_sym_hnote,
    ACTIONS(266), 1,
      anon_sym_loop,
    ACTIONS(269), 1,
      anon_sym_group,
    ACTIONS(272), 1,
      anon_sym_skinparam,
    ACTIONS(275), 1,
      anon_sym_autonumber,
    ACTIONS(278), 1,
      anon_sym_autonumberstop,
    STATE(159), 1,
      sym_expression,
    STATE(231), 1,
      sym_string,
    STATE(236), 1,
      sym_participant_name,
    STATE(26), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(281), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(160), 13,
      sym_ref_line,
      sym_ref_block,
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
  [2333] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(292), 1,
      anon_sym_as,
    ACTIONS(294), 1,
      anon_sym_order,
    STATE(27), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_attribute_repeat2,
    STATE(32), 1,
      sym_multiline,
    STATE(54), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(286), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(284), 21,
      anon_sym_ref,
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
  [2393] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_as,
    ACTIONS(302), 1,
      anon_sym_order,
    STATE(28), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_attribute_repeat2,
    STATE(41), 1,
      sym_multiline,
    STATE(58), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(286), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(284), 19,
      anon_sym_ref,
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
  [2452] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      anon_sym_as,
    ACTIONS(310), 1,
      anon_sym_order,
    STATE(29), 1,
      sym_comment,
    STATE(34), 1,
      sym_multiline,
    STATE(38), 1,
      aux_sym_attribute_repeat2,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(286), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(284), 20,
      anon_sym_ref,
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
  [2511] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(316), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      anon_sym_as,
    ACTIONS(322), 1,
      anon_sym_order,
    STATE(30), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(54), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(314), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 21,
      anon_sym_ref,
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
  [2563] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(292), 1,
      anon_sym_as,
    ACTIONS(294), 1,
      anon_sym_order,
    STATE(30), 1,
      aux_sym_attribute_repeat2,
    STATE(31), 1,
      sym_comment,
    STATE(54), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(327), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(325), 21,
      anon_sym_ref,
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
  [2617] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(292), 1,
      anon_sym_as,
    ACTIONS(294), 1,
      anon_sym_order,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_attribute_repeat2,
    STATE(54), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(327), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(325), 21,
      anon_sym_ref,
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
  [2671] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(292), 1,
      anon_sym_as,
    ACTIONS(294), 1,
      anon_sym_order,
    STATE(30), 1,
      aux_sym_attribute_repeat2,
    STATE(33), 1,
      sym_comment,
    STATE(54), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(331), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(329), 21,
      anon_sym_ref,
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
  [2725] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      anon_sym_as,
    ACTIONS(310), 1,
      anon_sym_order,
    STATE(34), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_attribute_repeat2,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(327), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(325), 20,
      anon_sym_ref,
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
  [2778] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(333), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(339), 1,
      anon_sym_order,
    STATE(35), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(314), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 20,
      anon_sym_ref,
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
  [2829] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_as,
    ACTIONS(302), 1,
      anon_sym_order,
    STATE(36), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    STATE(58), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(327), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(325), 19,
      anon_sym_ref,
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
  [2882] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      anon_sym_as,
    ACTIONS(310), 1,
      anon_sym_order,
    STATE(35), 1,
      aux_sym_attribute_repeat2,
    STATE(37), 1,
      sym_comment,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(331), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(329), 20,
      anon_sym_ref,
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
  [2935] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      anon_sym_as,
    ACTIONS(310), 1,
      anon_sym_order,
    STATE(35), 1,
      aux_sym_attribute_repeat2,
    STATE(38), 1,
      sym_comment,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(327), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(325), 20,
      anon_sym_ref,
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
  [2988] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_as,
    ACTIONS(348), 1,
      anon_sym_order,
    STATE(39), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(58), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(314), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 19,
      anon_sym_ref,
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
  [3039] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_as,
    ACTIONS(302), 1,
      anon_sym_order,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    STATE(40), 1,
      sym_comment,
    STATE(58), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(331), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(329), 19,
      anon_sym_ref,
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
  [3092] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_as,
    ACTIONS(302), 1,
      anon_sym_order,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(41), 1,
      sym_comment,
    STATE(58), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(327), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(325), 19,
      anon_sym_ref,
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
  [3145] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 23,
      anon_sym_ref,
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
  [3187] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 23,
      anon_sym_ref,
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
  [3229] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 23,
      anon_sym_ref,
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
  [3271] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 23,
      anon_sym_ref,
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
  [3312] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(361), 6,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 21,
      anon_sym_ref,
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
  [3353] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(369), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(367), 23,
      anon_sym_ref,
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
  [3394] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 21,
      anon_sym_ref,
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
  [3435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 22,
      anon_sym_ref,
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
  [3476] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 22,
      anon_sym_ref,
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
  [3517] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 21,
      anon_sym_ref,
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
  [3558] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_EQ_EQ,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 22,
      anon_sym_ref,
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
  [3599] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_as,
    STATE(53), 1,
      sym_comment,
    STATE(76), 1,
      sym_attr_alias,
    ACTIONS(375), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 21,
      anon_sym_ref,
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
  [3646] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(381), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 23,
      anon_sym_ref,
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
  [3687] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(385), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 23,
      anon_sym_ref,
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
  [3728] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 23,
      anon_sym_ref,
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
  [3769] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(389), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 23,
      anon_sym_ref,
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
  [3810] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 21,
      anon_sym_ref,
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
  [3850] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      anon_sym_as,
    STATE(59), 1,
      sym_comment,
    STATE(124), 1,
      sym_attr_alias,
    ACTIONS(375), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 19,
      anon_sym_ref,
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
  [3896] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(369), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(367), 21,
      anon_sym_ref,
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
  [3936] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 21,
      anon_sym_ref,
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
  [3976] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 21,
      anon_sym_ref,
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
  [4016] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(389), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 22,
      anon_sym_ref,
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
  [4056] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 21,
      anon_sym_ref,
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
  [4096] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(381), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 22,
      anon_sym_ref,
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
  [4136] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(385), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 22,
      anon_sym_ref,
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
  [4176] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(397), 1,
      anon_sym_as,
    STATE(67), 1,
      sym_comment,
    STATE(101), 1,
      sym_attr_alias,
    ACTIONS(375), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 20,
      anon_sym_ref,
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
  [4222] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 22,
      anon_sym_ref,
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
  [4262] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(369), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(367), 22,
      anon_sym_ref,
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
  [4302] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(353), 4,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 22,
      anon_sym_ref,
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
  [4342] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 22,
      anon_sym_ref,
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
  [4382] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 22,
      anon_sym_ref,
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
  [4422] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_comment,
    STATE(128), 1,
      sym_custom_label,
    ACTIONS(401), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(399), 21,
      anon_sym_ref,
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
  [4466] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 21,
      anon_sym_ref,
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
  [4506] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(361), 4,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 22,
      anon_sym_ref,
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
  [4546] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(405), 21,
      anon_sym_ref,
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
  [4587] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_comment,
    STATE(226), 1,
      sym_custom_label,
    ACTIONS(401), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(399), 20,
      anon_sym_ref,
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
  [4630] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 21,
      anon_sym_ref,
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
  [4669] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 20,
      anon_sym_ref,
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
  [4708] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 20,
      anon_sym_ref,
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
  [4747] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 20,
      anon_sym_ref,
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
  [4786] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(353), 4,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 21,
      anon_sym_ref,
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
  [4825] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 21,
      anon_sym_ref,
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
  [4864] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(361), 4,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 21,
      anon_sym_ref,
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
  [4903] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(415), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(413), 21,
      anon_sym_ref,
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
  [4941] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(417), 21,
      anon_sym_ref,
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
    STATE(87), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(421), 21,
      anon_sym_ref,
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
  [5017] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(425), 21,
      anon_sym_ref,
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
  [5055] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(429), 21,
      anon_sym_ref,
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
  [5093] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(433), 21,
      anon_sym_ref,
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
  [5131] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(439), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(437), 21,
      anon_sym_ref,
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
  [5169] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(443), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(441), 21,
      anon_sym_ref,
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
  [5207] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(445), 21,
      anon_sym_ref,
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
  [5245] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
      sym_comment,
    ACTIONS(451), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(449), 21,
      anon_sym_ref,
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
  [5283] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_comment,
    ACTIONS(455), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(453), 21,
      anon_sym_ref,
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
  [5321] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
      sym_comment,
    ACTIONS(459), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(457), 21,
      anon_sym_ref,
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
  [5359] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(461), 21,
      anon_sym_ref,
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
  [5397] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(465), 21,
      anon_sym_ref,
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
  [5435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(469), 21,
      anon_sym_ref,
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
  [5473] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(473), 21,
      anon_sym_ref,
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
  [5511] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(405), 20,
      anon_sym_ref,
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
  [5551] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(102), 1,
      sym_comment,
    ACTIONS(481), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(479), 21,
      anon_sym_ref,
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
  [5589] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(103), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(483), 21,
      anon_sym_ref,
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
  [5627] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(489), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(487), 21,
      anon_sym_ref,
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
  [5665] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(491), 21,
      anon_sym_ref,
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
  [5703] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
      sym_comment,
    ACTIONS(497), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(495), 21,
      anon_sym_ref,
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
  [5741] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
      sym_comment,
    ACTIONS(501), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(499), 21,
      anon_sym_ref,
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
  [5779] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
      sym_comment,
    ACTIONS(505), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(503), 21,
      anon_sym_ref,
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
  [5817] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 19,
      anon_sym_ref,
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
  [5855] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(509), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(507), 21,
      anon_sym_ref,
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
  [5893] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
      sym_comment,
    ACTIONS(513), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(511), 21,
      anon_sym_ref,
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
  [5931] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
      sym_comment,
    ACTIONS(517), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 21,
      anon_sym_ref,
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
  [5969] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(517), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 21,
      anon_sym_ref,
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
  [6007] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(114), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 20,
      anon_sym_ref,
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
  [6045] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(115), 1,
      sym_comment,
    ACTIONS(521), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(519), 21,
      anon_sym_ref,
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
  [6083] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_comment,
    ACTIONS(525), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(523), 21,
      anon_sym_ref,
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
  [6121] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
      sym_comment,
    ACTIONS(529), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(527), 21,
      anon_sym_ref,
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
  [6159] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(531), 21,
      anon_sym_ref,
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
  [6197] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(537), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(535), 21,
      anon_sym_ref,
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
  [6235] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
      sym_comment,
    ACTIONS(541), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(539), 21,
      anon_sym_ref,
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
  [6273] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(545), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(543), 21,
      anon_sym_ref,
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
  [6311] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(549), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(547), 21,
      anon_sym_ref,
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
  [6349] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
      sym_comment,
    ACTIONS(553), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(551), 21,
      anon_sym_ref,
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
    ACTIONS(555), 1,
      anon_sym_COLON,
    STATE(124), 1,
      sym_comment,
    ACTIONS(409), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(405), 19,
      anon_sym_ref,
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
  [6427] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(557), 21,
      anon_sym_ref,
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
  [6465] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(563), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(561), 21,
      anon_sym_ref,
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
  [6503] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(565), 21,
      anon_sym_ref,
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
  [6541] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(571), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(569), 21,
      anon_sym_ref,
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
  [6579] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(129), 1,
      sym_comment,
    ACTIONS(575), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(573), 21,
      anon_sym_ref,
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
  [6617] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(130), 1,
      sym_comment,
    ACTIONS(579), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(577), 21,
      anon_sym_ref,
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
  [6655] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
      sym_comment,
    ACTIONS(583), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(581), 21,
      anon_sym_ref,
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
  [6693] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
      sym_comment,
    ACTIONS(587), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(585), 21,
      anon_sym_ref,
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
  [6731] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
      sym_comment,
    ACTIONS(591), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(589), 21,
      anon_sym_ref,
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
  [6769] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
      sym_comment,
    ACTIONS(591), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(589), 21,
      anon_sym_ref,
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
  [6807] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
      sym_comment,
    ACTIONS(595), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(593), 21,
      anon_sym_ref,
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
  [6845] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(599), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(597), 21,
      anon_sym_ref,
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
  [6883] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
      sym_comment,
    ACTIONS(493), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(491), 19,
      anon_sym_ref,
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
  [6920] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(421), 19,
      anon_sym_ref,
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
  [6957] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_comment,
    ACTIONS(559), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(557), 19,
      anon_sym_ref,
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
  [6994] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
      sym_comment,
    ACTIONS(563), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(561), 19,
      anon_sym_ref,
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
  [7031] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
      sym_comment,
    ACTIONS(415), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(413), 19,
      anon_sym_ref,
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
  [7068] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
      sym_comment,
    ACTIONS(575), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(573), 19,
      anon_sym_ref,
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
  [7105] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(579), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(577), 19,
      anon_sym_ref,
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
  [7142] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
      sym_comment,
    ACTIONS(583), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(581), 19,
      anon_sym_ref,
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
  [7179] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(587), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(585), 19,
      anon_sym_ref,
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
  [7216] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
      sym_comment,
    ACTIONS(591), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(589), 19,
      anon_sym_ref,
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
  [7253] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
      sym_comment,
    ACTIONS(591), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(589), 19,
      anon_sym_ref,
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
  [7290] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
      sym_comment,
    ACTIONS(595), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(593), 20,
      anon_sym_ref,
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
    STATE(149), 1,
      sym_comment,
    ACTIONS(447), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(445), 19,
      anon_sym_ref,
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
  [7364] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
      sym_comment,
    ACTIONS(435), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(433), 19,
      anon_sym_ref,
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
  [7401] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
      sym_comment,
    ACTIONS(439), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(437), 19,
      anon_sym_ref,
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
  [7438] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(427), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(425), 19,
      anon_sym_ref,
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
  [7475] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(441), 19,
      anon_sym_ref,
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
  [7512] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(449), 19,
      anon_sym_ref,
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
  [7549] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(455), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(453), 19,
      anon_sym_ref,
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
  [7586] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(156), 1,
      sym_comment,
    ACTIONS(459), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(457), 19,
      anon_sym_ref,
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
  [7623] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(509), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(507), 19,
      anon_sym_ref,
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
  [7660] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(425), 20,
      anon_sym_ref,
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
  [7697] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
      sym_comment,
    ACTIONS(481), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(479), 20,
      anon_sym_ref,
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
  [7734] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(160), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(421), 20,
      anon_sym_ref,
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
  [7771] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(429), 20,
      anon_sym_ref,
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
  [7808] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(465), 19,
      anon_sym_ref,
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
  [7845] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(163), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(445), 20,
      anon_sym_ref,
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
  [7882] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(461), 20,
      anon_sym_ref,
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
  [7919] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(165), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(469), 20,
      anon_sym_ref,
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
  [7956] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(473), 20,
      anon_sym_ref,
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
  [7993] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(491), 20,
      anon_sym_ref,
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
  [8030] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(168), 1,
      sym_comment,
    ACTIONS(513), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(511), 20,
      anon_sym_ref,
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
  [8067] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(169), 1,
      sym_comment,
    ACTIONS(517), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 20,
      anon_sym_ref,
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
  [8104] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(170), 1,
      sym_comment,
    ACTIONS(517), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 20,
      anon_sym_ref,
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
  [8141] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(171), 1,
      sym_comment,
    ACTIONS(485), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(483), 19,
      anon_sym_ref,
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
  [8178] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(489), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(487), 19,
      anon_sym_ref,
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
  [8215] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(173), 1,
      sym_comment,
    ACTIONS(497), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(495), 19,
      anon_sym_ref,
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
  [8252] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(174), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(557), 20,
      anon_sym_ref,
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
  [8289] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(175), 1,
      sym_comment,
    ACTIONS(563), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(561), 20,
      anon_sym_ref,
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
  [8326] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(176), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(565), 20,
      anon_sym_ref,
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
  [8363] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(415), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(413), 20,
      anon_sym_ref,
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
  [8400] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(178), 1,
      sym_comment,
    ACTIONS(575), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(573), 20,
      anon_sym_ref,
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
  [8437] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(179), 1,
      sym_comment,
    ACTIONS(579), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(577), 20,
      anon_sym_ref,
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
  [8474] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(180), 1,
      sym_comment,
    ACTIONS(583), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(581), 20,
      anon_sym_ref,
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
  [8511] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(181), 1,
      sym_comment,
    ACTIONS(587), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(585), 20,
      anon_sym_ref,
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
  [8548] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(182), 1,
      sym_comment,
    ACTIONS(591), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(589), 20,
      anon_sym_ref,
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
  [8585] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(183), 1,
      sym_comment,
    ACTIONS(591), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(589), 20,
      anon_sym_ref,
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
  [8622] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(184), 1,
      sym_comment,
    ACTIONS(505), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(503), 19,
      anon_sym_ref,
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
    STATE(185), 1,
      sym_comment,
    ACTIONS(599), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(597), 19,
      anon_sym_ref,
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
  [8696] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(186), 1,
      sym_comment,
    ACTIONS(521), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(519), 19,
      anon_sym_ref,
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
  [8733] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(187), 1,
      sym_comment,
    ACTIONS(525), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(523), 19,
      anon_sym_ref,
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
  [8770] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(188), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(433), 20,
      anon_sym_ref,
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
  [8807] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(189), 1,
      sym_comment,
    ACTIONS(439), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(437), 20,
      anon_sym_ref,
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
  [8844] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(190), 1,
      sym_comment,
    ACTIONS(443), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(441), 20,
      anon_sym_ref,
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
  [8881] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(191), 1,
      sym_comment,
    ACTIONS(451), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(449), 20,
      anon_sym_ref,
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
  [8918] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(192), 1,
      sym_comment,
    ACTIONS(455), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(453), 20,
      anon_sym_ref,
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
  [8955] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(193), 1,
      sym_comment,
    ACTIONS(459), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(457), 20,
      anon_sym_ref,
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
  [8992] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(194), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(465), 20,
      anon_sym_ref,
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
  [9029] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(195), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(483), 20,
      anon_sym_ref,
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
  [9066] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(196), 1,
      sym_comment,
    ACTIONS(489), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(487), 20,
      anon_sym_ref,
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
  [9103] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(197), 1,
      sym_comment,
    ACTIONS(497), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(495), 20,
      anon_sym_ref,
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
  [9140] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(198), 1,
      sym_comment,
    ACTIONS(505), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(503), 20,
      anon_sym_ref,
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
  [9177] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(199), 1,
      sym_comment,
    ACTIONS(599), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(597), 20,
      anon_sym_ref,
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
  [9214] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(200), 1,
      sym_comment,
    ACTIONS(521), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(519), 20,
      anon_sym_ref,
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
  [9251] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(201), 1,
      sym_comment,
    ACTIONS(525), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(523), 20,
      anon_sym_ref,
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
  [9288] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(202), 1,
      sym_comment,
    ACTIONS(529), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(527), 20,
      anon_sym_ref,
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
  [9325] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(203), 1,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(531), 20,
      anon_sym_ref,
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
  [9362] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(204), 1,
      sym_comment,
    ACTIONS(537), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(535), 20,
      anon_sym_ref,
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
  [9399] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(205), 1,
      sym_comment,
    ACTIONS(541), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(539), 20,
      anon_sym_ref,
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
  [9436] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(206), 1,
      sym_comment,
    ACTIONS(545), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(543), 20,
      anon_sym_ref,
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
  [9473] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(207), 1,
      sym_comment,
    ACTIONS(549), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(547), 20,
      anon_sym_ref,
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
  [9510] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(208), 1,
      sym_comment,
    ACTIONS(553), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(551), 20,
      anon_sym_ref,
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
  [9547] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(209), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(417), 20,
      anon_sym_ref,
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
  [9584] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(210), 1,
      sym_comment,
    ACTIONS(529), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(527), 19,
      anon_sym_ref,
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
  [9621] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(211), 1,
      sym_comment,
    ACTIONS(501), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(499), 19,
      anon_sym_ref,
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
  [9658] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(212), 1,
      sym_comment,
    ACTIONS(533), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(531), 19,
      anon_sym_ref,
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
  [9695] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(213), 1,
      sym_comment,
    ACTIONS(537), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(535), 19,
      anon_sym_ref,
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
  [9732] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(214), 1,
      sym_comment,
    ACTIONS(541), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(539), 19,
      anon_sym_ref,
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
  [9769] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(215), 1,
      sym_comment,
    ACTIONS(545), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(543), 19,
      anon_sym_ref,
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
  [9806] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(216), 1,
      sym_comment,
    ACTIONS(549), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(547), 19,
      anon_sym_ref,
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
  [9843] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(217), 1,
      sym_comment,
    ACTIONS(553), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(551), 19,
      anon_sym_ref,
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
  [9880] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(218), 1,
      sym_comment,
    ACTIONS(501), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(499), 20,
      anon_sym_ref,
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
  [9917] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(219), 1,
      sym_comment,
    ACTIONS(509), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(507), 20,
      anon_sym_ref,
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
  [9954] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(220), 1,
      sym_comment,
    ACTIONS(419), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(417), 19,
      anon_sym_ref,
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
  [9991] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(221), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(461), 19,
      anon_sym_ref,
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
  [10028] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(222), 1,
      sym_comment,
    ACTIONS(471), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(469), 19,
      anon_sym_ref,
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
  [10065] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(223), 1,
      sym_comment,
    ACTIONS(475), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(473), 19,
      anon_sym_ref,
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
  [10102] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(224), 1,
      sym_comment,
    ACTIONS(481), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(479), 19,
      anon_sym_ref,
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
  [10139] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(225), 1,
      sym_comment,
    ACTIONS(513), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(511), 19,
      anon_sym_ref,
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
  [10176] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(226), 1,
      sym_comment,
    ACTIONS(571), 3,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(569), 20,
      anon_sym_ref,
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
  [10213] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(227), 1,
      sym_comment,
    ACTIONS(517), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 19,
      anon_sym_ref,
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
  [10250] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(228), 1,
      sym_comment,
    ACTIONS(517), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 19,
      anon_sym_ref,
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
  [10287] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(229), 1,
      sym_comment,
    ACTIONS(431), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(429), 19,
      anon_sym_ref,
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
  [10324] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(230), 1,
      sym_comment,
    ACTIONS(567), 4,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(565), 19,
      anon_sym_ref,
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
  [10361] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(231), 1,
      sym_comment,
    ACTIONS(351), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(353), 9,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [10389] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(232), 1,
      sym_comment,
    ACTIONS(359), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(361), 9,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [10417] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(233), 1,
      sym_comment,
    ACTIONS(355), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(357), 9,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [10445] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(603), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      anon_sym_x,
    ACTIONS(611), 1,
      anon_sym_DASH_DASH,
    STATE(234), 1,
      sym_comment,
    STATE(367), 1,
      sym_connector,
    ACTIONS(605), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(601), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(609), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [10481] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(603), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      anon_sym_x,
    ACTIONS(611), 1,
      anon_sym_DASH_DASH,
    STATE(235), 1,
      sym_comment,
    STATE(382), 1,
      sym_connector,
    ACTIONS(605), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(601), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(609), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [10517] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(603), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      anon_sym_x,
    ACTIONS(611), 1,
      anon_sym_DASH_DASH,
    STATE(236), 1,
      sym_comment,
    STATE(397), 1,
      sym_connector,
    ACTIONS(605), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(601), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(609), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [10553] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_DASH,
    STATE(237), 1,
      sym_comment,
    ACTIONS(615), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(613), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(619), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10580] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_DASH,
    STATE(238), 1,
      sym_comment,
    ACTIONS(623), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(621), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(627), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10607] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(635), 1,
      anon_sym_LBRACK_POUND,
    STATE(239), 1,
      sym_comment,
    ACTIONS(631), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(629), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(633), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10634] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_LBRACK_POUND,
    STATE(240), 1,
      sym_comment,
    ACTIONS(639), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(637), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(641), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10661] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(241), 1,
      sym_comment,
    ACTIONS(639), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(637), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(641), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10685] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(242), 1,
      sym_comment,
    ACTIONS(623), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(621), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(627), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10709] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(243), 1,
      sym_comment,
    ACTIONS(647), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(645), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(649), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10733] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(244), 1,
      sym_comment,
    ACTIONS(631), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(629), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(633), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10757] = 9,
    ACTIONS(651), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(655), 1,
      aux_sym_attribute_token3,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(245), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym_attribute_repeat1,
    STATE(662), 1,
      sym_string,
    ACTIONS(653), 2,
      anon_sym_inc,
      anon_sym_resume,
  [10786] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(246), 1,
      sym_comment,
    ACTIONS(663), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(667), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10809] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(673), 1,
      anon_sym_LBRACK_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(669), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(671), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10832] = 9,
    ACTIONS(655), 1,
      aux_sym_attribute_token3,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(675), 1,
      aux_sym__NEWLINE_token1,
    STATE(248), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_attribute_repeat1,
    STATE(632), 1,
      sym_string,
    ACTIONS(677), 2,
      anon_sym_inc,
      anon_sym_resume,
  [10861] = 9,
    ACTIONS(655), 1,
      aux_sym_attribute_token3,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(679), 1,
      aux_sym__NEWLINE_token1,
    STATE(249), 1,
      sym_comment,
    STATE(286), 1,
      aux_sym_attribute_repeat1,
    STATE(597), 1,
      sym_string,
    ACTIONS(681), 2,
      anon_sym_inc,
      anon_sym_resume,
  [10890] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    STATE(250), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10916] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(251), 1,
      sym_comment,
    ACTIONS(669), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(671), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10936] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_COLON,
    ACTIONS(695), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_comment,
    STATE(283), 1,
      aux_sym_ref_line_repeat1,
    STATE(346), 1,
      sym__NEWLINE,
  [10964] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(699), 1,
      anon_sym_COLON,
    ACTIONS(701), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(308), 1,
      sym__NEWLINE,
  [10992] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      sym_comment,
    STATE(259), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11018] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      sym_comment,
    STATE(257), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11044] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(256), 1,
      sym_comment,
    ACTIONS(613), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(619), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [11064] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      sym_comment,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11090] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_COLON,
    ACTIONS(695), 1,
      anon_sym_POUND,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    STATE(253), 1,
      aux_sym_ref_line_repeat1,
    STATE(258), 1,
      sym_comment,
    STATE(300), 1,
      sym__NEWLINE,
  [11118] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    STATE(259), 1,
      sym_comment,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11144] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(260), 1,
      sym_comment,
    ACTIONS(711), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(713), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [11164] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(715), 1,
      anon_sym_DQUOTE,
    STATE(261), 1,
      sym_comment,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11190] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(717), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      anon_sym_BSLASH,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(719), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(262), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [11214] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(263), 1,
      sym_comment,
    STATE(264), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11240] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(264), 1,
      sym_comment,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11266] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    STATE(265), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11292] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(266), 1,
      sym_comment,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11318] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    STATE(267), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11344] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(268), 1,
      sym_comment,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11370] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    STATE(269), 1,
      sym_comment,
    STATE(270), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11396] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(739), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(270), 1,
      sym_comment,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11422] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      sym_comment,
    STATE(272), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11448] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(272), 1,
      sym_comment,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11474] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    STATE(273), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_string_repeat1,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11500] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_repeat1,
    STATE(274), 1,
      sym_comment,
    STATE(366), 1,
      sym_escape_char,
    ACTIONS(685), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [11526] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(749), 1,
      anon_sym_COLON,
    ACTIONS(751), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    STATE(277), 1,
      aux_sym_ref_line_repeat1,
    STATE(313), 1,
      sym__NEWLINE,
  [11554] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_COLON,
    ACTIONS(751), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym_comment,
    STATE(278), 1,
      aux_sym_ref_line_repeat1,
    STATE(385), 1,
      sym__NEWLINE,
  [11582] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(753), 1,
      anon_sym_COLON,
    ACTIONS(755), 1,
      anon_sym_POUND,
    STATE(277), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(320), 1,
      sym__NEWLINE,
  [11610] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_COLON,
    ACTIONS(755), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(452), 1,
      sym__NEWLINE,
  [11638] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(757), 1,
      anon_sym_COLON,
    ACTIONS(759), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym_comment,
    STATE(281), 1,
      aux_sym_ref_line_repeat1,
    STATE(293), 1,
      sym__NEWLINE,
  [11666] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_COLON,
    ACTIONS(759), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym_ref_line_repeat1,
    STATE(402), 1,
      sym__NEWLINE,
  [11694] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(761), 1,
      anon_sym_COLON,
    ACTIONS(763), 1,
      anon_sym_POUND,
    STATE(281), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(297), 1,
      sym__NEWLINE,
  [11722] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_COLON,
    ACTIONS(763), 1,
      anon_sym_POUND,
    STATE(282), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(408), 1,
      sym__NEWLINE,
  [11750] = 9,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_COLON,
    ACTIONS(701), 1,
      anon_sym_POUND,
    STATE(283), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(369), 1,
      sym__NEWLINE,
  [11778] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(765), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(767), 1,
      anon_sym_DQUOTE,
    STATE(284), 1,
      sym_comment,
    ACTIONS(769), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11799] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(771), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(776), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    STATE(285), 2,
      sym_comment,
      aux_sym_ref_line_repeat1,
  [11820] = 8,
    ACTIONS(655), 1,
      aux_sym_attribute_token3,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(778), 1,
      aux_sym__NEWLINE_token1,
    STATE(286), 1,
      sym_comment,
    STATE(431), 1,
      aux_sym_attribute_repeat1,
    STATE(617), 1,
      sym_string,
  [11845] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
    ACTIONS(782), 1,
      aux_sym_multiline_token1,
    ACTIONS(784), 1,
      anon_sym_BSLASH,
    STATE(287), 1,
      sym_comment,
    STATE(302), 1,
      aux_sym_multiline_repeat1,
    STATE(490), 1,
      sym_escape_char,
  [11870] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(786), 1,
      aux_sym_attr_alias_token1,
    STATE(288), 1,
      sym_comment,
    ACTIONS(788), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11891] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(792), 1,
      anon_sym_endnote,
    ACTIONS(794), 1,
      anon_sym_endhnote,
    STATE(289), 1,
      sym_comment,
    STATE(294), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [11916] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    ACTIONS(796), 1,
      aux_sym_attr_alias_token1,
    STATE(290), 1,
      sym_comment,
    ACTIONS(798), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11937] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
    ACTIONS(800), 1,
      aux_sym_attr_alias_token1,
    STATE(291), 1,
      sym_comment,
    ACTIONS(802), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11958] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(782), 1,
      aux_sym_multiline_token1,
    ACTIONS(784), 1,
      anon_sym_BSLASH,
    ACTIONS(804), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_multiline_repeat1,
    STATE(490), 1,
      sym_escape_char,
  [11983] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(806), 1,
      anon_sym_endnote,
    ACTIONS(808), 1,
      anon_sym_endhnote,
    STATE(293), 1,
      sym_comment,
    STATE(296), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12008] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(806), 1,
      anon_sym_endnote,
    ACTIONS(808), 1,
      anon_sym_endhnote,
    STATE(294), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12033] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(782), 1,
      aux_sym_multiline_token1,
    ACTIONS(784), 1,
      anon_sym_BSLASH,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      sym_comment,
    STATE(302), 1,
      aux_sym_multiline_repeat1,
    STATE(490), 1,
      sym_escape_char,
  [12058] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(812), 1,
      anon_sym_endnote,
    ACTIONS(814), 1,
      anon_sym_endhnote,
    STATE(296), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12083] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(812), 1,
      anon_sym_endnote,
    ACTIONS(814), 1,
      anon_sym_endhnote,
    STATE(297), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12108] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(816), 1,
      anon_sym_endnote,
    ACTIONS(818), 1,
      anon_sym_endhnote,
    STATE(298), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12133] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(820), 1,
      anon_sym_endnote,
    ACTIONS(822), 1,
      anon_sym_endhnote,
    STATE(299), 1,
      sym_comment,
    STATE(318), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12158] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(824), 1,
      anon_sym_endnote,
    ACTIONS(826), 1,
      anon_sym_endhnote,
    STATE(300), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12183] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(828), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    STATE(301), 1,
      sym_comment,
    ACTIONS(832), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [12204] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    ACTIONS(836), 1,
      aux_sym_multiline_token1,
    ACTIONS(839), 1,
      anon_sym_BSLASH,
    STATE(490), 1,
      sym_escape_char,
    STATE(302), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [12227] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(842), 1,
      anon_sym_endnote,
    ACTIONS(844), 1,
      anon_sym_endhnote,
    STATE(303), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12252] = 8,
    ACTIONS(655), 1,
      aux_sym_attribute_token3,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(846), 1,
      aux_sym__NEWLINE_token1,
    STATE(304), 1,
      sym_comment,
    STATE(431), 1,
      aux_sym_attribute_repeat1,
    STATE(629), 1,
      sym_string,
  [12277] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      aux_sym_attr_alias_token1,
    STATE(305), 1,
      sym_comment,
    ACTIONS(850), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [12298] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(306), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_ref_line_repeat1,
    STATE(336), 1,
      sym__NEWLINE,
  [12323] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(856), 1,
      anon_sym_endnote,
    ACTIONS(858), 1,
      anon_sym_endhnote,
    STATE(307), 1,
      sym_comment,
    STATE(314), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12348] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(842), 1,
      anon_sym_endnote,
    ACTIONS(844), 1,
      anon_sym_endhnote,
    STATE(308), 1,
      sym_comment,
    STATE(323), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12373] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(782), 1,
      aux_sym_multiline_token1,
    ACTIONS(784), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_multiline_repeat1,
    STATE(309), 1,
      sym_comment,
    STATE(490), 1,
      sym_escape_char,
  [12398] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(782), 1,
      aux_sym_multiline_token1,
    ACTIONS(784), 1,
      anon_sym_BSLASH,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    STATE(310), 1,
      sym_comment,
    STATE(316), 1,
      aux_sym_multiline_repeat1,
    STATE(490), 1,
      sym_escape_char,
  [12423] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(864), 1,
      aux_sym_line_token1,
    STATE(463), 1,
      sym_line,
    ACTIONS(867), 2,
      anon_sym_endnote,
      anon_sym_endhnote,
    STATE(311), 2,
      sym_comment,
      aux_sym_ref_block_repeat1,
  [12444] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(869), 1,
      anon_sym_COLON,
    STATE(312), 1,
      sym_comment,
    STATE(315), 1,
      aux_sym_ref_line_repeat1,
    STATE(384), 1,
      sym__NEWLINE,
  [12469] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(871), 1,
      anon_sym_endnote,
    ACTIONS(873), 1,
      anon_sym_endhnote,
    STATE(313), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12494] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(871), 1,
      anon_sym_endnote,
    ACTIONS(873), 1,
      anon_sym_endhnote,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(314), 1,
      sym_comment,
    STATE(463), 1,
      sym_line,
  [12519] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(875), 1,
      anon_sym_COLON,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(315), 1,
      sym_comment,
    STATE(388), 1,
      sym__NEWLINE,
  [12544] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(782), 1,
      aux_sym_multiline_token1,
    ACTIONS(784), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_multiline_repeat1,
    STATE(316), 1,
      sym_comment,
    STATE(490), 1,
      sym_escape_char,
  [12569] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(879), 1,
      anon_sym_endnote,
    ACTIONS(881), 1,
      anon_sym_endhnote,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(317), 1,
      sym_comment,
    STATE(463), 1,
      sym_line,
  [12594] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(824), 1,
      anon_sym_endnote,
    ACTIONS(826), 1,
      anon_sym_endhnote,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(318), 1,
      sym_comment,
    STATE(463), 1,
      sym_line,
  [12619] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(883), 1,
      anon_sym_COLON,
    STATE(319), 1,
      sym_comment,
    STATE(322), 1,
      aux_sym_ref_line_repeat1,
    STATE(401), 1,
      sym__NEWLINE,
  [12644] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(879), 1,
      anon_sym_endnote,
    ACTIONS(881), 1,
      anon_sym_endhnote,
    STATE(320), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_ref_block_repeat1,
    STATE(463), 1,
      sym_line,
  [12669] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(885), 1,
      anon_sym_endnote,
    ACTIONS(887), 1,
      anon_sym_endhnote,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(321), 1,
      sym_comment,
    STATE(463), 1,
      sym_line,
  [12694] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(889), 1,
      anon_sym_COLON,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(322), 1,
      sym_comment,
    STATE(405), 1,
      sym__NEWLINE,
  [12719] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(790), 1,
      aux_sym_line_token1,
    ACTIONS(891), 1,
      anon_sym_endnote,
    ACTIONS(893), 1,
      anon_sym_endhnote,
    STATE(311), 1,
      aux_sym_ref_block_repeat1,
    STATE(323), 1,
      sym_comment,
    STATE(463), 1,
      sym_line,
  [12744] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      aux_sym_attr_alias_token1,
    STATE(324), 1,
      sym_comment,
    ACTIONS(897), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [12765] = 8,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(899), 1,
      anon_sym_COLON,
    STATE(285), 1,
      aux_sym_ref_line_repeat1,
    STATE(325), 1,
      sym_comment,
    STATE(363), 1,
      sym__NEWLINE,
  [12790] = 8,
    ACTIONS(655), 1,
      aux_sym_attribute_token3,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(901), 1,
      aux_sym__NEWLINE_token1,
    STATE(326), 1,
      sym_comment,
    STATE(431), 1,
      aux_sym_attribute_repeat1,
    STATE(645), 1,
      sym_string,
  [12815] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(903), 1,
      anon_sym_over,
    STATE(327), 1,
      sym_comment,
    ACTIONS(905), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [12833] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(909), 1,
      anon_sym_ATendyaml,
    STATE(328), 1,
      sym_comment,
    STATE(410), 1,
      aux_sym_json_repeat1,
    ACTIONS(907), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12853] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(329), 1,
      sym_comment,
    ACTIONS(911), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [12869] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_ATendebnf,
    STATE(330), 1,
      sym_comment,
    STATE(343), 1,
      aux_sym_json_repeat1,
    ACTIONS(913), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12889] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(919), 1,
      anon_sym_ATendregex,
    STATE(331), 1,
      sym_comment,
    STATE(370), 1,
      aux_sym_json_repeat1,
    ACTIONS(917), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12909] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(771), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    STATE(332), 2,
      sym_comment,
      aux_sym_ref_line_repeat1,
  [12927] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(926), 1,
      anon_sym_ATendditaa,
    STATE(333), 1,
      sym_comment,
    STATE(371), 1,
      aux_sym_json_repeat1,
    ACTIONS(924), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12947] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(867), 1,
      anon_sym_endrnote,
    ACTIONS(928), 1,
      aux_sym_line_token1,
    STATE(580), 1,
      sym_line,
    STATE(334), 2,
      sym_comment,
      aux_sym_ref_block_repeat1,
  [12967] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      sym_comment,
    STATE(341), 1,
      sym_string,
    STATE(360), 1,
      sym_participant_name,
  [12989] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_endref,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    STATE(336), 1,
      sym_comment,
    STATE(362), 1,
      aux_sym_ref_block_repeat1,
    STATE(586), 1,
      sym_line,
  [13011] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(941), 1,
      anon_sym_ATendgantt,
    STATE(337), 1,
      sym_comment,
    STATE(373), 1,
      aux_sym_json_repeat1,
    ACTIONS(939), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13031] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(945), 1,
      anon_sym_ATendchronology,
    STATE(338), 1,
      sym_comment,
    STATE(375), 1,
      aux_sym_json_repeat1,
    ACTIONS(943), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13051] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(949), 1,
      anon_sym_ATendjson,
    STATE(339), 1,
      sym_comment,
    STATE(372), 1,
      aux_sym_json_repeat1,
    ACTIONS(947), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13071] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_COLON,
    ACTIONS(955), 1,
      anon_sym_POUND,
    STATE(340), 1,
      sym_comment,
    STATE(365), 1,
      aux_sym_ref_line_repeat1,
  [13093] = 5,
    ACTIONS(353), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(341), 1,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
  [13111] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(959), 1,
      anon_sym_ATendmindmap,
    STATE(342), 1,
      sym_comment,
    STATE(376), 1,
      aux_sym_json_repeat1,
    ACTIONS(957), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13131] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendebnf,
    ACTIONS(961), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(343), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13149] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(968), 1,
      anon_sym_ATendwbs,
    STATE(344), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym_json_repeat1,
    ACTIONS(966), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13169] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(972), 1,
      anon_sym_ATendchen,
    STATE(345), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym_json_repeat1,
    ACTIONS(970), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13189] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(976), 1,
      anon_sym_endrnote,
    STATE(346), 1,
      sym_comment,
    STATE(368), 1,
      aux_sym_ref_block_repeat1,
    STATE(580), 1,
      sym_line,
  [13211] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(306), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(347), 1,
      sym_comment,
  [13233] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(976), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(348), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [13255] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_COLON,
    ACTIONS(955), 1,
      anon_sym_POUND,
    STATE(332), 1,
      aux_sym_ref_line_repeat1,
    STATE(349), 1,
      sym_comment,
  [13277] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(978), 1,
      anon_sym_ATendchronology,
    STATE(338), 1,
      aux_sym_json_repeat1,
    STATE(350), 1,
      sym_comment,
    ACTIONS(943), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13297] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(980), 1,
      anon_sym_ATendmindmap,
    STATE(342), 1,
      aux_sym_json_repeat1,
    STATE(351), 1,
      sym_comment,
    ACTIONS(957), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13317] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(982), 1,
      anon_sym_over,
    STATE(352), 1,
      sym_comment,
    ACTIONS(984), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13335] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(258), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(353), 1,
      sym_comment,
  [13357] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(986), 1,
      anon_sym_COLON,
    ACTIONS(988), 1,
      anon_sym_POUND,
    STATE(299), 1,
      sym__NEWLINE,
    STATE(354), 1,
      sym_comment,
  [13379] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(355), 1,
      sym_comment,
  [13401] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(986), 1,
      anon_sym_COLON,
    ACTIONS(988), 1,
      anon_sym_POUND,
    STATE(356), 1,
      sym_comment,
    STATE(412), 1,
      sym__NEWLINE,
  [13423] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(990), 1,
      aux_sym_attr_alias_token1,
    STATE(231), 1,
      sym_string,
    STATE(357), 1,
      sym_comment,
    STATE(413), 1,
      sym_participant_name,
  [13445] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(992), 1,
      anon_sym_ATendwbs,
    STATE(344), 1,
      aux_sym_json_repeat1,
    STATE(358), 1,
      sym_comment,
    ACTIONS(966), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13465] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(994), 1,
      anon_sym_ATendchen,
    STATE(345), 1,
      aux_sym_json_repeat1,
    STATE(359), 1,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13485] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(771), 1,
      aux_sym__NEWLINE_token1,
    STATE(360), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
  [13503] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(996), 1,
      aux_sym_attribute_token1,
    ACTIONS(998), 1,
      aux_sym_attribute_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(361), 1,
      sym_comment,
    STATE(609), 1,
      sym_string,
  [13525] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1002), 1,
      anon_sym_endref,
    STATE(362), 1,
      sym_comment,
    STATE(364), 1,
      aux_sym_ref_block_repeat1,
    STATE(586), 1,
      sym_line,
  [13547] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1002), 1,
      anon_sym_endref,
    STATE(363), 1,
      sym_comment,
    STATE(374), 1,
      aux_sym_ref_block_repeat1,
    STATE(586), 1,
      sym_line,
  [13569] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(867), 1,
      anon_sym_endref,
    ACTIONS(1004), 1,
      aux_sym_line_token1,
    STATE(586), 1,
      sym_line,
    STATE(364), 2,
      sym_comment,
      aux_sym_ref_block_repeat1,
  [13589] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    ACTIONS(1009), 1,
      anon_sym_POUND,
    STATE(332), 1,
      aux_sym_ref_line_repeat1,
    STATE(365), 1,
      sym_comment,
  [13611] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(366), 1,
      sym_comment,
    ACTIONS(1011), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [13627] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1015), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_participant_name,
    STATE(79), 1,
      sym_string,
    STATE(367), 1,
      sym_comment,
  [13649] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1017), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(368), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [13671] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1017), 1,
      anon_sym_endrnote,
    STATE(369), 1,
      sym_comment,
    STATE(377), 1,
      aux_sym_ref_block_repeat1,
    STATE(580), 1,
      sym_line,
  [13693] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendregex,
    ACTIONS(1019), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(370), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13711] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendditaa,
    ACTIONS(1022), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(371), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13729] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendjson,
    ACTIONS(1025), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(372), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13747] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendgantt,
    ACTIONS(1028), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(373), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13765] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1031), 1,
      anon_sym_endref,
    STATE(364), 1,
      aux_sym_ref_block_repeat1,
    STATE(374), 1,
      sym_comment,
    STATE(586), 1,
      sym_line,
  [13787] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendchronology,
    ACTIONS(1033), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(375), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13805] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendmindmap,
    ACTIONS(1036), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(376), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13823] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1039), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(377), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [13845] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendwbs,
    ACTIONS(1041), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(378), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13863] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendchen,
    ACTIONS(1044), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(379), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [13881] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1047), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1049), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_participant_name,
    STATE(42), 1,
      sym_string,
    STATE(380), 1,
      sym_comment,
  [13903] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1051), 1,
      aux_sym_attribute_token1,
    ACTIONS(1053), 1,
      aux_sym_attribute_token2,
    STATE(381), 1,
      sym_comment,
    STATE(628), 1,
      sym_string,
  [13925] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1055), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1057), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_participant_name,
    STATE(70), 1,
      sym_string,
    STATE(382), 1,
      sym_comment,
  [13947] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1059), 1,
      anon_sym_endrnote,
    STATE(383), 1,
      sym_comment,
    STATE(386), 1,
      aux_sym_ref_block_repeat1,
    STATE(580), 1,
      sym_line,
  [13969] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1061), 1,
      anon_sym_endref,
    STATE(384), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym_ref_block_repeat1,
    STATE(586), 1,
      sym_line,
  [13991] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1063), 1,
      anon_sym_endrnote,
    STATE(385), 1,
      sym_comment,
    STATE(390), 1,
      aux_sym_ref_block_repeat1,
    STATE(580), 1,
      sym_line,
  [14013] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1063), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(386), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [14035] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1065), 1,
      anon_sym_endref,
    STATE(364), 1,
      aux_sym_ref_block_repeat1,
    STATE(387), 1,
      sym_comment,
    STATE(586), 1,
      sym_line,
  [14057] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1065), 1,
      anon_sym_endref,
    STATE(388), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_ref_block_repeat1,
    STATE(586), 1,
      sym_line,
  [14079] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1067), 1,
      anon_sym_over,
    STATE(389), 1,
      sym_comment,
    ACTIONS(1069), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [14097] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1071), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(390), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [14119] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(990), 1,
      aux_sym_attr_alias_token1,
    STATE(231), 1,
      sym_string,
    STATE(391), 1,
      sym_comment,
    STATE(433), 1,
      sym_participant_name,
  [14141] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1073), 1,
      anon_sym_endref,
    STATE(364), 1,
      aux_sym_ref_block_repeat1,
    STATE(392), 1,
      sym_comment,
    STATE(586), 1,
      sym_line,
  [14163] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1075), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(393), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [14185] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1077), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1079), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_participant_name,
    STATE(49), 1,
      sym_string,
    STATE(394), 1,
      sym_comment,
  [14207] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1081), 1,
      anon_sym_over,
    STATE(395), 1,
      sym_comment,
    ACTIONS(1083), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [14225] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1085), 1,
      aux_sym_attribute_token1,
    ACTIONS(1087), 1,
      aux_sym_attribute_token2,
    STATE(396), 1,
      sym_comment,
    STATE(616), 1,
      sym_string,
  [14247] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1089), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_participant_name,
    STATE(82), 1,
      sym_string,
    STATE(397), 1,
      sym_comment,
  [14269] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1093), 1,
      anon_sym_over,
    STATE(398), 1,
      sym_comment,
    ACTIONS(1095), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [14287] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1097), 1,
      anon_sym_endrnote,
    STATE(399), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_ref_block_repeat1,
    STATE(580), 1,
      sym_line,
  [14309] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(990), 1,
      aux_sym_attr_alias_token1,
    STATE(231), 1,
      sym_string,
    STATE(340), 1,
      sym_participant_name,
    STATE(400), 1,
      sym_comment,
  [14331] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1099), 1,
      anon_sym_endref,
    STATE(401), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_ref_block_repeat1,
    STATE(586), 1,
      sym_line,
  [14353] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1101), 1,
      anon_sym_endrnote,
    STATE(402), 1,
      sym_comment,
    STATE(407), 1,
      aux_sym_ref_block_repeat1,
    STATE(580), 1,
      sym_line,
  [14375] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1101), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(403), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [14397] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1103), 1,
      anon_sym_endref,
    STATE(364), 1,
      aux_sym_ref_block_repeat1,
    STATE(404), 1,
      sym_comment,
    STATE(586), 1,
      sym_line,
  [14419] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1103), 1,
      anon_sym_endref,
    STATE(405), 1,
      sym_comment,
    STATE(409), 1,
      aux_sym_ref_block_repeat1,
    STATE(586), 1,
      sym_line,
  [14441] = 5,
    ACTIONS(357), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(406), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
  [14459] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1105), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(407), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [14481] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1105), 1,
      anon_sym_endrnote,
    STATE(408), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_ref_block_repeat1,
    STATE(580), 1,
      sym_line,
  [14503] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(937), 1,
      aux_sym_line_token1,
    ACTIONS(1107), 1,
      anon_sym_endref,
    STATE(364), 1,
      aux_sym_ref_block_repeat1,
    STATE(409), 1,
      sym_comment,
    STATE(586), 1,
      sym_line,
  [14525] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      anon_sym_ATendyaml,
    ACTIONS(1109), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(410), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [14543] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1112), 1,
      anon_sym_endrnote,
    STATE(334), 1,
      aux_sym_ref_block_repeat1,
    STATE(411), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [14565] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1114), 1,
      anon_sym_endrnote,
    STATE(348), 1,
      aux_sym_ref_block_repeat1,
    STATE(412), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [14587] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_COLON,
    ACTIONS(1118), 1,
      anon_sym_POUND,
    STATE(349), 1,
      aux_sym_ref_line_repeat1,
    STATE(413), 1,
      sym_comment,
  [14609] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1120), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1122), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_participant_name,
    STATE(51), 1,
      sym_string,
    STATE(414), 1,
      sym_comment,
  [14631] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1124), 1,
      anon_sym_ATendjson,
    STATE(339), 1,
      aux_sym_json_repeat1,
    STATE(415), 1,
      sym_comment,
    ACTIONS(947), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [14651] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1126), 1,
      anon_sym_ATendyaml,
    STATE(328), 1,
      aux_sym_json_repeat1,
    STATE(416), 1,
      sym_comment,
    ACTIONS(907), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [14671] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1128), 1,
      anon_sym_ATendebnf,
    STATE(330), 1,
      aux_sym_json_repeat1,
    STATE(417), 1,
      sym_comment,
    ACTIONS(913), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [14691] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1130), 1,
      anon_sym_ATendregex,
    STATE(331), 1,
      aux_sym_json_repeat1,
    STATE(418), 1,
      sym_comment,
    ACTIONS(917), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [14711] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1132), 1,
      anon_sym_ATendditaa,
    STATE(333), 1,
      aux_sym_json_repeat1,
    STATE(419), 1,
      sym_comment,
    ACTIONS(924), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [14731] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    ACTIONS(1136), 1,
      anon_sym_POUND,
    STATE(307), 1,
      sym__NEWLINE,
    STATE(420), 1,
      sym_comment,
  [14753] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    ACTIONS(1136), 1,
      anon_sym_POUND,
    STATE(383), 1,
      sym__NEWLINE,
    STATE(421), 1,
      sym_comment,
  [14775] = 5,
    ACTIONS(361), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(422), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
  [14793] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_COLON,
    ACTIONS(1140), 1,
      anon_sym_POUND,
    STATE(423), 1,
      sym_comment,
    STATE(427), 1,
      aux_sym_ref_line_repeat1,
  [14815] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(990), 1,
      aux_sym_attr_alias_token1,
    STATE(231), 1,
      sym_string,
    STATE(424), 1,
      sym_comment,
    STATE(488), 1,
      sym_participant_name,
  [14837] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_COLON,
    ACTIONS(1144), 1,
      anon_sym_POUND,
    STATE(425), 1,
      sym_comment,
    STATE(428), 1,
      aux_sym_ref_line_repeat1,
  [14859] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1146), 1,
      anon_sym_ATendgantt,
    STATE(337), 1,
      aux_sym_json_repeat1,
    STATE(426), 1,
      sym_comment,
    ACTIONS(939), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [14879] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_COLON,
    ACTIONS(1144), 1,
      anon_sym_POUND,
    STATE(332), 1,
      aux_sym_ref_line_repeat1,
    STATE(427), 1,
      sym_comment,
  [14901] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_COLON,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    STATE(332), 1,
      aux_sym_ref_line_repeat1,
    STATE(428), 1,
      sym_comment,
  [14923] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1152), 1,
      anon_sym_COLON,
    ACTIONS(1154), 1,
      anon_sym_POUND,
    STATE(289), 1,
      sym__NEWLINE,
    STATE(429), 1,
      sym_comment,
  [14945] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1152), 1,
      anon_sym_COLON,
    ACTIONS(1154), 1,
      anon_sym_POUND,
    STATE(399), 1,
      sym__NEWLINE,
    STATE(430), 1,
      sym_comment,
  [14967] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1156), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1158), 1,
      aux_sym_attribute_token3,
    ACTIONS(1161), 1,
      anon_sym_DQUOTE,
    STATE(431), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [14987] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_COLON,
    ACTIONS(1165), 1,
      anon_sym_POUND,
    STATE(432), 1,
      sym_comment,
    STATE(434), 1,
      aux_sym_ref_line_repeat1,
  [15009] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_COLON,
    ACTIONS(1169), 1,
      anon_sym_POUND,
    STATE(433), 1,
      sym_comment,
    STATE(435), 1,
      aux_sym_ref_line_repeat1,
  [15031] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_COLON,
    ACTIONS(1169), 1,
      anon_sym_POUND,
    STATE(332), 1,
      aux_sym_ref_line_repeat1,
    STATE(434), 1,
      sym_comment,
  [15053] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_COLON,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    STATE(332), 1,
      aux_sym_ref_line_repeat1,
    STATE(435), 1,
      sym_comment,
  [15075] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1175), 1,
      anon_sym_over,
    STATE(436), 1,
      sym_comment,
    ACTIONS(1177), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [15093] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1179), 1,
      anon_sym_over,
    STATE(437), 1,
      sym_comment,
    ACTIONS(1181), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [15111] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1183), 1,
      anon_sym_over,
    STATE(438), 1,
      sym_comment,
    ACTIONS(1185), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [15129] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(439), 1,
      sym_comment,
  [15151] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1187), 1,
      anon_sym_over,
    STATE(440), 1,
      sym_comment,
    ACTIONS(1189), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [15169] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(275), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(441), 1,
      sym_comment,
  [15191] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(276), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(442), 1,
      sym_comment,
  [15213] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(990), 1,
      aux_sym_attr_alias_token1,
    STATE(231), 1,
      sym_string,
    STATE(423), 1,
      sym_participant_name,
    STATE(443), 1,
      sym_comment,
  [15235] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(990), 1,
      aux_sym_attr_alias_token1,
    STATE(231), 1,
      sym_string,
    STATE(425), 1,
      sym_participant_name,
    STATE(444), 1,
      sym_comment,
  [15257] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1191), 1,
      anon_sym_over,
    STATE(445), 1,
      sym_comment,
    ACTIONS(1193), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [15275] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1195), 1,
      anon_sym_over,
    STATE(446), 1,
      sym_comment,
    ACTIONS(1197), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [15293] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(447), 1,
      sym_comment,
  [15315] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1199), 1,
      anon_sym_over,
    STATE(448), 1,
      sym_comment,
    ACTIONS(1201), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [15333] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(279), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(449), 1,
      sym_comment,
  [15355] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(280), 1,
      sym_participant_name,
    STATE(341), 1,
      sym_string,
    STATE(450), 1,
      sym_comment,
  [15377] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(990), 1,
      aux_sym_attr_alias_token1,
    STATE(231), 1,
      sym_string,
    STATE(432), 1,
      sym_participant_name,
    STATE(451), 1,
      sym_comment,
  [15399] = 7,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token1,
    ACTIONS(1071), 1,
      anon_sym_endrnote,
    STATE(393), 1,
      aux_sym_ref_block_repeat1,
    STATE(452), 1,
      sym_comment,
    STATE(580), 1,
      sym_line,
  [15421] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1203), 1,
      anon_sym_else,
    ACTIONS(1205), 1,
      anon_sym_end,
    STATE(453), 1,
      sym_comment,
    STATE(505), 1,
      aux_sym_alt_block_repeat1,
  [15440] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(454), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [15455] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(455), 1,
      sym_comment,
    ACTIONS(507), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [15470] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1209), 1,
      ts_builtin_sym_end,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    STATE(456), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15489] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1213), 1,
      ts_builtin_sym_end,
    STATE(457), 1,
      sym_comment,
    STATE(522), 1,
      aux_sym_json_repeat2,
  [15508] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(458), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [15523] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1215), 1,
      ts_builtin_sym_end,
    STATE(459), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15542] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1217), 1,
      ts_builtin_sym_end,
    STATE(460), 1,
      sym_comment,
    STATE(484), 1,
      aux_sym_json_repeat2,
  [15561] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1219), 1,
      ts_builtin_sym_end,
    STATE(461), 1,
      sym_comment,
    STATE(467), 1,
      aux_sym_json_repeat2,
  [15580] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(462), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [15595] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(463), 1,
      sym_comment,
    ACTIONS(1221), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [15610] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1223), 1,
      ts_builtin_sym_end,
    STATE(464), 1,
      sym_comment,
    STATE(465), 1,
      aux_sym_json_repeat2,
  [15629] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1225), 1,
      ts_builtin_sym_end,
    STATE(465), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15648] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(466), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [15663] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1227), 1,
      ts_builtin_sym_end,
    STATE(467), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15682] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1229), 1,
      ts_builtin_sym_end,
    STATE(468), 1,
      sym_comment,
    STATE(473), 1,
      aux_sym_json_repeat2,
  [15701] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1231), 1,
      ts_builtin_sym_end,
    STATE(469), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15720] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1233), 1,
      ts_builtin_sym_end,
    STATE(470), 1,
      sym_comment,
    STATE(475), 1,
      aux_sym_json_repeat2,
  [15739] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(471), 1,
      sym_comment,
    ACTIONS(1235), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [15754] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
      sym_boolean_literal,
    STATE(472), 1,
      sym_comment,
    ACTIONS(1237), 2,
      anon_sym_true,
      anon_sym_false,
  [15771] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1239), 1,
      ts_builtin_sym_end,
    STATE(473), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15790] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1241), 1,
      ts_builtin_sym_end,
    STATE(474), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15809] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1243), 1,
      ts_builtin_sym_end,
    STATE(475), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15828] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1245), 1,
      ts_builtin_sym_end,
    STATE(476), 1,
      sym_comment,
    STATE(478), 1,
      aux_sym_json_repeat2,
  [15847] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1203), 1,
      anon_sym_else,
    ACTIONS(1247), 1,
      anon_sym_end,
    STATE(477), 1,
      sym_comment,
    STATE(505), 1,
      aux_sym_alt_block_repeat1,
  [15866] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1249), 1,
      ts_builtin_sym_end,
    STATE(478), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15885] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1251), 1,
      ts_builtin_sym_end,
    STATE(479), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15904] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1253), 1,
      ts_builtin_sym_end,
    STATE(480), 1,
      sym_comment,
    STATE(485), 1,
      aux_sym_json_repeat2,
  [15923] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1255), 1,
      ts_builtin_sym_end,
    STATE(481), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15942] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1203), 1,
      anon_sym_else,
    ACTIONS(1257), 1,
      anon_sym_end,
    STATE(482), 1,
      sym_comment,
    STATE(505), 1,
      aux_sym_alt_block_repeat1,
  [15961] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1259), 1,
      ts_builtin_sym_end,
    STATE(483), 1,
      sym_comment,
    STATE(486), 1,
      aux_sym_json_repeat2,
  [15980] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1261), 1,
      ts_builtin_sym_end,
    STATE(484), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [15999] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1263), 1,
      ts_builtin_sym_end,
    STATE(485), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [16018] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1265), 1,
      ts_builtin_sym_end,
    STATE(486), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [16037] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1267), 1,
      ts_builtin_sym_end,
    STATE(487), 1,
      sym_comment,
    STATE(506), 1,
      aux_sym_json_repeat2,
  [16056] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(488), 1,
      sym_comment,
    ACTIONS(771), 3,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
  [16071] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1269), 1,
      ts_builtin_sym_end,
    STATE(487), 1,
      aux_sym_json_repeat2,
    STATE(489), 1,
      sym_comment,
  [16090] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(490), 1,
      sym_comment,
    ACTIONS(1271), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [16105] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1273), 1,
      ts_builtin_sym_end,
    STATE(469), 1,
      aux_sym_json_repeat2,
    STATE(491), 1,
      sym_comment,
  [16124] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(492), 1,
      sym_comment,
    ACTIONS(1275), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [16139] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(493), 1,
      sym_comment,
    ACTIONS(1277), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [16154] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1279), 1,
      ts_builtin_sym_end,
    STATE(474), 1,
      aux_sym_json_repeat2,
    STATE(494), 1,
      sym_comment,
  [16173] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1203), 1,
      anon_sym_else,
    ACTIONS(1281), 1,
      anon_sym_end,
    STATE(495), 1,
      sym_comment,
    STATE(505), 1,
      aux_sym_alt_block_repeat1,
  [16192] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1203), 1,
      anon_sym_else,
    ACTIONS(1283), 1,
      anon_sym_end,
    STATE(496), 1,
      sym_comment,
    STATE(505), 1,
      aux_sym_alt_block_repeat1,
  [16211] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(497), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [16226] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(498), 1,
      sym_comment,
    ACTIONS(1285), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [16241] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1203), 1,
      anon_sym_else,
    ACTIONS(1287), 1,
      anon_sym_end,
    STATE(499), 1,
      sym_comment,
    STATE(505), 1,
      aux_sym_alt_block_repeat1,
  [16260] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(225), 1,
      sym_boolean_literal,
    STATE(500), 1,
      sym_comment,
    ACTIONS(1289), 2,
      anon_sym_true,
      anon_sym_false,
  [16277] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(501), 1,
      sym_comment,
    ACTIONS(499), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [16292] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1291), 1,
      ts_builtin_sym_end,
    STATE(459), 1,
      aux_sym_json_repeat2,
    STATE(502), 1,
      sym_comment,
  [16311] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1293), 1,
      ts_builtin_sym_end,
    STATE(456), 1,
      aux_sym_json_repeat2,
    STATE(503), 1,
      sym_comment,
  [16330] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1295), 1,
      aux_sym__NEWLINE_token1,
    STATE(504), 1,
      sym_comment,
    ACTIONS(1297), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [16347] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1299), 1,
      anon_sym_else,
    ACTIONS(1302), 1,
      anon_sym_end,
    STATE(505), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [16364] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1304), 1,
      ts_builtin_sym_end,
    ACTIONS(1306), 1,
      aux_sym__NEWLINE_token1,
    STATE(506), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [16381] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1309), 1,
      ts_builtin_sym_end,
    STATE(507), 1,
      sym_comment,
    STATE(523), 1,
      aux_sym_json_repeat2,
  [16400] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1311), 1,
      ts_builtin_sym_end,
    STATE(506), 1,
      aux_sym_json_repeat2,
    STATE(508), 1,
      sym_comment,
  [16419] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(509), 1,
      sym_comment,
    ACTIONS(911), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [16434] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(510), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [16449] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(511), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [16464] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1313), 1,
      ts_builtin_sym_end,
    STATE(479), 1,
      aux_sym_json_repeat2,
    STATE(512), 1,
      sym_comment,
  [16483] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1315), 1,
      ts_builtin_sym_end,
    STATE(506), 1,
      aux_sym_json_repeat2,
    STATE(513), 1,
      sym_comment,
  [16502] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(514), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [16517] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1317), 1,
      ts_builtin_sym_end,
    STATE(515), 1,
      sym_comment,
    STATE(519), 1,
      aux_sym_json_repeat2,
  [16536] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(516), 1,
      sym_comment,
    ACTIONS(1319), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [16551] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(517), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [16566] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1321), 1,
      ts_builtin_sym_end,
    STATE(481), 1,
      aux_sym_json_repeat2,
    STATE(518), 1,
      sym_comment,
  [16585] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1323), 1,
      ts_builtin_sym_end,
    STATE(506), 1,
      aux_sym_json_repeat2,
    STATE(519), 1,
      sym_comment,
  [16604] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1325), 1,
      ts_builtin_sym_end,
    STATE(508), 1,
      aux_sym_json_repeat2,
    STATE(520), 1,
      sym_comment,
  [16623] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(521), 1,
      sym_comment,
    ACTIONS(1207), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [16638] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1327), 1,
      ts_builtin_sym_end,
    STATE(506), 1,
      aux_sym_json_repeat2,
    STATE(522), 1,
      sym_comment,
  [16657] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1329), 1,
      ts_builtin_sym_end,
    STATE(506), 1,
      aux_sym_json_repeat2,
    STATE(523), 1,
      sym_comment,
  [16676] = 6,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1211), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1331), 1,
      ts_builtin_sym_end,
    STATE(513), 1,
      aux_sym_json_repeat2,
    STATE(524), 1,
      sym_comment,
  [16695] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(525), 1,
      sym_comment,
    ACTIONS(1333), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [16710] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(168), 1,
      sym_boolean_literal,
    STATE(526), 1,
      sym_comment,
    ACTIONS(1335), 2,
      anon_sym_true,
      anon_sym_false,
  [16727] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      aux_sym_line_token1,
    STATE(208), 1,
      sym_line,
    STATE(527), 1,
      sym_comment,
  [16743] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1339), 1,
      aux_sym__NEWLINE_token1,
    STATE(139), 1,
      sym__NEWLINE,
    STATE(528), 1,
      sym_comment,
  [16759] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1341), 1,
      anon_sym_COLON,
    ACTIONS(1343), 1,
      anon_sym_POUND,
    STATE(529), 1,
      sym_comment,
  [16775] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(530), 1,
      sym_comment,
    ACTIONS(830), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [16789] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1345), 1,
      aux_sym_label_token1,
    STATE(8), 1,
      sym_label,
    STATE(531), 1,
      sym_comment,
  [16805] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(532), 1,
      sym_comment,
    ACTIONS(1347), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [16819] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1349), 1,
      aux_sym__NEWLINE_token1,
    STATE(174), 1,
      sym__NEWLINE,
    STATE(533), 1,
      sym_comment,
  [16835] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      aux_sym_line_token1,
    STATE(176), 1,
      sym_line,
    STATE(534), 1,
      sym_comment,
  [16851] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1351), 1,
      aux_sym_label_token1,
    STATE(14), 1,
      sym_label,
    STATE(535), 1,
      sym_comment,
  [16867] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(536), 1,
      sym_comment,
    ACTIONS(631), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [16881] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      aux_sym_line_token1,
    STATE(188), 1,
      sym_line,
    STATE(537), 1,
      sym_comment,
  [16897] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      aux_sym_line_token1,
    STATE(90), 1,
      sym_line,
    STATE(538), 1,
      sym_comment,
  [16913] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      aux_sym_line_token1,
    STATE(191), 1,
      sym_line,
    STATE(539), 1,
      sym_comment,
  [16929] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1116), 1,
      anon_sym_COLON,
    ACTIONS(1118), 1,
      anon_sym_POUND,
    STATE(540), 1,
      sym_comment,
  [16945] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(852), 1,
      aux_sym__NEWLINE_token1,
    STATE(541), 1,
      sym_comment,
    STATE(583), 1,
      sym__NEWLINE,
  [16961] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1351), 1,
      aux_sym_label_token1,
    STATE(21), 1,
      sym_label,
    STATE(542), 1,
      sym_comment,
  [16977] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_line_token1,
    STATE(217), 1,
      sym_line,
    STATE(543), 1,
      sym_comment,
  [16993] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      aux_sym_line_token1,
    STATE(197), 1,
      sym_line,
    STATE(544), 1,
      sym_comment,
  [17009] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      aux_sym_line_token1,
    STATE(94), 1,
      sym_line,
    STATE(545), 1,
      sym_comment,
  [17025] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      aux_sym_line_token1,
    STATE(198), 1,
      sym_line,
    STATE(546), 1,
      sym_comment,
  [17041] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_line_token1,
    STATE(230), 1,
      sym_line,
    STATE(547), 1,
      sym_comment,
  [17057] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(689), 1,
      aux_sym__NEWLINE_token1,
    STATE(548), 1,
      sym_comment,
    STATE(552), 1,
      sym__NEWLINE,
  [17073] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1357), 1,
      aux_sym__NEWLINE_token1,
    STATE(125), 1,
      sym__NEWLINE,
    STATE(549), 1,
      sym_comment,
  [17089] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_line_token1,
    STATE(173), 1,
      sym_line,
    STATE(550), 1,
      sym_comment,
  [17105] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      aux_sym_line_token1,
    STATE(204), 1,
      sym_line,
    STATE(551), 1,
      sym_comment,
  [17121] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(552), 1,
      sym_comment,
    ACTIONS(507), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [17135] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_line_token1,
    STATE(213), 1,
      sym_line,
    STATE(553), 1,
      sym_comment,
  [17151] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1337), 1,
      aux_sym_line_token1,
    STATE(209), 1,
      sym_line,
    STATE(554), 1,
      sym_comment,
  [17167] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1359), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1361), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(555), 1,
      sym_comment,
  [17183] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1357), 1,
      aux_sym__NEWLINE_token1,
    STATE(110), 1,
      sym__NEWLINE,
    STATE(556), 1,
      sym_comment,
  [17199] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(557), 1,
      sym_comment,
    ACTIONS(499), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [17213] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1349), 1,
      aux_sym__NEWLINE_token1,
    STATE(219), 1,
      sym__NEWLINE,
    STATE(558), 1,
      sym_comment,
  [17229] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(559), 1,
      sym_comment,
    ACTIONS(623), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [17243] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_line_token1,
    STATE(184), 1,
      sym_line,
    STATE(560), 1,
      sym_comment,
  [17259] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1345), 1,
      aux_sym_label_token1,
    STATE(4), 1,
      sym_label,
    STATE(561), 1,
      sym_comment,
  [17275] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1351), 1,
      aux_sym_label_token1,
    STATE(16), 1,
      sym_label,
    STATE(562), 1,
      sym_comment,
  [17291] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1351), 1,
      aux_sym_label_token1,
    STATE(17), 1,
      sym_label,
    STATE(563), 1,
      sym_comment,
  [17307] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_line_token1,
    STATE(154), 1,
      sym_line,
    STATE(564), 1,
      sym_comment,
  [17323] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1363), 1,
      anon_sym_COLON,
    ACTIONS(1365), 1,
      anon_sym_POUND,
    STATE(565), 1,
      sym_comment,
  [17339] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1138), 1,
      anon_sym_COLON,
    ACTIONS(1140), 1,
      anon_sym_POUND,
    STATE(566), 1,
      sym_comment,
  [17355] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1367), 1,
      anon_sym_DASH,
    ACTIONS(1369), 1,
      anon_sym_DASH_DASH,
    STATE(567), 1,
      sym_comment,
  [17371] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      aux_sym_line_token1,
    STATE(127), 1,
      sym_line,
    STATE(568), 1,
      sym_comment,
  [17387] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1345), 1,
      aux_sym_label_token1,
    STATE(3), 1,
      sym_label,
    STATE(569), 1,
      sym_comment,
  [17403] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      aux_sym_line_token1,
    STATE(106), 1,
      sym_line,
    STATE(570), 1,
      sym_comment,
  [17419] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1345), 1,
      aux_sym_label_token1,
    STATE(5), 1,
      sym_label,
    STATE(571), 1,
      sym_comment,
  [17435] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1351), 1,
      aux_sym_label_token1,
    STATE(22), 1,
      sym_label,
    STATE(572), 1,
      sym_comment,
  [17451] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1351), 1,
      aux_sym_label_token1,
    STATE(23), 1,
      sym_label,
    STATE(573), 1,
      sym_comment,
  [17467] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1371), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1373), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(574), 1,
      sym_comment,
  [17483] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(697), 1,
      aux_sym__NEWLINE_token1,
    STATE(455), 1,
      sym__NEWLINE,
    STATE(575), 1,
      sym_comment,
  [17499] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      aux_sym_line_token1,
    STATE(108), 1,
      sym_line,
    STATE(576), 1,
      sym_comment,
  [17515] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1375), 1,
      anon_sym_COLON,
    ACTIONS(1377), 1,
      anon_sym_POUND,
    STATE(577), 1,
      sym_comment,
  [17531] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1163), 1,
      anon_sym_COLON,
    ACTIONS(1165), 1,
      anon_sym_POUND,
    STATE(578), 1,
      sym_comment,
  [17547] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(579), 1,
      sym_comment,
    ACTIONS(615), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [17561] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(580), 1,
      sym_comment,
    ACTIONS(1221), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [17575] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1339), 1,
      aux_sym__NEWLINE_token1,
    STATE(157), 1,
      sym__NEWLINE,
    STATE(581), 1,
      sym_comment,
  [17591] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_line_token1,
    STATE(150), 1,
      sym_line,
    STATE(582), 1,
      sym_comment,
  [17607] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(583), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_endref,
      aux_sym_line_token1,
  [17621] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(584), 1,
      sym_comment,
    ACTIONS(767), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [17635] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(585), 1,
      sym_comment,
    ACTIONS(1379), 2,
      ts_builtin_sym_end,
      aux_sym__NEWLINE_token1,
  [17649] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(586), 1,
      sym_comment,
    ACTIONS(1221), 2,
      anon_sym_endref,
      aux_sym_line_token1,
  [17663] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      aux_sym_line_token1,
    STATE(119), 1,
      sym_line,
    STATE(587), 1,
      sym_comment,
  [17679] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1355), 1,
      aux_sym_line_token1,
    STATE(220), 1,
      sym_line,
    STATE(588), 1,
      sym_comment,
  [17695] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      aux_sym_line_token1,
    STATE(123), 1,
      sym_line,
    STATE(589), 1,
      sym_comment,
  [17711] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(590), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_endref,
      aux_sym_line_token1,
  [17725] = 5,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1353), 1,
      aux_sym_line_token1,
    STATE(86), 1,
      sym_line,
    STATE(591), 1,
      sym_comment,
  [17741] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(592), 1,
      sym_comment,
    ACTIONS(647), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [17755] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1381), 1,
      anon_sym_DASH,
    ACTIONS(1383), 1,
      anon_sym_DASH_DASH,
    STATE(593), 1,
      sym_comment,
  [17771] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1385), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1387), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(594), 1,
      sym_comment,
  [17787] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1167), 1,
      anon_sym_COLON,
    STATE(595), 1,
      sym_comment,
  [17800] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1389), 1,
      aux_sym_sequence_diagram_token1,
    STATE(596), 1,
      sym_comment,
  [17813] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(778), 1,
      aux_sym__NEWLINE_token1,
    STATE(597), 1,
      sym_comment,
  [17826] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1391), 1,
      aux_sym_sequence_diagram_token1,
    STATE(598), 1,
      sym_comment,
  [17839] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1393), 1,
      anon_sym_COLON,
    STATE(599), 1,
      sym_comment,
  [17852] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1395), 1,
      ts_builtin_sym_end,
    STATE(600), 1,
      sym_comment,
  [17865] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1397), 1,
      anon_sym_EQ_EQ,
    STATE(601), 1,
      sym_comment,
  [17878] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1399), 1,
      sym_color,
    STATE(602), 1,
      sym_comment,
  [17891] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    STATE(603), 1,
      sym_comment,
  [17904] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1401), 1,
      aux_sym_custom_label_token1,
    STATE(604), 1,
      sym_comment,
  [17917] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1403), 1,
      aux_sym_sequence_diagram_token1,
    STATE(605), 1,
      sym_comment,
  [17930] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1405), 1,
      aux_sym_custom_label_token1,
    STATE(606), 1,
      sym_comment,
  [17943] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1407), 1,
      aux_sym_attr_alias_token1,
    STATE(607), 1,
      sym_comment,
  [17956] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1409), 1,
      aux_sym_escape_char_token1,
    STATE(608), 1,
      sym_comment,
  [17969] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1411), 1,
      aux_sym_attribute_token2,
    STATE(609), 1,
      sym_comment,
  [17982] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1413), 1,
      ts_builtin_sym_end,
    STATE(610), 1,
      sym_comment,
  [17995] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1415), 1,
      anon_sym_RBRACK,
    STATE(611), 1,
      sym_comment,
  [18008] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1417), 1,
      anon_sym_over,
    STATE(612), 1,
      sym_comment,
  [18021] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1419), 1,
      aux_sym_separator_token1,
    STATE(613), 1,
      sym_comment,
  [18034] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1142), 1,
      anon_sym_COLON,
    STATE(614), 1,
      sym_comment,
  [18047] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1421), 1,
      sym_color,
    STATE(615), 1,
      sym_comment,
  [18060] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1423), 1,
      aux_sym_attribute_token2,
    STATE(616), 1,
      sym_comment,
  [18073] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1425), 1,
      aux_sym__NEWLINE_token1,
    STATE(617), 1,
      sym_comment,
  [18086] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1148), 1,
      anon_sym_COLON,
    STATE(618), 1,
      sym_comment,
  [18099] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1427), 1,
      anon_sym_COLON,
    STATE(619), 1,
      sym_comment,
  [18112] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1429), 1,
      anon_sym_COLON,
    STATE(620), 1,
      sym_comment,
  [18125] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1431), 1,
      aux_sym_attribute_token3,
    STATE(621), 1,
      sym_comment,
  [18138] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1433), 1,
      aux_sym_sequence_diagram_token1,
    STATE(622), 1,
      sym_comment,
  [18151] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1435), 1,
      sym_color,
    STATE(623), 1,
      sym_comment,
  [18164] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1437), 1,
      aux_sym_attr_alias_token1,
    STATE(624), 1,
      sym_comment,
  [18177] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1439), 1,
      anon_sym_EQ_EQ,
    STATE(625), 1,
      sym_comment,
  [18190] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1441), 1,
      anon_sym_COLON,
    STATE(626), 1,
      sym_comment,
  [18203] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1443), 1,
      aux_sym_attribute_token3,
    STATE(627), 1,
      sym_comment,
  [18216] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1445), 1,
      aux_sym_attribute_token2,
    STATE(628), 1,
      sym_comment,
  [18229] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1447), 1,
      aux_sym__NEWLINE_token1,
    STATE(629), 1,
      sym_comment,
  [18242] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1449), 1,
      aux_sym_escape_char_token1,
    STATE(630), 1,
      sym_comment,
  [18255] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1451), 1,
      sym_color,
    STATE(631), 1,
      sym_comment,
  [18268] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(901), 1,
      aux_sym__NEWLINE_token1,
    STATE(632), 1,
      sym_comment,
  [18281] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(357), 1,
      aux_sym_attribute_token2,
    STATE(633), 1,
      sym_comment,
  [18294] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1453), 1,
      anon_sym_EQ_EQ,
    STATE(634), 1,
      sym_comment,
  [18307] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1455), 1,
      aux_sym_attr_alias_token1,
    STATE(635), 1,
      sym_comment,
  [18320] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1457), 1,
      sym_color,
    STATE(636), 1,
      sym_comment,
  [18333] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1459), 1,
      anon_sym_RBRACK,
    STATE(637), 1,
      sym_comment,
  [18346] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1461), 1,
      sym_color,
    STATE(638), 1,
      sym_comment,
  [18359] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1463), 1,
      ts_builtin_sym_end,
    STATE(639), 1,
      sym_comment,
  [18372] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(361), 1,
      aux_sym_attribute_token2,
    STATE(640), 1,
      sym_comment,
  [18385] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1171), 1,
      anon_sym_COLON,
    STATE(641), 1,
      sym_comment,
  [18398] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1465), 1,
      anon_sym_COLON,
    STATE(642), 1,
      sym_comment,
  [18411] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1467), 1,
      anon_sym_COLON,
    STATE(643), 1,
      sym_comment,
  [18424] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1469), 1,
      aux_sym_separator_token1,
    STATE(644), 1,
      sym_comment,
  [18437] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1471), 1,
      aux_sym__NEWLINE_token1,
    STATE(645), 1,
      sym_comment,
  [18450] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1473), 1,
      sym_color,
    STATE(646), 1,
      sym_comment,
  [18463] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1475), 1,
      aux_sym_comment_token2,
    STATE(647), 1,
      sym_comment,
  [18476] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1477), 1,
      sym_color,
    STATE(648), 1,
      sym_comment,
  [18489] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1479), 1,
      anon_sym_RBRACK,
    STATE(649), 1,
      sym_comment,
  [18502] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1481), 1,
      aux_sym_sequence_diagram_token1,
    STATE(650), 1,
      sym_comment,
  [18515] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1483), 1,
      aux_sym_attr_alias_token1,
    STATE(651), 1,
      sym_comment,
  [18528] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1485), 1,
      sym_color,
    STATE(652), 1,
      sym_comment,
  [18541] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1487), 1,
      sym_color,
    STATE(653), 1,
      sym_comment,
  [18554] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1489), 1,
      sym_color,
    STATE(654), 1,
      sym_comment,
  [18567] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1491), 1,
      sym_color,
    STATE(655), 1,
      sym_comment,
  [18580] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1493), 1,
      sym_color,
    STATE(656), 1,
      sym_comment,
  [18593] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1495), 1,
      sym_color,
    STATE(657), 1,
      sym_comment,
  [18606] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1497), 1,
      aux_sym_separator_token1,
    STATE(658), 1,
      sym_comment,
  [18619] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1499), 1,
      anon_sym_RBRACK,
    STATE(659), 1,
      sym_comment,
  [18632] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1501), 1,
      aux_sym_attribute_token3,
    STATE(660), 1,
      sym_comment,
  [18645] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1503), 1,
      aux_sym_sequence_diagram_token1,
    STATE(661), 1,
      sym_comment,
  [18658] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(846), 1,
      aux_sym__NEWLINE_token1,
    STATE(662), 1,
      sym_comment,
  [18671] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1505), 1,
      anon_sym_RBRACK,
    STATE(663), 1,
      sym_comment,
  [18684] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(953), 1,
      anon_sym_COLON,
    STATE(664), 1,
      sym_comment,
  [18697] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1507), 1,
      aux_sym_attr_alias_token1,
    STATE(665), 1,
      sym_comment,
  [18710] = 4,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1509), 1,
      aux_sym_comment_token1,
    STATE(666), 1,
      sym_comment,
  [18723] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1511), 1,
      ts_builtin_sym_end,
    STATE(667), 1,
      sym_comment,
  [18736] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1513), 1,
      sym_color,
    STATE(668), 1,
      sym_comment,
  [18749] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1515), 1,
      sym_color,
    STATE(669), 1,
      sym_comment,
  [18762] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1517), 1,
      sym_color,
    STATE(670), 1,
      sym_comment,
  [18775] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1519), 1,
      sym_color,
    STATE(671), 1,
      sym_comment,
  [18788] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1521), 1,
      anon_sym_over,
    STATE(672), 1,
      sym_comment,
  [18801] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1523), 1,
      anon_sym_over,
    STATE(673), 1,
      sym_comment,
  [18814] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1525), 1,
      anon_sym_SLASH,
    STATE(674), 1,
      sym_comment,
  [18827] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1527), 1,
      aux_sym_attr_alias_token1,
    STATE(675), 1,
      sym_comment,
  [18840] = 1,
    ACTIONS(1529), 1,
      ts_builtin_sym_end,
  [18844] = 1,
    ACTIONS(1531), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 392,
  [SMALL_STATE(7)] = 490,
  [SMALL_STATE(8)] = 588,
  [SMALL_STATE(9)] = 681,
  [SMALL_STATE(10)] = 772,
  [SMALL_STATE(11)] = 865,
  [SMALL_STATE(12)] = 957,
  [SMALL_STATE(13)] = 1049,
  [SMALL_STATE(14)] = 1139,
  [SMALL_STATE(15)] = 1231,
  [SMALL_STATE(16)] = 1323,
  [SMALL_STATE(17)] = 1415,
  [SMALL_STATE(18)] = 1507,
  [SMALL_STATE(19)] = 1599,
  [SMALL_STATE(20)] = 1691,
  [SMALL_STATE(21)] = 1783,
  [SMALL_STATE(22)] = 1875,
  [SMALL_STATE(23)] = 1967,
  [SMALL_STATE(24)] = 2059,
  [SMALL_STATE(25)] = 2151,
  [SMALL_STATE(26)] = 2243,
  [SMALL_STATE(27)] = 2333,
  [SMALL_STATE(28)] = 2393,
  [SMALL_STATE(29)] = 2452,
  [SMALL_STATE(30)] = 2511,
  [SMALL_STATE(31)] = 2563,
  [SMALL_STATE(32)] = 2617,
  [SMALL_STATE(33)] = 2671,
  [SMALL_STATE(34)] = 2725,
  [SMALL_STATE(35)] = 2778,
  [SMALL_STATE(36)] = 2829,
  [SMALL_STATE(37)] = 2882,
  [SMALL_STATE(38)] = 2935,
  [SMALL_STATE(39)] = 2988,
  [SMALL_STATE(40)] = 3039,
  [SMALL_STATE(41)] = 3092,
  [SMALL_STATE(42)] = 3145,
  [SMALL_STATE(43)] = 3187,
  [SMALL_STATE(44)] = 3229,
  [SMALL_STATE(45)] = 3271,
  [SMALL_STATE(46)] = 3312,
  [SMALL_STATE(47)] = 3353,
  [SMALL_STATE(48)] = 3394,
  [SMALL_STATE(49)] = 3435,
  [SMALL_STATE(50)] = 3476,
  [SMALL_STATE(51)] = 3517,
  [SMALL_STATE(52)] = 3558,
  [SMALL_STATE(53)] = 3599,
  [SMALL_STATE(54)] = 3646,
  [SMALL_STATE(55)] = 3687,
  [SMALL_STATE(56)] = 3728,
  [SMALL_STATE(57)] = 3769,
  [SMALL_STATE(58)] = 3810,
  [SMALL_STATE(59)] = 3850,
  [SMALL_STATE(60)] = 3896,
  [SMALL_STATE(61)] = 3936,
  [SMALL_STATE(62)] = 3976,
  [SMALL_STATE(63)] = 4016,
  [SMALL_STATE(64)] = 4056,
  [SMALL_STATE(65)] = 4096,
  [SMALL_STATE(66)] = 4136,
  [SMALL_STATE(67)] = 4176,
  [SMALL_STATE(68)] = 4222,
  [SMALL_STATE(69)] = 4262,
  [SMALL_STATE(70)] = 4302,
  [SMALL_STATE(71)] = 4342,
  [SMALL_STATE(72)] = 4382,
  [SMALL_STATE(73)] = 4422,
  [SMALL_STATE(74)] = 4466,
  [SMALL_STATE(75)] = 4506,
  [SMALL_STATE(76)] = 4546,
  [SMALL_STATE(77)] = 4587,
  [SMALL_STATE(78)] = 4630,
  [SMALL_STATE(79)] = 4669,
  [SMALL_STATE(80)] = 4708,
  [SMALL_STATE(81)] = 4747,
  [SMALL_STATE(82)] = 4786,
  [SMALL_STATE(83)] = 4825,
  [SMALL_STATE(84)] = 4864,
  [SMALL_STATE(85)] = 4903,
  [SMALL_STATE(86)] = 4941,
  [SMALL_STATE(87)] = 4979,
  [SMALL_STATE(88)] = 5017,
  [SMALL_STATE(89)] = 5055,
  [SMALL_STATE(90)] = 5093,
  [SMALL_STATE(91)] = 5131,
  [SMALL_STATE(92)] = 5169,
  [SMALL_STATE(93)] = 5207,
  [SMALL_STATE(94)] = 5245,
  [SMALL_STATE(95)] = 5283,
  [SMALL_STATE(96)] = 5321,
  [SMALL_STATE(97)] = 5359,
  [SMALL_STATE(98)] = 5397,
  [SMALL_STATE(99)] = 5435,
  [SMALL_STATE(100)] = 5473,
  [SMALL_STATE(101)] = 5511,
  [SMALL_STATE(102)] = 5551,
  [SMALL_STATE(103)] = 5589,
  [SMALL_STATE(104)] = 5627,
  [SMALL_STATE(105)] = 5665,
  [SMALL_STATE(106)] = 5703,
  [SMALL_STATE(107)] = 5741,
  [SMALL_STATE(108)] = 5779,
  [SMALL_STATE(109)] = 5817,
  [SMALL_STATE(110)] = 5855,
  [SMALL_STATE(111)] = 5893,
  [SMALL_STATE(112)] = 5931,
  [SMALL_STATE(113)] = 5969,
  [SMALL_STATE(114)] = 6007,
  [SMALL_STATE(115)] = 6045,
  [SMALL_STATE(116)] = 6083,
  [SMALL_STATE(117)] = 6121,
  [SMALL_STATE(118)] = 6159,
  [SMALL_STATE(119)] = 6197,
  [SMALL_STATE(120)] = 6235,
  [SMALL_STATE(121)] = 6273,
  [SMALL_STATE(122)] = 6311,
  [SMALL_STATE(123)] = 6349,
  [SMALL_STATE(124)] = 6387,
  [SMALL_STATE(125)] = 6427,
  [SMALL_STATE(126)] = 6465,
  [SMALL_STATE(127)] = 6503,
  [SMALL_STATE(128)] = 6541,
  [SMALL_STATE(129)] = 6579,
  [SMALL_STATE(130)] = 6617,
  [SMALL_STATE(131)] = 6655,
  [SMALL_STATE(132)] = 6693,
  [SMALL_STATE(133)] = 6731,
  [SMALL_STATE(134)] = 6769,
  [SMALL_STATE(135)] = 6807,
  [SMALL_STATE(136)] = 6845,
  [SMALL_STATE(137)] = 6883,
  [SMALL_STATE(138)] = 6920,
  [SMALL_STATE(139)] = 6957,
  [SMALL_STATE(140)] = 6994,
  [SMALL_STATE(141)] = 7031,
  [SMALL_STATE(142)] = 7068,
  [SMALL_STATE(143)] = 7105,
  [SMALL_STATE(144)] = 7142,
  [SMALL_STATE(145)] = 7179,
  [SMALL_STATE(146)] = 7216,
  [SMALL_STATE(147)] = 7253,
  [SMALL_STATE(148)] = 7290,
  [SMALL_STATE(149)] = 7327,
  [SMALL_STATE(150)] = 7364,
  [SMALL_STATE(151)] = 7401,
  [SMALL_STATE(152)] = 7438,
  [SMALL_STATE(153)] = 7475,
  [SMALL_STATE(154)] = 7512,
  [SMALL_STATE(155)] = 7549,
  [SMALL_STATE(156)] = 7586,
  [SMALL_STATE(157)] = 7623,
  [SMALL_STATE(158)] = 7660,
  [SMALL_STATE(159)] = 7697,
  [SMALL_STATE(160)] = 7734,
  [SMALL_STATE(161)] = 7771,
  [SMALL_STATE(162)] = 7808,
  [SMALL_STATE(163)] = 7845,
  [SMALL_STATE(164)] = 7882,
  [SMALL_STATE(165)] = 7919,
  [SMALL_STATE(166)] = 7956,
  [SMALL_STATE(167)] = 7993,
  [SMALL_STATE(168)] = 8030,
  [SMALL_STATE(169)] = 8067,
  [SMALL_STATE(170)] = 8104,
  [SMALL_STATE(171)] = 8141,
  [SMALL_STATE(172)] = 8178,
  [SMALL_STATE(173)] = 8215,
  [SMALL_STATE(174)] = 8252,
  [SMALL_STATE(175)] = 8289,
  [SMALL_STATE(176)] = 8326,
  [SMALL_STATE(177)] = 8363,
  [SMALL_STATE(178)] = 8400,
  [SMALL_STATE(179)] = 8437,
  [SMALL_STATE(180)] = 8474,
  [SMALL_STATE(181)] = 8511,
  [SMALL_STATE(182)] = 8548,
  [SMALL_STATE(183)] = 8585,
  [SMALL_STATE(184)] = 8622,
  [SMALL_STATE(185)] = 8659,
  [SMALL_STATE(186)] = 8696,
  [SMALL_STATE(187)] = 8733,
  [SMALL_STATE(188)] = 8770,
  [SMALL_STATE(189)] = 8807,
  [SMALL_STATE(190)] = 8844,
  [SMALL_STATE(191)] = 8881,
  [SMALL_STATE(192)] = 8918,
  [SMALL_STATE(193)] = 8955,
  [SMALL_STATE(194)] = 8992,
  [SMALL_STATE(195)] = 9029,
  [SMALL_STATE(196)] = 9066,
  [SMALL_STATE(197)] = 9103,
  [SMALL_STATE(198)] = 9140,
  [SMALL_STATE(199)] = 9177,
  [SMALL_STATE(200)] = 9214,
  [SMALL_STATE(201)] = 9251,
  [SMALL_STATE(202)] = 9288,
  [SMALL_STATE(203)] = 9325,
  [SMALL_STATE(204)] = 9362,
  [SMALL_STATE(205)] = 9399,
  [SMALL_STATE(206)] = 9436,
  [SMALL_STATE(207)] = 9473,
  [SMALL_STATE(208)] = 9510,
  [SMALL_STATE(209)] = 9547,
  [SMALL_STATE(210)] = 9584,
  [SMALL_STATE(211)] = 9621,
  [SMALL_STATE(212)] = 9658,
  [SMALL_STATE(213)] = 9695,
  [SMALL_STATE(214)] = 9732,
  [SMALL_STATE(215)] = 9769,
  [SMALL_STATE(216)] = 9806,
  [SMALL_STATE(217)] = 9843,
  [SMALL_STATE(218)] = 9880,
  [SMALL_STATE(219)] = 9917,
  [SMALL_STATE(220)] = 9954,
  [SMALL_STATE(221)] = 9991,
  [SMALL_STATE(222)] = 10028,
  [SMALL_STATE(223)] = 10065,
  [SMALL_STATE(224)] = 10102,
  [SMALL_STATE(225)] = 10139,
  [SMALL_STATE(226)] = 10176,
  [SMALL_STATE(227)] = 10213,
  [SMALL_STATE(228)] = 10250,
  [SMALL_STATE(229)] = 10287,
  [SMALL_STATE(230)] = 10324,
  [SMALL_STATE(231)] = 10361,
  [SMALL_STATE(232)] = 10389,
  [SMALL_STATE(233)] = 10417,
  [SMALL_STATE(234)] = 10445,
  [SMALL_STATE(235)] = 10481,
  [SMALL_STATE(236)] = 10517,
  [SMALL_STATE(237)] = 10553,
  [SMALL_STATE(238)] = 10580,
  [SMALL_STATE(239)] = 10607,
  [SMALL_STATE(240)] = 10634,
  [SMALL_STATE(241)] = 10661,
  [SMALL_STATE(242)] = 10685,
  [SMALL_STATE(243)] = 10709,
  [SMALL_STATE(244)] = 10733,
  [SMALL_STATE(245)] = 10757,
  [SMALL_STATE(246)] = 10786,
  [SMALL_STATE(247)] = 10809,
  [SMALL_STATE(248)] = 10832,
  [SMALL_STATE(249)] = 10861,
  [SMALL_STATE(250)] = 10890,
  [SMALL_STATE(251)] = 10916,
  [SMALL_STATE(252)] = 10936,
  [SMALL_STATE(253)] = 10964,
  [SMALL_STATE(254)] = 10992,
  [SMALL_STATE(255)] = 11018,
  [SMALL_STATE(256)] = 11044,
  [SMALL_STATE(257)] = 11064,
  [SMALL_STATE(258)] = 11090,
  [SMALL_STATE(259)] = 11118,
  [SMALL_STATE(260)] = 11144,
  [SMALL_STATE(261)] = 11164,
  [SMALL_STATE(262)] = 11190,
  [SMALL_STATE(263)] = 11214,
  [SMALL_STATE(264)] = 11240,
  [SMALL_STATE(265)] = 11266,
  [SMALL_STATE(266)] = 11292,
  [SMALL_STATE(267)] = 11318,
  [SMALL_STATE(268)] = 11344,
  [SMALL_STATE(269)] = 11370,
  [SMALL_STATE(270)] = 11396,
  [SMALL_STATE(271)] = 11422,
  [SMALL_STATE(272)] = 11448,
  [SMALL_STATE(273)] = 11474,
  [SMALL_STATE(274)] = 11500,
  [SMALL_STATE(275)] = 11526,
  [SMALL_STATE(276)] = 11554,
  [SMALL_STATE(277)] = 11582,
  [SMALL_STATE(278)] = 11610,
  [SMALL_STATE(279)] = 11638,
  [SMALL_STATE(280)] = 11666,
  [SMALL_STATE(281)] = 11694,
  [SMALL_STATE(282)] = 11722,
  [SMALL_STATE(283)] = 11750,
  [SMALL_STATE(284)] = 11778,
  [SMALL_STATE(285)] = 11799,
  [SMALL_STATE(286)] = 11820,
  [SMALL_STATE(287)] = 11845,
  [SMALL_STATE(288)] = 11870,
  [SMALL_STATE(289)] = 11891,
  [SMALL_STATE(290)] = 11916,
  [SMALL_STATE(291)] = 11937,
  [SMALL_STATE(292)] = 11958,
  [SMALL_STATE(293)] = 11983,
  [SMALL_STATE(294)] = 12008,
  [SMALL_STATE(295)] = 12033,
  [SMALL_STATE(296)] = 12058,
  [SMALL_STATE(297)] = 12083,
  [SMALL_STATE(298)] = 12108,
  [SMALL_STATE(299)] = 12133,
  [SMALL_STATE(300)] = 12158,
  [SMALL_STATE(301)] = 12183,
  [SMALL_STATE(302)] = 12204,
  [SMALL_STATE(303)] = 12227,
  [SMALL_STATE(304)] = 12252,
  [SMALL_STATE(305)] = 12277,
  [SMALL_STATE(306)] = 12298,
  [SMALL_STATE(307)] = 12323,
  [SMALL_STATE(308)] = 12348,
  [SMALL_STATE(309)] = 12373,
  [SMALL_STATE(310)] = 12398,
  [SMALL_STATE(311)] = 12423,
  [SMALL_STATE(312)] = 12444,
  [SMALL_STATE(313)] = 12469,
  [SMALL_STATE(314)] = 12494,
  [SMALL_STATE(315)] = 12519,
  [SMALL_STATE(316)] = 12544,
  [SMALL_STATE(317)] = 12569,
  [SMALL_STATE(318)] = 12594,
  [SMALL_STATE(319)] = 12619,
  [SMALL_STATE(320)] = 12644,
  [SMALL_STATE(321)] = 12669,
  [SMALL_STATE(322)] = 12694,
  [SMALL_STATE(323)] = 12719,
  [SMALL_STATE(324)] = 12744,
  [SMALL_STATE(325)] = 12765,
  [SMALL_STATE(326)] = 12790,
  [SMALL_STATE(327)] = 12815,
  [SMALL_STATE(328)] = 12833,
  [SMALL_STATE(329)] = 12853,
  [SMALL_STATE(330)] = 12869,
  [SMALL_STATE(331)] = 12889,
  [SMALL_STATE(332)] = 12909,
  [SMALL_STATE(333)] = 12927,
  [SMALL_STATE(334)] = 12947,
  [SMALL_STATE(335)] = 12967,
  [SMALL_STATE(336)] = 12989,
  [SMALL_STATE(337)] = 13011,
  [SMALL_STATE(338)] = 13031,
  [SMALL_STATE(339)] = 13051,
  [SMALL_STATE(340)] = 13071,
  [SMALL_STATE(341)] = 13093,
  [SMALL_STATE(342)] = 13111,
  [SMALL_STATE(343)] = 13131,
  [SMALL_STATE(344)] = 13149,
  [SMALL_STATE(345)] = 13169,
  [SMALL_STATE(346)] = 13189,
  [SMALL_STATE(347)] = 13211,
  [SMALL_STATE(348)] = 13233,
  [SMALL_STATE(349)] = 13255,
  [SMALL_STATE(350)] = 13277,
  [SMALL_STATE(351)] = 13297,
  [SMALL_STATE(352)] = 13317,
  [SMALL_STATE(353)] = 13335,
  [SMALL_STATE(354)] = 13357,
  [SMALL_STATE(355)] = 13379,
  [SMALL_STATE(356)] = 13401,
  [SMALL_STATE(357)] = 13423,
  [SMALL_STATE(358)] = 13445,
  [SMALL_STATE(359)] = 13465,
  [SMALL_STATE(360)] = 13485,
  [SMALL_STATE(361)] = 13503,
  [SMALL_STATE(362)] = 13525,
  [SMALL_STATE(363)] = 13547,
  [SMALL_STATE(364)] = 13569,
  [SMALL_STATE(365)] = 13589,
  [SMALL_STATE(366)] = 13611,
  [SMALL_STATE(367)] = 13627,
  [SMALL_STATE(368)] = 13649,
  [SMALL_STATE(369)] = 13671,
  [SMALL_STATE(370)] = 13693,
  [SMALL_STATE(371)] = 13711,
  [SMALL_STATE(372)] = 13729,
  [SMALL_STATE(373)] = 13747,
  [SMALL_STATE(374)] = 13765,
  [SMALL_STATE(375)] = 13787,
  [SMALL_STATE(376)] = 13805,
  [SMALL_STATE(377)] = 13823,
  [SMALL_STATE(378)] = 13845,
  [SMALL_STATE(379)] = 13863,
  [SMALL_STATE(380)] = 13881,
  [SMALL_STATE(381)] = 13903,
  [SMALL_STATE(382)] = 13925,
  [SMALL_STATE(383)] = 13947,
  [SMALL_STATE(384)] = 13969,
  [SMALL_STATE(385)] = 13991,
  [SMALL_STATE(386)] = 14013,
  [SMALL_STATE(387)] = 14035,
  [SMALL_STATE(388)] = 14057,
  [SMALL_STATE(389)] = 14079,
  [SMALL_STATE(390)] = 14097,
  [SMALL_STATE(391)] = 14119,
  [SMALL_STATE(392)] = 14141,
  [SMALL_STATE(393)] = 14163,
  [SMALL_STATE(394)] = 14185,
  [SMALL_STATE(395)] = 14207,
  [SMALL_STATE(396)] = 14225,
  [SMALL_STATE(397)] = 14247,
  [SMALL_STATE(398)] = 14269,
  [SMALL_STATE(399)] = 14287,
  [SMALL_STATE(400)] = 14309,
  [SMALL_STATE(401)] = 14331,
  [SMALL_STATE(402)] = 14353,
  [SMALL_STATE(403)] = 14375,
  [SMALL_STATE(404)] = 14397,
  [SMALL_STATE(405)] = 14419,
  [SMALL_STATE(406)] = 14441,
  [SMALL_STATE(407)] = 14459,
  [SMALL_STATE(408)] = 14481,
  [SMALL_STATE(409)] = 14503,
  [SMALL_STATE(410)] = 14525,
  [SMALL_STATE(411)] = 14543,
  [SMALL_STATE(412)] = 14565,
  [SMALL_STATE(413)] = 14587,
  [SMALL_STATE(414)] = 14609,
  [SMALL_STATE(415)] = 14631,
  [SMALL_STATE(416)] = 14651,
  [SMALL_STATE(417)] = 14671,
  [SMALL_STATE(418)] = 14691,
  [SMALL_STATE(419)] = 14711,
  [SMALL_STATE(420)] = 14731,
  [SMALL_STATE(421)] = 14753,
  [SMALL_STATE(422)] = 14775,
  [SMALL_STATE(423)] = 14793,
  [SMALL_STATE(424)] = 14815,
  [SMALL_STATE(425)] = 14837,
  [SMALL_STATE(426)] = 14859,
  [SMALL_STATE(427)] = 14879,
  [SMALL_STATE(428)] = 14901,
  [SMALL_STATE(429)] = 14923,
  [SMALL_STATE(430)] = 14945,
  [SMALL_STATE(431)] = 14967,
  [SMALL_STATE(432)] = 14987,
  [SMALL_STATE(433)] = 15009,
  [SMALL_STATE(434)] = 15031,
  [SMALL_STATE(435)] = 15053,
  [SMALL_STATE(436)] = 15075,
  [SMALL_STATE(437)] = 15093,
  [SMALL_STATE(438)] = 15111,
  [SMALL_STATE(439)] = 15129,
  [SMALL_STATE(440)] = 15151,
  [SMALL_STATE(441)] = 15169,
  [SMALL_STATE(442)] = 15191,
  [SMALL_STATE(443)] = 15213,
  [SMALL_STATE(444)] = 15235,
  [SMALL_STATE(445)] = 15257,
  [SMALL_STATE(446)] = 15275,
  [SMALL_STATE(447)] = 15293,
  [SMALL_STATE(448)] = 15315,
  [SMALL_STATE(449)] = 15333,
  [SMALL_STATE(450)] = 15355,
  [SMALL_STATE(451)] = 15377,
  [SMALL_STATE(452)] = 15399,
  [SMALL_STATE(453)] = 15421,
  [SMALL_STATE(454)] = 15440,
  [SMALL_STATE(455)] = 15455,
  [SMALL_STATE(456)] = 15470,
  [SMALL_STATE(457)] = 15489,
  [SMALL_STATE(458)] = 15508,
  [SMALL_STATE(459)] = 15523,
  [SMALL_STATE(460)] = 15542,
  [SMALL_STATE(461)] = 15561,
  [SMALL_STATE(462)] = 15580,
  [SMALL_STATE(463)] = 15595,
  [SMALL_STATE(464)] = 15610,
  [SMALL_STATE(465)] = 15629,
  [SMALL_STATE(466)] = 15648,
  [SMALL_STATE(467)] = 15663,
  [SMALL_STATE(468)] = 15682,
  [SMALL_STATE(469)] = 15701,
  [SMALL_STATE(470)] = 15720,
  [SMALL_STATE(471)] = 15739,
  [SMALL_STATE(472)] = 15754,
  [SMALL_STATE(473)] = 15771,
  [SMALL_STATE(474)] = 15790,
  [SMALL_STATE(475)] = 15809,
  [SMALL_STATE(476)] = 15828,
  [SMALL_STATE(477)] = 15847,
  [SMALL_STATE(478)] = 15866,
  [SMALL_STATE(479)] = 15885,
  [SMALL_STATE(480)] = 15904,
  [SMALL_STATE(481)] = 15923,
  [SMALL_STATE(482)] = 15942,
  [SMALL_STATE(483)] = 15961,
  [SMALL_STATE(484)] = 15980,
  [SMALL_STATE(485)] = 15999,
  [SMALL_STATE(486)] = 16018,
  [SMALL_STATE(487)] = 16037,
  [SMALL_STATE(488)] = 16056,
  [SMALL_STATE(489)] = 16071,
  [SMALL_STATE(490)] = 16090,
  [SMALL_STATE(491)] = 16105,
  [SMALL_STATE(492)] = 16124,
  [SMALL_STATE(493)] = 16139,
  [SMALL_STATE(494)] = 16154,
  [SMALL_STATE(495)] = 16173,
  [SMALL_STATE(496)] = 16192,
  [SMALL_STATE(497)] = 16211,
  [SMALL_STATE(498)] = 16226,
  [SMALL_STATE(499)] = 16241,
  [SMALL_STATE(500)] = 16260,
  [SMALL_STATE(501)] = 16277,
  [SMALL_STATE(502)] = 16292,
  [SMALL_STATE(503)] = 16311,
  [SMALL_STATE(504)] = 16330,
  [SMALL_STATE(505)] = 16347,
  [SMALL_STATE(506)] = 16364,
  [SMALL_STATE(507)] = 16381,
  [SMALL_STATE(508)] = 16400,
  [SMALL_STATE(509)] = 16419,
  [SMALL_STATE(510)] = 16434,
  [SMALL_STATE(511)] = 16449,
  [SMALL_STATE(512)] = 16464,
  [SMALL_STATE(513)] = 16483,
  [SMALL_STATE(514)] = 16502,
  [SMALL_STATE(515)] = 16517,
  [SMALL_STATE(516)] = 16536,
  [SMALL_STATE(517)] = 16551,
  [SMALL_STATE(518)] = 16566,
  [SMALL_STATE(519)] = 16585,
  [SMALL_STATE(520)] = 16604,
  [SMALL_STATE(521)] = 16623,
  [SMALL_STATE(522)] = 16638,
  [SMALL_STATE(523)] = 16657,
  [SMALL_STATE(524)] = 16676,
  [SMALL_STATE(525)] = 16695,
  [SMALL_STATE(526)] = 16710,
  [SMALL_STATE(527)] = 16727,
  [SMALL_STATE(528)] = 16743,
  [SMALL_STATE(529)] = 16759,
  [SMALL_STATE(530)] = 16775,
  [SMALL_STATE(531)] = 16789,
  [SMALL_STATE(532)] = 16805,
  [SMALL_STATE(533)] = 16819,
  [SMALL_STATE(534)] = 16835,
  [SMALL_STATE(535)] = 16851,
  [SMALL_STATE(536)] = 16867,
  [SMALL_STATE(537)] = 16881,
  [SMALL_STATE(538)] = 16897,
  [SMALL_STATE(539)] = 16913,
  [SMALL_STATE(540)] = 16929,
  [SMALL_STATE(541)] = 16945,
  [SMALL_STATE(542)] = 16961,
  [SMALL_STATE(543)] = 16977,
  [SMALL_STATE(544)] = 16993,
  [SMALL_STATE(545)] = 17009,
  [SMALL_STATE(546)] = 17025,
  [SMALL_STATE(547)] = 17041,
  [SMALL_STATE(548)] = 17057,
  [SMALL_STATE(549)] = 17073,
  [SMALL_STATE(550)] = 17089,
  [SMALL_STATE(551)] = 17105,
  [SMALL_STATE(552)] = 17121,
  [SMALL_STATE(553)] = 17135,
  [SMALL_STATE(554)] = 17151,
  [SMALL_STATE(555)] = 17167,
  [SMALL_STATE(556)] = 17183,
  [SMALL_STATE(557)] = 17199,
  [SMALL_STATE(558)] = 17213,
  [SMALL_STATE(559)] = 17229,
  [SMALL_STATE(560)] = 17243,
  [SMALL_STATE(561)] = 17259,
  [SMALL_STATE(562)] = 17275,
  [SMALL_STATE(563)] = 17291,
  [SMALL_STATE(564)] = 17307,
  [SMALL_STATE(565)] = 17323,
  [SMALL_STATE(566)] = 17339,
  [SMALL_STATE(567)] = 17355,
  [SMALL_STATE(568)] = 17371,
  [SMALL_STATE(569)] = 17387,
  [SMALL_STATE(570)] = 17403,
  [SMALL_STATE(571)] = 17419,
  [SMALL_STATE(572)] = 17435,
  [SMALL_STATE(573)] = 17451,
  [SMALL_STATE(574)] = 17467,
  [SMALL_STATE(575)] = 17483,
  [SMALL_STATE(576)] = 17499,
  [SMALL_STATE(577)] = 17515,
  [SMALL_STATE(578)] = 17531,
  [SMALL_STATE(579)] = 17547,
  [SMALL_STATE(580)] = 17561,
  [SMALL_STATE(581)] = 17575,
  [SMALL_STATE(582)] = 17591,
  [SMALL_STATE(583)] = 17607,
  [SMALL_STATE(584)] = 17621,
  [SMALL_STATE(585)] = 17635,
  [SMALL_STATE(586)] = 17649,
  [SMALL_STATE(587)] = 17663,
  [SMALL_STATE(588)] = 17679,
  [SMALL_STATE(589)] = 17695,
  [SMALL_STATE(590)] = 17711,
  [SMALL_STATE(591)] = 17725,
  [SMALL_STATE(592)] = 17741,
  [SMALL_STATE(593)] = 17755,
  [SMALL_STATE(594)] = 17771,
  [SMALL_STATE(595)] = 17787,
  [SMALL_STATE(596)] = 17800,
  [SMALL_STATE(597)] = 17813,
  [SMALL_STATE(598)] = 17826,
  [SMALL_STATE(599)] = 17839,
  [SMALL_STATE(600)] = 17852,
  [SMALL_STATE(601)] = 17865,
  [SMALL_STATE(602)] = 17878,
  [SMALL_STATE(603)] = 17891,
  [SMALL_STATE(604)] = 17904,
  [SMALL_STATE(605)] = 17917,
  [SMALL_STATE(606)] = 17930,
  [SMALL_STATE(607)] = 17943,
  [SMALL_STATE(608)] = 17956,
  [SMALL_STATE(609)] = 17969,
  [SMALL_STATE(610)] = 17982,
  [SMALL_STATE(611)] = 17995,
  [SMALL_STATE(612)] = 18008,
  [SMALL_STATE(613)] = 18021,
  [SMALL_STATE(614)] = 18034,
  [SMALL_STATE(615)] = 18047,
  [SMALL_STATE(616)] = 18060,
  [SMALL_STATE(617)] = 18073,
  [SMALL_STATE(618)] = 18086,
  [SMALL_STATE(619)] = 18099,
  [SMALL_STATE(620)] = 18112,
  [SMALL_STATE(621)] = 18125,
  [SMALL_STATE(622)] = 18138,
  [SMALL_STATE(623)] = 18151,
  [SMALL_STATE(624)] = 18164,
  [SMALL_STATE(625)] = 18177,
  [SMALL_STATE(626)] = 18190,
  [SMALL_STATE(627)] = 18203,
  [SMALL_STATE(628)] = 18216,
  [SMALL_STATE(629)] = 18229,
  [SMALL_STATE(630)] = 18242,
  [SMALL_STATE(631)] = 18255,
  [SMALL_STATE(632)] = 18268,
  [SMALL_STATE(633)] = 18281,
  [SMALL_STATE(634)] = 18294,
  [SMALL_STATE(635)] = 18307,
  [SMALL_STATE(636)] = 18320,
  [SMALL_STATE(637)] = 18333,
  [SMALL_STATE(638)] = 18346,
  [SMALL_STATE(639)] = 18359,
  [SMALL_STATE(640)] = 18372,
  [SMALL_STATE(641)] = 18385,
  [SMALL_STATE(642)] = 18398,
  [SMALL_STATE(643)] = 18411,
  [SMALL_STATE(644)] = 18424,
  [SMALL_STATE(645)] = 18437,
  [SMALL_STATE(646)] = 18450,
  [SMALL_STATE(647)] = 18463,
  [SMALL_STATE(648)] = 18476,
  [SMALL_STATE(649)] = 18489,
  [SMALL_STATE(650)] = 18502,
  [SMALL_STATE(651)] = 18515,
  [SMALL_STATE(652)] = 18528,
  [SMALL_STATE(653)] = 18541,
  [SMALL_STATE(654)] = 18554,
  [SMALL_STATE(655)] = 18567,
  [SMALL_STATE(656)] = 18580,
  [SMALL_STATE(657)] = 18593,
  [SMALL_STATE(658)] = 18606,
  [SMALL_STATE(659)] = 18619,
  [SMALL_STATE(660)] = 18632,
  [SMALL_STATE(661)] = 18645,
  [SMALL_STATE(662)] = 18658,
  [SMALL_STATE(663)] = 18671,
  [SMALL_STATE(664)] = 18684,
  [SMALL_STATE(665)] = 18697,
  [SMALL_STATE(666)] = 18710,
  [SMALL_STATE(667)] = 18723,
  [SMALL_STATE(668)] = 18736,
  [SMALL_STATE(669)] = 18749,
  [SMALL_STATE(670)] = 18762,
  [SMALL_STATE(671)] = 18775,
  [SMALL_STATE(672)] = 18788,
  [SMALL_STATE(673)] = 18801,
  [SMALL_STATE(674)] = 18814,
  [SMALL_STATE(675)] = 18827,
  [SMALL_STATE(676)] = 18840,
  [SMALL_STATE(677)] = 18844,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(672),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(644),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(562),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(563),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(594),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(612),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(613),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(569),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(673),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(658),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(572),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(574),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(652),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(624),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(621),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 1),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(623),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(635),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(627),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(636),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(675),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(660),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 15),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 15),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 4, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 9, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 9, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_line, 5, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_line, 5, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_block, 5, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_block, 5, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 5, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 5, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 5, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 5, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 5, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 5, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 5, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 5, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 12),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 12),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_block, 6, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_block, 6, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_line, 6, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_line, 6, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__NEWLINE, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 6, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 6, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 6, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 6, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 6, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 6, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_block, 7, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_block, 7, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 7, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 7, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 7, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 7, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 7, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 7, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 7, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 7, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 8, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 8, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_separator, 4, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator, 4, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 4, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 4, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 4, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 4, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 4, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 4, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_label, 3, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_label, 3, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 6, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 6, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(608),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ref_line_repeat1, 2, 0, 0),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ref_line_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ref_line_repeat1, 2, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [836] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [839] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(630),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ref_block_repeat1, 2, 0, 0), SHIFT_REPEAT(575),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ref_block_repeat1, 2, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ref_line_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [928] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ref_block_repeat1, 2, 0, 0), SHIFT_REPEAT(548),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ref_block_repeat1, 2, 0, 0), SHIFT_REPEAT(541),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1019] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1033] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [1036] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [1158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 4),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 5),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ref_block_repeat1, 1, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 5),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 6),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 7),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 6),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 7),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 8),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 8),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 9),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 10),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 9),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 10),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 11),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 11),
  [1271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [1306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(585),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 2),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 3),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 2),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 4),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 3),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
