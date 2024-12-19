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
#define STATE_COUNT 287
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 15
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_skinparam = 3,
  anon_sym_sequenceMessageAlign = 4,
  anon_sym_left = 5,
  anon_sym_right = 6,
  anon_sym_center = 7,
  anon_sym_responseMessageBelowArrow = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_autonumber = 11,
  anon_sym_inc = 12,
  anon_sym_resume = 13,
  aux_sym_attribute_token1 = 14,
  aux_sym_attribute_token2 = 15,
  aux_sym_attribute_token3 = 16,
  aux_sym_attribute_token4 = 17,
  anon_sym_autonumberstop = 18,
  anon_sym_participant = 19,
  anon_sym_actor = 20,
  anon_sym_boundary = 21,
  anon_sym_control = 22,
  anon_sym_entity = 23,
  anon_sym_database = 24,
  anon_sym_collections = 25,
  anon_sym_queue = 26,
  anon_sym_POUND = 27,
  anon_sym_LBRACK = 28,
  aux_sym_multiline_token1 = 29,
  anon_sym_RBRACK = 30,
  anon_sym_as = 31,
  aux_sym_attr_alias_token1 = 32,
  anon_sym_order = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_token1 = 35,
  anon_sym_BSLASH_DQUOTE = 36,
  anon_sym_BSLASH = 37,
  aux_sym_escape_char_token1 = 38,
  anon_sym_COLON = 39,
  aux_sym_sequence_diagram_token1 = 40,
  anon_sym_DASH = 41,
  anon_sym_GT = 42,
  anon_sym_o = 43,
  anon_sym_x = 44,
  anon_sym_ox = 45,
  anon_sym_GT_GT = 46,
  anon_sym_BSLASH_BSLASH = 47,
  anon_sym_SLASH = 48,
  anon_sym_SLASH_SLASH = 49,
  anon_sym_DASH_DASH = 50,
  anon_sym_LBRACK_POUND = 51,
  anon_sym_LT = 52,
  anon_sym_xo = 53,
  anon_sym_LT_LT = 54,
  anon_sym_ATstartjson = 55,
  anon_sym_AT = 56,
  aux_sym_json_token1 = 57,
  anon_sym_ATendjson = 58,
  anon_sym_ATstartyaml = 59,
  anon_sym_ATendyaml = 60,
  anon_sym_ATstartebnf = 61,
  anon_sym_ATendebnf = 62,
  anon_sym_ATstartregex = 63,
  anon_sym_ATendregex = 64,
  anon_sym_ATstartditaa = 65,
  anon_sym_ATendditaa = 66,
  anon_sym_ATstartgantt = 67,
  anon_sym_ATendgantt = 68,
  anon_sym_ATstartchronology = 69,
  anon_sym_ATendchronology = 70,
  anon_sym_ATstartmindmap = 71,
  anon_sym_ATendmindmap = 72,
  anon_sym_ATstartwbs = 73,
  anon_sym_ATendwbs = 74,
  anon_sym_ATstartchen = 75,
  anon_sym_ATendchen = 76,
  anon_sym_SQUOTE = 77,
  aux_sym_comment_token1 = 78,
  anon_sym_SLASH_SQUOTE = 79,
  aux_sym_comment_token2 = 80,
  anon_sym_group = 81,
  aux_sym_group_block_token1 = 82,
  anon_sym_end = 83,
  anon_sym_loop = 84,
  sym_color = 85,
  sym_diagram = 86,
  sym_uml = 87,
  sym_expression = 88,
  sym_skinparam = 89,
  sym_boolean_literal = 90,
  sym_attribute = 91,
  sym_multiline = 92,
  sym_attr_alias = 93,
  sym_attr_order = 94,
  sym_string = 95,
  sym_escape_char = 96,
  sym_participant_name = 97,
  sym_sequence_diagram = 98,
  sym_connector = 99,
  sym_json = 100,
  sym_yaml = 101,
  sym_ebnf = 102,
  sym_regex = 103,
  sym_ditaa = 104,
  sym_gantt = 105,
  sym_chronology = 106,
  sym_mindmap = 107,
  sym_wbs = 108,
  sym_chen = 109,
  sym_comment = 110,
  sym_group_block = 111,
  sym_loop_block = 112,
  aux_sym_uml_repeat1 = 113,
  aux_sym_attribute_repeat1 = 114,
  aux_sym_attribute_repeat2 = 115,
  aux_sym_multiline_repeat1 = 116,
  aux_sym_string_repeat1 = 117,
  aux_sym_json_repeat1 = 118,
  aux_sym_json_repeat2 = 119,
  alias_sym_chen_data = 120,
  alias_sym_chronology_data = 121,
  alias_sym_ditaa_data = 122,
  alias_sym_ebnf_data = 123,
  alias_sym_gantt_data = 124,
  alias_sym_json_data = 125,
  alias_sym_left = 126,
  alias_sym_mindmap_data = 127,
  alias_sym_new_name = 128,
  alias_sym_regex_data = 129,
  alias_sym_right = 130,
  alias_sym_times = 131,
  alias_sym_value = 132,
  alias_sym_wbs_data = 133,
  alias_sym_yaml_data = 134,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
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
  [anon_sym_group] = "group",
  [aux_sym_group_block_token1] = "label",
  [anon_sym_end] = "end",
  [anon_sym_loop] = "loop",
  [sym_color] = "color",
  [sym_diagram] = "diagram",
  [sym_uml] = "uml",
  [sym_expression] = "expression",
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
  [sym_group_block] = "group_block",
  [sym_loop_block] = "loop_block",
  [aux_sym_uml_repeat1] = "uml_repeat1",
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
  [alias_sym_times] = "times",
  [alias_sym_value] = "value",
  [alias_sym_wbs_data] = "wbs_data",
  [alias_sym_yaml_data] = "yaml_data",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
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
  [anon_sym_group] = anon_sym_group,
  [aux_sym_group_block_token1] = aux_sym_group_block_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_loop] = anon_sym_loop,
  [sym_color] = sym_color,
  [sym_diagram] = sym_diagram,
  [sym_uml] = sym_uml,
  [sym_expression] = sym_expression,
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
  [sym_group_block] = sym_group_block,
  [sym_loop_block] = sym_loop_block,
  [aux_sym_uml_repeat1] = aux_sym_uml_repeat1,
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
  [alias_sym_times] = alias_sym_times,
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
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_block_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
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
  [sym_group_block] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_uml_repeat1] = {
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
  [alias_sym_times] = {
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
    [1] = alias_sym_times,
  },
  [12] = {
    [0] = alias_sym_left,
    [2] = alias_sym_right,
  },
  [13] = {
    [1] = alias_sym_new_name,
  },
  [14] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 5,
  [11] = 4,
  [12] = 3,
  [13] = 7,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 19,
  [22] = 17,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 25,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 33,
  [34] = 33,
  [35] = 31,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 37,
  [41] = 41,
  [42] = 41,
  [43] = 36,
  [44] = 24,
  [45] = 24,
  [46] = 28,
  [47] = 25,
  [48] = 25,
  [49] = 28,
  [50] = 36,
  [51] = 51,
  [52] = 51,
  [53] = 36,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 54,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 57,
  [66] = 60,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 70,
  [71] = 71,
  [72] = 68,
  [73] = 73,
  [74] = 74,
  [75] = 70,
  [76] = 71,
  [77] = 55,
  [78] = 56,
  [79] = 58,
  [80] = 62,
  [81] = 73,
  [82] = 74,
  [83] = 63,
  [84] = 64,
  [85] = 61,
  [86] = 86,
  [87] = 86,
  [88] = 25,
  [89] = 28,
  [90] = 24,
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
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 108,
  [109] = 109,
  [110] = 106,
  [111] = 105,
  [112] = 106,
  [113] = 105,
  [114] = 106,
  [115] = 105,
  [116] = 106,
  [117] = 105,
  [118] = 106,
  [119] = 105,
  [120] = 106,
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
  [131] = 131,
  [132] = 130,
  [133] = 131,
  [134] = 121,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 144,
  [147] = 144,
  [148] = 144,
  [149] = 144,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 144,
  [154] = 154,
  [155] = 144,
  [156] = 144,
  [157] = 144,
  [158] = 150,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 135,
  [164] = 164,
  [165] = 160,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 144,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 166,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 180,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 180,
  [206] = 206,
  [207] = 180,
  [208] = 180,
  [209] = 209,
  [210] = 210,
  [211] = 180,
  [212] = 212,
  [213] = 213,
  [214] = 180,
  [215] = 180,
  [216] = 180,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 222,
  [223] = 220,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 180,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 233,
  [236] = 236,
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
  [247] = 28,
  [248] = 248,
  [249] = 249,
  [250] = 25,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 251,
  [256] = 25,
  [257] = 257,
  [258] = 258,
  [259] = 246,
  [260] = 260,
  [261] = 254,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 258,
  [266] = 245,
  [267] = 252,
  [268] = 268,
  [269] = 28,
  [270] = 254,
  [271] = 271,
  [272] = 272,
  [273] = 254,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 257,
  [278] = 253,
  [279] = 279,
  [280] = 280,
  [281] = 263,
  [282] = 264,
  [283] = 283,
  [284] = 244,
  [285] = 285,
  [286] = 286,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(650);
      ADVANCE_MAP(
        '"', 768,
        '#', 678,
        '\'', 845,
        '-', 785,
        '/', 795,
        ':', 780,
        '<', 799,
        '>', 786,
        '@', 803,
        '[', 679,
        '\\', 775,
        ']', 683,
        'o', 787,
        'x', 789,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(668);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(779);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(778);
      if (lookahead != 0) ADVANCE(777);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(851);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(850);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(853);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 768,
        '#', 678,
        '\'', 845,
        '/', 32,
        '@', 106,
        '[', 679,
        'a', 695,
        'b', 728,
        'c', 726,
        'd', 688,
        'e', 722,
        'g', 747,
        'l', 732,
        'o', 742,
        'p', 687,
        'q', 759,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 768,
        '#', 678,
        '\'', 845,
        '/', 32,
        '[', 679,
        'a', 695,
        'b', 728,
        'c', 726,
        'd', 688,
        'e', 720,
        'g', 747,
        'l', 732,
        'o', 742,
        'p', 687,
        'q', 759,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 768,
        '\'', 845,
        '-', 784,
        '/', 795,
        ':', 780,
        '<', 799,
        '>', 786,
        '@', 107,
        '[', 17,
        '\\', 776,
        'a', 696,
        'b', 728,
        'c', 726,
        'd', 688,
        'e', 722,
        'g', 747,
        'l', 732,
        'p', 687,
        'q', 759,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '-') ADVANCE(784);
      if (lookahead == '/') ADVANCE(795);
      if (lookahead == '>') ADVANCE(786);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(776);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 768,
        '\'', 845,
        '/', 32,
        ':', 780,
        '@', 106,
        'a', 695,
        'b', 728,
        'c', 726,
        'd', 688,
        'e', 722,
        'g', 747,
        'l', 732,
        'p', 687,
        'q', 759,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 768,
        '\'', 845,
        '/', 32,
        ':', 780,
        'a', 696,
        'b', 728,
        'c', 726,
        'd', 688,
        'e', 720,
        'g', 747,
        'l', 732,
        'p', 687,
        'q', 759,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 768,
        '\'', 845,
        '/', 32,
        ':', 780,
        'a', 695,
        'b', 728,
        'c', 726,
        'd', 688,
        'e', 720,
        'g', 747,
        'l', 732,
        'p', 687,
        'q', 759,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(788);
      if (lookahead == 'x') ADVANCE(791);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(771);
      if (lookahead == '\\') ADVANCE(774);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(770);
      if (lookahead != 0) ADVANCE(769);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(798);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\'', 845,
        '-', 785,
        '/', 795,
        '<', 799,
        '\\', 776,
        'c', 103,
        'f', 53,
        'l', 95,
        'o', 787,
        'r', 99,
        's', 87,
        't', 199,
        'x', 790,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\'', 845,
        '/', 32,
        'A', 448,
        'a', 448,
        'B', 336,
        'b', 336,
        'C', 241,
        'c', 241,
        'D', 242,
        'd', 242,
        'F', 418,
        'f', 418,
        'G', 260,
        'g', 260,
        'H', 507,
        'h', 507,
        'I', 487,
        'i', 487,
        'K', 402,
        'k', 402,
        'L', 243,
        'l', 243,
        'M', 244,
        'm', 244,
        'N', 245,
        'n', 245,
        'O', 445,
        'o', 445,
        'P', 246,
        'p', 246,
        'R', 337,
        'r', 337,
        'S', 247,
        's', 247,
        'T', 254,
        't', 254,
        'V', 423,
        'v', 423,
        'W', 400,
        'w', 400,
        'Y', 348,
        'y', 348,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == '\\') ADVANCE(773);
      if (lookahead == ']') ADVANCE(683);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(681);
      if (lookahead != 0) ADVANCE(680);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(804);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(815);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(805);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(816);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(806);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(817);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(807);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(818);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(808);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(820);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(821);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(811);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(822);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(812);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(813);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(852);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(849);
      if (lookahead == '/') ADVANCE(782);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(783);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(848);
      if (lookahead == '/') ADVANCE(859);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (lookahead != 0) ADVANCE(860);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(847);
      if (lookahead == '/') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(854);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(201);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(100);
      END_STATE();
    case 44:
      if (lookahead == 'M') ADVANCE(109);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(834);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(833);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 63:
      ADVANCE_MAP(
        'c', 123,
        'd', 128,
        'e', 59,
        'g', 51,
        'j', 204,
        'm', 130,
        'r', 85,
        'w', 60,
        'y', 45,
      );
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(662);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        'c', 127,
        'd', 131,
        'e', 62,
        'g', 55,
        'j', 214,
        'm', 132,
        'r', 105,
        'u', 146,
        'w', 61,
        'y', 58,
      );
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(830);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(829);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 133:
      if (lookahead == 'j') ADVANCE(204);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(828);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(652);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(651);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(827);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(844);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(840);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(839);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(669);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 196:
      if (lookahead == 'q') ADVANCE(232);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(842);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(841);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(836);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(835);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 233:
      if (lookahead == 'w') ADVANCE(658);
      END_STATE();
    case 234:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 235:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 236:
      if (lookahead == 'x') ADVANCE(832);
      END_STATE();
    case 237:
      if (lookahead == 'x') ADVANCE(831);
      END_STATE();
    case 238:
      if (lookahead == 'y') ADVANCE(838);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(837);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 241:
      ADVANCE_MAP(
        'A', 318,
        'a', 318,
        'H', 269,
        'h', 269,
        'O', 546,
        'o', 546,
        'R', 422,
        'r', 422,
        'Y', 253,
        'y', 253,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 242:
      ADVANCE_MAP(
        'A', 547,
        'a', 547,
        'E', 338,
        'e', 338,
        'I', 476,
        'i', 476,
        'O', 333,
        'o', 333,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 243:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 244:
      ADVANCE_MAP(
        'A', 397,
        'a', 397,
        'E', 325,
        'e', 325,
        'I', 323,
        'i', 323,
        'O', 307,
        'o', 307,
      );
      END_STATE();
    case 245:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 246:
      ADVANCE_MAP(
        'A', 457,
        'a', 457,
        'E', 278,
        'e', 278,
        'I', 488,
        'i', 488,
        'L', 611,
        'l', 611,
        'O', 630,
        'o', 630,
        'U', 554,
        'u', 554,
      );
      END_STATE();
    case 247:
      ADVANCE_MAP(
        'A', 322,
        'a', 322,
        'E', 250,
        'e', 250,
        'I', 357,
        'i', 357,
        'K', 636,
        'k', 636,
        'L', 261,
        'l', 261,
        'N', 512,
        'n', 512,
        'P', 560,
        'p', 560,
        'T', 373,
        't', 373,
      );
      END_STATE();
    case 248:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 249:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(863);
      END_STATE();
    case 250:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 251:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 252:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 253:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 254:
      ADVANCE_MAP(
        'A', 485,
        'a', 485,
        'E', 264,
        'e', 264,
        'H', 433,
        'h', 433,
        'O', 480,
        'o', 480,
        'R', 282,
        'r', 282,
        'U', 572,
        'u', 572,
      );
      END_STATE();
    case 255:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 256:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 257:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 258:
      ADVANCE_MAP(
        'A', 544,
        'a', 544,
        'B', 452,
        'b', 452,
        'O', 576,
        'o', 576,
        'P', 610,
        'p', 610,
        'S', 371,
        's', 371,
        'T', 612,
        't', 612,
        'V', 438,
        'v', 438,
      );
      END_STATE();
    case 259:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 260:
      ADVANCE_MAP(
        'A', 420,
        'a', 420,
        'H', 509,
        'h', 509,
        'O', 449,
        'o', 449,
        'R', 255,
        'r', 255,
      );
      END_STATE();
    case 261:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 262:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 263:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 264:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 265:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 266:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 267:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(503);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 268:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 269:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 270:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 271:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 272:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 273:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 274:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 275:
      ADVANCE_MAP(
        'A', 465,
        'a', 465,
        'E', 279,
        'e', 279,
        'K', 636,
        'k', 636,
        'L', 288,
        'l', 288,
        'T', 373,
        't', 373,
      );
      END_STATE();
    case 276:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(506);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(508);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 281:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 282:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 283:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 284:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 285:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 286:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 288:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 290:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 292:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 293:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(863);
      END_STATE();
    case 294:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(452);
      END_STATE();
    case 295:
      ADVANCE_MAP(
        'B', 452,
        'b', 452,
        'C', 529,
        'c', 529,
        'G', 534,
        'g', 534,
        'P', 413,
        'p', 413,
        'S', 275,
        's', 275,
        'Y', 382,
        'y', 382,
      );
      END_STATE();
    case 296:
      ADVANCE_MAP(
        'B', 452,
        'b', 452,
        'C', 637,
        'c', 637,
        'G', 531,
        'g', 531,
        'K', 402,
        'k', 402,
        'M', 287,
        'm', 287,
        'O', 460,
        'o', 460,
        'R', 356,
        'r', 356,
        'S', 276,
        's', 276,
        'T', 612,
        't', 612,
        'V', 423,
        'v', 423,
      );
      END_STATE();
    case 297:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(452);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(552);
      END_STATE();
    case 298:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(380);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(863);
      END_STATE();
    case 299:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(573);
      END_STATE();
    case 300:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 301:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(526);
      END_STATE();
    case 302:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(462);
      END_STATE();
    case 303:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 304:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 305:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 306:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 307:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 308:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 309:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 310:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 311:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 312:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 313:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 314:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 315:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 317:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 318:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(880);
      END_STATE();
    case 319:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(863);
      END_STATE();
    case 320:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(868);
      END_STATE();
    case 321:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(459);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 322:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(327);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 323:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(494);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(594);
      END_STATE();
    case 324:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 325:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 326:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(643);
      END_STATE();
    case 327:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(466);
      END_STATE();
    case 328:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 329:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 330:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 331:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(370);
      END_STATE();
    case 332:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(641);
      END_STATE();
    case 333:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 334:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 335:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 336:
      ADVANCE_MAP(
        'E', 414,
        'e', 414,
        'I', 577,
        'i', 577,
        'L', 248,
        'l', 248,
        'R', 511,
        'r', 511,
        'U', 555,
        'u', 555,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(880);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 342:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 356:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 357:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 358:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 359:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 363:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 383:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(863);
      END_STATE();
    case 384:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(383);
      END_STATE();
    case 385:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(510);
      END_STATE();
    case 387:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(470);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(428);
      END_STATE();
    case 388:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(530);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(438);
      END_STATE();
    case 389:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 390:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(552);
      END_STATE();
    case 391:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(339);
      END_STATE();
    case 392:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(366);
      END_STATE();
    case 393:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(347);
      END_STATE();
    case 394:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 395:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(407);
      END_STATE();
    case 396:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(367);
      END_STATE();
    case 397:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(367);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 398:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      END_STATE();
    case 399:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      END_STATE();
    case 400:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(365);
      END_STATE();
    case 401:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(863);
      END_STATE();
    case 402:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 403:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(536);
      END_STATE();
    case 404:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(586);
      END_STATE();
    case 405:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(591);
      END_STATE();
    case 406:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 407:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(590);
      END_STATE();
    case 408:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(436);
      END_STATE();
    case 409:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(432);
      END_STATE();
    case 410:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(424);
      END_STATE();
    case 411:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(359);
      END_STATE();
    case 412:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(488);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(880);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(863);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 418:
      ADVANCE_MAP(
        'I', 556,
        'i', 556,
        'L', 520,
        'l', 520,
        'O', 557,
        'o', 557,
        'U', 303,
        'u', 303,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 419:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 421:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 423:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 425:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 426:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 427:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 428:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 429:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 430:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 431:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 432:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 433:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 434:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 435:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 436:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 437:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 438:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 439:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(513);
      END_STATE();
    case 440:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(636);
      END_STATE();
    case 441:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(863);
      END_STATE();
    case 442:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(296);
      END_STATE();
    case 443:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(415);
      END_STATE();
    case 444:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(339);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(863);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 448:
      ADVANCE_MAP(
        'L', 419,
        'l', 419,
        'N', 595,
        'n', 595,
        'Q', 614,
        'q', 614,
        'Z', 621,
        'z', 621,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(638);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(468);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(435);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 467:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 469:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 471:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 472:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 473:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(863);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(582);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(524);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(510);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(272);
      END_STATE();
    case 481:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 482:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 483:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(876);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(522);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(579);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 507:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 508:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 509:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 510:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 511:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 512:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 513:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 514:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 515:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 516:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 517:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(469);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(469);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(471);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 535:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(863);
      END_STATE();
    case 536:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(609);
      END_STATE();
    case 537:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(413);
      END_STATE();
    case 538:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(413);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      END_STATE();
    case 539:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 540:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 541:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(610);
      END_STATE();
    case 542:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(618);
      END_STATE();
    case 543:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(617);
      END_STATE();
    case 544:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(620);
      END_STATE();
    case 545:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(619);
      END_STATE();
    case 546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(880);
      END_STATE();
    case 548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 577:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(542);
      END_STATE();
    case 578:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      END_STATE();
    case 579:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      END_STATE();
    case 580:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(593);
      END_STATE();
    case 581:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(604);
      END_STATE();
    case 582:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      END_STATE();
    case 583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      END_STATE();
    case 587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      END_STATE();
    case 588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(271);
      END_STATE();
    case 589:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(863);
      END_STATE();
    case 590:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 591:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 592:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      END_STATE();
    case 593:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      END_STATE();
    case 594:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(639);
      END_STATE();
    case 595:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(437);
      END_STATE();
    case 596:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 597:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      END_STATE();
    case 598:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      END_STATE();
    case 599:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 600:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 601:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 602:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      END_STATE();
    case 603:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      END_STATE();
    case 604:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      END_STATE();
    case 605:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 606:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(570);
      END_STATE();
    case 607:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      END_STATE();
    case 608:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(863);
      END_STATE();
    case 609:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 610:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(554);
      END_STATE();
    case 611:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      END_STATE();
    case 612:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      END_STATE();
    case 613:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(475);
      END_STATE();
    case 614:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 615:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 616:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 617:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 618:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 619:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 620:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 621:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(565);
      END_STATE();
    case 622:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(252);
      END_STATE();
    case 623:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(363);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(502);
      END_STATE();
    case 624:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(344);
      END_STATE();
    case 625:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(369);
      END_STATE();
    case 626:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(375);
      END_STATE();
    case 627:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(863);
      END_STATE();
    case 628:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(869);
      END_STATE();
    case 629:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(485);
      END_STATE();
    case 630:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 631:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(366);
      END_STATE();
    case 632:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(408);
      END_STATE();
    case 633:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(525);
      END_STATE();
    case 634:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(410);
      END_STATE();
    case 635:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 636:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 637:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 638:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(633);
      END_STATE();
    case 639:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(562);
      END_STATE();
    case 640:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 641:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 642:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 643:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(382);
      END_STATE();
    case 644:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 645:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 646:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(880);
      END_STATE();
    case 647:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(863);
      END_STATE();
    case 648:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 649:
      if (eof) ADVANCE(650);
      if (lookahead == '\n') ADVANCE(668);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_attribute_token4);
      if (lookahead == '\n') ADVANCE(668);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == '\\') ADVANCE(773);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(680);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(852);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == 'u') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(861);
      if (lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(716);
      if (lookahead == 'n') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(771);
      if (lookahead == '\\') ADVANCE(774);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(769);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(852);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(772);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(772);
      if (lookahead == '\\') ADVANCE(794);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(794);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(779);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(778);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(852);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(849);
      if (lookahead == '/') ADVANCE(782);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(781);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(783);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(783);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(797);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(793);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(852);
      if (lookahead == '/') ADVANCE(796);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(801);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(804);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(815);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(805);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(816);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(806);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(817);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(807);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(818);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(808);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(820);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(821);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(811);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(822);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(812);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(813);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(852);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(36);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(860);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(783);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(851);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(36);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(860);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(783);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(36);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead == '\'') ADVANCE(855);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(860);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(860);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(456);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(569);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(879);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(879);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(481);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(877);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(423);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(382);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(878);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(647);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(877);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(879);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 649},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 649},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 649},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 649},
  [133] = {.lex_state = 21},
  [134] = {.lex_state = 21},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 25},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 27},
  [146] = {.lex_state = 28},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 30},
  [149] = {.lex_state = 25},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 649},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 26},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 26},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 31},
  [162] = {.lex_state = 27},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 15},
  [166] = {.lex_state = 16},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 30},
  [169] = {.lex_state = 25},
  [170] = {.lex_state = 31},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 30},
  [173] = {.lex_state = 31},
  [174] = {.lex_state = 649},
  [175] = {.lex_state = 649},
  [176] = {.lex_state = 649},
  [177] = {.lex_state = 649},
  [178] = {.lex_state = 649},
  [179] = {.lex_state = 649},
  [180] = {.lex_state = 27},
  [181] = {.lex_state = 649},
  [182] = {.lex_state = 649},
  [183] = {.lex_state = 649},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 649},
  [186] = {.lex_state = 649},
  [187] = {.lex_state = 649},
  [188] = {.lex_state = 649},
  [189] = {.lex_state = 649},
  [190] = {.lex_state = 649},
  [191] = {.lex_state = 649},
  [192] = {.lex_state = 649},
  [193] = {.lex_state = 649},
  [194] = {.lex_state = 649},
  [195] = {.lex_state = 649},
  [196] = {.lex_state = 649},
  [197] = {.lex_state = 649},
  [198] = {.lex_state = 649},
  [199] = {.lex_state = 649},
  [200] = {.lex_state = 29},
  [201] = {.lex_state = 649},
  [202] = {.lex_state = 649},
  [203] = {.lex_state = 649},
  [204] = {.lex_state = 649},
  [205] = {.lex_state = 30},
  [206] = {.lex_state = 649},
  [207] = {.lex_state = 25},
  [208] = {.lex_state = 31},
  [209] = {.lex_state = 649},
  [210] = {.lex_state = 649},
  [211] = {.lex_state = 22},
  [212] = {.lex_state = 649},
  [213] = {.lex_state = 649},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 24},
  [216] = {.lex_state = 26},
  [217] = {.lex_state = 649},
  [218] = {.lex_state = 649},
  [219] = {.lex_state = 18},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 649},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 649},
  [225] = {.lex_state = 649},
  [226] = {.lex_state = 649},
  [227] = {.lex_state = 649},
  [228] = {.lex_state = 28},
  [229] = {.lex_state = 649},
  [230] = {.lex_state = 21},
  [231] = {.lex_state = 649},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 649},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 33},
  [246] = {.lex_state = 19},
  [247] = {.lex_state = 649},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 649},
  [251] = {.lex_state = 649},
  [252] = {.lex_state = 33},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 649},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 20},
  [258] = {.lex_state = 649},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 34},
  [264] = {.lex_state = 18},
  [265] = {.lex_state = 649},
  [266] = {.lex_state = 33},
  [267] = {.lex_state = 33},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 20},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 35},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 20},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 19},
  [281] = {.lex_state = 34},
  [282] = {.lex_state = 18},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 18},
  [285] = {(TSStateId)(-1)},
  [286] = {(TSStateId)(-1)},
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
    [sym_diagram] = STATE(276),
    [sym_uml] = STATE(249),
    [sym_json] = STATE(249),
    [sym_yaml] = STATE(249),
    [sym_ebnf] = STATE(249),
    [sym_regex] = STATE(249),
    [sym_ditaa] = STATE(249),
    [sym_gantt] = STATE(249),
    [sym_chronology] = STATE(249),
    [sym_mindmap] = STATE(249),
    [sym_wbs] = STATE(249),
    [sym_chen] = STATE(249),
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
  [0] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_ATenduml,
    ACTIONS(31), 1,
      anon_sym_skinparam,
    ACTIONS(33), 1,
      anon_sym_autonumber,
    ACTIONS(35), 1,
      anon_sym_autonumberstop,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_group,
    ACTIONS(45), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(79), 1,
      sym_expression,
    STATE(87), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(54), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(37), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [63] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      anon_sym_group,
    ACTIONS(57), 1,
      anon_sym_end,
    ACTIONS(59), 1,
      anon_sym_loop,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_uml_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [126] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      anon_sym_group,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [189] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_ATenduml,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(68), 1,
      anon_sym_autonumber,
    ACTIONS(71), 1,
      anon_sym_autonumberstop,
    ACTIONS(77), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(86), 1,
      anon_sym_loop,
    STATE(79), 1,
      sym_expression,
    STATE(87), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(5), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(54), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(74), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [250] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      anon_sym_group,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(89), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [313] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      anon_sym_group,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(91), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [376] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_skinparam,
    ACTIONS(33), 1,
      anon_sym_autonumber,
    ACTIONS(35), 1,
      anon_sym_autonumberstop,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_group,
    ACTIONS(45), 1,
      anon_sym_loop,
    ACTIONS(93), 1,
      anon_sym_ATenduml,
    STATE(5), 1,
      aux_sym_uml_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(79), 1,
      sym_expression,
    STATE(87), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(54), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(37), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [439] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      anon_sym_group,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(95), 1,
      anon_sym_end,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [502] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_skinparam,
    ACTIONS(100), 1,
      anon_sym_autonumber,
    ACTIONS(103), 1,
      anon_sym_autonumberstop,
    ACTIONS(109), 1,
      anon_sym_group,
    ACTIONS(112), 1,
      anon_sym_end,
    ACTIONS(114), 1,
      anon_sym_loop,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(10), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(106), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [563] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      anon_sym_group,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [626] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      anon_sym_group,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(119), 1,
      anon_sym_end,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [689] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(51), 1,
      anon_sym_autonumberstop,
    ACTIONS(55), 1,
      anon_sym_group,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(58), 1,
      sym_expression,
    STATE(86), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(59), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(53), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [752] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_as,
    ACTIONS(133), 1,
      anon_sym_order,
    STATE(14), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_attribute_repeat2,
    STATE(21), 1,
      sym_multiline,
    ACTIONS(125), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(35), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(123), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [804] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_as,
    ACTIONS(141), 1,
      anon_sym_order,
    STATE(15), 1,
      sym_comment,
    STATE(19), 1,
      sym_multiline,
    STATE(23), 1,
      aux_sym_attribute_repeat2,
    STATE(31), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(125), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(123), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [856] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      anon_sym_as,
    ACTIONS(133), 1,
      anon_sym_order,
    STATE(16), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(145), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(35), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(143), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [902] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_as,
    ACTIONS(141), 1,
      anon_sym_order,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_attribute_repeat2,
    STATE(31), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(147), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(149), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [948] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(158), 1,
      anon_sym_as,
    ACTIONS(161), 1,
      anon_sym_order,
    STATE(18), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(31), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(151), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(153), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [992] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_as,
    ACTIONS(141), 1,
      anon_sym_order,
    STATE(17), 1,
      aux_sym_attribute_repeat2,
    STATE(19), 1,
      sym_comment,
    STATE(31), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(145), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(143), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [1038] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_as,
    ACTIONS(170), 1,
      anon_sym_order,
    ACTIONS(151), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(20), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(35), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(153), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1082] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      anon_sym_as,
    ACTIONS(133), 1,
      anon_sym_order,
    STATE(21), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(145), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(35), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(143), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1128] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      anon_sym_as,
    ACTIONS(133), 1,
      anon_sym_order,
    STATE(20), 1,
      aux_sym_attribute_repeat2,
    STATE(22), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(35), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(149), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1174] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_as,
    ACTIONS(141), 1,
      anon_sym_order,
    STATE(18), 1,
      aux_sym_attribute_repeat2,
    STATE(23), 1,
      sym_comment,
    STATE(31), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(145), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(143), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [1220] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(24), 1,
      sym_comment,
    ACTIONS(173), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(175), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1254] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(177), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(179), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1288] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(26), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(175), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1322] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(27), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(179), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1356] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(28), 1,
      sym_comment,
    ACTIONS(181), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(183), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1390] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(29), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(183), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1424] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(187), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1457] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(189), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(191), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1490] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(187), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1523] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(33), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(195), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1556] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(195), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1589] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(191), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1622] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(197), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1655] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_as,
    ACTIONS(207), 1,
      anon_sym_COLON,
    STATE(37), 1,
      sym_comment,
    STATE(51), 1,
      sym_attr_alias,
    ACTIONS(201), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(203), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [1694] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(153), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1727] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(151), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(153), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1760] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_as,
    ACTIONS(211), 1,
      anon_sym_COLON,
    STATE(40), 1,
      sym_comment,
    STATE(52), 1,
      sym_attr_alias,
    ACTIONS(201), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(203), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1799] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(215), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1832] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(215), 16,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1865] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(199), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(197), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1898] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(175), 14,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1930] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(175), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [1962] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(183), 14,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [1994] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(179), 14,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_loop,
  [2026] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(179), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2058] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(183), 15,
      anon_sym_skinparam,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2090] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(199), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(197), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2121] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_COLON,
    STATE(51), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(219), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2154] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_COLON,
    STATE(52), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(219), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2187] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(197), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2218] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(227), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2248] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(231), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2278] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(235), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2308] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(143), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2338] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2368] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(227), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2398] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(123), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2428] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(243), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2458] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2488] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2518] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(143), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2548] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(143), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2578] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(123), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2608] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(253), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2638] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(257), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2668] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(253), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2698] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(149), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2728] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(149), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2758] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(257), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2788] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(261), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2818] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(265), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2848] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(149), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2878] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(149), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2908] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(231), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2938] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(235), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2968] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [2998] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [3028] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(261), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [3058] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(265), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [3088] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [3118] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(143), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_loop,
  [3148] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(243), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [3178] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DASH,
    ACTIONS(275), 1,
      anon_sym_x,
    ACTIONS(279), 1,
      anon_sym_DASH_DASH,
    STATE(86), 1,
      sym_comment,
    STATE(163), 1,
      sym_connector,
    ACTIONS(273), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(269), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(277), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [3214] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DASH,
    ACTIONS(275), 1,
      anon_sym_x,
    ACTIONS(279), 1,
      anon_sym_DASH_DASH,
    STATE(87), 1,
      sym_comment,
    STATE(135), 1,
      sym_connector,
    ACTIONS(273), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(269), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(277), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [3250] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(179), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(177), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [3275] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(183), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(181), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [3300] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(173), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [3325] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_LBRACK_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(281), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(283), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(285), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3352] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DASH,
    STATE(92), 1,
      sym_comment,
    ACTIONS(289), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(291), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(295), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3379] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(297), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(299), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(301), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3406] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(309), 1,
      anon_sym_DASH,
    STATE(94), 1,
      sym_comment,
    ACTIONS(305), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(307), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(311), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3433] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_comment,
    ACTIONS(289), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(291), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(295), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3457] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
      sym_comment,
    ACTIONS(313), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(315), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(317), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3481] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(281), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(283), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(285), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3505] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
      sym_comment,
    ACTIONS(297), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(299), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(301), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3529] = 9,
    ACTIONS(321), 1,
      aux_sym_attribute_token3,
    ACTIONS(323), 1,
      aux_sym_attribute_token4,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_attribute_repeat1,
    STATE(251), 1,
      sym_string,
    ACTIONS(319), 2,
      anon_sym_inc,
      anon_sym_resume,
  [3558] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_LBRACK_POUND,
    STATE(100), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(333), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3581] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(339), 1,
      anon_sym_DASH,
    STATE(101), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(341), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3604] = 9,
    ACTIONS(321), 1,
      aux_sym_attribute_token3,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(345), 1,
      aux_sym_attribute_token4,
    STATE(102), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_attribute_repeat1,
    STATE(255), 1,
      sym_string,
    ACTIONS(343), 2,
      anon_sym_inc,
      anon_sym_resume,
  [3633] = 7,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_BSLASH,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(349), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(103), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3657] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(357), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [3677] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    STATE(103), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3703] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_string_repeat1,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3729] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_string_repeat1,
    STATE(107), 1,
      sym_comment,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3755] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(333), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3775] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(311), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3795] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_string_repeat1,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3821] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_string_repeat1,
    STATE(111), 1,
      sym_comment,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3847] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_string_repeat1,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3873] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_string_repeat1,
    STATE(113), 1,
      sym_comment,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3899] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_string_repeat1,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3925] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_string_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3951] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_string_repeat1,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3977] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_string_repeat1,
    STATE(117), 1,
      sym_comment,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [4003] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym_string_repeat1,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [4029] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_string_repeat1,
    STATE(119), 1,
      sym_comment,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [4055] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym_string_repeat1,
    STATE(120), 1,
      sym_comment,
    STATE(142), 1,
      sym_escape_char,
    ACTIONS(361), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [4081] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_multiline_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_multiline_repeat1,
    STATE(230), 1,
      sym_escape_char,
  [4106] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_attr_alias_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(399), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4127] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      aux_sym_attr_alias_token1,
    STATE(123), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4148] = 7,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(405), 1,
      aux_sym_multiline_token1,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    ACTIONS(410), 1,
      anon_sym_BSLASH,
    STATE(230), 1,
      sym_escape_char,
    STATE(124), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [4171] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(413), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4192] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      aux_sym_attr_alias_token1,
    STATE(126), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4213] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(423), 1,
      aux_sym_attr_alias_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4234] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      aux_sym_attr_alias_token1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(429), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4255] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(431), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4276] = 8,
    ACTIONS(321), 1,
      aux_sym_attribute_token3,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(437), 1,
      aux_sym_attribute_token4,
    STATE(130), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_attribute_repeat1,
    STATE(265), 1,
      sym_string,
  [4301] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_multiline_token1,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_multiline_repeat1,
    STATE(131), 1,
      sym_comment,
    STATE(230), 1,
      sym_escape_char,
  [4326] = 8,
    ACTIONS(321), 1,
      aux_sym_attribute_token3,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(441), 1,
      aux_sym_attribute_token4,
    STATE(132), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_attribute_repeat1,
    STATE(258), 1,
      sym_string,
  [4351] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_multiline_token1,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_multiline_repeat1,
    STATE(230), 1,
      sym_escape_char,
  [4376] = 8,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_multiline_token1,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_multiline_repeat1,
    STATE(134), 1,
      sym_comment,
    STATE(230), 1,
      sym_escape_char,
  [4401] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(447), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym_participant_name,
    STATE(44), 1,
      sym_string,
    STATE(135), 1,
      sym_comment,
  [4423] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_ATendchronology,
    STATE(136), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_json_repeat1,
    ACTIONS(451), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4443] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(457), 1,
      anon_sym_ATendmindmap,
    STATE(137), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_json_repeat1,
    ACTIONS(455), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4463] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(461), 1,
      anon_sym_ATendwbs,
    STATE(138), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat1,
    ACTIONS(459), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4483] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(465), 1,
      anon_sym_ATendditaa,
    STATE(139), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_json_repeat1,
    ACTIONS(463), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4503] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(467), 1,
      anon_sym_ATendmindmap,
    STATE(137), 1,
      aux_sym_json_repeat1,
    STATE(140), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4523] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(469), 1,
      anon_sym_ATendwbs,
    STATE(138), 1,
      aux_sym_json_repeat1,
    STATE(141), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4543] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
      sym_comment,
    ACTIONS(471), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [4559] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(475), 1,
      anon_sym_ATendchen,
    STATE(143), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_json_repeat1,
    ACTIONS(473), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4579] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendyaml,
    ACTIONS(477), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(144), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4597] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(484), 1,
      anon_sym_ATendyaml,
    STATE(144), 1,
      aux_sym_json_repeat1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4617] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendjson,
    ACTIONS(486), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(146), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4635] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendebnf,
    ACTIONS(489), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(147), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4653] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendregex,
    ACTIONS(492), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(148), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4671] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendditaa,
    ACTIONS(495), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(149), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4689] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(498), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_participant_name,
    STATE(24), 1,
      sym_string,
    STATE(150), 1,
      sym_comment,
  [4711] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(504), 1,
      anon_sym_ATendebnf,
    STATE(147), 1,
      aux_sym_json_repeat1,
    STATE(151), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4731] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(508), 1,
      anon_sym_ATendjson,
    STATE(152), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat1,
    ACTIONS(506), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4751] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendchronology,
    ACTIONS(510), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(153), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4769] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(513), 1,
      aux_sym_attribute_token3,
    ACTIONS(516), 1,
      aux_sym_attribute_token4,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    STATE(154), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [4789] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendmindmap,
    ACTIONS(520), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(155), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4807] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendwbs,
    ACTIONS(523), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(156), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4825] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendchen,
    ACTIONS(526), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(157), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4843] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(529), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_participant_name,
    STATE(26), 1,
      sym_string,
    STATE(158), 1,
      sym_comment,
  [4865] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(533), 1,
      anon_sym_ATendchen,
    STATE(157), 1,
      aux_sym_json_repeat1,
    STATE(159), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4885] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(535), 1,
      aux_sym_attribute_token1,
    ACTIONS(537), 1,
      aux_sym_attribute_token2,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      sym_comment,
    STATE(257), 1,
      sym_string,
  [4907] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(543), 1,
      anon_sym_ATendgantt,
    STATE(161), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_json_repeat1,
    ACTIONS(541), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4927] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(545), 1,
      anon_sym_ATendyaml,
    STATE(145), 1,
      aux_sym_json_repeat1,
    STATE(162), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4947] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(547), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_participant_name,
    STATE(45), 1,
      sym_string,
    STATE(163), 1,
      sym_comment,
  [4969] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(551), 1,
      anon_sym_ATendchronology,
    STATE(153), 1,
      aux_sym_json_repeat1,
    STATE(164), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4989] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
    ACTIONS(553), 1,
      aux_sym_attribute_token1,
    ACTIONS(555), 1,
      aux_sym_attribute_token2,
    STATE(165), 1,
      sym_comment,
    STATE(277), 1,
      sym_string,
  [5011] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
      sym_comment,
    ACTIONS(557), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [5027] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(559), 1,
      anon_sym_ATendebnf,
    STATE(151), 1,
      aux_sym_json_repeat1,
    STATE(167), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5047] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(563), 1,
      anon_sym_ATendregex,
    STATE(168), 1,
      sym_comment,
    STATE(172), 1,
      aux_sym_json_repeat1,
    ACTIONS(561), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5067] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(565), 1,
      anon_sym_ATendditaa,
    STATE(139), 1,
      aux_sym_json_repeat1,
    STATE(169), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5087] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(567), 1,
      anon_sym_ATendgantt,
    STATE(161), 1,
      aux_sym_json_repeat1,
    STATE(170), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5107] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(569), 1,
      anon_sym_ATendjson,
    STATE(146), 1,
      aux_sym_json_repeat1,
    STATE(171), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5127] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(571), 1,
      anon_sym_ATendregex,
    STATE(148), 1,
      aux_sym_json_repeat1,
    STATE(172), 1,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5147] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendgantt,
    ACTIONS(573), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(173), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [5165] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    STATE(174), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5184] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_json_repeat2,
  [5203] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5222] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_json_repeat2,
  [5241] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5260] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_json_repeat2,
  [5279] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(180), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [5294] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5313] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_json_repeat2,
  [5332] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5351] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(184), 1,
      sym_comment,
    ACTIONS(557), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [5366] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    STATE(185), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5385] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    STATE(186), 1,
      sym_comment,
    STATE(227), 1,
      aux_sym_json_repeat2,
  [5404] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5423] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      aux_sym_json_repeat2,
    STATE(188), 1,
      sym_comment,
  [5442] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5461] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      aux_sym_json_repeat2,
    STATE(190), 1,
      sym_comment,
  [5480] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5499] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      aux_sym_json_repeat2,
    STATE(192), 1,
      sym_comment,
  [5518] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    STATE(193), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5537] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      aux_sym_json_repeat2,
    STATE(194), 1,
      sym_comment,
  [5556] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5575] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      aux_sym_json_repeat2,
    STATE(196), 1,
      sym_comment,
  [5594] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    STATE(197), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5613] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    STATE(198), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_json_repeat2,
  [5632] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    STATE(199), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5651] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(200), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [5666] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    STATE(201), 1,
      sym_comment,
    STATE(213), 1,
      aux_sym_json_repeat2,
  [5685] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      aux_sym_json_repeat2,
    STATE(202), 1,
      sym_comment,
  [5704] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(203), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_json_repeat2,
  [5723] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5742] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(205), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [5757] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    STATE(206), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym_json_repeat2,
  [5776] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(207), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [5791] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(208), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [5806] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(209), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_json_repeat2,
  [5825] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    STATE(210), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5844] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(211), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [5859] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      aux_sym_json_repeat2,
    STATE(212), 1,
      sym_comment,
  [5878] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    STATE(213), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5897] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(214), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [5912] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(215), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [5927] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(216), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [5942] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5961] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(218), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5980] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(219), 1,
      sym_comment,
    ACTIONS(650), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [5995] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_boolean_literal,
    STATE(220), 1,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_true,
      anon_sym_false,
  [6012] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(221), 1,
      sym_comment,
    ACTIONS(654), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [6027] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      aux_sym_json_repeat2,
    STATE(222), 1,
      sym_comment,
  [6046] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_boolean_literal,
    STATE(223), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_true,
      anon_sym_false,
  [6063] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(662), 1,
      aux_sym_attribute_token4,
    STATE(224), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [6080] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(665), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      aux_sym_json_repeat2,
    STATE(225), 1,
      sym_comment,
  [6099] = 5,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(669), 1,
      aux_sym_attribute_token4,
    STATE(226), 1,
      sym_comment,
    ACTIONS(667), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [6116] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      aux_sym_json_repeat2,
    STATE(227), 1,
      sym_comment,
  [6135] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(228), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [6150] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    STATE(185), 1,
      aux_sym_json_repeat2,
    STATE(229), 1,
      sym_comment,
  [6169] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(230), 1,
      sym_comment,
    ACTIONS(675), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [6184] = 6,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attribute_token4,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      aux_sym_json_repeat2,
    STATE(231), 1,
      sym_comment,
  [6203] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(232), 1,
      sym_comment,
    ACTIONS(289), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6217] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(681), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(233), 1,
      sym_comment,
  [6233] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(234), 1,
      sym_comment,
    ACTIONS(683), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6247] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(685), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(687), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(235), 1,
      sym_comment,
  [6263] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(236), 1,
      sym_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      aux_sym_attribute_token4,
  [6277] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(237), 1,
      sym_comment,
    ACTIONS(415), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6291] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(238), 1,
      sym_comment,
    ACTIONS(297), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6305] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(239), 1,
      sym_comment,
    ACTIONS(433), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6319] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_DASH,
    ACTIONS(693), 1,
      anon_sym_DASH_DASH,
    STATE(240), 1,
      sym_comment,
  [6335] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(241), 1,
      sym_comment,
    ACTIONS(305), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6349] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(695), 1,
      anon_sym_DASH,
    ACTIONS(697), 1,
      anon_sym_DASH_DASH,
    STATE(242), 1,
      sym_comment,
  [6365] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(243), 1,
      sym_comment,
    ACTIONS(313), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6379] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(699), 1,
      aux_sym_attribute_token3,
    STATE(244), 1,
      sym_comment,
  [6392] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_sequence_diagram_token1,
    STATE(245), 1,
      sym_comment,
  [6405] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(703), 1,
      sym_color,
    STATE(246), 1,
      sym_comment,
  [6418] = 4,
    ACTIONS(181), 1,
      aux_sym_attribute_token4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(247), 1,
      sym_comment,
  [6431] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(705), 1,
      sym_color,
    STATE(248), 1,
      sym_comment,
  [6444] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(707), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      sym_comment,
  [6457] = 4,
    ACTIONS(177), 1,
      aux_sym_attribute_token4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(250), 1,
      sym_comment,
  [6470] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(441), 1,
      aux_sym_attribute_token4,
    STATE(251), 1,
      sym_comment,
  [6483] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(709), 1,
      aux_sym_sequence_diagram_token1,
    STATE(252), 1,
      sym_comment,
  [6496] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_escape_char_token1,
    STATE(253), 1,
      sym_comment,
  [6509] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(713), 1,
      aux_sym_attr_alias_token1,
    STATE(254), 1,
      sym_comment,
  [6522] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(437), 1,
      aux_sym_attribute_token4,
    STATE(255), 1,
      sym_comment,
  [6535] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_attribute_token2,
    STATE(256), 1,
      sym_comment,
  [6548] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(715), 1,
      aux_sym_attribute_token2,
    STATE(257), 1,
      sym_comment,
  [6561] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(717), 1,
      aux_sym_attribute_token4,
    STATE(258), 1,
      sym_comment,
  [6574] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(719), 1,
      sym_color,
    STATE(259), 1,
      sym_comment,
  [6587] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      sym_comment,
  [6600] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(723), 1,
      aux_sym_attr_alias_token1,
    STATE(261), 1,
      sym_comment,
  [6613] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    STATE(262), 1,
      sym_comment,
  [6626] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(727), 1,
      aux_sym_group_block_token1,
    STATE(263), 1,
      sym_comment,
  [6639] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(729), 1,
      aux_sym_attribute_token3,
    STATE(264), 1,
      sym_comment,
  [6652] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(731), 1,
      aux_sym_attribute_token4,
    STATE(265), 1,
      sym_comment,
  [6665] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(733), 1,
      aux_sym_sequence_diagram_token1,
    STATE(266), 1,
      sym_comment,
  [6678] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(735), 1,
      aux_sym_sequence_diagram_token1,
    STATE(267), 1,
      sym_comment,
  [6691] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      sym_comment,
  [6704] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(181), 1,
      aux_sym_attribute_token2,
    STATE(269), 1,
      sym_comment,
  [6717] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(739), 1,
      aux_sym_attr_alias_token1,
    STATE(270), 1,
      sym_comment,
  [6730] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_SLASH,
    STATE(271), 1,
      sym_comment,
  [6743] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(743), 1,
      aux_sym_comment_token2,
    STATE(272), 1,
      sym_comment,
  [6756] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(745), 1,
      aux_sym_attr_alias_token1,
    STATE(273), 1,
      sym_comment,
  [6769] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
    STATE(274), 1,
      sym_comment,
  [6782] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(749), 1,
      aux_sym_comment_token1,
    STATE(275), 1,
      sym_comment,
  [6795] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      sym_comment,
  [6808] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(753), 1,
      aux_sym_attribute_token2,
    STATE(277), 1,
      sym_comment,
  [6821] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(755), 1,
      aux_sym_escape_char_token1,
    STATE(278), 1,
      sym_comment,
  [6834] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      sym_comment,
  [6847] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(759), 1,
      sym_color,
    STATE(280), 1,
      sym_comment,
  [6860] = 4,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(761), 1,
      aux_sym_group_block_token1,
    STATE(281), 1,
      sym_comment,
  [6873] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(763), 1,
      aux_sym_attribute_token3,
    STATE(282), 1,
      sym_comment,
  [6886] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(765), 1,
      sym_color,
    STATE(283), 1,
      sym_comment,
  [6899] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(767), 1,
      aux_sym_attribute_token3,
    STATE(284), 1,
      sym_comment,
  [6912] = 1,
    ACTIONS(769), 1,
      ts_builtin_sym_end,
  [6916] = 1,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 313,
  [SMALL_STATE(8)] = 376,
  [SMALL_STATE(9)] = 439,
  [SMALL_STATE(10)] = 502,
  [SMALL_STATE(11)] = 563,
  [SMALL_STATE(12)] = 626,
  [SMALL_STATE(13)] = 689,
  [SMALL_STATE(14)] = 752,
  [SMALL_STATE(15)] = 804,
  [SMALL_STATE(16)] = 856,
  [SMALL_STATE(17)] = 902,
  [SMALL_STATE(18)] = 948,
  [SMALL_STATE(19)] = 992,
  [SMALL_STATE(20)] = 1038,
  [SMALL_STATE(21)] = 1082,
  [SMALL_STATE(22)] = 1128,
  [SMALL_STATE(23)] = 1174,
  [SMALL_STATE(24)] = 1220,
  [SMALL_STATE(25)] = 1254,
  [SMALL_STATE(26)] = 1288,
  [SMALL_STATE(27)] = 1322,
  [SMALL_STATE(28)] = 1356,
  [SMALL_STATE(29)] = 1390,
  [SMALL_STATE(30)] = 1424,
  [SMALL_STATE(31)] = 1457,
  [SMALL_STATE(32)] = 1490,
  [SMALL_STATE(33)] = 1523,
  [SMALL_STATE(34)] = 1556,
  [SMALL_STATE(35)] = 1589,
  [SMALL_STATE(36)] = 1622,
  [SMALL_STATE(37)] = 1655,
  [SMALL_STATE(38)] = 1694,
  [SMALL_STATE(39)] = 1727,
  [SMALL_STATE(40)] = 1760,
  [SMALL_STATE(41)] = 1799,
  [SMALL_STATE(42)] = 1832,
  [SMALL_STATE(43)] = 1865,
  [SMALL_STATE(44)] = 1898,
  [SMALL_STATE(45)] = 1930,
  [SMALL_STATE(46)] = 1962,
  [SMALL_STATE(47)] = 1994,
  [SMALL_STATE(48)] = 2026,
  [SMALL_STATE(49)] = 2058,
  [SMALL_STATE(50)] = 2090,
  [SMALL_STATE(51)] = 2121,
  [SMALL_STATE(52)] = 2154,
  [SMALL_STATE(53)] = 2187,
  [SMALL_STATE(54)] = 2218,
  [SMALL_STATE(55)] = 2248,
  [SMALL_STATE(56)] = 2278,
  [SMALL_STATE(57)] = 2308,
  [SMALL_STATE(58)] = 2338,
  [SMALL_STATE(59)] = 2368,
  [SMALL_STATE(60)] = 2398,
  [SMALL_STATE(61)] = 2428,
  [SMALL_STATE(62)] = 2458,
  [SMALL_STATE(63)] = 2488,
  [SMALL_STATE(64)] = 2518,
  [SMALL_STATE(65)] = 2548,
  [SMALL_STATE(66)] = 2578,
  [SMALL_STATE(67)] = 2608,
  [SMALL_STATE(68)] = 2638,
  [SMALL_STATE(69)] = 2668,
  [SMALL_STATE(70)] = 2698,
  [SMALL_STATE(71)] = 2728,
  [SMALL_STATE(72)] = 2758,
  [SMALL_STATE(73)] = 2788,
  [SMALL_STATE(74)] = 2818,
  [SMALL_STATE(75)] = 2848,
  [SMALL_STATE(76)] = 2878,
  [SMALL_STATE(77)] = 2908,
  [SMALL_STATE(78)] = 2938,
  [SMALL_STATE(79)] = 2968,
  [SMALL_STATE(80)] = 2998,
  [SMALL_STATE(81)] = 3028,
  [SMALL_STATE(82)] = 3058,
  [SMALL_STATE(83)] = 3088,
  [SMALL_STATE(84)] = 3118,
  [SMALL_STATE(85)] = 3148,
  [SMALL_STATE(86)] = 3178,
  [SMALL_STATE(87)] = 3214,
  [SMALL_STATE(88)] = 3250,
  [SMALL_STATE(89)] = 3275,
  [SMALL_STATE(90)] = 3300,
  [SMALL_STATE(91)] = 3325,
  [SMALL_STATE(92)] = 3352,
  [SMALL_STATE(93)] = 3379,
  [SMALL_STATE(94)] = 3406,
  [SMALL_STATE(95)] = 3433,
  [SMALL_STATE(96)] = 3457,
  [SMALL_STATE(97)] = 3481,
  [SMALL_STATE(98)] = 3505,
  [SMALL_STATE(99)] = 3529,
  [SMALL_STATE(100)] = 3558,
  [SMALL_STATE(101)] = 3581,
  [SMALL_STATE(102)] = 3604,
  [SMALL_STATE(103)] = 3633,
  [SMALL_STATE(104)] = 3657,
  [SMALL_STATE(105)] = 3677,
  [SMALL_STATE(106)] = 3703,
  [SMALL_STATE(107)] = 3729,
  [SMALL_STATE(108)] = 3755,
  [SMALL_STATE(109)] = 3775,
  [SMALL_STATE(110)] = 3795,
  [SMALL_STATE(111)] = 3821,
  [SMALL_STATE(112)] = 3847,
  [SMALL_STATE(113)] = 3873,
  [SMALL_STATE(114)] = 3899,
  [SMALL_STATE(115)] = 3925,
  [SMALL_STATE(116)] = 3951,
  [SMALL_STATE(117)] = 3977,
  [SMALL_STATE(118)] = 4003,
  [SMALL_STATE(119)] = 4029,
  [SMALL_STATE(120)] = 4055,
  [SMALL_STATE(121)] = 4081,
  [SMALL_STATE(122)] = 4106,
  [SMALL_STATE(123)] = 4127,
  [SMALL_STATE(124)] = 4148,
  [SMALL_STATE(125)] = 4171,
  [SMALL_STATE(126)] = 4192,
  [SMALL_STATE(127)] = 4213,
  [SMALL_STATE(128)] = 4234,
  [SMALL_STATE(129)] = 4255,
  [SMALL_STATE(130)] = 4276,
  [SMALL_STATE(131)] = 4301,
  [SMALL_STATE(132)] = 4326,
  [SMALL_STATE(133)] = 4351,
  [SMALL_STATE(134)] = 4376,
  [SMALL_STATE(135)] = 4401,
  [SMALL_STATE(136)] = 4423,
  [SMALL_STATE(137)] = 4443,
  [SMALL_STATE(138)] = 4463,
  [SMALL_STATE(139)] = 4483,
  [SMALL_STATE(140)] = 4503,
  [SMALL_STATE(141)] = 4523,
  [SMALL_STATE(142)] = 4543,
  [SMALL_STATE(143)] = 4559,
  [SMALL_STATE(144)] = 4579,
  [SMALL_STATE(145)] = 4597,
  [SMALL_STATE(146)] = 4617,
  [SMALL_STATE(147)] = 4635,
  [SMALL_STATE(148)] = 4653,
  [SMALL_STATE(149)] = 4671,
  [SMALL_STATE(150)] = 4689,
  [SMALL_STATE(151)] = 4711,
  [SMALL_STATE(152)] = 4731,
  [SMALL_STATE(153)] = 4751,
  [SMALL_STATE(154)] = 4769,
  [SMALL_STATE(155)] = 4789,
  [SMALL_STATE(156)] = 4807,
  [SMALL_STATE(157)] = 4825,
  [SMALL_STATE(158)] = 4843,
  [SMALL_STATE(159)] = 4865,
  [SMALL_STATE(160)] = 4885,
  [SMALL_STATE(161)] = 4907,
  [SMALL_STATE(162)] = 4927,
  [SMALL_STATE(163)] = 4947,
  [SMALL_STATE(164)] = 4969,
  [SMALL_STATE(165)] = 4989,
  [SMALL_STATE(166)] = 5011,
  [SMALL_STATE(167)] = 5027,
  [SMALL_STATE(168)] = 5047,
  [SMALL_STATE(169)] = 5067,
  [SMALL_STATE(170)] = 5087,
  [SMALL_STATE(171)] = 5107,
  [SMALL_STATE(172)] = 5127,
  [SMALL_STATE(173)] = 5147,
  [SMALL_STATE(174)] = 5165,
  [SMALL_STATE(175)] = 5184,
  [SMALL_STATE(176)] = 5203,
  [SMALL_STATE(177)] = 5222,
  [SMALL_STATE(178)] = 5241,
  [SMALL_STATE(179)] = 5260,
  [SMALL_STATE(180)] = 5279,
  [SMALL_STATE(181)] = 5294,
  [SMALL_STATE(182)] = 5313,
  [SMALL_STATE(183)] = 5332,
  [SMALL_STATE(184)] = 5351,
  [SMALL_STATE(185)] = 5366,
  [SMALL_STATE(186)] = 5385,
  [SMALL_STATE(187)] = 5404,
  [SMALL_STATE(188)] = 5423,
  [SMALL_STATE(189)] = 5442,
  [SMALL_STATE(190)] = 5461,
  [SMALL_STATE(191)] = 5480,
  [SMALL_STATE(192)] = 5499,
  [SMALL_STATE(193)] = 5518,
  [SMALL_STATE(194)] = 5537,
  [SMALL_STATE(195)] = 5556,
  [SMALL_STATE(196)] = 5575,
  [SMALL_STATE(197)] = 5594,
  [SMALL_STATE(198)] = 5613,
  [SMALL_STATE(199)] = 5632,
  [SMALL_STATE(200)] = 5651,
  [SMALL_STATE(201)] = 5666,
  [SMALL_STATE(202)] = 5685,
  [SMALL_STATE(203)] = 5704,
  [SMALL_STATE(204)] = 5723,
  [SMALL_STATE(205)] = 5742,
  [SMALL_STATE(206)] = 5757,
  [SMALL_STATE(207)] = 5776,
  [SMALL_STATE(208)] = 5791,
  [SMALL_STATE(209)] = 5806,
  [SMALL_STATE(210)] = 5825,
  [SMALL_STATE(211)] = 5844,
  [SMALL_STATE(212)] = 5859,
  [SMALL_STATE(213)] = 5878,
  [SMALL_STATE(214)] = 5897,
  [SMALL_STATE(215)] = 5912,
  [SMALL_STATE(216)] = 5927,
  [SMALL_STATE(217)] = 5942,
  [SMALL_STATE(218)] = 5961,
  [SMALL_STATE(219)] = 5980,
  [SMALL_STATE(220)] = 5995,
  [SMALL_STATE(221)] = 6012,
  [SMALL_STATE(222)] = 6027,
  [SMALL_STATE(223)] = 6046,
  [SMALL_STATE(224)] = 6063,
  [SMALL_STATE(225)] = 6080,
  [SMALL_STATE(226)] = 6099,
  [SMALL_STATE(227)] = 6116,
  [SMALL_STATE(228)] = 6135,
  [SMALL_STATE(229)] = 6150,
  [SMALL_STATE(230)] = 6169,
  [SMALL_STATE(231)] = 6184,
  [SMALL_STATE(232)] = 6203,
  [SMALL_STATE(233)] = 6217,
  [SMALL_STATE(234)] = 6233,
  [SMALL_STATE(235)] = 6247,
  [SMALL_STATE(236)] = 6263,
  [SMALL_STATE(237)] = 6277,
  [SMALL_STATE(238)] = 6291,
  [SMALL_STATE(239)] = 6305,
  [SMALL_STATE(240)] = 6319,
  [SMALL_STATE(241)] = 6335,
  [SMALL_STATE(242)] = 6349,
  [SMALL_STATE(243)] = 6365,
  [SMALL_STATE(244)] = 6379,
  [SMALL_STATE(245)] = 6392,
  [SMALL_STATE(246)] = 6405,
  [SMALL_STATE(247)] = 6418,
  [SMALL_STATE(248)] = 6431,
  [SMALL_STATE(249)] = 6444,
  [SMALL_STATE(250)] = 6457,
  [SMALL_STATE(251)] = 6470,
  [SMALL_STATE(252)] = 6483,
  [SMALL_STATE(253)] = 6496,
  [SMALL_STATE(254)] = 6509,
  [SMALL_STATE(255)] = 6522,
  [SMALL_STATE(256)] = 6535,
  [SMALL_STATE(257)] = 6548,
  [SMALL_STATE(258)] = 6561,
  [SMALL_STATE(259)] = 6574,
  [SMALL_STATE(260)] = 6587,
  [SMALL_STATE(261)] = 6600,
  [SMALL_STATE(262)] = 6613,
  [SMALL_STATE(263)] = 6626,
  [SMALL_STATE(264)] = 6639,
  [SMALL_STATE(265)] = 6652,
  [SMALL_STATE(266)] = 6665,
  [SMALL_STATE(267)] = 6678,
  [SMALL_STATE(268)] = 6691,
  [SMALL_STATE(269)] = 6704,
  [SMALL_STATE(270)] = 6717,
  [SMALL_STATE(271)] = 6730,
  [SMALL_STATE(272)] = 6743,
  [SMALL_STATE(273)] = 6756,
  [SMALL_STATE(274)] = 6769,
  [SMALL_STATE(275)] = 6782,
  [SMALL_STATE(276)] = 6795,
  [SMALL_STATE(277)] = 6808,
  [SMALL_STATE(278)] = 6821,
  [SMALL_STATE(279)] = 6834,
  [SMALL_STATE(280)] = 6847,
  [SMALL_STATE(281)] = 6860,
  [SMALL_STATE(282)] = 6873,
  [SMALL_STATE(283)] = 6886,
  [SMALL_STATE(284)] = 6899,
  [SMALL_STATE(285)] = 6912,
  [SMALL_STATE(286)] = 6916,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(246),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(254),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(244),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(259),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(270),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(284),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 14),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 14),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 11),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 11),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 11),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 11),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(236),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [751] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
