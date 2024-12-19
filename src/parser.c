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
#define STATE_COUNT 616
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 145
#define ALIAS_COUNT 15
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  aux_sym__NEWLINE_token1 = 1,
  anon_sym_ATstartuml = 2,
  anon_sym_ATenduml = 3,
  aux_sym_label_token1 = 4,
  anon_sym_LBRACK = 5,
  aux_sym_custom_label_token1 = 6,
  anon_sym_RBRACK = 7,
  anon_sym_alt = 8,
  anon_sym_else = 9,
  anon_sym_end = 10,
  aux_sym_line_token1 = 11,
  anon_sym_SLASH = 12,
  anon_sym_note = 13,
  anon_sym_rnote = 14,
  anon_sym_hnote = 15,
  anon_sym_left = 16,
  anon_sym_right = 17,
  anon_sym_across = 18,
  anon_sym_over = 19,
  anon_sym_COMMA = 20,
  anon_sym_POUND = 21,
  anon_sym_COLON = 22,
  anon_sym_endnote = 23,
  anon_sym_endrnote = 24,
  anon_sym_endhnote = 25,
  anon_sym_loop = 26,
  anon_sym_group = 27,
  anon_sym_skinparam = 28,
  anon_sym_sequenceMessageAlign = 29,
  anon_sym_center = 30,
  anon_sym_responseMessageBelowArrow = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  anon_sym_autonumber = 34,
  anon_sym_inc = 35,
  anon_sym_resume = 36,
  aux_sym_attribute_token1 = 37,
  aux_sym_attribute_token2 = 38,
  aux_sym_attribute_token3 = 39,
  anon_sym_autonumberstop = 40,
  anon_sym_participant = 41,
  anon_sym_actor = 42,
  anon_sym_boundary = 43,
  anon_sym_control = 44,
  anon_sym_entity = 45,
  anon_sym_database = 46,
  anon_sym_collections = 47,
  anon_sym_queue = 48,
  aux_sym_multiline_token1 = 49,
  anon_sym_as = 50,
  aux_sym_attr_alias_token1 = 51,
  anon_sym_order = 52,
  anon_sym_DQUOTE = 53,
  aux_sym_string_token1 = 54,
  anon_sym_BSLASH_DQUOTE = 55,
  anon_sym_BSLASH = 56,
  aux_sym_escape_char_token1 = 57,
  aux_sym_sequence_diagram_token1 = 58,
  anon_sym_DASH = 59,
  anon_sym_GT = 60,
  anon_sym_o = 61,
  anon_sym_x = 62,
  anon_sym_ox = 63,
  anon_sym_GT_GT = 64,
  anon_sym_BSLASH_BSLASH = 65,
  anon_sym_SLASH_SLASH = 66,
  anon_sym_DASH_DASH = 67,
  anon_sym_LBRACK_POUND = 68,
  anon_sym_LT = 69,
  anon_sym_xo = 70,
  anon_sym_LT_LT = 71,
  anon_sym_ATstartjson = 72,
  anon_sym_AT = 73,
  aux_sym_json_token1 = 74,
  anon_sym_ATendjson = 75,
  anon_sym_ATstartyaml = 76,
  anon_sym_ATendyaml = 77,
  anon_sym_ATstartebnf = 78,
  anon_sym_ATendebnf = 79,
  anon_sym_ATstartregex = 80,
  anon_sym_ATendregex = 81,
  anon_sym_ATstartditaa = 82,
  anon_sym_ATendditaa = 83,
  anon_sym_ATstartgantt = 84,
  anon_sym_ATendgantt = 85,
  anon_sym_ATstartchronology = 86,
  anon_sym_ATendchronology = 87,
  anon_sym_ATstartmindmap = 88,
  anon_sym_ATendmindmap = 89,
  anon_sym_ATstartwbs = 90,
  anon_sym_ATendwbs = 91,
  anon_sym_ATstartchen = 92,
  anon_sym_ATendchen = 93,
  anon_sym_SQUOTE = 94,
  aux_sym_comment_token1 = 95,
  anon_sym_SLASH_SQUOTE = 96,
  aux_sym_comment_token2 = 97,
  sym_color = 98,
  sym_diagram = 99,
  sym__NEWLINE = 100,
  sym_uml = 101,
  sym_expression = 102,
  sym_label = 103,
  sym_custom_label = 104,
  sym_alt_block = 105,
  sym_line = 106,
  sym_line_note = 107,
  sym_block_note = 108,
  sym_block_rnote = 109,
  sym_block_hnote = 110,
  sym_loop_block = 111,
  sym_group_block = 112,
  sym_skinparam = 113,
  sym_boolean_literal = 114,
  sym_attribute = 115,
  sym_multiline = 116,
  sym_attr_alias = 117,
  sym_attr_order = 118,
  sym_string = 119,
  sym_escape_char = 120,
  sym_participant_name = 121,
  sym_sequence_diagram = 122,
  sym_connector = 123,
  sym_json = 124,
  sym_yaml = 125,
  sym_ebnf = 126,
  sym_regex = 127,
  sym_ditaa = 128,
  sym_gantt = 129,
  sym_chronology = 130,
  sym_mindmap = 131,
  sym_wbs = 132,
  sym_chen = 133,
  sym_comment = 134,
  aux_sym_uml_repeat1 = 135,
  aux_sym_alt_block_repeat1 = 136,
  aux_sym_line_note_repeat1 = 137,
  aux_sym_block_note_repeat1 = 138,
  aux_sym_attribute_repeat1 = 139,
  aux_sym_attribute_repeat2 = 140,
  aux_sym_multiline_repeat1 = 141,
  aux_sym_string_repeat1 = 142,
  aux_sym_json_repeat1 = 143,
  aux_sym_json_repeat2 = 144,
  alias_sym_chen_data = 145,
  alias_sym_chronology_data = 146,
  alias_sym_ditaa_data = 147,
  alias_sym_ebnf_data = 148,
  alias_sym_gantt_data = 149,
  alias_sym_json_data = 150,
  alias_sym_left = 151,
  alias_sym_mindmap_data = 152,
  alias_sym_name = 153,
  alias_sym_new_name = 154,
  alias_sym_regex_data = 155,
  alias_sym_right = 156,
  alias_sym_value = 157,
  alias_sym_wbs_data = 158,
  alias_sym_yaml_data = 159,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__NEWLINE_token1] = "_NEWLINE_token1",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
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
  [3] = 3,
  [4] = 3,
  [5] = 3,
  [6] = 2,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 18,
  [21] = 21,
  [22] = 14,
  [23] = 17,
  [24] = 17,
  [25] = 15,
  [26] = 18,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 30,
  [35] = 33,
  [36] = 32,
  [37] = 30,
  [38] = 31,
  [39] = 33,
  [40] = 31,
  [41] = 32,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 52,
  [53] = 42,
  [54] = 44,
  [55] = 55,
  [56] = 43,
  [57] = 42,
  [58] = 49,
  [59] = 48,
  [60] = 49,
  [61] = 52,
  [62] = 50,
  [63] = 63,
  [64] = 55,
  [65] = 55,
  [66] = 45,
  [67] = 44,
  [68] = 48,
  [69] = 47,
  [70] = 52,
  [71] = 43,
  [72] = 42,
  [73] = 45,
  [74] = 47,
  [75] = 50,
  [76] = 76,
  [77] = 55,
  [78] = 42,
  [79] = 43,
  [80] = 44,
  [81] = 42,
  [82] = 43,
  [83] = 44,
  [84] = 63,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 55,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 76,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 55,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 76,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 105,
  [132] = 117,
  [133] = 120,
  [134] = 121,
  [135] = 123,
  [136] = 126,
  [137] = 128,
  [138] = 86,
  [139] = 87,
  [140] = 119,
  [141] = 122,
  [142] = 85,
  [143] = 96,
  [144] = 97,
  [145] = 100,
  [146] = 99,
  [147] = 101,
  [148] = 85,
  [149] = 124,
  [150] = 125,
  [151] = 127,
  [152] = 102,
  [153] = 122,
  [154] = 98,
  [155] = 91,
  [156] = 92,
  [157] = 93,
  [158] = 94,
  [159] = 88,
  [160] = 89,
  [161] = 104,
  [162] = 130,
  [163] = 103,
  [164] = 117,
  [165] = 120,
  [166] = 121,
  [167] = 123,
  [168] = 126,
  [169] = 128,
  [170] = 86,
  [171] = 87,
  [172] = 106,
  [173] = 107,
  [174] = 109,
  [175] = 103,
  [176] = 97,
  [177] = 99,
  [178] = 101,
  [179] = 102,
  [180] = 110,
  [181] = 104,
  [182] = 130,
  [183] = 106,
  [184] = 107,
  [185] = 109,
  [186] = 110,
  [187] = 111,
  [188] = 112,
  [189] = 113,
  [190] = 114,
  [191] = 115,
  [192] = 116,
  [193] = 111,
  [194] = 112,
  [195] = 113,
  [196] = 114,
  [197] = 98,
  [198] = 115,
  [199] = 100,
  [200] = 116,
  [201] = 105,
  [202] = 91,
  [203] = 92,
  [204] = 93,
  [205] = 94,
  [206] = 129,
  [207] = 88,
  [208] = 89,
  [209] = 124,
  [210] = 127,
  [211] = 125,
  [212] = 96,
  [213] = 43,
  [214] = 44,
  [215] = 42,
  [216] = 216,
  [217] = 216,
  [218] = 216,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 227,
  [229] = 229,
  [230] = 227,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 232,
  [237] = 237,
  [238] = 233,
  [239] = 237,
  [240] = 240,
  [241] = 240,
  [242] = 242,
  [243] = 237,
  [244] = 244,
  [245] = 240,
  [246] = 246,
  [247] = 237,
  [248] = 240,
  [249] = 237,
  [250] = 240,
  [251] = 237,
  [252] = 240,
  [253] = 237,
  [254] = 240,
  [255] = 237,
  [256] = 240,
  [257] = 237,
  [258] = 240,
  [259] = 246,
  [260] = 234,
  [261] = 233,
  [262] = 246,
  [263] = 234,
  [264] = 232,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 266,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 267,
  [274] = 274,
  [275] = 270,
  [276] = 276,
  [277] = 268,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 280,
  [283] = 266,
  [284] = 284,
  [285] = 285,
  [286] = 272,
  [287] = 267,
  [288] = 274,
  [289] = 270,
  [290] = 276,
  [291] = 291,
  [292] = 268,
  [293] = 278,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 276,
  [298] = 280,
  [299] = 278,
  [300] = 300,
  [301] = 274,
  [302] = 272,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 295,
  [312] = 291,
  [313] = 313,
  [314] = 44,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
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
  [329] = 303,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 316,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 316,
  [345] = 345,
  [346] = 316,
  [347] = 316,
  [348] = 316,
  [349] = 316,
  [350] = 316,
  [351] = 316,
  [352] = 352,
  [353] = 353,
  [354] = 335,
  [355] = 343,
  [356] = 356,
  [357] = 322,
  [358] = 323,
  [359] = 359,
  [360] = 341,
  [361] = 342,
  [362] = 352,
  [363] = 353,
  [364] = 335,
  [365] = 343,
  [366] = 366,
  [367] = 356,
  [368] = 322,
  [369] = 323,
  [370] = 359,
  [371] = 43,
  [372] = 341,
  [373] = 342,
  [374] = 352,
  [375] = 316,
  [376] = 356,
  [377] = 377,
  [378] = 353,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 328,
  [383] = 330,
  [384] = 384,
  [385] = 377,
  [386] = 315,
  [387] = 42,
  [388] = 388,
  [389] = 324,
  [390] = 336,
  [391] = 391,
  [392] = 328,
  [393] = 330,
  [394] = 377,
  [395] = 315,
  [396] = 324,
  [397] = 336,
  [398] = 340,
  [399] = 345,
  [400] = 366,
  [401] = 327,
  [402] = 303,
  [403] = 331,
  [404] = 332,
  [405] = 359,
  [406] = 340,
  [407] = 345,
  [408] = 366,
  [409] = 327,
  [410] = 331,
  [411] = 332,
  [412] = 319,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 414,
  [417] = 417,
  [418] = 418,
  [419] = 414,
  [420] = 420,
  [421] = 414,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 414,
  [426] = 100,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
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
  [443] = 443,
  [444] = 338,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 432,
  [454] = 433,
  [455] = 455,
  [456] = 456,
  [457] = 436,
  [458] = 458,
  [459] = 459,
  [460] = 440,
  [461] = 414,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 98,
  [468] = 432,
  [469] = 433,
  [470] = 470,
  [471] = 471,
  [472] = 307,
  [473] = 473,
  [474] = 414,
  [475] = 475,
  [476] = 414,
  [477] = 477,
  [478] = 478,
  [479] = 440,
  [480] = 480,
  [481] = 414,
  [482] = 414,
  [483] = 483,
  [484] = 478,
  [485] = 478,
  [486] = 436,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 494,
  [497] = 492,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 98,
  [502] = 502,
  [503] = 503,
  [504] = 489,
  [505] = 100,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 502,
  [510] = 498,
  [511] = 500,
  [512] = 490,
  [513] = 488,
  [514] = 499,
  [515] = 489,
  [516] = 506,
  [517] = 507,
  [518] = 508,
  [519] = 502,
  [520] = 490,
  [521] = 488,
  [522] = 499,
  [523] = 523,
  [524] = 494,
  [525] = 500,
  [526] = 526,
  [527] = 506,
  [528] = 528,
  [529] = 499,
  [530] = 530,
  [531] = 507,
  [532] = 508,
  [533] = 492,
  [534] = 528,
  [535] = 528,
  [536] = 427,
  [537] = 537,
  [538] = 499,
  [539] = 498,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 545,
  [547] = 547,
  [548] = 548,
  [549] = 547,
  [550] = 550,
  [551] = 548,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 545,
  [563] = 559,
  [564] = 552,
  [565] = 557,
  [566] = 566,
  [567] = 567,
  [568] = 550,
  [569] = 560,
  [570] = 542,
  [571] = 571,
  [572] = 548,
  [573] = 553,
  [574] = 574,
  [575] = 556,
  [576] = 550,
  [577] = 577,
  [578] = 578,
  [579] = 567,
  [580] = 560,
  [581] = 581,
  [582] = 566,
  [583] = 556,
  [584] = 559,
  [585] = 547,
  [586] = 557,
  [587] = 566,
  [588] = 43,
  [589] = 589,
  [590] = 590,
  [591] = 42,
  [592] = 547,
  [593] = 577,
  [594] = 567,
  [595] = 590,
  [596] = 596,
  [597] = 561,
  [598] = 543,
  [599] = 543,
  [600] = 596,
  [601] = 547,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 547,
  [607] = 590,
  [608] = 596,
  [609] = 561,
  [610] = 542,
  [611] = 577,
  [612] = 612,
  [613] = 554,
  [614] = 614,
  [615] = 615,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(678);
      ADVANCE_MAP(
        '"', 860,
        '#', 729,
        '\'', 935,
        ',', 728,
        '-', 876,
        '/', 717,
        ':', 730,
        '<', 889,
        '>', 877,
        '@', 893,
        '[', 684,
        '\\', 867,
        ']', 688,
        'o', 878,
        'x', 880,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(746);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 679,
        '\r', 1,
        '"', 860,
        '#', 729,
        '\'', 935,
        ',', 728,
        '/', 35,
        ':', 730,
        'i', 176,
        'r', 113,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(871);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(870);
      if (lookahead != 0) ADVANCE(869);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(943);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(936);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(942);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(945);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 860,
        '#', 729,
        '\'', 935,
        '/', 716,
        '@', 117,
        '[', 684,
        'a', 772,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 807,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'o', 829,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 860,
        '#', 729,
        '\'', 935,
        '/', 716,
        '[', 684,
        'a', 772,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 795,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'o', 829,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 860,
        '#', 729,
        '\'', 935,
        '/', 716,
        '[', 684,
        'a', 772,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 801,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'o', 829,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 860,
        '\'', 935,
        '-', 875,
        '/', 717,
        ':', 730,
        '<', 889,
        '>', 877,
        '@', 237,
        '[', 684,
        '\\', 868,
        'a', 773,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 795,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(860);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '-') ADVANCE(875);
      if (lookahead == '/') ADVANCE(717);
      if (lookahead == '>') ADVANCE(877);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(868);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 860,
        '\'', 935,
        '/', 717,
        ':', 730,
        '>', 877,
        '@', 117,
        '[', 21,
        '\\', 868,
        'a', 773,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 807,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 860,
        '\'', 935,
        '/', 716,
        ':', 730,
        '@', 117,
        'a', 772,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 807,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 860,
        '\'', 935,
        '/', 716,
        ':', 730,
        '[', 684,
        'a', 773,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 801,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 860,
        '\'', 935,
        '/', 716,
        ':', 730,
        'a', 772,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 795,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 860,
        '\'', 935,
        '/', 716,
        ':', 730,
        'a', 772,
        'b', 812,
        'c', 811,
        'd', 765,
        'e', 801,
        'g', 834,
        'h', 808,
        'l', 818,
        'n', 817,
        'p', 763,
        'q', 851,
        'r', 809,
        's', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(860);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(879);
      if (lookahead == 'x') ADVANCE(882);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(860);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(746);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(860);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(866);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(862);
      if (lookahead != 0) ADVANCE(861);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '#', 729,
        '\'', 935,
        ',', 728,
        '-', 876,
        '/', 717,
        ':', 730,
        '<', 889,
        '\\', 868,
        'c', 114,
        'e', 153,
        'f', 57,
        'h', 193,
        'l', 105,
        'n', 202,
        'o', 878,
        'r', 109,
        's', 93,
        't', 218,
        'x', 881,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(888);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 935,
        '/', 35,
        'A', 476,
        'L', 269,
        'O', 473,
        'R', 364,
        'a', 69,
        'l', 46,
        'o', 260,
        'r', 140,
        'B', 365,
        'b', 365,
        'C', 270,
        'c', 270,
        'D', 271,
        'd', 271,
        'F', 446,
        'f', 446,
        'G', 288,
        'g', 288,
        'H', 535,
        'h', 535,
        'I', 515,
        'i', 515,
        'K', 430,
        'k', 430,
        'M', 272,
        'm', 272,
        'N', 273,
        'n', 273,
        'P', 274,
        'p', 274,
        'S', 275,
        's', 275,
        'T', 282,
        't', 282,
        'V', 450,
        'v', 450,
        'W', 428,
        'w', 428,
        'Y', 376,
        'y', 376,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(746);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(865);
      if (lookahead == ']') ADVANCE(688);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(759);
      if (lookahead != 0) ADVANCE(758);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(894);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(905);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(895);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(906);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(896);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(907);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(897);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(908);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(898);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(909);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(899);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(910);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(911);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(901);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(912);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(902);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(913);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(903);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(914);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(944);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(938);
      if (lookahead == '/') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(939);
      if (lookahead == '/') ADVANCE(873);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(874);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(937);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(946);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(220);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(118);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(506);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(111);
      END_STATE();
    case 48:
      if (lookahead == 'M') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(924);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(923);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(226);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        'c', 134,
        'd', 139,
        'e', 63,
        'g', 55,
        'j', 224,
        'm', 142,
        'r', 91,
        'w', 64,
        'y', 49,
      );
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(743);
      END_STATE();
    case 69:
      ADVANCE_MAP(
        'c', 222,
        'L', 447,
        'l', 447,
        'N', 623,
        'n', 623,
        'Q', 642,
        'q', 642,
        'Z', 649,
        'z', 649,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 72:
      ADVANCE_MAP(
        'c', 138,
        'd', 143,
        'e', 66,
        'g', 59,
        'j', 238,
        'm', 144,
        'r', 116,
        'u', 158,
        'w', 65,
        'y', 61,
      );
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(692);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(920);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(919);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(266);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 145:
      if (lookahead == 'j') ADVANCE(224);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(918);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(917);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(681);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(934);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(933);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(930);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(929);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 214:
      if (lookahead == 'q') ADVANCE(258);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(969);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(932);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(931);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(925);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(724);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(725);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 260:
      if (lookahead == 'v') ADVANCE(112);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 261:
      if (lookahead == 'w') ADVANCE(739);
      END_STATE();
    case 262:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 263:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 264:
      if (lookahead == 'x') ADVANCE(922);
      END_STATE();
    case 265:
      if (lookahead == 'x') ADVANCE(921);
      END_STATE();
    case 266:
      if (lookahead == 'y') ADVANCE(928);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(927);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 269:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 270:
      ADVANCE_MAP(
        'A', 347,
        'a', 347,
        'H', 297,
        'h', 297,
        'O', 575,
        'o', 575,
        'R', 449,
        'r', 449,
        'Y', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 271:
      ADVANCE_MAP(
        'A', 576,
        'a', 576,
        'E', 367,
        'e', 367,
        'I', 504,
        'i', 504,
        'O', 359,
        'o', 359,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 272:
      ADVANCE_MAP(
        'A', 425,
        'a', 425,
        'E', 353,
        'e', 353,
        'I', 351,
        'i', 351,
        'O', 335,
        'o', 335,
      );
      END_STATE();
    case 273:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 274:
      ADVANCE_MAP(
        'A', 486,
        'a', 486,
        'E', 308,
        'e', 308,
        'I', 516,
        'i', 516,
        'L', 639,
        'l', 639,
        'O', 658,
        'o', 658,
        'U', 582,
        'u', 582,
      );
      END_STATE();
    case 275:
      ADVANCE_MAP(
        'A', 350,
        'a', 350,
        'E', 278,
        'e', 278,
        'I', 386,
        'i', 386,
        'K', 664,
        'k', 664,
        'L', 289,
        'l', 289,
        'N', 540,
        'n', 540,
        'P', 600,
        'p', 600,
        'T', 402,
        't', 402,
      );
      END_STATE();
    case 276:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(952);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(959);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(952);
      END_STATE();
    case 281:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 282:
      ADVANCE_MAP(
        'A', 512,
        'a', 512,
        'E', 293,
        'e', 293,
        'H', 461,
        'h', 461,
        'O', 508,
        'o', 508,
        'R', 300,
        'r', 300,
        'U', 598,
        'u', 598,
      );
      END_STATE();
    case 283:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 284:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 285:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 286:
      ADVANCE_MAP(
        'A', 572,
        'a', 572,
        'B', 480,
        'b', 480,
        'O', 604,
        'o', 604,
        'P', 638,
        'p', 638,
        'S', 400,
        's', 400,
        'T', 641,
        't', 641,
        'V', 466,
        'v', 466,
      );
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 288:
      ADVANCE_MAP(
        'A', 451,
        'a', 451,
        'H', 537,
        'h', 537,
        'O', 477,
        'o', 477,
        'R', 283,
        'r', 283,
      );
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 290:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 292:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 295:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 296:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 298:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 299:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 300:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 301:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 302:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 303:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 304:
      ADVANCE_MAP(
        'A', 493,
        'a', 493,
        'E', 309,
        'e', 309,
        'K', 664,
        'k', 664,
        'L', 317,
        'l', 317,
        'T', 402,
        't', 402,
      );
      END_STATE();
    case 305:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 306:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(536);
      END_STATE();
    case 307:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 308:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 309:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 310:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 311:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 313:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 314:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 315:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 316:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 317:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 318:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 319:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 320:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 321:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(952);
      END_STATE();
    case 322:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(952);
      END_STATE();
    case 323:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(480);
      END_STATE();
    case 324:
      ADVANCE_MAP(
        'B', 480,
        'b', 480,
        'C', 555,
        'c', 555,
        'G', 562,
        'g', 562,
        'P', 441,
        'p', 441,
        'S', 304,
        's', 304,
        'Y', 410,
        'y', 410,
      );
      END_STATE();
    case 325:
      ADVANCE_MAP(
        'B', 480,
        'b', 480,
        'C', 665,
        'c', 665,
        'G', 559,
        'g', 559,
        'K', 430,
        'k', 430,
        'M', 316,
        'm', 316,
        'O', 489,
        'o', 489,
        'R', 385,
        'r', 385,
        'S', 305,
        's', 305,
        'T', 641,
        't', 641,
        'V', 450,
        'v', 450,
      );
      END_STATE();
    case 326:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(480);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 327:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(579);
      END_STATE();
    case 328:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(599);
      END_STATE();
    case 329:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(557);
      END_STATE();
    case 330:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(491);
      END_STATE();
    case 331:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 332:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(469);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 333:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 334:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 335:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 336:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 337:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 338:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 339:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 340:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 341:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 342:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 343:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 344:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 345:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(597);
      END_STATE();
    case 346:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(952);
      END_STATE();
    case 347:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(969);
      END_STATE();
    case 348:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(957);
      END_STATE();
    case 349:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 350:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(361);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(507);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 351:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(522);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(624);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      END_STATE();
    case 352:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 353:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 354:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 355:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 356:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 357:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 358:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(666);
      END_STATE();
    case 359:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 360:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 361:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(496);
      END_STATE();
    case 362:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 363:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 365:
      ADVANCE_MAP(
        'E', 443,
        'e', 443,
        'I', 605,
        'i', 605,
        'L', 277,
        'l', 277,
        'R', 539,
        'r', 539,
        'U', 583,
        'u', 583,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(969);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(958);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(952);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
      END_STATE();
    case 387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 391:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 393:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(952);
      END_STATE();
    case 394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 396:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 397:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 398:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 399:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 400:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(600);
      END_STATE();
    case 401:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 402:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 403:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 404:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 405:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 406:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 407:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 408:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 409:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 410:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 411:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(952);
      END_STATE();
    case 412:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      END_STATE();
    case 413:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(538);
      END_STATE();
    case 415:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(498);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      END_STATE();
    case 416:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(558);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(641);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(466);
      END_STATE();
    case 417:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(433);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 418:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 419:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(366);
      END_STATE();
    case 420:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(394);
      END_STATE();
    case 421:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      END_STATE();
    case 422:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(426);
      END_STATE();
    case 423:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(435);
      END_STATE();
    case 424:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(395);
      END_STATE();
    case 425:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(395);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 426:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(595);
      END_STATE();
    case 427:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      END_STATE();
    case 428:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(392);
      END_STATE();
    case 429:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(952);
      END_STATE();
    case 430:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 431:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(564);
      END_STATE();
    case 432:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(614);
      END_STATE();
    case 433:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(619);
      END_STATE();
    case 434:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(454);
      END_STATE();
    case 435:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(618);
      END_STATE();
    case 436:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(460);
      END_STATE();
    case 437:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(464);
      END_STATE();
    case 438:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(452);
      END_STATE();
    case 439:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(388);
      END_STATE();
    case 440:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(403);
      END_STATE();
    case 441:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 442:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(952);
      END_STATE();
    case 443:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(969);
      END_STATE();
    case 444:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 446:
      ADVANCE_MAP(
        'I', 586,
        'i', 586,
        'L', 548,
        'l', 548,
        'O', 587,
        'o', 587,
        'U', 334,
        'u', 334,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 448:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 449:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 452:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 455:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 457:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 458:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 461:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 462:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 463:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 464:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 465:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 466:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 467:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(541);
      END_STATE();
    case 468:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(664);
      END_STATE();
    case 469:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(952);
      END_STATE();
    case 470:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 471:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(442);
      END_STATE();
    case 472:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(366);
      END_STATE();
    case 473:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 474:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(952);
      END_STATE();
    case 475:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 476:
      ADVANCE_MAP(
        'L', 447,
        'l', 447,
        'N', 623,
        'n', 623,
        'Q', 642,
        'q', 642,
        'Z', 649,
        'z', 649,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 477:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 478:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(667);
      END_STATE();
    case 479:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 480:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 481:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 482:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(661);
      END_STATE();
    case 483:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 484:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      END_STATE();
    case 485:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 486:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 487:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 488:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 489:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(463);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 490:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 491:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 492:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 493:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 494:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 495:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 496:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 497:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 498:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 499:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(511);
      END_STATE();
    case 500:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 501:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 502:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(952);
      END_STATE();
    case 503:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 504:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 505:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(610);
      END_STATE();
    case 506:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 507:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 508:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 509:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 510:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 511:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(556);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(952);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(965);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(550);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(952);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(584);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 563:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(952);
      END_STATE();
    case 564:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(637);
      END_STATE();
    case 565:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 566:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(441);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(468);
      END_STATE();
    case 567:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 568:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(488);
      END_STATE();
    case 569:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(638);
      END_STATE();
    case 570:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(646);
      END_STATE();
    case 571:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(645);
      END_STATE();
    case 572:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(647);
      END_STATE();
    case 573:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(648);
      END_STATE();
    case 574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(969);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(954);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(570);
      END_STATE();
    case 606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      END_STATE();
    case 608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(621);
      END_STATE();
    case 609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      END_STATE();
    case 610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      END_STATE();
    case 611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      END_STATE();
    case 612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(631);
      END_STATE();
    case 613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(445);
      END_STATE();
    case 616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(952);
      END_STATE();
    case 618:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(953);
      END_STATE();
    case 621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      END_STATE();
    case 622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      END_STATE();
    case 623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      END_STATE();
    case 624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 625:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      END_STATE();
    case 626:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 627:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      END_STATE();
    case 628:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 630:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      END_STATE();
    case 631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      END_STATE();
    case 632:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(488);
      END_STATE();
    case 633:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      END_STATE();
    case 634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      END_STATE();
    case 635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      END_STATE();
    case 636:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(952);
      END_STATE();
    case 637:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 638:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 639:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(502);
      END_STATE();
    case 640:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 641:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      END_STATE();
    case 642:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 643:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(613);
      END_STATE();
    case 644:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(611);
      END_STATE();
    case 645:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(554);
      END_STATE();
    case 646:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 647:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 648:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 649:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 650:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(280);
      END_STATE();
    case 651:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(390);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(530);
      END_STATE();
    case 652:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(372);
      END_STATE();
    case 653:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 654:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(404);
      END_STATE();
    case 655:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(952);
      END_STATE();
    case 656:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(958);
      END_STATE();
    case 657:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(512);
      END_STATE();
    case 658:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      END_STATE();
    case 659:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(394);
      END_STATE();
    case 660:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(553);
      END_STATE();
    case 661:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(437);
      END_STATE();
    case 662:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(438);
      END_STATE();
    case 663:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(952);
      END_STATE();
    case 664:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 665:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 666:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 667:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(660);
      END_STATE();
    case 668:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(589);
      END_STATE();
    case 669:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 670:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(357);
      END_STATE();
    case 671:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(410);
      END_STATE();
    case 672:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 673:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 674:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(969);
      END_STATE();
    case 675:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(952);
      END_STATE();
    case 676:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 677:
      if (eof) ADVANCE(678);
      ADVANCE_MAP(
        '\n', 679,
        '\r', 1,
        '"', 860,
        '#', 729,
        '\'', 935,
        ',', 728,
        '/', 35,
        ':', 730,
        'i', 176,
        'r', 113,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__NEWLINE_token1);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\'') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(941);
      if (lookahead == '/') ADVANCE(686);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(940);
      if (lookahead == '/') ADVANCE(697);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(715);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(940);
      if (lookahead == '/') ADVANCE(697);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(715);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(940);
      if (lookahead == '/') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(715);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'h') ADVANCE(706);
      if (lookahead == 'n') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(944);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(944);
      if (lookahead == '/') ADVANCE(886);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_rnote);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_rnote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_hnote);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_hnote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_across);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_endnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_endrnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_endhnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(865);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(758);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(944);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(848);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 's') ADVANCE(761);
      if (lookahead == 'u') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(848);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'u') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(693);
      if (lookahead == 't') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(836);
      if (lookahead == 'n') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(798);
      if (lookahead == 'n') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(866);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(944);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(864);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(885);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(885);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(869);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(944);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(939);
      if (lookahead == '/') ADVANCE(873);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(874);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(874);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(874);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(887);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(884);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(890);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(891);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(894);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(905);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(895);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(906);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(896);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(907);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(897);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(908);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(898);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(909);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(899);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(910);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(911);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(901);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(912);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(902);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(913);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(935);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '@') ADVANCE(903);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(914);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(944);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(683);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(874);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(943);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(936);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(683);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(874);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(595);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(966);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(450);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(410);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(967);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(675);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(966);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
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
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 12},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 11},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 677},
  [228] = {.lex_state = 677},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 677},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 677},
  [233] = {.lex_state = 677},
  [234] = {.lex_state = 677},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 677},
  [237] = {.lex_state = 19},
  [238] = {.lex_state = 677},
  [239] = {.lex_state = 19},
  [240] = {.lex_state = 19},
  [241] = {.lex_state = 19},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 677},
  [247] = {.lex_state = 19},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 19},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 19},
  [252] = {.lex_state = 19},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 19},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 19},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 19},
  [259] = {.lex_state = 677},
  [260] = {.lex_state = 677},
  [261] = {.lex_state = 677},
  [262] = {.lex_state = 677},
  [263] = {.lex_state = 677},
  [264] = {.lex_state = 677},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 694},
  [267] = {.lex_state = 694},
  [268] = {.lex_state = 694},
  [269] = {.lex_state = 694},
  [270] = {.lex_state = 24},
  [271] = {.lex_state = 17},
  [272] = {.lex_state = 24},
  [273] = {.lex_state = 694},
  [274] = {.lex_state = 694},
  [275] = {.lex_state = 24},
  [276] = {.lex_state = 694},
  [277] = {.lex_state = 694},
  [278] = {.lex_state = 694},
  [279] = {.lex_state = 24},
  [280] = {.lex_state = 677},
  [281] = {.lex_state = 17},
  [282] = {.lex_state = 677},
  [283] = {.lex_state = 694},
  [284] = {.lex_state = 17},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 24},
  [287] = {.lex_state = 694},
  [288] = {.lex_state = 694},
  [289] = {.lex_state = 24},
  [290] = {.lex_state = 694},
  [291] = {.lex_state = 677},
  [292] = {.lex_state = 694},
  [293] = {.lex_state = 694},
  [294] = {.lex_state = 17},
  [295] = {.lex_state = 694},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 694},
  [298] = {.lex_state = 677},
  [299] = {.lex_state = 694},
  [300] = {.lex_state = 17},
  [301] = {.lex_state = 694},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 677},
  [305] = {.lex_state = 25},
  [306] = {.lex_state = 26},
  [307] = {.lex_state = 19},
  [308] = {.lex_state = 27},
  [309] = {.lex_state = 28},
  [310] = {.lex_state = 29},
  [311] = {.lex_state = 695},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 677},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 27},
  [317] = {.lex_state = 31},
  [318] = {.lex_state = 32},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 33},
  [321] = {.lex_state = 34},
  [322] = {.lex_state = 695},
  [323] = {.lex_state = 695},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 31},
  [326] = {.lex_state = 32},
  [327] = {.lex_state = 22},
  [328] = {.lex_state = 677},
  [329] = {.lex_state = 11},
  [330] = {.lex_state = 677},
  [331] = {.lex_state = 11},
  [332] = {.lex_state = 11},
  [333] = {.lex_state = 33},
  [334] = {.lex_state = 34},
  [335] = {.lex_state = 18},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 19},
  [338] = {.lex_state = 677},
  [339] = {.lex_state = 28},
  [340] = {.lex_state = 22},
  [341] = {.lex_state = 695},
  [342] = {.lex_state = 695},
  [343] = {.lex_state = 11},
  [344] = {.lex_state = 29},
  [345] = {.lex_state = 22},
  [346] = {.lex_state = 30},
  [347] = {.lex_state = 31},
  [348] = {.lex_state = 25},
  [349] = {.lex_state = 32},
  [350] = {.lex_state = 33},
  [351] = {.lex_state = 34},
  [352] = {.lex_state = 695},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 18},
  [355] = {.lex_state = 11},
  [356] = {.lex_state = 695},
  [357] = {.lex_state = 695},
  [358] = {.lex_state = 695},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 695},
  [361] = {.lex_state = 695},
  [362] = {.lex_state = 695},
  [363] = {.lex_state = 11},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 11},
  [366] = {.lex_state = 22},
  [367] = {.lex_state = 695},
  [368] = {.lex_state = 695},
  [369] = {.lex_state = 695},
  [370] = {.lex_state = 11},
  [371] = {.lex_state = 677},
  [372] = {.lex_state = 695},
  [373] = {.lex_state = 695},
  [374] = {.lex_state = 695},
  [375] = {.lex_state = 26},
  [376] = {.lex_state = 695},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 11},
  [379] = {.lex_state = 25},
  [380] = {.lex_state = 26},
  [381] = {.lex_state = 27},
  [382] = {.lex_state = 677},
  [383] = {.lex_state = 677},
  [384] = {.lex_state = 28},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 677},
  [388] = {.lex_state = 29},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 30},
  [392] = {.lex_state = 677},
  [393] = {.lex_state = 677},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 22},
  [399] = {.lex_state = 22},
  [400] = {.lex_state = 22},
  [401] = {.lex_state = 22},
  [402] = {.lex_state = 11},
  [403] = {.lex_state = 11},
  [404] = {.lex_state = 11},
  [405] = {.lex_state = 11},
  [406] = {.lex_state = 22},
  [407] = {.lex_state = 22},
  [408] = {.lex_state = 22},
  [409] = {.lex_state = 22},
  [410] = {.lex_state = 11},
  [411] = {.lex_state = 11},
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 677},
  [414] = {.lex_state = 30},
  [415] = {.lex_state = 677},
  [416] = {.lex_state = 31},
  [417] = {.lex_state = 677},
  [418] = {.lex_state = 677},
  [419] = {.lex_state = 32},
  [420] = {.lex_state = 677},
  [421] = {.lex_state = 33},
  [422] = {.lex_state = 677},
  [423] = {.lex_state = 677},
  [424] = {.lex_state = 677},
  [425] = {.lex_state = 34},
  [426] = {.lex_state = 694},
  [427] = {.lex_state = 694},
  [428] = {.lex_state = 677},
  [429] = {.lex_state = 677},
  [430] = {.lex_state = 677},
  [431] = {.lex_state = 677},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 20},
  [434] = {.lex_state = 677},
  [435] = {.lex_state = 677},
  [436] = {.lex_state = 20},
  [437] = {.lex_state = 677},
  [438] = {.lex_state = 677},
  [439] = {.lex_state = 677},
  [440] = {.lex_state = 20},
  [441] = {.lex_state = 677},
  [442] = {.lex_state = 677},
  [443] = {.lex_state = 677},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 677},
  [446] = {.lex_state = 677},
  [447] = {.lex_state = 677},
  [448] = {.lex_state = 677},
  [449] = {.lex_state = 677},
  [450] = {.lex_state = 677},
  [451] = {.lex_state = 677},
  [452] = {.lex_state = 677},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 20},
  [455] = {.lex_state = 677},
  [456] = {.lex_state = 677},
  [457] = {.lex_state = 20},
  [458] = {.lex_state = 677},
  [459] = {.lex_state = 24},
  [460] = {.lex_state = 20},
  [461] = {.lex_state = 26},
  [462] = {.lex_state = 677},
  [463] = {.lex_state = 677},
  [464] = {.lex_state = 677},
  [465] = {.lex_state = 677},
  [466] = {.lex_state = 677},
  [467] = {.lex_state = 694},
  [468] = {.lex_state = 20},
  [469] = {.lex_state = 20},
  [470] = {.lex_state = 677},
  [471] = {.lex_state = 677},
  [472] = {.lex_state = 24},
  [473] = {.lex_state = 677},
  [474] = {.lex_state = 25},
  [475] = {.lex_state = 677},
  [476] = {.lex_state = 28},
  [477] = {.lex_state = 677},
  [478] = {.lex_state = 20},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 27},
  [482] = {.lex_state = 29},
  [483] = {.lex_state = 677},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 20},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 11},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 696},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 11},
  [492] = {.lex_state = 696},
  [493] = {.lex_state = 11},
  [494] = {.lex_state = 696},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 696},
  [497] = {.lex_state = 696},
  [498] = {.lex_state = 696},
  [499] = {.lex_state = 677},
  [500] = {.lex_state = 696},
  [501] = {.lex_state = 695},
  [502] = {.lex_state = 20},
  [503] = {.lex_state = 11},
  [504] = {.lex_state = 696},
  [505] = {.lex_state = 695},
  [506] = {.lex_state = 36},
  [507] = {.lex_state = 36},
  [508] = {.lex_state = 36},
  [509] = {.lex_state = 20},
  [510] = {.lex_state = 696},
  [511] = {.lex_state = 696},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 677},
  [515] = {.lex_state = 696},
  [516] = {.lex_state = 36},
  [517] = {.lex_state = 36},
  [518] = {.lex_state = 36},
  [519] = {.lex_state = 20},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 677},
  [523] = {.lex_state = 11},
  [524] = {.lex_state = 696},
  [525] = {.lex_state = 696},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 36},
  [528] = {.lex_state = 696},
  [529] = {.lex_state = 677},
  [530] = {.lex_state = 36},
  [531] = {.lex_state = 36},
  [532] = {.lex_state = 36},
  [533] = {.lex_state = 696},
  [534] = {.lex_state = 696},
  [535] = {.lex_state = 696},
  [536] = {.lex_state = 695},
  [537] = {.lex_state = 11},
  [538] = {.lex_state = 677},
  [539] = {.lex_state = 696},
  [540] = {.lex_state = 677},
  [541] = {.lex_state = 11},
  [542] = {.lex_state = 22},
  [543] = {.lex_state = 677},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 22},
  [546] = {.lex_state = 22},
  [547] = {.lex_state = 11},
  [548] = {.lex_state = 20},
  [549] = {.lex_state = 11},
  [550] = {.lex_state = 37},
  [551] = {.lex_state = 20},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 2},
  [554] = {.lex_state = 685},
  [555] = {.lex_state = 22},
  [556] = {.lex_state = 677},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 22},
  [562] = {.lex_state = 22},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 37},
  [568] = {.lex_state = 37},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 22},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 20},
  [573] = {.lex_state = 2},
  [574] = {.lex_state = 22},
  [575] = {.lex_state = 677},
  [576] = {.lex_state = 37},
  [577] = {.lex_state = 23},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 37},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 677},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 11},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 23},
  [589] = {.lex_state = 22},
  [590] = {.lex_state = 22},
  [591] = {.lex_state = 23},
  [592] = {.lex_state = 11},
  [593] = {.lex_state = 23},
  [594] = {.lex_state = 37},
  [595] = {.lex_state = 22},
  [596] = {.lex_state = 22},
  [597] = {.lex_state = 22},
  [598] = {.lex_state = 677},
  [599] = {.lex_state = 677},
  [600] = {.lex_state = 22},
  [601] = {.lex_state = 11},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 38},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 11},
  [607] = {.lex_state = 22},
  [608] = {.lex_state = 22},
  [609] = {.lex_state = 22},
  [610] = {.lex_state = 22},
  [611] = {.lex_state = 23},
  [612] = {.lex_state = 3},
  [613] = {.lex_state = 685},
  [614] = {(TSStateId)(-1)},
  [615] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_diagram] = STATE(544),
    [sym_uml] = STATE(558),
    [sym_json] = STATE(558),
    [sym_yaml] = STATE(558),
    [sym_ebnf] = STATE(558),
    [sym_regex] = STATE(558),
    [sym_ditaa] = STATE(558),
    [sym_gantt] = STATE(558),
    [sym_chronology] = STATE(558),
    [sym_mindmap] = STATE(558),
    [sym_wbs] = STATE(558),
    [sym_chen] = STATE(558),
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
  [0] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(33), 1,
      anon_sym_end,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_note,
    ACTIONS(39), 1,
      anon_sym_rnote,
    ACTIONS(41), 1,
      anon_sym_hnote,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    STATE(479), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [89] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_note,
    ACTIONS(39), 1,
      anon_sym_rnote,
    ACTIONS(41), 1,
      anon_sym_hnote,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(2), 1,
      aux_sym_uml_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    STATE(486), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [178] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_note,
    ACTIONS(39), 1,
      anon_sym_rnote,
    ACTIONS(41), 1,
      anon_sym_hnote,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_uml_repeat1,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    STATE(436), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [267] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_note,
    ACTIONS(39), 1,
      anon_sym_rnote,
    ACTIONS(41), 1,
      anon_sym_hnote,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    STATE(457), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [356] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_note,
    ACTIONS(39), 1,
      anon_sym_rnote,
    ACTIONS(41), 1,
      anon_sym_hnote,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    STATE(440), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [445] = 24,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_note,
    ACTIONS(39), 1,
      anon_sym_rnote,
    ACTIONS(41), 1,
      anon_sym_hnote,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    STATE(460), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [534] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_note,
    ACTIONS(39), 1,
      anon_sym_rnote,
    ACTIONS(41), 1,
      anon_sym_hnote,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    ACTIONS(69), 2,
      anon_sym_else,
      anon_sym_end,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [618] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_note,
    ACTIONS(39), 1,
      anon_sym_rnote,
    ACTIONS(41), 1,
      anon_sym_hnote,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    ACTIONS(71), 2,
      anon_sym_else,
      anon_sym_end,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [702] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_alt,
    ACTIONS(78), 1,
      anon_sym_SLASH,
    ACTIONS(81), 1,
      anon_sym_note,
    ACTIONS(84), 1,
      anon_sym_rnote,
    ACTIONS(87), 1,
      anon_sym_hnote,
    ACTIONS(90), 1,
      anon_sym_loop,
    ACTIONS(93), 1,
      anon_sym_group,
    ACTIONS(96), 1,
      anon_sym_skinparam,
    ACTIONS(99), 1,
      anon_sym_autonumber,
    ACTIONS(102), 1,
      anon_sym_autonumberstop,
    ACTIONS(108), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(218), 1,
      sym_participant_name,
    ACTIONS(76), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(10), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(105), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(125), 10,
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
  [784] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_ATenduml,
    ACTIONS(116), 1,
      anon_sym_alt,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_note,
    ACTIONS(122), 1,
      anon_sym_rnote,
    ACTIONS(124), 1,
      anon_sym_hnote,
    ACTIONS(126), 1,
      anon_sym_loop,
    ACTIONS(128), 1,
      anon_sym_group,
    ACTIONS(130), 1,
      anon_sym_skinparam,
    ACTIONS(132), 1,
      anon_sym_autonumber,
    ACTIONS(134), 1,
      anon_sym_autonumberstop,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(209), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(217), 1,
      sym_participant_name,
    ACTIONS(136), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(211), 10,
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
  [867] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(76), 1,
      anon_sym_end,
    ACTIONS(108), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_alt,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(144), 1,
      anon_sym_note,
    ACTIONS(147), 1,
      anon_sym_rnote,
    ACTIONS(150), 1,
      anon_sym_hnote,
    ACTIONS(153), 1,
      anon_sym_loop,
    ACTIONS(156), 1,
      anon_sym_group,
    ACTIONS(159), 1,
      anon_sym_skinparam,
    ACTIONS(162), 1,
      anon_sym_autonumber,
    ACTIONS(165), 1,
      anon_sym_autonumberstop,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    STATE(12), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(168), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [948] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(108), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_ATenduml,
    ACTIONS(173), 1,
      anon_sym_alt,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(179), 1,
      anon_sym_note,
    ACTIONS(182), 1,
      anon_sym_rnote,
    ACTIONS(185), 1,
      anon_sym_hnote,
    ACTIONS(188), 1,
      anon_sym_loop,
    ACTIONS(191), 1,
      anon_sym_group,
    ACTIONS(194), 1,
      anon_sym_skinparam,
    ACTIONS(197), 1,
      anon_sym_autonumber,
    ACTIONS(200), 1,
      anon_sym_autonumberstop,
    STATE(209), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(217), 1,
      sym_participant_name,
    STATE(13), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(203), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(211), 10,
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
  [1029] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(208), 1,
      anon_sym_end,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1112] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(230), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1195] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(232), 1,
      anon_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1278] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(234), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1361] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(236), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1444] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(238), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1527] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(240), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1610] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_alt,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_note,
    ACTIONS(122), 1,
      anon_sym_rnote,
    ACTIONS(124), 1,
      anon_sym_hnote,
    ACTIONS(126), 1,
      anon_sym_loop,
    ACTIONS(128), 1,
      anon_sym_group,
    ACTIONS(130), 1,
      anon_sym_skinparam,
    ACTIONS(132), 1,
      anon_sym_autonumber,
    ACTIONS(134), 1,
      anon_sym_autonumberstop,
    ACTIONS(242), 1,
      anon_sym_ATenduml,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(209), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(217), 1,
      sym_participant_name,
    ACTIONS(136), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(211), 10,
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
  [1693] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(244), 1,
      anon_sym_end,
    STATE(22), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_uml_repeat1,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1776] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(246), 1,
      anon_sym_end,
    STATE(23), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1859] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(248), 1,
      anon_sym_end,
    STATE(18), 1,
      aux_sym_uml_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [1942] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(250), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [2025] = 22,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_alt,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_note,
    ACTIONS(214), 1,
      anon_sym_rnote,
    ACTIONS(216), 1,
      anon_sym_hnote,
    ACTIONS(218), 1,
      anon_sym_loop,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(222), 1,
      anon_sym_skinparam,
    ACTIONS(224), 1,
      anon_sym_autonumber,
    ACTIONS(226), 1,
      anon_sym_autonumberstop,
    ACTIONS(252), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(149), 1,
      sym_expression,
    STATE(214), 1,
      sym_string,
    STATE(216), 1,
      sym_participant_name,
    ACTIONS(228), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
    STATE(150), 10,
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
  [2108] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_as,
    ACTIONS(264), 1,
      anon_sym_order,
    STATE(27), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_attribute_repeat2,
    STATE(32), 1,
      sym_multiline,
    ACTIONS(260), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(256), 20,
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
  [2166] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(268), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      anon_sym_as,
    ACTIONS(272), 1,
      anon_sym_order,
    STATE(28), 1,
      sym_comment,
    STATE(36), 1,
      sym_multiline,
    STATE(37), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(260), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(256), 19,
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
  [2223] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(276), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_as,
    ACTIONS(280), 1,
      anon_sym_order,
    STATE(29), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_attribute_repeat2,
    STATE(41), 1,
      sym_multiline,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(260), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(256), 18,
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
  [2280] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_as,
    ACTIONS(264), 1,
      anon_sym_order,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(284), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(282), 20,
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
  [2332] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_as,
    ACTIONS(296), 1,
      anon_sym_order,
    ACTIONS(291), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(31), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(286), 20,
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
  [2382] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_as,
    ACTIONS(264), 1,
      anon_sym_order,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(284), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(282), 20,
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
  [2434] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_as,
    ACTIONS(264), 1,
      anon_sym_order,
    STATE(31), 1,
      aux_sym_attribute_repeat2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
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
  [2486] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_as,
    ACTIONS(280), 1,
      anon_sym_order,
    STATE(34), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(284), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(282), 18,
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
  [2537] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_as,
    ACTIONS(280), 1,
      anon_sym_order,
    STATE(35), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(301), 3,
      anon_sym_ATenduml,
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
  [2588] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(268), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      anon_sym_as,
    ACTIONS(272), 1,
      anon_sym_order,
    STATE(36), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(284), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(282), 19,
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
  [2639] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(268), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      anon_sym_as,
    ACTIONS(272), 1,
      anon_sym_order,
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(284), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(282), 19,
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
  [2690] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_POUND,
    ACTIONS(306), 1,
      anon_sym_as,
    ACTIONS(309), 1,
      anon_sym_order,
    ACTIONS(291), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(38), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(286), 19,
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
  [2739] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(268), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      anon_sym_as,
    ACTIONS(272), 1,
      anon_sym_order,
    STATE(38), 1,
      aux_sym_attribute_repeat2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
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
  [2790] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      anon_sym_as,
    ACTIONS(318), 1,
      anon_sym_order,
    STATE(40), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(291), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 18,
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
  [2839] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_as,
    ACTIONS(280), 1,
      anon_sym_order,
    STATE(35), 1,
      aux_sym_attribute_repeat2,
    STATE(41), 1,
      sym_comment,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(284), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(282), 18,
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
  [2890] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(321), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 22,
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
  [2930] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 22,
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
  [2970] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 22,
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
  [3010] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(333), 22,
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
  [3049] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 20,
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
  [3088] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(337), 22,
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
  [3127] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(343), 1,
      anon_sym_COLON,
    ACTIONS(347), 1,
      anon_sym_as,
    STATE(48), 1,
      sym_comment,
    STATE(76), 1,
      sym_attr_alias,
    ACTIONS(345), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(341), 20,
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
  [3172] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(349), 22,
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
  [3211] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(353), 22,
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
  [3250] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 20,
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
  [3289] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 22,
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
  [3328] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 20,
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
  [3367] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 21,
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
  [3406] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(357), 22,
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
  [3445] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 21,
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
  [3484] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(321), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 21,
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
  [3523] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(349), 21,
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
  [3561] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(363), 1,
      anon_sym_as,
    STATE(59), 1,
      sym_comment,
    STATE(118), 1,
      sym_attr_alias,
    ACTIONS(345), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(341), 18,
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
  [3605] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(351), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(349), 20,
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
  [3643] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 20,
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
  [3681] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(353), 21,
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
  [3719] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_comment,
    STATE(129), 1,
      sym_custom_label,
    ACTIONS(369), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(367), 20,
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
  [3761] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(357), 21,
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
  [3799] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(357), 20,
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
  [3837] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(333), 21,
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
  [3875] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 21,
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
  [3913] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(373), 1,
      anon_sym_as,
    STATE(68), 1,
      sym_comment,
    STATE(95), 1,
      sym_attr_alias,
    ACTIONS(345), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(341), 19,
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
  [3957] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(337), 21,
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
  [3995] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 21,
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
  [4033] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 21,
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
  [4071] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 21,
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
  [4109] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(333), 20,
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
  [4147] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(339), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(337), 20,
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
  [4185] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(355), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(353), 20,
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
  [4223] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(377), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(375), 20,
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
  [4262] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(357), 20,
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
  [4299] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(321), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 19,
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
  [4336] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 19,
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
  [4373] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 19,
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
  [4410] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 20,
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
  [4447] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 20,
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
  [4484] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 20,
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
  [4521] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_comment,
    STATE(206), 1,
      sym_custom_label,
    ACTIONS(369), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(367), 19,
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
  [4562] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 20,
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
  [4598] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 20,
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
  [4634] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 20,
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
  [4670] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(391), 20,
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
  [4706] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(391), 20,
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
  [4742] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(357), 18,
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
  [4778] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(395), 20,
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
  [4814] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(399), 20,
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
  [4850] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(403), 20,
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
  [4886] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(407), 20,
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
  [4922] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(375), 19,
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
  [4960] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(413), 20,
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
  [4996] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(417), 20,
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
  [5032] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(421), 20,
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
  [5068] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(425), 20,
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
  [5104] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(429), 20,
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
  [5140] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(101), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(433), 20,
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
  [5176] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(102), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(437), 20,
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
  [5212] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(103), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(441), 20,
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
  [5248] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(445), 20,
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
  [5284] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(449), 20,
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
  [5320] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(453), 20,
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
  [5356] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(457), 20,
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
  [5392] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(357), 19,
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
  [5428] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(461), 20,
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
  [5464] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(465), 20,
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
  [5500] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(469), 20,
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
  [5536] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(473), 20,
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
  [5572] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(477), 20,
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
    STATE(114), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(481), 20,
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
  [5644] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(115), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(485), 20,
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
  [5680] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(489), 20,
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
  [5716] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(493), 20,
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
  [5752] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_COLON,
    STATE(118), 1,
      sym_comment,
    ACTIONS(379), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(375), 18,
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
  [5790] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(499), 20,
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
  [5826] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(503), 20,
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
  [5862] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(507), 20,
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
  [5898] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(511), 20,
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
  [5934] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 20,
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
  [5970] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(124), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(519), 20,
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
  [6006] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(523), 20,
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
  [6042] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(527), 20,
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
  [6078] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(531), 20,
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
  [6114] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(535), 20,
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
  [6150] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(129), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(539), 20,
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
  [6186] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(130), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(543), 20,
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
  [6222] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(449), 19,
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
  [6257] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(493), 18,
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
  [6292] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
      sym_comment,
    ACTIONS(505), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(503), 18,
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
  [6327] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
      sym_comment,
    ACTIONS(509), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(507), 18,
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
  [6362] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
      sym_comment,
    ACTIONS(517), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 18,
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
  [6397] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(529), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(527), 18,
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
  [6432] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
      sym_comment,
    ACTIONS(537), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(535), 18,
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
  [6467] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
      sym_comment,
    ACTIONS(389), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 18,
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
  [6502] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_comment,
    ACTIONS(389), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 18,
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
  [6537] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(499), 19,
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
  [6572] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
      sym_comment,
    ACTIONS(513), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(511), 18,
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
    STATE(142), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 18,
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
  [6642] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(415), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(413), 18,
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
  [6677] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(417), 18,
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
  [6712] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(429), 18,
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
  [6747] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(425), 18,
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
  [6782] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(433), 18,
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
  [6817] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 19,
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
  [6852] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(519), 19,
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
  [6887] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(523), 19,
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
  [6922] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(531), 19,
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
  [6957] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(439), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(437), 18,
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
  [6992] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(511), 19,
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
  [7027] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(421), 18,
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
  [7062] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(395), 19,
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
  [7097] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(156), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(399), 19,
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
  [7132] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(403), 19,
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
  [7167] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(407), 19,
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
  [7202] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(391), 19,
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
  [7237] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(160), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(391), 19,
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
  [7272] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(445), 18,
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
  [7307] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
      sym_comment,
    ACTIONS(545), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(543), 18,
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
  [7342] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(163), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(441), 19,
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
  [7377] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(493), 19,
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
  [7412] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(165), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(503), 19,
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
  [7447] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(507), 19,
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
  [7482] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(515), 19,
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
  [7517] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(168), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(527), 19,
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
  [7552] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(169), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(535), 19,
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
  [7587] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(170), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 19,
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
  [7622] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(171), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 19,
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
  [7657] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(455), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(453), 18,
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
  [7692] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(173), 1,
      sym_comment,
    ACTIONS(459), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(457), 18,
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
  [7727] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(174), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(461), 18,
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
  [7762] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(175), 1,
      sym_comment,
    ACTIONS(443), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(441), 18,
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
  [7797] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(176), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(417), 19,
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
  [7832] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(425), 19,
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
    STATE(178), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(433), 19,
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
  [7902] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(179), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(437), 19,
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
  [7937] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(180), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(465), 18,
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
  [7972] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(181), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(445), 19,
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
  [8007] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(182), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(543), 19,
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
  [8042] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(183), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(453), 19,
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
  [8077] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(184), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(457), 19,
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
  [8112] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(185), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(461), 19,
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
  [8147] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(186), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(465), 19,
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
  [8182] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(187), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(469), 19,
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
  [8217] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(188), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(473), 19,
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
  [8252] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(189), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(477), 19,
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
  [8287] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(190), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(481), 19,
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
  [8322] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(191), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(485), 19,
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
  [8357] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(192), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(489), 19,
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
  [8392] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(193), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(469), 18,
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
  [8427] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(194), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(473), 18,
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
  [8462] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(195), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(477), 18,
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
  [8497] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(196), 1,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(481), 18,
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
  [8532] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(197), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(421), 19,
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
  [8567] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(198), 1,
      sym_comment,
    ACTIONS(487), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(485), 18,
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
  [8602] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(199), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(429), 19,
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
  [8637] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(200), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(489), 18,
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
  [8672] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(201), 1,
      sym_comment,
    ACTIONS(451), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(449), 18,
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
  [8707] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(202), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(395), 18,
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
  [8742] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(203), 1,
      sym_comment,
    ACTIONS(401), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(399), 18,
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
  [8777] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(204), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(403), 18,
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
  [8812] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(205), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(407), 18,
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
  [8847] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(206), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(539), 19,
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
  [8882] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(207), 1,
      sym_comment,
    ACTIONS(393), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(391), 18,
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
  [8917] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(208), 1,
      sym_comment,
    ACTIONS(393), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(391), 18,
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
  [8952] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(209), 1,
      sym_comment,
    ACTIONS(521), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(519), 18,
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
  [8987] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(210), 1,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(531), 18,
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
  [9022] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(211), 1,
      sym_comment,
    ACTIONS(525), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(523), 18,
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
  [9057] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(212), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(413), 19,
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
  [9092] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(213), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(325), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [9120] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(214), 1,
      sym_comment,
    ACTIONS(331), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(329), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [9148] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(215), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(321), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [9176] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(549), 1,
      anon_sym_DASH,
    ACTIONS(553), 1,
      anon_sym_x,
    ACTIONS(557), 1,
      anon_sym_DASH_DASH,
    STATE(216), 1,
      sym_comment,
    STATE(365), 1,
      sym_connector,
    ACTIONS(551), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(547), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(555), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [9212] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(549), 1,
      anon_sym_DASH,
    ACTIONS(553), 1,
      anon_sym_x,
    ACTIONS(557), 1,
      anon_sym_DASH_DASH,
    STATE(217), 1,
      sym_comment,
    STATE(343), 1,
      sym_connector,
    ACTIONS(551), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(547), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(555), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [9248] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(549), 1,
      anon_sym_DASH,
    ACTIONS(553), 1,
      anon_sym_x,
    ACTIONS(557), 1,
      anon_sym_DASH_DASH,
    STATE(218), 1,
      sym_comment,
    STATE(355), 1,
      sym_connector,
    ACTIONS(551), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(547), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(555), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [9284] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(563), 1,
      anon_sym_DASH,
    STATE(219), 1,
      sym_comment,
    ACTIONS(561), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(559), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(565), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9311] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_LBRACK_POUND,
    STATE(220), 1,
      sym_comment,
    ACTIONS(569), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(567), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(571), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9338] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(579), 1,
      anon_sym_DASH,
    STATE(221), 1,
      sym_comment,
    ACTIONS(577), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(575), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(581), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9365] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_LBRACK_POUND,
    STATE(222), 1,
      sym_comment,
    ACTIONS(585), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(583), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(587), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9392] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(223), 1,
      sym_comment,
    ACTIONS(561), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(559), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(565), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9416] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(224), 1,
      sym_comment,
    ACTIONS(593), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(591), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(595), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9440] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(225), 1,
      sym_comment,
    ACTIONS(569), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(567), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(571), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9464] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(226), 1,
      sym_comment,
    ACTIONS(585), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(583), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(587), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9488] = 9,
    ACTIONS(597), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(601), 1,
      aux_sym_attribute_token3,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(227), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_attribute_repeat1,
    STATE(556), 1,
      sym_string,
    ACTIONS(599), 2,
      anon_sym_inc,
      anon_sym_resume,
  [9517] = 9,
    ACTIONS(601), 1,
      aux_sym_attribute_token3,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(609), 1,
      aux_sym__NEWLINE_token1,
    STATE(228), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym_attribute_repeat1,
    STATE(575), 1,
      sym_string,
    ACTIONS(611), 2,
      anon_sym_inc,
      anon_sym_resume,
  [9546] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_DASH,
    STATE(229), 1,
      sym_comment,
    ACTIONS(613), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(617), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9569] = 9,
    ACTIONS(601), 1,
      aux_sym_attribute_token3,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      aux_sym__NEWLINE_token1,
    STATE(230), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym_attribute_repeat1,
    STATE(583), 1,
      sym_string,
    ACTIONS(621), 2,
      anon_sym_inc,
      anon_sym_resume,
  [9598] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(627), 1,
      anon_sym_LBRACK_POUND,
    STATE(231), 1,
      sym_comment,
    ACTIONS(623), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(625), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9621] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      anon_sym_COLON,
    STATE(232), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_line_note_repeat1,
    STATE(292), 1,
      sym__NEWLINE,
  [9649] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(639), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      anon_sym_COLON,
    STATE(233), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_line_note_repeat1,
    STATE(373), 1,
      sym__NEWLINE,
  [9677] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(643), 1,
      anon_sym_POUND,
    ACTIONS(645), 1,
      anon_sym_COLON,
    STATE(234), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_line_note_repeat1,
    STATE(323), 1,
      sym__NEWLINE,
  [9705] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(235), 1,
      sym_comment,
    ACTIONS(623), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(625), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [9725] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      anon_sym_COLON,
    STATE(236), 1,
      sym_comment,
    STATE(268), 1,
      sym__NEWLINE,
    STATE(291), 1,
      aux_sym_line_note_repeat1,
  [9753] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(651), 1,
      anon_sym_DQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    STATE(237), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [9779] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(647), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      anon_sym_COLON,
    STATE(238), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_line_note_repeat1,
    STATE(342), 1,
      sym__NEWLINE,
  [9807] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [9833] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [9859] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(661), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [9885] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(242), 1,
      sym_comment,
    ACTIONS(663), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(665), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [9905] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [9931] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(669), 1,
      anon_sym_DQUOTE,
    ACTIONS(674), 1,
      anon_sym_BSLASH,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(671), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(244), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [9955] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(245), 1,
      sym_comment,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [9981] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_POUND,
    ACTIONS(645), 1,
      anon_sym_COLON,
    STATE(236), 1,
      aux_sym_line_note_repeat1,
    STATE(246), 1,
      sym_comment,
    STATE(301), 1,
      sym__NEWLINE,
  [10009] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10035] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(248), 1,
      sym_comment,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10061] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10087] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(250), 1,
      sym_comment,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10113] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(687), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10139] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(252), 1,
      sym_comment,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10165] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(691), 1,
      anon_sym_DQUOTE,
    STATE(253), 1,
      sym_comment,
    STATE(254), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10191] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(254), 1,
      sym_comment,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10217] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10243] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(256), 1,
      sym_comment,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10269] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      sym_comment,
    STATE(258), 1,
      aux_sym_string_repeat1,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10295] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_BSLASH,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      aux_sym_string_repeat1,
    STATE(258), 1,
      sym_comment,
    STATE(337), 1,
      sym_escape_char,
    ACTIONS(653), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [10321] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_POUND,
    ACTIONS(705), 1,
      anon_sym_COLON,
    STATE(232), 1,
      aux_sym_line_note_repeat1,
    STATE(259), 1,
      sym_comment,
    STATE(288), 1,
      sym__NEWLINE,
  [10349] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(703), 1,
      anon_sym_POUND,
    ACTIONS(705), 1,
      anon_sym_COLON,
    STATE(260), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_line_note_repeat1,
    STATE(358), 1,
      sym__NEWLINE,
  [10377] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    STATE(261), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_line_note_repeat1,
    STATE(361), 1,
      sym__NEWLINE,
  [10405] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      anon_sym_COLON,
    STATE(262), 1,
      sym_comment,
    STATE(264), 1,
      aux_sym_line_note_repeat1,
    STATE(274), 1,
      sym__NEWLINE,
  [10433] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(707), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      anon_sym_COLON,
    STATE(233), 1,
      aux_sym_line_note_repeat1,
    STATE(263), 1,
      sym_comment,
    STATE(369), 1,
      sym__NEWLINE,
  [10461] = 9,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      anon_sym_COLON,
    STATE(264), 1,
      sym_comment,
    STATE(277), 1,
      sym__NEWLINE,
    STATE(291), 1,
      aux_sym_line_note_repeat1,
  [10489] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(265), 1,
      sym_comment,
    ACTIONS(575), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(581), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [10509] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(713), 1,
      anon_sym_endnote,
    ACTIONS(715), 1,
      anon_sym_endhnote,
    STATE(266), 1,
      sym_comment,
    STATE(267), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10534] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(717), 1,
      anon_sym_endnote,
    ACTIONS(719), 1,
      anon_sym_endhnote,
    STATE(267), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10559] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(721), 1,
      anon_sym_endnote,
    ACTIONS(723), 1,
      anon_sym_endhnote,
    STATE(268), 1,
      sym_comment,
    STATE(299), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10584] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(725), 1,
      anon_sym_endnote,
    ACTIONS(727), 1,
      anon_sym_endhnote,
    STATE(269), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10609] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
    ACTIONS(731), 1,
      aux_sym_multiline_token1,
    ACTIONS(733), 1,
      anon_sym_BSLASH,
    STATE(270), 1,
      sym_comment,
    STATE(279), 1,
      aux_sym_multiline_repeat1,
    STATE(459), 1,
      sym_escape_char,
  [10634] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    ACTIONS(735), 1,
      aux_sym_attr_alias_token1,
    STATE(271), 1,
      sym_comment,
    ACTIONS(737), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [10655] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(731), 1,
      aux_sym_multiline_token1,
    ACTIONS(733), 1,
      anon_sym_BSLASH,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym_multiline_repeat1,
    STATE(459), 1,
      sym_escape_char,
  [10680] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(741), 1,
      anon_sym_endnote,
    ACTIONS(743), 1,
      anon_sym_endhnote,
    STATE(273), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10705] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(741), 1,
      anon_sym_endnote,
    ACTIONS(743), 1,
      anon_sym_endhnote,
    STATE(274), 1,
      sym_comment,
    STATE(276), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10730] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(731), 1,
      aux_sym_multiline_token1,
    ACTIONS(733), 1,
      anon_sym_BSLASH,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      sym_comment,
    STATE(279), 1,
      aux_sym_multiline_repeat1,
    STATE(459), 1,
      sym_escape_char,
  [10755] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(747), 1,
      anon_sym_endnote,
    ACTIONS(749), 1,
      anon_sym_endhnote,
    STATE(276), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10780] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(747), 1,
      anon_sym_endnote,
    ACTIONS(749), 1,
      anon_sym_endhnote,
    STATE(277), 1,
      sym_comment,
    STATE(278), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10805] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(751), 1,
      anon_sym_endnote,
    ACTIONS(753), 1,
      anon_sym_endhnote,
    STATE(278), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10830] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(755), 1,
      anon_sym_RBRACK,
    ACTIONS(757), 1,
      aux_sym_multiline_token1,
    ACTIONS(760), 1,
      anon_sym_BSLASH,
    STATE(459), 1,
      sym_escape_char,
    STATE(279), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [10853] = 8,
    ACTIONS(601), 1,
      aux_sym_attribute_token3,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(763), 1,
      aux_sym__NEWLINE_token1,
    STATE(280), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym_attribute_repeat1,
    STATE(599), 1,
      sym_string,
  [10878] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 1,
      aux_sym_attr_alias_token1,
    STATE(281), 1,
      sym_comment,
    ACTIONS(767), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [10899] = 8,
    ACTIONS(601), 1,
      aux_sym_attribute_token3,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(769), 1,
      aux_sym__NEWLINE_token1,
    STATE(282), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym_attribute_repeat1,
    STATE(543), 1,
      sym_string,
  [10924] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(771), 1,
      anon_sym_endnote,
    ACTIONS(773), 1,
      anon_sym_endhnote,
    STATE(283), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [10949] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(775), 1,
      aux_sym_attr_alias_token1,
    STATE(284), 1,
      sym_comment,
    ACTIONS(777), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [10970] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(779), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(781), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      sym_comment,
    ACTIONS(783), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [10991] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(731), 1,
      aux_sym_multiline_token1,
    ACTIONS(733), 1,
      anon_sym_BSLASH,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
    STATE(286), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_multiline_repeat1,
    STATE(459), 1,
      sym_escape_char,
  [11016] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(787), 1,
      anon_sym_endnote,
    ACTIONS(789), 1,
      anon_sym_endhnote,
    STATE(287), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [11041] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(787), 1,
      anon_sym_endnote,
    ACTIONS(789), 1,
      anon_sym_endhnote,
    STATE(288), 1,
      sym_comment,
    STATE(290), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [11066] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(731), 1,
      aux_sym_multiline_token1,
    ACTIONS(733), 1,
      anon_sym_BSLASH,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_multiline_repeat1,
    STATE(289), 1,
      sym_comment,
    STATE(459), 1,
      sym_escape_char,
  [11091] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(793), 1,
      anon_sym_endnote,
    ACTIONS(795), 1,
      anon_sym_endhnote,
    STATE(290), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [11116] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(797), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    ACTIONS(802), 2,
      anon_sym_POUND,
      anon_sym_COLON,
    STATE(291), 2,
      sym_comment,
      aux_sym_line_note_repeat1,
  [11137] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(793), 1,
      anon_sym_endnote,
    ACTIONS(795), 1,
      anon_sym_endhnote,
    STATE(292), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [11162] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(804), 1,
      anon_sym_endnote,
    ACTIONS(806), 1,
      anon_sym_endhnote,
    STATE(293), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(427), 1,
      sym_line,
  [11187] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    ACTIONS(808), 1,
      aux_sym_attr_alias_token1,
    STATE(294), 1,
      sym_comment,
    ACTIONS(810), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11208] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(812), 1,
      aux_sym_line_token1,
    STATE(427), 1,
      sym_line,
    ACTIONS(815), 2,
      anon_sym_endnote,
      anon_sym_endhnote,
    STATE(295), 2,
      sym_comment,
      aux_sym_block_note_repeat1,
  [11229] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    ACTIONS(817), 1,
      aux_sym_attr_alias_token1,
    STATE(296), 1,
      sym_comment,
    ACTIONS(819), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11250] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(721), 1,
      anon_sym_endnote,
    ACTIONS(723), 1,
      anon_sym_endhnote,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(297), 1,
      sym_comment,
    STATE(427), 1,
      sym_line,
  [11275] = 8,
    ACTIONS(601), 1,
      aux_sym_attribute_token3,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(821), 1,
      aux_sym__NEWLINE_token1,
    STATE(298), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym_attribute_repeat1,
    STATE(598), 1,
      sym_string,
  [11300] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(823), 1,
      anon_sym_endnote,
    ACTIONS(825), 1,
      anon_sym_endhnote,
    STATE(295), 1,
      aux_sym_block_note_repeat1,
    STATE(299), 1,
      sym_comment,
    STATE(427), 1,
      sym_line,
  [11325] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(827), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(829), 1,
      anon_sym_DQUOTE,
    STATE(300), 1,
      sym_comment,
    ACTIONS(831), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [11346] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_line_token1,
    ACTIONS(717), 1,
      anon_sym_endnote,
    ACTIONS(719), 1,
      anon_sym_endhnote,
    STATE(297), 1,
      aux_sym_block_note_repeat1,
    STATE(301), 1,
      sym_comment,
    STATE(427), 1,
      sym_line,
  [11371] = 8,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(731), 1,
      aux_sym_multiline_token1,
    ACTIONS(733), 1,
      anon_sym_BSLASH,
    ACTIONS(833), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_multiline_repeat1,
    STATE(302), 1,
      sym_comment,
    STATE(459), 1,
      sym_escape_char,
  [11396] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(835), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym_participant_name,
    STATE(303), 1,
      sym_comment,
    STATE(314), 1,
      sym_string,
  [11418] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(839), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(841), 1,
      aux_sym_attribute_token3,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
    STATE(304), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [11438] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(848), 1,
      anon_sym_ATendjson,
    STATE(305), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym_json_repeat1,
    ACTIONS(846), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11458] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(852), 1,
      anon_sym_ATendyaml,
    STATE(306), 1,
      sym_comment,
    STATE(375), 1,
      aux_sym_json_repeat1,
    ACTIONS(850), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11478] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(307), 1,
      sym_comment,
    ACTIONS(854), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [11494] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(858), 1,
      anon_sym_ATendebnf,
    STATE(308), 1,
      sym_comment,
    STATE(316), 1,
      aux_sym_json_repeat1,
    ACTIONS(856), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11514] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(862), 1,
      anon_sym_ATendregex,
    STATE(309), 1,
      sym_comment,
    STATE(339), 1,
      aux_sym_json_repeat1,
    ACTIONS(860), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11534] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(866), 1,
      anon_sym_ATendditaa,
    STATE(310), 1,
      sym_comment,
    STATE(344), 1,
      aux_sym_json_repeat1,
    ACTIONS(864), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11554] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(815), 1,
      anon_sym_endrnote,
    ACTIONS(868), 1,
      aux_sym_line_token1,
    STATE(536), 1,
      sym_line,
    STATE(311), 2,
      sym_comment,
      aux_sym_block_note_repeat1,
  [11574] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(797), 2,
      anon_sym_POUND,
      anon_sym_COLON,
    STATE(312), 2,
      sym_comment,
      aux_sym_line_note_repeat1,
  [11592] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(876), 1,
      anon_sym_ATendgantt,
    STATE(313), 1,
      sym_comment,
    STATE(346), 1,
      aux_sym_json_repeat1,
    ACTIONS(874), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11612] = 5,
    ACTIONS(329), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(314), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [11630] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      anon_sym_COLON,
    STATE(315), 1,
      sym_comment,
    STATE(336), 1,
      aux_sym_line_note_repeat1,
  [11652] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendebnf,
    ACTIONS(884), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(316), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [11670] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(891), 1,
      anon_sym_ATendchronology,
    STATE(317), 1,
      sym_comment,
    STATE(347), 1,
      aux_sym_json_repeat1,
    ACTIONS(889), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11690] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(895), 1,
      anon_sym_ATendmindmap,
    STATE(318), 1,
      sym_comment,
    STATE(349), 1,
      aux_sym_json_repeat1,
    ACTIONS(893), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11710] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(835), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_string,
    STATE(319), 1,
      sym_comment,
    STATE(338), 1,
      sym_participant_name,
  [11732] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(899), 1,
      anon_sym_ATendwbs,
    STATE(320), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_json_repeat1,
    ACTIONS(897), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11752] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(903), 1,
      anon_sym_ATendchen,
    STATE(321), 1,
      sym_comment,
    STATE(351), 1,
      aux_sym_json_repeat1,
    ACTIONS(901), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11772] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(907), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(322), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [11794] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(907), 1,
      anon_sym_endrnote,
    STATE(323), 1,
      sym_comment,
    STATE(341), 1,
      aux_sym_block_note_repeat1,
    STATE(536), 1,
      sym_line,
  [11816] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      anon_sym_COLON,
    STATE(312), 1,
      aux_sym_line_note_repeat1,
    STATE(324), 1,
      sym_comment,
  [11838] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(909), 1,
      anon_sym_ATendchronology,
    STATE(317), 1,
      aux_sym_json_repeat1,
    STATE(325), 1,
      sym_comment,
    ACTIONS(889), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11858] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(911), 1,
      anon_sym_ATendmindmap,
    STATE(318), 1,
      aux_sym_json_repeat1,
    STATE(326), 1,
      sym_comment,
    ACTIONS(893), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [11878] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_over,
    STATE(327), 1,
      sym_comment,
    ACTIONS(913), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [11896] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(917), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      anon_sym_COLON,
    STATE(266), 1,
      sym__NEWLINE,
    STATE(328), 1,
      sym_comment,
  [11918] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(835), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(246), 1,
      sym_participant_name,
    STATE(314), 1,
      sym_string,
    STATE(329), 1,
      sym_comment,
  [11940] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(917), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      anon_sym_COLON,
    STATE(330), 1,
      sym_comment,
    STATE(376), 1,
      sym__NEWLINE,
  [11962] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(835), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(234), 1,
      sym_participant_name,
    STATE(314), 1,
      sym_string,
    STATE(331), 1,
      sym_comment,
  [11984] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(921), 1,
      aux_sym_attr_alias_token1,
    STATE(214), 1,
      sym_string,
    STATE(332), 1,
      sym_comment,
    STATE(377), 1,
      sym_participant_name,
  [12006] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_ATendwbs,
    STATE(320), 1,
      aux_sym_json_repeat1,
    STATE(333), 1,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12026] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(925), 1,
      anon_sym_ATendchen,
    STATE(321), 1,
      aux_sym_json_repeat1,
    STATE(334), 1,
      sym_comment,
    ACTIONS(901), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12046] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(927), 1,
      aux_sym_attribute_token1,
    ACTIONS(929), 1,
      aux_sym_attribute_token2,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      sym_comment,
    STATE(577), 1,
      sym_string,
  [12068] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_POUND,
    ACTIONS(935), 1,
      anon_sym_COLON,
    STATE(312), 1,
      aux_sym_line_note_repeat1,
    STATE(336), 1,
      sym_comment,
  [12090] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(337), 1,
      sym_comment,
    ACTIONS(937), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [12106] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(797), 1,
      aux_sym__NEWLINE_token1,
    STATE(338), 1,
      sym_comment,
    ACTIONS(802), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [12124] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendregex,
    ACTIONS(939), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(339), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12142] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_over,
    STATE(340), 1,
      sym_comment,
    ACTIONS(942), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [12160] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(946), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(341), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12182] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(946), 1,
      anon_sym_endrnote,
    STATE(342), 1,
      sym_comment,
    STATE(352), 1,
      aux_sym_block_note_repeat1,
    STATE(536), 1,
      sym_line,
  [12204] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(948), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(950), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_participant_name,
    STATE(80), 1,
      sym_string,
    STATE(343), 1,
      sym_comment,
  [12226] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendditaa,
    ACTIONS(952), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(344), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12244] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(957), 1,
      anon_sym_over,
    STATE(345), 1,
      sym_comment,
    ACTIONS(955), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [12262] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendgantt,
    ACTIONS(959), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(346), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12280] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendchronology,
    ACTIONS(962), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(347), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12298] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendjson,
    ACTIONS(965), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(348), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12316] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendmindmap,
    ACTIONS(968), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(349), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12334] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendwbs,
    ACTIONS(971), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(350), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12352] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendchen,
    ACTIONS(974), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(351), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12370] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(977), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(352), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12392] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(979), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_participant_name,
    STATE(44), 1,
      sym_string,
    STATE(353), 1,
      sym_comment,
  [12414] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    ACTIONS(983), 1,
      aux_sym_attribute_token1,
    ACTIONS(985), 1,
      aux_sym_attribute_token2,
    STATE(354), 1,
      sym_comment,
    STATE(593), 1,
      sym_string,
  [12436] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(987), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(989), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_participant_name,
    STATE(67), 1,
      sym_string,
    STATE(355), 1,
      sym_comment,
  [12458] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(991), 1,
      anon_sym_endrnote,
    STATE(356), 1,
      sym_comment,
    STATE(357), 1,
      aux_sym_block_note_repeat1,
    STATE(536), 1,
      sym_line,
  [12480] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(993), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(357), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12502] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(993), 1,
      anon_sym_endrnote,
    STATE(358), 1,
      sym_comment,
    STATE(360), 1,
      aux_sym_block_note_repeat1,
    STATE(536), 1,
      sym_line,
  [12524] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(921), 1,
      aux_sym_attr_alias_token1,
    STATE(214), 1,
      sym_string,
    STATE(359), 1,
      sym_comment,
    STATE(395), 1,
      sym_participant_name,
  [12546] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(995), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(360), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12568] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(995), 1,
      anon_sym_endrnote,
    STATE(361), 1,
      sym_comment,
    STATE(362), 1,
      aux_sym_block_note_repeat1,
    STATE(536), 1,
      sym_line,
  [12590] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(997), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(362), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12612] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(999), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_participant_name,
    STATE(54), 1,
      sym_string,
    STATE(363), 1,
      sym_comment,
  [12634] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    ACTIONS(1003), 1,
      aux_sym_attribute_token1,
    ACTIONS(1005), 1,
      aux_sym_attribute_token2,
    STATE(364), 1,
      sym_comment,
    STATE(611), 1,
      sym_string,
  [12656] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1007), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_participant_name,
    STATE(83), 1,
      sym_string,
    STATE(365), 1,
      sym_comment,
  [12678] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      anon_sym_over,
    STATE(366), 1,
      sym_comment,
    ACTIONS(1011), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [12696] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(1015), 1,
      anon_sym_endrnote,
    STATE(367), 1,
      sym_comment,
    STATE(368), 1,
      aux_sym_block_note_repeat1,
    STATE(536), 1,
      sym_line,
  [12718] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(1017), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(368), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12740] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(1017), 1,
      anon_sym_endrnote,
    STATE(369), 1,
      sym_comment,
    STATE(372), 1,
      aux_sym_block_note_repeat1,
    STATE(536), 1,
      sym_line,
  [12762] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(921), 1,
      aux_sym_attr_alias_token1,
    STATE(214), 1,
      sym_string,
    STATE(315), 1,
      sym_participant_name,
    STATE(370), 1,
      sym_comment,
  [12784] = 5,
    ACTIONS(325), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(371), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [12802] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(1019), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(372), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12824] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(1019), 1,
      anon_sym_endrnote,
    STATE(373), 1,
      sym_comment,
    STATE(374), 1,
      aux_sym_block_note_repeat1,
    STATE(536), 1,
      sym_line,
  [12846] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(1021), 1,
      anon_sym_endrnote,
    STATE(311), 1,
      aux_sym_block_note_repeat1,
    STATE(374), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12868] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_ATendyaml,
    ACTIONS(1023), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(375), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [12886] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      aux_sym_line_token1,
    ACTIONS(1026), 1,
      anon_sym_endrnote,
    STATE(322), 1,
      aux_sym_block_note_repeat1,
    STATE(376), 1,
      sym_comment,
    STATE(536), 1,
      sym_line,
  [12908] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      anon_sym_COLON,
    STATE(324), 1,
      aux_sym_line_note_repeat1,
    STATE(377), 1,
      sym_comment,
  [12930] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1032), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_participant_name,
    STATE(46), 1,
      sym_string,
    STATE(378), 1,
      sym_comment,
  [12952] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1036), 1,
      anon_sym_ATendjson,
    STATE(305), 1,
      aux_sym_json_repeat1,
    STATE(379), 1,
      sym_comment,
    ACTIONS(846), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12972] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1038), 1,
      anon_sym_ATendyaml,
    STATE(306), 1,
      aux_sym_json_repeat1,
    STATE(380), 1,
      sym_comment,
    ACTIONS(850), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [12992] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1040), 1,
      anon_sym_ATendebnf,
    STATE(308), 1,
      aux_sym_json_repeat1,
    STATE(381), 1,
      sym_comment,
    ACTIONS(856), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13012] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1042), 1,
      anon_sym_POUND,
    ACTIONS(1044), 1,
      anon_sym_COLON,
    STATE(283), 1,
      sym__NEWLINE,
    STATE(382), 1,
      sym_comment,
  [13034] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1042), 1,
      anon_sym_POUND,
    ACTIONS(1044), 1,
      anon_sym_COLON,
    STATE(356), 1,
      sym__NEWLINE,
    STATE(383), 1,
      sym_comment,
  [13056] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1046), 1,
      anon_sym_ATendregex,
    STATE(309), 1,
      aux_sym_json_repeat1,
    STATE(384), 1,
      sym_comment,
    ACTIONS(860), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13076] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_POUND,
    ACTIONS(1050), 1,
      anon_sym_COLON,
    STATE(385), 1,
      sym_comment,
    STATE(389), 1,
      aux_sym_line_note_repeat1,
  [13098] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_POUND,
    ACTIONS(1054), 1,
      anon_sym_COLON,
    STATE(386), 1,
      sym_comment,
    STATE(390), 1,
      aux_sym_line_note_repeat1,
  [13120] = 5,
    ACTIONS(321), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(387), 1,
      sym_comment,
    ACTIONS(323), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [13138] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1056), 1,
      anon_sym_ATendditaa,
    STATE(310), 1,
      aux_sym_json_repeat1,
    STATE(388), 1,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13158] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_POUND,
    ACTIONS(1054), 1,
      anon_sym_COLON,
    STATE(312), 1,
      aux_sym_line_note_repeat1,
    STATE(389), 1,
      sym_comment,
  [13180] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_POUND,
    ACTIONS(1060), 1,
      anon_sym_COLON,
    STATE(312), 1,
      aux_sym_line_note_repeat1,
    STATE(390), 1,
      sym_comment,
  [13202] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1062), 1,
      anon_sym_ATendgantt,
    STATE(313), 1,
      aux_sym_json_repeat1,
    STATE(391), 1,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [13222] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1064), 1,
      anon_sym_POUND,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(269), 1,
      sym__NEWLINE,
    STATE(392), 1,
      sym_comment,
  [13244] = 7,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1064), 1,
      anon_sym_POUND,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(367), 1,
      sym__NEWLINE,
    STATE(393), 1,
      sym_comment,
  [13266] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_POUND,
    ACTIONS(1070), 1,
      anon_sym_COLON,
    STATE(394), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym_line_note_repeat1,
  [13288] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_POUND,
    ACTIONS(1074), 1,
      anon_sym_COLON,
    STATE(395), 1,
      sym_comment,
    STATE(397), 1,
      aux_sym_line_note_repeat1,
  [13310] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_POUND,
    ACTIONS(1074), 1,
      anon_sym_COLON,
    STATE(312), 1,
      aux_sym_line_note_repeat1,
    STATE(396), 1,
      sym_comment,
  [13332] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      anon_sym_POUND,
    ACTIONS(1078), 1,
      anon_sym_COLON,
    STATE(312), 1,
      aux_sym_line_note_repeat1,
    STATE(397), 1,
      sym_comment,
  [13354] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1082), 1,
      anon_sym_over,
    STATE(398), 1,
      sym_comment,
    ACTIONS(1080), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13372] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1086), 1,
      anon_sym_over,
    STATE(399), 1,
      sym_comment,
    ACTIONS(1084), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13390] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1090), 1,
      anon_sym_over,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1088), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13408] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1094), 1,
      anon_sym_over,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1092), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13426] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(835), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(259), 1,
      sym_participant_name,
    STATE(314), 1,
      sym_string,
    STATE(402), 1,
      sym_comment,
  [13448] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(835), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_participant_name,
    STATE(314), 1,
      sym_string,
    STATE(403), 1,
      sym_comment,
  [13470] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(921), 1,
      aux_sym_attr_alias_token1,
    STATE(214), 1,
      sym_string,
    STATE(385), 1,
      sym_participant_name,
    STATE(404), 1,
      sym_comment,
  [13492] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(921), 1,
      aux_sym_attr_alias_token1,
    STATE(214), 1,
      sym_string,
    STATE(386), 1,
      sym_participant_name,
    STATE(405), 1,
      sym_comment,
  [13514] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1098), 1,
      anon_sym_over,
    STATE(406), 1,
      sym_comment,
    ACTIONS(1096), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13532] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1102), 1,
      anon_sym_over,
    STATE(407), 1,
      sym_comment,
    ACTIONS(1100), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13550] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1106), 1,
      anon_sym_over,
    STATE(408), 1,
      sym_comment,
    ACTIONS(1104), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13568] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1110), 1,
      anon_sym_over,
    STATE(409), 1,
      sym_comment,
    ACTIONS(1108), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [13586] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(835), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(263), 1,
      sym_participant_name,
    STATE(314), 1,
      sym_string,
    STATE(410), 1,
      sym_comment,
  [13608] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(921), 1,
      aux_sym_attr_alias_token1,
    STATE(214), 1,
      sym_string,
    STATE(394), 1,
      sym_participant_name,
    STATE(411), 1,
      sym_comment,
  [13630] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(921), 1,
      aux_sym_attr_alias_token1,
    STATE(214), 1,
      sym_string,
    STATE(412), 1,
      sym_comment,
    STATE(444), 1,
      sym_participant_name,
  [13652] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1112), 1,
      ts_builtin_sym_end,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    STATE(413), 1,
      sym_comment,
    STATE(465), 1,
      aux_sym_json_repeat2,
  [13671] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(414), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [13686] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1118), 1,
      ts_builtin_sym_end,
    STATE(415), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [13705] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(416), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [13720] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1120), 1,
      ts_builtin_sym_end,
    STATE(417), 1,
      sym_comment,
    STATE(434), 1,
      aux_sym_json_repeat2,
  [13739] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1122), 1,
      ts_builtin_sym_end,
    STATE(418), 1,
      sym_comment,
    STATE(449), 1,
      aux_sym_json_repeat2,
  [13758] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(419), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [13773] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1124), 1,
      ts_builtin_sym_end,
    STATE(420), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [13792] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(421), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [13807] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1126), 1,
      ts_builtin_sym_end,
    STATE(422), 1,
      sym_comment,
    STATE(455), 1,
      aux_sym_json_repeat2,
  [13826] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1128), 1,
      ts_builtin_sym_end,
    STATE(423), 1,
      sym_comment,
    STATE(445), 1,
      aux_sym_json_repeat2,
  [13845] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1130), 1,
      ts_builtin_sym_end,
    STATE(424), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [13864] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(425), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [13879] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(426), 1,
      sym_comment,
    ACTIONS(429), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [13894] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(427), 1,
      sym_comment,
    ACTIONS(1132), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [13909] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1134), 1,
      ts_builtin_sym_end,
    STATE(428), 1,
      sym_comment,
    STATE(447), 1,
      aux_sym_json_repeat2,
  [13928] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1136), 1,
      ts_builtin_sym_end,
    STATE(429), 1,
      sym_comment,
    STATE(456), 1,
      aux_sym_json_repeat2,
  [13947] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1138), 1,
      ts_builtin_sym_end,
    STATE(430), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [13966] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1140), 1,
      ts_builtin_sym_end,
    STATE(431), 1,
      sym_comment,
    STATE(458), 1,
      aux_sym_json_repeat2,
  [13985] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(432), 1,
      sym_comment,
    ACTIONS(1142), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [14000] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
      sym_boolean_literal,
    STATE(433), 1,
      sym_comment,
    ACTIONS(1144), 2,
      anon_sym_true,
      anon_sym_false,
  [14017] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1146), 1,
      ts_builtin_sym_end,
    STATE(434), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [14036] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1148), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      sym_comment,
    STATE(462), 1,
      aux_sym_json_repeat2,
  [14055] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1150), 1,
      anon_sym_else,
    ACTIONS(1152), 1,
      anon_sym_end,
    STATE(436), 1,
      sym_comment,
    STATE(480), 1,
      aux_sym_alt_block_repeat1,
  [14074] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1154), 1,
      ts_builtin_sym_end,
    STATE(437), 1,
      sym_comment,
    STATE(451), 1,
      aux_sym_json_repeat2,
  [14093] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1156), 1,
      ts_builtin_sym_end,
    STATE(438), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [14112] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1158), 1,
      ts_builtin_sym_end,
    STATE(439), 1,
      sym_comment,
    STATE(463), 1,
      aux_sym_json_repeat2,
  [14131] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1150), 1,
      anon_sym_else,
    ACTIONS(1160), 1,
      anon_sym_end,
    STATE(440), 1,
      sym_comment,
    STATE(480), 1,
      aux_sym_alt_block_repeat1,
  [14150] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1162), 1,
      ts_builtin_sym_end,
    STATE(441), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [14169] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1164), 1,
      ts_builtin_sym_end,
    STATE(442), 1,
      sym_comment,
    STATE(464), 1,
      aux_sym_json_repeat2,
  [14188] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1166), 1,
      ts_builtin_sym_end,
    STATE(424), 1,
      aux_sym_json_repeat2,
    STATE(443), 1,
      sym_comment,
  [14207] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(444), 1,
      sym_comment,
    ACTIONS(797), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [14222] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1168), 1,
      ts_builtin_sym_end,
    STATE(445), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [14241] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1170), 1,
      ts_builtin_sym_end,
    STATE(438), 1,
      aux_sym_json_repeat2,
    STATE(446), 1,
      sym_comment,
  [14260] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1172), 1,
      ts_builtin_sym_end,
    STATE(447), 1,
      sym_comment,
    STATE(448), 1,
      aux_sym_json_repeat2,
  [14279] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1174), 1,
      ts_builtin_sym_end,
    ACTIONS(1176), 1,
      aux_sym__NEWLINE_token1,
    STATE(448), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [14296] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1179), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(449), 1,
      sym_comment,
  [14315] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1181), 1,
      ts_builtin_sym_end,
    STATE(450), 1,
      sym_comment,
    STATE(466), 1,
      aux_sym_json_repeat2,
  [14334] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1183), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(451), 1,
      sym_comment,
  [14353] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1185), 1,
      ts_builtin_sym_end,
    STATE(452), 1,
      sym_comment,
    STATE(470), 1,
      aux_sym_json_repeat2,
  [14372] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(453), 1,
      sym_comment,
    ACTIONS(1187), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [14387] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
      sym_boolean_literal,
    STATE(454), 1,
      sym_comment,
    ACTIONS(1189), 2,
      anon_sym_true,
      anon_sym_false,
  [14404] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1191), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(455), 1,
      sym_comment,
  [14423] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1193), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(456), 1,
      sym_comment,
  [14442] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1150), 1,
      anon_sym_else,
    ACTIONS(1195), 1,
      anon_sym_end,
    STATE(457), 1,
      sym_comment,
    STATE(480), 1,
      aux_sym_alt_block_repeat1,
  [14461] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1197), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(458), 1,
      sym_comment,
  [14480] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(459), 1,
      sym_comment,
    ACTIONS(1199), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [14495] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1150), 1,
      anon_sym_else,
    ACTIONS(1201), 1,
      anon_sym_end,
    STATE(460), 1,
      sym_comment,
    STATE(480), 1,
      aux_sym_alt_block_repeat1,
  [14514] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(461), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [14529] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1203), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(462), 1,
      sym_comment,
  [14548] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1205), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(463), 1,
      sym_comment,
  [14567] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1207), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(464), 1,
      sym_comment,
  [14586] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1209), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(465), 1,
      sym_comment,
  [14605] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1211), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(466), 1,
      sym_comment,
  [14624] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(467), 1,
      sym_comment,
    ACTIONS(421), 3,
      aux_sym_line_token1,
      anon_sym_endnote,
      anon_sym_endhnote,
  [14639] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(468), 1,
      sym_comment,
    ACTIONS(1213), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [14654] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(205), 1,
      sym_boolean_literal,
    STATE(469), 1,
      sym_comment,
    ACTIONS(1215), 2,
      anon_sym_true,
      anon_sym_false,
  [14671] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1217), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_json_repeat2,
    STATE(470), 1,
      sym_comment,
  [14690] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1219), 1,
      aux_sym__NEWLINE_token1,
    STATE(471), 1,
      sym_comment,
    ACTIONS(1221), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [14707] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(472), 1,
      sym_comment,
    ACTIONS(854), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [14722] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1223), 1,
      ts_builtin_sym_end,
    STATE(441), 1,
      aux_sym_json_repeat2,
    STATE(473), 1,
      sym_comment,
  [14741] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(474), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [14756] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1225), 1,
      ts_builtin_sym_end,
    STATE(415), 1,
      aux_sym_json_repeat2,
    STATE(475), 1,
      sym_comment,
  [14775] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(476), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [14790] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1227), 1,
      ts_builtin_sym_end,
    STATE(430), 1,
      aux_sym_json_repeat2,
    STATE(477), 1,
      sym_comment,
  [14809] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(478), 1,
      sym_comment,
    ACTIONS(1229), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [14824] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1150), 1,
      anon_sym_else,
    ACTIONS(1231), 1,
      anon_sym_end,
    STATE(479), 1,
      sym_comment,
    STATE(480), 1,
      aux_sym_alt_block_repeat1,
  [14843] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1233), 1,
      anon_sym_else,
    ACTIONS(1236), 1,
      anon_sym_end,
    STATE(480), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [14860] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(481), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [14875] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(482), 1,
      sym_comment,
    ACTIONS(1116), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [14890] = 6,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1114), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1238), 1,
      ts_builtin_sym_end,
    STATE(420), 1,
      aux_sym_json_repeat2,
    STATE(483), 1,
      sym_comment,
  [14909] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(484), 1,
      sym_comment,
    ACTIONS(1240), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [14924] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(485), 1,
      sym_comment,
    ACTIONS(1242), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [14939] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1150), 1,
      anon_sym_else,
    ACTIONS(1244), 1,
      anon_sym_end,
    STATE(480), 1,
      aux_sym_alt_block_repeat1,
    STATE(486), 1,
      sym_comment,
  [14958] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(487), 1,
      sym_comment,
    ACTIONS(561), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [14972] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1028), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      anon_sym_COLON,
    STATE(488), 1,
      sym_comment,
  [14988] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1246), 1,
      aux_sym_line_token1,
    STATE(182), 1,
      sym_line,
    STATE(489), 1,
      sym_comment,
  [15004] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1248), 1,
      anon_sym_POUND,
    ACTIONS(1250), 1,
      anon_sym_COLON,
    STATE(490), 1,
      sym_comment,
  [15020] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(491), 1,
      sym_comment,
    ACTIONS(593), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15034] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1252), 1,
      aux_sym_line_token1,
    STATE(198), 1,
      sym_line,
    STATE(492), 1,
      sym_comment,
  [15050] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(493), 1,
      sym_comment,
    ACTIONS(577), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15064] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1246), 1,
      aux_sym_line_token1,
    STATE(187), 1,
      sym_line,
    STATE(494), 1,
      sym_comment,
  [15080] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1254), 1,
      anon_sym_DASH,
    ACTIONS(1256), 1,
      anon_sym_DASH_DASH,
    STATE(495), 1,
      sym_comment,
  [15096] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1252), 1,
      aux_sym_line_token1,
    STATE(193), 1,
      sym_line,
    STATE(496), 1,
      sym_comment,
  [15112] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1246), 1,
      aux_sym_line_token1,
    STATE(191), 1,
      sym_line,
    STATE(497), 1,
      sym_comment,
  [15128] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1246), 1,
      aux_sym_line_token1,
    STATE(192), 1,
      sym_line,
    STATE(498), 1,
      sym_comment,
  [15144] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1258), 1,
      aux_sym__NEWLINE_token1,
    STATE(199), 1,
      sym__NEWLINE,
    STATE(499), 1,
      sym_comment,
  [15160] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1252), 1,
      aux_sym_line_token1,
    STATE(132), 1,
      sym_line,
    STATE(500), 1,
      sym_comment,
  [15176] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(501), 1,
      sym_comment,
    ACTIONS(421), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [15190] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1260), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1262), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(502), 1,
      sym_comment,
  [15206] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(503), 1,
      sym_comment,
    ACTIONS(569), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15220] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1264), 1,
      aux_sym_line_token1,
    STATE(130), 1,
      sym_line,
    STATE(504), 1,
      sym_comment,
  [15236] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(505), 1,
      sym_comment,
    ACTIONS(429), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [15250] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1266), 1,
      aux_sym_label_token1,
    STATE(4), 1,
      sym_label,
    STATE(506), 1,
      sym_comment,
  [15266] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1268), 1,
      aux_sym_label_token1,
    STATE(16), 1,
      sym_label,
    STATE(507), 1,
      sym_comment,
  [15282] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1268), 1,
      aux_sym_label_token1,
    STATE(17), 1,
      sym_label,
    STATE(508), 1,
      sym_comment,
  [15298] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1270), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1272), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(509), 1,
      sym_comment,
  [15314] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1252), 1,
      aux_sym_line_token1,
    STATE(200), 1,
      sym_line,
    STATE(510), 1,
      sym_comment,
  [15330] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1264), 1,
      aux_sym_line_token1,
    STATE(117), 1,
      sym_line,
    STATE(511), 1,
      sym_comment,
  [15346] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1274), 1,
      anon_sym_POUND,
    ACTIONS(1276), 1,
      anon_sym_COLON,
    STATE(512), 1,
      sym_comment,
  [15362] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1048), 1,
      anon_sym_POUND,
    ACTIONS(1050), 1,
      anon_sym_COLON,
    STATE(513), 1,
      sym_comment,
  [15378] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1278), 1,
      aux_sym__NEWLINE_token1,
    STATE(145), 1,
      sym__NEWLINE,
    STATE(514), 1,
      sym_comment,
  [15394] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1252), 1,
      aux_sym_line_token1,
    STATE(162), 1,
      sym_line,
    STATE(515), 1,
      sym_comment,
  [15410] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1266), 1,
      aux_sym_label_token1,
    STATE(5), 1,
      sym_label,
    STATE(516), 1,
      sym_comment,
  [15426] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1268), 1,
      aux_sym_label_token1,
    STATE(22), 1,
      sym_label,
    STATE(517), 1,
      sym_comment,
  [15442] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1268), 1,
      aux_sym_label_token1,
    STATE(23), 1,
      sym_label,
    STATE(518), 1,
      sym_comment,
  [15458] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1280), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1282), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(519), 1,
      sym_comment,
  [15474] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1284), 1,
      anon_sym_POUND,
    ACTIONS(1286), 1,
      anon_sym_COLON,
    STATE(520), 1,
      sym_comment,
  [15490] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1068), 1,
      anon_sym_POUND,
    ACTIONS(1070), 1,
      anon_sym_COLON,
    STATE(521), 1,
      sym_comment,
  [15506] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      aux_sym__NEWLINE_token1,
    STATE(426), 1,
      sym__NEWLINE,
    STATE(522), 1,
      sym_comment,
  [15522] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(523), 1,
      sym_comment,
    ACTIONS(1288), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15536] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1264), 1,
      aux_sym_line_token1,
    STATE(111), 1,
      sym_line,
    STATE(524), 1,
      sym_comment,
  [15552] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1246), 1,
      aux_sym_line_token1,
    STATE(164), 1,
      sym_line,
    STATE(525), 1,
      sym_comment,
  [15568] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1290), 1,
      anon_sym_DASH,
    ACTIONS(1292), 1,
      anon_sym_DASH_DASH,
    STATE(526), 1,
      sym_comment,
  [15584] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1266), 1,
      aux_sym_label_token1,
    STATE(3), 1,
      sym_label,
    STATE(527), 1,
      sym_comment,
  [15600] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1264), 1,
      aux_sym_line_token1,
    STATE(97), 1,
      sym_line,
    STATE(528), 1,
      sym_comment,
  [15616] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(637), 1,
      aux_sym__NEWLINE_token1,
    STATE(505), 1,
      sym__NEWLINE,
    STATE(529), 1,
      sym_comment,
  [15632] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1266), 1,
      aux_sym_label_token1,
    STATE(9), 1,
      sym_label,
    STATE(530), 1,
      sym_comment,
  [15648] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1268), 1,
      aux_sym_label_token1,
    STATE(14), 1,
      sym_label,
    STATE(531), 1,
      sym_comment,
  [15664] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1268), 1,
      aux_sym_label_token1,
    STATE(24), 1,
      sym_label,
    STATE(532), 1,
      sym_comment,
  [15680] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1264), 1,
      aux_sym_line_token1,
    STATE(115), 1,
      sym_line,
    STATE(533), 1,
      sym_comment,
  [15696] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1246), 1,
      aux_sym_line_token1,
    STATE(176), 1,
      sym_line,
    STATE(534), 1,
      sym_comment,
  [15712] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1252), 1,
      aux_sym_line_token1,
    STATE(144), 1,
      sym_line,
    STATE(535), 1,
      sym_comment,
  [15728] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(536), 1,
      sym_comment,
    ACTIONS(1132), 2,
      aux_sym_line_token1,
      anon_sym_endrnote,
  [15742] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(537), 1,
      sym_comment,
    ACTIONS(781), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15756] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1294), 1,
      aux_sym__NEWLINE_token1,
    STATE(100), 1,
      sym__NEWLINE,
    STATE(538), 1,
      sym_comment,
  [15772] = 5,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1264), 1,
      aux_sym_line_token1,
    STATE(116), 1,
      sym_line,
    STATE(539), 1,
      sym_comment,
  [15788] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(540), 1,
      sym_comment,
    ACTIONS(1296), 2,
      ts_builtin_sym_end,
      aux_sym__NEWLINE_token1,
  [15802] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(541), 1,
      sym_comment,
    ACTIONS(829), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [15816] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1298), 1,
      sym_color,
    STATE(542), 1,
      sym_comment,
  [15829] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1300), 1,
      aux_sym__NEWLINE_token1,
    STATE(543), 1,
      sym_comment,
  [15842] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1302), 1,
      ts_builtin_sym_end,
    STATE(544), 1,
      sym_comment,
  [15855] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1304), 1,
      sym_color,
    STATE(545), 1,
      sym_comment,
  [15868] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1306), 1,
      sym_color,
    STATE(546), 1,
      sym_comment,
  [15881] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1308), 1,
      aux_sym_attr_alias_token1,
    STATE(547), 1,
      sym_comment,
  [15894] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1310), 1,
      aux_sym_attribute_token3,
    STATE(548), 1,
      sym_comment,
  [15907] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1312), 1,
      aux_sym_attr_alias_token1,
    STATE(549), 1,
      sym_comment,
  [15920] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1314), 1,
      aux_sym_sequence_diagram_token1,
    STATE(550), 1,
      sym_comment,
  [15933] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1316), 1,
      aux_sym_attribute_token3,
    STATE(551), 1,
      sym_comment,
  [15946] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1318), 1,
      anon_sym_RBRACK,
    STATE(552), 1,
      sym_comment,
  [15959] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1320), 1,
      aux_sym_escape_char_token1,
    STATE(553), 1,
      sym_comment,
  [15972] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1322), 1,
      aux_sym_custom_label_token1,
    STATE(554), 1,
      sym_comment,
  [15985] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1324), 1,
      sym_color,
    STATE(555), 1,
      sym_comment,
  [15998] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(821), 1,
      aux_sym__NEWLINE_token1,
    STATE(556), 1,
      sym_comment,
  [16011] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1326), 1,
      anon_sym_COLON,
    STATE(557), 1,
      sym_comment,
  [16024] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1328), 1,
      ts_builtin_sym_end,
    STATE(558), 1,
      sym_comment,
  [16037] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_COLON,
    STATE(559), 1,
      sym_comment,
  [16050] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1054), 1,
      anon_sym_COLON,
    STATE(560), 1,
      sym_comment,
  [16063] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1330), 1,
      sym_color,
    STATE(561), 1,
      sym_comment,
  [16076] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1332), 1,
      sym_color,
    STATE(562), 1,
      sym_comment,
  [16089] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1060), 1,
      anon_sym_COLON,
    STATE(563), 1,
      sym_comment,
  [16102] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1334), 1,
      anon_sym_RBRACK,
    STATE(564), 1,
      sym_comment,
  [16115] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1336), 1,
      anon_sym_COLON,
    STATE(565), 1,
      sym_comment,
  [16128] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1338), 1,
      anon_sym_COLON,
    STATE(566), 1,
      sym_comment,
  [16141] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1340), 1,
      aux_sym_sequence_diagram_token1,
    STATE(567), 1,
      sym_comment,
  [16154] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1342), 1,
      aux_sym_sequence_diagram_token1,
    STATE(568), 1,
      sym_comment,
  [16167] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(882), 1,
      anon_sym_COLON,
    STATE(569), 1,
      sym_comment,
  [16180] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1344), 1,
      sym_color,
    STATE(570), 1,
      sym_comment,
  [16193] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1346), 1,
      anon_sym_SLASH,
    STATE(571), 1,
      sym_comment,
  [16206] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1348), 1,
      aux_sym_attribute_token3,
    STATE(572), 1,
      sym_comment,
  [16219] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1350), 1,
      aux_sym_escape_char_token1,
    STATE(573), 1,
      sym_comment,
  [16232] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1352), 1,
      sym_color,
    STATE(574), 1,
      sym_comment,
  [16245] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(769), 1,
      aux_sym__NEWLINE_token1,
    STATE(575), 1,
      sym_comment,
  [16258] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1354), 1,
      aux_sym_sequence_diagram_token1,
    STATE(576), 1,
      sym_comment,
  [16271] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1356), 1,
      aux_sym_attribute_token2,
    STATE(577), 1,
      sym_comment,
  [16284] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1358), 1,
      ts_builtin_sym_end,
    STATE(578), 1,
      sym_comment,
  [16297] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1360), 1,
      aux_sym_sequence_diagram_token1,
    STATE(579), 1,
      sym_comment,
  [16310] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1074), 1,
      anon_sym_COLON,
    STATE(580), 1,
      sym_comment,
  [16323] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1362), 1,
      anon_sym_RBRACK,
    STATE(581), 1,
      sym_comment,
  [16336] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1364), 1,
      anon_sym_COLON,
    STATE(582), 1,
      sym_comment,
  [16349] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(763), 1,
      aux_sym__NEWLINE_token1,
    STATE(583), 1,
      sym_comment,
  [16362] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1078), 1,
      anon_sym_COLON,
    STATE(584), 1,
      sym_comment,
  [16375] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1366), 1,
      aux_sym_attr_alias_token1,
    STATE(585), 1,
      sym_comment,
  [16388] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1368), 1,
      anon_sym_COLON,
    STATE(586), 1,
      sym_comment,
  [16401] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1370), 1,
      anon_sym_COLON,
    STATE(587), 1,
      sym_comment,
  [16414] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(325), 1,
      aux_sym_attribute_token2,
    STATE(588), 1,
      sym_comment,
  [16427] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1372), 1,
      sym_color,
    STATE(589), 1,
      sym_comment,
  [16440] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1374), 1,
      sym_color,
    STATE(590), 1,
      sym_comment,
  [16453] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_attribute_token2,
    STATE(591), 1,
      sym_comment,
  [16466] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1376), 1,
      aux_sym_attr_alias_token1,
    STATE(592), 1,
      sym_comment,
  [16479] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1378), 1,
      aux_sym_attribute_token2,
    STATE(593), 1,
      sym_comment,
  [16492] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1380), 1,
      aux_sym_sequence_diagram_token1,
    STATE(594), 1,
      sym_comment,
  [16505] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1382), 1,
      sym_color,
    STATE(595), 1,
      sym_comment,
  [16518] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1384), 1,
      sym_color,
    STATE(596), 1,
      sym_comment,
  [16531] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1386), 1,
      sym_color,
    STATE(597), 1,
      sym_comment,
  [16544] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1388), 1,
      aux_sym__NEWLINE_token1,
    STATE(598), 1,
      sym_comment,
  [16557] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1390), 1,
      aux_sym__NEWLINE_token1,
    STATE(599), 1,
      sym_comment,
  [16570] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1392), 1,
      sym_color,
    STATE(600), 1,
      sym_comment,
  [16583] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1394), 1,
      aux_sym_attr_alias_token1,
    STATE(601), 1,
      sym_comment,
  [16596] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1396), 1,
      ts_builtin_sym_end,
    STATE(602), 1,
      sym_comment,
  [16609] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1398), 1,
      anon_sym_RBRACK,
    STATE(603), 1,
      sym_comment,
  [16622] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1400), 1,
      aux_sym_comment_token2,
    STATE(604), 1,
      sym_comment,
  [16635] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1402), 1,
      anon_sym_RBRACK,
    STATE(605), 1,
      sym_comment,
  [16648] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1404), 1,
      aux_sym_attr_alias_token1,
    STATE(606), 1,
      sym_comment,
  [16661] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1406), 1,
      sym_color,
    STATE(607), 1,
      sym_comment,
  [16674] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1408), 1,
      sym_color,
    STATE(608), 1,
      sym_comment,
  [16687] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1410), 1,
      sym_color,
    STATE(609), 1,
      sym_comment,
  [16700] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1412), 1,
      sym_color,
    STATE(610), 1,
      sym_comment,
  [16713] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1414), 1,
      aux_sym_attribute_token2,
    STATE(611), 1,
      sym_comment,
  [16726] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1416), 1,
      aux_sym_comment_token1,
    STATE(612), 1,
      sym_comment,
  [16739] = 4,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    ACTIONS(607), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1418), 1,
      aux_sym_custom_label_token1,
    STATE(613), 1,
      sym_comment,
  [16752] = 1,
    ACTIONS(1420), 1,
      ts_builtin_sym_end,
  [16756] = 1,
    ACTIONS(1422), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 178,
  [SMALL_STATE(5)] = 267,
  [SMALL_STATE(6)] = 356,
  [SMALL_STATE(7)] = 445,
  [SMALL_STATE(8)] = 534,
  [SMALL_STATE(9)] = 618,
  [SMALL_STATE(10)] = 702,
  [SMALL_STATE(11)] = 784,
  [SMALL_STATE(12)] = 867,
  [SMALL_STATE(13)] = 948,
  [SMALL_STATE(14)] = 1029,
  [SMALL_STATE(15)] = 1112,
  [SMALL_STATE(16)] = 1195,
  [SMALL_STATE(17)] = 1278,
  [SMALL_STATE(18)] = 1361,
  [SMALL_STATE(19)] = 1444,
  [SMALL_STATE(20)] = 1527,
  [SMALL_STATE(21)] = 1610,
  [SMALL_STATE(22)] = 1693,
  [SMALL_STATE(23)] = 1776,
  [SMALL_STATE(24)] = 1859,
  [SMALL_STATE(25)] = 1942,
  [SMALL_STATE(26)] = 2025,
  [SMALL_STATE(27)] = 2108,
  [SMALL_STATE(28)] = 2166,
  [SMALL_STATE(29)] = 2223,
  [SMALL_STATE(30)] = 2280,
  [SMALL_STATE(31)] = 2332,
  [SMALL_STATE(32)] = 2382,
  [SMALL_STATE(33)] = 2434,
  [SMALL_STATE(34)] = 2486,
  [SMALL_STATE(35)] = 2537,
  [SMALL_STATE(36)] = 2588,
  [SMALL_STATE(37)] = 2639,
  [SMALL_STATE(38)] = 2690,
  [SMALL_STATE(39)] = 2739,
  [SMALL_STATE(40)] = 2790,
  [SMALL_STATE(41)] = 2839,
  [SMALL_STATE(42)] = 2890,
  [SMALL_STATE(43)] = 2930,
  [SMALL_STATE(44)] = 2970,
  [SMALL_STATE(45)] = 3010,
  [SMALL_STATE(46)] = 3049,
  [SMALL_STATE(47)] = 3088,
  [SMALL_STATE(48)] = 3127,
  [SMALL_STATE(49)] = 3172,
  [SMALL_STATE(50)] = 3211,
  [SMALL_STATE(51)] = 3250,
  [SMALL_STATE(52)] = 3289,
  [SMALL_STATE(53)] = 3328,
  [SMALL_STATE(54)] = 3367,
  [SMALL_STATE(55)] = 3406,
  [SMALL_STATE(56)] = 3445,
  [SMALL_STATE(57)] = 3484,
  [SMALL_STATE(58)] = 3523,
  [SMALL_STATE(59)] = 3561,
  [SMALL_STATE(60)] = 3605,
  [SMALL_STATE(61)] = 3643,
  [SMALL_STATE(62)] = 3681,
  [SMALL_STATE(63)] = 3719,
  [SMALL_STATE(64)] = 3761,
  [SMALL_STATE(65)] = 3799,
  [SMALL_STATE(66)] = 3837,
  [SMALL_STATE(67)] = 3875,
  [SMALL_STATE(68)] = 3913,
  [SMALL_STATE(69)] = 3957,
  [SMALL_STATE(70)] = 3995,
  [SMALL_STATE(71)] = 4033,
  [SMALL_STATE(72)] = 4071,
  [SMALL_STATE(73)] = 4109,
  [SMALL_STATE(74)] = 4147,
  [SMALL_STATE(75)] = 4185,
  [SMALL_STATE(76)] = 4223,
  [SMALL_STATE(77)] = 4262,
  [SMALL_STATE(78)] = 4299,
  [SMALL_STATE(79)] = 4336,
  [SMALL_STATE(80)] = 4373,
  [SMALL_STATE(81)] = 4410,
  [SMALL_STATE(82)] = 4447,
  [SMALL_STATE(83)] = 4484,
  [SMALL_STATE(84)] = 4521,
  [SMALL_STATE(85)] = 4562,
  [SMALL_STATE(86)] = 4598,
  [SMALL_STATE(87)] = 4634,
  [SMALL_STATE(88)] = 4670,
  [SMALL_STATE(89)] = 4706,
  [SMALL_STATE(90)] = 4742,
  [SMALL_STATE(91)] = 4778,
  [SMALL_STATE(92)] = 4814,
  [SMALL_STATE(93)] = 4850,
  [SMALL_STATE(94)] = 4886,
  [SMALL_STATE(95)] = 4922,
  [SMALL_STATE(96)] = 4960,
  [SMALL_STATE(97)] = 4996,
  [SMALL_STATE(98)] = 5032,
  [SMALL_STATE(99)] = 5068,
  [SMALL_STATE(100)] = 5104,
  [SMALL_STATE(101)] = 5140,
  [SMALL_STATE(102)] = 5176,
  [SMALL_STATE(103)] = 5212,
  [SMALL_STATE(104)] = 5248,
  [SMALL_STATE(105)] = 5284,
  [SMALL_STATE(106)] = 5320,
  [SMALL_STATE(107)] = 5356,
  [SMALL_STATE(108)] = 5392,
  [SMALL_STATE(109)] = 5428,
  [SMALL_STATE(110)] = 5464,
  [SMALL_STATE(111)] = 5500,
  [SMALL_STATE(112)] = 5536,
  [SMALL_STATE(113)] = 5572,
  [SMALL_STATE(114)] = 5608,
  [SMALL_STATE(115)] = 5644,
  [SMALL_STATE(116)] = 5680,
  [SMALL_STATE(117)] = 5716,
  [SMALL_STATE(118)] = 5752,
  [SMALL_STATE(119)] = 5790,
  [SMALL_STATE(120)] = 5826,
  [SMALL_STATE(121)] = 5862,
  [SMALL_STATE(122)] = 5898,
  [SMALL_STATE(123)] = 5934,
  [SMALL_STATE(124)] = 5970,
  [SMALL_STATE(125)] = 6006,
  [SMALL_STATE(126)] = 6042,
  [SMALL_STATE(127)] = 6078,
  [SMALL_STATE(128)] = 6114,
  [SMALL_STATE(129)] = 6150,
  [SMALL_STATE(130)] = 6186,
  [SMALL_STATE(131)] = 6222,
  [SMALL_STATE(132)] = 6257,
  [SMALL_STATE(133)] = 6292,
  [SMALL_STATE(134)] = 6327,
  [SMALL_STATE(135)] = 6362,
  [SMALL_STATE(136)] = 6397,
  [SMALL_STATE(137)] = 6432,
  [SMALL_STATE(138)] = 6467,
  [SMALL_STATE(139)] = 6502,
  [SMALL_STATE(140)] = 6537,
  [SMALL_STATE(141)] = 6572,
  [SMALL_STATE(142)] = 6607,
  [SMALL_STATE(143)] = 6642,
  [SMALL_STATE(144)] = 6677,
  [SMALL_STATE(145)] = 6712,
  [SMALL_STATE(146)] = 6747,
  [SMALL_STATE(147)] = 6782,
  [SMALL_STATE(148)] = 6817,
  [SMALL_STATE(149)] = 6852,
  [SMALL_STATE(150)] = 6887,
  [SMALL_STATE(151)] = 6922,
  [SMALL_STATE(152)] = 6957,
  [SMALL_STATE(153)] = 6992,
  [SMALL_STATE(154)] = 7027,
  [SMALL_STATE(155)] = 7062,
  [SMALL_STATE(156)] = 7097,
  [SMALL_STATE(157)] = 7132,
  [SMALL_STATE(158)] = 7167,
  [SMALL_STATE(159)] = 7202,
  [SMALL_STATE(160)] = 7237,
  [SMALL_STATE(161)] = 7272,
  [SMALL_STATE(162)] = 7307,
  [SMALL_STATE(163)] = 7342,
  [SMALL_STATE(164)] = 7377,
  [SMALL_STATE(165)] = 7412,
  [SMALL_STATE(166)] = 7447,
  [SMALL_STATE(167)] = 7482,
  [SMALL_STATE(168)] = 7517,
  [SMALL_STATE(169)] = 7552,
  [SMALL_STATE(170)] = 7587,
  [SMALL_STATE(171)] = 7622,
  [SMALL_STATE(172)] = 7657,
  [SMALL_STATE(173)] = 7692,
  [SMALL_STATE(174)] = 7727,
  [SMALL_STATE(175)] = 7762,
  [SMALL_STATE(176)] = 7797,
  [SMALL_STATE(177)] = 7832,
  [SMALL_STATE(178)] = 7867,
  [SMALL_STATE(179)] = 7902,
  [SMALL_STATE(180)] = 7937,
  [SMALL_STATE(181)] = 7972,
  [SMALL_STATE(182)] = 8007,
  [SMALL_STATE(183)] = 8042,
  [SMALL_STATE(184)] = 8077,
  [SMALL_STATE(185)] = 8112,
  [SMALL_STATE(186)] = 8147,
  [SMALL_STATE(187)] = 8182,
  [SMALL_STATE(188)] = 8217,
  [SMALL_STATE(189)] = 8252,
  [SMALL_STATE(190)] = 8287,
  [SMALL_STATE(191)] = 8322,
  [SMALL_STATE(192)] = 8357,
  [SMALL_STATE(193)] = 8392,
  [SMALL_STATE(194)] = 8427,
  [SMALL_STATE(195)] = 8462,
  [SMALL_STATE(196)] = 8497,
  [SMALL_STATE(197)] = 8532,
  [SMALL_STATE(198)] = 8567,
  [SMALL_STATE(199)] = 8602,
  [SMALL_STATE(200)] = 8637,
  [SMALL_STATE(201)] = 8672,
  [SMALL_STATE(202)] = 8707,
  [SMALL_STATE(203)] = 8742,
  [SMALL_STATE(204)] = 8777,
  [SMALL_STATE(205)] = 8812,
  [SMALL_STATE(206)] = 8847,
  [SMALL_STATE(207)] = 8882,
  [SMALL_STATE(208)] = 8917,
  [SMALL_STATE(209)] = 8952,
  [SMALL_STATE(210)] = 8987,
  [SMALL_STATE(211)] = 9022,
  [SMALL_STATE(212)] = 9057,
  [SMALL_STATE(213)] = 9092,
  [SMALL_STATE(214)] = 9120,
  [SMALL_STATE(215)] = 9148,
  [SMALL_STATE(216)] = 9176,
  [SMALL_STATE(217)] = 9212,
  [SMALL_STATE(218)] = 9248,
  [SMALL_STATE(219)] = 9284,
  [SMALL_STATE(220)] = 9311,
  [SMALL_STATE(221)] = 9338,
  [SMALL_STATE(222)] = 9365,
  [SMALL_STATE(223)] = 9392,
  [SMALL_STATE(224)] = 9416,
  [SMALL_STATE(225)] = 9440,
  [SMALL_STATE(226)] = 9464,
  [SMALL_STATE(227)] = 9488,
  [SMALL_STATE(228)] = 9517,
  [SMALL_STATE(229)] = 9546,
  [SMALL_STATE(230)] = 9569,
  [SMALL_STATE(231)] = 9598,
  [SMALL_STATE(232)] = 9621,
  [SMALL_STATE(233)] = 9649,
  [SMALL_STATE(234)] = 9677,
  [SMALL_STATE(235)] = 9705,
  [SMALL_STATE(236)] = 9725,
  [SMALL_STATE(237)] = 9753,
  [SMALL_STATE(238)] = 9779,
  [SMALL_STATE(239)] = 9807,
  [SMALL_STATE(240)] = 9833,
  [SMALL_STATE(241)] = 9859,
  [SMALL_STATE(242)] = 9885,
  [SMALL_STATE(243)] = 9905,
  [SMALL_STATE(244)] = 9931,
  [SMALL_STATE(245)] = 9955,
  [SMALL_STATE(246)] = 9981,
  [SMALL_STATE(247)] = 10009,
  [SMALL_STATE(248)] = 10035,
  [SMALL_STATE(249)] = 10061,
  [SMALL_STATE(250)] = 10087,
  [SMALL_STATE(251)] = 10113,
  [SMALL_STATE(252)] = 10139,
  [SMALL_STATE(253)] = 10165,
  [SMALL_STATE(254)] = 10191,
  [SMALL_STATE(255)] = 10217,
  [SMALL_STATE(256)] = 10243,
  [SMALL_STATE(257)] = 10269,
  [SMALL_STATE(258)] = 10295,
  [SMALL_STATE(259)] = 10321,
  [SMALL_STATE(260)] = 10349,
  [SMALL_STATE(261)] = 10377,
  [SMALL_STATE(262)] = 10405,
  [SMALL_STATE(263)] = 10433,
  [SMALL_STATE(264)] = 10461,
  [SMALL_STATE(265)] = 10489,
  [SMALL_STATE(266)] = 10509,
  [SMALL_STATE(267)] = 10534,
  [SMALL_STATE(268)] = 10559,
  [SMALL_STATE(269)] = 10584,
  [SMALL_STATE(270)] = 10609,
  [SMALL_STATE(271)] = 10634,
  [SMALL_STATE(272)] = 10655,
  [SMALL_STATE(273)] = 10680,
  [SMALL_STATE(274)] = 10705,
  [SMALL_STATE(275)] = 10730,
  [SMALL_STATE(276)] = 10755,
  [SMALL_STATE(277)] = 10780,
  [SMALL_STATE(278)] = 10805,
  [SMALL_STATE(279)] = 10830,
  [SMALL_STATE(280)] = 10853,
  [SMALL_STATE(281)] = 10878,
  [SMALL_STATE(282)] = 10899,
  [SMALL_STATE(283)] = 10924,
  [SMALL_STATE(284)] = 10949,
  [SMALL_STATE(285)] = 10970,
  [SMALL_STATE(286)] = 10991,
  [SMALL_STATE(287)] = 11016,
  [SMALL_STATE(288)] = 11041,
  [SMALL_STATE(289)] = 11066,
  [SMALL_STATE(290)] = 11091,
  [SMALL_STATE(291)] = 11116,
  [SMALL_STATE(292)] = 11137,
  [SMALL_STATE(293)] = 11162,
  [SMALL_STATE(294)] = 11187,
  [SMALL_STATE(295)] = 11208,
  [SMALL_STATE(296)] = 11229,
  [SMALL_STATE(297)] = 11250,
  [SMALL_STATE(298)] = 11275,
  [SMALL_STATE(299)] = 11300,
  [SMALL_STATE(300)] = 11325,
  [SMALL_STATE(301)] = 11346,
  [SMALL_STATE(302)] = 11371,
  [SMALL_STATE(303)] = 11396,
  [SMALL_STATE(304)] = 11418,
  [SMALL_STATE(305)] = 11438,
  [SMALL_STATE(306)] = 11458,
  [SMALL_STATE(307)] = 11478,
  [SMALL_STATE(308)] = 11494,
  [SMALL_STATE(309)] = 11514,
  [SMALL_STATE(310)] = 11534,
  [SMALL_STATE(311)] = 11554,
  [SMALL_STATE(312)] = 11574,
  [SMALL_STATE(313)] = 11592,
  [SMALL_STATE(314)] = 11612,
  [SMALL_STATE(315)] = 11630,
  [SMALL_STATE(316)] = 11652,
  [SMALL_STATE(317)] = 11670,
  [SMALL_STATE(318)] = 11690,
  [SMALL_STATE(319)] = 11710,
  [SMALL_STATE(320)] = 11732,
  [SMALL_STATE(321)] = 11752,
  [SMALL_STATE(322)] = 11772,
  [SMALL_STATE(323)] = 11794,
  [SMALL_STATE(324)] = 11816,
  [SMALL_STATE(325)] = 11838,
  [SMALL_STATE(326)] = 11858,
  [SMALL_STATE(327)] = 11878,
  [SMALL_STATE(328)] = 11896,
  [SMALL_STATE(329)] = 11918,
  [SMALL_STATE(330)] = 11940,
  [SMALL_STATE(331)] = 11962,
  [SMALL_STATE(332)] = 11984,
  [SMALL_STATE(333)] = 12006,
  [SMALL_STATE(334)] = 12026,
  [SMALL_STATE(335)] = 12046,
  [SMALL_STATE(336)] = 12068,
  [SMALL_STATE(337)] = 12090,
  [SMALL_STATE(338)] = 12106,
  [SMALL_STATE(339)] = 12124,
  [SMALL_STATE(340)] = 12142,
  [SMALL_STATE(341)] = 12160,
  [SMALL_STATE(342)] = 12182,
  [SMALL_STATE(343)] = 12204,
  [SMALL_STATE(344)] = 12226,
  [SMALL_STATE(345)] = 12244,
  [SMALL_STATE(346)] = 12262,
  [SMALL_STATE(347)] = 12280,
  [SMALL_STATE(348)] = 12298,
  [SMALL_STATE(349)] = 12316,
  [SMALL_STATE(350)] = 12334,
  [SMALL_STATE(351)] = 12352,
  [SMALL_STATE(352)] = 12370,
  [SMALL_STATE(353)] = 12392,
  [SMALL_STATE(354)] = 12414,
  [SMALL_STATE(355)] = 12436,
  [SMALL_STATE(356)] = 12458,
  [SMALL_STATE(357)] = 12480,
  [SMALL_STATE(358)] = 12502,
  [SMALL_STATE(359)] = 12524,
  [SMALL_STATE(360)] = 12546,
  [SMALL_STATE(361)] = 12568,
  [SMALL_STATE(362)] = 12590,
  [SMALL_STATE(363)] = 12612,
  [SMALL_STATE(364)] = 12634,
  [SMALL_STATE(365)] = 12656,
  [SMALL_STATE(366)] = 12678,
  [SMALL_STATE(367)] = 12696,
  [SMALL_STATE(368)] = 12718,
  [SMALL_STATE(369)] = 12740,
  [SMALL_STATE(370)] = 12762,
  [SMALL_STATE(371)] = 12784,
  [SMALL_STATE(372)] = 12802,
  [SMALL_STATE(373)] = 12824,
  [SMALL_STATE(374)] = 12846,
  [SMALL_STATE(375)] = 12868,
  [SMALL_STATE(376)] = 12886,
  [SMALL_STATE(377)] = 12908,
  [SMALL_STATE(378)] = 12930,
  [SMALL_STATE(379)] = 12952,
  [SMALL_STATE(380)] = 12972,
  [SMALL_STATE(381)] = 12992,
  [SMALL_STATE(382)] = 13012,
  [SMALL_STATE(383)] = 13034,
  [SMALL_STATE(384)] = 13056,
  [SMALL_STATE(385)] = 13076,
  [SMALL_STATE(386)] = 13098,
  [SMALL_STATE(387)] = 13120,
  [SMALL_STATE(388)] = 13138,
  [SMALL_STATE(389)] = 13158,
  [SMALL_STATE(390)] = 13180,
  [SMALL_STATE(391)] = 13202,
  [SMALL_STATE(392)] = 13222,
  [SMALL_STATE(393)] = 13244,
  [SMALL_STATE(394)] = 13266,
  [SMALL_STATE(395)] = 13288,
  [SMALL_STATE(396)] = 13310,
  [SMALL_STATE(397)] = 13332,
  [SMALL_STATE(398)] = 13354,
  [SMALL_STATE(399)] = 13372,
  [SMALL_STATE(400)] = 13390,
  [SMALL_STATE(401)] = 13408,
  [SMALL_STATE(402)] = 13426,
  [SMALL_STATE(403)] = 13448,
  [SMALL_STATE(404)] = 13470,
  [SMALL_STATE(405)] = 13492,
  [SMALL_STATE(406)] = 13514,
  [SMALL_STATE(407)] = 13532,
  [SMALL_STATE(408)] = 13550,
  [SMALL_STATE(409)] = 13568,
  [SMALL_STATE(410)] = 13586,
  [SMALL_STATE(411)] = 13608,
  [SMALL_STATE(412)] = 13630,
  [SMALL_STATE(413)] = 13652,
  [SMALL_STATE(414)] = 13671,
  [SMALL_STATE(415)] = 13686,
  [SMALL_STATE(416)] = 13705,
  [SMALL_STATE(417)] = 13720,
  [SMALL_STATE(418)] = 13739,
  [SMALL_STATE(419)] = 13758,
  [SMALL_STATE(420)] = 13773,
  [SMALL_STATE(421)] = 13792,
  [SMALL_STATE(422)] = 13807,
  [SMALL_STATE(423)] = 13826,
  [SMALL_STATE(424)] = 13845,
  [SMALL_STATE(425)] = 13864,
  [SMALL_STATE(426)] = 13879,
  [SMALL_STATE(427)] = 13894,
  [SMALL_STATE(428)] = 13909,
  [SMALL_STATE(429)] = 13928,
  [SMALL_STATE(430)] = 13947,
  [SMALL_STATE(431)] = 13966,
  [SMALL_STATE(432)] = 13985,
  [SMALL_STATE(433)] = 14000,
  [SMALL_STATE(434)] = 14017,
  [SMALL_STATE(435)] = 14036,
  [SMALL_STATE(436)] = 14055,
  [SMALL_STATE(437)] = 14074,
  [SMALL_STATE(438)] = 14093,
  [SMALL_STATE(439)] = 14112,
  [SMALL_STATE(440)] = 14131,
  [SMALL_STATE(441)] = 14150,
  [SMALL_STATE(442)] = 14169,
  [SMALL_STATE(443)] = 14188,
  [SMALL_STATE(444)] = 14207,
  [SMALL_STATE(445)] = 14222,
  [SMALL_STATE(446)] = 14241,
  [SMALL_STATE(447)] = 14260,
  [SMALL_STATE(448)] = 14279,
  [SMALL_STATE(449)] = 14296,
  [SMALL_STATE(450)] = 14315,
  [SMALL_STATE(451)] = 14334,
  [SMALL_STATE(452)] = 14353,
  [SMALL_STATE(453)] = 14372,
  [SMALL_STATE(454)] = 14387,
  [SMALL_STATE(455)] = 14404,
  [SMALL_STATE(456)] = 14423,
  [SMALL_STATE(457)] = 14442,
  [SMALL_STATE(458)] = 14461,
  [SMALL_STATE(459)] = 14480,
  [SMALL_STATE(460)] = 14495,
  [SMALL_STATE(461)] = 14514,
  [SMALL_STATE(462)] = 14529,
  [SMALL_STATE(463)] = 14548,
  [SMALL_STATE(464)] = 14567,
  [SMALL_STATE(465)] = 14586,
  [SMALL_STATE(466)] = 14605,
  [SMALL_STATE(467)] = 14624,
  [SMALL_STATE(468)] = 14639,
  [SMALL_STATE(469)] = 14654,
  [SMALL_STATE(470)] = 14671,
  [SMALL_STATE(471)] = 14690,
  [SMALL_STATE(472)] = 14707,
  [SMALL_STATE(473)] = 14722,
  [SMALL_STATE(474)] = 14741,
  [SMALL_STATE(475)] = 14756,
  [SMALL_STATE(476)] = 14775,
  [SMALL_STATE(477)] = 14790,
  [SMALL_STATE(478)] = 14809,
  [SMALL_STATE(479)] = 14824,
  [SMALL_STATE(480)] = 14843,
  [SMALL_STATE(481)] = 14860,
  [SMALL_STATE(482)] = 14875,
  [SMALL_STATE(483)] = 14890,
  [SMALL_STATE(484)] = 14909,
  [SMALL_STATE(485)] = 14924,
  [SMALL_STATE(486)] = 14939,
  [SMALL_STATE(487)] = 14958,
  [SMALL_STATE(488)] = 14972,
  [SMALL_STATE(489)] = 14988,
  [SMALL_STATE(490)] = 15004,
  [SMALL_STATE(491)] = 15020,
  [SMALL_STATE(492)] = 15034,
  [SMALL_STATE(493)] = 15050,
  [SMALL_STATE(494)] = 15064,
  [SMALL_STATE(495)] = 15080,
  [SMALL_STATE(496)] = 15096,
  [SMALL_STATE(497)] = 15112,
  [SMALL_STATE(498)] = 15128,
  [SMALL_STATE(499)] = 15144,
  [SMALL_STATE(500)] = 15160,
  [SMALL_STATE(501)] = 15176,
  [SMALL_STATE(502)] = 15190,
  [SMALL_STATE(503)] = 15206,
  [SMALL_STATE(504)] = 15220,
  [SMALL_STATE(505)] = 15236,
  [SMALL_STATE(506)] = 15250,
  [SMALL_STATE(507)] = 15266,
  [SMALL_STATE(508)] = 15282,
  [SMALL_STATE(509)] = 15298,
  [SMALL_STATE(510)] = 15314,
  [SMALL_STATE(511)] = 15330,
  [SMALL_STATE(512)] = 15346,
  [SMALL_STATE(513)] = 15362,
  [SMALL_STATE(514)] = 15378,
  [SMALL_STATE(515)] = 15394,
  [SMALL_STATE(516)] = 15410,
  [SMALL_STATE(517)] = 15426,
  [SMALL_STATE(518)] = 15442,
  [SMALL_STATE(519)] = 15458,
  [SMALL_STATE(520)] = 15474,
  [SMALL_STATE(521)] = 15490,
  [SMALL_STATE(522)] = 15506,
  [SMALL_STATE(523)] = 15522,
  [SMALL_STATE(524)] = 15536,
  [SMALL_STATE(525)] = 15552,
  [SMALL_STATE(526)] = 15568,
  [SMALL_STATE(527)] = 15584,
  [SMALL_STATE(528)] = 15600,
  [SMALL_STATE(529)] = 15616,
  [SMALL_STATE(530)] = 15632,
  [SMALL_STATE(531)] = 15648,
  [SMALL_STATE(532)] = 15664,
  [SMALL_STATE(533)] = 15680,
  [SMALL_STATE(534)] = 15696,
  [SMALL_STATE(535)] = 15712,
  [SMALL_STATE(536)] = 15728,
  [SMALL_STATE(537)] = 15742,
  [SMALL_STATE(538)] = 15756,
  [SMALL_STATE(539)] = 15772,
  [SMALL_STATE(540)] = 15788,
  [SMALL_STATE(541)] = 15802,
  [SMALL_STATE(542)] = 15816,
  [SMALL_STATE(543)] = 15829,
  [SMALL_STATE(544)] = 15842,
  [SMALL_STATE(545)] = 15855,
  [SMALL_STATE(546)] = 15868,
  [SMALL_STATE(547)] = 15881,
  [SMALL_STATE(548)] = 15894,
  [SMALL_STATE(549)] = 15907,
  [SMALL_STATE(550)] = 15920,
  [SMALL_STATE(551)] = 15933,
  [SMALL_STATE(552)] = 15946,
  [SMALL_STATE(553)] = 15959,
  [SMALL_STATE(554)] = 15972,
  [SMALL_STATE(555)] = 15985,
  [SMALL_STATE(556)] = 15998,
  [SMALL_STATE(557)] = 16011,
  [SMALL_STATE(558)] = 16024,
  [SMALL_STATE(559)] = 16037,
  [SMALL_STATE(560)] = 16050,
  [SMALL_STATE(561)] = 16063,
  [SMALL_STATE(562)] = 16076,
  [SMALL_STATE(563)] = 16089,
  [SMALL_STATE(564)] = 16102,
  [SMALL_STATE(565)] = 16115,
  [SMALL_STATE(566)] = 16128,
  [SMALL_STATE(567)] = 16141,
  [SMALL_STATE(568)] = 16154,
  [SMALL_STATE(569)] = 16167,
  [SMALL_STATE(570)] = 16180,
  [SMALL_STATE(571)] = 16193,
  [SMALL_STATE(572)] = 16206,
  [SMALL_STATE(573)] = 16219,
  [SMALL_STATE(574)] = 16232,
  [SMALL_STATE(575)] = 16245,
  [SMALL_STATE(576)] = 16258,
  [SMALL_STATE(577)] = 16271,
  [SMALL_STATE(578)] = 16284,
  [SMALL_STATE(579)] = 16297,
  [SMALL_STATE(580)] = 16310,
  [SMALL_STATE(581)] = 16323,
  [SMALL_STATE(582)] = 16336,
  [SMALL_STATE(583)] = 16349,
  [SMALL_STATE(584)] = 16362,
  [SMALL_STATE(585)] = 16375,
  [SMALL_STATE(586)] = 16388,
  [SMALL_STATE(587)] = 16401,
  [SMALL_STATE(588)] = 16414,
  [SMALL_STATE(589)] = 16427,
  [SMALL_STATE(590)] = 16440,
  [SMALL_STATE(591)] = 16453,
  [SMALL_STATE(592)] = 16466,
  [SMALL_STATE(593)] = 16479,
  [SMALL_STATE(594)] = 16492,
  [SMALL_STATE(595)] = 16505,
  [SMALL_STATE(596)] = 16518,
  [SMALL_STATE(597)] = 16531,
  [SMALL_STATE(598)] = 16544,
  [SMALL_STATE(599)] = 16557,
  [SMALL_STATE(600)] = 16570,
  [SMALL_STATE(601)] = 16583,
  [SMALL_STATE(602)] = 16596,
  [SMALL_STATE(603)] = 16609,
  [SMALL_STATE(604)] = 16622,
  [SMALL_STATE(605)] = 16635,
  [SMALL_STATE(606)] = 16648,
  [SMALL_STATE(607)] = 16661,
  [SMALL_STATE(608)] = 16674,
  [SMALL_STATE(609)] = 16687,
  [SMALL_STATE(610)] = 16700,
  [SMALL_STATE(611)] = 16713,
  [SMALL_STATE(612)] = 16726,
  [SMALL_STATE(613)] = 16739,
  [SMALL_STATE(614)] = 16752,
  [SMALL_STATE(615)] = 16756,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(509),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(485),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(545),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(547),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(551),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 1),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(546),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(592),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(548),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(562),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(585),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(572),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 15),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 15),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 12),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 12),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 5, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 5, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__NEWLINE, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 5, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 5, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 5, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 5, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 5, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 5, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 6, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 6, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 6, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 6, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 6, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 6, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 7, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 7, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 7, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 7, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 7, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 7, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 7, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 7, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 8, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 8, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 9, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 9, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 4, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 4, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_label, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_label, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_note, 4, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_note, 4, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_hnote, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_hnote, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_rnote, 4, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_rnote, 4, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 6, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 6, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_note_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_note_repeat1, 2, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [868] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_note_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [884] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [965] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [968] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [971] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [974] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1023] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 9),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_note_repeat1, 1, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 4),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 5),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 6),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 7),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 8),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(540),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 2),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 10),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 11),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 3),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 4),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 5),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 6),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 7),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 8),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 9),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 10),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 11),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1302] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
