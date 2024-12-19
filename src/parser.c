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
#define STATE_COUNT 275
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
  anon_sym_autonumberstop = 17,
  anon_sym_participant = 18,
  anon_sym_actor = 19,
  anon_sym_boundary = 20,
  anon_sym_control = 21,
  anon_sym_entity = 22,
  anon_sym_database = 23,
  anon_sym_collections = 24,
  anon_sym_queue = 25,
  anon_sym_POUND = 26,
  anon_sym_LBRACK = 27,
  aux_sym_multiline_token1 = 28,
  anon_sym_RBRACK = 29,
  anon_sym_as = 30,
  aux_sym_attr_alias_token1 = 31,
  anon_sym_order = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_string_token1 = 34,
  anon_sym_BSLASH_DQUOTE = 35,
  anon_sym_BSLASH = 36,
  aux_sym_escape_char_token1 = 37,
  anon_sym_COLON = 38,
  aux_sym_sequence_diagram_token1 = 39,
  anon_sym_DASH = 40,
  anon_sym_GT = 41,
  anon_sym_o = 42,
  anon_sym_x = 43,
  anon_sym_ox = 44,
  anon_sym_GT_GT = 45,
  anon_sym_BSLASH_BSLASH = 46,
  anon_sym_SLASH = 47,
  anon_sym_SLASH_SLASH = 48,
  anon_sym_DASH_DASH = 49,
  anon_sym_LBRACK_POUND = 50,
  anon_sym_LT = 51,
  anon_sym_xo = 52,
  anon_sym_LT_LT = 53,
  anon_sym_ATstartjson = 54,
  anon_sym_AT = 55,
  aux_sym_json_token1 = 56,
  anon_sym_ATendjson = 57,
  aux_sym_json_token2 = 58,
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
  [aux_sym_json_token2] = "json_token2",
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
  [aux_sym_json_token2] = aux_sym_json_token2,
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
  [aux_sym_json_token2] = {
    .visible = false,
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
  [9] = 4,
  [10] = 5,
  [11] = 6,
  [12] = 7,
  [13] = 8,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 18,
  [21] = 21,
  [22] = 21,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 29,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 38,
  [42] = 35,
  [43] = 40,
  [44] = 37,
  [45] = 32,
  [46] = 24,
  [47] = 24,
  [48] = 48,
  [49] = 27,
  [50] = 27,
  [51] = 29,
  [52] = 52,
  [53] = 29,
  [54] = 48,
  [55] = 52,
  [56] = 40,
  [57] = 40,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 68,
  [74] = 62,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 63,
  [79] = 64,
  [80] = 65,
  [81] = 66,
  [82] = 67,
  [83] = 69,
  [84] = 70,
  [85] = 71,
  [86] = 72,
  [87] = 77,
  [88] = 88,
  [89] = 88,
  [90] = 24,
  [91] = 29,
  [92] = 27,
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
  [104] = 103,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 103,
  [110] = 103,
  [111] = 108,
  [112] = 108,
  [113] = 113,
  [114] = 108,
  [115] = 103,
  [116] = 108,
  [117] = 103,
  [118] = 108,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 122,
  [128] = 128,
  [129] = 119,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 134,
  [139] = 139,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 134,
  [144] = 144,
  [145] = 134,
  [146] = 134,
  [147] = 147,
  [148] = 134,
  [149] = 149,
  [150] = 150,
  [151] = 141,
  [152] = 152,
  [153] = 153,
  [154] = 134,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 155,
  [161] = 161,
  [162] = 149,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 134,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 173,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 152,
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
  [200] = 173,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 173,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 173,
  [210] = 210,
  [211] = 173,
  [212] = 212,
  [213] = 173,
  [214] = 173,
  [215] = 173,
  [216] = 216,
  [217] = 173,
  [218] = 208,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 219,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 232,
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
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 246,
  [252] = 252,
  [253] = 238,
  [254] = 254,
  [255] = 254,
  [256] = 245,
  [257] = 27,
  [258] = 258,
  [259] = 252,
  [260] = 250,
  [261] = 238,
  [262] = 262,
  [263] = 263,
  [264] = 238,
  [265] = 265,
  [266] = 258,
  [267] = 267,
  [268] = 29,
  [269] = 239,
  [270] = 265,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(647);
      ADVANCE_MAP(
        '"', 772,
        '#', 675,
        '\'', 850,
        '-', 789,
        '/', 799,
        ':', 784,
        '<', 803,
        '>', 790,
        '@', 807,
        '[', 676,
        '\\', 779,
        ']', 680,
        'o', 791,
        'x', 793,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(662);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(831);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(783);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(782);
      if (lookahead != 0) ADVANCE(781);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(856);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(851);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(855);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(858);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 772,
        '#', 675,
        '\'', 850,
        '/', 36,
        '@', 107,
        '[', 676,
        'a', 692,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 723,
        'g', 749,
        'l', 734,
        'o', 744,
        'p', 684,
        'q', 762,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 772,
        '#', 675,
        '\'', 850,
        '/', 36,
        '[', 676,
        'a', 692,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 721,
        'g', 749,
        'l', 734,
        'o', 744,
        'p', 684,
        'q', 762,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 772,
        '\'', 850,
        '-', 788,
        '/', 799,
        ':', 784,
        '<', 803,
        '>', 790,
        '@', 108,
        '[', 21,
        '\\', 780,
        'a', 693,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 723,
        'g', 749,
        'l', 734,
        'p', 684,
        'q', 762,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(772);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead == '/') ADVANCE(799);
      if (lookahead == '>') ADVANCE(790);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(780);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 772,
        '\'', 850,
        '/', 36,
        ':', 784,
        '@', 107,
        'a', 692,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 723,
        'g', 749,
        'l', 734,
        'p', 684,
        'q', 762,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 772,
        '\'', 850,
        '/', 36,
        ':', 784,
        'a', 693,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 721,
        'g', 749,
        'l', 734,
        'p', 684,
        'q', 762,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 772,
        '\'', 850,
        '/', 36,
        ':', 784,
        'a', 692,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 721,
        'g', 749,
        'l', 734,
        'p', 684,
        'q', 762,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 772,
        '\'', 850,
        '/', 36,
        '@', 107,
        'a', 693,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 723,
        'g', 749,
        'i', 725,
        'l', 734,
        'p', 684,
        'q', 762,
        'r', 704,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 772,
        '\'', 850,
        '/', 36,
        '@', 107,
        'a', 693,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 723,
        'g', 749,
        'l', 734,
        'p', 684,
        'q', 762,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 772,
        '\'', 850,
        '/', 36,
        'a', 693,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 721,
        'g', 749,
        'i', 725,
        'l', 734,
        'p', 684,
        'q', 762,
        'r', 704,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '"', 772,
        '\'', 850,
        '/', 36,
        'a', 693,
        'b', 730,
        'c', 728,
        'd', 685,
        'e', 721,
        'g', 749,
        'l', 734,
        'p', 684,
        'q', 762,
        's', 713,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(772);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(792);
      if (lookahead == 'x') ADVANCE(795);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(772);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(662);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(772);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(775);
      if (lookahead == '\\') ADVANCE(778);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(774);
      if (lookahead != 0) ADVANCE(773);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(802);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 850,
        '-', 789,
        '/', 799,
        '<', 803,
        '\\', 780,
        'c', 104,
        'f', 57,
        'l', 97,
        'o', 791,
        'r', 101,
        's', 90,
        't', 198,
        'x', 794,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(665);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\'', 850,
        '/', 36,
        'A', 445,
        'a', 445,
        'B', 333,
        'b', 333,
        'C', 238,
        'c', 238,
        'D', 239,
        'd', 239,
        'F', 415,
        'f', 415,
        'G', 257,
        'g', 257,
        'H', 504,
        'h', 504,
        'I', 484,
        'i', 484,
        'K', 399,
        'k', 399,
        'L', 240,
        'l', 240,
        'M', 241,
        'm', 241,
        'N', 242,
        'n', 242,
        'O', 442,
        'o', 442,
        'P', 243,
        'p', 243,
        'R', 334,
        'r', 334,
        'S', 244,
        's', 244,
        'T', 251,
        't', 251,
        'V', 420,
        'v', 420,
        'W', 397,
        'w', 397,
        'Y', 345,
        'y', 345,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(662);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(679);
      if (lookahead == '\\') ADVANCE(777);
      if (lookahead == ']') ADVANCE(680);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(808);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(820);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(821);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(811);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(822);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(812);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(813);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(814);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(825);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(815);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(826);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(816);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(827);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(817);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(828);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(857);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(853);
      if (lookahead == '/') ADVANCE(864);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(854);
      if (lookahead == '/') ADVANCE(786);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(787);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(852);
      if (lookahead == '/') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(862);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\'') ADVANCE(859);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(200);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(109);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(102);
      END_STATE();
    case 48:
      if (lookahead == 'M') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(839);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(838);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        'c', 124,
        'd', 129,
        'e', 63,
        'g', 55,
        'j', 203,
        'm', 131,
        'r', 88,
        'w', 64,
        'y', 49,
      );
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 70:
      ADVANCE_MAP(
        'c', 128,
        'd', 132,
        'e', 66,
        'g', 59,
        'j', 212,
        'm', 133,
        'r', 106,
        'u', 147,
        'w', 65,
        'y', 62,
      );
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(835);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(834);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 134:
      if (lookahead == 'j') ADVANCE(203);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(833);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(649);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(806);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(845);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(844);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(666);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 195:
      if (lookahead == 'q') ADVANCE(229);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(847);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(846);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(841);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 230:
      if (lookahead == 'w') ADVANCE(655);
      END_STATE();
    case 231:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 232:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 233:
      if (lookahead == 'x') ADVANCE(837);
      END_STATE();
    case 234:
      if (lookahead == 'x') ADVANCE(836);
      END_STATE();
    case 235:
      if (lookahead == 'y') ADVANCE(843);
      END_STATE();
    case 236:
      if (lookahead == 'y') ADVANCE(842);
      END_STATE();
    case 237:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 238:
      ADVANCE_MAP(
        'A', 315,
        'a', 315,
        'H', 266,
        'h', 266,
        'O', 543,
        'o', 543,
        'R', 419,
        'r', 419,
        'Y', 250,
        'y', 250,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(643);
      END_STATE();
    case 239:
      ADVANCE_MAP(
        'A', 544,
        'a', 544,
        'E', 335,
        'e', 335,
        'I', 473,
        'i', 473,
        'O', 330,
        'o', 330,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(643);
      END_STATE();
    case 240:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(620);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 241:
      ADVANCE_MAP(
        'A', 394,
        'a', 394,
        'E', 322,
        'e', 322,
        'I', 320,
        'i', 320,
        'O', 304,
        'o', 304,
      );
      END_STATE();
    case 242:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 243:
      ADVANCE_MAP(
        'A', 454,
        'a', 454,
        'E', 275,
        'e', 275,
        'I', 485,
        'i', 485,
        'L', 608,
        'l', 608,
        'O', 627,
        'o', 627,
        'U', 551,
        'u', 551,
      );
      END_STATE();
    case 244:
      ADVANCE_MAP(
        'A', 319,
        'a', 319,
        'E', 247,
        'e', 247,
        'I', 354,
        'i', 354,
        'K', 633,
        'k', 633,
        'L', 258,
        'l', 258,
        'N', 509,
        'n', 509,
        'P', 557,
        'p', 557,
        'T', 370,
        't', 370,
      );
      END_STATE();
    case 245:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 246:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(868);
      END_STATE();
    case 247:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 248:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      END_STATE();
    case 249:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(868);
      END_STATE();
    case 250:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 251:
      ADVANCE_MAP(
        'A', 482,
        'a', 482,
        'E', 261,
        'e', 261,
        'H', 430,
        'h', 430,
        'O', 477,
        'o', 477,
        'R', 279,
        'r', 279,
        'U', 569,
        'u', 569,
      );
      END_STATE();
    case 252:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 253:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 254:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 255:
      ADVANCE_MAP(
        'A', 541,
        'a', 541,
        'B', 449,
        'b', 449,
        'O', 573,
        'o', 573,
        'P', 607,
        'p', 607,
        'S', 368,
        's', 368,
        'T', 609,
        't', 609,
        'V', 435,
        'v', 435,
      );
      END_STATE();
    case 256:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 257:
      ADVANCE_MAP(
        'A', 417,
        'a', 417,
        'H', 506,
        'h', 506,
        'O', 446,
        'o', 446,
        'R', 252,
        'r', 252,
      );
      END_STATE();
    case 258:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 259:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 260:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 261:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 262:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 263:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 264:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 265:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 266:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 267:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 268:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 269:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 270:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 271:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 272:
      ADVANCE_MAP(
        'A', 462,
        'a', 462,
        'E', 276,
        'e', 276,
        'K', 633,
        'k', 633,
        'L', 285,
        'l', 285,
        'T', 370,
        't', 370,
      );
      END_STATE();
    case 273:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 274:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(503);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(505);
      END_STATE();
    case 275:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 276:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 281:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 282:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 283:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 284:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 285:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 286:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 288:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 290:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(868);
      END_STATE();
    case 291:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(449);
      END_STATE();
    case 292:
      ADVANCE_MAP(
        'B', 449,
        'b', 449,
        'C', 526,
        'c', 526,
        'G', 531,
        'g', 531,
        'P', 410,
        'p', 410,
        'S', 272,
        's', 272,
        'Y', 379,
        'y', 379,
      );
      END_STATE();
    case 293:
      ADVANCE_MAP(
        'B', 449,
        'b', 449,
        'C', 634,
        'c', 634,
        'G', 528,
        'g', 528,
        'K', 399,
        'k', 399,
        'M', 284,
        'm', 284,
        'O', 457,
        'o', 457,
        'R', 353,
        'r', 353,
        'S', 273,
        's', 273,
        'T', 609,
        't', 609,
        'V', 420,
        'v', 420,
      );
      END_STATE();
    case 294:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(449);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(549);
      END_STATE();
    case 295:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(868);
      END_STATE();
    case 296:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(570);
      END_STATE();
    case 297:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(548);
      END_STATE();
    case 298:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(523);
      END_STATE();
    case 299:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(459);
      END_STATE();
    case 300:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 301:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 302:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(438);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 303:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 304:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 305:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 306:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(529);
      END_STATE();
    case 307:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 308:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 309:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 310:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 311:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 312:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 313:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 314:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(568);
      END_STATE();
    case 315:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(885);
      END_STATE();
    case 316:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(868);
      END_STATE();
    case 317:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(873);
      END_STATE();
    case 318:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(456);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 319:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(476);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 320:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(491);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
      END_STATE();
    case 321:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 322:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 323:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(640);
      END_STATE();
    case 324:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 325:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 326:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 327:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 328:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 329:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(638);
      END_STATE();
    case 330:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 331:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 332:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 333:
      ADVANCE_MAP(
        'E', 411,
        'e', 411,
        'I', 574,
        'i', 574,
        'L', 245,
        'l', 245,
        'R', 508,
        'r', 508,
        'U', 552,
        'u', 552,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(643);
      END_STATE();
    case 334:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(885);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 342:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(868);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 356:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 357:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 358:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(868);
      END_STATE();
    case 359:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 363:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(557);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 380:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(868);
      END_STATE();
    case 381:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(380);
      END_STATE();
    case 382:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(507);
      END_STATE();
    case 384:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(467);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      END_STATE();
    case 385:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(527);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(435);
      END_STATE();
    case 386:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(402);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 387:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(549);
      END_STATE();
    case 388:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 389:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 390:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(344);
      END_STATE();
    case 391:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(395);
      END_STATE();
    case 392:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 393:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 394:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 395:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(565);
      END_STATE();
    case 396:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      END_STATE();
    case 397:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 398:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(868);
      END_STATE();
    case 399:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(256);
      END_STATE();
    case 400:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(533);
      END_STATE();
    case 401:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(583);
      END_STATE();
    case 402:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(588);
      END_STATE();
    case 403:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(423);
      END_STATE();
    case 404:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(587);
      END_STATE();
    case 405:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(433);
      END_STATE();
    case 406:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(429);
      END_STATE();
    case 407:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 408:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 409:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(885);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(868);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 415:
      ADVANCE_MAP(
        'I', 553,
        'i', 553,
        'L', 517,
        'l', 517,
        'O', 554,
        'o', 554,
        'U', 300,
        'u', 300,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(643);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 419:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 421:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 423:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 425:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 426:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(486);
      END_STATE();
    case 427:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 428:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 429:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 430:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      END_STATE();
    case 431:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 432:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 433:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 434:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 435:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 436:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(510);
      END_STATE();
    case 437:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(633);
      END_STATE();
    case 438:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(868);
      END_STATE();
    case 439:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(293);
      END_STATE();
    case 440:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(412);
      END_STATE();
    case 441:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(336);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 445:
      ADVANCE_MAP(
        'L', 416,
        'l', 416,
        'N', 592,
        'n', 592,
        'Q', 611,
        'q', 611,
        'Z', 618,
        'z', 618,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(643);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(635);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(613);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(432);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 467:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 469:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 471:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(868);
      END_STATE();
    case 472:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 473:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(521);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(507);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(511);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(524);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(519);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(534);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 504:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 505:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 506:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 507:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 508:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 509:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 510:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 511:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 512:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 513:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 514:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 515:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 516:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 517:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 532:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(868);
      END_STATE();
    case 533:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(606);
      END_STATE();
    case 534:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(410);
      END_STATE();
    case 535:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      END_STATE();
    case 536:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 537:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(455);
      END_STATE();
    case 538:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(607);
      END_STATE();
    case 539:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(615);
      END_STATE();
    case 540:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(614);
      END_STATE();
    case 541:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(617);
      END_STATE();
    case 542:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(616);
      END_STATE();
    case 543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(885);
      END_STATE();
    case 545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(632);
      END_STATE();
    case 551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 574:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      END_STATE();
    case 575:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      END_STATE();
    case 576:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      END_STATE();
    case 577:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(590);
      END_STATE();
    case 578:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(601);
      END_STATE();
    case 579:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      END_STATE();
    case 580:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      END_STATE();
    case 581:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      END_STATE();
    case 582:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      END_STATE();
    case 583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(428);
      END_STATE();
    case 584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 586:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(868);
      END_STATE();
    case 587:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 588:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 589:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(869);
      END_STATE();
    case 590:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
      END_STATE();
    case 591:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(636);
      END_STATE();
    case 592:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      END_STATE();
    case 593:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 594:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      END_STATE();
    case 595:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 596:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 597:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 598:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 599:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 600:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 601:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 602:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      END_STATE();
    case 603:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      END_STATE();
    case 604:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(564);
      END_STATE();
    case 605:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(868);
      END_STATE();
    case 606:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 607:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 608:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(471);
      END_STATE();
    case 609:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(569);
      END_STATE();
    case 610:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 611:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 612:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 613:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(580);
      END_STATE();
    case 614:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 615:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 616:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 617:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 618:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 619:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 620:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(360);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(499);
      END_STATE();
    case 621:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 622:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(366);
      END_STATE();
    case 623:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(372);
      END_STATE();
    case 624:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(868);
      END_STATE();
    case 625:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(874);
      END_STATE();
    case 626:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(482);
      END_STATE();
    case 627:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(325);
      END_STATE();
    case 628:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(363);
      END_STATE();
    case 629:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(405);
      END_STATE();
    case 630:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(522);
      END_STATE();
    case 631:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(407);
      END_STATE();
    case 632:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(868);
      END_STATE();
    case 633:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 634:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 635:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(630);
      END_STATE();
    case 636:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(559);
      END_STATE();
    case 637:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 638:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 639:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 640:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(379);
      END_STATE();
    case 641:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 642:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 643:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(885);
      END_STATE();
    case 644:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(868);
      END_STATE();
    case 645:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(643);
      END_STATE();
    case 646:
      if (eof) ADVANCE(647);
      if (lookahead == '\n') ADVANCE(831);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_resume);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(679);
      if (lookahead == '\\') ADVANCE(777);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(677);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(857);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(759);
      if (lookahead == 's') ADVANCE(681);
      if (lookahead == 'u') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(759);
      if (lookahead == 'u') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(866);
      if (lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(716);
      if (lookahead == 'n') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(775);
      if (lookahead == '\\') ADVANCE(778);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(857);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(776);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(776);
      if (lookahead == '\\') ADVANCE(798);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(798);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(783);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(782);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(781);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(857);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(854);
      if (lookahead == '/') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(785);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(787);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(787);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(801);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(797);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(804);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(857);
      if (lookahead == '/') ADVANCE(800);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(805);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(808);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(820);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(821);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(811);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(822);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(812);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(813);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(814);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(825);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(815);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(826);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(816);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(827);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(850);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '@') ADVANCE(817);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(828);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(857);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_json_token2);
      if (lookahead == '\n') ADVANCE(831);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(865);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(787);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(856);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(851);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(865);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(787);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(40);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(865);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(865);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(453);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(566);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(884);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(565);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(884);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(882);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(420);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(379);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(883);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(882);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(884);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 22},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 25},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 18},
  [126] = {.lex_state = 18},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 18},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 26},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 28},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 30},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 34},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 28},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 29},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 33},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 27},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 27},
  [157] = {.lex_state = 34},
  [158] = {.lex_state = 28},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 32},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 26},
  [167] = {.lex_state = 31},
  [168] = {.lex_state = 31},
  [169] = {.lex_state = 646},
  [170] = {.lex_state = 646},
  [171] = {.lex_state = 646},
  [172] = {.lex_state = 646},
  [173] = {.lex_state = 28},
  [174] = {.lex_state = 646},
  [175] = {.lex_state = 27},
  [176] = {.lex_state = 646},
  [177] = {.lex_state = 646},
  [178] = {.lex_state = 646},
  [179] = {.lex_state = 646},
  [180] = {.lex_state = 646},
  [181] = {.lex_state = 646},
  [182] = {.lex_state = 646},
  [183] = {.lex_state = 646},
  [184] = {.lex_state = 25},
  [185] = {.lex_state = 646},
  [186] = {.lex_state = 646},
  [187] = {.lex_state = 646},
  [188] = {.lex_state = 646},
  [189] = {.lex_state = 646},
  [190] = {.lex_state = 646},
  [191] = {.lex_state = 646},
  [192] = {.lex_state = 646},
  [193] = {.lex_state = 646},
  [194] = {.lex_state = 646},
  [195] = {.lex_state = 646},
  [196] = {.lex_state = 25},
  [197] = {.lex_state = 646},
  [198] = {.lex_state = 646},
  [199] = {.lex_state = 646},
  [200] = {.lex_state = 30},
  [201] = {.lex_state = 646},
  [202] = {.lex_state = 646},
  [203] = {.lex_state = 646},
  [204] = {.lex_state = 32},
  [205] = {.lex_state = 646},
  [206] = {.lex_state = 646},
  [207] = {.lex_state = 646},
  [208] = {.lex_state = 22},
  [209] = {.lex_state = 34},
  [210] = {.lex_state = 646},
  [211] = {.lex_state = 35},
  [212] = {.lex_state = 646},
  [213] = {.lex_state = 26},
  [214] = {.lex_state = 29},
  [215] = {.lex_state = 31},
  [216] = {.lex_state = 646},
  [217] = {.lex_state = 33},
  [218] = {.lex_state = 22},
  [219] = {.lex_state = 22},
  [220] = {.lex_state = 646},
  [221] = {.lex_state = 646},
  [222] = {.lex_state = 646},
  [223] = {.lex_state = 646},
  [224] = {.lex_state = 646},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 646},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 22},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 22},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 37},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 23},
  [247] = {.lex_state = 23},
  [248] = {.lex_state = 23},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 24},
  [251] = {.lex_state = 23},
  [252] = {.lex_state = 38},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 22},
  [255] = {.lex_state = 22},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 24},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 38},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 22},
  [266] = {.lex_state = 38},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 24},
  [269] = {.lex_state = 37},
  [270] = {.lex_state = 22},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 0},
  [273] = {(TSStateId)(-1)},
  [274] = {(TSStateId)(-1)},
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
    [sym_diagram] = STATE(263),
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
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(62), 1,
      sym_expression,
    STATE(88), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(76), 5,
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
    ACTIONS(47), 1,
      anon_sym_ATenduml,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_uml_repeat1,
    STATE(62), 1,
      sym_expression,
    STATE(88), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(76), 5,
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
  [126] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_ATenduml,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(54), 1,
      anon_sym_autonumber,
    ACTIONS(57), 1,
      anon_sym_autonumberstop,
    ACTIONS(63), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(72), 1,
      anon_sym_loop,
    STATE(62), 1,
      sym_expression,
    STATE(88), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(4), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(76), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(60), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [187] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_skinparam,
    ACTIONS(77), 1,
      anon_sym_autonumber,
    ACTIONS(79), 1,
      anon_sym_autonumberstop,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(85), 1,
      anon_sym_end,
    ACTIONS(87), 1,
      anon_sym_loop,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(81), 8,
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
    ACTIONS(75), 1,
      anon_sym_skinparam,
    ACTIONS(77), 1,
      anon_sym_autonumber,
    ACTIONS(79), 1,
      anon_sym_autonumberstop,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(87), 1,
      anon_sym_loop,
    ACTIONS(89), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(81), 8,
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
    ACTIONS(75), 1,
      anon_sym_skinparam,
    ACTIONS(77), 1,
      anon_sym_autonumber,
    ACTIONS(79), 1,
      anon_sym_autonumberstop,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(87), 1,
      anon_sym_loop,
    ACTIONS(91), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(81), 8,
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
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_skinparam,
    ACTIONS(77), 1,
      anon_sym_autonumber,
    ACTIONS(79), 1,
      anon_sym_autonumberstop,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(87), 1,
      anon_sym_loop,
    ACTIONS(93), 1,
      anon_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(81), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [439] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(63), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_skinparam,
    ACTIONS(98), 1,
      anon_sym_autonumber,
    ACTIONS(101), 1,
      anon_sym_autonumberstop,
    ACTIONS(107), 1,
      anon_sym_group,
    ACTIONS(110), 1,
      anon_sym_end,
    ACTIONS(112), 1,
      anon_sym_loop,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(9), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(104), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [500] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_skinparam,
    ACTIONS(77), 1,
      anon_sym_autonumber,
    ACTIONS(79), 1,
      anon_sym_autonumberstop,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(87), 1,
      anon_sym_loop,
    ACTIONS(115), 1,
      anon_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(81), 8,
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
    ACTIONS(75), 1,
      anon_sym_skinparam,
    ACTIONS(77), 1,
      anon_sym_autonumber,
    ACTIONS(79), 1,
      anon_sym_autonumberstop,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(87), 1,
      anon_sym_loop,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(81), 8,
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
    ACTIONS(75), 1,
      anon_sym_skinparam,
    ACTIONS(77), 1,
      anon_sym_autonumber,
    ACTIONS(79), 1,
      anon_sym_autonumberstop,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(87), 1,
      anon_sym_loop,
    ACTIONS(119), 1,
      anon_sym_end,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(81), 8,
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
    ACTIONS(75), 1,
      anon_sym_skinparam,
    ACTIONS(77), 1,
      anon_sym_autonumber,
    ACTIONS(79), 1,
      anon_sym_autonumberstop,
    ACTIONS(83), 1,
      anon_sym_group,
    ACTIONS(87), 1,
      anon_sym_loop,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(74), 1,
      sym_expression,
    STATE(89), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(75), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(81), 8,
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
      sym_multiline,
    STATE(17), 1,
      aux_sym_attribute_repeat2,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(123), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(125), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    ACTIONS(123), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(32), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(125), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    STATE(18), 1,
      aux_sym_attribute_repeat2,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(143), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(145), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [902] = 10,
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
    STATE(17), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_attribute_repeat2,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(143), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(145), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [948] = 10,
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
    STATE(18), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_attribute_repeat2,
    STATE(45), 2,
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
  [994] = 10,
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
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(143), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(32), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(145), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1040] = 10,
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
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(147), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(32), 2,
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
  [1086] = 9,
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
    ACTIONS(153), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(21), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(32), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(151), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1130] = 9,
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
    STATE(22), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(45), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(153), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(151), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    STATE(21), 1,
      aux_sym_attribute_repeat2,
    STATE(23), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(32), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(145), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1220] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(24), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(173), 16,
      anon_sym_skinparam,
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
  [1254] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(181), 1,
      aux_sym_attribute_token3,
    STATE(25), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(179), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(183), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(177), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1294] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(26), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(173), 15,
      anon_sym_skinparam,
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
  [1328] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(27), 1,
      sym_comment,
    ACTIONS(185), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
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
  [1362] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(191), 1,
      aux_sym_attribute_token3,
    STATE(28), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(189), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(183), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(177), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1402] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(29), 1,
      sym_comment,
    ACTIONS(193), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
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
  [1436] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
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
  [1470] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
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
  [1504] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(32), 1,
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
  [1537] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_as,
    ACTIONS(207), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym_comment,
    STATE(61), 1,
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
  [1576] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_as,
    ACTIONS(211), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym_comment,
    STATE(59), 1,
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
  [1615] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(151), 16,
      anon_sym_skinparam,
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
  [1648] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(213), 16,
      anon_sym_skinparam,
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
  [1681] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(217), 16,
      anon_sym_skinparam,
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
  [1714] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(221), 16,
      anon_sym_skinparam,
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
  [1747] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(215), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(213), 15,
      anon_sym_skinparam,
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
  [1780] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(225), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(227), 15,
      anon_sym_skinparam,
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
  [1813] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(223), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(221), 15,
      anon_sym_skinparam,
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
  [1846] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(153), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(151), 15,
      anon_sym_skinparam,
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
  [1879] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(227), 16,
      anon_sym_skinparam,
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
  [1912] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(217), 15,
      anon_sym_skinparam,
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
  [1945] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
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
  [1978] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(173), 15,
      anon_sym_skinparam,
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
  [2010] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(173), 14,
      anon_sym_skinparam,
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
  [2042] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(191), 1,
      aux_sym_attribute_token3,
    STATE(48), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(123), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(125), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2078] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2110] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(187), 14,
      anon_sym_skinparam,
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
  [2142] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(195), 14,
      anon_sym_skinparam,
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
  [2174] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(231), 1,
      aux_sym_attribute_token3,
    ACTIONS(234), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(52), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(229), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2208] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
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
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2240] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(181), 1,
      aux_sym_attribute_token3,
    STATE(52), 1,
      aux_sym_attribute_repeat1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(125), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2276] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(236), 1,
      aux_sym_attribute_token3,
    STATE(55), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(234), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(229), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2310] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
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
  [2341] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(225), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
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
  [2372] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(239), 15,
      anon_sym_skinparam,
      anon_sym_autonumber,
      aux_sym_attribute_token3,
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
  [2403] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(247), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym_comment,
    ACTIONS(245), 2,
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
  [2436] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(239), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
      aux_sym_attribute_token3,
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
  [2467] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_comment,
    ACTIONS(245), 3,
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
  [2500] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(251), 3,
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
  [2530] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(255), 3,
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
  [2560] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(143), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(145), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2590] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(259), 3,
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
  [2620] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(263), 3,
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
  [2650] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
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
  [2680] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(177), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2710] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(269), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2740] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(273), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2770] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(277), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2800] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(281), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2830] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(177), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2860] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(251), 2,
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
  [2890] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(283), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2920] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(283), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2950] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(287), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2980] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(255), 2,
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
  [3010] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(145), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3040] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(259), 2,
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
  [3070] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(263), 2,
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
  [3100] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
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
  [3130] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(269), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3160] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(273), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3190] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(277), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3220] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(281), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3250] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(287), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3280] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(297), 1,
      anon_sym_x,
    ACTIONS(301), 1,
      anon_sym_DASH_DASH,
    STATE(88), 1,
      sym_comment,
    STATE(160), 1,
      sym_connector,
    ACTIONS(295), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(291), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(299), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [3316] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(297), 1,
      anon_sym_x,
    ACTIONS(301), 1,
      anon_sym_DASH_DASH,
    STATE(89), 1,
      sym_comment,
    STATE(155), 1,
      sym_connector,
    ACTIONS(295), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(291), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(299), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [3352] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(173), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(175), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [3377] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(195), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(193), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [3402] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(187), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(185), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [3427] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(307), 1,
      anon_sym_DASH,
    STATE(93), 1,
      sym_comment,
    ACTIONS(303), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(305), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3454] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(317), 1,
      anon_sym_LBRACK_POUND,
    STATE(94), 1,
      sym_comment,
    ACTIONS(311), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(313), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(315), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3481] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(323), 1,
      anon_sym_DASH,
    STATE(95), 1,
      sym_comment,
    ACTIONS(319), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(321), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(325), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3508] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(333), 1,
      anon_sym_LBRACK_POUND,
    STATE(96), 1,
      sym_comment,
    ACTIONS(327), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(329), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(331), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3535] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(319), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(321), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(325), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3559] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
      sym_comment,
    ACTIONS(311), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(313), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(315), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3583] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
      sym_comment,
    ACTIONS(335), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(337), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(339), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3607] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
      sym_comment,
    ACTIONS(327), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(329), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(331), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3631] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(345), 1,
      anon_sym_LBRACK_POUND,
    STATE(101), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(343), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3654] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(349), 1,
      anon_sym_DASH,
    STATE(102), 1,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(351), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3677] = 8,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(103), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_string_repeat1,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3703] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_string_repeat1,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3729] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(367), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [3749] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3769] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(343), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [3789] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_string_repeat1,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3815] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_string_repeat1,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3841] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_string_repeat1,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3867] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_string_repeat1,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3893] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_string_repeat1,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3919] = 7,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      anon_sym_BSLASH,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(381), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(113), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3943] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      aux_sym_string_repeat1,
    STATE(114), 1,
      sym_comment,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3969] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      aux_sym_string_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3995] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      aux_sym_string_repeat1,
    STATE(116), 1,
      sym_comment,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [4021] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_string_repeat1,
    STATE(117), 1,
      sym_comment,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [4047] = 8,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      aux_sym_string_repeat1,
    STATE(118), 1,
      sym_comment,
    STATE(131), 1,
      sym_escape_char,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [4073] = 8,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(397), 1,
      aux_sym_multiline_token1,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(401), 1,
      anon_sym_BSLASH,
    STATE(119), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_multiline_repeat1,
    STATE(196), 1,
      sym_escape_char,
  [4098] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_attr_alias_token1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4119] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(407), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(411), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4140] = 8,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(397), 1,
      aux_sym_multiline_token1,
    ACTIONS(401), 1,
      anon_sym_BSLASH,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      aux_sym_multiline_repeat1,
    STATE(122), 1,
      sym_comment,
    STATE(196), 1,
      sym_escape_char,
  [4165] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(415), 1,
      aux_sym_attr_alias_token1,
    STATE(123), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4186] = 7,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(419), 1,
      aux_sym_multiline_token1,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    ACTIONS(424), 1,
      anon_sym_BSLASH,
    STATE(196), 1,
      sym_escape_char,
    STATE(124), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [4209] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      aux_sym_attr_alias_token1,
    STATE(125), 1,
      sym_comment,
    ACTIONS(429), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4230] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(431), 1,
      aux_sym_attr_alias_token1,
    STATE(126), 1,
      sym_comment,
    ACTIONS(433), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4251] = 8,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(397), 1,
      aux_sym_multiline_token1,
    ACTIONS(401), 1,
      anon_sym_BSLASH,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym_multiline_repeat1,
    STATE(196), 1,
      sym_escape_char,
  [4276] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(437), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(441), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4297] = 8,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(397), 1,
      aux_sym_multiline_token1,
    ACTIONS(401), 1,
      anon_sym_BSLASH,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_multiline_repeat1,
    STATE(129), 1,
      sym_comment,
    STATE(196), 1,
      sym_escape_char,
  [4322] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 1,
      aux_sym_attr_alias_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [4343] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
      sym_comment,
    ACTIONS(449), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [4359] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_ATendchronology,
    STATE(132), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_json_repeat1,
    ACTIONS(451), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4379] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(457), 1,
      anon_sym_ATendjson,
    STATE(133), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat1,
    ACTIONS(455), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4399] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendyaml,
    ACTIONS(459), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(134), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4417] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(466), 1,
      anon_sym_ATendmindmap,
    STATE(135), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_json_repeat1,
    ACTIONS(464), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4437] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendebnf,
    ACTIONS(468), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(136), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4455] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(473), 1,
      anon_sym_ATendwbs,
    STATE(137), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_json_repeat1,
    ACTIONS(471), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4475] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendregex,
    ACTIONS(475), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(138), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4493] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_ATendchen,
    STATE(139), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_json_repeat1,
    ACTIONS(478), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4513] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendditaa,
    ACTIONS(482), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(140), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4531] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(485), 1,
      aux_sym_attribute_token1,
    ACTIONS(487), 1,
      aux_sym_attribute_token2,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_comment,
    STATE(260), 1,
      sym_string,
  [4553] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(493), 1,
      anon_sym_ATendyaml,
    STATE(142), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_json_repeat1,
    ACTIONS(491), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4573] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendgantt,
    ACTIONS(495), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(143), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4591] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(500), 1,
      anon_sym_ATendebnf,
    STATE(144), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_json_repeat1,
    ACTIONS(498), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4611] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendchronology,
    ACTIONS(502), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(145), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4629] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendmindmap,
    ACTIONS(505), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(146), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4647] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_ATendgantt,
    STATE(147), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_json_repeat1,
    ACTIONS(508), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4667] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendchen,
    ACTIONS(512), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(148), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4685] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(515), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_participant_name,
    STATE(24), 1,
      sym_string,
    STATE(149), 1,
      sym_comment,
  [4707] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(519), 1,
      anon_sym_ATendchen,
    STATE(139), 1,
      aux_sym_json_repeat1,
    STATE(150), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4727] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym_attribute_token1,
    ACTIONS(523), 1,
      aux_sym_attribute_token2,
    STATE(151), 1,
      sym_comment,
    STATE(250), 1,
      sym_string,
  [4749] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(525), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [4765] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(529), 1,
      anon_sym_ATendregex,
    STATE(153), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_json_repeat1,
    ACTIONS(527), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4785] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendjson,
    ACTIONS(531), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(154), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4803] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(534), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(536), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_participant_name,
    STATE(46), 1,
      sym_string,
    STATE(155), 1,
      sym_comment,
  [4825] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(538), 1,
      anon_sym_ATendjson,
    STATE(154), 1,
      aux_sym_json_repeat1,
    STATE(156), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4845] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(542), 1,
      anon_sym_ATendditaa,
    STATE(157), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_json_repeat1,
    ACTIONS(540), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4865] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(544), 1,
      anon_sym_ATendyaml,
    STATE(134), 1,
      aux_sym_json_repeat1,
    STATE(158), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4885] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(546), 1,
      anon_sym_ATendebnf,
    STATE(136), 1,
      aux_sym_json_repeat1,
    STATE(159), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4905] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(548), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(550), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_participant_name,
    STATE(47), 1,
      sym_string,
    STATE(160), 1,
      sym_comment,
  [4927] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(552), 1,
      anon_sym_ATendmindmap,
    STATE(135), 1,
      aux_sym_json_repeat1,
    STATE(161), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4947] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(554), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_participant_name,
    STATE(26), 1,
      sym_string,
    STATE(162), 1,
      sym_comment,
  [4969] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(558), 1,
      anon_sym_ATendregex,
    STATE(138), 1,
      aux_sym_json_repeat1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4989] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(560), 1,
      anon_sym_ATendditaa,
    STATE(140), 1,
      aux_sym_json_repeat1,
    STATE(164), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5009] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(562), 1,
      anon_sym_ATendgantt,
    STATE(143), 1,
      aux_sym_json_repeat1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5029] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(564), 1,
      anon_sym_ATendchronology,
    STATE(132), 1,
      aux_sym_json_repeat1,
    STATE(166), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5049] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(566), 1,
      anon_sym_ATendwbs,
    STATE(137), 1,
      aux_sym_json_repeat1,
    STATE(167), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [5069] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_ATendwbs,
    ACTIONS(568), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(168), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [5087] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    STATE(169), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_json_repeat2,
  [5106] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    STATE(170), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym_json_repeat2,
  [5125] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_json_repeat2,
  [5144] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    STATE(172), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_json_repeat2,
  [5163] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(173), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [5178] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_json_repeat2,
  [5197] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(175), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [5212] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      sym_comment,
    STATE(212), 1,
      aux_sym_json_repeat2,
  [5231] = 5,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
    ACTIONS(589), 1,
      aux_sym_json_token2,
    STATE(177), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [5248] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(178), 1,
      sym_comment,
  [5267] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(179), 1,
      sym_comment,
  [5286] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(180), 1,
      sym_comment,
  [5305] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym_json_repeat2,
  [5324] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(182), 1,
      sym_comment,
  [5343] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_json_repeat2,
  [5362] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(184), 1,
      sym_comment,
    ACTIONS(525), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [5377] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(185), 1,
      sym_comment,
  [5396] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(186), 1,
      sym_comment,
  [5415] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(187), 1,
      sym_comment,
  [5434] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    STATE(188), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_json_repeat2,
  [5453] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(189), 1,
      sym_comment,
  [5472] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(190), 1,
      sym_comment,
  [5491] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_json_repeat2,
  [5510] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(192), 1,
      sym_comment,
  [5529] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      aux_sym_json_repeat2,
    STATE(193), 1,
      sym_comment,
  [5548] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      aux_sym_json_repeat2,
    STATE(194), 1,
      sym_comment,
  [5567] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      aux_sym_json_repeat2,
    STATE(195), 1,
      sym_comment,
  [5586] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(196), 1,
      sym_comment,
    ACTIONS(626), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [5601] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    STATE(197), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_json_repeat2,
  [5620] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(198), 1,
      sym_comment,
  [5639] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      aux_sym_json_repeat2,
    STATE(199), 1,
      sym_comment,
  [5658] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(200), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [5673] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(201), 1,
      sym_comment,
  [5692] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    STATE(201), 1,
      aux_sym_json_repeat2,
    STATE(202), 1,
      sym_comment,
  [5711] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(190), 1,
      aux_sym_json_repeat2,
    STATE(203), 1,
      sym_comment,
  [5730] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(204), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [5745] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    STATE(205), 1,
      sym_comment,
    STATE(206), 1,
      aux_sym_json_repeat2,
  [5764] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(206), 1,
      sym_comment,
  [5783] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      aux_sym_json_repeat2,
    STATE(207), 1,
      sym_comment,
  [5802] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(208), 1,
      sym_comment,
    ACTIONS(646), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [5817] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(209), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [5832] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(210), 1,
      sym_comment,
  [5851] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(211), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [5866] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(212), 1,
      sym_comment,
  [5885] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(213), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [5900] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(214), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [5915] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(215), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [5930] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      aux_sym_json_repeat2,
    STATE(216), 1,
      sym_comment,
  [5949] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(217), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [5964] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(218), 1,
      sym_comment,
    ACTIONS(654), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [5979] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_boolean_literal,
    STATE(219), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_true,
      anon_sym_false,
  [5996] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(220), 1,
      sym_comment,
  [6015] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      aux_sym_json_repeat2,
    STATE(221), 1,
      sym_comment,
  [6034] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(222), 1,
      sym_comment,
  [6053] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      aux_sym_json_repeat2,
    STATE(223), 1,
      sym_comment,
  [6072] = 6,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_json_token2,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      aux_sym_json_repeat2,
    STATE(224), 1,
      sym_comment,
  [6091] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_boolean_literal,
    STATE(225), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_true,
      anon_sym_false,
  [6108] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(226), 1,
      sym_comment,
    ACTIONS(670), 2,
      ts_builtin_sym_end,
      aux_sym_json_token2,
  [6122] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(227), 1,
      sym_comment,
    ACTIONS(327), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6136] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(672), 1,
      anon_sym_DASH,
    ACTIONS(674), 1,
      anon_sym_DASH_DASH,
    STATE(228), 1,
      sym_comment,
  [6152] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(229), 1,
      sym_comment,
    ACTIONS(409), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6166] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(230), 1,
      sym_comment,
    ACTIONS(439), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6180] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DASH,
    ACTIONS(678), 1,
      anon_sym_DASH_DASH,
    STATE(231), 1,
      sym_comment,
  [6196] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(682), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(232), 1,
      sym_comment,
  [6212] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(233), 1,
      sym_comment,
    ACTIONS(303), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6226] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(234), 1,
      sym_comment,
    ACTIONS(684), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6240] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(235), 1,
      sym_comment,
    ACTIONS(319), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6254] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(686), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(688), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(236), 1,
      sym_comment,
  [6270] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(237), 1,
      sym_comment,
    ACTIONS(335), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [6284] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(690), 1,
      aux_sym_attr_alias_token1,
    STATE(238), 1,
      sym_comment,
  [6297] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(692), 1,
      aux_sym_group_block_token1,
    STATE(239), 1,
      sym_comment,
  [6310] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      sym_comment,
  [6323] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(696), 1,
      sym_color,
    STATE(241), 1,
      sym_comment,
  [6336] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      sym_comment,
  [6349] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(700), 1,
      ts_builtin_sym_end,
    STATE(243), 1,
      sym_comment,
  [6362] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      sym_comment,
  [6375] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(704), 1,
      aux_sym_escape_char_token1,
    STATE(245), 1,
      sym_comment,
  [6388] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(706), 1,
      sym_color,
    STATE(246), 1,
      sym_comment,
  [6401] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(708), 1,
      sym_color,
    STATE(247), 1,
      sym_comment,
  [6414] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(710), 1,
      sym_color,
    STATE(248), 1,
      sym_comment,
  [6427] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      sym_comment,
  [6440] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(714), 1,
      aux_sym_attribute_token2,
    STATE(250), 1,
      sym_comment,
  [6453] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(716), 1,
      sym_color,
    STATE(251), 1,
      sym_comment,
  [6466] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      aux_sym_sequence_diagram_token1,
    STATE(252), 1,
      sym_comment,
  [6479] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(720), 1,
      aux_sym_attr_alias_token1,
    STATE(253), 1,
      sym_comment,
  [6492] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(722), 1,
      aux_sym_attribute_token3,
    STATE(254), 1,
      sym_comment,
  [6505] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(724), 1,
      aux_sym_attribute_token3,
    STATE(255), 1,
      sym_comment,
  [6518] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      aux_sym_escape_char_token1,
    STATE(256), 1,
      sym_comment,
  [6531] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(185), 1,
      aux_sym_attribute_token2,
    STATE(257), 1,
      sym_comment,
  [6544] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      aux_sym_sequence_diagram_token1,
    STATE(258), 1,
      sym_comment,
  [6557] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(730), 1,
      aux_sym_sequence_diagram_token1,
    STATE(259), 1,
      sym_comment,
  [6570] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(732), 1,
      aux_sym_attribute_token2,
    STATE(260), 1,
      sym_comment,
  [6583] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(734), 1,
      aux_sym_attr_alias_token1,
    STATE(261), 1,
      sym_comment,
  [6596] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(736), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      sym_comment,
  [6609] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_comment,
  [6622] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(740), 1,
      aux_sym_attr_alias_token1,
    STATE(264), 1,
      sym_comment,
  [6635] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(742), 1,
      aux_sym_attribute_token3,
    STATE(265), 1,
      sym_comment,
  [6648] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(744), 1,
      aux_sym_sequence_diagram_token1,
    STATE(266), 1,
      sym_comment,
  [6661] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(746), 1,
      aux_sym_comment_token2,
    STATE(267), 1,
      sym_comment,
  [6674] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(193), 1,
      aux_sym_attribute_token2,
    STATE(268), 1,
      sym_comment,
  [6687] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(748), 1,
      aux_sym_group_block_token1,
    STATE(269), 1,
      sym_comment,
  [6700] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(750), 1,
      aux_sym_attribute_token3,
    STATE(270), 1,
      sym_comment,
  [6713] = 4,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(752), 1,
      aux_sym_comment_token1,
    STATE(271), 1,
      sym_comment,
  [6726] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_SLASH,
    STATE(272), 1,
      sym_comment,
  [6739] = 1,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
  [6743] = 1,
    ACTIONS(758), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 187,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 313,
  [SMALL_STATE(8)] = 376,
  [SMALL_STATE(9)] = 439,
  [SMALL_STATE(10)] = 500,
  [SMALL_STATE(11)] = 563,
  [SMALL_STATE(12)] = 626,
  [SMALL_STATE(13)] = 689,
  [SMALL_STATE(14)] = 752,
  [SMALL_STATE(15)] = 804,
  [SMALL_STATE(16)] = 856,
  [SMALL_STATE(17)] = 902,
  [SMALL_STATE(18)] = 948,
  [SMALL_STATE(19)] = 994,
  [SMALL_STATE(20)] = 1040,
  [SMALL_STATE(21)] = 1086,
  [SMALL_STATE(22)] = 1130,
  [SMALL_STATE(23)] = 1174,
  [SMALL_STATE(24)] = 1220,
  [SMALL_STATE(25)] = 1254,
  [SMALL_STATE(26)] = 1294,
  [SMALL_STATE(27)] = 1328,
  [SMALL_STATE(28)] = 1362,
  [SMALL_STATE(29)] = 1402,
  [SMALL_STATE(30)] = 1436,
  [SMALL_STATE(31)] = 1470,
  [SMALL_STATE(32)] = 1504,
  [SMALL_STATE(33)] = 1537,
  [SMALL_STATE(34)] = 1576,
  [SMALL_STATE(35)] = 1615,
  [SMALL_STATE(36)] = 1648,
  [SMALL_STATE(37)] = 1681,
  [SMALL_STATE(38)] = 1714,
  [SMALL_STATE(39)] = 1747,
  [SMALL_STATE(40)] = 1780,
  [SMALL_STATE(41)] = 1813,
  [SMALL_STATE(42)] = 1846,
  [SMALL_STATE(43)] = 1879,
  [SMALL_STATE(44)] = 1912,
  [SMALL_STATE(45)] = 1945,
  [SMALL_STATE(46)] = 1978,
  [SMALL_STATE(47)] = 2010,
  [SMALL_STATE(48)] = 2042,
  [SMALL_STATE(49)] = 2078,
  [SMALL_STATE(50)] = 2110,
  [SMALL_STATE(51)] = 2142,
  [SMALL_STATE(52)] = 2174,
  [SMALL_STATE(53)] = 2208,
  [SMALL_STATE(54)] = 2240,
  [SMALL_STATE(55)] = 2276,
  [SMALL_STATE(56)] = 2310,
  [SMALL_STATE(57)] = 2341,
  [SMALL_STATE(58)] = 2372,
  [SMALL_STATE(59)] = 2403,
  [SMALL_STATE(60)] = 2436,
  [SMALL_STATE(61)] = 2467,
  [SMALL_STATE(62)] = 2500,
  [SMALL_STATE(63)] = 2530,
  [SMALL_STATE(64)] = 2560,
  [SMALL_STATE(65)] = 2590,
  [SMALL_STATE(66)] = 2620,
  [SMALL_STATE(67)] = 2650,
  [SMALL_STATE(68)] = 2680,
  [SMALL_STATE(69)] = 2710,
  [SMALL_STATE(70)] = 2740,
  [SMALL_STATE(71)] = 2770,
  [SMALL_STATE(72)] = 2800,
  [SMALL_STATE(73)] = 2830,
  [SMALL_STATE(74)] = 2860,
  [SMALL_STATE(75)] = 2890,
  [SMALL_STATE(76)] = 2920,
  [SMALL_STATE(77)] = 2950,
  [SMALL_STATE(78)] = 2980,
  [SMALL_STATE(79)] = 3010,
  [SMALL_STATE(80)] = 3040,
  [SMALL_STATE(81)] = 3070,
  [SMALL_STATE(82)] = 3100,
  [SMALL_STATE(83)] = 3130,
  [SMALL_STATE(84)] = 3160,
  [SMALL_STATE(85)] = 3190,
  [SMALL_STATE(86)] = 3220,
  [SMALL_STATE(87)] = 3250,
  [SMALL_STATE(88)] = 3280,
  [SMALL_STATE(89)] = 3316,
  [SMALL_STATE(90)] = 3352,
  [SMALL_STATE(91)] = 3377,
  [SMALL_STATE(92)] = 3402,
  [SMALL_STATE(93)] = 3427,
  [SMALL_STATE(94)] = 3454,
  [SMALL_STATE(95)] = 3481,
  [SMALL_STATE(96)] = 3508,
  [SMALL_STATE(97)] = 3535,
  [SMALL_STATE(98)] = 3559,
  [SMALL_STATE(99)] = 3583,
  [SMALL_STATE(100)] = 3607,
  [SMALL_STATE(101)] = 3631,
  [SMALL_STATE(102)] = 3654,
  [SMALL_STATE(103)] = 3677,
  [SMALL_STATE(104)] = 3703,
  [SMALL_STATE(105)] = 3729,
  [SMALL_STATE(106)] = 3749,
  [SMALL_STATE(107)] = 3769,
  [SMALL_STATE(108)] = 3789,
  [SMALL_STATE(109)] = 3815,
  [SMALL_STATE(110)] = 3841,
  [SMALL_STATE(111)] = 3867,
  [SMALL_STATE(112)] = 3893,
  [SMALL_STATE(113)] = 3919,
  [SMALL_STATE(114)] = 3943,
  [SMALL_STATE(115)] = 3969,
  [SMALL_STATE(116)] = 3995,
  [SMALL_STATE(117)] = 4021,
  [SMALL_STATE(118)] = 4047,
  [SMALL_STATE(119)] = 4073,
  [SMALL_STATE(120)] = 4098,
  [SMALL_STATE(121)] = 4119,
  [SMALL_STATE(122)] = 4140,
  [SMALL_STATE(123)] = 4165,
  [SMALL_STATE(124)] = 4186,
  [SMALL_STATE(125)] = 4209,
  [SMALL_STATE(126)] = 4230,
  [SMALL_STATE(127)] = 4251,
  [SMALL_STATE(128)] = 4276,
  [SMALL_STATE(129)] = 4297,
  [SMALL_STATE(130)] = 4322,
  [SMALL_STATE(131)] = 4343,
  [SMALL_STATE(132)] = 4359,
  [SMALL_STATE(133)] = 4379,
  [SMALL_STATE(134)] = 4399,
  [SMALL_STATE(135)] = 4417,
  [SMALL_STATE(136)] = 4437,
  [SMALL_STATE(137)] = 4455,
  [SMALL_STATE(138)] = 4475,
  [SMALL_STATE(139)] = 4493,
  [SMALL_STATE(140)] = 4513,
  [SMALL_STATE(141)] = 4531,
  [SMALL_STATE(142)] = 4553,
  [SMALL_STATE(143)] = 4573,
  [SMALL_STATE(144)] = 4591,
  [SMALL_STATE(145)] = 4611,
  [SMALL_STATE(146)] = 4629,
  [SMALL_STATE(147)] = 4647,
  [SMALL_STATE(148)] = 4667,
  [SMALL_STATE(149)] = 4685,
  [SMALL_STATE(150)] = 4707,
  [SMALL_STATE(151)] = 4727,
  [SMALL_STATE(152)] = 4749,
  [SMALL_STATE(153)] = 4765,
  [SMALL_STATE(154)] = 4785,
  [SMALL_STATE(155)] = 4803,
  [SMALL_STATE(156)] = 4825,
  [SMALL_STATE(157)] = 4845,
  [SMALL_STATE(158)] = 4865,
  [SMALL_STATE(159)] = 4885,
  [SMALL_STATE(160)] = 4905,
  [SMALL_STATE(161)] = 4927,
  [SMALL_STATE(162)] = 4947,
  [SMALL_STATE(163)] = 4969,
  [SMALL_STATE(164)] = 4989,
  [SMALL_STATE(165)] = 5009,
  [SMALL_STATE(166)] = 5029,
  [SMALL_STATE(167)] = 5049,
  [SMALL_STATE(168)] = 5069,
  [SMALL_STATE(169)] = 5087,
  [SMALL_STATE(170)] = 5106,
  [SMALL_STATE(171)] = 5125,
  [SMALL_STATE(172)] = 5144,
  [SMALL_STATE(173)] = 5163,
  [SMALL_STATE(174)] = 5178,
  [SMALL_STATE(175)] = 5197,
  [SMALL_STATE(176)] = 5212,
  [SMALL_STATE(177)] = 5231,
  [SMALL_STATE(178)] = 5248,
  [SMALL_STATE(179)] = 5267,
  [SMALL_STATE(180)] = 5286,
  [SMALL_STATE(181)] = 5305,
  [SMALL_STATE(182)] = 5324,
  [SMALL_STATE(183)] = 5343,
  [SMALL_STATE(184)] = 5362,
  [SMALL_STATE(185)] = 5377,
  [SMALL_STATE(186)] = 5396,
  [SMALL_STATE(187)] = 5415,
  [SMALL_STATE(188)] = 5434,
  [SMALL_STATE(189)] = 5453,
  [SMALL_STATE(190)] = 5472,
  [SMALL_STATE(191)] = 5491,
  [SMALL_STATE(192)] = 5510,
  [SMALL_STATE(193)] = 5529,
  [SMALL_STATE(194)] = 5548,
  [SMALL_STATE(195)] = 5567,
  [SMALL_STATE(196)] = 5586,
  [SMALL_STATE(197)] = 5601,
  [SMALL_STATE(198)] = 5620,
  [SMALL_STATE(199)] = 5639,
  [SMALL_STATE(200)] = 5658,
  [SMALL_STATE(201)] = 5673,
  [SMALL_STATE(202)] = 5692,
  [SMALL_STATE(203)] = 5711,
  [SMALL_STATE(204)] = 5730,
  [SMALL_STATE(205)] = 5745,
  [SMALL_STATE(206)] = 5764,
  [SMALL_STATE(207)] = 5783,
  [SMALL_STATE(208)] = 5802,
  [SMALL_STATE(209)] = 5817,
  [SMALL_STATE(210)] = 5832,
  [SMALL_STATE(211)] = 5851,
  [SMALL_STATE(212)] = 5866,
  [SMALL_STATE(213)] = 5885,
  [SMALL_STATE(214)] = 5900,
  [SMALL_STATE(215)] = 5915,
  [SMALL_STATE(216)] = 5930,
  [SMALL_STATE(217)] = 5949,
  [SMALL_STATE(218)] = 5964,
  [SMALL_STATE(219)] = 5979,
  [SMALL_STATE(220)] = 5996,
  [SMALL_STATE(221)] = 6015,
  [SMALL_STATE(222)] = 6034,
  [SMALL_STATE(223)] = 6053,
  [SMALL_STATE(224)] = 6072,
  [SMALL_STATE(225)] = 6091,
  [SMALL_STATE(226)] = 6108,
  [SMALL_STATE(227)] = 6122,
  [SMALL_STATE(228)] = 6136,
  [SMALL_STATE(229)] = 6152,
  [SMALL_STATE(230)] = 6166,
  [SMALL_STATE(231)] = 6180,
  [SMALL_STATE(232)] = 6196,
  [SMALL_STATE(233)] = 6212,
  [SMALL_STATE(234)] = 6226,
  [SMALL_STATE(235)] = 6240,
  [SMALL_STATE(236)] = 6254,
  [SMALL_STATE(237)] = 6270,
  [SMALL_STATE(238)] = 6284,
  [SMALL_STATE(239)] = 6297,
  [SMALL_STATE(240)] = 6310,
  [SMALL_STATE(241)] = 6323,
  [SMALL_STATE(242)] = 6336,
  [SMALL_STATE(243)] = 6349,
  [SMALL_STATE(244)] = 6362,
  [SMALL_STATE(245)] = 6375,
  [SMALL_STATE(246)] = 6388,
  [SMALL_STATE(247)] = 6401,
  [SMALL_STATE(248)] = 6414,
  [SMALL_STATE(249)] = 6427,
  [SMALL_STATE(250)] = 6440,
  [SMALL_STATE(251)] = 6453,
  [SMALL_STATE(252)] = 6466,
  [SMALL_STATE(253)] = 6479,
  [SMALL_STATE(254)] = 6492,
  [SMALL_STATE(255)] = 6505,
  [SMALL_STATE(256)] = 6518,
  [SMALL_STATE(257)] = 6531,
  [SMALL_STATE(258)] = 6544,
  [SMALL_STATE(259)] = 6557,
  [SMALL_STATE(260)] = 6570,
  [SMALL_STATE(261)] = 6583,
  [SMALL_STATE(262)] = 6596,
  [SMALL_STATE(263)] = 6609,
  [SMALL_STATE(264)] = 6622,
  [SMALL_STATE(265)] = 6635,
  [SMALL_STATE(266)] = 6648,
  [SMALL_STATE(267)] = 6661,
  [SMALL_STATE(268)] = 6674,
  [SMALL_STATE(269)] = 6687,
  [SMALL_STATE(270)] = 6700,
  [SMALL_STATE(271)] = 6713,
  [SMALL_STATE(272)] = 6726,
  [SMALL_STATE(273)] = 6739,
  [SMALL_STATE(274)] = 6743,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(251),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(261),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(254),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(246),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(238),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(255),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 14),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 14),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 11),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 11),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 11),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 11),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(226),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [738] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
