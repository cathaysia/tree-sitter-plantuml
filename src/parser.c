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
#define STATE_COUNT 500
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 15
#define TOKEN_COUNT 96
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
  anon_sym_loop = 23,
  anon_sym_group = 24,
  anon_sym_skinparam = 25,
  anon_sym_sequenceMessageAlign = 26,
  anon_sym_center = 27,
  anon_sym_responseMessageBelowArrow = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  anon_sym_autonumber = 31,
  anon_sym_inc = 32,
  anon_sym_resume = 33,
  aux_sym_attribute_token1 = 34,
  aux_sym_attribute_token2 = 35,
  aux_sym_attribute_token3 = 36,
  anon_sym_autonumberstop = 37,
  anon_sym_participant = 38,
  anon_sym_actor = 39,
  anon_sym_boundary = 40,
  anon_sym_control = 41,
  anon_sym_entity = 42,
  anon_sym_database = 43,
  anon_sym_collections = 44,
  anon_sym_queue = 45,
  aux_sym_multiline_token1 = 46,
  anon_sym_as = 47,
  aux_sym_attr_alias_token1 = 48,
  anon_sym_order = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_string_token1 = 51,
  anon_sym_BSLASH_DQUOTE = 52,
  anon_sym_BSLASH = 53,
  aux_sym_escape_char_token1 = 54,
  aux_sym_sequence_diagram_token1 = 55,
  anon_sym_DASH = 56,
  anon_sym_GT = 57,
  anon_sym_o = 58,
  anon_sym_x = 59,
  anon_sym_ox = 60,
  anon_sym_GT_GT = 61,
  anon_sym_BSLASH_BSLASH = 62,
  anon_sym_SLASH_SLASH = 63,
  anon_sym_DASH_DASH = 64,
  anon_sym_LBRACK_POUND = 65,
  anon_sym_LT = 66,
  anon_sym_xo = 67,
  anon_sym_LT_LT = 68,
  anon_sym_ATstartjson = 69,
  anon_sym_AT = 70,
  aux_sym_json_token1 = 71,
  anon_sym_ATendjson = 72,
  anon_sym_ATstartyaml = 73,
  anon_sym_ATendyaml = 74,
  anon_sym_ATstartebnf = 75,
  anon_sym_ATendebnf = 76,
  anon_sym_ATstartregex = 77,
  anon_sym_ATendregex = 78,
  anon_sym_ATstartditaa = 79,
  anon_sym_ATendditaa = 80,
  anon_sym_ATstartgantt = 81,
  anon_sym_ATendgantt = 82,
  anon_sym_ATstartchronology = 83,
  anon_sym_ATendchronology = 84,
  anon_sym_ATstartmindmap = 85,
  anon_sym_ATendmindmap = 86,
  anon_sym_ATstartwbs = 87,
  anon_sym_ATendwbs = 88,
  anon_sym_ATstartchen = 89,
  anon_sym_ATendchen = 90,
  anon_sym_SQUOTE = 91,
  aux_sym_comment_token1 = 92,
  anon_sym_SLASH_SQUOTE = 93,
  aux_sym_comment_token2 = 94,
  sym_color = 95,
  sym_diagram = 96,
  sym__NEWLINE = 97,
  sym_uml = 98,
  sym_expression = 99,
  sym_label = 100,
  sym_custom_label = 101,
  sym_alt_block = 102,
  sym_line = 103,
  sym_line_note = 104,
  sym_loop_block = 105,
  sym_group_block = 106,
  sym_skinparam = 107,
  sym_boolean_literal = 108,
  sym_attribute = 109,
  sym_multiline = 110,
  sym_attr_alias = 111,
  sym_attr_order = 112,
  sym_string = 113,
  sym_escape_char = 114,
  sym_participant_name = 115,
  sym_sequence_diagram = 116,
  sym_connector = 117,
  sym_json = 118,
  sym_yaml = 119,
  sym_ebnf = 120,
  sym_regex = 121,
  sym_ditaa = 122,
  sym_gantt = 123,
  sym_chronology = 124,
  sym_mindmap = 125,
  sym_wbs = 126,
  sym_chen = 127,
  sym_comment = 128,
  aux_sym_uml_repeat1 = 129,
  aux_sym_alt_block_repeat1 = 130,
  aux_sym_line_note_repeat1 = 131,
  aux_sym_attribute_repeat1 = 132,
  aux_sym_attribute_repeat2 = 133,
  aux_sym_multiline_repeat1 = 134,
  aux_sym_string_repeat1 = 135,
  aux_sym_json_repeat1 = 136,
  aux_sym_json_repeat2 = 137,
  alias_sym_chen_data = 138,
  alias_sym_chronology_data = 139,
  alias_sym_ditaa_data = 140,
  alias_sym_ebnf_data = 141,
  alias_sym_gantt_data = 142,
  alias_sym_json_data = 143,
  alias_sym_left = 144,
  alias_sym_mindmap_data = 145,
  alias_sym_name = 146,
  alias_sym_new_name = 147,
  alias_sym_regex_data = 148,
  alias_sym_right = 149,
  alias_sym_value = 150,
  alias_sym_wbs_data = 151,
  alias_sym_yaml_data = 152,
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
  [5] = 2,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 8,
  [18] = 18,
  [19] = 11,
  [20] = 18,
  [21] = 21,
  [22] = 13,
  [23] = 11,
  [24] = 18,
  [25] = 13,
  [26] = 14,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 30,
  [35] = 33,
  [36] = 31,
  [37] = 30,
  [38] = 32,
  [39] = 33,
  [40] = 31,
  [41] = 32,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 43,
  [53] = 44,
  [54] = 54,
  [55] = 42,
  [56] = 42,
  [57] = 44,
  [58] = 48,
  [59] = 54,
  [60] = 46,
  [61] = 50,
  [62] = 47,
  [63] = 48,
  [64] = 49,
  [65] = 51,
  [66] = 50,
  [67] = 49,
  [68] = 51,
  [69] = 54,
  [70] = 70,
  [71] = 46,
  [72] = 42,
  [73] = 44,
  [74] = 43,
  [75] = 47,
  [76] = 76,
  [77] = 42,
  [78] = 44,
  [79] = 42,
  [80] = 54,
  [81] = 43,
  [82] = 44,
  [83] = 70,
  [84] = 43,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 76,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 54,
  [98] = 98,
  [99] = 99,
  [100] = 54,
  [101] = 101,
  [102] = 102,
  [103] = 76,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 117,
  [120] = 105,
  [121] = 109,
  [122] = 113,
  [123] = 101,
  [124] = 86,
  [125] = 116,
  [126] = 90,
  [127] = 91,
  [128] = 88,
  [129] = 98,
  [130] = 99,
  [131] = 108,
  [132] = 92,
  [133] = 93,
  [134] = 110,
  [135] = 111,
  [136] = 85,
  [137] = 114,
  [138] = 115,
  [139] = 116,
  [140] = 117,
  [141] = 112,
  [142] = 94,
  [143] = 87,
  [144] = 96,
  [145] = 118,
  [146] = 104,
  [147] = 98,
  [148] = 107,
  [149] = 95,
  [150] = 112,
  [151] = 109,
  [152] = 113,
  [153] = 101,
  [154] = 86,
  [155] = 90,
  [156] = 91,
  [157] = 92,
  [158] = 93,
  [159] = 94,
  [160] = 95,
  [161] = 115,
  [162] = 99,
  [163] = 102,
  [164] = 108,
  [165] = 87,
  [166] = 96,
  [167] = 118,
  [168] = 104,
  [169] = 106,
  [170] = 107,
  [171] = 110,
  [172] = 111,
  [173] = 85,
  [174] = 114,
  [175] = 88,
  [176] = 106,
  [177] = 44,
  [178] = 42,
  [179] = 43,
  [180] = 180,
  [181] = 180,
  [182] = 180,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 191,
  [194] = 194,
  [195] = 191,
  [196] = 196,
  [197] = 197,
  [198] = 196,
  [199] = 197,
  [200] = 200,
  [201] = 197,
  [202] = 196,
  [203] = 196,
  [204] = 204,
  [205] = 197,
  [206] = 196,
  [207] = 197,
  [208] = 196,
  [209] = 197,
  [210] = 196,
  [211] = 197,
  [212] = 212,
  [213] = 197,
  [214] = 196,
  [215] = 197,
  [216] = 196,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 221,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 218,
  [228] = 220,
  [229] = 218,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 220,
  [234] = 221,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 236,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 237,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 235,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 237,
  [266] = 237,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 237,
  [271] = 237,
  [272] = 272,
  [273] = 237,
  [274] = 274,
  [275] = 237,
  [276] = 237,
  [277] = 240,
  [278] = 278,
  [279] = 272,
  [280] = 280,
  [281] = 281,
  [282] = 240,
  [283] = 272,
  [284] = 280,
  [285] = 285,
  [286] = 280,
  [287] = 237,
  [288] = 239,
  [289] = 256,
  [290] = 274,
  [291] = 239,
  [292] = 256,
  [293] = 235,
  [294] = 274,
  [295] = 285,
  [296] = 264,
  [297] = 267,
  [298] = 236,
  [299] = 285,
  [300] = 264,
  [301] = 267,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 304,
  [308] = 308,
  [309] = 304,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 304,
  [314] = 314,
  [315] = 250,
  [316] = 316,
  [317] = 317,
  [318] = 304,
  [319] = 319,
  [320] = 304,
  [321] = 304,
  [322] = 322,
  [323] = 304,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 304,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 316,
  [333] = 317,
  [334] = 334,
  [335] = 335,
  [336] = 322,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 316,
  [341] = 317,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 322,
  [346] = 346,
  [347] = 347,
  [348] = 303,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 303,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 304,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 343,
  [372] = 343,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 380,
  [384] = 384,
  [385] = 377,
  [386] = 374,
  [387] = 387,
  [388] = 388,
  [389] = 375,
  [390] = 378,
  [391] = 375,
  [392] = 377,
  [393] = 378,
  [394] = 381,
  [395] = 379,
  [396] = 380,
  [397] = 381,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 382,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 374,
  [407] = 399,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 379,
  [414] = 399,
  [415] = 408,
  [416] = 409,
  [417] = 409,
  [418] = 410,
  [419] = 411,
  [420] = 411,
  [421] = 410,
  [422] = 408,
  [423] = 382,
  [424] = 424,
  [425] = 44,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 428,
  [430] = 430,
  [431] = 427,
  [432] = 427,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 437,
  [441] = 441,
  [442] = 442,
  [443] = 437,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 424,
  [452] = 433,
  [453] = 453,
  [454] = 437,
  [455] = 448,
  [456] = 456,
  [457] = 428,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 437,
  [462] = 447,
  [463] = 463,
  [464] = 458,
  [465] = 435,
  [466] = 458,
  [467] = 460,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 439,
  [472] = 449,
  [473] = 43,
  [474] = 44,
  [475] = 460,
  [476] = 476,
  [477] = 447,
  [478] = 444,
  [479] = 435,
  [480] = 456,
  [481] = 453,
  [482] = 449,
  [483] = 468,
  [484] = 470,
  [485] = 453,
  [486] = 459,
  [487] = 446,
  [488] = 448,
  [489] = 489,
  [490] = 439,
  [491] = 470,
  [492] = 424,
  [493] = 459,
  [494] = 446,
  [495] = 43,
  [496] = 437,
  [497] = 444,
  [498] = 498,
  [499] = 499,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(678);
      ADVANCE_MAP(
        '"', 838,
        '#', 710,
        '\'', 913,
        ',', 709,
        '-', 854,
        '/', 698,
        ':', 711,
        '<', 867,
        '>', 855,
        '@', 871,
        '[', 684,
        '\\', 845,
        ']', 688,
        'o', 856,
        'x', 858,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(838);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(849);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(848);
      if (lookahead != 0) ADVANCE(847);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(921);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(914);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(920);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(920);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(923);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(920);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 838,
        '#', 710,
        '\'', 913,
        '/', 697,
        '@', 117,
        '[', 684,
        'a', 750,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 785,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'o', 807,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 838,
        '#', 710,
        '\'', 913,
        '/', 697,
        '[', 684,
        'a', 750,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 773,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'o', 807,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 838,
        '#', 710,
        '\'', 913,
        '/', 697,
        '[', 684,
        'a', 750,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 779,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'o', 807,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 838,
        '\'', 913,
        '-', 853,
        '/', 698,
        ':', 711,
        '<', 867,
        '>', 855,
        '@', 237,
        '[', 684,
        '\\', 846,
        'a', 751,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 773,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(838);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '-') ADVANCE(853);
      if (lookahead == '/') ADVANCE(698);
      if (lookahead == '>') ADVANCE(855);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(846);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 838,
        '\'', 913,
        '/', 698,
        ':', 711,
        '>', 855,
        '@', 117,
        '[', 21,
        '\\', 846,
        'a', 751,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 785,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 838,
        '\'', 913,
        '/', 697,
        ':', 711,
        '@', 117,
        'a', 750,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 785,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 838,
        '\'', 913,
        '/', 697,
        ':', 711,
        '[', 684,
        'a', 751,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 779,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 838,
        '\'', 913,
        '/', 697,
        ':', 711,
        'a', 750,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 773,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 838,
        '\'', 913,
        '/', 697,
        ':', 711,
        'a', 750,
        'b', 790,
        'c', 789,
        'd', 743,
        'e', 779,
        'g', 812,
        'h', 786,
        'l', 796,
        'n', 795,
        'p', 741,
        'q', 829,
        'r', 787,
        's', 772,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(838);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(857);
      if (lookahead == 'x') ADVANCE(860);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(838);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(838);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(841);
      if (lookahead == '\\') ADVANCE(844);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(840);
      if (lookahead != 0) ADVANCE(839);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '#', 710,
        '\'', 913,
        ',', 709,
        '-', 854,
        '/', 698,
        ':', 711,
        '<', 867,
        '\\', 846,
        'c', 114,
        'e', 153,
        'f', 57,
        'h', 193,
        'l', 105,
        'n', 202,
        'o', 856,
        'r', 109,
        's', 93,
        't', 218,
        'x', 859,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(866);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 913,
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
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == '\\') ADVANCE(843);
      if (lookahead == ']') ADVANCE(688);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(737);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(872);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(883);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(873);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(884);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(874);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(885);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(875);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(876);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(877);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(878);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(879);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(890);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(880);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(891);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(881);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(892);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(922);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(916);
      if (lookahead == '/') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(917);
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(852);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(915);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(929);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(924);
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
      if (lookahead == 'a') ADVANCE(902);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(901);
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
      if (lookahead == 'c') ADVANCE(721);
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
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(701);
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
      if (lookahead == 'e') ADVANCE(722);
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
      if (lookahead == 'f') ADVANCE(898);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(897);
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
      if (lookahead == 'l') ADVANCE(896);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(895);
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
      if (lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(715);
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
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(78);
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
      if (lookahead == 'p') ADVANCE(908);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(907);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(727);
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
      if (lookahead == 'r') ADVANCE(716);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(708);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(910);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(909);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(707);
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
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(903);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(706);
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
      if (lookahead == 'w') ADVANCE(717);
      END_STATE();
    case 262:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 263:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 264:
      if (lookahead == 'x') ADVANCE(900);
      END_STATE();
    case 265:
      if (lookahead == 'x') ADVANCE(899);
      END_STATE();
    case 266:
      if (lookahead == 'y') ADVANCE(906);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(905);
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
          lookahead == 'a') ADVANCE(930);
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
          lookahead == 'a') ADVANCE(937);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(930);
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
          lookahead == 'b') ADVANCE(930);
      END_STATE();
    case 322:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(930);
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
          lookahead == 'd') ADVANCE(930);
      END_STATE();
    case 347:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 348:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(935);
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
          lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
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
          lookahead == 'y') ADVANCE(930);
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
          lookahead == 'y') ADVANCE(930);
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
          lookahead == 'f') ADVANCE(930);
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
          lookahead == 'h') ADVANCE(930);
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
          lookahead == 'i') ADVANCE(930);
      END_STATE();
    case 443:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
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
          lookahead == 'k') ADVANCE(930);
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
          lookahead == 'l') ADVANCE(930);
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
          lookahead == 'm') ADVANCE(930);
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
          lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(943);
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
          lookahead == 'o') ADVANCE(930);
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
          lookahead == 'p') ADVANCE(930);
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
          lookahead == 'r') ADVANCE(930);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
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
          lookahead == 't') ADVANCE(930);
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
          lookahead == 't') ADVANCE(931);
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
          lookahead == 'u') ADVANCE(930);
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
          lookahead == 'w') ADVANCE(930);
      END_STATE();
    case 656:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(936);
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
          lookahead == 'y') ADVANCE(930);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(723);
      END_STATE();
    case 673:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 674:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 675:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      END_STATE();
    case 676:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      END_STATE();
    case 677:
      if (eof) ADVANCE(678);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(838);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
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
      if (lookahead == '\'') ADVANCE(925);
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
      if (lookahead == '\'') ADVANCE(919);
      if (lookahead == '/') ADVANCE(686);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(928);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(918);
      if (lookahead == '/') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(696);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(922);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(922);
      if (lookahead == '/') ADVANCE(864);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_rnote);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_rnote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_hnote);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_hnote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_across);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == '\\') ADVANCE(843);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(736);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(922);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(826);
      if (lookahead == 'l') ADVANCE(816);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(826);
      if (lookahead == 'l') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(693);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(776);
      if (lookahead == 'n') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(841);
      if (lookahead == '\\') ADVANCE(844);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(839);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(922);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(842);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '\\') ADVANCE(863);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(863);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(848);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(847);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(922);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(917);
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(850);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(852);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(852);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(852);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(865);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(862);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(836);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(869);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(872);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(883);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(873);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(884);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(874);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(885);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(875);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(876);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(877);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(878);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(879);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(890);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(880);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(891);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '@') ADVANCE(881);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(892);
      if (lookahead != 0) ADVANCE(882);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(922);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(920);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(683);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(852);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(696);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(921);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(914);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(920);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(683);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(852);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(696);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(595);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(944);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(450);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(410);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(675);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(944);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
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
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 12},
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
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 20},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 20},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 677},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 677},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 677},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 19},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 19},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 19},
  [214] = {.lex_state = 19},
  [215] = {.lex_state = 19},
  [216] = {.lex_state = 19},
  [217] = {.lex_state = 19},
  [218] = {.lex_state = 677},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 24},
  [221] = {.lex_state = 24},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 24},
  [224] = {.lex_state = 24},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 677},
  [228] = {.lex_state = 24},
  [229] = {.lex_state = 677},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 24},
  [234] = {.lex_state = 24},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 25},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 26},
  [242] = {.lex_state = 25},
  [243] = {.lex_state = 27},
  [244] = {.lex_state = 28},
  [245] = {.lex_state = 29},
  [246] = {.lex_state = 30},
  [247] = {.lex_state = 677},
  [248] = {.lex_state = 26},
  [249] = {.lex_state = 25},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 27},
  [252] = {.lex_state = 28},
  [253] = {.lex_state = 27},
  [254] = {.lex_state = 29},
  [255] = {.lex_state = 30},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 31},
  [260] = {.lex_state = 32},
  [261] = {.lex_state = 33},
  [262] = {.lex_state = 31},
  [263] = {.lex_state = 32},
  [264] = {.lex_state = 22},
  [265] = {.lex_state = 28},
  [266] = {.lex_state = 29},
  [267] = {.lex_state = 11},
  [268] = {.lex_state = 33},
  [269] = {.lex_state = 34},
  [270] = {.lex_state = 30},
  [271] = {.lex_state = 31},
  [272] = {.lex_state = 18},
  [273] = {.lex_state = 32},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 33},
  [276] = {.lex_state = 34},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 18},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 19},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 18},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 22},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 26},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 22},
  [296] = {.lex_state = 22},
  [297] = {.lex_state = 11},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 22},
  [300] = {.lex_state = 22},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 34},
  [303] = {.lex_state = 20},
  [304] = {.lex_state = 26},
  [305] = {.lex_state = 677},
  [306] = {.lex_state = 677},
  [307] = {.lex_state = 28},
  [308] = {.lex_state = 677},
  [309] = {.lex_state = 29},
  [310] = {.lex_state = 677},
  [311] = {.lex_state = 677},
  [312] = {.lex_state = 677},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 677},
  [315] = {.lex_state = 24},
  [316] = {.lex_state = 20},
  [317] = {.lex_state = 20},
  [318] = {.lex_state = 31},
  [319] = {.lex_state = 677},
  [320] = {.lex_state = 27},
  [321] = {.lex_state = 32},
  [322] = {.lex_state = 20},
  [323] = {.lex_state = 33},
  [324] = {.lex_state = 677},
  [325] = {.lex_state = 677},
  [326] = {.lex_state = 677},
  [327] = {.lex_state = 34},
  [328] = {.lex_state = 677},
  [329] = {.lex_state = 677},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 677},
  [332] = {.lex_state = 20},
  [333] = {.lex_state = 20},
  [334] = {.lex_state = 677},
  [335] = {.lex_state = 677},
  [336] = {.lex_state = 20},
  [337] = {.lex_state = 677},
  [338] = {.lex_state = 677},
  [339] = {.lex_state = 677},
  [340] = {.lex_state = 20},
  [341] = {.lex_state = 20},
  [342] = {.lex_state = 677},
  [343] = {.lex_state = 20},
  [344] = {.lex_state = 677},
  [345] = {.lex_state = 20},
  [346] = {.lex_state = 677},
  [347] = {.lex_state = 677},
  [348] = {.lex_state = 20},
  [349] = {.lex_state = 677},
  [350] = {.lex_state = 677},
  [351] = {.lex_state = 677},
  [352] = {.lex_state = 677},
  [353] = {.lex_state = 677},
  [354] = {.lex_state = 677},
  [355] = {.lex_state = 677},
  [356] = {.lex_state = 20},
  [357] = {.lex_state = 677},
  [358] = {.lex_state = 677},
  [359] = {.lex_state = 20},
  [360] = {.lex_state = 677},
  [361] = {.lex_state = 677},
  [362] = {.lex_state = 25},
  [363] = {.lex_state = 677},
  [364] = {.lex_state = 677},
  [365] = {.lex_state = 677},
  [366] = {.lex_state = 677},
  [367] = {.lex_state = 677},
  [368] = {.lex_state = 677},
  [369] = {.lex_state = 24},
  [370] = {.lex_state = 677},
  [371] = {.lex_state = 20},
  [372] = {.lex_state = 20},
  [373] = {.lex_state = 677},
  [374] = {.lex_state = 36},
  [375] = {.lex_state = 694},
  [376] = {.lex_state = 11},
  [377] = {.lex_state = 694},
  [378] = {.lex_state = 677},
  [379] = {.lex_state = 694},
  [380] = {.lex_state = 694},
  [381] = {.lex_state = 694},
  [382] = {.lex_state = 694},
  [383] = {.lex_state = 694},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 694},
  [386] = {.lex_state = 36},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 11},
  [389] = {.lex_state = 694},
  [390] = {.lex_state = 677},
  [391] = {.lex_state = 694},
  [392] = {.lex_state = 694},
  [393] = {.lex_state = 677},
  [394] = {.lex_state = 694},
  [395] = {.lex_state = 694},
  [396] = {.lex_state = 694},
  [397] = {.lex_state = 694},
  [398] = {.lex_state = 11},
  [399] = {.lex_state = 36},
  [400] = {.lex_state = 11},
  [401] = {.lex_state = 677},
  [402] = {.lex_state = 694},
  [403] = {.lex_state = 11},
  [404] = {.lex_state = 36},
  [405] = {.lex_state = 11},
  [406] = {.lex_state = 36},
  [407] = {.lex_state = 36},
  [408] = {.lex_state = 36},
  [409] = {.lex_state = 20},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 694},
  [414] = {.lex_state = 36},
  [415] = {.lex_state = 36},
  [416] = {.lex_state = 20},
  [417] = {.lex_state = 20},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 36},
  [423] = {.lex_state = 694},
  [424] = {.lex_state = 22},
  [425] = {.lex_state = 23},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 37},
  [428] = {.lex_state = 37},
  [429] = {.lex_state = 37},
  [430] = {.lex_state = 22},
  [431] = {.lex_state = 37},
  [432] = {.lex_state = 37},
  [433] = {.lex_state = 2},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 11},
  [438] = {.lex_state = 22},
  [439] = {.lex_state = 23},
  [440] = {.lex_state = 11},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 11},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 22},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 22},
  [449] = {.lex_state = 677},
  [450] = {.lex_state = 22},
  [451] = {.lex_state = 22},
  [452] = {.lex_state = 2},
  [453] = {.lex_state = 677},
  [454] = {.lex_state = 11},
  [455] = {.lex_state = 22},
  [456] = {.lex_state = 685},
  [457] = {.lex_state = 37},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 22},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 3},
  [464] = {.lex_state = 20},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 20},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 22},
  [471] = {.lex_state = 23},
  [472] = {.lex_state = 677},
  [473] = {.lex_state = 677},
  [474] = {.lex_state = 677},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 38},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 685},
  [481] = {.lex_state = 677},
  [482] = {.lex_state = 677},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 22},
  [485] = {.lex_state = 677},
  [486] = {.lex_state = 22},
  [487] = {.lex_state = 22},
  [488] = {.lex_state = 22},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 23},
  [491] = {.lex_state = 22},
  [492] = {.lex_state = 22},
  [493] = {.lex_state = 22},
  [494] = {.lex_state = 22},
  [495] = {.lex_state = 23},
  [496] = {.lex_state = 11},
  [497] = {.lex_state = 0},
  [498] = {(TSStateId)(-1)},
  [499] = {(TSStateId)(-1)},
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
    [sym_diagram] = STATE(442),
    [sym_uml] = STATE(489),
    [sym_json] = STATE(489),
    [sym_yaml] = STATE(489),
    [sym_ebnf] = STATE(489),
    [sym_regex] = STATE(489),
    [sym_ditaa] = STATE(489),
    [sym_gantt] = STATE(489),
    [sym_chronology] = STATE(489),
    [sym_mindmap] = STATE(489),
    [sym_wbs] = STATE(489),
    [sym_chen] = STATE(489),
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
  [0] = 22,
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
    ACTIONS(39), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      anon_sym_autonumber,
    ACTIONS(47), 1,
      anon_sym_autonumberstop,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    STATE(322), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(37), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(49), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [82] = 22,
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
    ACTIONS(39), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      anon_sym_autonumber,
    ACTIONS(47), 1,
      anon_sym_autonumberstop,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    STATE(356), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(37), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(49), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [164] = 22,
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
    ACTIONS(39), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      anon_sym_autonumber,
    ACTIONS(47), 1,
      anon_sym_autonumberstop,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    STATE(303), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(37), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(49), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [246] = 22,
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
    ACTIONS(39), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      anon_sym_autonumber,
    ACTIONS(47), 1,
      anon_sym_autonumberstop,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(4), 1,
      aux_sym_uml_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    STATE(336), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(37), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(49), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [328] = 22,
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
    ACTIONS(39), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      anon_sym_autonumber,
    ACTIONS(47), 1,
      anon_sym_autonumberstop,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    STATE(345), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(37), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(49), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [410] = 22,
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
    ACTIONS(39), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      anon_sym_autonumber,
    ACTIONS(47), 1,
      anon_sym_autonumberstop,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    STATE(348), 1,
      aux_sym_alt_block_repeat1,
    ACTIONS(37), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(49), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [492] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_alt,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(76), 1,
      anon_sym_loop,
    ACTIONS(79), 1,
      anon_sym_group,
    ACTIONS(82), 1,
      anon_sym_skinparam,
    ACTIONS(85), 1,
      anon_sym_autonumber,
    ACTIONS(88), 1,
      anon_sym_autonumberstop,
    ACTIONS(94), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    ACTIONS(68), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(8), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(73), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(91), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [567] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      anon_sym_autonumber,
    ACTIONS(47), 1,
      anon_sym_autonumberstop,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    ACTIONS(100), 2,
      anon_sym_else,
      anon_sym_end,
    ACTIONS(37), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(49), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [644] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      anon_sym_autonumber,
    ACTIONS(47), 1,
      anon_sym_autonumberstop,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(98), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(182), 1,
      sym_participant_name,
    ACTIONS(102), 2,
      anon_sym_else,
      anon_sym_end,
    ACTIONS(37), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(99), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(49), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [721] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(106), 1,
      anon_sym_end,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [797] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(94), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_ATenduml,
    ACTIONS(126), 1,
      anon_sym_alt,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_loop,
    ACTIONS(138), 1,
      anon_sym_group,
    ACTIONS(141), 1,
      anon_sym_skinparam,
    ACTIONS(144), 1,
      anon_sym_autonumber,
    ACTIONS(147), 1,
      anon_sym_autonumberstop,
    STATE(147), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(180), 1,
      sym_participant_name,
    STATE(12), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(132), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(162), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(150), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [871] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(153), 1,
      anon_sym_end,
    STATE(13), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [947] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(155), 1,
      anon_sym_end,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1023] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_ATenduml,
    ACTIONS(159), 1,
      anon_sym_alt,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(165), 1,
      anon_sym_loop,
    ACTIONS(167), 1,
      anon_sym_group,
    ACTIONS(169), 1,
      anon_sym_skinparam,
    ACTIONS(171), 1,
      anon_sym_autonumber,
    ACTIONS(173), 1,
      anon_sym_autonumberstop,
    STATE(15), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(147), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(180), 1,
      sym_participant_name,
    ACTIONS(163), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(162), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(175), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1099] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(177), 1,
      anon_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1175] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(68), 1,
      anon_sym_end,
    ACTIONS(94), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_alt,
    ACTIONS(182), 1,
      anon_sym_SLASH,
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
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    STATE(17), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    ACTIONS(185), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(203), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1249] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(206), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1325] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(208), 1,
      anon_sym_end,
    STATE(19), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_uml_repeat1,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1401] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(210), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1477] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_alt,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(165), 1,
      anon_sym_loop,
    ACTIONS(167), 1,
      anon_sym_group,
    ACTIONS(169), 1,
      anon_sym_skinparam,
    ACTIONS(171), 1,
      anon_sym_autonumber,
    ACTIONS(173), 1,
      anon_sym_autonumberstop,
    ACTIONS(212), 1,
      anon_sym_ATenduml,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(147), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(180), 1,
      sym_participant_name,
    ACTIONS(163), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(162), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(175), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1553] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(214), 1,
      anon_sym_end,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1629] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(216), 1,
      anon_sym_end,
    STATE(23), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_uml_repeat1,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1705] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(218), 1,
      anon_sym_end,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1781] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(220), 1,
      anon_sym_end,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1857] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_alt,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_loop,
    ACTIONS(114), 1,
      anon_sym_group,
    ACTIONS(116), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(120), 1,
      anon_sym_autonumberstop,
    ACTIONS(222), 1,
      anon_sym_end,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(129), 1,
      sym_expression,
    STATE(178), 1,
      sym_string,
    STATE(181), 1,
      sym_participant_name,
    ACTIONS(110), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
    STATE(130), 7,
      sym_alt_block,
      sym_line_note,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(122), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1933] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_as,
    ACTIONS(234), 1,
      anon_sym_order,
    STATE(27), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_attribute_repeat2,
    STATE(32), 1,
      sym_multiline,
    ACTIONS(230), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(226), 20,
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
  [1991] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_as,
    ACTIONS(242), 1,
      anon_sym_order,
    STATE(28), 1,
      sym_comment,
    STATE(38), 1,
      sym_multiline,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(230), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(226), 18,
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
  [2048] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      anon_sym_as,
    ACTIONS(250), 1,
      anon_sym_order,
    STATE(29), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_attribute_repeat2,
    STATE(41), 1,
      sym_multiline,
    ACTIONS(230), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(226), 19,
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
  [2105] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_as,
    ACTIONS(262), 1,
      anon_sym_order,
    ACTIONS(257), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(30), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(252), 20,
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
  [2155] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_as,
    ACTIONS(234), 1,
      anon_sym_order,
    STATE(30), 1,
      aux_sym_attribute_repeat2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(265), 20,
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
  [2207] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_as,
    ACTIONS(234), 1,
      anon_sym_order,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(267), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(265), 20,
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
  [2259] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_as,
    ACTIONS(234), 1,
      anon_sym_order,
    STATE(30), 1,
      aux_sym_attribute_repeat2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(269), 20,
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
  [2311] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(276), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_order,
    STATE(34), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(257), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(252), 18,
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
  [2360] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_as,
    ACTIONS(242), 1,
      anon_sym_order,
    STATE(34), 1,
      aux_sym_attribute_repeat2,
    STATE(35), 1,
      sym_comment,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(271), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(269), 18,
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
  [2411] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      anon_sym_as,
    ACTIONS(250), 1,
      anon_sym_order,
    STATE(36), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(267), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(265), 19,
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
  [2462] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(282), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      anon_sym_as,
    ACTIONS(288), 1,
      anon_sym_order,
    ACTIONS(257), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(37), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(60), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(252), 19,
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
  [2511] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_as,
    ACTIONS(242), 1,
      anon_sym_order,
    STATE(35), 1,
      aux_sym_attribute_repeat2,
    STATE(38), 1,
      sym_comment,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(267), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(265), 18,
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
  [2562] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      anon_sym_as,
    ACTIONS(250), 1,
      anon_sym_order,
    STATE(37), 1,
      aux_sym_attribute_repeat2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(269), 19,
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
  [2613] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_as,
    ACTIONS(242), 1,
      anon_sym_order,
    STATE(34), 1,
      aux_sym_attribute_repeat2,
    STATE(40), 1,
      sym_comment,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(267), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(265), 18,
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
  [2664] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      anon_sym_as,
    ACTIONS(250), 1,
      anon_sym_order,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(265), 19,
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
  [2715] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 22,
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
  [2755] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(297), 22,
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
  [2795] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(301), 22,
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
  [2835] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(297), 21,
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
  [2874] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(303), 22,
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
  [2913] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      anon_sym_as,
    STATE(47), 1,
      sym_comment,
    STATE(76), 1,
      sym_attr_alias,
    ACTIONS(311), 2,
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
  [2958] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(315), 22,
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
  [2997] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(252), 22,
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
  [3036] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(319), 22,
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
  [3075] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(325), 3,
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
  [3114] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(295), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(297), 20,
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
  [3153] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(299), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(301), 20,
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
  [3192] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(329), 3,
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
  [3231] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 20,
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
  [3270] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 21,
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
  [3309] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(301), 21,
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
  [3348] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(317), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(315), 20,
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
  [3386] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_ATenduml,
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
  [3424] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(303), 21,
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
  [3462] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(321), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(319), 20,
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
  [3500] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(333), 1,
      anon_sym_as,
    STATE(62), 1,
      sym_comment,
    STATE(89), 1,
      sym_attr_alias,
    ACTIONS(311), 2,
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
  [3544] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(315), 21,
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
  [3582] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(252), 21,
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
  [3620] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_ATenduml,
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
  [3658] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(319), 21,
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
  [3696] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(252), 20,
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
  [3734] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(325), 3,
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
  [3772] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(329), 3,
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
  [3810] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_comment,
    STATE(102), 1,
      sym_custom_label,
    ACTIONS(339), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(337), 20,
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
  [3852] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(305), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(303), 20,
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
  [3890] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 21,
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
  [3928] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(301), 21,
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
  [3966] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(297), 21,
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
  [4004] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(343), 1,
      anon_sym_as,
    STATE(75), 1,
      sym_comment,
    STATE(103), 1,
      sym_attr_alias,
    ACTIONS(311), 3,
      anon_sym_ATenduml,
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
  [4048] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(347), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(345), 20,
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
  [4087] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 19,
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
  [4124] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(301), 19,
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
  [4161] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 20,
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
  [4198] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 20,
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
  [4235] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(297), 20,
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
  [4272] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(301), 20,
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
  [4309] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_comment,
    STATE(163), 1,
      sym_custom_label,
    ACTIONS(339), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(337), 19,
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
  [4350] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(297), 19,
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
  [4387] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(353), 20,
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
  [4423] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(359), 2,
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
  [4459] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(361), 20,
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
  [4495] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(365), 20,
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
  [4531] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(369), 1,
      anon_sym_COLON,
    STATE(89), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(345), 19,
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
  [4569] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 20,
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
  [4605] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(377), 2,
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
  [4641] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 20,
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
  [4677] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
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
  [4713] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
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
  [4749] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
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
  [4785] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
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
  [4821] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 18,
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
  [4857] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
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
  [4893] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
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
  [4929] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 19,
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
  [4965] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(101), 1,
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
  [5001] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(102), 1,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(411), 20,
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
  [5037] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(345), 18,
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
  [5075] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
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
  [5111] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
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
  [5147] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
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
  [5183] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
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
  [5219] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
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
  [5255] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
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
  [5291] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
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
  [5327] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
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
  [5363] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
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
  [5399] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
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
  [5435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(114), 1,
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
  [5471] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(115), 1,
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
  [5507] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
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
  [5543] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
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
  [5579] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
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
  [5615] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
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
  [5650] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
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
  [5685] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
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
  [5720] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
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
  [5755] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
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
  [5790] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(124), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_ATenduml,
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
  [5825] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
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
  [5860] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(373), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 18,
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
  [5895] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(377), 3,
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
  [5930] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(365), 19,
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
  [5965] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(129), 1,
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
  [6000] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(130), 1,
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
  [6035] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
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
  [6070] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
      sym_comment,
    ACTIONS(381), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 18,
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
  [6105] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
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
  [6140] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
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
  [6175] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
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
  [6210] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(353), 19,
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
  [6245] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
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
  [6280] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
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
  [6315] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
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
  [6350] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
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
  [6385] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
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
  [6420] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
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
  [6455] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(361), 19,
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
  [6490] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
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
  [6525] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
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
  [6560] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
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
  [6595] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
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
  [6630] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
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
  [6665] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
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
  [6700] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
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
  [6735] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
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
  [6770] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
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
  [6805] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
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
  [6840] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
      sym_comment,
    ACTIONS(359), 2,
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
  [6875] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 19,
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
  [6910] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(156), 1,
      sym_comment,
    ACTIONS(377), 2,
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
  [6945] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 19,
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
  [6980] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
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
  [7015] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
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
  [7050] = 5,
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
  [7085] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
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
  [7120] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
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
  [7155] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(163), 1,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(411), 19,
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
  [7190] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
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
  [7225] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(165), 1,
      sym_comment,
    ACTIONS(363), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(361), 18,
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
  [7260] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
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
  [7295] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
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
  [7330] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(168), 1,
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
  [7365] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(169), 1,
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
  [7400] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(170), 1,
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
  [7435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(171), 1,
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
  [7470] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
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
  [7505] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(173), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(353), 18,
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
  [7540] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(174), 1,
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
  [7575] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(175), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(365), 18,
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
  [7610] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(176), 1,
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
  [7645] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(301), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(299), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [7673] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(178), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(291), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [7701] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(179), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_LT,
    ACTIONS(295), 9,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [7729] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(475), 1,
      anon_sym_x,
    ACTIONS(479), 1,
      anon_sym_DASH_DASH,
    STATE(180), 1,
      sym_comment,
    STATE(286), 1,
      sym_connector,
    ACTIONS(473), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(469), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(477), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7765] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(475), 1,
      anon_sym_x,
    ACTIONS(479), 1,
      anon_sym_DASH_DASH,
    STATE(181), 1,
      sym_comment,
    STATE(284), 1,
      sym_connector,
    ACTIONS(473), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(469), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(477), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7801] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(475), 1,
      anon_sym_x,
    ACTIONS(479), 1,
      anon_sym_DASH_DASH,
    STATE(182), 1,
      sym_comment,
    STATE(280), 1,
      sym_connector,
    ACTIONS(473), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(469), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(477), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7837] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(487), 1,
      anon_sym_LBRACK_POUND,
    STATE(183), 1,
      sym_comment,
    ACTIONS(483), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(481), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(485), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7864] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(493), 1,
      anon_sym_DASH,
    STATE(184), 1,
      sym_comment,
    ACTIONS(491), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(489), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7891] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(501), 1,
      anon_sym_DASH,
    STATE(185), 1,
      sym_comment,
    ACTIONS(499), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(497), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(503), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7918] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_LBRACK_POUND,
    STATE(186), 1,
      sym_comment,
    ACTIONS(507), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(505), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(509), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7945] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(187), 1,
      sym_comment,
    ACTIONS(483), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(481), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(485), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7969] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(188), 1,
      sym_comment,
    ACTIONS(507), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(505), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(509), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7993] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(189), 1,
      sym_comment,
    ACTIONS(515), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(513), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(517), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [8017] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(190), 1,
      sym_comment,
    ACTIONS(491), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(489), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [8041] = 9,
    ACTIONS(519), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(523), 1,
      aux_sym_attribute_token3,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(191), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_attribute_repeat1,
    STATE(485), 1,
      sym_string,
    ACTIONS(521), 2,
      anon_sym_inc,
      anon_sym_resume,
  [8070] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(535), 1,
      anon_sym_LBRACK_POUND,
    STATE(192), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(533), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [8093] = 9,
    ACTIONS(523), 1,
      aux_sym_attribute_token3,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(537), 1,
      aux_sym__NEWLINE_token1,
    STATE(193), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym_attribute_repeat1,
    STATE(453), 1,
      sym_string,
    ACTIONS(539), 2,
      anon_sym_inc,
      anon_sym_resume,
  [8122] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(543), 1,
      anon_sym_DASH,
    STATE(194), 1,
      sym_comment,
    ACTIONS(541), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(545), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [8145] = 9,
    ACTIONS(523), 1,
      aux_sym_attribute_token3,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(547), 1,
      aux_sym__NEWLINE_token1,
    STATE(195), 1,
      sym_comment,
    STATE(227), 1,
      aux_sym_attribute_repeat1,
    STATE(481), 1,
      sym_string,
    ACTIONS(549), 2,
      anon_sym_inc,
      anon_sym_resume,
  [8174] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(551), 1,
      anon_sym_DQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    STATE(196), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8200] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8226] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8252] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_comment,
    STATE(202), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8278] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(200), 1,
      sym_comment,
    ACTIONS(563), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_LT,
    ACTIONS(565), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [8298] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8324] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8350] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(571), 1,
      anon_sym_DQUOTE,
    STATE(203), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8376] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(204), 1,
      sym_comment,
    ACTIONS(497), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(503), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [8396] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_comment,
    STATE(206), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8422] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8448] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      sym_comment,
    STATE(208), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8474] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8500] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8526] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(583), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8552] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      aux_sym_string_repeat1,
    STATE(211), 1,
      sym_comment,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8578] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(212), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_GT,
    ACTIONS(533), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [8598] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8624] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8650] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8676] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_string_repeat1,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(553), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8702] = 7,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(600), 1,
      anon_sym_BSLASH,
    STATE(281), 1,
      sym_escape_char,
    ACTIONS(597), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(217), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [8726] = 8,
    ACTIONS(523), 1,
      aux_sym_attribute_token3,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(603), 1,
      aux_sym__NEWLINE_token1,
    STATE(218), 1,
      sym_comment,
    STATE(247), 1,
      aux_sym_attribute_repeat1,
    STATE(472), 1,
      sym_string,
  [8751] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      aux_sym_attr_alias_token1,
    STATE(219), 1,
      sym_comment,
    ACTIONS(607), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8772] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    ACTIONS(611), 1,
      aux_sym_multiline_token1,
    ACTIONS(613), 1,
      anon_sym_BSLASH,
    STATE(220), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_multiline_repeat1,
    STATE(369), 1,
      sym_escape_char,
  [8797] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_multiline_token1,
    ACTIONS(613), 1,
      anon_sym_BSLASH,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_multiline_repeat1,
    STATE(369), 1,
      sym_escape_char,
  [8822] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(617), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      sym_comment,
    ACTIONS(621), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8843] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_multiline_token1,
    ACTIONS(613), 1,
      anon_sym_BSLASH,
    ACTIONS(623), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_multiline_repeat1,
    STATE(369), 1,
      sym_escape_char,
  [8868] = 7,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
    ACTIONS(627), 1,
      aux_sym_multiline_token1,
    ACTIONS(630), 1,
      anon_sym_BSLASH,
    STATE(369), 1,
      sym_escape_char,
    STATE(224), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [8891] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    ACTIONS(633), 1,
      aux_sym_attr_alias_token1,
    STATE(225), 1,
      sym_comment,
    ACTIONS(635), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8912] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      aux_sym_attr_alias_token1,
    STATE(226), 1,
      sym_comment,
    ACTIONS(639), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8933] = 8,
    ACTIONS(523), 1,
      aux_sym_attribute_token3,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(641), 1,
      aux_sym__NEWLINE_token1,
    STATE(227), 1,
      sym_comment,
    STATE(247), 1,
      aux_sym_attribute_repeat1,
    STATE(482), 1,
      sym_string,
  [8958] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_multiline_token1,
    ACTIONS(613), 1,
      anon_sym_BSLASH,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_multiline_repeat1,
    STATE(228), 1,
      sym_comment,
    STATE(369), 1,
      sym_escape_char,
  [8983] = 8,
    ACTIONS(523), 1,
      aux_sym_attribute_token3,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(645), 1,
      aux_sym__NEWLINE_token1,
    STATE(229), 1,
      sym_comment,
    STATE(247), 1,
      aux_sym_attribute_repeat1,
    STATE(449), 1,
      sym_string,
  [9008] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(647), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(649), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      sym_comment,
    ACTIONS(651), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [9029] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    ACTIONS(653), 1,
      aux_sym_attr_alias_token1,
    STATE(231), 1,
      sym_comment,
    ACTIONS(655), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [9050] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    ACTIONS(657), 1,
      aux_sym_attr_alias_token1,
    STATE(232), 1,
      sym_comment,
    ACTIONS(659), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [9071] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_multiline_token1,
    ACTIONS(613), 1,
      anon_sym_BSLASH,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      sym_comment,
    STATE(234), 1,
      aux_sym_multiline_repeat1,
    STATE(369), 1,
      sym_escape_char,
  [9096] = 8,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_multiline_token1,
    ACTIONS(613), 1,
      anon_sym_BSLASH,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      aux_sym_multiline_repeat1,
    STATE(234), 1,
      sym_comment,
    STATE(369), 1,
      sym_escape_char,
  [9121] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      anon_sym_COLON,
    STATE(235), 1,
      sym_comment,
    STATE(278), 1,
      aux_sym_line_note_repeat1,
  [9143] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(671), 1,
      aux_sym_attr_alias_token1,
    STATE(178), 1,
      sym_string,
    STATE(236), 1,
      sym_comment,
    STATE(292), 1,
      sym_participant_name,
  [9165] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendyaml,
    ACTIONS(673), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(237), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9183] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(671), 1,
      aux_sym_attr_alias_token1,
    STATE(178), 1,
      sym_string,
    STATE(238), 1,
      sym_comment,
    STATE(256), 1,
      sym_participant_name,
  [9205] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(678), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      anon_sym_COLON,
    STATE(239), 1,
      sym_comment,
    STATE(258), 1,
      aux_sym_line_note_repeat1,
  [9227] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(682), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_participant_name,
    STATE(55), 1,
      sym_string,
    STATE(240), 1,
      sym_comment,
  [9249] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(688), 1,
      anon_sym_ATendjson,
    STATE(241), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym_json_repeat1,
    ACTIONS(686), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9269] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(692), 1,
      anon_sym_ATendyaml,
    STATE(242), 1,
      sym_comment,
    STATE(249), 1,
      aux_sym_json_repeat1,
    ACTIONS(690), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9289] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(696), 1,
      anon_sym_ATendebnf,
    STATE(243), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym_json_repeat1,
    ACTIONS(694), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9309] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(700), 1,
      anon_sym_ATendregex,
    STATE(244), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym_json_repeat1,
    ACTIONS(698), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9329] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(704), 1,
      anon_sym_ATendditaa,
    STATE(245), 1,
      sym_comment,
    STATE(254), 1,
      aux_sym_json_repeat1,
    ACTIONS(702), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9349] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(708), 1,
      anon_sym_ATendgantt,
    STATE(246), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym_json_repeat1,
    ACTIONS(706), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9369] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(710), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(712), 1,
      aux_sym_attribute_token3,
    ACTIONS(715), 1,
      anon_sym_DQUOTE,
    STATE(247), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [9389] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(717), 1,
      anon_sym_ATendjson,
    STATE(248), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_json_repeat1,
    ACTIONS(686), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9409] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(719), 1,
      anon_sym_ATendyaml,
    STATE(237), 1,
      aux_sym_json_repeat1,
    STATE(249), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9429] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(250), 1,
      sym_comment,
    ACTIONS(721), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [9445] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(723), 1,
      anon_sym_ATendebnf,
    STATE(251), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_json_repeat1,
    ACTIONS(694), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9465] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(725), 1,
      anon_sym_ATendregex,
    STATE(252), 1,
      sym_comment,
    STATE(265), 1,
      aux_sym_json_repeat1,
    ACTIONS(698), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9485] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendebnf,
    ACTIONS(727), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(253), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9503] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      anon_sym_ATendditaa,
    STATE(254), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym_json_repeat1,
    ACTIONS(702), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9523] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(732), 1,
      anon_sym_ATendgantt,
    STATE(255), 1,
      sym_comment,
    STATE(270), 1,
      aux_sym_json_repeat1,
    ACTIONS(706), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9543] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      anon_sym_COLON,
    STATE(256), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_line_note_repeat1,
  [9565] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(671), 1,
      aux_sym_attr_alias_token1,
    STATE(178), 1,
      sym_string,
    STATE(257), 1,
      sym_comment,
    STATE(330), 1,
      sym_participant_name,
  [9587] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      anon_sym_COLON,
    STATE(258), 1,
      sym_comment,
    STATE(278), 1,
      aux_sym_line_note_repeat1,
  [9609] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(740), 1,
      anon_sym_ATendchronology,
    STATE(259), 1,
      sym_comment,
    STATE(271), 1,
      aux_sym_json_repeat1,
    ACTIONS(738), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9629] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(744), 1,
      anon_sym_ATendmindmap,
    STATE(260), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym_json_repeat1,
    ACTIONS(742), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9649] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(748), 1,
      anon_sym_ATendwbs,
    STATE(261), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym_json_repeat1,
    ACTIONS(746), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9669] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(750), 1,
      anon_sym_ATendchronology,
    STATE(259), 1,
      aux_sym_json_repeat1,
    STATE(262), 1,
      sym_comment,
    ACTIONS(738), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9689] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(752), 1,
      anon_sym_ATendmindmap,
    STATE(260), 1,
      aux_sym_json_repeat1,
    STATE(263), 1,
      sym_comment,
    ACTIONS(742), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9709] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(756), 1,
      anon_sym_over,
    STATE(264), 1,
      sym_comment,
    ACTIONS(754), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [9727] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendregex,
    ACTIONS(758), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(265), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9745] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendditaa,
    ACTIONS(761), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(266), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9763] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(671), 1,
      aux_sym_attr_alias_token1,
    STATE(178), 1,
      sym_string,
    STATE(239), 1,
      sym_participant_name,
    STATE(267), 1,
      sym_comment,
  [9785] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(764), 1,
      anon_sym_ATendwbs,
    STATE(261), 1,
      aux_sym_json_repeat1,
    STATE(268), 1,
      sym_comment,
    ACTIONS(746), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9805] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(768), 1,
      anon_sym_ATendchen,
    STATE(269), 1,
      sym_comment,
    STATE(302), 1,
      aux_sym_json_repeat1,
    ACTIONS(766), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9825] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendgantt,
    ACTIONS(770), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(270), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9843] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendchronology,
    ACTIONS(773), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(271), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9861] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(776), 1,
      aux_sym_attribute_token1,
    ACTIONS(778), 1,
      aux_sym_attribute_token2,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
    STATE(272), 1,
      sym_comment,
    STATE(490), 1,
      sym_string,
  [9883] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendmindmap,
    ACTIONS(782), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(273), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9901] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_POUND,
    ACTIONS(787), 1,
      anon_sym_COLON,
    STATE(274), 1,
      sym_comment,
    STATE(278), 1,
      aux_sym_line_note_repeat1,
  [9923] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendwbs,
    ACTIONS(789), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(275), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9941] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendchen,
    ACTIONS(792), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(276), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9959] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(795), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_participant_name,
    STATE(42), 1,
      sym_string,
    STATE(277), 1,
      sym_comment,
  [9981] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    ACTIONS(802), 2,
      anon_sym_POUND,
      anon_sym_COLON,
    STATE(278), 2,
      sym_comment,
      aux_sym_line_note_repeat1,
  [9999] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
    ACTIONS(804), 1,
      aux_sym_attribute_token1,
    ACTIONS(806), 1,
      aux_sym_attribute_token2,
    STATE(279), 1,
      sym_comment,
    STATE(439), 1,
      sym_string,
  [10021] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(808), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_participant_name,
    STATE(72), 1,
      sym_string,
    STATE(280), 1,
      sym_comment,
  [10043] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(281), 1,
      sym_comment,
    ACTIONS(812), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [10059] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(814), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(816), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_participant_name,
    STATE(56), 1,
      sym_string,
    STATE(282), 1,
      sym_comment,
  [10081] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
    ACTIONS(818), 1,
      aux_sym_attribute_token1,
    ACTIONS(820), 1,
      aux_sym_attribute_token2,
    STATE(283), 1,
      sym_comment,
    STATE(471), 1,
      sym_string,
  [10103] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(822), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(824), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_participant_name,
    STATE(79), 1,
      sym_string,
    STATE(284), 1,
      sym_comment,
  [10125] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(828), 1,
      anon_sym_over,
    STATE(285), 1,
      sym_comment,
    ACTIONS(826), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [10143] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(830), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(832), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_participant_name,
    STATE(77), 1,
      sym_string,
    STATE(286), 1,
      sym_comment,
  [10165] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendjson,
    ACTIONS(834), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(287), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [10183] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(235), 1,
      aux_sym_line_note_repeat1,
    STATE(288), 1,
      sym_comment,
  [10205] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      anon_sym_COLON,
    STATE(289), 1,
      sym_comment,
    STATE(290), 1,
      aux_sym_line_note_repeat1,
  [10227] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(841), 1,
      anon_sym_POUND,
    ACTIONS(843), 1,
      anon_sym_COLON,
    STATE(278), 1,
      aux_sym_line_note_repeat1,
    STATE(290), 1,
      sym_comment,
  [10249] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_POUND,
    ACTIONS(847), 1,
      anon_sym_COLON,
    STATE(291), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_line_note_repeat1,
  [10271] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_POUND,
    ACTIONS(851), 1,
      anon_sym_COLON,
    STATE(292), 1,
      sym_comment,
    STATE(294), 1,
      aux_sym_line_note_repeat1,
  [10293] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_POUND,
    ACTIONS(851), 1,
      anon_sym_COLON,
    STATE(278), 1,
      aux_sym_line_note_repeat1,
    STATE(293), 1,
      sym_comment,
  [10315] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      anon_sym_COLON,
    STATE(278), 1,
      aux_sym_line_note_repeat1,
    STATE(294), 1,
      sym_comment,
  [10337] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(859), 1,
      anon_sym_over,
    STATE(295), 1,
      sym_comment,
    ACTIONS(857), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [10355] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(863), 1,
      anon_sym_over,
    STATE(296), 1,
      sym_comment,
    ACTIONS(861), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [10373] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(671), 1,
      aux_sym_attr_alias_token1,
    STATE(178), 1,
      sym_string,
    STATE(288), 1,
      sym_participant_name,
    STATE(297), 1,
      sym_comment,
  [10395] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(671), 1,
      aux_sym_attr_alias_token1,
    STATE(178), 1,
      sym_string,
    STATE(289), 1,
      sym_participant_name,
    STATE(298), 1,
      sym_comment,
  [10417] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(867), 1,
      anon_sym_over,
    STATE(299), 1,
      sym_comment,
    ACTIONS(865), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [10435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(871), 1,
      anon_sym_over,
    STATE(300), 1,
      sym_comment,
    ACTIONS(869), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_across,
  [10453] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(671), 1,
      aux_sym_attr_alias_token1,
    STATE(178), 1,
      sym_string,
    STATE(291), 1,
      sym_participant_name,
    STATE(301), 1,
      sym_comment,
  [10475] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(873), 1,
      anon_sym_ATendchen,
    STATE(276), 1,
      aux_sym_json_repeat1,
    STATE(302), 1,
      sym_comment,
    ACTIONS(766), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [10495] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(877), 1,
      anon_sym_end,
    STATE(303), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_alt_block_repeat1,
  [10514] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(304), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [10529] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(881), 1,
      ts_builtin_sym_end,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    STATE(305), 1,
      sym_comment,
    STATE(329), 1,
      aux_sym_json_repeat2,
  [10548] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(885), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_comment,
    STATE(349), 1,
      aux_sym_json_repeat2,
  [10567] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(307), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [10582] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
    STATE(308), 1,
      sym_comment,
    STATE(347), 1,
      aux_sym_json_repeat2,
  [10601] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(309), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [10616] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(889), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_comment,
    STATE(352), 1,
      aux_sym_json_repeat2,
  [10635] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(891), 1,
      ts_builtin_sym_end,
    STATE(311), 1,
      sym_comment,
    STATE(329), 1,
      aux_sym_json_repeat2,
  [10654] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(893), 1,
      ts_builtin_sym_end,
    STATE(312), 1,
      sym_comment,
    STATE(351), 1,
      aux_sym_json_repeat2,
  [10673] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(313), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [10688] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(895), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      sym_comment,
    STATE(358), 1,
      aux_sym_json_repeat2,
  [10707] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(315), 1,
      sym_comment,
    ACTIONS(721), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [10722] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(316), 1,
      sym_comment,
    ACTIONS(897), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [10737] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_boolean_literal,
    STATE(317), 1,
      sym_comment,
    ACTIONS(899), 2,
      anon_sym_true,
      anon_sym_false,
  [10754] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(318), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [10769] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
    STATE(319), 1,
      sym_comment,
    STATE(339), 1,
      aux_sym_json_repeat2,
  [10788] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(320), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [10803] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(321), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [10818] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(903), 1,
      anon_sym_end,
    STATE(322), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_alt_block_repeat1,
  [10837] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(323), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [10852] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(905), 1,
      ts_builtin_sym_end,
    STATE(324), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_json_repeat2,
  [10871] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(907), 1,
      ts_builtin_sym_end,
    STATE(325), 1,
      sym_comment,
    STATE(329), 1,
      aux_sym_json_repeat2,
  [10890] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(909), 1,
      aux_sym__NEWLINE_token1,
    STATE(326), 1,
      sym_comment,
    ACTIONS(911), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [10907] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(327), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [10922] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(913), 1,
      ts_builtin_sym_end,
    STATE(328), 1,
      sym_comment,
    STATE(373), 1,
      aux_sym_json_repeat2,
  [10941] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
    ACTIONS(917), 1,
      aux_sym__NEWLINE_token1,
    STATE(329), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [10958] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(330), 1,
      sym_comment,
    ACTIONS(802), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_COLON,
  [10973] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(331), 1,
      sym_comment,
  [10992] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(332), 1,
      sym_comment,
    ACTIONS(922), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [11007] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_boolean_literal,
    STATE(333), 1,
      sym_comment,
    ACTIONS(924), 2,
      anon_sym_true,
      anon_sym_false,
  [11024] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(926), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(334), 1,
      sym_comment,
  [11043] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(928), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(335), 1,
      sym_comment,
  [11062] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(930), 1,
      anon_sym_end,
    STATE(336), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_alt_block_repeat1,
  [11081] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(932), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(337), 1,
      sym_comment,
  [11100] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
    STATE(337), 1,
      aux_sym_json_repeat2,
    STATE(338), 1,
      sym_comment,
  [11119] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(936), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(339), 1,
      sym_comment,
  [11138] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(340), 1,
      sym_comment,
    ACTIONS(938), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [11153] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_boolean_literal,
    STATE(341), 1,
      sym_comment,
    ACTIONS(940), 2,
      anon_sym_true,
      anon_sym_false,
  [11170] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(942), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(342), 1,
      sym_comment,
  [11189] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(343), 1,
      sym_comment,
    ACTIONS(944), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [11204] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(946), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(344), 1,
      sym_comment,
  [11223] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(948), 1,
      anon_sym_end,
    STATE(345), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_alt_block_repeat1,
  [11242] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(950), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(346), 1,
      sym_comment,
  [11261] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(952), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(347), 1,
      sym_comment,
  [11280] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(954), 1,
      anon_sym_end,
    STATE(348), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_alt_block_repeat1,
  [11299] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(349), 1,
      sym_comment,
  [11318] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(958), 1,
      ts_builtin_sym_end,
    STATE(331), 1,
      aux_sym_json_repeat2,
    STATE(350), 1,
      sym_comment,
  [11337] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(960), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(351), 1,
      sym_comment,
  [11356] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(962), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(352), 1,
      sym_comment,
  [11375] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(964), 1,
      ts_builtin_sym_end,
    STATE(334), 1,
      aux_sym_json_repeat2,
    STATE(353), 1,
      sym_comment,
  [11394] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(966), 1,
      ts_builtin_sym_end,
    STATE(354), 1,
      sym_comment,
    STATE(355), 1,
      aux_sym_json_repeat2,
  [11413] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(968), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(355), 1,
      sym_comment,
  [11432] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(970), 1,
      anon_sym_end,
    STATE(356), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_alt_block_repeat1,
  [11451] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(972), 1,
      ts_builtin_sym_end,
    STATE(335), 1,
      aux_sym_json_repeat2,
    STATE(357), 1,
      sym_comment,
  [11470] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(974), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(358), 1,
      sym_comment,
  [11489] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      anon_sym_else,
    ACTIONS(979), 1,
      anon_sym_end,
    STATE(359), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [11506] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(981), 1,
      ts_builtin_sym_end,
    STATE(342), 1,
      aux_sym_json_repeat2,
    STATE(360), 1,
      sym_comment,
  [11525] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(983), 1,
      ts_builtin_sym_end,
    STATE(361), 1,
      sym_comment,
    STATE(363), 1,
      aux_sym_json_repeat2,
  [11544] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(362), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [11559] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(363), 1,
      sym_comment,
  [11578] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(987), 1,
      ts_builtin_sym_end,
    STATE(344), 1,
      aux_sym_json_repeat2,
    STATE(364), 1,
      sym_comment,
  [11597] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
    STATE(365), 1,
      sym_comment,
    STATE(366), 1,
      aux_sym_json_repeat2,
  [11616] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(366), 1,
      sym_comment,
  [11635] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(993), 1,
      ts_builtin_sym_end,
    STATE(305), 1,
      aux_sym_json_repeat2,
    STATE(367), 1,
      sym_comment,
  [11654] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(995), 1,
      ts_builtin_sym_end,
    STATE(346), 1,
      aux_sym_json_repeat2,
    STATE(368), 1,
      sym_comment,
  [11673] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(369), 1,
      sym_comment,
    ACTIONS(997), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [11688] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(999), 1,
      ts_builtin_sym_end,
    STATE(311), 1,
      aux_sym_json_repeat2,
    STATE(370), 1,
      sym_comment,
  [11707] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(371), 1,
      sym_comment,
    ACTIONS(1001), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [11722] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(372), 1,
      sym_comment,
    ACTIONS(1003), 3,
      anon_sym_note,
      anon_sym_rnote,
      anon_sym_hnote,
  [11737] = 6,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(883), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(1005), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      aux_sym_json_repeat2,
    STATE(373), 1,
      sym_comment,
  [11756] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1007), 1,
      aux_sym_label_token1,
    STATE(6), 1,
      sym_label,
    STATE(374), 1,
      sym_comment,
  [11772] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1009), 1,
      aux_sym_line_token1,
    STATE(96), 1,
      sym_line,
    STATE(375), 1,
      sym_comment,
  [11788] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(376), 1,
      sym_comment,
    ACTIONS(507), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11802] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1009), 1,
      aux_sym_line_token1,
    STATE(113), 1,
      sym_line,
    STATE(377), 1,
      sym_comment,
  [11818] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1011), 1,
      aux_sym__NEWLINE_token1,
    STATE(86), 1,
      sym__NEWLINE,
    STATE(378), 1,
      sym_comment,
  [11834] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1009), 1,
      aux_sym_line_token1,
    STATE(91), 1,
      sym_line,
    STATE(379), 1,
      sym_comment,
  [11850] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1009), 1,
      aux_sym_line_token1,
    STATE(93), 1,
      sym_line,
    STATE(380), 1,
      sym_comment,
  [11866] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1009), 1,
      aux_sym_line_token1,
    STATE(94), 1,
      sym_line,
    STATE(381), 1,
      sym_comment,
  [11882] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1009), 1,
      aux_sym_line_token1,
    STATE(95), 1,
      sym_line,
    STATE(382), 1,
      sym_comment,
  [11898] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      aux_sym_line_token1,
    STATE(133), 1,
      sym_line,
    STATE(383), 1,
      sym_comment,
  [11914] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1015), 1,
      anon_sym_DASH,
    ACTIONS(1017), 1,
      anon_sym_DASH_DASH,
    STATE(384), 1,
      sym_comment,
  [11930] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      aux_sym_line_token1,
    STATE(122), 1,
      sym_line,
    STATE(385), 1,
      sym_comment,
  [11946] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1007), 1,
      aux_sym_label_token1,
    STATE(2), 1,
      sym_label,
    STATE(386), 1,
      sym_comment,
  [11962] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1019), 1,
      anon_sym_DASH,
    ACTIONS(1021), 1,
      anon_sym_DASH_DASH,
    STATE(387), 1,
      sym_comment,
  [11978] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(388), 1,
      sym_comment,
    ACTIONS(499), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11992] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1023), 1,
      aux_sym_line_token1,
    STATE(144), 1,
      sym_line,
    STATE(389), 1,
      sym_comment,
  [12008] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1025), 1,
      aux_sym__NEWLINE_token1,
    STATE(124), 1,
      sym__NEWLINE,
    STATE(390), 1,
      sym_comment,
  [12024] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      aux_sym_line_token1,
    STATE(166), 1,
      sym_line,
    STATE(391), 1,
      sym_comment,
  [12040] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1023), 1,
      aux_sym_line_token1,
    STATE(152), 1,
      sym_line,
    STATE(392), 1,
      sym_comment,
  [12056] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1027), 1,
      aux_sym__NEWLINE_token1,
    STATE(154), 1,
      sym__NEWLINE,
    STATE(393), 1,
      sym_comment,
  [12072] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      aux_sym_line_token1,
    STATE(142), 1,
      sym_line,
    STATE(394), 1,
      sym_comment,
  [12088] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1023), 1,
      aux_sym_line_token1,
    STATE(156), 1,
      sym_line,
    STATE(395), 1,
      sym_comment,
  [12104] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1023), 1,
      aux_sym_line_token1,
    STATE(158), 1,
      sym_line,
    STATE(396), 1,
      sym_comment,
  [12120] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1023), 1,
      aux_sym_line_token1,
    STATE(159), 1,
      sym_line,
    STATE(397), 1,
      sym_comment,
  [12136] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(398), 1,
      sym_comment,
    ACTIONS(649), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [12150] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1029), 1,
      aux_sym_label_token1,
    STATE(11), 1,
      sym_label,
    STATE(399), 1,
      sym_comment,
  [12166] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(400), 1,
      sym_comment,
    ACTIONS(491), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [12180] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1031), 2,
      ts_builtin_sym_end,
      aux_sym__NEWLINE_token1,
  [12194] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      aux_sym_line_token1,
    STATE(149), 1,
      sym_line,
    STATE(402), 1,
      sym_comment,
  [12210] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(403), 1,
      sym_comment,
    ACTIONS(515), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [12224] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1007), 1,
      aux_sym_label_token1,
    STATE(10), 1,
      sym_label,
    STATE(404), 1,
      sym_comment,
  [12240] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(405), 1,
      sym_comment,
    ACTIONS(619), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [12254] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1007), 1,
      aux_sym_label_token1,
    STATE(5), 1,
      sym_label,
    STATE(406), 1,
      sym_comment,
  [12270] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1029), 1,
      aux_sym_label_token1,
    STATE(19), 1,
      sym_label,
    STATE(407), 1,
      sym_comment,
  [12286] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1029), 1,
      aux_sym_label_token1,
    STATE(20), 1,
      sym_label,
    STATE(408), 1,
      sym_comment,
  [12302] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1033), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1035), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(409), 1,
      sym_comment,
  [12318] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1037), 1,
      anon_sym_POUND,
    ACTIONS(1039), 1,
      anon_sym_COLON,
    STATE(410), 1,
      sym_comment,
  [12334] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(837), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(411), 1,
      sym_comment,
  [12350] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(412), 1,
      sym_comment,
    ACTIONS(1041), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [12364] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1013), 1,
      aux_sym_line_token1,
    STATE(127), 1,
      sym_line,
    STATE(413), 1,
      sym_comment,
  [12380] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1029), 1,
      aux_sym_label_token1,
    STATE(23), 1,
      sym_label,
    STATE(414), 1,
      sym_comment,
  [12396] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1029), 1,
      aux_sym_label_token1,
    STATE(24), 1,
      sym_label,
    STATE(415), 1,
      sym_comment,
  [12412] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1043), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1045), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(416), 1,
      sym_comment,
  [12428] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1047), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(1049), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(417), 1,
      sym_comment,
  [12444] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1051), 1,
      anon_sym_POUND,
    ACTIONS(1053), 1,
      anon_sym_COLON,
    STATE(418), 1,
      sym_comment,
  [12460] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(845), 1,
      anon_sym_POUND,
    ACTIONS(847), 1,
      anon_sym_COLON,
    STATE(419), 1,
      sym_comment,
  [12476] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      anon_sym_COLON,
    STATE(420), 1,
      sym_comment,
  [12492] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1055), 1,
      anon_sym_POUND,
    ACTIONS(1057), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_comment,
  [12508] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1029), 1,
      aux_sym_label_token1,
    STATE(18), 1,
      sym_label,
    STATE(422), 1,
      sym_comment,
  [12524] = 5,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1023), 1,
      aux_sym_line_token1,
    STATE(160), 1,
      sym_line,
    STATE(423), 1,
      sym_comment,
  [12540] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1059), 1,
      sym_color,
    STATE(424), 1,
      sym_comment,
  [12553] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(299), 1,
      aux_sym_attribute_token2,
    STATE(425), 1,
      sym_comment,
  [12566] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1061), 1,
      anon_sym_SLASH,
    STATE(426), 1,
      sym_comment,
  [12579] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1063), 1,
      aux_sym_sequence_diagram_token1,
    STATE(427), 1,
      sym_comment,
  [12592] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1065), 1,
      aux_sym_sequence_diagram_token1,
    STATE(428), 1,
      sym_comment,
  [12605] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1067), 1,
      aux_sym_sequence_diagram_token1,
    STATE(429), 1,
      sym_comment,
  [12618] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1069), 1,
      sym_color,
    STATE(430), 1,
      sym_comment,
  [12631] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1071), 1,
      aux_sym_sequence_diagram_token1,
    STATE(431), 1,
      sym_comment,
  [12644] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1073), 1,
      aux_sym_sequence_diagram_token1,
    STATE(432), 1,
      sym_comment,
  [12657] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1075), 1,
      aux_sym_escape_char_token1,
    STATE(433), 1,
      sym_comment,
  [12670] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1077), 1,
      anon_sym_RBRACK,
    STATE(434), 1,
      sym_comment,
  [12683] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1079), 1,
      anon_sym_COLON,
    STATE(435), 1,
      sym_comment,
  [12696] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1081), 1,
      ts_builtin_sym_end,
    STATE(436), 1,
      sym_comment,
  [12709] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1083), 1,
      aux_sym_attr_alias_token1,
    STATE(437), 1,
      sym_comment,
  [12722] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1085), 1,
      sym_color,
    STATE(438), 1,
      sym_comment,
  [12735] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1087), 1,
      aux_sym_attribute_token2,
    STATE(439), 1,
      sym_comment,
  [12748] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1089), 1,
      aux_sym_attr_alias_token1,
    STATE(440), 1,
      sym_comment,
  [12761] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    STATE(441), 1,
      sym_comment,
  [12774] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1093), 1,
      ts_builtin_sym_end,
    STATE(442), 1,
      sym_comment,
  [12787] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1095), 1,
      aux_sym_attr_alias_token1,
    STATE(443), 1,
      sym_comment,
  [12800] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1097), 1,
      anon_sym_COLON,
    STATE(444), 1,
      sym_comment,
  [12813] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1099), 1,
      ts_builtin_sym_end,
    STATE(445), 1,
      sym_comment,
  [12826] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1101), 1,
      sym_color,
    STATE(446), 1,
      sym_comment,
  [12839] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_COLON,
    STATE(447), 1,
      sym_comment,
  [12852] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1103), 1,
      sym_color,
    STATE(448), 1,
      sym_comment,
  [12865] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1105), 1,
      aux_sym__NEWLINE_token1,
    STATE(449), 1,
      sym_comment,
  [12878] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1107), 1,
      sym_color,
    STATE(450), 1,
      sym_comment,
  [12891] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1109), 1,
      sym_color,
    STATE(451), 1,
      sym_comment,
  [12904] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1111), 1,
      aux_sym_escape_char_token1,
    STATE(452), 1,
      sym_comment,
  [12917] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(603), 1,
      aux_sym__NEWLINE_token1,
    STATE(453), 1,
      sym_comment,
  [12930] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1113), 1,
      aux_sym_attr_alias_token1,
    STATE(454), 1,
      sym_comment,
  [12943] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1115), 1,
      sym_color,
    STATE(455), 1,
      sym_comment,
  [12956] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1117), 1,
      aux_sym_custom_label_token1,
    STATE(456), 1,
      sym_comment,
  [12969] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1119), 1,
      aux_sym_sequence_diagram_token1,
    STATE(457), 1,
      sym_comment,
  [12982] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1121), 1,
      aux_sym_attribute_token3,
    STATE(458), 1,
      sym_comment,
  [12995] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1123), 1,
      sym_color,
    STATE(459), 1,
      sym_comment,
  [13008] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(669), 1,
      anon_sym_COLON,
    STATE(460), 1,
      sym_comment,
  [13021] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1125), 1,
      aux_sym_attr_alias_token1,
    STATE(461), 1,
      sym_comment,
  [13034] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(843), 1,
      anon_sym_COLON,
    STATE(462), 1,
      sym_comment,
  [13047] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1127), 1,
      aux_sym_comment_token1,
    STATE(463), 1,
      sym_comment,
  [13060] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1129), 1,
      aux_sym_attribute_token3,
    STATE(464), 1,
      sym_comment,
  [13073] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1131), 1,
      anon_sym_COLON,
    STATE(465), 1,
      sym_comment,
  [13086] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym_attribute_token3,
    STATE(466), 1,
      sym_comment,
  [13099] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(736), 1,
      anon_sym_COLON,
    STATE(467), 1,
      sym_comment,
  [13112] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1135), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      sym_comment,
  [13125] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1137), 1,
      anon_sym_RBRACK,
    STATE(469), 1,
      sym_comment,
  [13138] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1139), 1,
      sym_color,
    STATE(470), 1,
      sym_comment,
  [13151] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1141), 1,
      aux_sym_attribute_token2,
    STATE(471), 1,
      sym_comment,
  [13164] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1143), 1,
      aux_sym__NEWLINE_token1,
    STATE(472), 1,
      sym_comment,
  [13177] = 4,
    ACTIONS(295), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(473), 1,
      sym_comment,
  [13190] = 4,
    ACTIONS(299), 1,
      aux_sym__NEWLINE_token1,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(474), 1,
      sym_comment,
  [13203] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(851), 1,
      anon_sym_COLON,
    STATE(475), 1,
      sym_comment,
  [13216] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1145), 1,
      aux_sym_comment_token2,
    STATE(476), 1,
      sym_comment,
  [13229] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(855), 1,
      anon_sym_COLON,
    STATE(477), 1,
      sym_comment,
  [13242] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1147), 1,
      anon_sym_COLON,
    STATE(478), 1,
      sym_comment,
  [13255] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1149), 1,
      anon_sym_COLON,
    STATE(479), 1,
      sym_comment,
  [13268] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1151), 1,
      aux_sym_custom_label_token1,
    STATE(480), 1,
      sym_comment,
  [13281] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(641), 1,
      aux_sym__NEWLINE_token1,
    STATE(481), 1,
      sym_comment,
  [13294] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1153), 1,
      aux_sym__NEWLINE_token1,
    STATE(482), 1,
      sym_comment,
  [13307] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1155), 1,
      anon_sym_RBRACK,
    STATE(483), 1,
      sym_comment,
  [13320] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1157), 1,
      sym_color,
    STATE(484), 1,
      sym_comment,
  [13333] = 4,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(645), 1,
      aux_sym__NEWLINE_token1,
    STATE(485), 1,
      sym_comment,
  [13346] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1159), 1,
      sym_color,
    STATE(486), 1,
      sym_comment,
  [13359] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1161), 1,
      sym_color,
    STATE(487), 1,
      sym_comment,
  [13372] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1163), 1,
      sym_color,
    STATE(488), 1,
      sym_comment,
  [13385] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1165), 1,
      ts_builtin_sym_end,
    STATE(489), 1,
      sym_comment,
  [13398] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1167), 1,
      aux_sym_attribute_token2,
    STATE(490), 1,
      sym_comment,
  [13411] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1169), 1,
      sym_color,
    STATE(491), 1,
      sym_comment,
  [13424] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1171), 1,
      sym_color,
    STATE(492), 1,
      sym_comment,
  [13437] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1173), 1,
      sym_color,
    STATE(493), 1,
      sym_comment,
  [13450] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1175), 1,
      sym_color,
    STATE(494), 1,
      sym_comment,
  [13463] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(295), 1,
      aux_sym_attribute_token2,
    STATE(495), 1,
      sym_comment,
  [13476] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1177), 1,
      aux_sym_attr_alias_token1,
    STATE(496), 1,
      sym_comment,
  [13489] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1179), 1,
      anon_sym_COLON,
    STATE(497), 1,
      sym_comment,
  [13502] = 1,
    ACTIONS(1181), 1,
      ts_builtin_sym_end,
  [13506] = 1,
    ACTIONS(1183), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 410,
  [SMALL_STATE(8)] = 492,
  [SMALL_STATE(9)] = 567,
  [SMALL_STATE(10)] = 644,
  [SMALL_STATE(11)] = 721,
  [SMALL_STATE(12)] = 797,
  [SMALL_STATE(13)] = 871,
  [SMALL_STATE(14)] = 947,
  [SMALL_STATE(15)] = 1023,
  [SMALL_STATE(16)] = 1099,
  [SMALL_STATE(17)] = 1175,
  [SMALL_STATE(18)] = 1249,
  [SMALL_STATE(19)] = 1325,
  [SMALL_STATE(20)] = 1401,
  [SMALL_STATE(21)] = 1477,
  [SMALL_STATE(22)] = 1553,
  [SMALL_STATE(23)] = 1629,
  [SMALL_STATE(24)] = 1705,
  [SMALL_STATE(25)] = 1781,
  [SMALL_STATE(26)] = 1857,
  [SMALL_STATE(27)] = 1933,
  [SMALL_STATE(28)] = 1991,
  [SMALL_STATE(29)] = 2048,
  [SMALL_STATE(30)] = 2105,
  [SMALL_STATE(31)] = 2155,
  [SMALL_STATE(32)] = 2207,
  [SMALL_STATE(33)] = 2259,
  [SMALL_STATE(34)] = 2311,
  [SMALL_STATE(35)] = 2360,
  [SMALL_STATE(36)] = 2411,
  [SMALL_STATE(37)] = 2462,
  [SMALL_STATE(38)] = 2511,
  [SMALL_STATE(39)] = 2562,
  [SMALL_STATE(40)] = 2613,
  [SMALL_STATE(41)] = 2664,
  [SMALL_STATE(42)] = 2715,
  [SMALL_STATE(43)] = 2755,
  [SMALL_STATE(44)] = 2795,
  [SMALL_STATE(45)] = 2835,
  [SMALL_STATE(46)] = 2874,
  [SMALL_STATE(47)] = 2913,
  [SMALL_STATE(48)] = 2958,
  [SMALL_STATE(49)] = 2997,
  [SMALL_STATE(50)] = 3036,
  [SMALL_STATE(51)] = 3075,
  [SMALL_STATE(52)] = 3114,
  [SMALL_STATE(53)] = 3153,
  [SMALL_STATE(54)] = 3192,
  [SMALL_STATE(55)] = 3231,
  [SMALL_STATE(56)] = 3270,
  [SMALL_STATE(57)] = 3309,
  [SMALL_STATE(58)] = 3348,
  [SMALL_STATE(59)] = 3386,
  [SMALL_STATE(60)] = 3424,
  [SMALL_STATE(61)] = 3462,
  [SMALL_STATE(62)] = 3500,
  [SMALL_STATE(63)] = 3544,
  [SMALL_STATE(64)] = 3582,
  [SMALL_STATE(65)] = 3620,
  [SMALL_STATE(66)] = 3658,
  [SMALL_STATE(67)] = 3696,
  [SMALL_STATE(68)] = 3734,
  [SMALL_STATE(69)] = 3772,
  [SMALL_STATE(70)] = 3810,
  [SMALL_STATE(71)] = 3852,
  [SMALL_STATE(72)] = 3890,
  [SMALL_STATE(73)] = 3928,
  [SMALL_STATE(74)] = 3966,
  [SMALL_STATE(75)] = 4004,
  [SMALL_STATE(76)] = 4048,
  [SMALL_STATE(77)] = 4087,
  [SMALL_STATE(78)] = 4124,
  [SMALL_STATE(79)] = 4161,
  [SMALL_STATE(80)] = 4198,
  [SMALL_STATE(81)] = 4235,
  [SMALL_STATE(82)] = 4272,
  [SMALL_STATE(83)] = 4309,
  [SMALL_STATE(84)] = 4350,
  [SMALL_STATE(85)] = 4387,
  [SMALL_STATE(86)] = 4423,
  [SMALL_STATE(87)] = 4459,
  [SMALL_STATE(88)] = 4495,
  [SMALL_STATE(89)] = 4531,
  [SMALL_STATE(90)] = 4569,
  [SMALL_STATE(91)] = 4605,
  [SMALL_STATE(92)] = 4641,
  [SMALL_STATE(93)] = 4677,
  [SMALL_STATE(94)] = 4713,
  [SMALL_STATE(95)] = 4749,
  [SMALL_STATE(96)] = 4785,
  [SMALL_STATE(97)] = 4821,
  [SMALL_STATE(98)] = 4857,
  [SMALL_STATE(99)] = 4893,
  [SMALL_STATE(100)] = 4929,
  [SMALL_STATE(101)] = 4965,
  [SMALL_STATE(102)] = 5001,
  [SMALL_STATE(103)] = 5037,
  [SMALL_STATE(104)] = 5075,
  [SMALL_STATE(105)] = 5111,
  [SMALL_STATE(106)] = 5147,
  [SMALL_STATE(107)] = 5183,
  [SMALL_STATE(108)] = 5219,
  [SMALL_STATE(109)] = 5255,
  [SMALL_STATE(110)] = 5291,
  [SMALL_STATE(111)] = 5327,
  [SMALL_STATE(112)] = 5363,
  [SMALL_STATE(113)] = 5399,
  [SMALL_STATE(114)] = 5435,
  [SMALL_STATE(115)] = 5471,
  [SMALL_STATE(116)] = 5507,
  [SMALL_STATE(117)] = 5543,
  [SMALL_STATE(118)] = 5579,
  [SMALL_STATE(119)] = 5615,
  [SMALL_STATE(120)] = 5650,
  [SMALL_STATE(121)] = 5685,
  [SMALL_STATE(122)] = 5720,
  [SMALL_STATE(123)] = 5755,
  [SMALL_STATE(124)] = 5790,
  [SMALL_STATE(125)] = 5825,
  [SMALL_STATE(126)] = 5860,
  [SMALL_STATE(127)] = 5895,
  [SMALL_STATE(128)] = 5930,
  [SMALL_STATE(129)] = 5965,
  [SMALL_STATE(130)] = 6000,
  [SMALL_STATE(131)] = 6035,
  [SMALL_STATE(132)] = 6070,
  [SMALL_STATE(133)] = 6105,
  [SMALL_STATE(134)] = 6140,
  [SMALL_STATE(135)] = 6175,
  [SMALL_STATE(136)] = 6210,
  [SMALL_STATE(137)] = 6245,
  [SMALL_STATE(138)] = 6280,
  [SMALL_STATE(139)] = 6315,
  [SMALL_STATE(140)] = 6350,
  [SMALL_STATE(141)] = 6385,
  [SMALL_STATE(142)] = 6420,
  [SMALL_STATE(143)] = 6455,
  [SMALL_STATE(144)] = 6490,
  [SMALL_STATE(145)] = 6525,
  [SMALL_STATE(146)] = 6560,
  [SMALL_STATE(147)] = 6595,
  [SMALL_STATE(148)] = 6630,
  [SMALL_STATE(149)] = 6665,
  [SMALL_STATE(150)] = 6700,
  [SMALL_STATE(151)] = 6735,
  [SMALL_STATE(152)] = 6770,
  [SMALL_STATE(153)] = 6805,
  [SMALL_STATE(154)] = 6840,
  [SMALL_STATE(155)] = 6875,
  [SMALL_STATE(156)] = 6910,
  [SMALL_STATE(157)] = 6945,
  [SMALL_STATE(158)] = 6980,
  [SMALL_STATE(159)] = 7015,
  [SMALL_STATE(160)] = 7050,
  [SMALL_STATE(161)] = 7085,
  [SMALL_STATE(162)] = 7120,
  [SMALL_STATE(163)] = 7155,
  [SMALL_STATE(164)] = 7190,
  [SMALL_STATE(165)] = 7225,
  [SMALL_STATE(166)] = 7260,
  [SMALL_STATE(167)] = 7295,
  [SMALL_STATE(168)] = 7330,
  [SMALL_STATE(169)] = 7365,
  [SMALL_STATE(170)] = 7400,
  [SMALL_STATE(171)] = 7435,
  [SMALL_STATE(172)] = 7470,
  [SMALL_STATE(173)] = 7505,
  [SMALL_STATE(174)] = 7540,
  [SMALL_STATE(175)] = 7575,
  [SMALL_STATE(176)] = 7610,
  [SMALL_STATE(177)] = 7645,
  [SMALL_STATE(178)] = 7673,
  [SMALL_STATE(179)] = 7701,
  [SMALL_STATE(180)] = 7729,
  [SMALL_STATE(181)] = 7765,
  [SMALL_STATE(182)] = 7801,
  [SMALL_STATE(183)] = 7837,
  [SMALL_STATE(184)] = 7864,
  [SMALL_STATE(185)] = 7891,
  [SMALL_STATE(186)] = 7918,
  [SMALL_STATE(187)] = 7945,
  [SMALL_STATE(188)] = 7969,
  [SMALL_STATE(189)] = 7993,
  [SMALL_STATE(190)] = 8017,
  [SMALL_STATE(191)] = 8041,
  [SMALL_STATE(192)] = 8070,
  [SMALL_STATE(193)] = 8093,
  [SMALL_STATE(194)] = 8122,
  [SMALL_STATE(195)] = 8145,
  [SMALL_STATE(196)] = 8174,
  [SMALL_STATE(197)] = 8200,
  [SMALL_STATE(198)] = 8226,
  [SMALL_STATE(199)] = 8252,
  [SMALL_STATE(200)] = 8278,
  [SMALL_STATE(201)] = 8298,
  [SMALL_STATE(202)] = 8324,
  [SMALL_STATE(203)] = 8350,
  [SMALL_STATE(204)] = 8376,
  [SMALL_STATE(205)] = 8396,
  [SMALL_STATE(206)] = 8422,
  [SMALL_STATE(207)] = 8448,
  [SMALL_STATE(208)] = 8474,
  [SMALL_STATE(209)] = 8500,
  [SMALL_STATE(210)] = 8526,
  [SMALL_STATE(211)] = 8552,
  [SMALL_STATE(212)] = 8578,
  [SMALL_STATE(213)] = 8598,
  [SMALL_STATE(214)] = 8624,
  [SMALL_STATE(215)] = 8650,
  [SMALL_STATE(216)] = 8676,
  [SMALL_STATE(217)] = 8702,
  [SMALL_STATE(218)] = 8726,
  [SMALL_STATE(219)] = 8751,
  [SMALL_STATE(220)] = 8772,
  [SMALL_STATE(221)] = 8797,
  [SMALL_STATE(222)] = 8822,
  [SMALL_STATE(223)] = 8843,
  [SMALL_STATE(224)] = 8868,
  [SMALL_STATE(225)] = 8891,
  [SMALL_STATE(226)] = 8912,
  [SMALL_STATE(227)] = 8933,
  [SMALL_STATE(228)] = 8958,
  [SMALL_STATE(229)] = 8983,
  [SMALL_STATE(230)] = 9008,
  [SMALL_STATE(231)] = 9029,
  [SMALL_STATE(232)] = 9050,
  [SMALL_STATE(233)] = 9071,
  [SMALL_STATE(234)] = 9096,
  [SMALL_STATE(235)] = 9121,
  [SMALL_STATE(236)] = 9143,
  [SMALL_STATE(237)] = 9165,
  [SMALL_STATE(238)] = 9183,
  [SMALL_STATE(239)] = 9205,
  [SMALL_STATE(240)] = 9227,
  [SMALL_STATE(241)] = 9249,
  [SMALL_STATE(242)] = 9269,
  [SMALL_STATE(243)] = 9289,
  [SMALL_STATE(244)] = 9309,
  [SMALL_STATE(245)] = 9329,
  [SMALL_STATE(246)] = 9349,
  [SMALL_STATE(247)] = 9369,
  [SMALL_STATE(248)] = 9389,
  [SMALL_STATE(249)] = 9409,
  [SMALL_STATE(250)] = 9429,
  [SMALL_STATE(251)] = 9445,
  [SMALL_STATE(252)] = 9465,
  [SMALL_STATE(253)] = 9485,
  [SMALL_STATE(254)] = 9503,
  [SMALL_STATE(255)] = 9523,
  [SMALL_STATE(256)] = 9543,
  [SMALL_STATE(257)] = 9565,
  [SMALL_STATE(258)] = 9587,
  [SMALL_STATE(259)] = 9609,
  [SMALL_STATE(260)] = 9629,
  [SMALL_STATE(261)] = 9649,
  [SMALL_STATE(262)] = 9669,
  [SMALL_STATE(263)] = 9689,
  [SMALL_STATE(264)] = 9709,
  [SMALL_STATE(265)] = 9727,
  [SMALL_STATE(266)] = 9745,
  [SMALL_STATE(267)] = 9763,
  [SMALL_STATE(268)] = 9785,
  [SMALL_STATE(269)] = 9805,
  [SMALL_STATE(270)] = 9825,
  [SMALL_STATE(271)] = 9843,
  [SMALL_STATE(272)] = 9861,
  [SMALL_STATE(273)] = 9883,
  [SMALL_STATE(274)] = 9901,
  [SMALL_STATE(275)] = 9923,
  [SMALL_STATE(276)] = 9941,
  [SMALL_STATE(277)] = 9959,
  [SMALL_STATE(278)] = 9981,
  [SMALL_STATE(279)] = 9999,
  [SMALL_STATE(280)] = 10021,
  [SMALL_STATE(281)] = 10043,
  [SMALL_STATE(282)] = 10059,
  [SMALL_STATE(283)] = 10081,
  [SMALL_STATE(284)] = 10103,
  [SMALL_STATE(285)] = 10125,
  [SMALL_STATE(286)] = 10143,
  [SMALL_STATE(287)] = 10165,
  [SMALL_STATE(288)] = 10183,
  [SMALL_STATE(289)] = 10205,
  [SMALL_STATE(290)] = 10227,
  [SMALL_STATE(291)] = 10249,
  [SMALL_STATE(292)] = 10271,
  [SMALL_STATE(293)] = 10293,
  [SMALL_STATE(294)] = 10315,
  [SMALL_STATE(295)] = 10337,
  [SMALL_STATE(296)] = 10355,
  [SMALL_STATE(297)] = 10373,
  [SMALL_STATE(298)] = 10395,
  [SMALL_STATE(299)] = 10417,
  [SMALL_STATE(300)] = 10435,
  [SMALL_STATE(301)] = 10453,
  [SMALL_STATE(302)] = 10475,
  [SMALL_STATE(303)] = 10495,
  [SMALL_STATE(304)] = 10514,
  [SMALL_STATE(305)] = 10529,
  [SMALL_STATE(306)] = 10548,
  [SMALL_STATE(307)] = 10567,
  [SMALL_STATE(308)] = 10582,
  [SMALL_STATE(309)] = 10601,
  [SMALL_STATE(310)] = 10616,
  [SMALL_STATE(311)] = 10635,
  [SMALL_STATE(312)] = 10654,
  [SMALL_STATE(313)] = 10673,
  [SMALL_STATE(314)] = 10688,
  [SMALL_STATE(315)] = 10707,
  [SMALL_STATE(316)] = 10722,
  [SMALL_STATE(317)] = 10737,
  [SMALL_STATE(318)] = 10754,
  [SMALL_STATE(319)] = 10769,
  [SMALL_STATE(320)] = 10788,
  [SMALL_STATE(321)] = 10803,
  [SMALL_STATE(322)] = 10818,
  [SMALL_STATE(323)] = 10837,
  [SMALL_STATE(324)] = 10852,
  [SMALL_STATE(325)] = 10871,
  [SMALL_STATE(326)] = 10890,
  [SMALL_STATE(327)] = 10907,
  [SMALL_STATE(328)] = 10922,
  [SMALL_STATE(329)] = 10941,
  [SMALL_STATE(330)] = 10958,
  [SMALL_STATE(331)] = 10973,
  [SMALL_STATE(332)] = 10992,
  [SMALL_STATE(333)] = 11007,
  [SMALL_STATE(334)] = 11024,
  [SMALL_STATE(335)] = 11043,
  [SMALL_STATE(336)] = 11062,
  [SMALL_STATE(337)] = 11081,
  [SMALL_STATE(338)] = 11100,
  [SMALL_STATE(339)] = 11119,
  [SMALL_STATE(340)] = 11138,
  [SMALL_STATE(341)] = 11153,
  [SMALL_STATE(342)] = 11170,
  [SMALL_STATE(343)] = 11189,
  [SMALL_STATE(344)] = 11204,
  [SMALL_STATE(345)] = 11223,
  [SMALL_STATE(346)] = 11242,
  [SMALL_STATE(347)] = 11261,
  [SMALL_STATE(348)] = 11280,
  [SMALL_STATE(349)] = 11299,
  [SMALL_STATE(350)] = 11318,
  [SMALL_STATE(351)] = 11337,
  [SMALL_STATE(352)] = 11356,
  [SMALL_STATE(353)] = 11375,
  [SMALL_STATE(354)] = 11394,
  [SMALL_STATE(355)] = 11413,
  [SMALL_STATE(356)] = 11432,
  [SMALL_STATE(357)] = 11451,
  [SMALL_STATE(358)] = 11470,
  [SMALL_STATE(359)] = 11489,
  [SMALL_STATE(360)] = 11506,
  [SMALL_STATE(361)] = 11525,
  [SMALL_STATE(362)] = 11544,
  [SMALL_STATE(363)] = 11559,
  [SMALL_STATE(364)] = 11578,
  [SMALL_STATE(365)] = 11597,
  [SMALL_STATE(366)] = 11616,
  [SMALL_STATE(367)] = 11635,
  [SMALL_STATE(368)] = 11654,
  [SMALL_STATE(369)] = 11673,
  [SMALL_STATE(370)] = 11688,
  [SMALL_STATE(371)] = 11707,
  [SMALL_STATE(372)] = 11722,
  [SMALL_STATE(373)] = 11737,
  [SMALL_STATE(374)] = 11756,
  [SMALL_STATE(375)] = 11772,
  [SMALL_STATE(376)] = 11788,
  [SMALL_STATE(377)] = 11802,
  [SMALL_STATE(378)] = 11818,
  [SMALL_STATE(379)] = 11834,
  [SMALL_STATE(380)] = 11850,
  [SMALL_STATE(381)] = 11866,
  [SMALL_STATE(382)] = 11882,
  [SMALL_STATE(383)] = 11898,
  [SMALL_STATE(384)] = 11914,
  [SMALL_STATE(385)] = 11930,
  [SMALL_STATE(386)] = 11946,
  [SMALL_STATE(387)] = 11962,
  [SMALL_STATE(388)] = 11978,
  [SMALL_STATE(389)] = 11992,
  [SMALL_STATE(390)] = 12008,
  [SMALL_STATE(391)] = 12024,
  [SMALL_STATE(392)] = 12040,
  [SMALL_STATE(393)] = 12056,
  [SMALL_STATE(394)] = 12072,
  [SMALL_STATE(395)] = 12088,
  [SMALL_STATE(396)] = 12104,
  [SMALL_STATE(397)] = 12120,
  [SMALL_STATE(398)] = 12136,
  [SMALL_STATE(399)] = 12150,
  [SMALL_STATE(400)] = 12166,
  [SMALL_STATE(401)] = 12180,
  [SMALL_STATE(402)] = 12194,
  [SMALL_STATE(403)] = 12210,
  [SMALL_STATE(404)] = 12224,
  [SMALL_STATE(405)] = 12240,
  [SMALL_STATE(406)] = 12254,
  [SMALL_STATE(407)] = 12270,
  [SMALL_STATE(408)] = 12286,
  [SMALL_STATE(409)] = 12302,
  [SMALL_STATE(410)] = 12318,
  [SMALL_STATE(411)] = 12334,
  [SMALL_STATE(412)] = 12350,
  [SMALL_STATE(413)] = 12364,
  [SMALL_STATE(414)] = 12380,
  [SMALL_STATE(415)] = 12396,
  [SMALL_STATE(416)] = 12412,
  [SMALL_STATE(417)] = 12428,
  [SMALL_STATE(418)] = 12444,
  [SMALL_STATE(419)] = 12460,
  [SMALL_STATE(420)] = 12476,
  [SMALL_STATE(421)] = 12492,
  [SMALL_STATE(422)] = 12508,
  [SMALL_STATE(423)] = 12524,
  [SMALL_STATE(424)] = 12540,
  [SMALL_STATE(425)] = 12553,
  [SMALL_STATE(426)] = 12566,
  [SMALL_STATE(427)] = 12579,
  [SMALL_STATE(428)] = 12592,
  [SMALL_STATE(429)] = 12605,
  [SMALL_STATE(430)] = 12618,
  [SMALL_STATE(431)] = 12631,
  [SMALL_STATE(432)] = 12644,
  [SMALL_STATE(433)] = 12657,
  [SMALL_STATE(434)] = 12670,
  [SMALL_STATE(435)] = 12683,
  [SMALL_STATE(436)] = 12696,
  [SMALL_STATE(437)] = 12709,
  [SMALL_STATE(438)] = 12722,
  [SMALL_STATE(439)] = 12735,
  [SMALL_STATE(440)] = 12748,
  [SMALL_STATE(441)] = 12761,
  [SMALL_STATE(442)] = 12774,
  [SMALL_STATE(443)] = 12787,
  [SMALL_STATE(444)] = 12800,
  [SMALL_STATE(445)] = 12813,
  [SMALL_STATE(446)] = 12826,
  [SMALL_STATE(447)] = 12839,
  [SMALL_STATE(448)] = 12852,
  [SMALL_STATE(449)] = 12865,
  [SMALL_STATE(450)] = 12878,
  [SMALL_STATE(451)] = 12891,
  [SMALL_STATE(452)] = 12904,
  [SMALL_STATE(453)] = 12917,
  [SMALL_STATE(454)] = 12930,
  [SMALL_STATE(455)] = 12943,
  [SMALL_STATE(456)] = 12956,
  [SMALL_STATE(457)] = 12969,
  [SMALL_STATE(458)] = 12982,
  [SMALL_STATE(459)] = 12995,
  [SMALL_STATE(460)] = 13008,
  [SMALL_STATE(461)] = 13021,
  [SMALL_STATE(462)] = 13034,
  [SMALL_STATE(463)] = 13047,
  [SMALL_STATE(464)] = 13060,
  [SMALL_STATE(465)] = 13073,
  [SMALL_STATE(466)] = 13086,
  [SMALL_STATE(467)] = 13099,
  [SMALL_STATE(468)] = 13112,
  [SMALL_STATE(469)] = 13125,
  [SMALL_STATE(470)] = 13138,
  [SMALL_STATE(471)] = 13151,
  [SMALL_STATE(472)] = 13164,
  [SMALL_STATE(473)] = 13177,
  [SMALL_STATE(474)] = 13190,
  [SMALL_STATE(475)] = 13203,
  [SMALL_STATE(476)] = 13216,
  [SMALL_STATE(477)] = 13229,
  [SMALL_STATE(478)] = 13242,
  [SMALL_STATE(479)] = 13255,
  [SMALL_STATE(480)] = 13268,
  [SMALL_STATE(481)] = 13281,
  [SMALL_STATE(482)] = 13294,
  [SMALL_STATE(483)] = 13307,
  [SMALL_STATE(484)] = 13320,
  [SMALL_STATE(485)] = 13333,
  [SMALL_STATE(486)] = 13346,
  [SMALL_STATE(487)] = 13359,
  [SMALL_STATE(488)] = 13372,
  [SMALL_STATE(489)] = 13385,
  [SMALL_STATE(490)] = 13398,
  [SMALL_STATE(491)] = 13411,
  [SMALL_STATE(492)] = 13424,
  [SMALL_STATE(493)] = 13437,
  [SMALL_STATE(494)] = 13450,
  [SMALL_STATE(495)] = 13463,
  [SMALL_STATE(496)] = 13476,
  [SMALL_STATE(497)] = 13489,
  [SMALL_STATE(498)] = 13502,
  [SMALL_STATE(499)] = 13506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(455),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(496),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(466),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 1),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(448),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(454),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(458),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(488),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(437),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(464),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 15),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 15),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 6, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 6, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 7, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 7, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 8, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 8, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 9, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 9, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 4, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 4, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__NEWLINE, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_label, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_label, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_note, 5, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_note, 5, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 12),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 12),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [758] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [761] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [792] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_note_repeat1, 2, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 10),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 11),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 6),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(401),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 4),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 5),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 5),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 7),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 8),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 9),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 10),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 2),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 11),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 4),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 7),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 8),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 9),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 6),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1093] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
