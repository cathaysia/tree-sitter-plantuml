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
#define STATE_COUNT 382
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 14
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_alt = 3,
  aux_sym_alt_block_token1 = 4,
  anon_sym_else = 5,
  anon_sym_end = 6,
  anon_sym_loop = 7,
  anon_sym_group = 8,
  anon_sym_skinparam = 9,
  anon_sym_sequenceMessageAlign = 10,
  anon_sym_left = 11,
  anon_sym_right = 12,
  anon_sym_center = 13,
  anon_sym_responseMessageBelowArrow = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  anon_sym_autonumber = 17,
  anon_sym_inc = 18,
  anon_sym_resume = 19,
  aux_sym_attribute_token1 = 20,
  aux_sym_attribute_token2 = 21,
  aux_sym_attribute_token3 = 22,
  aux_sym_attribute_token4 = 23,
  anon_sym_autonumberstop = 24,
  anon_sym_participant = 25,
  anon_sym_actor = 26,
  anon_sym_boundary = 27,
  anon_sym_control = 28,
  anon_sym_entity = 29,
  anon_sym_database = 30,
  anon_sym_collections = 31,
  anon_sym_queue = 32,
  anon_sym_POUND = 33,
  anon_sym_LBRACK = 34,
  aux_sym_multiline_token1 = 35,
  anon_sym_RBRACK = 36,
  anon_sym_as = 37,
  aux_sym_attr_alias_token1 = 38,
  anon_sym_order = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_string_token1 = 41,
  anon_sym_BSLASH_DQUOTE = 42,
  anon_sym_BSLASH = 43,
  aux_sym_escape_char_token1 = 44,
  anon_sym_COLON = 45,
  aux_sym_sequence_diagram_token1 = 46,
  anon_sym_DASH = 47,
  anon_sym_GT = 48,
  anon_sym_o = 49,
  anon_sym_x = 50,
  anon_sym_ox = 51,
  anon_sym_GT_GT = 52,
  anon_sym_BSLASH_BSLASH = 53,
  anon_sym_SLASH = 54,
  anon_sym_SLASH_SLASH = 55,
  anon_sym_DASH_DASH = 56,
  anon_sym_LBRACK_POUND = 57,
  anon_sym_LT = 58,
  anon_sym_xo = 59,
  anon_sym_LT_LT = 60,
  anon_sym_ATstartjson = 61,
  anon_sym_AT = 62,
  aux_sym_json_token1 = 63,
  anon_sym_ATendjson = 64,
  anon_sym_ATstartyaml = 65,
  anon_sym_ATendyaml = 66,
  anon_sym_ATstartebnf = 67,
  anon_sym_ATendebnf = 68,
  anon_sym_ATstartregex = 69,
  anon_sym_ATendregex = 70,
  anon_sym_ATstartditaa = 71,
  anon_sym_ATendditaa = 72,
  anon_sym_ATstartgantt = 73,
  anon_sym_ATendgantt = 74,
  anon_sym_ATstartchronology = 75,
  anon_sym_ATendchronology = 76,
  anon_sym_ATstartmindmap = 77,
  anon_sym_ATendmindmap = 78,
  anon_sym_ATstartwbs = 79,
  anon_sym_ATendwbs = 80,
  anon_sym_ATstartchen = 81,
  anon_sym_ATendchen = 82,
  anon_sym_SQUOTE = 83,
  aux_sym_comment_token1 = 84,
  anon_sym_SLASH_SQUOTE = 85,
  aux_sym_comment_token2 = 86,
  sym_color = 87,
  sym_diagram = 88,
  sym_uml = 89,
  sym_expression = 90,
  sym_alt_block = 91,
  sym_loop_block = 92,
  sym_group_block = 93,
  sym_skinparam = 94,
  sym_boolean_literal = 95,
  sym_attribute = 96,
  sym_multiline = 97,
  sym_attr_alias = 98,
  sym_attr_order = 99,
  sym_string = 100,
  sym_escape_char = 101,
  sym_participant_name = 102,
  sym_sequence_diagram = 103,
  sym_connector = 104,
  sym_json = 105,
  sym_yaml = 106,
  sym_ebnf = 107,
  sym_regex = 108,
  sym_ditaa = 109,
  sym_gantt = 110,
  sym_chronology = 111,
  sym_mindmap = 112,
  sym_wbs = 113,
  sym_chen = 114,
  sym_comment = 115,
  aux_sym_uml_repeat1 = 116,
  aux_sym_alt_block_repeat1 = 117,
  aux_sym_attribute_repeat1 = 118,
  aux_sym_attribute_repeat2 = 119,
  aux_sym_multiline_repeat1 = 120,
  aux_sym_string_repeat1 = 121,
  aux_sym_json_repeat1 = 122,
  aux_sym_json_repeat2 = 123,
  alias_sym_chen_data = 124,
  alias_sym_chronology_data = 125,
  alias_sym_ditaa_data = 126,
  alias_sym_ebnf_data = 127,
  alias_sym_gantt_data = 128,
  alias_sym_json_data = 129,
  alias_sym_left = 130,
  alias_sym_mindmap_data = 131,
  alias_sym_new_name = 132,
  alias_sym_regex_data = 133,
  alias_sym_right = 134,
  alias_sym_value = 135,
  alias_sym_wbs_data = 136,
  alias_sym_yaml_data = 137,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_alt] = "alt",
  [aux_sym_alt_block_token1] = "label",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_loop] = "loop",
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
  [anon_sym_LBRACK] = "[",
  [aux_sym_multiline_token1] = "multiline_token1",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_alt] = anon_sym_alt,
  [aux_sym_alt_block_token1] = aux_sym_alt_block_token1,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_loop] = anon_sym_loop,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_multiline_token1] = aux_sym_multiline_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alt_block_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [4] = 2,
  [5] = 3,
  [6] = 3,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 8,
  [15] = 15,
  [16] = 8,
  [17] = 17,
  [18] = 11,
  [19] = 13,
  [20] = 12,
  [21] = 17,
  [22] = 12,
  [23] = 11,
  [24] = 13,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 30,
  [36] = 30,
  [37] = 31,
  [38] = 32,
  [39] = 31,
  [40] = 32,
  [41] = 33,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 42,
  [49] = 49,
  [50] = 50,
  [51] = 42,
  [52] = 44,
  [53] = 43,
  [54] = 54,
  [55] = 55,
  [56] = 44,
  [57] = 57,
  [58] = 49,
  [59] = 46,
  [60] = 49,
  [61] = 54,
  [62] = 57,
  [63] = 43,
  [64] = 47,
  [65] = 50,
  [66] = 44,
  [67] = 55,
  [68] = 47,
  [69] = 46,
  [70] = 57,
  [71] = 42,
  [72] = 54,
  [73] = 50,
  [74] = 55,
  [75] = 43,
  [76] = 43,
  [77] = 44,
  [78] = 78,
  [79] = 42,
  [80] = 47,
  [81] = 42,
  [82] = 44,
  [83] = 83,
  [84] = 84,
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
  [99] = 47,
  [100] = 100,
  [101] = 78,
  [102] = 102,
  [103] = 78,
  [104] = 47,
  [105] = 105,
  [106] = 89,
  [107] = 98,
  [108] = 88,
  [109] = 83,
  [110] = 84,
  [111] = 85,
  [112] = 86,
  [113] = 87,
  [114] = 88,
  [115] = 89,
  [116] = 90,
  [117] = 91,
  [118] = 92,
  [119] = 93,
  [120] = 85,
  [121] = 94,
  [122] = 95,
  [123] = 96,
  [124] = 94,
  [125] = 95,
  [126] = 96,
  [127] = 97,
  [128] = 105,
  [129] = 97,
  [130] = 105,
  [131] = 102,
  [132] = 100,
  [133] = 98,
  [134] = 90,
  [135] = 93,
  [136] = 91,
  [137] = 84,
  [138] = 87,
  [139] = 102,
  [140] = 86,
  [141] = 92,
  [142] = 100,
  [143] = 83,
  [144] = 144,
  [145] = 144,
  [146] = 144,
  [147] = 43,
  [148] = 42,
  [149] = 44,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 158,
  [161] = 161,
  [162] = 158,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 164,
  [167] = 167,
  [168] = 164,
  [169] = 169,
  [170] = 163,
  [171] = 171,
  [172] = 164,
  [173] = 163,
  [174] = 164,
  [175] = 163,
  [176] = 164,
  [177] = 164,
  [178] = 163,
  [179] = 164,
  [180] = 163,
  [181] = 164,
  [182] = 163,
  [183] = 183,
  [184] = 163,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 186,
  [190] = 187,
  [191] = 191,
  [192] = 188,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 188,
  [198] = 198,
  [199] = 187,
  [200] = 186,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 212,
  [222] = 212,
  [223] = 212,
  [224] = 224,
  [225] = 225,
  [226] = 212,
  [227] = 227,
  [228] = 228,
  [229] = 212,
  [230] = 212,
  [231] = 212,
  [232] = 232,
  [233] = 212,
  [234] = 203,
  [235] = 232,
  [236] = 236,
  [237] = 237,
  [238] = 203,
  [239] = 232,
  [240] = 236,
  [241] = 236,
  [242] = 212,
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
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 214,
  [259] = 259,
  [260] = 260,
  [261] = 257,
  [262] = 257,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 257,
  [267] = 257,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 257,
  [272] = 272,
  [273] = 257,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 257,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 274,
  [285] = 276,
  [286] = 286,
  [287] = 287,
  [288] = 275,
  [289] = 289,
  [290] = 251,
  [291] = 291,
  [292] = 274,
  [293] = 276,
  [294] = 294,
  [295] = 295,
  [296] = 275,
  [297] = 297,
  [298] = 251,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 257,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 257,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 312,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 312,
  [324] = 324,
  [325] = 324,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 327,
  [341] = 44,
  [342] = 342,
  [343] = 343,
  [344] = 336,
  [345] = 345,
  [346] = 334,
  [347] = 347,
  [348] = 342,
  [349] = 349,
  [350] = 326,
  [351] = 351,
  [352] = 327,
  [353] = 328,
  [354] = 354,
  [355] = 336,
  [356] = 342,
  [357] = 324,
  [358] = 358,
  [359] = 342,
  [360] = 42,
  [361] = 361,
  [362] = 342,
  [363] = 337,
  [364] = 364,
  [365] = 334,
  [366] = 328,
  [367] = 42,
  [368] = 368,
  [369] = 333,
  [370] = 338,
  [371] = 339,
  [372] = 342,
  [373] = 44,
  [374] = 333,
  [375] = 338,
  [376] = 339,
  [377] = 349,
  [378] = 337,
  [379] = 349,
  [380] = 380,
  [381] = 381,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(657);
      ADVANCE_MAP(
        '"', 789,
        '#', 695,
        '\'', 866,
        '-', 806,
        '/', 816,
        ':', 801,
        '<', 820,
        '>', 807,
        '@', 824,
        '[', 696,
        '\\', 796,
        ']', 700,
        'o', 808,
        'x', 810,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(685);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(800);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(799);
      if (lookahead != 0) ADVANCE(798);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(872);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(871);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(871);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(874);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(871);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 789,
        '#', 695,
        '\'', 866,
        '/', 35,
        '@', 111,
        '[', 696,
        'a', 712,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 744,
        'g', 766,
        'l', 752,
        'o', 761,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 789,
        '#', 695,
        '\'', 866,
        '/', 35,
        '[', 696,
        'a', 712,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 732,
        'g', 766,
        'l', 752,
        'o', 761,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 789,
        '#', 695,
        '\'', 866,
        '/', 35,
        '[', 696,
        'a', 712,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 738,
        'g', 766,
        'l', 752,
        'o', 761,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 789,
        '\'', 866,
        '-', 805,
        '/', 816,
        ':', 801,
        '<', 820,
        '>', 807,
        '@', 220,
        '[', 20,
        '\\', 797,
        'a', 713,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 732,
        'g', 766,
        'l', 752,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '-') ADVANCE(805);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == '>') ADVANCE(807);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(797);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 789,
        '\'', 866,
        '/', 35,
        ':', 801,
        '@', 111,
        'a', 713,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 744,
        'g', 766,
        'l', 752,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 789,
        '\'', 866,
        '/', 35,
        ':', 801,
        '@', 111,
        'a', 712,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 744,
        'g', 766,
        'l', 752,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 789,
        '\'', 866,
        '/', 35,
        ':', 801,
        'a', 713,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 738,
        'g', 766,
        'l', 752,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 789,
        '\'', 866,
        '/', 35,
        ':', 801,
        'a', 712,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 732,
        'g', 766,
        'l', 752,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 789,
        '\'', 866,
        '/', 35,
        ':', 801,
        'a', 712,
        'b', 747,
        'c', 746,
        'd', 705,
        'e', 738,
        'g', 766,
        'l', 752,
        'p', 703,
        'q', 780,
        's', 731,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead == 'x') ADVANCE(812);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(795);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead != 0) ADVANCE(790);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(819);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\'', 866,
        '-', 806,
        '/', 816,
        '<', 820,
        '\\', 797,
        'c', 107,
        'e', 145,
        'f', 56,
        'l', 100,
        'o', 808,
        'r', 104,
        's', 91,
        't', 204,
        'x', 811,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 866,
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
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(794);
      if (lookahead == ']') ADVANCE(700);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(698);
      if (lookahead != 0) ADVANCE(697);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(836);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(826);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(837);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(827);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(828);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(829);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(840);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(830);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(841);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(831);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(842);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(832);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(843);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(833);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(844);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(834);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(873);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(869);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(804);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(870);
      if (lookahead == '/') ADVANCE(662);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0) ADVANCE(663);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(868);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(878);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(875);
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
      if (lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(854);
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
      if (lookahead == 'c') ADVANCE(679);
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
      if (lookahead == 'd') ADVANCE(666);
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
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(677);
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
      if (lookahead == 'e') ADVANCE(680);
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
      if (lookahead == 'f') ADVANCE(851);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(850);
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
      if (lookahead == 'l') ADVANCE(849);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(848);
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
      if (lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(864);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(671);
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
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(80);
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
      if (lookahead == 'p') ADVANCE(861);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(860);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(686);
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
      if (lookahead == 'r') ADVANCE(674);
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
      if (lookahead == 's') ADVANCE(863);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(862);
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
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(673);
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
      if (lookahead == 'w') ADVANCE(675);
      END_STATE();
    case 241:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 242:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 243:
      if (lookahead == 'x') ADVANCE(853);
      END_STATE();
    case 244:
      if (lookahead == 'x') ADVANCE(852);
      END_STATE();
    case 245:
      if (lookahead == 'y') ADVANCE(859);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(858);
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
          lookahead == 'a') ADVANCE(879);
      END_STATE();
    case 257:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 258:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      END_STATE();
    case 259:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(879);
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
          lookahead == 'b') ADVANCE(879);
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
          lookahead == 'd') ADVANCE(879);
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
          lookahead == 'd') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(896);
      END_STATE();
    case 326:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(879);
      END_STATE();
    case 327:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(884);
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
          lookahead == 'e') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(896);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
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
          lookahead == 'y') ADVANCE(879);
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
          lookahead == 'y') ADVANCE(879);
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
          lookahead == 'f') ADVANCE(879);
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
          lookahead == 'h') ADVANCE(879);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(896);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(879);
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
          lookahead == 'k') ADVANCE(879);
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
          lookahead == 'l') ADVANCE(879);
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
          lookahead == 'm') ADVANCE(879);
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
          lookahead == 'n') ADVANCE(879);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(892);
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
          lookahead == 'o') ADVANCE(879);
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
          lookahead == 'p') ADVANCE(879);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(896);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(881);
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
          lookahead == 't') ADVANCE(879);
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
          lookahead == 't') ADVANCE(880);
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
          lookahead == 'u') ADVANCE(879);
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
          lookahead == 'w') ADVANCE(879);
      END_STATE();
    case 635:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(885);
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
          lookahead == 'y') ADVANCE(879);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      END_STATE();
    case 652:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 653:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(896);
      END_STATE();
    case 654:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(879);
      END_STATE();
    case 655:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      END_STATE();
    case 656:
      if (eof) ADVANCE(657);
      if (lookahead == '\n') ADVANCE(685);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
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
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_alt_block_token1);
      if (lookahead == '\'') ADVANCE(870);
      if (lookahead == '/') ADVANCE(662);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(663);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_alt_block_token1);
      if (lookahead == '\'') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_alt_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_attribute_token4);
      if (lookahead == '\n') ADVANCE(685);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(794);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(697);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(873);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(770);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(770);
      if (lookahead == 'u') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(667);
      if (lookahead == 't') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead == 'n') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(735);
      if (lookahead == 'n') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(795);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(790);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(873);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(793);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(793);
      if (lookahead == '\\') ADVANCE(815);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(815);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(800);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(799);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(798);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(873);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(869);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(804);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(804);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(804);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(818);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(814);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(873);
      if (lookahead == '/') ADVANCE(817);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(822);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(836);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(826);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(837);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(827);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(828);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(829);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(840);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(830);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(841);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(831);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(842);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(832);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(843);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(833);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(844);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(866);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(834);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(873);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(871);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(804);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(663);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(872);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(871);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(804);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(663);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(463);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(576);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(895);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(575);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(895);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(488);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(893);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(430);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(894);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(654);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(893);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(895);
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
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
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
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
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
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
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
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 656},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 656},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 656},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 19},
  [165] = {.lex_state = 19},
  [166] = {.lex_state = 19},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 19},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 19},
  [171] = {.lex_state = 19},
  [172] = {.lex_state = 19},
  [173] = {.lex_state = 19},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 19},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 19},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 19},
  [180] = {.lex_state = 19},
  [181] = {.lex_state = 19},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 24},
  [187] = {.lex_state = 24},
  [188] = {.lex_state = 656},
  [189] = {.lex_state = 24},
  [190] = {.lex_state = 24},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 656},
  [193] = {.lex_state = 24},
  [194] = {.lex_state = 17},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 656},
  [198] = {.lex_state = 17},
  [199] = {.lex_state = 24},
  [200] = {.lex_state = 24},
  [201] = {.lex_state = 17},
  [202] = {.lex_state = 25},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 25},
  [205] = {.lex_state = 26},
  [206] = {.lex_state = 27},
  [207] = {.lex_state = 28},
  [208] = {.lex_state = 29},
  [209] = {.lex_state = 30},
  [210] = {.lex_state = 656},
  [211] = {.lex_state = 31},
  [212] = {.lex_state = 27},
  [213] = {.lex_state = 26},
  [214] = {.lex_state = 19},
  [215] = {.lex_state = 27},
  [216] = {.lex_state = 28},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 30},
  [219] = {.lex_state = 31},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 26},
  [223] = {.lex_state = 29},
  [224] = {.lex_state = 33},
  [225] = {.lex_state = 32},
  [226] = {.lex_state = 30},
  [227] = {.lex_state = 34},
  [228] = {.lex_state = 33},
  [229] = {.lex_state = 31},
  [230] = {.lex_state = 32},
  [231] = {.lex_state = 34},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 33},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 19},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 25},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 656},
  [245] = {.lex_state = 656},
  [246] = {.lex_state = 656},
  [247] = {.lex_state = 656},
  [248] = {.lex_state = 656},
  [249] = {.lex_state = 656},
  [250] = {.lex_state = 656},
  [251] = {.lex_state = 21},
  [252] = {.lex_state = 21},
  [253] = {.lex_state = 656},
  [254] = {.lex_state = 656},
  [255] = {.lex_state = 656},
  [256] = {.lex_state = 656},
  [257] = {.lex_state = 28},
  [258] = {.lex_state = 24},
  [259] = {.lex_state = 656},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 29},
  [262] = {.lex_state = 25},
  [263] = {.lex_state = 656},
  [264] = {.lex_state = 656},
  [265] = {.lex_state = 656},
  [266] = {.lex_state = 30},
  [267] = {.lex_state = 27},
  [268] = {.lex_state = 656},
  [269] = {.lex_state = 656},
  [270] = {.lex_state = 656},
  [271] = {.lex_state = 31},
  [272] = {.lex_state = 656},
  [273] = {.lex_state = 32},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 21},
  [276] = {.lex_state = 21},
  [277] = {.lex_state = 34},
  [278] = {.lex_state = 656},
  [279] = {.lex_state = 656},
  [280] = {.lex_state = 656},
  [281] = {.lex_state = 656},
  [282] = {.lex_state = 656},
  [283] = {.lex_state = 656},
  [284] = {.lex_state = 21},
  [285] = {.lex_state = 21},
  [286] = {.lex_state = 656},
  [287] = {.lex_state = 656},
  [288] = {.lex_state = 21},
  [289] = {.lex_state = 656},
  [290] = {.lex_state = 21},
  [291] = {.lex_state = 656},
  [292] = {.lex_state = 21},
  [293] = {.lex_state = 21},
  [294] = {.lex_state = 656},
  [295] = {.lex_state = 656},
  [296] = {.lex_state = 21},
  [297] = {.lex_state = 656},
  [298] = {.lex_state = 21},
  [299] = {.lex_state = 656},
  [300] = {.lex_state = 656},
  [301] = {.lex_state = 656},
  [302] = {.lex_state = 656},
  [303] = {.lex_state = 656},
  [304] = {.lex_state = 26},
  [305] = {.lex_state = 656},
  [306] = {.lex_state = 656},
  [307] = {.lex_state = 656},
  [308] = {.lex_state = 656},
  [309] = {.lex_state = 656},
  [310] = {.lex_state = 33},
  [311] = {.lex_state = 11},
  [312] = {.lex_state = 21},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 11},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 11},
  [318] = {.lex_state = 21},
  [319] = {.lex_state = 656},
  [320] = {.lex_state = 11},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 21},
  [324] = {.lex_state = 656},
  [325] = {.lex_state = 656},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 36},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 37},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 37},
  [334] = {.lex_state = 22},
  [335] = {.lex_state = 38},
  [336] = {.lex_state = 23},
  [337] = {.lex_state = 656},
  [338] = {.lex_state = 37},
  [339] = {.lex_state = 37},
  [340] = {.lex_state = 36},
  [341] = {.lex_state = 656},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 22},
  [344] = {.lex_state = 23},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 22},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 11},
  [349] = {.lex_state = 21},
  [350] = {.lex_state = 2},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 36},
  [353] = {.lex_state = 36},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 23},
  [356] = {.lex_state = 11},
  [357] = {.lex_state = 656},
  [358] = {.lex_state = 22},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 23},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 11},
  [363] = {.lex_state = 656},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 22},
  [366] = {.lex_state = 36},
  [367] = {.lex_state = 656},
  [368] = {.lex_state = 22},
  [369] = {.lex_state = 37},
  [370] = {.lex_state = 37},
  [371] = {.lex_state = 37},
  [372] = {.lex_state = 11},
  [373] = {.lex_state = 23},
  [374] = {.lex_state = 37},
  [375] = {.lex_state = 37},
  [376] = {.lex_state = 37},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 656},
  [379] = {.lex_state = 21},
  [380] = {(TSStateId)(-1)},
  [381] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(1),
    [aux_sym_attribute_token2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_diagram] = STATE(361),
    [sym_uml] = STATE(364),
    [sym_json] = STATE(364),
    [sym_yaml] = STATE(364),
    [sym_ebnf] = STATE(364),
    [sym_regex] = STATE(364),
    [sym_ditaa] = STATE(364),
    [sym_gantt] = STATE(364),
    [sym_chronology] = STATE(364),
    [sym_mindmap] = STATE(364),
    [sym_wbs] = STATE(364),
    [sym_chen] = STATE(364),
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
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(275), 1,
      aux_sym_alt_block_repeat1,
    STATE(85), 6,
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
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(251), 1,
      aux_sym_alt_block_repeat1,
    STATE(85), 6,
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
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_uml_repeat1,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(288), 1,
      aux_sym_alt_block_repeat1,
    STATE(85), 6,
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
    ACTIONS(55), 1,
      anon_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(298), 1,
      aux_sym_alt_block_repeat1,
    STATE(85), 6,
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
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(290), 1,
      aux_sym_alt_block_repeat1,
    STATE(85), 6,
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
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(5), 1,
      aux_sym_uml_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(296), 1,
      aux_sym_alt_block_repeat1,
    STATE(85), 6,
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
  [438] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_alt,
    ACTIONS(66), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(72), 1,
      anon_sym_skinparam,
    ACTIONS(75), 1,
      anon_sym_autonumber,
    ACTIONS(78), 1,
      anon_sym_autonumberstop,
    ACTIONS(84), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    ACTIONS(64), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(8), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(85), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(81), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [504] = 18,
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
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    ACTIONS(90), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(85), 6,
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
  [572] = 18,
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
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(84), 1,
      sym_expression,
    STATE(145), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    ACTIONS(92), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(85), 6,
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
  [640] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(96), 1,
      anon_sym_end,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    STATE(11), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [707] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(110), 1,
      anon_sym_end,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [774] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(112), 1,
      anon_sym_end,
    STATE(13), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [841] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(84), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_ATenduml,
    ACTIONS(116), 1,
      anon_sym_alt,
    ACTIONS(119), 1,
      anon_sym_loop,
    ACTIONS(122), 1,
      anon_sym_group,
    ACTIONS(125), 1,
      anon_sym_skinparam,
    ACTIONS(128), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    STATE(137), 1,
      sym_expression,
    STATE(144), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(14), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(120), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(134), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [906] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_ATenduml,
    ACTIONS(139), 1,
      anon_sym_alt,
    ACTIONS(141), 1,
      anon_sym_loop,
    ACTIONS(143), 1,
      anon_sym_group,
    ACTIONS(145), 1,
      anon_sym_skinparam,
    ACTIONS(147), 1,
      anon_sym_autonumber,
    ACTIONS(149), 1,
      anon_sym_autonumberstop,
    STATE(15), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(137), 1,
      sym_expression,
    STATE(144), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(120), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(151), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [973] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_end,
    ACTIONS(84), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_alt,
    ACTIONS(156), 1,
      anon_sym_loop,
    ACTIONS(159), 1,
      anon_sym_group,
    ACTIONS(162), 1,
      anon_sym_skinparam,
    ACTIONS(165), 1,
      anon_sym_autonumber,
    ACTIONS(168), 1,
      anon_sym_autonumberstop,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(16), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(171), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1038] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(174), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1105] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(176), 1,
      anon_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_uml_repeat1,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1172] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(178), 1,
      anon_sym_end,
    STATE(19), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_uml_repeat1,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1239] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(180), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1306] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(182), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1373] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(184), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1440] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(186), 1,
      anon_sym_end,
    STATE(23), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_uml_repeat1,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1507] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(188), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1574] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_alt,
    ACTIONS(98), 1,
      anon_sym_loop,
    ACTIONS(100), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(106), 1,
      anon_sym_autonumberstop,
    ACTIONS(190), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(110), 1,
      sym_expression,
    STATE(146), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(111), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(108), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1641] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_alt,
    ACTIONS(141), 1,
      anon_sym_loop,
    ACTIONS(143), 1,
      anon_sym_group,
    ACTIONS(145), 1,
      anon_sym_skinparam,
    ACTIONS(147), 1,
      anon_sym_autonumber,
    ACTIONS(149), 1,
      anon_sym_autonumberstop,
    ACTIONS(192), 1,
      anon_sym_ATenduml,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(137), 1,
      sym_expression,
    STATE(144), 1,
      sym_participant_name,
    STATE(147), 1,
      sym_string,
    STATE(120), 6,
      sym_alt_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(151), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1708] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_as,
    ACTIONS(204), 1,
      anon_sym_order,
    STATE(27), 1,
      sym_comment,
    STATE(30), 1,
      sym_multiline,
    STATE(31), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(196), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(194), 16,
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
  [1762] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_order,
    STATE(28), 1,
      sym_comment,
    STATE(36), 1,
      sym_multiline,
    STATE(37), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(196), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(194), 15,
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
  [1815] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(214), 1,
      anon_sym_POUND,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_order,
    STATE(29), 1,
      sym_comment,
    STATE(35), 1,
      sym_multiline,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(196), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(194), 14,
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
  [1868] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_as,
    ACTIONS(204), 1,
      anon_sym_order,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(222), 16,
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
  [1916] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_as,
    ACTIONS(204), 1,
      anon_sym_order,
    STATE(31), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(222), 16,
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
  [1964] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_as,
    ACTIONS(204), 1,
      anon_sym_order,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(228), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(226), 16,
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
  [2012] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_order,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(50), 2,
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
  [2058] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      anon_sym_as,
    ACTIONS(249), 1,
      anon_sym_order,
    ACTIONS(232), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(34), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(65), 2,
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
  [2103] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(214), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_order,
    STATE(35), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(224), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(222), 14,
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
  [2150] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_order,
    STATE(36), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(222), 15,
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
  [2197] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_order,
    STATE(34), 1,
      aux_sym_attribute_repeat2,
    STATE(37), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(222), 15,
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
  [2244] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_order,
    STATE(34), 1,
      aux_sym_attribute_repeat2,
    STATE(38), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(226), 15,
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
  [2291] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(214), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_order,
    STATE(39), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(224), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(222), 14,
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
  [2338] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(214), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_order,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(73), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(228), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(226), 14,
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
  [2385] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(252), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_order,
    STATE(41), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(73), 2,
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
  [2430] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(263), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(261), 18,
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
  [2466] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(265), 18,
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
  [2502] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
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
  [2538] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(265), 17,
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
  [2573] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(275), 3,
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
  [2608] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(279), 3,
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
  [2643] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(261), 16,
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
  [2678] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
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
  [2713] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(285), 18,
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
  [2748] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(263), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(261), 17,
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
  [2783] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
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
  [2818] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(265), 16,
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
  [2853] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(289), 18,
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
  [2888] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_as,
    ACTIONS(299), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_comment,
    STATE(78), 1,
      sym_attr_alias,
    ACTIONS(295), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 16,
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
  [2929] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
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
  [2964] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(230), 18,
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
  [2999] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
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
  [3033] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(275), 3,
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
  [3067] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
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
  [3101] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(289), 17,
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
  [3135] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(230), 16,
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
  [3169] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(265), 17,
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
  [3203] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(279), 3,
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
  [3237] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(285), 17,
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
  [3271] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
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
  [3305] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_as,
    ACTIONS(303), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_comment,
    STATE(101), 1,
      sym_attr_alias,
    ACTIONS(295), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 15,
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
  [3345] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_ATenduml,
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
  [3379] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(275), 4,
      anon_sym_ATenduml,
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
  [3413] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(230), 17,
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
  [3447] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(261), 17,
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
  [3481] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(289), 16,
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
  [3515] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(287), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(285), 16,
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
  [3549] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(305), 1,
      anon_sym_as,
    ACTIONS(307), 1,
      anon_sym_COLON,
    STATE(74), 1,
      sym_comment,
    STATE(103), 1,
      sym_attr_alias,
    ACTIONS(295), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 14,
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
  [3589] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(265), 15,
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
  [3622] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(265), 16,
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
  [3655] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
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
  [3688] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(313), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(309), 16,
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
  [3723] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(263), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(261), 15,
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
  [3756] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(277), 16,
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
  [3789] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(261), 16,
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
  [3822] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
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
  [3855] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(315), 16,
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
  [3887] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(319), 16,
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
  [3919] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
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
  [3951] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(194), 16,
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
  [3983] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
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
  [4015] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
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
  [4047] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
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
  [4079] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
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
  [4111] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
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
  [4143] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(222), 16,
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
  [4175] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(222), 16,
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
  [4207] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(347), 16,
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
  [4239] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 16,
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
  [4271] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
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
  [4303] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(226), 16,
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
  [4335] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
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
  [4367] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(277), 14,
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
  [4399] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
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
  [4431] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(367), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(309), 15,
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
  [4465] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(102), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(369), 16,
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
  [4497] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(373), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(309), 14,
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
  [4531] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(277), 15,
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
  [4563] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(226), 16,
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
  [4595] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
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
  [4626] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
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
  [4657] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
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
  [4688] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(315), 14,
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
  [4719] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(319), 15,
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
  [4750] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
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
  [4781] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(194), 15,
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
  [4812] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
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
  [4843] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(114), 1,
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
  [4874] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(115), 1,
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
  [4905] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
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
  [4936] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
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
  [4967] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(222), 15,
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
  [4998] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(222), 15,
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
  [5029] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
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
  [5060] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(347), 14,
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
  [5091] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 14,
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
  [5122] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
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
  [5153] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(124), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(347), 15,
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
  [5184] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(351), 15,
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
  [5215] = 5,
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
  [5246] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(226), 15,
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
  [5277] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(226), 15,
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
  [5308] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(129), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(226), 14,
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
  [5339] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(130), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(226), 14,
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
  [5370] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(369), 15,
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
  [5401] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
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
  [5432] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
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
  [5463] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
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
  [5494] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(222), 14,
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
  [5525] = 5,
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
  [5556] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(319), 14,
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
  [5587] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
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
  [5618] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(369), 14,
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
  [5649] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(194), 14,
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
  [5680] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(222), 14,
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
  [5711] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
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
  [5742] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(315), 15,
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
  [5773] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_x,
    ACTIONS(385), 1,
      anon_sym_DASH_DASH,
    STATE(144), 1,
      sym_comment,
    STATE(241), 1,
      sym_connector,
    ACTIONS(379), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(375), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(383), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [5809] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_x,
    ACTIONS(385), 1,
      anon_sym_DASH_DASH,
    STATE(145), 1,
      sym_comment,
    STATE(236), 1,
      sym_connector,
    ACTIONS(379), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(375), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(383), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [5845] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_x,
    ACTIONS(385), 1,
      anon_sym_DASH_DASH,
    STATE(146), 1,
      sym_comment,
    STATE(240), 1,
      sym_connector,
    ACTIONS(379), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(375), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(383), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [5881] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
      sym_comment,
    ACTIONS(265), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(267), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [5906] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
      sym_comment,
    ACTIONS(261), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(263), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [5931] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
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
  [5956] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(393), 1,
      anon_sym_LBRACK_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(387), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(389), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(391), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [5983] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LBRACK_POUND,
    STATE(151), 1,
      sym_comment,
    ACTIONS(395), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(397), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(399), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6010] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(407), 1,
      anon_sym_DASH,
    STATE(152), 1,
      sym_comment,
    ACTIONS(403), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(405), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(409), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6037] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(153), 1,
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
  [6064] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
      sym_comment,
    ACTIONS(387), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(389), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(391), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6088] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(395), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(397), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(399), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6112] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(156), 1,
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
  [6136] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
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
  [6160] = 9,
    ACTIONS(427), 1,
      aux_sym_attribute_token3,
    ACTIONS(429), 1,
      aux_sym_attribute_token4,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
      sym_comment,
    STATE(188), 1,
      aux_sym_attribute_repeat1,
    STATE(363), 1,
      sym_string,
    ACTIONS(425), 2,
      anon_sym_inc,
      anon_sym_resume,
  [6189] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(441), 1,
      anon_sym_LBRACK_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(437), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(439), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6212] = 9,
    ACTIONS(427), 1,
      aux_sym_attribute_token3,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(445), 1,
      aux_sym_attribute_token4,
    STATE(160), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_attribute_repeat1,
    STATE(378), 1,
      sym_string,
    ACTIONS(443), 2,
      anon_sym_inc,
      anon_sym_resume,
  [6241] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(449), 1,
      anon_sym_DASH,
    STATE(161), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(451), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6264] = 9,
    ACTIONS(427), 1,
      aux_sym_attribute_token3,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(455), 1,
      aux_sym_attribute_token4,
    STATE(162), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_attribute_repeat1,
    STATE(337), 1,
      sym_string,
    ACTIONS(453), 2,
      anon_sym_inc,
      anon_sym_resume,
  [6293] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    STATE(163), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6319] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6345] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6371] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6397] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(409), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6417] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6443] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(169), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(473), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [6463] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6489] = 7,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(479), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(171), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [6513] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6539] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(173), 1,
      sym_comment,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6565] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_comment,
    STATE(175), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6591] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(175), 1,
      sym_comment,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6617] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      aux_sym_string_repeat1,
    STATE(176), 1,
      sym_comment,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6643] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6669] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(178), 1,
      sym_comment,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6695] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6721] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(180), 1,
      sym_comment,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6747] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym_string_repeat1,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6773] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(182), 1,
      sym_comment,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6799] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(183), 1,
      sym_comment,
    ACTIONS(437), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(439), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6819] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_string_repeat1,
    STATE(184), 1,
      sym_comment,
    STATE(237), 1,
      sym_escape_char,
    ACTIONS(459), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [6845] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(509), 1,
      aux_sym_attr_alias_token1,
    STATE(185), 1,
      sym_comment,
    ACTIONS(511), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [6866] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(513), 1,
      aux_sym_multiline_token1,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    STATE(186), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym_multiline_repeat1,
    STATE(260), 1,
      sym_escape_char,
  [6891] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(513), 1,
      aux_sym_multiline_token1,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_multiline_repeat1,
    STATE(260), 1,
      sym_escape_char,
  [6916] = 8,
    ACTIONS(427), 1,
      aux_sym_attribute_token3,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(521), 1,
      aux_sym_attribute_token4,
    STATE(188), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_attribute_repeat1,
    STATE(325), 1,
      sym_string,
  [6941] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(513), 1,
      aux_sym_multiline_token1,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_comment,
    STATE(190), 1,
      aux_sym_multiline_repeat1,
    STATE(260), 1,
      sym_escape_char,
  [6966] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(513), 1,
      aux_sym_multiline_token1,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_multiline_repeat1,
    STATE(260), 1,
      sym_escape_char,
  [6991] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      aux_sym_attr_alias_token1,
    STATE(191), 1,
      sym_comment,
    ACTIONS(529), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7012] = 8,
    ACTIONS(427), 1,
      aux_sym_attribute_token3,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(531), 1,
      aux_sym_attribute_token4,
    STATE(192), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_attribute_repeat1,
    STATE(357), 1,
      sym_string,
  [7037] = 7,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(533), 1,
      aux_sym_multiline_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    ACTIONS(538), 1,
      anon_sym_BSLASH,
    STATE(260), 1,
      sym_escape_char,
    STATE(193), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [7060] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(541), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_comment,
    ACTIONS(545), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7081] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      aux_sym_attr_alias_token1,
    STATE(195), 1,
      sym_comment,
    ACTIONS(549), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7102] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      aux_sym_attr_alias_token1,
    STATE(196), 1,
      sym_comment,
    ACTIONS(553), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7123] = 8,
    ACTIONS(427), 1,
      aux_sym_attribute_token3,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      aux_sym_attribute_token4,
    STATE(197), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_attribute_repeat1,
    STATE(324), 1,
      sym_string,
  [7148] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(557), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      sym_comment,
    ACTIONS(561), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7169] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(513), 1,
      aux_sym_multiline_token1,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      aux_sym_multiline_repeat1,
    STATE(199), 1,
      sym_comment,
    STATE(260), 1,
      sym_escape_char,
  [7194] = 8,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(513), 1,
      aux_sym_multiline_token1,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      aux_sym_multiline_repeat1,
    STATE(200), 1,
      sym_comment,
    STATE(260), 1,
      sym_escape_char,
  [7219] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(567), 1,
      aux_sym_attr_alias_token1,
    STATE(201), 1,
      sym_comment,
    ACTIONS(569), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7240] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_ATendjson,
    STATE(202), 1,
      sym_comment,
    STATE(242), 1,
      aux_sym_json_repeat1,
    ACTIONS(571), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7260] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(575), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_participant_name,
    STATE(53), 1,
      sym_string,
    STATE(203), 1,
      sym_comment,
  [7282] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(579), 1,
      anon_sym_ATendjson,
    STATE(202), 1,
      aux_sym_json_repeat1,
    STATE(204), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7302] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(583), 1,
      anon_sym_ATendyaml,
    STATE(205), 1,
      sym_comment,
    STATE(213), 1,
      aux_sym_json_repeat1,
    ACTIONS(581), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7322] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(587), 1,
      anon_sym_ATendebnf,
    STATE(206), 1,
      sym_comment,
    STATE(215), 1,
      aux_sym_json_repeat1,
    ACTIONS(585), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7342] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(591), 1,
      anon_sym_ATendregex,
    STATE(207), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_json_repeat1,
    ACTIONS(589), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7362] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(595), 1,
      anon_sym_ATendditaa,
    STATE(208), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_json_repeat1,
    ACTIONS(593), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7382] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(599), 1,
      anon_sym_ATendgantt,
    STATE(209), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym_json_repeat1,
    ACTIONS(597), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7402] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(601), 1,
      aux_sym_attribute_token3,
    ACTIONS(604), 1,
      aux_sym_attribute_token4,
    ACTIONS(606), 1,
      anon_sym_DQUOTE,
    STATE(210), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [7422] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(610), 1,
      anon_sym_ATendchronology,
    STATE(211), 1,
      sym_comment,
    STATE(219), 1,
      aux_sym_json_repeat1,
    ACTIONS(608), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7442] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendebnf,
    ACTIONS(612), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(212), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7460] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(617), 1,
      anon_sym_ATendyaml,
    STATE(213), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_json_repeat1,
    ACTIONS(581), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7480] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(214), 1,
      sym_comment,
    ACTIONS(619), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [7496] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(621), 1,
      anon_sym_ATendebnf,
    STATE(212), 1,
      aux_sym_json_repeat1,
    STATE(215), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7516] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(623), 1,
      anon_sym_ATendregex,
    STATE(216), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_json_repeat1,
    ACTIONS(589), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7536] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(625), 1,
      anon_sym_ATendditaa,
    STATE(217), 1,
      sym_comment,
    STATE(223), 1,
      aux_sym_json_repeat1,
    ACTIONS(593), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7556] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(627), 1,
      anon_sym_ATendgantt,
    STATE(218), 1,
      sym_comment,
    STATE(226), 1,
      aux_sym_json_repeat1,
    ACTIONS(597), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7576] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(629), 1,
      anon_sym_ATendchronology,
    STATE(219), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_json_repeat1,
    ACTIONS(608), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7596] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(633), 1,
      anon_sym_ATendmindmap,
    STATE(220), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_json_repeat1,
    ACTIONS(631), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7616] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendregex,
    ACTIONS(635), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(221), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7634] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendyaml,
    ACTIONS(638), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(222), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7652] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendditaa,
    ACTIONS(641), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(223), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7670] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(646), 1,
      anon_sym_ATendchen,
    STATE(224), 1,
      sym_comment,
    STATE(233), 1,
      aux_sym_json_repeat1,
    ACTIONS(644), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7690] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_ATendmindmap,
    STATE(220), 1,
      aux_sym_json_repeat1,
    STATE(225), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7710] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendgantt,
    ACTIONS(650), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(226), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7728] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      anon_sym_ATendwbs,
    STATE(227), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_json_repeat1,
    ACTIONS(653), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7748] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(657), 1,
      anon_sym_ATendchen,
    STATE(224), 1,
      aux_sym_json_repeat1,
    STATE(228), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [7768] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendchronology,
    ACTIONS(659), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(229), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7786] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendmindmap,
    ACTIONS(662), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(230), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7804] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendwbs,
    ACTIONS(665), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(231), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7822] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(668), 1,
      aux_sym_attribute_token1,
    ACTIONS(670), 1,
      aux_sym_attribute_token2,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      sym_comment,
    STATE(336), 1,
      sym_string,
  [7844] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendchen,
    ACTIONS(674), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(233), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [7862] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(677), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_participant_name,
    STATE(43), 1,
      sym_string,
    STATE(234), 1,
      sym_comment,
  [7884] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    ACTIONS(681), 1,
      aux_sym_attribute_token1,
    ACTIONS(683), 1,
      aux_sym_attribute_token2,
    STATE(235), 1,
      sym_comment,
    STATE(355), 1,
      sym_string,
  [7906] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(685), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(687), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_participant_name,
    STATE(63), 1,
      sym_string,
    STATE(236), 1,
      sym_comment,
  [7928] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(237), 1,
      sym_comment,
    ACTIONS(689), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [7944] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_participant_name,
    STATE(45), 1,
      sym_string,
    STATE(238), 1,
      sym_comment,
  [7966] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    ACTIONS(695), 1,
      aux_sym_attribute_token1,
    ACTIONS(697), 1,
      aux_sym_attribute_token2,
    STATE(239), 1,
      sym_comment,
    STATE(344), 1,
      sym_string,
  [7988] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(699), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_participant_name,
    STATE(76), 1,
      sym_string,
    STATE(240), 1,
      sym_comment,
  [8010] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(703), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_participant_name,
    STATE(75), 1,
      sym_string,
    STATE(241), 1,
      sym_comment,
  [8032] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(615), 1,
      anon_sym_ATendjson,
    ACTIONS(707), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(242), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8050] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(710), 1,
      anon_sym_ATendwbs,
    STATE(231), 1,
      aux_sym_json_repeat1,
    STATE(243), 1,
      sym_comment,
    ACTIONS(653), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8070] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    STATE(244), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8089] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
    STATE(245), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8108] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
    STATE(246), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8127] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8146] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
    STATE(248), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8165] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(724), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      sym_comment,
    STATE(279), 1,
      aux_sym_json_repeat2,
  [8184] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
    STATE(245), 1,
      aux_sym_json_repeat2,
    STATE(250), 1,
      sym_comment,
  [8203] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      anon_sym_else,
    ACTIONS(730), 1,
      anon_sym_end,
    STATE(251), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym_alt_block_repeat1,
  [8222] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(732), 1,
      anon_sym_else,
    ACTIONS(735), 1,
      anon_sym_end,
    STATE(252), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [8239] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_json_repeat2,
  [8258] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
    STATE(254), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8277] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(741), 1,
      ts_builtin_sym_end,
    STATE(254), 1,
      aux_sym_json_repeat2,
    STATE(255), 1,
      sym_comment,
  [8296] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    STATE(246), 1,
      aux_sym_json_repeat2,
    STATE(256), 1,
      sym_comment,
  [8315] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(257), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [8330] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(258), 1,
      sym_comment,
    ACTIONS(619), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [8345] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
    STATE(259), 1,
      sym_comment,
    STATE(263), 1,
      aux_sym_json_repeat2,
  [8364] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(260), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [8379] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(261), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [8394] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(262), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [8409] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8428] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    STATE(264), 1,
      sym_comment,
    STATE(270), 1,
      aux_sym_json_repeat2,
  [8447] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    STATE(244), 1,
      aux_sym_json_repeat2,
    STATE(265), 1,
      sym_comment,
  [8466] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(266), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [8481] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(267), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [8496] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(757), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      aux_sym_json_repeat2,
    STATE(268), 1,
      sym_comment,
  [8515] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_json_repeat2,
  [8534] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(761), 1,
      ts_builtin_sym_end,
    STATE(270), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8553] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(271), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [8568] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    STATE(248), 1,
      aux_sym_json_repeat2,
    STATE(272), 1,
      sym_comment,
  [8587] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(273), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [8602] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(274), 1,
      sym_comment,
    ACTIONS(765), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [8617] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      anon_sym_else,
    ACTIONS(767), 1,
      anon_sym_end,
    STATE(252), 1,
      aux_sym_alt_block_repeat1,
    STATE(275), 1,
      sym_comment,
  [8636] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
      sym_boolean_literal,
    STATE(276), 1,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_true,
      anon_sym_false,
  [8653] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(277), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [8668] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      sym_comment,
    STATE(306), 1,
      aux_sym_json_repeat2,
  [8687] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(773), 1,
      ts_builtin_sym_end,
    STATE(279), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8706] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    STATE(280), 1,
      sym_comment,
    STATE(302), 1,
      aux_sym_json_repeat2,
  [8725] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(777), 1,
      ts_builtin_sym_end,
    STATE(281), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_json_repeat2,
  [8744] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(781), 1,
      aux_sym_attribute_token4,
    STATE(282), 1,
      sym_comment,
    ACTIONS(779), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [8761] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(783), 1,
      ts_builtin_sym_end,
    STATE(283), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_json_repeat2,
  [8780] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(284), 1,
      sym_comment,
    ACTIONS(785), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [8795] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_boolean_literal,
    STATE(285), 1,
      sym_comment,
    ACTIONS(787), 2,
      anon_sym_true,
      anon_sym_false,
  [8812] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    STATE(286), 1,
      sym_comment,
    STATE(300), 1,
      aux_sym_json_repeat2,
  [8831] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
    STATE(287), 1,
      sym_comment,
    STATE(289), 1,
      aux_sym_json_repeat2,
  [8850] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      anon_sym_else,
    ACTIONS(793), 1,
      anon_sym_end,
    STATE(252), 1,
      aux_sym_alt_block_repeat1,
    STATE(288), 1,
      sym_comment,
  [8869] = 5,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(795), 1,
      ts_builtin_sym_end,
    ACTIONS(797), 1,
      aux_sym_attribute_token4,
    STATE(289), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [8886] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      anon_sym_else,
    ACTIONS(800), 1,
      anon_sym_end,
    STATE(252), 1,
      aux_sym_alt_block_repeat1,
    STATE(290), 1,
      sym_comment,
  [8905] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(291), 1,
      sym_comment,
  [8924] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(292), 1,
      sym_comment,
    ACTIONS(804), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [8939] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_boolean_literal,
    STATE(293), 1,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_true,
      anon_sym_false,
  [8956] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(294), 1,
      sym_comment,
  [8975] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(810), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(295), 1,
      sym_comment,
  [8994] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      anon_sym_else,
    ACTIONS(812), 1,
      anon_sym_end,
    STATE(252), 1,
      aux_sym_alt_block_repeat1,
    STATE(296), 1,
      sym_comment,
  [9013] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(814), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(297), 1,
      sym_comment,
  [9032] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      anon_sym_else,
    ACTIONS(816), 1,
      anon_sym_end,
    STATE(252), 1,
      aux_sym_alt_block_repeat1,
    STATE(298), 1,
      sym_comment,
  [9051] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(299), 1,
      sym_comment,
  [9070] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(300), 1,
      sym_comment,
  [9089] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
      aux_sym_json_repeat2,
    STATE(301), 1,
      sym_comment,
  [9108] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(302), 1,
      sym_comment,
  [9127] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(826), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(303), 1,
      sym_comment,
  [9146] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(304), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [9161] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    STATE(294), 1,
      aux_sym_json_repeat2,
    STATE(305), 1,
      sym_comment,
  [9180] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(306), 1,
      sym_comment,
  [9199] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
    STATE(295), 1,
      aux_sym_json_repeat2,
    STATE(307), 1,
      sym_comment,
  [9218] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(834), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(308), 1,
      sym_comment,
  [9237] = 6,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token4,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      aux_sym_json_repeat2,
    STATE(309), 1,
      sym_comment,
  [9256] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(310), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [9271] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(311), 1,
      sym_comment,
    ACTIONS(543), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9285] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(838), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(840), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(312), 1,
      sym_comment,
  [9301] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(313), 1,
      sym_comment,
    ACTIONS(395), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9315] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(842), 1,
      anon_sym_DASH,
    ACTIONS(844), 1,
      anon_sym_DASH_DASH,
    STATE(314), 1,
      sym_comment,
  [9331] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(315), 1,
      sym_comment,
    ACTIONS(403), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9345] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(316), 1,
      sym_comment,
    ACTIONS(411), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9359] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(317), 1,
      sym_comment,
    ACTIONS(419), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9373] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(846), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(848), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(318), 1,
      sym_comment,
  [9389] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(319), 1,
      sym_comment,
    ACTIONS(850), 2,
      ts_builtin_sym_end,
      aux_sym_attribute_token4,
  [9403] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(320), 1,
      sym_comment,
    ACTIONS(852), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9417] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(321), 1,
      sym_comment,
    ACTIONS(559), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [9431] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(854), 1,
      anon_sym_DASH,
    ACTIONS(856), 1,
      anon_sym_DASH_DASH,
    STATE(322), 1,
      sym_comment,
  [9447] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(858), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(860), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(323), 1,
      sym_comment,
  [9463] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(862), 1,
      aux_sym_attribute_token4,
    STATE(324), 1,
      sym_comment,
  [9476] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(864), 1,
      aux_sym_attribute_token4,
    STATE(325), 1,
      sym_comment,
  [9489] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(866), 1,
      aux_sym_escape_char_token1,
    STATE(326), 1,
      sym_comment,
  [9502] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(868), 1,
      aux_sym_sequence_diagram_token1,
    STATE(327), 1,
      sym_comment,
  [9515] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(870), 1,
      aux_sym_sequence_diagram_token1,
    STATE(328), 1,
      sym_comment,
  [9528] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(872), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      sym_comment,
  [9541] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(874), 1,
      aux_sym_alt_block_token1,
    STATE(330), 1,
      sym_comment,
  [9554] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(876), 1,
      anon_sym_SLASH,
    STATE(331), 1,
      sym_comment,
  [9567] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      sym_comment,
  [9580] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(880), 1,
      aux_sym_alt_block_token1,
    STATE(333), 1,
      sym_comment,
  [9593] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(882), 1,
      sym_color,
    STATE(334), 1,
      sym_comment,
  [9606] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(884), 1,
      aux_sym_comment_token2,
    STATE(335), 1,
      sym_comment,
  [9619] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(886), 1,
      aux_sym_attribute_token2,
    STATE(336), 1,
      sym_comment,
  [9632] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(555), 1,
      aux_sym_attribute_token4,
    STATE(337), 1,
      sym_comment,
  [9645] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(888), 1,
      aux_sym_alt_block_token1,
    STATE(338), 1,
      sym_comment,
  [9658] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(890), 1,
      aux_sym_alt_block_token1,
    STATE(339), 1,
      sym_comment,
  [9671] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(892), 1,
      aux_sym_sequence_diagram_token1,
    STATE(340), 1,
      sym_comment,
  [9684] = 4,
    ACTIONS(271), 1,
      aux_sym_attribute_token4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(341), 1,
      sym_comment,
  [9697] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(894), 1,
      aux_sym_attr_alias_token1,
    STATE(342), 1,
      sym_comment,
  [9710] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(896), 1,
      sym_color,
    STATE(343), 1,
      sym_comment,
  [9723] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(898), 1,
      aux_sym_attribute_token2,
    STATE(344), 1,
      sym_comment,
  [9736] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_comment,
  [9749] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(902), 1,
      sym_color,
    STATE(346), 1,
      sym_comment,
  [9762] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
    STATE(347), 1,
      sym_comment,
  [9775] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(906), 1,
      aux_sym_attr_alias_token1,
    STATE(348), 1,
      sym_comment,
  [9788] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      aux_sym_attribute_token3,
    STATE(349), 1,
      sym_comment,
  [9801] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(910), 1,
      aux_sym_escape_char_token1,
    STATE(350), 1,
      sym_comment,
  [9814] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(912), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_comment,
  [9827] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(914), 1,
      aux_sym_sequence_diagram_token1,
    STATE(352), 1,
      sym_comment,
  [9840] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(916), 1,
      aux_sym_sequence_diagram_token1,
    STATE(353), 1,
      sym_comment,
  [9853] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(918), 1,
      aux_sym_comment_token1,
    STATE(354), 1,
      sym_comment,
  [9866] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(920), 1,
      aux_sym_attribute_token2,
    STATE(355), 1,
      sym_comment,
  [9879] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(922), 1,
      aux_sym_attr_alias_token1,
    STATE(356), 1,
      sym_comment,
  [9892] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(924), 1,
      aux_sym_attribute_token4,
    STATE(357), 1,
      sym_comment,
  [9905] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(926), 1,
      sym_color,
    STATE(358), 1,
      sym_comment,
  [9918] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(928), 1,
      aux_sym_attr_alias_token1,
    STATE(359), 1,
      sym_comment,
  [9931] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_attribute_token2,
    STATE(360), 1,
      sym_comment,
  [9944] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(930), 1,
      ts_builtin_sym_end,
    STATE(361), 1,
      sym_comment,
  [9957] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(932), 1,
      aux_sym_attr_alias_token1,
    STATE(362), 1,
      sym_comment,
  [9970] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(521), 1,
      aux_sym_attribute_token4,
    STATE(363), 1,
      sym_comment,
  [9983] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
    STATE(364), 1,
      sym_comment,
  [9996] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(936), 1,
      sym_color,
    STATE(365), 1,
      sym_comment,
  [10009] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(938), 1,
      aux_sym_sequence_diagram_token1,
    STATE(366), 1,
      sym_comment,
  [10022] = 4,
    ACTIONS(263), 1,
      aux_sym_attribute_token4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(367), 1,
      sym_comment,
  [10035] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(940), 1,
      sym_color,
    STATE(368), 1,
      sym_comment,
  [10048] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(942), 1,
      aux_sym_alt_block_token1,
    STATE(369), 1,
      sym_comment,
  [10061] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(944), 1,
      aux_sym_alt_block_token1,
    STATE(370), 1,
      sym_comment,
  [10074] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(946), 1,
      aux_sym_alt_block_token1,
    STATE(371), 1,
      sym_comment,
  [10087] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(948), 1,
      aux_sym_attr_alias_token1,
    STATE(372), 1,
      sym_comment,
  [10100] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(271), 1,
      aux_sym_attribute_token2,
    STATE(373), 1,
      sym_comment,
  [10113] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(950), 1,
      aux_sym_alt_block_token1,
    STATE(374), 1,
      sym_comment,
  [10126] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(952), 1,
      aux_sym_alt_block_token1,
    STATE(375), 1,
      sym_comment,
  [10139] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(954), 1,
      aux_sym_alt_block_token1,
    STATE(376), 1,
      sym_comment,
  [10152] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(956), 1,
      aux_sym_attribute_token3,
    STATE(377), 1,
      sym_comment,
  [10165] = 4,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(531), 1,
      aux_sym_attribute_token4,
    STATE(378), 1,
      sym_comment,
  [10178] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(958), 1,
      aux_sym_attribute_token3,
    STATE(379), 1,
      sym_comment,
  [10191] = 1,
    ACTIONS(960), 1,
      ts_builtin_sym_end,
  [10195] = 1,
    ACTIONS(962), 1,
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
  [SMALL_STATE(9)] = 504,
  [SMALL_STATE(10)] = 572,
  [SMALL_STATE(11)] = 640,
  [SMALL_STATE(12)] = 707,
  [SMALL_STATE(13)] = 774,
  [SMALL_STATE(14)] = 841,
  [SMALL_STATE(15)] = 906,
  [SMALL_STATE(16)] = 973,
  [SMALL_STATE(17)] = 1038,
  [SMALL_STATE(18)] = 1105,
  [SMALL_STATE(19)] = 1172,
  [SMALL_STATE(20)] = 1239,
  [SMALL_STATE(21)] = 1306,
  [SMALL_STATE(22)] = 1373,
  [SMALL_STATE(23)] = 1440,
  [SMALL_STATE(24)] = 1507,
  [SMALL_STATE(25)] = 1574,
  [SMALL_STATE(26)] = 1641,
  [SMALL_STATE(27)] = 1708,
  [SMALL_STATE(28)] = 1762,
  [SMALL_STATE(29)] = 1815,
  [SMALL_STATE(30)] = 1868,
  [SMALL_STATE(31)] = 1916,
  [SMALL_STATE(32)] = 1964,
  [SMALL_STATE(33)] = 2012,
  [SMALL_STATE(34)] = 2058,
  [SMALL_STATE(35)] = 2103,
  [SMALL_STATE(36)] = 2150,
  [SMALL_STATE(37)] = 2197,
  [SMALL_STATE(38)] = 2244,
  [SMALL_STATE(39)] = 2291,
  [SMALL_STATE(40)] = 2338,
  [SMALL_STATE(41)] = 2385,
  [SMALL_STATE(42)] = 2430,
  [SMALL_STATE(43)] = 2466,
  [SMALL_STATE(44)] = 2502,
  [SMALL_STATE(45)] = 2538,
  [SMALL_STATE(46)] = 2573,
  [SMALL_STATE(47)] = 2608,
  [SMALL_STATE(48)] = 2643,
  [SMALL_STATE(49)] = 2678,
  [SMALL_STATE(50)] = 2713,
  [SMALL_STATE(51)] = 2748,
  [SMALL_STATE(52)] = 2783,
  [SMALL_STATE(53)] = 2818,
  [SMALL_STATE(54)] = 2853,
  [SMALL_STATE(55)] = 2888,
  [SMALL_STATE(56)] = 2929,
  [SMALL_STATE(57)] = 2964,
  [SMALL_STATE(58)] = 2999,
  [SMALL_STATE(59)] = 3033,
  [SMALL_STATE(60)] = 3067,
  [SMALL_STATE(61)] = 3101,
  [SMALL_STATE(62)] = 3135,
  [SMALL_STATE(63)] = 3169,
  [SMALL_STATE(64)] = 3203,
  [SMALL_STATE(65)] = 3237,
  [SMALL_STATE(66)] = 3271,
  [SMALL_STATE(67)] = 3305,
  [SMALL_STATE(68)] = 3345,
  [SMALL_STATE(69)] = 3379,
  [SMALL_STATE(70)] = 3413,
  [SMALL_STATE(71)] = 3447,
  [SMALL_STATE(72)] = 3481,
  [SMALL_STATE(73)] = 3515,
  [SMALL_STATE(74)] = 3549,
  [SMALL_STATE(75)] = 3589,
  [SMALL_STATE(76)] = 3622,
  [SMALL_STATE(77)] = 3655,
  [SMALL_STATE(78)] = 3688,
  [SMALL_STATE(79)] = 3723,
  [SMALL_STATE(80)] = 3756,
  [SMALL_STATE(81)] = 3789,
  [SMALL_STATE(82)] = 3822,
  [SMALL_STATE(83)] = 3855,
  [SMALL_STATE(84)] = 3887,
  [SMALL_STATE(85)] = 3919,
  [SMALL_STATE(86)] = 3951,
  [SMALL_STATE(87)] = 3983,
  [SMALL_STATE(88)] = 4015,
  [SMALL_STATE(89)] = 4047,
  [SMALL_STATE(90)] = 4079,
  [SMALL_STATE(91)] = 4111,
  [SMALL_STATE(92)] = 4143,
  [SMALL_STATE(93)] = 4175,
  [SMALL_STATE(94)] = 4207,
  [SMALL_STATE(95)] = 4239,
  [SMALL_STATE(96)] = 4271,
  [SMALL_STATE(97)] = 4303,
  [SMALL_STATE(98)] = 4335,
  [SMALL_STATE(99)] = 4367,
  [SMALL_STATE(100)] = 4399,
  [SMALL_STATE(101)] = 4431,
  [SMALL_STATE(102)] = 4465,
  [SMALL_STATE(103)] = 4497,
  [SMALL_STATE(104)] = 4531,
  [SMALL_STATE(105)] = 4563,
  [SMALL_STATE(106)] = 4595,
  [SMALL_STATE(107)] = 4626,
  [SMALL_STATE(108)] = 4657,
  [SMALL_STATE(109)] = 4688,
  [SMALL_STATE(110)] = 4719,
  [SMALL_STATE(111)] = 4750,
  [SMALL_STATE(112)] = 4781,
  [SMALL_STATE(113)] = 4812,
  [SMALL_STATE(114)] = 4843,
  [SMALL_STATE(115)] = 4874,
  [SMALL_STATE(116)] = 4905,
  [SMALL_STATE(117)] = 4936,
  [SMALL_STATE(118)] = 4967,
  [SMALL_STATE(119)] = 4998,
  [SMALL_STATE(120)] = 5029,
  [SMALL_STATE(121)] = 5060,
  [SMALL_STATE(122)] = 5091,
  [SMALL_STATE(123)] = 5122,
  [SMALL_STATE(124)] = 5153,
  [SMALL_STATE(125)] = 5184,
  [SMALL_STATE(126)] = 5215,
  [SMALL_STATE(127)] = 5246,
  [SMALL_STATE(128)] = 5277,
  [SMALL_STATE(129)] = 5308,
  [SMALL_STATE(130)] = 5339,
  [SMALL_STATE(131)] = 5370,
  [SMALL_STATE(132)] = 5401,
  [SMALL_STATE(133)] = 5432,
  [SMALL_STATE(134)] = 5463,
  [SMALL_STATE(135)] = 5494,
  [SMALL_STATE(136)] = 5525,
  [SMALL_STATE(137)] = 5556,
  [SMALL_STATE(138)] = 5587,
  [SMALL_STATE(139)] = 5618,
  [SMALL_STATE(140)] = 5649,
  [SMALL_STATE(141)] = 5680,
  [SMALL_STATE(142)] = 5711,
  [SMALL_STATE(143)] = 5742,
  [SMALL_STATE(144)] = 5773,
  [SMALL_STATE(145)] = 5809,
  [SMALL_STATE(146)] = 5845,
  [SMALL_STATE(147)] = 5881,
  [SMALL_STATE(148)] = 5906,
  [SMALL_STATE(149)] = 5931,
  [SMALL_STATE(150)] = 5956,
  [SMALL_STATE(151)] = 5983,
  [SMALL_STATE(152)] = 6010,
  [SMALL_STATE(153)] = 6037,
  [SMALL_STATE(154)] = 6064,
  [SMALL_STATE(155)] = 6088,
  [SMALL_STATE(156)] = 6112,
  [SMALL_STATE(157)] = 6136,
  [SMALL_STATE(158)] = 6160,
  [SMALL_STATE(159)] = 6189,
  [SMALL_STATE(160)] = 6212,
  [SMALL_STATE(161)] = 6241,
  [SMALL_STATE(162)] = 6264,
  [SMALL_STATE(163)] = 6293,
  [SMALL_STATE(164)] = 6319,
  [SMALL_STATE(165)] = 6345,
  [SMALL_STATE(166)] = 6371,
  [SMALL_STATE(167)] = 6397,
  [SMALL_STATE(168)] = 6417,
  [SMALL_STATE(169)] = 6443,
  [SMALL_STATE(170)] = 6463,
  [SMALL_STATE(171)] = 6489,
  [SMALL_STATE(172)] = 6513,
  [SMALL_STATE(173)] = 6539,
  [SMALL_STATE(174)] = 6565,
  [SMALL_STATE(175)] = 6591,
  [SMALL_STATE(176)] = 6617,
  [SMALL_STATE(177)] = 6643,
  [SMALL_STATE(178)] = 6669,
  [SMALL_STATE(179)] = 6695,
  [SMALL_STATE(180)] = 6721,
  [SMALL_STATE(181)] = 6747,
  [SMALL_STATE(182)] = 6773,
  [SMALL_STATE(183)] = 6799,
  [SMALL_STATE(184)] = 6819,
  [SMALL_STATE(185)] = 6845,
  [SMALL_STATE(186)] = 6866,
  [SMALL_STATE(187)] = 6891,
  [SMALL_STATE(188)] = 6916,
  [SMALL_STATE(189)] = 6941,
  [SMALL_STATE(190)] = 6966,
  [SMALL_STATE(191)] = 6991,
  [SMALL_STATE(192)] = 7012,
  [SMALL_STATE(193)] = 7037,
  [SMALL_STATE(194)] = 7060,
  [SMALL_STATE(195)] = 7081,
  [SMALL_STATE(196)] = 7102,
  [SMALL_STATE(197)] = 7123,
  [SMALL_STATE(198)] = 7148,
  [SMALL_STATE(199)] = 7169,
  [SMALL_STATE(200)] = 7194,
  [SMALL_STATE(201)] = 7219,
  [SMALL_STATE(202)] = 7240,
  [SMALL_STATE(203)] = 7260,
  [SMALL_STATE(204)] = 7282,
  [SMALL_STATE(205)] = 7302,
  [SMALL_STATE(206)] = 7322,
  [SMALL_STATE(207)] = 7342,
  [SMALL_STATE(208)] = 7362,
  [SMALL_STATE(209)] = 7382,
  [SMALL_STATE(210)] = 7402,
  [SMALL_STATE(211)] = 7422,
  [SMALL_STATE(212)] = 7442,
  [SMALL_STATE(213)] = 7460,
  [SMALL_STATE(214)] = 7480,
  [SMALL_STATE(215)] = 7496,
  [SMALL_STATE(216)] = 7516,
  [SMALL_STATE(217)] = 7536,
  [SMALL_STATE(218)] = 7556,
  [SMALL_STATE(219)] = 7576,
  [SMALL_STATE(220)] = 7596,
  [SMALL_STATE(221)] = 7616,
  [SMALL_STATE(222)] = 7634,
  [SMALL_STATE(223)] = 7652,
  [SMALL_STATE(224)] = 7670,
  [SMALL_STATE(225)] = 7690,
  [SMALL_STATE(226)] = 7710,
  [SMALL_STATE(227)] = 7728,
  [SMALL_STATE(228)] = 7748,
  [SMALL_STATE(229)] = 7768,
  [SMALL_STATE(230)] = 7786,
  [SMALL_STATE(231)] = 7804,
  [SMALL_STATE(232)] = 7822,
  [SMALL_STATE(233)] = 7844,
  [SMALL_STATE(234)] = 7862,
  [SMALL_STATE(235)] = 7884,
  [SMALL_STATE(236)] = 7906,
  [SMALL_STATE(237)] = 7928,
  [SMALL_STATE(238)] = 7944,
  [SMALL_STATE(239)] = 7966,
  [SMALL_STATE(240)] = 7988,
  [SMALL_STATE(241)] = 8010,
  [SMALL_STATE(242)] = 8032,
  [SMALL_STATE(243)] = 8050,
  [SMALL_STATE(244)] = 8070,
  [SMALL_STATE(245)] = 8089,
  [SMALL_STATE(246)] = 8108,
  [SMALL_STATE(247)] = 8127,
  [SMALL_STATE(248)] = 8146,
  [SMALL_STATE(249)] = 8165,
  [SMALL_STATE(250)] = 8184,
  [SMALL_STATE(251)] = 8203,
  [SMALL_STATE(252)] = 8222,
  [SMALL_STATE(253)] = 8239,
  [SMALL_STATE(254)] = 8258,
  [SMALL_STATE(255)] = 8277,
  [SMALL_STATE(256)] = 8296,
  [SMALL_STATE(257)] = 8315,
  [SMALL_STATE(258)] = 8330,
  [SMALL_STATE(259)] = 8345,
  [SMALL_STATE(260)] = 8364,
  [SMALL_STATE(261)] = 8379,
  [SMALL_STATE(262)] = 8394,
  [SMALL_STATE(263)] = 8409,
  [SMALL_STATE(264)] = 8428,
  [SMALL_STATE(265)] = 8447,
  [SMALL_STATE(266)] = 8466,
  [SMALL_STATE(267)] = 8481,
  [SMALL_STATE(268)] = 8496,
  [SMALL_STATE(269)] = 8515,
  [SMALL_STATE(270)] = 8534,
  [SMALL_STATE(271)] = 8553,
  [SMALL_STATE(272)] = 8568,
  [SMALL_STATE(273)] = 8587,
  [SMALL_STATE(274)] = 8602,
  [SMALL_STATE(275)] = 8617,
  [SMALL_STATE(276)] = 8636,
  [SMALL_STATE(277)] = 8653,
  [SMALL_STATE(278)] = 8668,
  [SMALL_STATE(279)] = 8687,
  [SMALL_STATE(280)] = 8706,
  [SMALL_STATE(281)] = 8725,
  [SMALL_STATE(282)] = 8744,
  [SMALL_STATE(283)] = 8761,
  [SMALL_STATE(284)] = 8780,
  [SMALL_STATE(285)] = 8795,
  [SMALL_STATE(286)] = 8812,
  [SMALL_STATE(287)] = 8831,
  [SMALL_STATE(288)] = 8850,
  [SMALL_STATE(289)] = 8869,
  [SMALL_STATE(290)] = 8886,
  [SMALL_STATE(291)] = 8905,
  [SMALL_STATE(292)] = 8924,
  [SMALL_STATE(293)] = 8939,
  [SMALL_STATE(294)] = 8956,
  [SMALL_STATE(295)] = 8975,
  [SMALL_STATE(296)] = 8994,
  [SMALL_STATE(297)] = 9013,
  [SMALL_STATE(298)] = 9032,
  [SMALL_STATE(299)] = 9051,
  [SMALL_STATE(300)] = 9070,
  [SMALL_STATE(301)] = 9089,
  [SMALL_STATE(302)] = 9108,
  [SMALL_STATE(303)] = 9127,
  [SMALL_STATE(304)] = 9146,
  [SMALL_STATE(305)] = 9161,
  [SMALL_STATE(306)] = 9180,
  [SMALL_STATE(307)] = 9199,
  [SMALL_STATE(308)] = 9218,
  [SMALL_STATE(309)] = 9237,
  [SMALL_STATE(310)] = 9256,
  [SMALL_STATE(311)] = 9271,
  [SMALL_STATE(312)] = 9285,
  [SMALL_STATE(313)] = 9301,
  [SMALL_STATE(314)] = 9315,
  [SMALL_STATE(315)] = 9331,
  [SMALL_STATE(316)] = 9345,
  [SMALL_STATE(317)] = 9359,
  [SMALL_STATE(318)] = 9373,
  [SMALL_STATE(319)] = 9389,
  [SMALL_STATE(320)] = 9403,
  [SMALL_STATE(321)] = 9417,
  [SMALL_STATE(322)] = 9431,
  [SMALL_STATE(323)] = 9447,
  [SMALL_STATE(324)] = 9463,
  [SMALL_STATE(325)] = 9476,
  [SMALL_STATE(326)] = 9489,
  [SMALL_STATE(327)] = 9502,
  [SMALL_STATE(328)] = 9515,
  [SMALL_STATE(329)] = 9528,
  [SMALL_STATE(330)] = 9541,
  [SMALL_STATE(331)] = 9554,
  [SMALL_STATE(332)] = 9567,
  [SMALL_STATE(333)] = 9580,
  [SMALL_STATE(334)] = 9593,
  [SMALL_STATE(335)] = 9606,
  [SMALL_STATE(336)] = 9619,
  [SMALL_STATE(337)] = 9632,
  [SMALL_STATE(338)] = 9645,
  [SMALL_STATE(339)] = 9658,
  [SMALL_STATE(340)] = 9671,
  [SMALL_STATE(341)] = 9684,
  [SMALL_STATE(342)] = 9697,
  [SMALL_STATE(343)] = 9710,
  [SMALL_STATE(344)] = 9723,
  [SMALL_STATE(345)] = 9736,
  [SMALL_STATE(346)] = 9749,
  [SMALL_STATE(347)] = 9762,
  [SMALL_STATE(348)] = 9775,
  [SMALL_STATE(349)] = 9788,
  [SMALL_STATE(350)] = 9801,
  [SMALL_STATE(351)] = 9814,
  [SMALL_STATE(352)] = 9827,
  [SMALL_STATE(353)] = 9840,
  [SMALL_STATE(354)] = 9853,
  [SMALL_STATE(355)] = 9866,
  [SMALL_STATE(356)] = 9879,
  [SMALL_STATE(357)] = 9892,
  [SMALL_STATE(358)] = 9905,
  [SMALL_STATE(359)] = 9918,
  [SMALL_STATE(360)] = 9931,
  [SMALL_STATE(361)] = 9944,
  [SMALL_STATE(362)] = 9957,
  [SMALL_STATE(363)] = 9970,
  [SMALL_STATE(364)] = 9983,
  [SMALL_STATE(365)] = 9996,
  [SMALL_STATE(366)] = 10009,
  [SMALL_STATE(367)] = 10022,
  [SMALL_STATE(368)] = 10035,
  [SMALL_STATE(369)] = 10048,
  [SMALL_STATE(370)] = 10061,
  [SMALL_STATE(371)] = 10074,
  [SMALL_STATE(372)] = 10087,
  [SMALL_STATE(373)] = 10100,
  [SMALL_STATE(374)] = 10113,
  [SMALL_STATE(375)] = 10126,
  [SMALL_STATE(376)] = 10139,
  [SMALL_STATE(377)] = 10152,
  [SMALL_STATE(378)] = 10165,
  [SMALL_STATE(379)] = 10178,
  [SMALL_STATE(380)] = 10191,
  [SMALL_STATE(381)] = 10195,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(312),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(365),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(348),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(377),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(346),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(356),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(349),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(334),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(342),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(379),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 12),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 12),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 13),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 13),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 11),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 11),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 11),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 11),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 11),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 11),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 11),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(319),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [930] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
