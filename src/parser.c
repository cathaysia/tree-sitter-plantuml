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
#define STATE_COUNT 225
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 15
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_autonumber = 3,
  anon_sym_inc = 4,
  anon_sym_resume = 5,
  aux_sym_attribute_token1 = 6,
  aux_sym_attribute_token2 = 7,
  aux_sym_attribute_token3 = 8,
  anon_sym_autonumberstop = 9,
  anon_sym_participant = 10,
  anon_sym_actor = 11,
  anon_sym_boundary = 12,
  anon_sym_control = 13,
  anon_sym_entity = 14,
  anon_sym_database = 15,
  anon_sym_collections = 16,
  anon_sym_queue = 17,
  anon_sym_POUND = 18,
  anon_sym_LBRACK = 19,
  aux_sym_multiline_token1 = 20,
  anon_sym_RBRACK = 21,
  anon_sym_as = 22,
  aux_sym_attr_alias_token1 = 23,
  anon_sym_order = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_token1 = 26,
  anon_sym_BSLASH_DQUOTE = 27,
  anon_sym_BSLASH = 28,
  aux_sym_escape_char_token1 = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_DASH_DASH_GT = 31,
  anon_sym_LT_DASH = 32,
  anon_sym_LT_DASH_DASH = 33,
  anon_sym_COLON = 34,
  aux_sym_sequence_diagram_token1 = 35,
  anon_sym_ATstartjson = 36,
  anon_sym_AT = 37,
  aux_sym_json_token1 = 38,
  anon_sym_ATendjson = 39,
  aux_sym_json_token2 = 40,
  anon_sym_ATstartyaml = 41,
  anon_sym_ATendyaml = 42,
  anon_sym_ATstartebnf = 43,
  anon_sym_ATendebnf = 44,
  anon_sym_ATstartregex = 45,
  anon_sym_ATendregex = 46,
  anon_sym_ATstartditaa = 47,
  anon_sym_ATendditaa = 48,
  anon_sym_ATstartgantt = 49,
  anon_sym_ATendgantt = 50,
  anon_sym_ATstartchronology = 51,
  anon_sym_ATendchronology = 52,
  anon_sym_ATstartmindmap = 53,
  anon_sym_ATendmindmap = 54,
  anon_sym_ATstartwbs = 55,
  anon_sym_ATendwbs = 56,
  anon_sym_ATstartchen = 57,
  anon_sym_ATendchen = 58,
  anon_sym_SQUOTE = 59,
  aux_sym_comment_token1 = 60,
  anon_sym_SLASH_SQUOTE = 61,
  aux_sym_comment_token2 = 62,
  anon_sym_SLASH = 63,
  anon_sym_group = 64,
  aux_sym_group_block_token1 = 65,
  anon_sym_end = 66,
  anon_sym_loop = 67,
  sym_color = 68,
  sym_diagram = 69,
  sym_uml = 70,
  sym_expression = 71,
  sym_attribute = 72,
  sym_multiline = 73,
  sym_attr_alias = 74,
  sym_attr_order = 75,
  sym_string = 76,
  sym_escape_char = 77,
  sym_participant_name = 78,
  sym_sequence_diagram = 79,
  sym_json = 80,
  sym_yaml = 81,
  sym_ebnf = 82,
  sym_regex = 83,
  sym_ditaa = 84,
  sym_gantt = 85,
  sym_chronology = 86,
  sym_mindmap = 87,
  sym_wbs = 88,
  sym_chen = 89,
  sym_comment = 90,
  sym_group_block = 91,
  sym_loop_block = 92,
  aux_sym_uml_repeat1 = 93,
  aux_sym_attribute_repeat1 = 94,
  aux_sym_attribute_repeat2 = 95,
  aux_sym_multiline_repeat1 = 96,
  aux_sym_string_repeat1 = 97,
  aux_sym_json_repeat1 = 98,
  aux_sym_json_repeat2 = 99,
  alias_sym_chen_data = 100,
  alias_sym_chronology_data = 101,
  alias_sym_ditaa_data = 102,
  alias_sym_ebnf_data = 103,
  alias_sym_gantt_data = 104,
  alias_sym_json_data = 105,
  alias_sym_left = 106,
  alias_sym_mindmap_data = 107,
  alias_sym_new_name = 108,
  alias_sym_regex_data = 109,
  alias_sym_right = 110,
  alias_sym_times = 111,
  alias_sym_value = 112,
  alias_sym_wbs_data = 113,
  alias_sym_yaml_data = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
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
  [anon_sym_DASH_GT] = "to_right",
  [anon_sym_DASH_DASH_GT] = "to_right_dotted",
  [anon_sym_LT_DASH] = "to_left",
  [anon_sym_LT_DASH_DASH] = "to_left_dotted",
  [anon_sym_COLON] = ":",
  [aux_sym_sequence_diagram_token1] = "activity",
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
  [anon_sym_SLASH] = "/",
  [anon_sym_group] = "group",
  [aux_sym_group_block_token1] = "label",
  [anon_sym_end] = "end",
  [anon_sym_loop] = "loop",
  [sym_color] = "color",
  [sym_diagram] = "diagram",
  [sym_uml] = "uml",
  [sym_expression] = "expression",
  [sym_attribute] = "attribute",
  [sym_multiline] = "multiline",
  [sym_attr_alias] = "attr_alias",
  [sym_attr_order] = "attr_order",
  [sym_string] = "string",
  [sym_escape_char] = "escape_char",
  [sym_participant_name] = "name",
  [sym_sequence_diagram] = "sequence_diagram",
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_sequence_diagram_token1] = aux_sym_sequence_diagram_token1,
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_group] = anon_sym_group,
  [aux_sym_group_block_token1] = aux_sym_group_block_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_loop] = anon_sym_loop,
  [sym_color] = sym_color,
  [sym_diagram] = sym_diagram,
  [sym_uml] = sym_uml,
  [sym_expression] = sym_expression,
  [sym_attribute] = sym_attribute,
  [sym_multiline] = sym_multiline,
  [sym_attr_alias] = sym_attr_alias,
  [sym_attr_order] = sym_attr_order,
  [sym_string] = sym_string,
  [sym_escape_char] = sym_escape_char,
  [sym_participant_name] = sym_participant_name,
  [sym_sequence_diagram] = sym_sequence_diagram,
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_diagram_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_SLASH] = {
    .visible = true,
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 7,
  [15] = 5,
  [16] = 8,
  [17] = 11,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
  [24] = 21,
  [25] = 22,
  [26] = 19,
  [27] = 2,
  [28] = 6,
  [29] = 29,
  [30] = 10,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 34,
  [39] = 33,
  [40] = 35,
  [41] = 41,
  [42] = 32,
  [43] = 41,
  [44] = 36,
  [45] = 37,
  [46] = 46,
  [47] = 10,
  [48] = 46,
  [49] = 49,
  [50] = 49,
  [51] = 2,
  [52] = 6,
  [53] = 10,
  [54] = 2,
  [55] = 6,
  [56] = 56,
  [57] = 32,
  [58] = 32,
  [59] = 59,
  [60] = 56,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 65,
  [70] = 67,
  [71] = 71,
  [72] = 72,
  [73] = 68,
  [74] = 62,
  [75] = 66,
  [76] = 64,
  [77] = 77,
  [78] = 78,
  [79] = 63,
  [80] = 71,
  [81] = 72,
  [82] = 77,
  [83] = 78,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 84,
  [88] = 86,
  [89] = 84,
  [90] = 86,
  [91] = 86,
  [92] = 84,
  [93] = 86,
  [94] = 84,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 96,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 123,
  [126] = 123,
  [127] = 123,
  [128] = 123,
  [129] = 123,
  [130] = 123,
  [131] = 123,
  [132] = 114,
  [133] = 122,
  [134] = 100,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 102,
  [139] = 123,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 136,
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
  [160] = 160,
  [161] = 141,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 141,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 141,
  [173] = 173,
  [174] = 174,
  [175] = 141,
  [176] = 176,
  [177] = 141,
  [178] = 178,
  [179] = 141,
  [180] = 180,
  [181] = 141,
  [182] = 182,
  [183] = 141,
  [184] = 184,
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
  [200] = 198,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 194,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 205,
  [209] = 206,
  [210] = 203,
  [211] = 195,
  [212] = 212,
  [213] = 6,
  [214] = 205,
  [215] = 10,
  [216] = 199,
  [217] = 205,
  [218] = 218,
  [219] = 219,
  [220] = 219,
  [221] = 196,
  [222] = 222,
  [223] = 223,
  [224] = 224,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(586);
      ADVANCE_MAP(
        '"', 695,
        '#', 606,
        '\'', 757,
        '-', 39,
        '/', 770,
        ':', 709,
        '<', 40,
        '@', 714,
        '[', 607,
        '\\', 701,
        ']', 611,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(703);
      if (lookahead != 0) ADVANCE(702);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(762);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(765);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 695,
        '#', 606,
        '\'', 757,
        '-', 39,
        '/', 33,
        '<', 40,
        '@', 87,
        '[', 607,
        'a', 621,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 649,
        'g', 672,
        'l', 659,
        'o', 665,
        'p', 616,
        'q', 685,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 695,
        '#', 606,
        '\'', 757,
        '/', 33,
        '[', 607,
        'a', 621,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 646,
        'g', 672,
        'l', 659,
        'o', 665,
        'p', 616,
        'q', 685,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 695,
        '\'', 757,
        '/', 33,
        ':', 709,
        '@', 86,
        'a', 621,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 649,
        'g', 672,
        'l', 659,
        'p', 616,
        'q', 685,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 695,
        '\'', 757,
        '/', 33,
        ':', 709,
        '@', 86,
        'a', 622,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 649,
        'g', 672,
        'l', 659,
        'p', 616,
        'q', 685,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 695,
        '\'', 757,
        '/', 33,
        ':', 709,
        'a', 621,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 646,
        'g', 672,
        'l', 659,
        'p', 616,
        'q', 685,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 695,
        '\'', 757,
        '/', 33,
        ':', 709,
        'a', 622,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 646,
        'g', 672,
        'l', 659,
        'p', 616,
        'q', 685,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 695,
        '\'', 757,
        '/', 33,
        '@', 86,
        'a', 622,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 649,
        'g', 672,
        'i', 650,
        'l', 659,
        'p', 616,
        'q', 685,
        'r', 633,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 695,
        '\'', 757,
        '/', 33,
        '@', 86,
        'a', 622,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 649,
        'g', 672,
        'l', 659,
        'p', 616,
        'q', 685,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 695,
        '\'', 757,
        '/', 33,
        'a', 622,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 646,
        'g', 672,
        'i', 650,
        'l', 659,
        'p', 616,
        'q', 685,
        'r', 633,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 695,
        '\'', 757,
        '/', 33,
        'a', 622,
        'b', 655,
        'c', 653,
        'd', 615,
        'e', 646,
        'g', 672,
        'l', 659,
        'p', 616,
        'q', 685,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(695);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(695);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(698);
      if (lookahead == '\\') ADVANCE(701);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0) ADVANCE(696);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\'', 757,
        '/', 33,
        'A', 384,
        'a', 384,
        'B', 272,
        'b', 272,
        'C', 177,
        'c', 177,
        'D', 178,
        'd', 178,
        'F', 354,
        'f', 354,
        'G', 196,
        'g', 196,
        'H', 443,
        'h', 443,
        'I', 423,
        'i', 423,
        'K', 338,
        'k', 338,
        'L', 179,
        'l', 179,
        'M', 180,
        'm', 180,
        'N', 181,
        'n', 181,
        'O', 381,
        'o', 381,
        'P', 182,
        'p', 182,
        'R', 273,
        'r', 273,
        'S', 183,
        's', 183,
        'T', 190,
        't', 190,
        'V', 359,
        'v', 359,
        'W', 336,
        'w', 336,
        'Y', 284,
        'y', 284,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(610);
      if (lookahead == '\\') ADVANCE(700);
      if (lookahead == ']') ADVANCE(611);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(609);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(717);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(718);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(719);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(720);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(721);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(732);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(733);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(723);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(734);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(724);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(735);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(764);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(761);
      if (lookahead == '/') ADVANCE(711);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(712);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(759);
      if (lookahead == '/') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(769);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(766);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead == '/') ADVANCE(772);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (lookahead != 0) ADVANCE(773);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '>') ADVANCE(705);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(707);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(706);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        'c', 95,
        'd', 99,
        'e', 55,
        'g', 50,
        'j', 156,
        'm', 100,
        'r', 79,
        'w', 56,
        'y', 44,
      );
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 62:
      ADVANCE_MAP(
        'c', 98,
        'd', 101,
        'e', 58,
        'g', 53,
        'j', 160,
        'm', 102,
        'r', 85,
        'u', 113,
        'w', 57,
        'y', 54,
      );
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(742);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(741);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == 'j') ADVANCE(156);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(755);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(752);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(751);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(597);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(753);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 171:
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 172:
      if (lookahead == 'x') ADVANCE(744);
      END_STATE();
    case 173:
      if (lookahead == 'x') ADVANCE(743);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(750);
      END_STATE();
    case 175:
      if (lookahead == 'y') ADVANCE(749);
      END_STATE();
    case 176:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 177:
      ADVANCE_MAP(
        'A', 254,
        'a', 254,
        'H', 205,
        'h', 205,
        'O', 482,
        'o', 482,
        'R', 358,
        'r', 358,
        'Y', 189,
        'y', 189,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(582);
      END_STATE();
    case 178:
      ADVANCE_MAP(
        'A', 483,
        'a', 483,
        'E', 274,
        'e', 274,
        'I', 412,
        'i', 412,
        'O', 269,
        'o', 269,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(582);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 180:
      ADVANCE_MAP(
        'A', 333,
        'a', 333,
        'E', 261,
        'e', 261,
        'I', 259,
        'i', 259,
        'O', 243,
        'o', 243,
      );
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 182:
      ADVANCE_MAP(
        'A', 393,
        'a', 393,
        'E', 214,
        'e', 214,
        'I', 424,
        'i', 424,
        'L', 547,
        'l', 547,
        'O', 566,
        'o', 566,
        'U', 490,
        'u', 490,
      );
      END_STATE();
    case 183:
      ADVANCE_MAP(
        'A', 258,
        'a', 258,
        'E', 186,
        'e', 186,
        'I', 293,
        'i', 293,
        'K', 572,
        'k', 572,
        'L', 197,
        'l', 197,
        'N', 448,
        'n', 448,
        'P', 496,
        'p', 496,
        'T', 309,
        't', 309,
      );
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(783);
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(776);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 190:
      ADVANCE_MAP(
        'A', 421,
        'a', 421,
        'E', 200,
        'e', 200,
        'H', 369,
        'h', 369,
        'O', 416,
        'o', 416,
        'R', 218,
        'r', 218,
        'U', 508,
        'u', 508,
      );
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 192:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 193:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 194:
      ADVANCE_MAP(
        'A', 480,
        'a', 480,
        'B', 388,
        'b', 388,
        'O', 512,
        'o', 512,
        'P', 546,
        'p', 546,
        'S', 307,
        's', 307,
        'T', 548,
        't', 548,
        'V', 374,
        'v', 374,
      );
      END_STATE();
    case 195:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 196:
      ADVANCE_MAP(
        'A', 356,
        'a', 356,
        'H', 445,
        'h', 445,
        'O', 385,
        'o', 385,
        'R', 191,
        'r', 191,
      );
      END_STATE();
    case 197:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 198:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 199:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 200:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 201:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 206:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 207:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 208:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 209:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 211:
      ADVANCE_MAP(
        'A', 401,
        'a', 401,
        'E', 215,
        'e', 215,
        'K', 572,
        'k', 572,
        'L', 224,
        'l', 224,
        'T', 309,
        't', 309,
      );
      END_STATE();
    case 212:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 213:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(444);
      END_STATE();
    case 214:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 215:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 216:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 217:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 218:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 219:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 220:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 221:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 222:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 223:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 224:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 225:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 226:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 227:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 228:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 229:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(776);
      END_STATE();
    case 230:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(388);
      END_STATE();
    case 231:
      ADVANCE_MAP(
        'B', 388,
        'b', 388,
        'C', 465,
        'c', 465,
        'G', 470,
        'g', 470,
        'P', 349,
        'p', 349,
        'S', 211,
        's', 211,
        'Y', 318,
        'y', 318,
      );
      END_STATE();
    case 232:
      ADVANCE_MAP(
        'B', 388,
        'b', 388,
        'C', 573,
        'c', 573,
        'G', 467,
        'g', 467,
        'K', 338,
        'k', 338,
        'M', 223,
        'm', 223,
        'O', 396,
        'o', 396,
        'R', 292,
        'r', 292,
        'S', 212,
        's', 212,
        'T', 548,
        't', 548,
        'V', 359,
        'v', 359,
      );
      END_STATE();
    case 233:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(388);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(488);
      END_STATE();
    case 234:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(316);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(776);
      END_STATE();
    case 235:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(509);
      END_STATE();
    case 236:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(487);
      END_STATE();
    case 237:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(462);
      END_STATE();
    case 238:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(398);
      END_STATE();
    case 239:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 240:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 241:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(377);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 242:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 243:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 244:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 245:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 246:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 247:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 248:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 249:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 250:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 251:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 252:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 253:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 254:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      END_STATE();
    case 255:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(776);
      END_STATE();
    case 256:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(781);
      END_STATE();
    case 257:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 258:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 259:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(430);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      END_STATE();
    case 260:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 261:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(370);
      END_STATE();
    case 262:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      END_STATE();
    case 263:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 264:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 265:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 266:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 267:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 268:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(577);
      END_STATE();
    case 269:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 270:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 271:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 272:
      ADVANCE_MAP(
        'E', 350,
        'e', 350,
        'I', 513,
        'i', 513,
        'L', 184,
        'l', 184,
        'R', 447,
        'r', 447,
        'U', 491,
        'u', 491,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(582);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(776);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(776);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(496);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 319:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(776);
      END_STATE();
    case 320:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      END_STATE();
    case 321:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(446);
      END_STATE();
    case 323:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(406);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      END_STATE();
    case 324:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(466);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(374);
      END_STATE();
    case 325:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(341);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(278);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 326:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(488);
      END_STATE();
    case 327:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 328:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 329:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 330:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 331:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(343);
      END_STATE();
    case 332:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 333:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(303);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 334:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(504);
      END_STATE();
    case 335:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      END_STATE();
    case 336:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 337:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(776);
      END_STATE();
    case 338:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 339:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(472);
      END_STATE();
    case 340:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(522);
      END_STATE();
    case 341:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(527);
      END_STATE();
    case 342:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(526);
      END_STATE();
    case 344:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(372);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(368);
      END_STATE();
    case 346:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      END_STATE();
    case 347:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(295);
      END_STATE();
    case 348:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(776);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 354:
      ADVANCE_MAP(
        'I', 492,
        'i', 492,
        'L', 456,
        'l', 456,
        'O', 493,
        'o', 493,
        'U', 239,
        'u', 239,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(582);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 375:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(449);
      END_STATE();
    case 376:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(572);
      END_STATE();
    case 377:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(776);
      END_STATE();
    case 378:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(232);
      END_STATE();
    case 379:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(351);
      END_STATE();
    case 380:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(275);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(776);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 384:
      ADVANCE_MAP(
        'L', 355,
        'l', 355,
        'N', 531,
        'n', 531,
        'Q', 550,
        'q', 550,
        'Z', 557,
        'z', 557,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(582);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 410:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(776);
      END_STATE();
    case 411:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 412:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 413:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 414:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(460);
      END_STATE();
    case 415:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(446);
      END_STATE();
    case 416:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 417:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(450);
      END_STATE();
    case 418:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 419:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(463);
      END_STATE();
    case 420:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 421:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 422:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(458);
      END_STATE();
    case 424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 425:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 426:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      END_STATE();
    case 427:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      END_STATE();
    case 428:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 429:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 430:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 431:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 432:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 433:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 435:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 436:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 437:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 438:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 439:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 440:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 441:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 442:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(446);
      END_STATE();
    case 458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 470:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 471:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(776);
      END_STATE();
    case 472:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(545);
      END_STATE();
    case 473:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(349);
      END_STATE();
    case 474:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(349);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(376);
      END_STATE();
    case 475:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 476:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 477:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(546);
      END_STATE();
    case 478:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(554);
      END_STATE();
    case 479:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(553);
      END_STATE();
    case 480:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(556);
      END_STATE();
    case 481:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(555);
      END_STATE();
    case 482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      END_STATE();
    case 484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 487:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 488:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 489:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 490:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 491:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 492:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 494:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 495:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 496:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 497:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 498:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 499:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 500:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 501:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 502:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 503:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 504:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 506:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 510:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 511:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 512:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 513:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      END_STATE();
    case 514:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(237);
      END_STATE();
    case 515:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(475);
      END_STATE();
    case 516:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      END_STATE();
    case 517:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(540);
      END_STATE();
    case 518:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(446);
      END_STATE();
    case 519:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 520:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      END_STATE();
    case 521:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      END_STATE();
    case 522:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      END_STATE();
    case 523:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 524:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 525:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      END_STATE();
    case 526:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 527:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 528:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(777);
      END_STATE();
    case 529:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      END_STATE();
    case 530:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      END_STATE();
    case 531:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 532:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 533:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(444);
      END_STATE();
    case 534:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 537:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 539:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      END_STATE();
    case 540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 541:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      END_STATE();
    case 542:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(506);
      END_STATE();
    case 543:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
      END_STATE();
    case 544:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(776);
      END_STATE();
    case 545:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 546:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(490);
      END_STATE();
    case 547:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 548:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(508);
      END_STATE();
    case 549:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(411);
      END_STATE();
    case 550:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 551:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 552:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(519);
      END_STATE();
    case 553:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 554:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 555:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 556:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 557:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 558:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(188);
      END_STATE();
    case 559:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(299);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(438);
      END_STATE();
    case 560:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(280);
      END_STATE();
    case 561:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(305);
      END_STATE();
    case 562:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(311);
      END_STATE();
    case 563:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(776);
      END_STATE();
    case 564:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(782);
      END_STATE();
    case 565:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(421);
      END_STATE();
    case 566:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(264);
      END_STATE();
    case 567:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(302);
      END_STATE();
    case 568:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(344);
      END_STATE();
    case 569:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(461);
      END_STATE();
    case 570:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(346);
      END_STATE();
    case 571:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(776);
      END_STATE();
    case 572:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 573:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 574:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(569);
      END_STATE();
    case 575:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(498);
      END_STATE();
    case 576:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 577:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 578:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(266);
      END_STATE();
    case 579:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(318);
      END_STATE();
    case 580:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 581:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 582:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      END_STATE();
    case 583:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 584:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(582);
      END_STATE();
    case 585:
      if (eof) ADVANCE(586);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_resume);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(610);
      if (lookahead == '\\') ADVANCE(700);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(608);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(764);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(682);
      if (lookahead == 's') ADVANCE(612);
      if (lookahead == 'u') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 't') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'n') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(698);
      if (lookahead == '\\') ADVANCE(701);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(696);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(764);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(699);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(704);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(703);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(702);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(764);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(761);
      if (lookahead == '/') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(710);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(712);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(717);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(718);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(719);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(720);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(721);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(732);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(733);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(723);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(734);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '@') ADVANCE(724);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(735);
      if (lookahead != 0) ADVANCE(725);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(764);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_json_token2);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(36);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(773);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(712);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(36);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(773);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(712);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(36);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(764);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead == '\'') ADVANCE(767);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(773);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(392);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(505);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(504);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(359);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(318);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(583);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 31},
  [113] = {.lex_state = 32},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 30},
  [130] = {.lex_state = 31},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 26},
  [140] = {.lex_state = 585},
  [141] = {.lex_state = 26},
  [142] = {.lex_state = 585},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 585},
  [145] = {.lex_state = 22},
  [146] = {.lex_state = 585},
  [147] = {.lex_state = 585},
  [148] = {.lex_state = 585},
  [149] = {.lex_state = 22},
  [150] = {.lex_state = 585},
  [151] = {.lex_state = 585},
  [152] = {.lex_state = 585},
  [153] = {.lex_state = 585},
  [154] = {.lex_state = 585},
  [155] = {.lex_state = 585},
  [156] = {.lex_state = 585},
  [157] = {.lex_state = 585},
  [158] = {.lex_state = 585},
  [159] = {.lex_state = 585},
  [160] = {.lex_state = 585},
  [161] = {.lex_state = 27},
  [162] = {.lex_state = 585},
  [163] = {.lex_state = 585},
  [164] = {.lex_state = 585},
  [165] = {.lex_state = 585},
  [166] = {.lex_state = 585},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 585},
  [169] = {.lex_state = 585},
  [170] = {.lex_state = 585},
  [171] = {.lex_state = 585},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 585},
  [174] = {.lex_state = 585},
  [175] = {.lex_state = 28},
  [176] = {.lex_state = 585},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 585},
  [179] = {.lex_state = 30},
  [180] = {.lex_state = 585},
  [181] = {.lex_state = 31},
  [182] = {.lex_state = 585},
  [183] = {.lex_state = 32},
  [184] = {.lex_state = 585},
  [185] = {.lex_state = 585},
  [186] = {.lex_state = 585},
  [187] = {.lex_state = 585},
  [188] = {.lex_state = 585},
  [189] = {.lex_state = 585},
  [190] = {.lex_state = 585},
  [191] = {.lex_state = 585},
  [192] = {.lex_state = 585},
  [193] = {.lex_state = 585},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 34},
  [196] = {.lex_state = 20},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 34},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 17},
  [206] = {.lex_state = 20},
  [207] = {.lex_state = 35},
  [208] = {.lex_state = 17},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 34},
  [211] = {.lex_state = 34},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 21},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 38},
  [220] = {.lex_state = 38},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 0},
  [223] = {(TSStateId)(-1)},
  [224] = {(TSStateId)(-1)},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_diagram] = STATE(218),
    [sym_uml] = STATE(222),
    [sym_json] = STATE(222),
    [sym_yaml] = STATE(222),
    [sym_ebnf] = STATE(222),
    [sym_regex] = STATE(222),
    [sym_ditaa] = STATE(222),
    [sym_gantt] = STATE(222),
    [sym_chronology] = STATE(222),
    [sym_mindmap] = STATE(222),
    [sym_wbs] = STATE(222),
    [sym_chen] = STATE(222),
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
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(2), 1,
      sym_comment,
    ACTIONS(29), 8,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(31), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
      anon_sym_LT_DASH,
      anon_sym_group,
      anon_sym_loop,
  [37] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_ATenduml,
    ACTIONS(35), 1,
      anon_sym_autonumber,
    ACTIONS(37), 1,
      anon_sym_autonumberstop,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_string,
    STATE(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(66), 1,
      sym_expression,
    STATE(102), 1,
      sym_participant_name,
    STATE(82), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(39), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [96] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_autonumber,
    ACTIONS(37), 1,
      anon_sym_autonumberstop,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(47), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_ATenduml,
    STATE(2), 1,
      sym_string,
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(66), 1,
      sym_expression,
    STATE(102), 1,
      sym_participant_name,
    STATE(82), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(39), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [155] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_as,
    ACTIONS(61), 1,
      anon_sym_order,
    STATE(5), 1,
      sym_comment,
    STATE(19), 1,
      sym_multiline,
    STATE(20), 1,
      aux_sym_attribute_repeat2,
    STATE(39), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(51), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(53), 12,
      anon_sym_autonumber,
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
  [206] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(6), 1,
      sym_comment,
    ACTIONS(63), 8,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(65), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
      anon_sym_LT_DASH,
      anon_sym_group,
      anon_sym_loop,
  [243] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(75), 1,
      anon_sym_end,
    ACTIONS(77), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_string,
    STATE(7), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [302] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(79), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_string,
    STATE(8), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [361] = 15,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_ATenduml,
    ACTIONS(83), 1,
      anon_sym_autonumber,
    ACTIONS(86), 1,
      anon_sym_autonumberstop,
    ACTIONS(92), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_group,
    ACTIONS(101), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_string,
    STATE(66), 1,
      sym_expression,
    STATE(102), 1,
      sym_participant_name,
    STATE(9), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(82), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(89), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [418] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(10), 1,
      sym_comment,
    ACTIONS(104), 8,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(106), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
      anon_sym_LT_DASH,
      anon_sym_group,
      anon_sym_loop,
  [455] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(108), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_string,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [514] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(110), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_string,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [573] = 15,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(92), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_autonumber,
    ACTIONS(115), 1,
      anon_sym_autonumberstop,
    ACTIONS(121), 1,
      anon_sym_group,
    ACTIONS(124), 1,
      anon_sym_end,
    ACTIONS(126), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_string,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(13), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(118), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [630] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_string,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [689] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_as,
    ACTIONS(137), 1,
      anon_sym_order,
    STATE(15), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_attribute_repeat2,
    STATE(26), 1,
      sym_multiline,
    ACTIONS(51), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(53), 13,
      anon_sym_autonumber,
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
  [740] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_string,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_uml_repeat1,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [799] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [858] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(143), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(75), 1,
      sym_expression,
    STATE(138), 1,
      sym_participant_name,
    STATE(77), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [917] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_as,
    ACTIONS(61), 1,
      anon_sym_order,
    STATE(19), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_attribute_repeat2,
    STATE(39), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(145), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(147), 12,
      anon_sym_autonumber,
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
  [962] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_as,
    ACTIONS(61), 1,
      anon_sym_order,
    STATE(20), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_attribute_repeat2,
    STATE(39), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(145), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(147), 12,
      anon_sym_autonumber,
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
  [1007] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_as,
    ACTIONS(61), 1,
      anon_sym_order,
    STATE(21), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_attribute_repeat2,
    STATE(39), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(149), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(151), 12,
      anon_sym_autonumber,
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
  [1052] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_as,
    ACTIONS(163), 1,
      anon_sym_order,
    STATE(22), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(39), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(153), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(155), 12,
      anon_sym_autonumber,
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
  [1095] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_as,
    ACTIONS(137), 1,
      anon_sym_order,
    STATE(23), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(145), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(147), 13,
      anon_sym_autonumber,
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
  [1140] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_as,
    ACTIONS(137), 1,
      anon_sym_order,
    STATE(24), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(149), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(151), 13,
      anon_sym_autonumber,
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
  [1185] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_as,
    ACTIONS(172), 1,
      anon_sym_order,
    ACTIONS(153), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(25), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(33), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(155), 13,
      anon_sym_autonumber,
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
  [1228] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_as,
    ACTIONS(137), 1,
      anon_sym_order,
    STATE(24), 1,
      aux_sym_attribute_repeat2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(147), 13,
      anon_sym_autonumber,
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
  [1273] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(27), 1,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(31), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1306] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(28), 1,
      sym_comment,
    ACTIONS(63), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(65), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1339] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(181), 1,
      aux_sym_attribute_token3,
    STATE(29), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(179), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(175), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(177), 12,
      anon_sym_autonumber,
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
  [1378] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(106), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1411] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(185), 1,
      aux_sym_attribute_token3,
    STATE(31), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(175), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(183), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(177), 13,
      anon_sym_autonumber,
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
  [1450] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(187), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(189), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1482] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(33), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(191), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1514] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(195), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(197), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1546] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_as,
    ACTIONS(205), 1,
      anon_sym_COLON,
    STATE(35), 1,
      sym_comment,
    STATE(56), 1,
      sym_attr_alias,
    ACTIONS(201), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(199), 13,
      anon_sym_autonumber,
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
  [1584] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(155), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1616] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(207), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
    STATE(38), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(197), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1680] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(191), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1712] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_as,
    ACTIONS(213), 1,
      anon_sym_COLON,
    STATE(40), 1,
      sym_comment,
    STATE(60), 1,
      sym_attr_alias,
    ACTIONS(201), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(199), 12,
      anon_sym_autonumber,
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
  [1750] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(215), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1782] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(189), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1814] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(215), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
    STATE(44), 1,
      sym_comment,
    ACTIONS(153), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(155), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1878] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(207), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1910] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(181), 1,
      aux_sym_attribute_token3,
    STATE(46), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(51), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(53), 12,
      anon_sym_autonumber,
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
  [1945] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(106), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1976] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(185), 1,
      aux_sym_attribute_token3,
    STATE(48), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(51), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(53), 13,
      anon_sym_autonumber,
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
  [2011] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_attribute_token3,
    ACTIONS(224), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(49), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(219), 13,
      anon_sym_autonumber,
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
  [2044] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(226), 1,
      aux_sym_attribute_token3,
    STATE(50), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(224), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(219), 12,
      anon_sym_autonumber,
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
  [2077] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(31), 13,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [2108] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(63), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(65), 13,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [2139] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(106), 13,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [2170] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(31), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [2201] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(65), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [2232] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(229), 13,
      anon_sym_autonumber,
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
  [2264] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(189), 13,
      anon_sym_autonumber,
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
  [2294] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(187), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(189), 12,
      anon_sym_autonumber,
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
  [2324] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 13,
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
  [2354] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(229), 12,
      anon_sym_autonumber,
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
  [2386] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 14,
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
  [2416] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(147), 13,
      anon_sym_autonumber,
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
  [2445] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(177), 13,
      anon_sym_autonumber,
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
  [2474] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(241), 13,
      anon_sym_autonumber,
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
  [2503] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 13,
      anon_sym_autonumber,
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
  [2532] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(251), 12,
      anon_sym_autonumber,
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
  [2561] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(253), 13,
      anon_sym_autonumber,
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
  [2590] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(257), 13,
      anon_sym_autonumber,
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
  [2619] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 12,
      anon_sym_autonumber,
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
  [2648] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(253), 12,
      anon_sym_autonumber,
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
  [2677] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(261), 13,
      anon_sym_autonumber,
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
  [2706] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(265), 13,
      anon_sym_autonumber,
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
  [2735] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(257), 12,
      anon_sym_autonumber,
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
  [2764] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(147), 12,
      anon_sym_autonumber,
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
  [2793] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(251), 13,
      anon_sym_autonumber,
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
  [2822] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(241), 12,
      anon_sym_autonumber,
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
  [2851] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(269), 13,
      anon_sym_autonumber,
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
  [2880] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(151), 12,
      anon_sym_autonumber,
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
  [2909] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(177), 12,
      anon_sym_autonumber,
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
  [2938] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(261), 12,
      anon_sym_autonumber,
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
  [2967] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(265), 12,
      anon_sym_autonumber,
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
  [2996] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(269), 12,
      anon_sym_autonumber,
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
  [3025] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(151), 13,
      anon_sym_autonumber,
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
  [3054] = 8,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_string_repeat1,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3080] = 7,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_BSLASH,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(285), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(85), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3104] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_string_repeat1,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3130] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      aux_sym_string_repeat1,
    STATE(87), 1,
      sym_comment,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3156] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat1,
    STATE(88), 1,
      sym_comment,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3182] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      aux_sym_string_repeat1,
    STATE(89), 1,
      sym_comment,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3208] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_string_repeat1,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3234] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_string_repeat1,
    STATE(91), 1,
      sym_comment,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3260] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      aux_sym_string_repeat1,
    STATE(92), 1,
      sym_comment,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3286] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_string_repeat1,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3312] = 8,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      aux_sym_string_repeat1,
    STATE(94), 1,
      sym_comment,
    STATE(120), 1,
      sym_escape_char,
    ACTIONS(275), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3338] = 7,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(309), 1,
      aux_sym_multiline_token1,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    ACTIONS(314), 1,
      anon_sym_BSLASH,
    STATE(145), 1,
      sym_escape_char,
    STATE(95), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [3361] = 8,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(317), 1,
      aux_sym_multiline_token1,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    STATE(95), 1,
      aux_sym_multiline_repeat1,
    STATE(96), 1,
      sym_comment,
    STATE(145), 1,
      sym_escape_char,
  [3386] = 8,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(317), 1,
      aux_sym_multiline_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_multiline_repeat1,
    STATE(145), 1,
      sym_escape_char,
  [3411] = 8,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(317), 1,
      aux_sym_multiline_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_multiline_repeat1,
    STATE(98), 1,
      sym_comment,
    STATE(145), 1,
      sym_escape_char,
  [3436] = 8,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(317), 1,
      aux_sym_multiline_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_multiline_repeat1,
    STATE(99), 1,
      sym_comment,
    STATE(145), 1,
      sym_escape_char,
  [3461] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(329), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_participant_name,
    STATE(27), 1,
      sym_string,
    STATE(100), 1,
      sym_comment,
  [3483] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_ATendregex,
    STATE(101), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_json_repeat1,
    ACTIONS(333), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3503] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(339), 1,
      anon_sym_LT_DASH,
    STATE(102), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [3521] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(343), 1,
      anon_sym_ATendditaa,
    STATE(103), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_json_repeat1,
    ACTIONS(341), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3541] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(347), 1,
      anon_sym_ATendjson,
    STATE(104), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_json_repeat1,
    ACTIONS(345), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3561] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_ATendyaml,
    STATE(105), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_json_repeat1,
    ACTIONS(349), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3581] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_ATendebnf,
    STATE(106), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_json_repeat1,
    ACTIONS(353), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3601] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_ATendregex,
    STATE(107), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym_json_repeat1,
    ACTIONS(333), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3621] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(359), 1,
      anon_sym_ATendditaa,
    STATE(108), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_json_repeat1,
    ACTIONS(341), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3641] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_ATendgantt,
    STATE(109), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym_json_repeat1,
    ACTIONS(361), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3661] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(367), 1,
      anon_sym_ATendchronology,
    STATE(110), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_json_repeat1,
    ACTIONS(365), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3681] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_ATendmindmap,
    STATE(111), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym_json_repeat1,
    ACTIONS(369), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3701] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(375), 1,
      anon_sym_ATendwbs,
    STATE(112), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_json_repeat1,
    ACTIONS(373), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3721] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(379), 1,
      anon_sym_ATendchen,
    STATE(113), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym_json_repeat1,
    ACTIONS(377), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3741] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(381), 1,
      aux_sym_attribute_token1,
    ACTIONS(383), 1,
      aux_sym_attribute_token2,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_comment,
    STATE(200), 1,
      sym_string,
  [3763] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_ATendgantt,
    STATE(109), 1,
      aux_sym_json_repeat1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3783] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(389), 1,
      anon_sym_ATendebnf,
    STATE(106), 1,
      aux_sym_json_repeat1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3803] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(391), 1,
      anon_sym_ATendchronology,
    STATE(110), 1,
      aux_sym_json_repeat1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3823] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(393), 1,
      anon_sym_ATendmindmap,
    STATE(111), 1,
      aux_sym_json_repeat1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3843] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(395), 1,
      anon_sym_ATendwbs,
    STATE(112), 1,
      aux_sym_json_repeat1,
    STATE(119), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3863] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
      sym_comment,
    ACTIONS(397), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [3879] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(399), 1,
      anon_sym_ATendchen,
    STATE(113), 1,
      aux_sym_json_repeat1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3899] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(401), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_participant_name,
    STATE(51), 1,
      sym_string,
    STATE(122), 1,
      sym_comment,
  [3921] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendjson,
    ACTIONS(405), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(123), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3939] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendebnf,
    ACTIONS(410), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(124), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3957] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendregex,
    ACTIONS(413), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(125), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3975] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendditaa,
    ACTIONS(416), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(126), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3993] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendgantt,
    ACTIONS(419), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(127), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4011] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendchronology,
    ACTIONS(422), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(128), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4029] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendmindmap,
    ACTIONS(425), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(129), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4047] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendwbs,
    ACTIONS(428), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(130), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4065] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendchen,
    ACTIONS(431), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(131), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4083] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      aux_sym_attribute_token1,
    ACTIONS(436), 1,
      aux_sym_attribute_token2,
    STATE(132), 1,
      sym_comment,
    STATE(198), 1,
      sym_string,
  [4105] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(438), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_participant_name,
    STATE(54), 1,
      sym_string,
    STATE(133), 1,
      sym_comment,
  [4127] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      aux_sym_attr_alias_token1,
    STATE(2), 1,
      sym_string,
    STATE(5), 1,
      sym_participant_name,
    STATE(134), 1,
      sym_comment,
  [4149] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(444), 1,
      anon_sym_ATendjson,
    STATE(104), 1,
      aux_sym_json_repeat1,
    STATE(135), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4169] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [4185] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(448), 1,
      anon_sym_ATendyaml,
    STATE(105), 1,
      aux_sym_json_repeat1,
    STATE(137), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4205] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(452), 1,
      anon_sym_LT_DASH,
    STATE(138), 1,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [4223] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_ATendyaml,
    ACTIONS(454), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(139), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4241] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    STATE(140), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_json_repeat2,
  [4260] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [4275] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_json_repeat2,
  [4294] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [4309] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    STATE(144), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_json_repeat2,
  [4328] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(467), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [4343] = 5,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 1,
      aux_sym_json_token2,
    STATE(146), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [4360] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_json_repeat2,
  [4379] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(148), 1,
      sym_comment,
  [4398] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
      sym_comment,
    ACTIONS(446), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [4413] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [4432] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(151), 1,
      sym_comment,
  [4451] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      aux_sym_json_repeat2,
    STATE(152), 1,
      sym_comment,
  [4470] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_json_repeat2,
  [4489] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(154), 1,
      sym_comment,
  [4508] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      aux_sym_json_repeat2,
    STATE(155), 1,
      sym_comment,
  [4527] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(156), 1,
      sym_comment,
  [4546] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_json_repeat2,
  [4565] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(158), 1,
      sym_comment,
  [4584] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(159), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym_json_repeat2,
  [4603] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(160), 1,
      sym_comment,
  [4622] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [4637] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    STATE(162), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_json_repeat2,
  [4656] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(163), 1,
      sym_comment,
  [4675] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(164), 1,
      sym_comment,
  [4694] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
    STATE(165), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_json_repeat2,
  [4713] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(166), 1,
      sym_comment,
  [4732] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [4747] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym_comment,
    STATE(188), 1,
      aux_sym_json_repeat2,
  [4766] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    STATE(160), 1,
      aux_sym_json_repeat2,
    STATE(169), 1,
      sym_comment,
  [4785] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(170), 1,
      sym_comment,
  [4804] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym_comment,
    STATE(190), 1,
      aux_sym_json_repeat2,
  [4823] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [4838] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(173), 1,
      sym_comment,
  [4857] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(174), 1,
      sym_comment,
  [4876] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(175), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [4891] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(176), 1,
      sym_comment,
  [4910] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [4925] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    STATE(164), 1,
      aux_sym_json_repeat2,
    STATE(178), 1,
      sym_comment,
  [4944] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(179), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [4959] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(180), 1,
      sym_comment,
  [4978] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(181), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [4993] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      aux_sym_json_repeat2,
    STATE(182), 1,
      sym_comment,
  [5012] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(183), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [5027] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(184), 1,
      sym_comment,
  [5046] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      aux_sym_json_repeat2,
    STATE(185), 1,
      sym_comment,
  [5065] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(186), 1,
      sym_comment,
  [5084] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    STATE(170), 1,
      aux_sym_json_repeat2,
    STATE(187), 1,
      sym_comment,
  [5103] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(188), 1,
      sym_comment,
  [5122] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      aux_sym_json_repeat2,
    STATE(189), 1,
      sym_comment,
  [5141] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(190), 1,
      sym_comment,
  [5160] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      aux_sym_json_repeat2,
    STATE(191), 1,
      sym_comment,
  [5179] = 6,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_json_token2,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      aux_sym_json_repeat2,
    STATE(192), 1,
      sym_comment,
  [5198] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(193), 1,
      sym_comment,
    ACTIONS(548), 2,
      ts_builtin_sym_end,
      aux_sym_json_token2,
  [5212] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(550), 1,
      sym_color,
    STATE(194), 1,
      sym_comment,
  [5225] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(552), 1,
      aux_sym_sequence_diagram_token1,
    STATE(195), 1,
      sym_comment,
  [5238] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(554), 1,
      aux_sym_attribute_token3,
    STATE(196), 1,
      sym_comment,
  [5251] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
    STATE(197), 1,
      sym_comment,
  [5264] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(558), 1,
      aux_sym_attribute_token2,
    STATE(198), 1,
      sym_comment,
  [5277] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(560), 1,
      aux_sym_escape_char_token1,
    STATE(199), 1,
      sym_comment,
  [5290] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(562), 1,
      aux_sym_attribute_token2,
    STATE(200), 1,
      sym_comment,
  [5303] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(564), 1,
      anon_sym_SLASH,
    STATE(201), 1,
      sym_comment,
  [5316] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym_comment,
  [5329] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(568), 1,
      aux_sym_sequence_diagram_token1,
    STATE(203), 1,
      sym_comment,
  [5342] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(570), 1,
      sym_color,
    STATE(204), 1,
      sym_comment,
  [5355] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_attr_alias_token1,
    STATE(205), 1,
      sym_comment,
  [5368] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(574), 1,
      aux_sym_attribute_token3,
    STATE(206), 1,
      sym_comment,
  [5381] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(576), 1,
      aux_sym_comment_token2,
    STATE(207), 1,
      sym_comment,
  [5394] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      aux_sym_attr_alias_token1,
    STATE(208), 1,
      sym_comment,
  [5407] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(580), 1,
      aux_sym_attribute_token3,
    STATE(209), 1,
      sym_comment,
  [5420] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(582), 1,
      aux_sym_sequence_diagram_token1,
    STATE(210), 1,
      sym_comment,
  [5433] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(584), 1,
      aux_sym_sequence_diagram_token1,
    STATE(211), 1,
      sym_comment,
  [5446] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(586), 1,
      aux_sym_comment_token1,
    STATE(212), 1,
      sym_comment,
  [5459] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(63), 1,
      aux_sym_attribute_token2,
    STATE(213), 1,
      sym_comment,
  [5472] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(588), 1,
      aux_sym_attr_alias_token1,
    STATE(214), 1,
      sym_comment,
  [5485] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(104), 1,
      aux_sym_attribute_token2,
    STATE(215), 1,
      sym_comment,
  [5498] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_escape_char_token1,
    STATE(216), 1,
      sym_comment,
  [5511] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(592), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_comment,
  [5524] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    STATE(218), 1,
      sym_comment,
  [5537] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(596), 1,
      aux_sym_group_block_token1,
    STATE(219), 1,
      sym_comment,
  [5550] = 4,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(598), 1,
      aux_sym_group_block_token1,
    STATE(220), 1,
      sym_comment,
  [5563] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(600), 1,
      aux_sym_attribute_token3,
    STATE(221), 1,
      sym_comment,
  [5576] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    STATE(222), 1,
      sym_comment,
  [5589] = 1,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
  [5593] = 1,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 302,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 418,
  [SMALL_STATE(11)] = 455,
  [SMALL_STATE(12)] = 514,
  [SMALL_STATE(13)] = 573,
  [SMALL_STATE(14)] = 630,
  [SMALL_STATE(15)] = 689,
  [SMALL_STATE(16)] = 740,
  [SMALL_STATE(17)] = 799,
  [SMALL_STATE(18)] = 858,
  [SMALL_STATE(19)] = 917,
  [SMALL_STATE(20)] = 962,
  [SMALL_STATE(21)] = 1007,
  [SMALL_STATE(22)] = 1052,
  [SMALL_STATE(23)] = 1095,
  [SMALL_STATE(24)] = 1140,
  [SMALL_STATE(25)] = 1185,
  [SMALL_STATE(26)] = 1228,
  [SMALL_STATE(27)] = 1273,
  [SMALL_STATE(28)] = 1306,
  [SMALL_STATE(29)] = 1339,
  [SMALL_STATE(30)] = 1378,
  [SMALL_STATE(31)] = 1411,
  [SMALL_STATE(32)] = 1450,
  [SMALL_STATE(33)] = 1482,
  [SMALL_STATE(34)] = 1514,
  [SMALL_STATE(35)] = 1546,
  [SMALL_STATE(36)] = 1584,
  [SMALL_STATE(37)] = 1616,
  [SMALL_STATE(38)] = 1648,
  [SMALL_STATE(39)] = 1680,
  [SMALL_STATE(40)] = 1712,
  [SMALL_STATE(41)] = 1750,
  [SMALL_STATE(42)] = 1782,
  [SMALL_STATE(43)] = 1814,
  [SMALL_STATE(44)] = 1846,
  [SMALL_STATE(45)] = 1878,
  [SMALL_STATE(46)] = 1910,
  [SMALL_STATE(47)] = 1945,
  [SMALL_STATE(48)] = 1976,
  [SMALL_STATE(49)] = 2011,
  [SMALL_STATE(50)] = 2044,
  [SMALL_STATE(51)] = 2077,
  [SMALL_STATE(52)] = 2108,
  [SMALL_STATE(53)] = 2139,
  [SMALL_STATE(54)] = 2170,
  [SMALL_STATE(55)] = 2201,
  [SMALL_STATE(56)] = 2232,
  [SMALL_STATE(57)] = 2264,
  [SMALL_STATE(58)] = 2294,
  [SMALL_STATE(59)] = 2324,
  [SMALL_STATE(60)] = 2354,
  [SMALL_STATE(61)] = 2386,
  [SMALL_STATE(62)] = 2416,
  [SMALL_STATE(63)] = 2445,
  [SMALL_STATE(64)] = 2474,
  [SMALL_STATE(65)] = 2503,
  [SMALL_STATE(66)] = 2532,
  [SMALL_STATE(67)] = 2561,
  [SMALL_STATE(68)] = 2590,
  [SMALL_STATE(69)] = 2619,
  [SMALL_STATE(70)] = 2648,
  [SMALL_STATE(71)] = 2677,
  [SMALL_STATE(72)] = 2706,
  [SMALL_STATE(73)] = 2735,
  [SMALL_STATE(74)] = 2764,
  [SMALL_STATE(75)] = 2793,
  [SMALL_STATE(76)] = 2822,
  [SMALL_STATE(77)] = 2851,
  [SMALL_STATE(78)] = 2880,
  [SMALL_STATE(79)] = 2909,
  [SMALL_STATE(80)] = 2938,
  [SMALL_STATE(81)] = 2967,
  [SMALL_STATE(82)] = 2996,
  [SMALL_STATE(83)] = 3025,
  [SMALL_STATE(84)] = 3054,
  [SMALL_STATE(85)] = 3080,
  [SMALL_STATE(86)] = 3104,
  [SMALL_STATE(87)] = 3130,
  [SMALL_STATE(88)] = 3156,
  [SMALL_STATE(89)] = 3182,
  [SMALL_STATE(90)] = 3208,
  [SMALL_STATE(91)] = 3234,
  [SMALL_STATE(92)] = 3260,
  [SMALL_STATE(93)] = 3286,
  [SMALL_STATE(94)] = 3312,
  [SMALL_STATE(95)] = 3338,
  [SMALL_STATE(96)] = 3361,
  [SMALL_STATE(97)] = 3386,
  [SMALL_STATE(98)] = 3411,
  [SMALL_STATE(99)] = 3436,
  [SMALL_STATE(100)] = 3461,
  [SMALL_STATE(101)] = 3483,
  [SMALL_STATE(102)] = 3503,
  [SMALL_STATE(103)] = 3521,
  [SMALL_STATE(104)] = 3541,
  [SMALL_STATE(105)] = 3561,
  [SMALL_STATE(106)] = 3581,
  [SMALL_STATE(107)] = 3601,
  [SMALL_STATE(108)] = 3621,
  [SMALL_STATE(109)] = 3641,
  [SMALL_STATE(110)] = 3661,
  [SMALL_STATE(111)] = 3681,
  [SMALL_STATE(112)] = 3701,
  [SMALL_STATE(113)] = 3721,
  [SMALL_STATE(114)] = 3741,
  [SMALL_STATE(115)] = 3763,
  [SMALL_STATE(116)] = 3783,
  [SMALL_STATE(117)] = 3803,
  [SMALL_STATE(118)] = 3823,
  [SMALL_STATE(119)] = 3843,
  [SMALL_STATE(120)] = 3863,
  [SMALL_STATE(121)] = 3879,
  [SMALL_STATE(122)] = 3899,
  [SMALL_STATE(123)] = 3921,
  [SMALL_STATE(124)] = 3939,
  [SMALL_STATE(125)] = 3957,
  [SMALL_STATE(126)] = 3975,
  [SMALL_STATE(127)] = 3993,
  [SMALL_STATE(128)] = 4011,
  [SMALL_STATE(129)] = 4029,
  [SMALL_STATE(130)] = 4047,
  [SMALL_STATE(131)] = 4065,
  [SMALL_STATE(132)] = 4083,
  [SMALL_STATE(133)] = 4105,
  [SMALL_STATE(134)] = 4127,
  [SMALL_STATE(135)] = 4149,
  [SMALL_STATE(136)] = 4169,
  [SMALL_STATE(137)] = 4185,
  [SMALL_STATE(138)] = 4205,
  [SMALL_STATE(139)] = 4223,
  [SMALL_STATE(140)] = 4241,
  [SMALL_STATE(141)] = 4260,
  [SMALL_STATE(142)] = 4275,
  [SMALL_STATE(143)] = 4294,
  [SMALL_STATE(144)] = 4309,
  [SMALL_STATE(145)] = 4328,
  [SMALL_STATE(146)] = 4343,
  [SMALL_STATE(147)] = 4360,
  [SMALL_STATE(148)] = 4379,
  [SMALL_STATE(149)] = 4398,
  [SMALL_STATE(150)] = 4413,
  [SMALL_STATE(151)] = 4432,
  [SMALL_STATE(152)] = 4451,
  [SMALL_STATE(153)] = 4470,
  [SMALL_STATE(154)] = 4489,
  [SMALL_STATE(155)] = 4508,
  [SMALL_STATE(156)] = 4527,
  [SMALL_STATE(157)] = 4546,
  [SMALL_STATE(158)] = 4565,
  [SMALL_STATE(159)] = 4584,
  [SMALL_STATE(160)] = 4603,
  [SMALL_STATE(161)] = 4622,
  [SMALL_STATE(162)] = 4637,
  [SMALL_STATE(163)] = 4656,
  [SMALL_STATE(164)] = 4675,
  [SMALL_STATE(165)] = 4694,
  [SMALL_STATE(166)] = 4713,
  [SMALL_STATE(167)] = 4732,
  [SMALL_STATE(168)] = 4747,
  [SMALL_STATE(169)] = 4766,
  [SMALL_STATE(170)] = 4785,
  [SMALL_STATE(171)] = 4804,
  [SMALL_STATE(172)] = 4823,
  [SMALL_STATE(173)] = 4838,
  [SMALL_STATE(174)] = 4857,
  [SMALL_STATE(175)] = 4876,
  [SMALL_STATE(176)] = 4891,
  [SMALL_STATE(177)] = 4910,
  [SMALL_STATE(178)] = 4925,
  [SMALL_STATE(179)] = 4944,
  [SMALL_STATE(180)] = 4959,
  [SMALL_STATE(181)] = 4978,
  [SMALL_STATE(182)] = 4993,
  [SMALL_STATE(183)] = 5012,
  [SMALL_STATE(184)] = 5027,
  [SMALL_STATE(185)] = 5046,
  [SMALL_STATE(186)] = 5065,
  [SMALL_STATE(187)] = 5084,
  [SMALL_STATE(188)] = 5103,
  [SMALL_STATE(189)] = 5122,
  [SMALL_STATE(190)] = 5141,
  [SMALL_STATE(191)] = 5160,
  [SMALL_STATE(192)] = 5179,
  [SMALL_STATE(193)] = 5198,
  [SMALL_STATE(194)] = 5212,
  [SMALL_STATE(195)] = 5225,
  [SMALL_STATE(196)] = 5238,
  [SMALL_STATE(197)] = 5251,
  [SMALL_STATE(198)] = 5264,
  [SMALL_STATE(199)] = 5277,
  [SMALL_STATE(200)] = 5290,
  [SMALL_STATE(201)] = 5303,
  [SMALL_STATE(202)] = 5316,
  [SMALL_STATE(203)] = 5329,
  [SMALL_STATE(204)] = 5342,
  [SMALL_STATE(205)] = 5355,
  [SMALL_STATE(206)] = 5368,
  [SMALL_STATE(207)] = 5381,
  [SMALL_STATE(208)] = 5394,
  [SMALL_STATE(209)] = 5407,
  [SMALL_STATE(210)] = 5420,
  [SMALL_STATE(211)] = 5433,
  [SMALL_STATE(212)] = 5446,
  [SMALL_STATE(213)] = 5459,
  [SMALL_STATE(214)] = 5472,
  [SMALL_STATE(215)] = 5485,
  [SMALL_STATE(216)] = 5498,
  [SMALL_STATE(217)] = 5511,
  [SMALL_STATE(218)] = 5524,
  [SMALL_STATE(219)] = 5537,
  [SMALL_STATE(220)] = 5550,
  [SMALL_STATE(221)] = 5563,
  [SMALL_STATE(222)] = 5576,
  [SMALL_STATE(223)] = 5589,
  [SMALL_STATE(224)] = 5593,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(204),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(208),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(209),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(194),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(214),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(206),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 14),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 14),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 11),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 11),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 11),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 11),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(193),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [594] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
