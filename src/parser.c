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
#define STATE_COUNT 394
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 14
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  sym_label = 3,
  anon_sym_alt = 4,
  anon_sym_else = 5,
  anon_sym_end = 6,
  anon_sym_loop = 7,
  anon_sym_LBRACK = 8,
  aux_sym_custom_label_token1 = 9,
  anon_sym_RBRACK = 10,
  anon_sym_group = 11,
  anon_sym_skinparam = 12,
  anon_sym_sequenceMessageAlign = 13,
  anon_sym_left = 14,
  anon_sym_right = 15,
  anon_sym_center = 16,
  anon_sym_responseMessageBelowArrow = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  anon_sym_autonumber = 20,
  anon_sym_inc = 21,
  anon_sym_resume = 22,
  aux_sym_attribute_token1 = 23,
  aux_sym_attribute_token2 = 24,
  aux_sym_attribute_token3 = 25,
  aux_sym_attribute_token4 = 26,
  anon_sym_autonumberstop = 27,
  anon_sym_participant = 28,
  anon_sym_actor = 29,
  anon_sym_boundary = 30,
  anon_sym_control = 31,
  anon_sym_entity = 32,
  anon_sym_database = 33,
  anon_sym_collections = 34,
  anon_sym_queue = 35,
  anon_sym_POUND = 36,
  aux_sym_multiline_token1 = 37,
  anon_sym_as = 38,
  aux_sym_attr_alias_token1 = 39,
  anon_sym_order = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_string_token1 = 42,
  anon_sym_BSLASH_DQUOTE = 43,
  anon_sym_BSLASH = 44,
  aux_sym_escape_char_token1 = 45,
  anon_sym_COLON = 46,
  aux_sym_sequence_diagram_token1 = 47,
  anon_sym_DASH = 48,
  anon_sym_GT = 49,
  anon_sym_o = 50,
  anon_sym_x = 51,
  anon_sym_ox = 52,
  anon_sym_GT_GT = 53,
  anon_sym_BSLASH_BSLASH = 54,
  anon_sym_SLASH = 55,
  anon_sym_SLASH_SLASH = 56,
  anon_sym_DASH_DASH = 57,
  anon_sym_LBRACK_POUND = 58,
  anon_sym_LT = 59,
  anon_sym_xo = 60,
  anon_sym_LT_LT = 61,
  anon_sym_ATstartjson = 62,
  anon_sym_AT = 63,
  aux_sym_json_token1 = 64,
  anon_sym_ATendjson = 65,
  anon_sym_ATstartyaml = 66,
  anon_sym_ATendyaml = 67,
  anon_sym_ATstartebnf = 68,
  anon_sym_ATendebnf = 69,
  anon_sym_ATstartregex = 70,
  anon_sym_ATendregex = 71,
  anon_sym_ATstartditaa = 72,
  anon_sym_ATendditaa = 73,
  anon_sym_ATstartgantt = 74,
  anon_sym_ATendgantt = 75,
  anon_sym_ATstartchronology = 76,
  anon_sym_ATendchronology = 77,
  anon_sym_ATstartmindmap = 78,
  anon_sym_ATendmindmap = 79,
  anon_sym_ATstartwbs = 80,
  anon_sym_ATendwbs = 81,
  anon_sym_ATstartchen = 82,
  anon_sym_ATendchen = 83,
  anon_sym_SQUOTE = 84,
  aux_sym_comment_token1 = 85,
  anon_sym_SLASH_SQUOTE = 86,
  aux_sym_comment_token2 = 87,
  sym_color = 88,
  sym_diagram = 89,
  sym_uml = 90,
  sym_expression = 91,
  sym_alt_block = 92,
  sym_loop_block = 93,
  sym_custom_label = 94,
  sym_group_block = 95,
  sym_skinparam = 96,
  sym_boolean_literal = 97,
  sym_attribute = 98,
  sym_multiline = 99,
  sym_attr_alias = 100,
  sym_attr_order = 101,
  sym_string = 102,
  sym_escape_char = 103,
  sym_participant_name = 104,
  sym_sequence_diagram = 105,
  sym_connector = 106,
  sym_json = 107,
  sym_yaml = 108,
  sym_ebnf = 109,
  sym_regex = 110,
  sym_ditaa = 111,
  sym_gantt = 112,
  sym_chronology = 113,
  sym_mindmap = 114,
  sym_wbs = 115,
  sym_chen = 116,
  sym_comment = 117,
  aux_sym_uml_repeat1 = 118,
  aux_sym_alt_block_repeat1 = 119,
  aux_sym_attribute_repeat1 = 120,
  aux_sym_attribute_repeat2 = 121,
  aux_sym_multiline_repeat1 = 122,
  aux_sym_string_repeat1 = 123,
  aux_sym_json_repeat1 = 124,
  aux_sym_json_repeat2 = 125,
  alias_sym_chen_data = 126,
  alias_sym_chronology_data = 127,
  alias_sym_ditaa_data = 128,
  alias_sym_ebnf_data = 129,
  alias_sym_gantt_data = 130,
  alias_sym_json_data = 131,
  alias_sym_left = 132,
  alias_sym_mindmap_data = 133,
  alias_sym_new_name = 134,
  alias_sym_regex_data = 135,
  alias_sym_right = 136,
  alias_sym_value = 137,
  alias_sym_wbs_data = 138,
  alias_sym_yaml_data = 139,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [sym_label] = "label",
  [anon_sym_alt] = "alt",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_loop] = "loop",
  [anon_sym_LBRACK] = "[",
  [aux_sym_custom_label_token1] = "content",
  [anon_sym_RBRACK] = "]",
  [anon_sym_group] = "group",
  [anon_sym_skinparam] = "skinparam",
  [anon_sym_sequenceMessageAlign] = "sequenceMessageAlign",
  [anon_sym_left] = "align",
  [anon_sym_right] = "align",
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
  [aux_sym_attribute_token4] = "attribute_token4",
  [anon_sym_autonumberstop] = "autonumber stop",
  [anon_sym_participant] = "kind",
  [anon_sym_actor] = "kind",
  [anon_sym_boundary] = "kind",
  [anon_sym_control] = "kind",
  [anon_sym_entity] = "kind",
  [anon_sym_database] = "kind",
  [anon_sym_collections] = "kind",
  [anon_sym_queue] = "kind",
  [anon_sym_POUND] = "#",
  [aux_sym_multiline_token1] = "multiline_token1",
  [anon_sym_as] = "as",
  [aux_sym_attr_alias_token1] = "attr_alias_token1",
  [anon_sym_order] = "order",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_char_token1] = "escape_char_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_sequence_diagram_token1] = "activity",
  [anon_sym_DASH] = "-",
  [anon_sym_GT] = ">",
  [anon_sym_o] = "o",
  [anon_sym_x] = "x",
  [anon_sym_ox] = "ox",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_SLASH] = "/",
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
  [sym_uml] = "uml",
  [sym_expression] = "expression",
  [sym_alt_block] = "alt_block",
  [sym_loop_block] = "loop_block",
  [sym_custom_label] = "custom_label",
  [sym_group_block] = "group_block",
  [sym_skinparam] = "skinparam",
  [sym_boolean_literal] = "boolean_literal",
  [sym_attribute] = "attribute",
  [sym_multiline] = "multiline",
  [sym_attr_alias] = "attr_alias",
  [sym_attr_order] = "attr_order",
  [sym_string] = "string",
  [sym_escape_char] = "escape_char",
  [sym_participant_name] = "name",
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
  [alias_sym_new_name] = "new_name",
  [alias_sym_regex_data] = "regex_data",
  [alias_sym_right] = "right",
  [alias_sym_value] = "value",
  [alias_sym_wbs_data] = "wbs_data",
  [alias_sym_yaml_data] = "yaml_data",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [sym_label] = sym_label,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_custom_label_token1] = aux_sym_custom_label_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_skinparam] = anon_sym_skinparam,
  [anon_sym_sequenceMessageAlign] = anon_sym_sequenceMessageAlign,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_left,
  [anon_sym_center] = anon_sym_left,
  [anon_sym_responseMessageBelowArrow] = anon_sym_responseMessageBelowArrow,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_autonumber] = anon_sym_autonumber,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_resume] = anon_sym_resume,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [aux_sym_attribute_token2] = aux_sym_attribute_token2,
  [aux_sym_attribute_token3] = aux_sym_attribute_token3,
  [aux_sym_attribute_token4] = aux_sym_attribute_token4,
  [anon_sym_autonumberstop] = anon_sym_autonumberstop,
  [anon_sym_participant] = anon_sym_participant,
  [anon_sym_actor] = anon_sym_participant,
  [anon_sym_boundary] = anon_sym_participant,
  [anon_sym_control] = anon_sym_participant,
  [anon_sym_entity] = anon_sym_participant,
  [anon_sym_database] = anon_sym_participant,
  [anon_sym_collections] = anon_sym_participant,
  [anon_sym_queue] = anon_sym_participant,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_multiline_token1] = aux_sym_multiline_token1,
  [anon_sym_as] = anon_sym_as,
  [aux_sym_attr_alias_token1] = aux_sym_attr_alias_token1,
  [anon_sym_order] = anon_sym_order,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_char_token1] = aux_sym_escape_char_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_sequence_diagram_token1] = aux_sym_sequence_diagram_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_ox] = anon_sym_ox,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_uml] = sym_uml,
  [sym_expression] = sym_expression,
  [sym_alt_block] = sym_alt_block,
  [sym_loop_block] = sym_loop_block,
  [sym_custom_label] = sym_custom_label,
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
  [anon_sym_ATstartuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenduml] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
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
  [anon_sym_loop] = {
    .visible = true,
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
  [anon_sym_left] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = true,
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
  [aux_sym_attribute_token4] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COLON] = {
    .visible = true,
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
  [anon_sym_SLASH] = {
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
  [sym_uml] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_alt_block] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_block] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_label] = {
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
    [1] = alias_sym_json_data,
  },
  [2] = {
    [1] = alias_sym_yaml_data,
  },
  [3] = {
    [1] = alias_sym_ebnf_data,
  },
  [4] = {
    [1] = alias_sym_regex_data,
  },
  [5] = {
    [1] = alias_sym_ditaa_data,
  },
  [6] = {
    [1] = alias_sym_gantt_data,
  },
  [7] = {
    [1] = alias_sym_chronology_data,
  },
  [8] = {
    [1] = alias_sym_mindmap_data,
  },
  [9] = {
    [1] = alias_sym_wbs_data,
  },
  [10] = {
    [1] = alias_sym_chen_data,
  },
  [11] = {
    [0] = alias_sym_left,
    [2] = alias_sym_right,
  },
  [12] = {
    [1] = alias_sym_new_name,
  },
  [13] = {
    [1] = alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_participant_name, 3,
    sym_participant_name,
    alias_sym_left,
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
  [4] = 4,
  [5] = 2,
  [6] = 2,
  [7] = 3,
  [8] = 4,
  [9] = 3,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 15,
  [21] = 13,
  [22] = 22,
  [23] = 22,
  [24] = 16,
  [25] = 17,
  [26] = 18,
  [27] = 15,
  [28] = 13,
  [29] = 22,
  [30] = 16,
  [31] = 18,
  [32] = 17,
  [33] = 33,
  [34] = 33,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 39,
  [42] = 38,
  [43] = 36,
  [44] = 37,
  [45] = 36,
  [46] = 38,
  [47] = 39,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 48,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 50,
  [61] = 49,
  [62] = 48,
  [63] = 49,
  [64] = 50,
  [65] = 55,
  [66] = 57,
  [67] = 53,
  [68] = 53,
  [69] = 54,
  [70] = 55,
  [71] = 56,
  [72] = 59,
  [73] = 58,
  [74] = 59,
  [75] = 58,
  [76] = 48,
  [77] = 49,
  [78] = 56,
  [79] = 54,
  [80] = 57,
  [81] = 81,
  [82] = 49,
  [83] = 50,
  [84] = 59,
  [85] = 48,
  [86] = 48,
  [87] = 49,
  [88] = 50,
  [89] = 59,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 81,
  [100] = 100,
  [101] = 81,
  [102] = 102,
  [103] = 103,
  [104] = 59,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 95,
  [114] = 93,
  [115] = 106,
  [116] = 105,
  [117] = 109,
  [118] = 107,
  [119] = 93,
  [120] = 103,
  [121] = 97,
  [122] = 98,
  [123] = 91,
  [124] = 94,
  [125] = 96,
  [126] = 102,
  [127] = 103,
  [128] = 95,
  [129] = 111,
  [130] = 111,
  [131] = 92,
  [132] = 100,
  [133] = 108,
  [134] = 94,
  [135] = 135,
  [136] = 96,
  [137] = 110,
  [138] = 112,
  [139] = 90,
  [140] = 91,
  [141] = 110,
  [142] = 97,
  [143] = 98,
  [144] = 100,
  [145] = 90,
  [146] = 92,
  [147] = 108,
  [148] = 106,
  [149] = 105,
  [150] = 109,
  [151] = 112,
  [152] = 107,
  [153] = 102,
  [154] = 154,
  [155] = 154,
  [156] = 154,
  [157] = 49,
  [158] = 48,
  [159] = 50,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 168,
  [170] = 170,
  [171] = 171,
  [172] = 168,
  [173] = 173,
  [174] = 174,
  [175] = 173,
  [176] = 176,
  [177] = 177,
  [178] = 174,
  [179] = 179,
  [180] = 174,
  [181] = 181,
  [182] = 174,
  [183] = 173,
  [184] = 174,
  [185] = 173,
  [186] = 174,
  [187] = 173,
  [188] = 174,
  [189] = 173,
  [190] = 174,
  [191] = 173,
  [192] = 174,
  [193] = 173,
  [194] = 173,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 197,
  [206] = 206,
  [207] = 200,
  [208] = 199,
  [209] = 200,
  [210] = 197,
  [211] = 199,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 213,
  [226] = 213,
  [227] = 213,
  [228] = 228,
  [229] = 213,
  [230] = 230,
  [231] = 213,
  [232] = 213,
  [233] = 233,
  [234] = 213,
  [235] = 214,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 212,
  [240] = 240,
  [241] = 241,
  [242] = 213,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 214,
  [248] = 248,
  [249] = 241,
  [250] = 212,
  [251] = 241,
  [252] = 252,
  [253] = 213,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 255,
  [260] = 260,
  [261] = 261,
  [262] = 255,
  [263] = 263,
  [264] = 255,
  [265] = 265,
  [266] = 255,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 255,
  [273] = 273,
  [274] = 268,
  [275] = 275,
  [276] = 276,
  [277] = 255,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 255,
  [283] = 283,
  [284] = 284,
  [285] = 255,
  [286] = 256,
  [287] = 287,
  [288] = 275,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 255,
  [294] = 294,
  [295] = 268,
  [296] = 275,
  [297] = 281,
  [298] = 298,
  [299] = 220,
  [300] = 300,
  [301] = 281,
  [302] = 302,
  [303] = 303,
  [304] = 256,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 322,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 322,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 49,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 334,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 341,
  [357] = 341,
  [358] = 344,
  [359] = 359,
  [360] = 347,
  [361] = 361,
  [362] = 50,
  [363] = 344,
  [364] = 338,
  [365] = 365,
  [366] = 337,
  [367] = 338,
  [368] = 368,
  [369] = 369,
  [370] = 334,
  [371] = 348,
  [372] = 372,
  [373] = 334,
  [374] = 347,
  [375] = 334,
  [376] = 50,
  [377] = 334,
  [378] = 378,
  [379] = 348,
  [380] = 49,
  [381] = 351,
  [382] = 369,
  [383] = 335,
  [384] = 350,
  [385] = 337,
  [386] = 351,
  [387] = 369,
  [388] = 335,
  [389] = 389,
  [390] = 343,
  [391] = 350,
  [392] = 392,
  [393] = 393,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(657);
      ADVANCE_MAP(
        '"', 791,
        '#', 699,
        '\'', 868,
        '-', 808,
        '/', 818,
        ':', 803,
        '<', 822,
        '>', 809,
        '@', 826,
        '[', 668,
        '\\', 798,
        ']', 672,
        'o', 810,
        'x', 812,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(791);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(875);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(869);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(874);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(874);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(877);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(874);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(802);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(801);
      if (lookahead != 0) ADVANCE(800);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 791,
        '#', 699,
        '\'', 868,
        '/', 35,
        '@', 111,
        '[', 668,
        'a', 714,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 746,
        'g', 768,
        'l', 754,
        'o', 763,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 791,
        '#', 699,
        '\'', 868,
        '/', 35,
        '[', 668,
        'a', 714,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 734,
        'g', 768,
        'l', 754,
        'o', 763,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 791,
        '#', 699,
        '\'', 868,
        '/', 35,
        '[', 668,
        'a', 714,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 740,
        'g', 768,
        'l', 754,
        'o', 763,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 791,
        '\'', 868,
        '-', 807,
        '/', 818,
        ':', 803,
        '<', 822,
        '>', 809,
        '@', 220,
        '[', 20,
        '\\', 799,
        'a', 715,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 734,
        'g', 768,
        'l', 754,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(791);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '-') ADVANCE(807);
      if (lookahead == '/') ADVANCE(818);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(799);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 791,
        '\'', 868,
        '/', 35,
        ':', 803,
        '@', 111,
        'a', 715,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 746,
        'g', 768,
        'l', 754,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 791,
        '\'', 868,
        '/', 35,
        ':', 803,
        '@', 111,
        'a', 714,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 746,
        'g', 768,
        'l', 754,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 791,
        '\'', 868,
        '/', 35,
        ':', 803,
        '[', 668,
        'a', 715,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 740,
        'g', 768,
        'l', 754,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 791,
        '\'', 868,
        '/', 35,
        ':', 803,
        'a', 714,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 734,
        'g', 768,
        'l', 754,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 791,
        '\'', 868,
        '/', 35,
        ':', 803,
        'a', 714,
        'b', 749,
        'c', 748,
        'd', 707,
        'e', 740,
        'g', 768,
        'l', 754,
        'p', 705,
        'q', 782,
        's', 733,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(791);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(811);
      if (lookahead == 'x') ADVANCE(814);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(791);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(791);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(797);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      if (lookahead != 0) ADVANCE(792);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(821);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\'', 868,
        '-', 808,
        '/', 818,
        '<', 822,
        '\\', 799,
        'c', 107,
        'e', 145,
        'f', 56,
        'l', 100,
        'o', 810,
        'r', 104,
        's', 91,
        't', 204,
        'x', 813,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 868,
        '/', 35,
        'A', 455,
        'a', 455,
        'B', 343,
        'b', 343,
        'C', 248,
        'c', 248,
        'D', 249,
        'd', 249,
        'F', 425,
        'f', 425,
        'G', 267,
        'g', 267,
        'H', 514,
        'h', 514,
        'I', 494,
        'i', 494,
        'K', 409,
        'k', 409,
        'L', 250,
        'l', 250,
        'M', 251,
        'm', 251,
        'N', 252,
        'n', 252,
        'O', 452,
        'o', 452,
        'P', 253,
        'p', 253,
        'R', 344,
        'r', 344,
        'S', 254,
        's', 254,
        'T', 261,
        't', 261,
        'V', 430,
        'v', 430,
        'W', 407,
        'w', 407,
        'Y', 355,
        'y', 355,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(702);
      if (lookahead == '\\') ADVANCE(796);
      if (lookahead == ']') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead != 0) ADVANCE(700);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(827);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(828);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(829);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(840);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(830);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(841);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(831);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(842);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(832);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(843);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(833);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(844);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(834);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(835);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(846);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(836);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(876);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(871);
      if (lookahead == '/') ADVANCE(660);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(806);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(870);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(882);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(878);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(206);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(142);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 'M') ADVANCE(106);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(857);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(856);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(211);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 66:
      ADVANCE_MAP(
        'c', 127,
        'd', 132,
        'e', 62,
        'g', 54,
        'j', 209,
        'm', 134,
        'r', 89,
        'w', 63,
        'y', 48,
      );
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(683);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 70:
      ADVANCE_MAP(
        'c', 131,
        'd', 135,
        'e', 65,
        'g', 58,
        'j', 221,
        'm', 136,
        'r', 110,
        'u', 150,
        'w', 64,
        'y', 60,
      );
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(665);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(853);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(852);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(245);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 137:
      if (lookahead == 'j') ADVANCE(209);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(851);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(867);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(866);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(675);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(863);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(862);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(690);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 201:
      if (lookahead == 'q') ADVANCE(238);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(865);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(864);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(859);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 240:
      if (lookahead == 'w') ADVANCE(679);
      END_STATE();
    case 241:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 242:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 243:
      if (lookahead == 'x') ADVANCE(855);
      END_STATE();
    case 244:
      if (lookahead == 'x') ADVANCE(854);
      END_STATE();
    case 245:
      if (lookahead == 'y') ADVANCE(861);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(860);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 248:
      ADVANCE_MAP(
        'A', 325,
        'a', 325,
        'H', 276,
        'h', 276,
        'O', 553,
        'o', 553,
        'R', 429,
        'r', 429,
        'Y', 260,
        'y', 260,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      END_STATE();
    case 249:
      ADVANCE_MAP(
        'A', 554,
        'a', 554,
        'E', 345,
        'e', 345,
        'I', 483,
        'i', 483,
        'O', 340,
        'o', 340,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      END_STATE();
    case 250:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 251:
      ADVANCE_MAP(
        'A', 404,
        'a', 404,
        'E', 332,
        'e', 332,
        'I', 330,
        'i', 330,
        'O', 314,
        'o', 314,
      );
      END_STATE();
    case 252:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 253:
      ADVANCE_MAP(
        'A', 464,
        'a', 464,
        'E', 285,
        'e', 285,
        'I', 495,
        'i', 495,
        'L', 618,
        'l', 618,
        'O', 637,
        'o', 637,
        'U', 561,
        'u', 561,
      );
      END_STATE();
    case 254:
      ADVANCE_MAP(
        'A', 329,
        'a', 329,
        'E', 257,
        'e', 257,
        'I', 364,
        'i', 364,
        'K', 643,
        'k', 643,
        'L', 268,
        'l', 268,
        'N', 519,
        'n', 519,
        'P', 567,
        'p', 567,
        'T', 380,
        't', 380,
      );
      END_STATE();
    case 255:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 256:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      END_STATE();
    case 257:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 258:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(890);
      END_STATE();
    case 259:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(883);
      END_STATE();
    case 260:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 261:
      ADVANCE_MAP(
        'A', 492,
        'a', 492,
        'E', 271,
        'e', 271,
        'H', 440,
        'h', 440,
        'O', 487,
        'o', 487,
        'R', 289,
        'r', 289,
        'U', 579,
        'u', 579,
      );
      END_STATE();
    case 262:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 263:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 264:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 265:
      ADVANCE_MAP(
        'A', 551,
        'a', 551,
        'B', 459,
        'b', 459,
        'O', 583,
        'o', 583,
        'P', 617,
        'p', 617,
        'S', 378,
        's', 378,
        'T', 619,
        't', 619,
        'V', 445,
        'v', 445,
      );
      END_STATE();
    case 266:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 267:
      ADVANCE_MAP(
        'A', 427,
        'a', 427,
        'H', 516,
        'h', 516,
        'O', 456,
        'o', 456,
        'R', 262,
        'r', 262,
      );
      END_STATE();
    case 268:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 269:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 270:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 271:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 272:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 273:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 274:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 275:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 276:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 281:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 282:
      ADVANCE_MAP(
        'A', 472,
        'a', 472,
        'E', 286,
        'e', 286,
        'K', 643,
        'k', 643,
        'L', 295,
        'l', 295,
        'T', 380,
        't', 380,
      );
      END_STATE();
    case 283:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 284:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(515);
      END_STATE();
    case 285:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 286:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 288:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 290:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(491);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 292:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 295:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 296:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 298:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 299:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 300:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(883);
      END_STATE();
    case 301:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(459);
      END_STATE();
    case 302:
      ADVANCE_MAP(
        'B', 459,
        'b', 459,
        'C', 536,
        'c', 536,
        'G', 541,
        'g', 541,
        'P', 420,
        'p', 420,
        'S', 282,
        's', 282,
        'Y', 389,
        'y', 389,
      );
      END_STATE();
    case 303:
      ADVANCE_MAP(
        'B', 459,
        'b', 459,
        'C', 644,
        'c', 644,
        'G', 538,
        'g', 538,
        'K', 409,
        'k', 409,
        'M', 294,
        'm', 294,
        'O', 467,
        'o', 467,
        'R', 363,
        'r', 363,
        'S', 283,
        's', 283,
        'T', 619,
        't', 619,
        'V', 430,
        'v', 430,
      );
      END_STATE();
    case 304:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(459);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 305:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(883);
      END_STATE();
    case 306:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(580);
      END_STATE();
    case 307:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(558);
      END_STATE();
    case 308:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(533);
      END_STATE();
    case 309:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(469);
      END_STATE();
    case 310:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 311:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 312:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 313:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 314:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 315:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 316:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(539);
      END_STATE();
    case 317:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 318:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 319:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 320:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 321:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 322:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 323:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 324:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 325:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(900);
      END_STATE();
    case 326:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(883);
      END_STATE();
    case 327:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 328:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(466);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 329:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 330:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(501);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(601);
      END_STATE();
    case 331:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 332:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 333:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(650);
      END_STATE();
    case 334:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 335:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 336:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 337:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 338:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 339:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(648);
      END_STATE();
    case 340:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 341:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 342:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 343:
      ADVANCE_MAP(
        'E', 421,
        'e', 421,
        'I', 584,
        'i', 584,
        'L', 255,
        'l', 255,
        'R', 518,
        'r', 518,
        'U', 562,
        'u', 562,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      END_STATE();
    case 344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(900);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 356:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 357:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(883);
      END_STATE();
    case 358:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 359:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 363:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(883);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(296);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(567);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 390:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(883);
      END_STATE();
    case 391:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(390);
      END_STATE();
    case 392:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(517);
      END_STATE();
    case 394:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(477);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      END_STATE();
    case 395:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(537);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(619);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(445);
      END_STATE();
    case 396:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(412);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 397:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 398:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(346);
      END_STATE();
    case 399:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      END_STATE();
    case 400:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 401:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(405);
      END_STATE();
    case 402:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(414);
      END_STATE();
    case 403:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(374);
      END_STATE();
    case 404:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 405:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(575);
      END_STATE();
    case 406:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 407:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(372);
      END_STATE();
    case 408:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(883);
      END_STATE();
    case 409:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 410:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(543);
      END_STATE();
    case 411:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(593);
      END_STATE();
    case 412:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(598);
      END_STATE();
    case 413:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(433);
      END_STATE();
    case 414:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(597);
      END_STATE();
    case 415:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(443);
      END_STATE();
    case 416:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(439);
      END_STATE();
    case 417:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(431);
      END_STATE();
    case 418:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 419:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 421:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(900);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 423:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 425:
      ADVANCE_MAP(
        'I', 563,
        'i', 563,
        'L', 527,
        'l', 527,
        'O', 564,
        'o', 564,
        'U', 310,
        'u', 310,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      END_STATE();
    case 426:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 427:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 428:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 429:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      END_STATE();
    case 430:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 431:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 432:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 433:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 434:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 435:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      END_STATE();
    case 436:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 437:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 438:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 439:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 440:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 441:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 442:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 443:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 444:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 446:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(520);
      END_STATE();
    case 447:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(643);
      END_STATE();
    case 448:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(883);
      END_STATE();
    case 449:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(303);
      END_STATE();
    case 450:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(422);
      END_STATE();
    case 451:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(346);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(883);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 455:
      ADVANCE_MAP(
        'L', 426,
        'l', 426,
        'N', 602,
        'n', 602,
        'Q', 621,
        'q', 621,
        'Z', 628,
        'z', 628,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(645);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(639);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(623);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 467:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 469:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 471:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 472:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 473:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 474:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 475:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 476:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 477:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 478:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 479:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 480:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 481:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(883);
      END_STATE();
    case 482:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 483:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(397);
      END_STATE();
    case 484:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(589);
      END_STATE();
    case 485:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(531);
      END_STATE();
    case 486:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 487:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(279);
      END_STATE();
    case 488:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(521);
      END_STATE();
    case 489:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 490:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(534);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(529);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 514:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 515:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(883);
      END_STATE();
    case 516:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 517:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(478);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 542:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(883);
      END_STATE();
    case 543:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      END_STATE();
    case 544:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 545:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(447);
      END_STATE();
    case 546:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 547:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(465);
      END_STATE();
    case 548:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 549:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(625);
      END_STATE();
    case 550:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(624);
      END_STATE();
    case 551:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(627);
      END_STATE();
    case 552:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(626);
      END_STATE();
    case 553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(900);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(883);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(885);
      END_STATE();
    case 558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(549);
      END_STATE();
    case 585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      END_STATE();
    case 587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      END_STATE();
    case 588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      END_STATE();
    case 589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      END_STATE();
    case 590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(408);
      END_STATE();
    case 591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      END_STATE();
    case 592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      END_STATE();
    case 594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      END_STATE();
    case 595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 596:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
      END_STATE();
    case 597:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 598:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 599:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(884);
      END_STATE();
    case 600:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(639);
      END_STATE();
    case 601:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      END_STATE();
    case 602:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(444);
      END_STATE();
    case 603:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 604:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      END_STATE();
    case 605:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 606:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      END_STATE();
    case 607:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 608:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 609:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      END_STATE();
    case 610:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      END_STATE();
    case 611:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      END_STATE();
    case 612:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(358);
      END_STATE();
    case 613:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(577);
      END_STATE();
    case 614:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      END_STATE();
    case 615:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(883);
      END_STATE();
    case 616:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 617:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 618:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 619:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 620:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 621:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 622:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(592);
      END_STATE();
    case 623:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 624:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 625:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 626:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 627:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 628:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      END_STATE();
    case 629:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(259);
      END_STATE();
    case 630:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(370);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(509);
      END_STATE();
    case 631:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 632:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(376);
      END_STATE();
    case 633:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(382);
      END_STATE();
    case 634:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(883);
      END_STATE();
    case 635:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(889);
      END_STATE();
    case 636:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(492);
      END_STATE();
    case 637:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(335);
      END_STATE();
    case 638:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(373);
      END_STATE();
    case 639:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(415);
      END_STATE();
    case 640:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(532);
      END_STATE();
    case 641:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(417);
      END_STATE();
    case 642:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(883);
      END_STATE();
    case 643:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 644:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 645:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(640);
      END_STATE();
    case 646:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(569);
      END_STATE();
    case 647:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 648:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 649:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(337);
      END_STATE();
    case 650:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 651:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 652:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 653:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(900);
      END_STATE();
    case 654:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(883);
      END_STATE();
    case 655:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      END_STATE();
    case 656:
      if (eof) ADVANCE(657);
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(791);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'') ADVANCE(879);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(661);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(873);
      if (lookahead == '/') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(671);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_attribute_token4);
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(702);
      if (lookahead == '\\') ADVANCE(796);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(700);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(876);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(779);
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == 's') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(779);
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == 'u') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(666);
      if (lookahead == 't') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(770);
      if (lookahead == 'n') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(797);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(792);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(876);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(795);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(817);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(817);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(802);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(801);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(800);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(876);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(804);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(806);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(806);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(816);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(823);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(876);
      if (lookahead == '/') ADVANCE(819);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(824);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(827);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(828);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(829);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(840);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(830);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(841);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(831);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(842);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(832);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(843);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(833);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(844);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(834);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(835);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(846);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '@') ADVANCE(836);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(876);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(874);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(661);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(806);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(671);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(875);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(869);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(874);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(661);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(806);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(671);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(463);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(576);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(899);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(575);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(899);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(488);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(897);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(430);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(898);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(654);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(897);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(899);
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
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 21},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 656},
  [169] = {.lex_state = 656},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 656},
  [173] = {.lex_state = 19},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 19},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 19},
  [180] = {.lex_state = 19},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 19},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 19},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 19},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 656},
  [198] = {.lex_state = 17},
  [199] = {.lex_state = 24},
  [200] = {.lex_state = 24},
  [201] = {.lex_state = 17},
  [202] = {.lex_state = 17},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 656},
  [206] = {.lex_state = 24},
  [207] = {.lex_state = 24},
  [208] = {.lex_state = 24},
  [209] = {.lex_state = 24},
  [210] = {.lex_state = 656},
  [211] = {.lex_state = 24},
  [212] = {.lex_state = 18},
  [213] = {.lex_state = 25},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 26},
  [216] = {.lex_state = 656},
  [217] = {.lex_state = 27},
  [218] = {.lex_state = 28},
  [219] = {.lex_state = 25},
  [220] = {.lex_state = 19},
  [221] = {.lex_state = 29},
  [222] = {.lex_state = 30},
  [223] = {.lex_state = 31},
  [224] = {.lex_state = 32},
  [225] = {.lex_state = 29},
  [226] = {.lex_state = 31},
  [227] = {.lex_state = 27},
  [228] = {.lex_state = 26},
  [229] = {.lex_state = 30},
  [230] = {.lex_state = 28},
  [231] = {.lex_state = 33},
  [232] = {.lex_state = 26},
  [233] = {.lex_state = 25},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 11},
  [236] = {.lex_state = 34},
  [237] = {.lex_state = 34},
  [238] = {.lex_state = 29},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 19},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 28},
  [243] = {.lex_state = 31},
  [244] = {.lex_state = 33},
  [245] = {.lex_state = 27},
  [246] = {.lex_state = 32},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 30},
  [249] = {.lex_state = 11},
  [250] = {.lex_state = 18},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 33},
  [253] = {.lex_state = 32},
  [254] = {.lex_state = 656},
  [255] = {.lex_state = 30},
  [256] = {.lex_state = 21},
  [257] = {.lex_state = 656},
  [258] = {.lex_state = 21},
  [259] = {.lex_state = 33},
  [260] = {.lex_state = 656},
  [261] = {.lex_state = 656},
  [262] = {.lex_state = 32},
  [263] = {.lex_state = 656},
  [264] = {.lex_state = 26},
  [265] = {.lex_state = 656},
  [266] = {.lex_state = 34},
  [267] = {.lex_state = 656},
  [268] = {.lex_state = 21},
  [269] = {.lex_state = 656},
  [270] = {.lex_state = 656},
  [271] = {.lex_state = 656},
  [272] = {.lex_state = 29},
  [273] = {.lex_state = 656},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 21},
  [276] = {.lex_state = 656},
  [277] = {.lex_state = 28},
  [278] = {.lex_state = 656},
  [279] = {.lex_state = 656},
  [280] = {.lex_state = 24},
  [281] = {.lex_state = 21},
  [282] = {.lex_state = 31},
  [283] = {.lex_state = 656},
  [284] = {.lex_state = 656},
  [285] = {.lex_state = 25},
  [286] = {.lex_state = 21},
  [287] = {.lex_state = 656},
  [288] = {.lex_state = 21},
  [289] = {.lex_state = 656},
  [290] = {.lex_state = 656},
  [291] = {.lex_state = 656},
  [292] = {.lex_state = 656},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 656},
  [295] = {.lex_state = 21},
  [296] = {.lex_state = 21},
  [297] = {.lex_state = 21},
  [298] = {.lex_state = 656},
  [299] = {.lex_state = 24},
  [300] = {.lex_state = 656},
  [301] = {.lex_state = 21},
  [302] = {.lex_state = 656},
  [303] = {.lex_state = 656},
  [304] = {.lex_state = 21},
  [305] = {.lex_state = 656},
  [306] = {.lex_state = 656},
  [307] = {.lex_state = 656},
  [308] = {.lex_state = 656},
  [309] = {.lex_state = 656},
  [310] = {.lex_state = 656},
  [311] = {.lex_state = 656},
  [312] = {.lex_state = 656},
  [313] = {.lex_state = 656},
  [314] = {.lex_state = 656},
  [315] = {.lex_state = 656},
  [316] = {.lex_state = 656},
  [317] = {.lex_state = 656},
  [318] = {.lex_state = 656},
  [319] = {.lex_state = 656},
  [320] = {.lex_state = 656},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 21},
  [323] = {.lex_state = 11},
  [324] = {.lex_state = 21},
  [325] = {.lex_state = 11},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 11},
  [328] = {.lex_state = 11},
  [329] = {.lex_state = 11},
  [330] = {.lex_state = 656},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 11},
  [333] = {.lex_state = 21},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 37},
  [338] = {.lex_state = 37},
  [339] = {.lex_state = 38},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 23},
  [342] = {.lex_state = 656},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 656},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 22},
  [348] = {.lex_state = 656},
  [349] = {.lex_state = 11},
  [350] = {.lex_state = 21},
  [351] = {.lex_state = 36},
  [352] = {.lex_state = 22},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 23},
  [357] = {.lex_state = 23},
  [358] = {.lex_state = 656},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 22},
  [361] = {.lex_state = 22},
  [362] = {.lex_state = 23},
  [363] = {.lex_state = 656},
  [364] = {.lex_state = 37},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 37},
  [367] = {.lex_state = 37},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 36},
  [370] = {.lex_state = 11},
  [371] = {.lex_state = 656},
  [372] = {.lex_state = 22},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 22},
  [375] = {.lex_state = 11},
  [376] = {.lex_state = 656},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 656},
  [380] = {.lex_state = 23},
  [381] = {.lex_state = 36},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 36},
  [384] = {.lex_state = 21},
  [385] = {.lex_state = 37},
  [386] = {.lex_state = 36},
  [387] = {.lex_state = 36},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 669},
  [390] = {.lex_state = 6},
  [391] = {.lex_state = 21},
  [392] = {(TSStateId)(-1)},
  [393] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(1),
    [aux_sym_attribute_token2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_diagram] = STATE(336),
    [sym_uml] = STATE(368),
    [sym_json] = STATE(368),
    [sym_yaml] = STATE(368),
    [sym_ebnf] = STATE(368),
    [sym_regex] = STATE(368),
    [sym_ditaa] = STATE(368),
    [sym_gantt] = STATE(368),
    [sym_chronology] = STATE(368),
    [sym_mindmap] = STATE(368),
    [sym_wbs] = STATE(368),
    [sym_chen] = STATE(368),
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
  [0] = 20,
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
      anon_sym_loop,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      anon_sym_autonumber,
    ACTIONS(43), 1,
      anon_sym_autonumberstop,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(304), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(45), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [73] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_loop,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      anon_sym_autonumber,
    ACTIONS(43), 1,
      anon_sym_autonumberstop,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_uml_repeat1,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(297), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(45), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [146] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(55), 1,
      anon_sym_end,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    STATE(4), 1,
      sym_comment,
    STATE(17), 1,
      sym_custom_label,
    STATE(18), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [219] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_loop,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      anon_sym_autonumber,
    ACTIONS(43), 1,
      anon_sym_autonumberstop,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(256), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(45), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [292] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_loop,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      anon_sym_autonumber,
    ACTIONS(43), 1,
      anon_sym_autonumberstop,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(286), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(45), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [365] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_loop,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      anon_sym_autonumber,
    ACTIONS(43), 1,
      anon_sym_autonumberstop,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_end,
    STATE(6), 1,
      aux_sym_uml_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(281), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(45), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [438] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(25), 1,
      sym_custom_label,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [511] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_loop,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      anon_sym_autonumber,
    ACTIONS(43), 1,
      anon_sym_autonumberstop,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_end,
    STATE(2), 1,
      aux_sym_uml_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(301), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(45), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [584] = 20,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(81), 1,
      anon_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_uml_repeat1,
    STATE(32), 1,
      sym_custom_label,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [657] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_loop,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      anon_sym_autonumber,
    ACTIONS(43), 1,
      anon_sym_autonumberstop,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    ACTIONS(83), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(45), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [725] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_loop,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      anon_sym_autonumber,
    ACTIONS(43), 1,
      anon_sym_autonumberstop,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    ACTIONS(85), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(45), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [793] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_alt,
    ACTIONS(92), 1,
      anon_sym_loop,
    ACTIONS(95), 1,
      anon_sym_group,
    ACTIONS(98), 1,
      anon_sym_skinparam,
    ACTIONS(101), 1,
      anon_sym_autonumber,
    ACTIONS(104), 1,
      anon_sym_autonumberstop,
    ACTIONS(110), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_expression,
    STATE(154), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    ACTIONS(90), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(13), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(100), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(107), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [859] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_ATenduml,
    ACTIONS(118), 1,
      anon_sym_alt,
    ACTIONS(120), 1,
      anon_sym_loop,
    ACTIONS(122), 1,
      anon_sym_group,
    ACTIONS(124), 1,
      anon_sym_skinparam,
    ACTIONS(126), 1,
      anon_sym_autonumber,
    ACTIONS(128), 1,
      anon_sym_autonumberstop,
    STATE(14), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_uml_repeat1,
    STATE(146), 1,
      sym_expression,
    STATE(155), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(144), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(130), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [926] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(132), 1,
      anon_sym_end,
    STATE(15), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [993] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(134), 1,
      anon_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1060] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(136), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1127] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(136), 1,
      anon_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1194] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_alt,
    ACTIONS(120), 1,
      anon_sym_loop,
    ACTIONS(122), 1,
      anon_sym_group,
    ACTIONS(124), 1,
      anon_sym_skinparam,
    ACTIONS(126), 1,
      anon_sym_autonumber,
    ACTIONS(128), 1,
      anon_sym_autonumberstop,
    ACTIONS(138), 1,
      anon_sym_ATenduml,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(146), 1,
      sym_expression,
    STATE(155), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(144), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(130), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1261] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(140), 1,
      anon_sym_end,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1328] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_end,
    ACTIONS(110), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_alt,
    ACTIONS(145), 1,
      anon_sym_loop,
    ACTIONS(148), 1,
      anon_sym_group,
    ACTIONS(151), 1,
      anon_sym_skinparam,
    ACTIONS(154), 1,
      anon_sym_autonumber,
    ACTIONS(157), 1,
      anon_sym_autonumberstop,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(21), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(160), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1393] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1460] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(165), 1,
      anon_sym_end,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1527] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1594] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(25), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1661] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1728] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1795] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_ATenduml,
    ACTIONS(175), 1,
      anon_sym_alt,
    ACTIONS(178), 1,
      anon_sym_loop,
    ACTIONS(181), 1,
      anon_sym_group,
    ACTIONS(184), 1,
      anon_sym_skinparam,
    ACTIONS(187), 1,
      anon_sym_autonumber,
    ACTIONS(190), 1,
      anon_sym_autonumberstop,
    STATE(146), 1,
      sym_expression,
    STATE(155), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(28), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(144), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(193), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1860] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(196), 1,
      anon_sym_end,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_uml_repeat1,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1927] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(198), 1,
      anon_sym_end,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1994] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(200), 1,
      anon_sym_end,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [2061] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_group,
    ACTIONS(63), 1,
      anon_sym_skinparam,
    ACTIONS(65), 1,
      anon_sym_autonumber,
    ACTIONS(67), 1,
      anon_sym_autonumberstop,
    ACTIONS(200), 1,
      anon_sym_end,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(131), 1,
      sym_expression,
    STATE(156), 1,
      sym_participant_name,
    STATE(158), 1,
      sym_string,
    STATE(132), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [2128] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_order,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      sym_multiline,
    STATE(37), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(206), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(202), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2182] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_order,
    STATE(34), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_attribute_repeat2,
    STATE(45), 1,
      sym_multiline,
    ACTIONS(206), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(68), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(202), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2235] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_as,
    ACTIONS(228), 1,
      anon_sym_order,
    STATE(35), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(43), 1,
      sym_multiline,
    STATE(67), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(206), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(202), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2288] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_order,
    STATE(36), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(230), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2336] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_order,
    STATE(37), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(230), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2384] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_order,
    STATE(38), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(236), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(234), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2432] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_as,
    ACTIONS(248), 1,
      anon_sym_order,
    ACTIONS(240), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(39), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(238), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2478] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_as,
    ACTIONS(228), 1,
      anon_sym_order,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(67), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(232), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(230), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2525] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      anon_sym_as,
    ACTIONS(257), 1,
      anon_sym_order,
    STATE(41), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(67), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(240), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(238), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2570] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_as,
    ACTIONS(228), 1,
      anon_sym_order,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(42), 1,
      sym_comment,
    STATE(67), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(236), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(234), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_as,
    ACTIONS(228), 1,
      anon_sym_order,
    STATE(42), 1,
      aux_sym_attribute_repeat2,
    STATE(43), 1,
      sym_comment,
    STATE(67), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(232), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(230), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_order,
    STATE(44), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(68), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(230), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2711] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_order,
    STATE(45), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(68), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(230), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2758] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_order,
    STATE(46), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(236), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(68), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(234), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2805] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_as,
    ACTIONS(266), 1,
      anon_sym_order,
    ACTIONS(240), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(47), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(68), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(238), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [2850] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(269), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [2886] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(275), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(273), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [2922] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(277), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [2958] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(277), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [2993] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(269), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3028] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(281), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3063] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(289), 1,
      anon_sym_as,
    ACTIONS(291), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym_comment,
    STATE(81), 1,
      sym_attr_alias,
    ACTIONS(287), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(285), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [3104] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(293), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3139] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(238), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3174] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(297), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3209] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(301), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3244] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(305), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3279] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(279), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(277), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3314] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(275), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(273), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3349] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(269), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3384] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(275), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(273), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3419] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(277), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3453] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(293), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3487] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(297), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3521] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(283), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(281), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3555] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(281), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3589] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(309), 1,
      anon_sym_as,
    ACTIONS(311), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym_comment,
    STATE(99), 1,
      sym_attr_alias,
    ACTIONS(287), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(285), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [3629] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(293), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3663] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(238), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3697] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(307), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(305), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3731] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(301), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3765] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(305), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
    STATE(75), 1,
      sym_comment,
    ACTIONS(303), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(301), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3833] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(269), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3867] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(273), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3901] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(238), 16,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [3935] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(313), 1,
      anon_sym_as,
    ACTIONS(315), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_comment,
    STATE(101), 1,
      sym_attr_alias,
    ACTIONS(287), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(285), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [3975] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(297), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [4009] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(81), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(317), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4044] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(275), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(273), 15,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [4077] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(277), 15,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [4110] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(305), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4143] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(269), 15,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [4176] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(269), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [4209] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(273), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [4242] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(277), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
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
  [4275] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(307), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(305), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4307] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4339] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4371] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4403] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(234), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(335), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4467] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(339), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4499] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(343), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4531] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(230), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4563] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(230), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4595] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(347), 1,
      anon_sym_COLON,
    STATE(99), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(317), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4629] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(349), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4661] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(317), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4695] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(102), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4727] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(103), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4759] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(305), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4791] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4823] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(367), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4855] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(234), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4887] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(202), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4919] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4951] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(375), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [4983] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5015] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 16,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5047] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(339), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5078] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(114), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(234), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5109] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(115), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(367), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    STATE(116), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5171] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5202] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(234), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5233] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(234), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5264] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5295] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(230), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5326] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(230), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5357] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5388] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(124), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(335), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5419] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(343), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5450] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5481] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(359), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5512] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(339), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    STATE(129), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5574] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(130), 1,
      sym_comment,
    ACTIONS(381), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(379), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5605] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5636] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(349), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5667] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(202), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5698] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(335), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5729] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(387), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5760] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(345), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(343), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5791] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(375), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5822] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5853] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5884] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(327), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5915] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(375), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5946] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(230), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [5977] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(230), 15,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6008] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(349), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6039] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(323), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    STATE(146), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(331), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6101] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(202), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6132] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(367), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6163] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(363), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6194] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
      sym_comment,
    ACTIONS(373), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(371), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6225] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(383), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6256] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(234), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6287] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(355), 14,
      anon_sym_alt,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [6318] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(397), 1,
      anon_sym_x,
    ACTIONS(401), 1,
      anon_sym_DASH_DASH,
    STATE(154), 1,
      sym_comment,
    STATE(241), 1,
      sym_connector,
    ACTIONS(395), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(391), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [6354] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(397), 1,
      anon_sym_x,
    ACTIONS(401), 1,
      anon_sym_DASH_DASH,
    STATE(155), 1,
      sym_comment,
    STATE(249), 1,
      sym_connector,
    ACTIONS(395), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(391), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [6390] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(397), 1,
      anon_sym_x,
    ACTIONS(401), 1,
      anon_sym_DASH_DASH,
    STATE(156), 1,
      sym_comment,
    STATE(251), 1,
      sym_connector,
    ACTIONS(395), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(391), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(399), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [6426] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(275), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [6451] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
      sym_comment,
    ACTIONS(269), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(271), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [6476] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(279), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [6501] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(409), 1,
      anon_sym_LBRACK_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(403), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(405), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(407), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6528] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(161), 1,
      sym_comment,
    ACTIONS(411), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(413), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(417), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6555] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(425), 1,
      anon_sym_LBRACK_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(419), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(421), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(423), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6582] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(431), 1,
      anon_sym_DASH,
    STATE(163), 1,
      sym_comment,
    ACTIONS(427), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(429), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(433), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6609] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
      sym_comment,
    ACTIONS(435), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(437), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(439), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6633] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(165), 1,
      sym_comment,
    ACTIONS(419), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(421), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(423), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6657] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
      sym_comment,
    ACTIONS(411), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(413), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(417), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6681] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
      sym_comment,
    ACTIONS(403), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(405), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(407), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6705] = 9,
    ACTIONS(443), 1,
      aux_sym_attribute_token3,
    ACTIONS(445), 1,
      aux_sym_attribute_token4,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(168), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_attribute_repeat1,
    STATE(371), 1,
      sym_string,
    ACTIONS(441), 2,
      anon_sym_inc,
      anon_sym_resume,
  [6734] = 9,
    ACTIONS(443), 1,
      aux_sym_attribute_token3,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(455), 1,
      aux_sym_attribute_token4,
    STATE(169), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_attribute_repeat1,
    STATE(348), 1,
      sym_string,
    ACTIONS(453), 2,
      anon_sym_inc,
      anon_sym_resume,
  [6763] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      anon_sym_DASH,
    STATE(170), 1,
      sym_comment,
    ACTIONS(457), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(461), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6786] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(467), 1,
      anon_sym_LBRACK_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(465), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6809] = 9,
    ACTIONS(443), 1,
      aux_sym_attribute_token3,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(471), 1,
      aux_sym_attribute_token4,
    STATE(172), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_attribute_repeat1,
    STATE(379), 1,
      sym_string,
    ACTIONS(469), 2,
      anon_sym_inc,
      anon_sym_resume,
  [6838] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(473), 1,
      anon_sym_DQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    STATE(173), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6864] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      aux_sym_string_repeat1,
    STATE(174), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6890] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6916] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(176), 1,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(485), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [6936] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(465), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6956] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      aux_sym_string_repeat1,
    STATE(178), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6982] = 7,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(491), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(179), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [7006] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7032] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(181), 1,
      sym_comment,
    ACTIONS(429), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(433), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7052] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7078] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(183), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7104] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7130] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(185), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7156] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7182] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(187), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7208] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_comment,
    STATE(189), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7234] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(189), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7260] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_comment,
    STATE(191), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7286] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(191), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7312] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7338] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(193), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7364] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_BSLASH,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      aux_sym_string_repeat1,
    STATE(194), 1,
      sym_comment,
    STATE(240), 1,
      sym_escape_char,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7390] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      aux_sym_attr_alias_token1,
    STATE(195), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7411] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      aux_sym_attr_alias_token1,
    STATE(196), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7432] = 8,
    ACTIONS(443), 1,
      aux_sym_attribute_token3,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(533), 1,
      aux_sym_attribute_token4,
    STATE(197), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_attribute_repeat1,
    STATE(358), 1,
      sym_string,
  [7457] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      aux_sym_attr_alias_token1,
    STATE(198), 1,
      sym_comment,
    ACTIONS(537), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7478] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    ACTIONS(541), 1,
      aux_sym_multiline_token1,
    ACTIONS(543), 1,
      anon_sym_BSLASH,
    STATE(199), 1,
      sym_comment,
    STATE(200), 1,
      aux_sym_multiline_repeat1,
    STATE(280), 1,
      sym_escape_char,
  [7503] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(541), 1,
      aux_sym_multiline_token1,
    ACTIONS(543), 1,
      anon_sym_BSLASH,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      sym_comment,
    STATE(206), 1,
      aux_sym_multiline_repeat1,
    STATE(280), 1,
      sym_escape_char,
  [7528] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(547), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym_comment,
    ACTIONS(551), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7549] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(553), 1,
      aux_sym_attr_alias_token1,
    STATE(202), 1,
      sym_comment,
    ACTIONS(555), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7570] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      aux_sym_attr_alias_token1,
    STATE(203), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7591] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(561), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(563), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7612] = 8,
    ACTIONS(443), 1,
      aux_sym_attribute_token3,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(567), 1,
      aux_sym_attribute_token4,
    STATE(205), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_attribute_repeat1,
    STATE(363), 1,
      sym_string,
  [7637] = 7,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    ACTIONS(571), 1,
      aux_sym_multiline_token1,
    ACTIONS(574), 1,
      anon_sym_BSLASH,
    STATE(280), 1,
      sym_escape_char,
    STATE(206), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [7660] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(541), 1,
      aux_sym_multiline_token1,
    ACTIONS(543), 1,
      anon_sym_BSLASH,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      aux_sym_multiline_repeat1,
    STATE(207), 1,
      sym_comment,
    STATE(280), 1,
      sym_escape_char,
  [7685] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(541), 1,
      aux_sym_multiline_token1,
    ACTIONS(543), 1,
      anon_sym_BSLASH,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      sym_comment,
    STATE(209), 1,
      aux_sym_multiline_repeat1,
    STATE(280), 1,
      sym_escape_char,
  [7710] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(541), 1,
      aux_sym_multiline_token1,
    ACTIONS(543), 1,
      anon_sym_BSLASH,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      aux_sym_multiline_repeat1,
    STATE(209), 1,
      sym_comment,
    STATE(280), 1,
      sym_escape_char,
  [7735] = 8,
    ACTIONS(443), 1,
      aux_sym_attribute_token3,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(583), 1,
      aux_sym_attribute_token4,
    STATE(210), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_attribute_repeat1,
    STATE(344), 1,
      sym_string,
  [7760] = 8,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(541), 1,
      aux_sym_multiline_token1,
    ACTIONS(543), 1,
      anon_sym_BSLASH,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      aux_sym_multiline_repeat1,
    STATE(211), 1,
      sym_comment,
    STATE(280), 1,
      sym_escape_char,
  [7785] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(587), 1,
      aux_sym_attribute_token1,
    ACTIONS(589), 1,
      aux_sym_attribute_token2,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_comment,
    STATE(341), 1,
      sym_string,
  [7807] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendebnf,
    ACTIONS(593), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(213), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7825] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(598), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(600), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_participant_name,
    STATE(52), 1,
      sym_string,
    STATE(214), 1,
      sym_comment,
  [7847] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_ATendjson,
    STATE(215), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_json_repeat1,
    ACTIONS(602), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7867] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(606), 1,
      aux_sym_attribute_token3,
    ACTIONS(609), 1,
      aux_sym_attribute_token4,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    STATE(216), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [7887] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendgantt,
    STATE(217), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_json_repeat1,
    ACTIONS(613), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7907] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendyaml,
    STATE(218), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_json_repeat1,
    ACTIONS(617), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7927] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(623), 1,
      anon_sym_ATendebnf,
    STATE(219), 1,
      sym_comment,
    STATE(233), 1,
      aux_sym_json_repeat1,
    ACTIONS(621), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7947] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(220), 1,
      sym_comment,
    ACTIONS(625), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [7963] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      anon_sym_ATendregex,
    STATE(221), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_json_repeat1,
    ACTIONS(627), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7983] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(633), 1,
      anon_sym_ATendchronology,
    STATE(222), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym_json_repeat1,
    ACTIONS(631), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8003] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(637), 1,
      anon_sym_ATendditaa,
    STATE(223), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_json_repeat1,
    ACTIONS(635), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8023] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(641), 1,
      anon_sym_ATendwbs,
    STATE(224), 1,
      sym_comment,
    STATE(246), 1,
      aux_sym_json_repeat1,
    ACTIONS(639), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8043] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendregex,
    ACTIONS(643), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(225), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8061] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendditaa,
    ACTIONS(646), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(226), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8079] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendgantt,
    ACTIONS(649), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(227), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8097] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_ATendjson,
    STATE(228), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_json_repeat1,
    ACTIONS(602), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8117] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendchronology,
    ACTIONS(654), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(229), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8135] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(657), 1,
      anon_sym_ATendyaml,
    STATE(230), 1,
      sym_comment,
    STATE(242), 1,
      aux_sym_json_repeat1,
    ACTIONS(617), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8155] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendmindmap,
    ACTIONS(659), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(231), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8173] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendjson,
    ACTIONS(662), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(232), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8191] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_ATendebnf,
    STATE(213), 1,
      aux_sym_json_repeat1,
    STATE(233), 1,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8211] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendchen,
    ACTIONS(667), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(234), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8229] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(670), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_participant_name,
    STATE(48), 1,
      sym_string,
    STATE(235), 1,
      sym_comment,
  [8251] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendchen,
    STATE(236), 1,
      sym_comment,
    STATE(237), 1,
      aux_sym_json_repeat1,
    ACTIONS(674), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8271] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_ATendchen,
    STATE(234), 1,
      aux_sym_json_repeat1,
    STATE(237), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8291] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_ATendregex,
    STATE(225), 1,
      aux_sym_json_repeat1,
    STATE(238), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8311] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      aux_sym_attribute_token1,
    ACTIONS(684), 1,
      aux_sym_attribute_token2,
    STATE(239), 1,
      sym_comment,
    STATE(356), 1,
      sym_string,
  [8333] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(240), 1,
      sym_comment,
    ACTIONS(686), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [8349] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(688), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_participant_name,
    STATE(76), 1,
      sym_string,
    STATE(241), 1,
      sym_comment,
  [8371] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendyaml,
    ACTIONS(692), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(242), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8389] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(695), 1,
      anon_sym_ATendditaa,
    STATE(226), 1,
      aux_sym_json_repeat1,
    STATE(243), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8409] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(699), 1,
      anon_sym_ATendmindmap,
    STATE(244), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym_json_repeat1,
    ACTIONS(697), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8429] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(701), 1,
      anon_sym_ATendgantt,
    STATE(227), 1,
      aux_sym_json_repeat1,
    STATE(245), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8449] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(703), 1,
      anon_sym_ATendwbs,
    STATE(246), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_json_repeat1,
    ACTIONS(639), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8469] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(705), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_participant_name,
    STATE(62), 1,
      sym_string,
    STATE(247), 1,
      sym_comment,
  [8491] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(709), 1,
      anon_sym_ATendchronology,
    STATE(229), 1,
      aux_sym_json_repeat1,
    STATE(248), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8511] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_participant_name,
    STATE(85), 1,
      sym_string,
    STATE(249), 1,
      sym_comment,
  [8533] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    ACTIONS(715), 1,
      aux_sym_attribute_token1,
    ACTIONS(717), 1,
      aux_sym_attribute_token2,
    STATE(250), 1,
      sym_comment,
    STATE(357), 1,
      sym_string,
  [8555] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(719), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_participant_name,
    STATE(86), 1,
      sym_string,
    STATE(251), 1,
      sym_comment,
  [8577] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(723), 1,
      anon_sym_ATendmindmap,
    STATE(231), 1,
      aux_sym_json_repeat1,
    STATE(252), 1,
      sym_comment,
    ACTIONS(697), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8597] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      anon_sym_ATendwbs,
    ACTIONS(725), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(253), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8615] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      ts_builtin_sym_end,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    STATE(254), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym_json_repeat2,
  [8634] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(255), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [8649] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(734), 1,
      anon_sym_else,
    ACTIONS(736), 1,
      anon_sym_end,
    STATE(256), 1,
      sym_comment,
    STATE(258), 1,
      aux_sym_alt_block_repeat1,
  [8668] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    STATE(257), 1,
      sym_comment,
    STATE(269), 1,
      aux_sym_json_repeat2,
  [8687] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(740), 1,
      anon_sym_else,
    ACTIONS(743), 1,
      anon_sym_end,
    STATE(258), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [8704] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(259), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [8719] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(745), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym_comment,
    STATE(294), 1,
      aux_sym_json_repeat2,
  [8738] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
    STATE(261), 1,
      sym_comment,
    STATE(269), 1,
      aux_sym_json_repeat2,
  [8757] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(262), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [8772] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(749), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_json_repeat2,
  [8791] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(264), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [8806] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    STATE(265), 1,
      sym_comment,
    STATE(300), 1,
      aux_sym_json_repeat2,
  [8825] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(266), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [8840] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    STATE(267), 1,
      sym_comment,
    STATE(298), 1,
      aux_sym_json_repeat2,
  [8859] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(268), 1,
      sym_comment,
    ACTIONS(755), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [8874] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(757), 1,
      ts_builtin_sym_end,
    ACTIONS(759), 1,
      aux_sym_attribute_token4,
    STATE(269), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [8891] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(270), 1,
      sym_comment,
  [8910] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(764), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(271), 1,
      sym_comment,
  [8929] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(272), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [8944] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
    STATE(273), 1,
      sym_comment,
    STATE(313), 1,
      aux_sym_json_repeat2,
  [8963] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(274), 1,
      sym_comment,
    ACTIONS(768), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [8978] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_boolean_literal,
    STATE(275), 1,
      sym_comment,
    ACTIONS(770), 2,
      anon_sym_true,
      anon_sym_false,
  [8995] = 5,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(774), 1,
      aux_sym_attribute_token4,
    STATE(276), 1,
      sym_comment,
    ACTIONS(772), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [9012] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(277), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [9027] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(776), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(278), 1,
      sym_comment,
  [9046] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(279), 1,
      sym_comment,
  [9065] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(280), 1,
      sym_comment,
    ACTIONS(780), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [9080] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(734), 1,
      anon_sym_else,
    ACTIONS(782), 1,
      anon_sym_end,
    STATE(258), 1,
      aux_sym_alt_block_repeat1,
    STATE(281), 1,
      sym_comment,
  [9099] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(282), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [9114] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(283), 1,
      sym_comment,
  [9133] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(786), 1,
      ts_builtin_sym_end,
    STATE(284), 1,
      sym_comment,
    STATE(315), 1,
      aux_sym_json_repeat2,
  [9152] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(285), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [9167] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(734), 1,
      anon_sym_else,
    ACTIONS(788), 1,
      anon_sym_end,
    STATE(258), 1,
      aux_sym_alt_block_repeat1,
    STATE(286), 1,
      sym_comment,
  [9186] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(790), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(287), 1,
      sym_comment,
  [9205] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
      sym_boolean_literal,
    STATE(288), 1,
      sym_comment,
    ACTIONS(792), 2,
      anon_sym_true,
      anon_sym_false,
  [9222] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(794), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(289), 1,
      sym_comment,
  [9241] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(290), 1,
      sym_comment,
  [9260] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(798), 1,
      ts_builtin_sym_end,
    STATE(261), 1,
      aux_sym_json_repeat2,
    STATE(291), 1,
      sym_comment,
  [9279] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
    STATE(292), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_json_repeat2,
  [9298] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(293), 1,
      sym_comment,
    ACTIONS(732), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [9313] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(294), 1,
      sym_comment,
  [9332] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(295), 1,
      sym_comment,
    ACTIONS(804), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [9347] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
      sym_boolean_literal,
    STATE(296), 1,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_true,
      anon_sym_false,
  [9364] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(734), 1,
      anon_sym_else,
    ACTIONS(808), 1,
      anon_sym_end,
    STATE(258), 1,
      aux_sym_alt_block_repeat1,
    STATE(297), 1,
      sym_comment,
  [9383] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(810), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(298), 1,
      sym_comment,
  [9402] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(299), 1,
      sym_comment,
    ACTIONS(625), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [9417] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(812), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(300), 1,
      sym_comment,
  [9436] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(734), 1,
      anon_sym_else,
    ACTIONS(814), 1,
      anon_sym_end,
    STATE(258), 1,
      aux_sym_alt_block_repeat1,
    STATE(301), 1,
      sym_comment,
  [9455] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(816), 1,
      ts_builtin_sym_end,
    STATE(290), 1,
      aux_sym_json_repeat2,
    STATE(302), 1,
      sym_comment,
  [9474] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
    STATE(270), 1,
      aux_sym_json_repeat2,
    STATE(303), 1,
      sym_comment,
  [9493] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(734), 1,
      anon_sym_else,
    ACTIONS(820), 1,
      anon_sym_end,
    STATE(258), 1,
      aux_sym_alt_block_repeat1,
    STATE(304), 1,
      sym_comment,
  [9512] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
    STATE(305), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym_json_repeat2,
  [9531] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_comment,
    STATE(307), 1,
      aux_sym_json_repeat2,
  [9550] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(826), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(307), 1,
      sym_comment,
  [9569] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    STATE(271), 1,
      aux_sym_json_repeat2,
    STATE(308), 1,
      sym_comment,
  [9588] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(309), 1,
      sym_comment,
  [9607] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      aux_sym_json_repeat2,
    STATE(310), 1,
      sym_comment,
  [9626] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(834), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(311), 1,
      sym_comment,
  [9645] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    STATE(279), 1,
      aux_sym_json_repeat2,
    STATE(312), 1,
      sym_comment,
  [9664] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(313), 1,
      sym_comment,
  [9683] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(840), 1,
      ts_builtin_sym_end,
    STATE(283), 1,
      aux_sym_json_repeat2,
    STATE(314), 1,
      sym_comment,
  [9702] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(315), 1,
      sym_comment,
  [9721] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    STATE(287), 1,
      aux_sym_json_repeat2,
    STATE(316), 1,
      sym_comment,
  [9740] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(846), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(317), 1,
      sym_comment,
  [9759] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(318), 1,
      sym_comment,
  [9778] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    STATE(257), 1,
      aux_sym_json_repeat2,
    STATE(319), 1,
      sym_comment,
  [9797] = 6,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_attribute_token4,
    ACTIONS(852), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_json_repeat2,
    STATE(320), 1,
      sym_comment,
  [9816] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(321), 1,
      sym_comment,
    ACTIONS(411), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9830] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(856), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(322), 1,
      sym_comment,
  [9846] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(323), 1,
      sym_comment,
    ACTIONS(435), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9860] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(858), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(860), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(324), 1,
      sym_comment,
  [9876] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(325), 1,
      sym_comment,
    ACTIONS(427), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9890] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(862), 1,
      anon_sym_DASH,
    ACTIONS(864), 1,
      anon_sym_DASH_DASH,
    STATE(326), 1,
      sym_comment,
  [9906] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(327), 1,
      sym_comment,
    ACTIONS(403), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9920] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(328), 1,
      sym_comment,
    ACTIONS(563), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9934] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(329), 1,
      sym_comment,
    ACTIONS(866), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9948] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(330), 1,
      sym_comment,
    ACTIONS(868), 2,
      ts_builtin_sym_end,
      aux_sym_attribute_token4,
  [9962] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(870), 1,
      anon_sym_DASH,
    ACTIONS(872), 1,
      anon_sym_DASH_DASH,
    STATE(331), 1,
      sym_comment,
  [9978] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(332), 1,
      sym_comment,
    ACTIONS(549), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9992] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(874), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(876), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(333), 1,
      sym_comment,
  [10008] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      aux_sym_attr_alias_token1,
    STATE(334), 1,
      sym_comment,
  [10021] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(880), 1,
      sym_label,
    STATE(335), 1,
      sym_comment,
  [10034] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(882), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym_comment,
  [10047] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(884), 1,
      aux_sym_sequence_diagram_token1,
    STATE(337), 1,
      sym_comment,
  [10060] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(886), 1,
      aux_sym_sequence_diagram_token1,
    STATE(338), 1,
      sym_comment,
  [10073] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(888), 1,
      aux_sym_comment_token2,
    STATE(339), 1,
      sym_comment,
  [10086] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(890), 1,
      aux_sym_comment_token1,
    STATE(340), 1,
      sym_comment,
  [10099] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(892), 1,
      aux_sym_attribute_token2,
    STATE(341), 1,
      sym_comment,
  [10112] = 4,
    ACTIONS(275), 1,
      aux_sym_attribute_token4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(342), 1,
      sym_comment,
  [10125] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(894), 1,
      aux_sym_escape_char_token1,
    STATE(343), 1,
      sym_comment,
  [10138] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(896), 1,
      aux_sym_attribute_token4,
    STATE(344), 1,
      sym_comment,
  [10151] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
    STATE(345), 1,
      sym_comment,
  [10164] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym_comment,
  [10177] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(902), 1,
      sym_color,
    STATE(347), 1,
      sym_comment,
  [10190] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(533), 1,
      aux_sym_attribute_token4,
    STATE(348), 1,
      sym_comment,
  [10203] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(904), 1,
      aux_sym_attr_alias_token1,
    STATE(349), 1,
      sym_comment,
  [10216] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(906), 1,
      aux_sym_attribute_token3,
    STATE(350), 1,
      sym_comment,
  [10229] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      sym_label,
    STATE(351), 1,
      sym_comment,
  [10242] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(910), 1,
      sym_color,
    STATE(352), 1,
      sym_comment,
  [10255] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(912), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      sym_comment,
  [10268] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(914), 1,
      anon_sym_SLASH,
    STATE(354), 1,
      sym_comment,
  [10281] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(916), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_comment,
  [10294] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(918), 1,
      aux_sym_attribute_token2,
    STATE(356), 1,
      sym_comment,
  [10307] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(920), 1,
      aux_sym_attribute_token2,
    STATE(357), 1,
      sym_comment,
  [10320] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(922), 1,
      aux_sym_attribute_token4,
    STATE(358), 1,
      sym_comment,
  [10333] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
    STATE(359), 1,
      sym_comment,
  [10346] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(926), 1,
      sym_color,
    STATE(360), 1,
      sym_comment,
  [10359] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(928), 1,
      sym_color,
    STATE(361), 1,
      sym_comment,
  [10372] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_attribute_token2,
    STATE(362), 1,
      sym_comment,
  [10385] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(930), 1,
      aux_sym_attribute_token4,
    STATE(363), 1,
      sym_comment,
  [10398] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(932), 1,
      aux_sym_sequence_diagram_token1,
    STATE(364), 1,
      sym_comment,
  [10411] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
    STATE(365), 1,
      sym_comment,
  [10424] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(936), 1,
      aux_sym_sequence_diagram_token1,
    STATE(366), 1,
      sym_comment,
  [10437] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(938), 1,
      aux_sym_sequence_diagram_token1,
    STATE(367), 1,
      sym_comment,
  [10450] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
    STATE(368), 1,
      sym_comment,
  [10463] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(942), 1,
      sym_label,
    STATE(369), 1,
      sym_comment,
  [10476] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(944), 1,
      aux_sym_attr_alias_token1,
    STATE(370), 1,
      sym_comment,
  [10489] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(583), 1,
      aux_sym_attribute_token4,
    STATE(371), 1,
      sym_comment,
  [10502] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(946), 1,
      sym_color,
    STATE(372), 1,
      sym_comment,
  [10515] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(948), 1,
      aux_sym_attr_alias_token1,
    STATE(373), 1,
      sym_comment,
  [10528] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(950), 1,
      sym_color,
    STATE(374), 1,
      sym_comment,
  [10541] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(952), 1,
      aux_sym_attr_alias_token1,
    STATE(375), 1,
      sym_comment,
  [10554] = 4,
    ACTIONS(279), 1,
      aux_sym_attribute_token4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(376), 1,
      sym_comment,
  [10567] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(954), 1,
      aux_sym_attr_alias_token1,
    STATE(377), 1,
      sym_comment,
  [10580] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(956), 1,
      sym_label,
    STATE(378), 1,
      sym_comment,
  [10593] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(567), 1,
      aux_sym_attribute_token4,
    STATE(379), 1,
      sym_comment,
  [10606] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(275), 1,
      aux_sym_attribute_token2,
    STATE(380), 1,
      sym_comment,
  [10619] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(958), 1,
      sym_label,
    STATE(381), 1,
      sym_comment,
  [10632] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(960), 1,
      sym_label,
    STATE(382), 1,
      sym_comment,
  [10645] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(962), 1,
      sym_label,
    STATE(383), 1,
      sym_comment,
  [10658] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      aux_sym_attribute_token3,
    STATE(384), 1,
      sym_comment,
  [10671] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(966), 1,
      aux_sym_sequence_diagram_token1,
    STATE(385), 1,
      sym_comment,
  [10684] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(968), 1,
      sym_label,
    STATE(386), 1,
      sym_comment,
  [10697] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(970), 1,
      sym_label,
    STATE(387), 1,
      sym_comment,
  [10710] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(972), 1,
      sym_label,
    STATE(388), 1,
      sym_comment,
  [10723] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_custom_label_token1,
    STATE(389), 1,
      sym_comment,
  [10736] = 4,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      aux_sym_escape_char_token1,
    STATE(390), 1,
      sym_comment,
  [10749] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(978), 1,
      aux_sym_attribute_token3,
    STATE(391), 1,
      sym_comment,
  [10762] = 1,
    ACTIONS(980), 1,
      ts_builtin_sym_end,
  [10766] = 1,
    ACTIONS(982), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 511,
  [SMALL_STATE(10)] = 584,
  [SMALL_STATE(11)] = 657,
  [SMALL_STATE(12)] = 725,
  [SMALL_STATE(13)] = 793,
  [SMALL_STATE(14)] = 859,
  [SMALL_STATE(15)] = 926,
  [SMALL_STATE(16)] = 993,
  [SMALL_STATE(17)] = 1060,
  [SMALL_STATE(18)] = 1127,
  [SMALL_STATE(19)] = 1194,
  [SMALL_STATE(20)] = 1261,
  [SMALL_STATE(21)] = 1328,
  [SMALL_STATE(22)] = 1393,
  [SMALL_STATE(23)] = 1460,
  [SMALL_STATE(24)] = 1527,
  [SMALL_STATE(25)] = 1594,
  [SMALL_STATE(26)] = 1661,
  [SMALL_STATE(27)] = 1728,
  [SMALL_STATE(28)] = 1795,
  [SMALL_STATE(29)] = 1860,
  [SMALL_STATE(30)] = 1927,
  [SMALL_STATE(31)] = 1994,
  [SMALL_STATE(32)] = 2061,
  [SMALL_STATE(33)] = 2128,
  [SMALL_STATE(34)] = 2182,
  [SMALL_STATE(35)] = 2235,
  [SMALL_STATE(36)] = 2288,
  [SMALL_STATE(37)] = 2336,
  [SMALL_STATE(38)] = 2384,
  [SMALL_STATE(39)] = 2432,
  [SMALL_STATE(40)] = 2478,
  [SMALL_STATE(41)] = 2525,
  [SMALL_STATE(42)] = 2570,
  [SMALL_STATE(43)] = 2617,
  [SMALL_STATE(44)] = 2664,
  [SMALL_STATE(45)] = 2711,
  [SMALL_STATE(46)] = 2758,
  [SMALL_STATE(47)] = 2805,
  [SMALL_STATE(48)] = 2850,
  [SMALL_STATE(49)] = 2886,
  [SMALL_STATE(50)] = 2922,
  [SMALL_STATE(51)] = 2958,
  [SMALL_STATE(52)] = 2993,
  [SMALL_STATE(53)] = 3028,
  [SMALL_STATE(54)] = 3063,
  [SMALL_STATE(55)] = 3104,
  [SMALL_STATE(56)] = 3139,
  [SMALL_STATE(57)] = 3174,
  [SMALL_STATE(58)] = 3209,
  [SMALL_STATE(59)] = 3244,
  [SMALL_STATE(60)] = 3279,
  [SMALL_STATE(61)] = 3314,
  [SMALL_STATE(62)] = 3349,
  [SMALL_STATE(63)] = 3384,
  [SMALL_STATE(64)] = 3419,
  [SMALL_STATE(65)] = 3453,
  [SMALL_STATE(66)] = 3487,
  [SMALL_STATE(67)] = 3521,
  [SMALL_STATE(68)] = 3555,
  [SMALL_STATE(69)] = 3589,
  [SMALL_STATE(70)] = 3629,
  [SMALL_STATE(71)] = 3663,
  [SMALL_STATE(72)] = 3697,
  [SMALL_STATE(73)] = 3731,
  [SMALL_STATE(74)] = 3765,
  [SMALL_STATE(75)] = 3799,
  [SMALL_STATE(76)] = 3833,
  [SMALL_STATE(77)] = 3867,
  [SMALL_STATE(78)] = 3901,
  [SMALL_STATE(79)] = 3935,
  [SMALL_STATE(80)] = 3975,
  [SMALL_STATE(81)] = 4009,
  [SMALL_STATE(82)] = 4044,
  [SMALL_STATE(83)] = 4077,
  [SMALL_STATE(84)] = 4110,
  [SMALL_STATE(85)] = 4143,
  [SMALL_STATE(86)] = 4176,
  [SMALL_STATE(87)] = 4209,
  [SMALL_STATE(88)] = 4242,
  [SMALL_STATE(89)] = 4275,
  [SMALL_STATE(90)] = 4307,
  [SMALL_STATE(91)] = 4339,
  [SMALL_STATE(92)] = 4371,
  [SMALL_STATE(93)] = 4403,
  [SMALL_STATE(94)] = 4435,
  [SMALL_STATE(95)] = 4467,
  [SMALL_STATE(96)] = 4499,
  [SMALL_STATE(97)] = 4531,
  [SMALL_STATE(98)] = 4563,
  [SMALL_STATE(99)] = 4595,
  [SMALL_STATE(100)] = 4629,
  [SMALL_STATE(101)] = 4661,
  [SMALL_STATE(102)] = 4695,
  [SMALL_STATE(103)] = 4727,
  [SMALL_STATE(104)] = 4759,
  [SMALL_STATE(105)] = 4791,
  [SMALL_STATE(106)] = 4823,
  [SMALL_STATE(107)] = 4855,
  [SMALL_STATE(108)] = 4887,
  [SMALL_STATE(109)] = 4919,
  [SMALL_STATE(110)] = 4951,
  [SMALL_STATE(111)] = 4983,
  [SMALL_STATE(112)] = 5015,
  [SMALL_STATE(113)] = 5047,
  [SMALL_STATE(114)] = 5078,
  [SMALL_STATE(115)] = 5109,
  [SMALL_STATE(116)] = 5140,
  [SMALL_STATE(117)] = 5171,
  [SMALL_STATE(118)] = 5202,
  [SMALL_STATE(119)] = 5233,
  [SMALL_STATE(120)] = 5264,
  [SMALL_STATE(121)] = 5295,
  [SMALL_STATE(122)] = 5326,
  [SMALL_STATE(123)] = 5357,
  [SMALL_STATE(124)] = 5388,
  [SMALL_STATE(125)] = 5419,
  [SMALL_STATE(126)] = 5450,
  [SMALL_STATE(127)] = 5481,
  [SMALL_STATE(128)] = 5512,
  [SMALL_STATE(129)] = 5543,
  [SMALL_STATE(130)] = 5574,
  [SMALL_STATE(131)] = 5605,
  [SMALL_STATE(132)] = 5636,
  [SMALL_STATE(133)] = 5667,
  [SMALL_STATE(134)] = 5698,
  [SMALL_STATE(135)] = 5729,
  [SMALL_STATE(136)] = 5760,
  [SMALL_STATE(137)] = 5791,
  [SMALL_STATE(138)] = 5822,
  [SMALL_STATE(139)] = 5853,
  [SMALL_STATE(140)] = 5884,
  [SMALL_STATE(141)] = 5915,
  [SMALL_STATE(142)] = 5946,
  [SMALL_STATE(143)] = 5977,
  [SMALL_STATE(144)] = 6008,
  [SMALL_STATE(145)] = 6039,
  [SMALL_STATE(146)] = 6070,
  [SMALL_STATE(147)] = 6101,
  [SMALL_STATE(148)] = 6132,
  [SMALL_STATE(149)] = 6163,
  [SMALL_STATE(150)] = 6194,
  [SMALL_STATE(151)] = 6225,
  [SMALL_STATE(152)] = 6256,
  [SMALL_STATE(153)] = 6287,
  [SMALL_STATE(154)] = 6318,
  [SMALL_STATE(155)] = 6354,
  [SMALL_STATE(156)] = 6390,
  [SMALL_STATE(157)] = 6426,
  [SMALL_STATE(158)] = 6451,
  [SMALL_STATE(159)] = 6476,
  [SMALL_STATE(160)] = 6501,
  [SMALL_STATE(161)] = 6528,
  [SMALL_STATE(162)] = 6555,
  [SMALL_STATE(163)] = 6582,
  [SMALL_STATE(164)] = 6609,
  [SMALL_STATE(165)] = 6633,
  [SMALL_STATE(166)] = 6657,
  [SMALL_STATE(167)] = 6681,
  [SMALL_STATE(168)] = 6705,
  [SMALL_STATE(169)] = 6734,
  [SMALL_STATE(170)] = 6763,
  [SMALL_STATE(171)] = 6786,
  [SMALL_STATE(172)] = 6809,
  [SMALL_STATE(173)] = 6838,
  [SMALL_STATE(174)] = 6864,
  [SMALL_STATE(175)] = 6890,
  [SMALL_STATE(176)] = 6916,
  [SMALL_STATE(177)] = 6936,
  [SMALL_STATE(178)] = 6956,
  [SMALL_STATE(179)] = 6982,
  [SMALL_STATE(180)] = 7006,
  [SMALL_STATE(181)] = 7032,
  [SMALL_STATE(182)] = 7052,
  [SMALL_STATE(183)] = 7078,
  [SMALL_STATE(184)] = 7104,
  [SMALL_STATE(185)] = 7130,
  [SMALL_STATE(186)] = 7156,
  [SMALL_STATE(187)] = 7182,
  [SMALL_STATE(188)] = 7208,
  [SMALL_STATE(189)] = 7234,
  [SMALL_STATE(190)] = 7260,
  [SMALL_STATE(191)] = 7286,
  [SMALL_STATE(192)] = 7312,
  [SMALL_STATE(193)] = 7338,
  [SMALL_STATE(194)] = 7364,
  [SMALL_STATE(195)] = 7390,
  [SMALL_STATE(196)] = 7411,
  [SMALL_STATE(197)] = 7432,
  [SMALL_STATE(198)] = 7457,
  [SMALL_STATE(199)] = 7478,
  [SMALL_STATE(200)] = 7503,
  [SMALL_STATE(201)] = 7528,
  [SMALL_STATE(202)] = 7549,
  [SMALL_STATE(203)] = 7570,
  [SMALL_STATE(204)] = 7591,
  [SMALL_STATE(205)] = 7612,
  [SMALL_STATE(206)] = 7637,
  [SMALL_STATE(207)] = 7660,
  [SMALL_STATE(208)] = 7685,
  [SMALL_STATE(209)] = 7710,
  [SMALL_STATE(210)] = 7735,
  [SMALL_STATE(211)] = 7760,
  [SMALL_STATE(212)] = 7785,
  [SMALL_STATE(213)] = 7807,
  [SMALL_STATE(214)] = 7825,
  [SMALL_STATE(215)] = 7847,
  [SMALL_STATE(216)] = 7867,
  [SMALL_STATE(217)] = 7887,
  [SMALL_STATE(218)] = 7907,
  [SMALL_STATE(219)] = 7927,
  [SMALL_STATE(220)] = 7947,
  [SMALL_STATE(221)] = 7963,
  [SMALL_STATE(222)] = 7983,
  [SMALL_STATE(223)] = 8003,
  [SMALL_STATE(224)] = 8023,
  [SMALL_STATE(225)] = 8043,
  [SMALL_STATE(226)] = 8061,
  [SMALL_STATE(227)] = 8079,
  [SMALL_STATE(228)] = 8097,
  [SMALL_STATE(229)] = 8117,
  [SMALL_STATE(230)] = 8135,
  [SMALL_STATE(231)] = 8155,
  [SMALL_STATE(232)] = 8173,
  [SMALL_STATE(233)] = 8191,
  [SMALL_STATE(234)] = 8211,
  [SMALL_STATE(235)] = 8229,
  [SMALL_STATE(236)] = 8251,
  [SMALL_STATE(237)] = 8271,
  [SMALL_STATE(238)] = 8291,
  [SMALL_STATE(239)] = 8311,
  [SMALL_STATE(240)] = 8333,
  [SMALL_STATE(241)] = 8349,
  [SMALL_STATE(242)] = 8371,
  [SMALL_STATE(243)] = 8389,
  [SMALL_STATE(244)] = 8409,
  [SMALL_STATE(245)] = 8429,
  [SMALL_STATE(246)] = 8449,
  [SMALL_STATE(247)] = 8469,
  [SMALL_STATE(248)] = 8491,
  [SMALL_STATE(249)] = 8511,
  [SMALL_STATE(250)] = 8533,
  [SMALL_STATE(251)] = 8555,
  [SMALL_STATE(252)] = 8577,
  [SMALL_STATE(253)] = 8597,
  [SMALL_STATE(254)] = 8615,
  [SMALL_STATE(255)] = 8634,
  [SMALL_STATE(256)] = 8649,
  [SMALL_STATE(257)] = 8668,
  [SMALL_STATE(258)] = 8687,
  [SMALL_STATE(259)] = 8704,
  [SMALL_STATE(260)] = 8719,
  [SMALL_STATE(261)] = 8738,
  [SMALL_STATE(262)] = 8757,
  [SMALL_STATE(263)] = 8772,
  [SMALL_STATE(264)] = 8791,
  [SMALL_STATE(265)] = 8806,
  [SMALL_STATE(266)] = 8825,
  [SMALL_STATE(267)] = 8840,
  [SMALL_STATE(268)] = 8859,
  [SMALL_STATE(269)] = 8874,
  [SMALL_STATE(270)] = 8891,
  [SMALL_STATE(271)] = 8910,
  [SMALL_STATE(272)] = 8929,
  [SMALL_STATE(273)] = 8944,
  [SMALL_STATE(274)] = 8963,
  [SMALL_STATE(275)] = 8978,
  [SMALL_STATE(276)] = 8995,
  [SMALL_STATE(277)] = 9012,
  [SMALL_STATE(278)] = 9027,
  [SMALL_STATE(279)] = 9046,
  [SMALL_STATE(280)] = 9065,
  [SMALL_STATE(281)] = 9080,
  [SMALL_STATE(282)] = 9099,
  [SMALL_STATE(283)] = 9114,
  [SMALL_STATE(284)] = 9133,
  [SMALL_STATE(285)] = 9152,
  [SMALL_STATE(286)] = 9167,
  [SMALL_STATE(287)] = 9186,
  [SMALL_STATE(288)] = 9205,
  [SMALL_STATE(289)] = 9222,
  [SMALL_STATE(290)] = 9241,
  [SMALL_STATE(291)] = 9260,
  [SMALL_STATE(292)] = 9279,
  [SMALL_STATE(293)] = 9298,
  [SMALL_STATE(294)] = 9313,
  [SMALL_STATE(295)] = 9332,
  [SMALL_STATE(296)] = 9347,
  [SMALL_STATE(297)] = 9364,
  [SMALL_STATE(298)] = 9383,
  [SMALL_STATE(299)] = 9402,
  [SMALL_STATE(300)] = 9417,
  [SMALL_STATE(301)] = 9436,
  [SMALL_STATE(302)] = 9455,
  [SMALL_STATE(303)] = 9474,
  [SMALL_STATE(304)] = 9493,
  [SMALL_STATE(305)] = 9512,
  [SMALL_STATE(306)] = 9531,
  [SMALL_STATE(307)] = 9550,
  [SMALL_STATE(308)] = 9569,
  [SMALL_STATE(309)] = 9588,
  [SMALL_STATE(310)] = 9607,
  [SMALL_STATE(311)] = 9626,
  [SMALL_STATE(312)] = 9645,
  [SMALL_STATE(313)] = 9664,
  [SMALL_STATE(314)] = 9683,
  [SMALL_STATE(315)] = 9702,
  [SMALL_STATE(316)] = 9721,
  [SMALL_STATE(317)] = 9740,
  [SMALL_STATE(318)] = 9759,
  [SMALL_STATE(319)] = 9778,
  [SMALL_STATE(320)] = 9797,
  [SMALL_STATE(321)] = 9816,
  [SMALL_STATE(322)] = 9830,
  [SMALL_STATE(323)] = 9846,
  [SMALL_STATE(324)] = 9860,
  [SMALL_STATE(325)] = 9876,
  [SMALL_STATE(326)] = 9890,
  [SMALL_STATE(327)] = 9906,
  [SMALL_STATE(328)] = 9920,
  [SMALL_STATE(329)] = 9934,
  [SMALL_STATE(330)] = 9948,
  [SMALL_STATE(331)] = 9962,
  [SMALL_STATE(332)] = 9978,
  [SMALL_STATE(333)] = 9992,
  [SMALL_STATE(334)] = 10008,
  [SMALL_STATE(335)] = 10021,
  [SMALL_STATE(336)] = 10034,
  [SMALL_STATE(337)] = 10047,
  [SMALL_STATE(338)] = 10060,
  [SMALL_STATE(339)] = 10073,
  [SMALL_STATE(340)] = 10086,
  [SMALL_STATE(341)] = 10099,
  [SMALL_STATE(342)] = 10112,
  [SMALL_STATE(343)] = 10125,
  [SMALL_STATE(344)] = 10138,
  [SMALL_STATE(345)] = 10151,
  [SMALL_STATE(346)] = 10164,
  [SMALL_STATE(347)] = 10177,
  [SMALL_STATE(348)] = 10190,
  [SMALL_STATE(349)] = 10203,
  [SMALL_STATE(350)] = 10216,
  [SMALL_STATE(351)] = 10229,
  [SMALL_STATE(352)] = 10242,
  [SMALL_STATE(353)] = 10255,
  [SMALL_STATE(354)] = 10268,
  [SMALL_STATE(355)] = 10281,
  [SMALL_STATE(356)] = 10294,
  [SMALL_STATE(357)] = 10307,
  [SMALL_STATE(358)] = 10320,
  [SMALL_STATE(359)] = 10333,
  [SMALL_STATE(360)] = 10346,
  [SMALL_STATE(361)] = 10359,
  [SMALL_STATE(362)] = 10372,
  [SMALL_STATE(363)] = 10385,
  [SMALL_STATE(364)] = 10398,
  [SMALL_STATE(365)] = 10411,
  [SMALL_STATE(366)] = 10424,
  [SMALL_STATE(367)] = 10437,
  [SMALL_STATE(368)] = 10450,
  [SMALL_STATE(369)] = 10463,
  [SMALL_STATE(370)] = 10476,
  [SMALL_STATE(371)] = 10489,
  [SMALL_STATE(372)] = 10502,
  [SMALL_STATE(373)] = 10515,
  [SMALL_STATE(374)] = 10528,
  [SMALL_STATE(375)] = 10541,
  [SMALL_STATE(376)] = 10554,
  [SMALL_STATE(377)] = 10567,
  [SMALL_STATE(378)] = 10580,
  [SMALL_STATE(379)] = 10593,
  [SMALL_STATE(380)] = 10606,
  [SMALL_STATE(381)] = 10619,
  [SMALL_STATE(382)] = 10632,
  [SMALL_STATE(383)] = 10645,
  [SMALL_STATE(384)] = 10658,
  [SMALL_STATE(385)] = 10671,
  [SMALL_STATE(386)] = 10684,
  [SMALL_STATE(387)] = 10697,
  [SMALL_STATE(388)] = 10710,
  [SMALL_STATE(389)] = 10723,
  [SMALL_STATE(390)] = 10736,
  [SMALL_STATE(391)] = 10749,
  [SMALL_STATE(392)] = 10762,
  [SMALL_STATE(393)] = 10766,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(374),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(334),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(384),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(347),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(349),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(350),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(360),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(370),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(391),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 11),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 11),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 13),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 13),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 12),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 12),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 11),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 11),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 5, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 5, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 11),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 11),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 11),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 11),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_label, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_label, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(330),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [882] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
