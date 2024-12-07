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
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 14
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_as = 19,
  aux_sym_attr_alias_token1 = 20,
  anon_sym_order = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  anon_sym_BSLASH_DQUOTE = 24,
  anon_sym_DASH_GT = 25,
  anon_sym_DASH_DASH_GT = 26,
  anon_sym_LT_DASH = 27,
  anon_sym_LT_DASH_DASH = 28,
  anon_sym_COLON = 29,
  aux_sym_sequence_diagram_token1 = 30,
  anon_sym_ATstartjson = 31,
  anon_sym_AT = 32,
  aux_sym_json_token1 = 33,
  anon_sym_ATendjson = 34,
  aux_sym_json_token2 = 35,
  anon_sym_ATstartyaml = 36,
  anon_sym_ATendyaml = 37,
  anon_sym_ATstartebnf = 38,
  anon_sym_ATendebnf = 39,
  anon_sym_ATstartregex = 40,
  anon_sym_ATendregex = 41,
  anon_sym_ATstartditaa = 42,
  anon_sym_ATendditaa = 43,
  anon_sym_ATstartgantt = 44,
  anon_sym_ATendgantt = 45,
  anon_sym_ATstartchronology = 46,
  anon_sym_ATendchronology = 47,
  anon_sym_ATstartmindmap = 48,
  anon_sym_ATendmindmap = 49,
  anon_sym_ATstartwbs = 50,
  anon_sym_ATendwbs = 51,
  anon_sym_ATstartchen = 52,
  anon_sym_ATendchen = 53,
  anon_sym_SQUOTE = 54,
  aux_sym_comment_token1 = 55,
  anon_sym_SLASH_SQUOTE = 56,
  aux_sym_comment_token2 = 57,
  anon_sym_SQUOTE_SLASH = 58,
  anon_sym_group = 59,
  aux_sym_group_block_token1 = 60,
  anon_sym_end = 61,
  anon_sym_loop = 62,
  sym_color = 63,
  sym_diagram = 64,
  sym_uml = 65,
  sym_expression = 66,
  sym_attribute = 67,
  sym_attr_alias = 68,
  sym_attr_order = 69,
  sym_string = 70,
  sym_participant_name = 71,
  sym_sequence_diagram = 72,
  sym_json = 73,
  sym_yaml = 74,
  sym_ebnf = 75,
  sym_regex = 76,
  sym_ditaa = 77,
  sym_gantt = 78,
  sym_chronology = 79,
  sym_mindmap = 80,
  sym_wbs = 81,
  sym_chen = 82,
  sym_comment = 83,
  sym_group_block = 84,
  sym_loop_block = 85,
  aux_sym_uml_repeat1 = 86,
  aux_sym_attribute_repeat1 = 87,
  aux_sym_attribute_repeat2 = 88,
  aux_sym_string_repeat1 = 89,
  aux_sym_json_repeat1 = 90,
  aux_sym_json_repeat2 = 91,
  aux_sym_comment_repeat1 = 92,
  alias_sym_chen_data = 93,
  alias_sym_chronology_data = 94,
  alias_sym_ditaa_data = 95,
  alias_sym_ebnf_data = 96,
  alias_sym_gantt_data = 97,
  alias_sym_json_data = 98,
  alias_sym_left = 99,
  alias_sym_mindmap_data = 100,
  alias_sym_new_name = 101,
  alias_sym_regex_data = 102,
  alias_sym_right = 103,
  alias_sym_times = 104,
  alias_sym_wbs_data = 105,
  alias_sym_yaml_data = 106,
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
  [anon_sym_as] = "as",
  [aux_sym_attr_alias_token1] = "attr_alias_token1",
  [anon_sym_order] = "order",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
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
  [anon_sym_SQUOTE_SLASH] = "'/",
  [anon_sym_group] = "group",
  [aux_sym_group_block_token1] = "label",
  [anon_sym_end] = "end",
  [anon_sym_loop] = "loop",
  [sym_color] = "color",
  [sym_diagram] = "diagram",
  [sym_uml] = "uml",
  [sym_expression] = "expression",
  [sym_attribute] = "attribute",
  [sym_attr_alias] = "attr_alias",
  [sym_attr_order] = "attr_order",
  [sym_string] = "string",
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
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_json_repeat1] = "json_repeat1",
  [aux_sym_json_repeat2] = "json_repeat2",
  [aux_sym_comment_repeat1] = "comment_repeat1",
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
  [anon_sym_as] = anon_sym_as,
  [aux_sym_attr_alias_token1] = aux_sym_attr_alias_token1,
  [anon_sym_order] = anon_sym_order,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
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
  [anon_sym_SQUOTE_SLASH] = anon_sym_SQUOTE_SLASH,
  [anon_sym_group] = anon_sym_group,
  [aux_sym_group_block_token1] = aux_sym_group_block_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_loop] = anon_sym_loop,
  [sym_color] = sym_color,
  [sym_diagram] = sym_diagram,
  [sym_uml] = sym_uml,
  [sym_expression] = sym_expression,
  [sym_attribute] = sym_attribute,
  [sym_attr_alias] = sym_attr_alias,
  [sym_attr_order] = sym_attr_order,
  [sym_string] = sym_string,
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
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_json_repeat1] = aux_sym_json_repeat1,
  [aux_sym_json_repeat2] = aux_sym_json_repeat2,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
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
  [anon_sym_SQUOTE_SLASH] = {
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
  [aux_sym_comment_repeat1] = {
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
  [9] = 3,
  [10] = 4,
  [11] = 6,
  [12] = 8,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 17,
  [22] = 19,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 25,
  [30] = 30,
  [31] = 27,
  [32] = 15,
  [33] = 14,
  [34] = 16,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 36,
  [40] = 16,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 15,
  [45] = 14,
  [46] = 15,
  [47] = 16,
  [48] = 14,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 53,
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 58,
  [62] = 50,
  [63] = 63,
  [64] = 54,
  [65] = 60,
  [66] = 59,
  [67] = 51,
  [68] = 52,
  [69] = 63,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 71,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 85,
  [97] = 97,
  [98] = 98,
  [99] = 85,
  [100] = 100,
  [101] = 85,
  [102] = 85,
  [103] = 85,
  [104] = 85,
  [105] = 85,
  [106] = 85,
  [107] = 74,
  [108] = 76,
  [109] = 92,
  [110] = 97,
  [111] = 100,
  [112] = 76,
  [113] = 97,
  [114] = 76,
  [115] = 97,
  [116] = 76,
  [117] = 97,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 119,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 119,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 119,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 119,
  [149] = 149,
  [150] = 150,
  [151] = 119,
  [152] = 152,
  [153] = 119,
  [154] = 154,
  [155] = 119,
  [156] = 156,
  [157] = 119,
  [158] = 158,
  [159] = 119,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
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
  [184] = 182,
  [185] = 179,
  [186] = 186,
  [187] = 186,
  [188] = 180,
  [189] = 178,
  [190] = 15,
  [191] = 191,
  [192] = 191,
  [193] = 193,
  [194] = 193,
  [195] = 14,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(589);
      ADVANCE_MAP(
        '"', 693,
        '#', 609,
        '\'', 753,
        '-', 41,
        '/', 22,
        ':', 703,
        '<', 42,
        '@', 708,
        '\\', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(732);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(757);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(756);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(756);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(759);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(756);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 693,
        '#', 609,
        '\'', 751,
        '-', 41,
        '/', 22,
        '<', 42,
        '@', 88,
        'a', 619,
        'b', 653,
        'c', 651,
        'd', 614,
        'e', 647,
        'g', 670,
        'l', 658,
        'o', 666,
        'p', 613,
        'q', 683,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 693,
        '#', 609,
        '\'', 751,
        '/', 22,
        'a', 619,
        'b', 653,
        'c', 651,
        'd', 614,
        'e', 645,
        'g', 670,
        'l', 658,
        'o', 666,
        'p', 613,
        'q', 683,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 693,
        '\'', 751,
        '/', 22,
        ':', 703,
        'a', 620,
        'b', 653,
        'c', 651,
        'd', 614,
        'e', 645,
        'g', 670,
        'l', 658,
        'p', 613,
        'q', 683,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 693,
        '\'', 751,
        '/', 22,
        '@', 88,
        'a', 620,
        'b', 653,
        'c', 651,
        'd', 614,
        'e', 647,
        'g', 670,
        'i', 648,
        'l', 658,
        'p', 613,
        'q', 683,
        'r', 631,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 693,
        '\'', 751,
        '/', 22,
        '@', 88,
        'a', 620,
        'b', 653,
        'c', 651,
        'd', 614,
        'e', 647,
        'g', 670,
        'l', 658,
        'p', 613,
        'q', 683,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 693,
        '\'', 751,
        '/', 22,
        'a', 620,
        'b', 653,
        'c', 651,
        'd', 614,
        'e', 645,
        'g', 670,
        'i', 648,
        'l', 658,
        'p', 613,
        'q', 683,
        'r', 631,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 693,
        '\'', 751,
        '/', 22,
        'a', 620,
        'b', 653,
        'c', 651,
        'd', 614,
        'e', 645,
        'g', 670,
        'l', 658,
        'p', 613,
        'q', 683,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '\\') ADVANCE(695);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0) ADVANCE(694);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(698);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(762);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == ',') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(753);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(753);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(758);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == ',') ADVANCE(18);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\'', 751,
        '/', 22,
        'A', 386,
        'a', 386,
        'B', 274,
        'b', 274,
        'C', 179,
        'c', 179,
        'D', 180,
        'd', 180,
        'F', 356,
        'f', 356,
        'G', 198,
        'g', 198,
        'H', 445,
        'h', 445,
        'I', 425,
        'i', 425,
        'K', 340,
        'k', 340,
        'L', 181,
        'l', 181,
        'M', 182,
        'm', 182,
        'N', 183,
        'n', 183,
        'O', 383,
        'o', 383,
        'P', 184,
        'p', 184,
        'R', 275,
        'r', 275,
        'S', 185,
        's', 185,
        'T', 192,
        't', 192,
        'V', 361,
        'v', 361,
        'W', 338,
        'w', 338,
        'Y', 286,
        'y', 286,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(722);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(712);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(724);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(725);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(717);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(718);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(705);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(706);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '/') ADVANCE(765);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (lookahead != 0) ADVANCE(766);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == ',') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '>') ADVANCE(699);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(701);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(700);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(740);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 61:
      ADVANCE_MAP(
        'c', 97,
        'd', 101,
        'e', 57,
        'g', 52,
        'j', 158,
        'm', 102,
        'r', 81,
        'w', 58,
        'y', 46,
      );
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 64:
      ADVANCE_MAP(
        'c', 100,
        'd', 103,
        'e', 60,
        'g', 55,
        'j', 162,
        'm', 104,
        'r', 87,
        'u', 115,
        'w', 59,
        'y', 56,
      );
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(736);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(735);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'j') ADVANCE(158);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(591);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(746);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(745);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(600);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 173:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 174:
      if (lookahead == 'x') ADVANCE(738);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(737);
      END_STATE();
    case 176:
      if (lookahead == 'y') ADVANCE(744);
      END_STATE();
    case 177:
      if (lookahead == 'y') ADVANCE(743);
      END_STATE();
    case 178:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 179:
      ADVANCE_MAP(
        'A', 256,
        'a', 256,
        'H', 207,
        'h', 207,
        'O', 484,
        'o', 484,
        'R', 360,
        'r', 360,
        'Y', 191,
        'y', 191,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(584);
      END_STATE();
    case 180:
      ADVANCE_MAP(
        'A', 485,
        'a', 485,
        'E', 276,
        'e', 276,
        'I', 414,
        'i', 414,
        'O', 271,
        'o', 271,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(584);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 182:
      ADVANCE_MAP(
        'A', 335,
        'a', 335,
        'E', 263,
        'e', 263,
        'I', 261,
        'i', 261,
        'O', 245,
        'o', 245,
      );
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 184:
      ADVANCE_MAP(
        'A', 395,
        'a', 395,
        'E', 216,
        'e', 216,
        'I', 426,
        'i', 426,
        'L', 549,
        'l', 549,
        'O', 568,
        'o', 568,
        'U', 492,
        'u', 492,
      );
      END_STATE();
    case 185:
      ADVANCE_MAP(
        'A', 260,
        'a', 260,
        'E', 188,
        'e', 188,
        'I', 295,
        'i', 295,
        'K', 574,
        'k', 574,
        'L', 199,
        'l', 199,
        'N', 450,
        'n', 450,
        'P', 498,
        'p', 498,
        'T', 311,
        't', 311,
      );
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(769);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 192:
      ADVANCE_MAP(
        'A', 423,
        'a', 423,
        'E', 202,
        'e', 202,
        'H', 371,
        'h', 371,
        'O', 418,
        'o', 418,
        'R', 220,
        'r', 220,
        'U', 510,
        'u', 510,
      );
      END_STATE();
    case 193:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 194:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 195:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 196:
      ADVANCE_MAP(
        'A', 482,
        'a', 482,
        'B', 390,
        'b', 390,
        'O', 514,
        'o', 514,
        'P', 548,
        'p', 548,
        'S', 309,
        's', 309,
        'T', 550,
        't', 550,
        'V', 376,
        'v', 376,
      );
      END_STATE();
    case 197:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 198:
      ADVANCE_MAP(
        'A', 358,
        'a', 358,
        'H', 447,
        'h', 447,
        'O', 387,
        'o', 387,
        'R', 193,
        'r', 193,
      );
      END_STATE();
    case 199:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 200:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 201:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 206:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 207:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 208:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 209:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 211:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 212:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 213:
      ADVANCE_MAP(
        'A', 403,
        'a', 403,
        'E', 217,
        'e', 217,
        'K', 574,
        'k', 574,
        'L', 226,
        'l', 226,
        'T', 311,
        't', 311,
      );
      END_STATE();
    case 214:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 215:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(446);
      END_STATE();
    case 216:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 217:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 218:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 219:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 220:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 221:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 222:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 223:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 224:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 225:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 226:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 227:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 228:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 229:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 230:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 231:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(769);
      END_STATE();
    case 232:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(390);
      END_STATE();
    case 233:
      ADVANCE_MAP(
        'B', 390,
        'b', 390,
        'C', 467,
        'c', 467,
        'G', 472,
        'g', 472,
        'P', 351,
        'p', 351,
        'S', 213,
        's', 213,
        'Y', 320,
        'y', 320,
      );
      END_STATE();
    case 234:
      ADVANCE_MAP(
        'B', 390,
        'b', 390,
        'C', 575,
        'c', 575,
        'G', 469,
        'g', 469,
        'K', 340,
        'k', 340,
        'M', 225,
        'm', 225,
        'O', 398,
        'o', 398,
        'R', 294,
        'r', 294,
        'S', 214,
        's', 214,
        'T', 550,
        't', 550,
        'V', 361,
        'v', 361,
      );
      END_STATE();
    case 235:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(390);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(490);
      END_STATE();
    case 236:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(318);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(769);
      END_STATE();
    case 237:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(511);
      END_STATE();
    case 238:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(489);
      END_STATE();
    case 239:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 240:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(400);
      END_STATE();
    case 241:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 242:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 243:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 244:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 245:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 246:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 247:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 248:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 249:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 250:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 251:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 252:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 253:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 254:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 255:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 256:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 257:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(769);
      END_STATE();
    case 258:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 259:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(397);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 260:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 261:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(432);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(534);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 262:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 263:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 264:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      END_STATE();
    case 265:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 266:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 267:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 268:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 269:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 270:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      END_STATE();
    case 271:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 272:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 273:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 274:
      ADVANCE_MAP(
        'E', 352,
        'e', 352,
        'I', 515,
        'i', 515,
        'L', 186,
        'l', 186,
        'R', 449,
        'r', 449,
        'U', 493,
        'u', 493,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(584);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(775);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(769);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(769);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 321:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(769);
      END_STATE();
    case 322:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(321);
      END_STATE();
    case 323:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 325:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 326:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(468);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(376);
      END_STATE();
    case 327:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(343);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(280);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 328:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(490);
      END_STATE();
    case 329:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 330:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(304);
      END_STATE();
    case 331:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 332:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 333:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(345);
      END_STATE();
    case 334:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 335:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 336:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(506);
      END_STATE();
    case 337:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(506);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 338:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 339:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(769);
      END_STATE();
    case 340:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 341:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      END_STATE();
    case 342:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(524);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(529);
      END_STATE();
    case 344:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(528);
      END_STATE();
    case 346:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      END_STATE();
    case 347:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 348:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 349:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 350:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 356:
      ADVANCE_MAP(
        'I', 494,
        'i', 494,
        'L', 458,
        'l', 458,
        'O', 495,
        'o', 495,
        'U', 241,
        'u', 241,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(584);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 377:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(451);
      END_STATE();
    case 378:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(574);
      END_STATE();
    case 379:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(769);
      END_STATE();
    case 380:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(234);
      END_STATE();
    case 381:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(353);
      END_STATE();
    case 382:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(277);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(769);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 386:
      ADVANCE_MAP(
        'L', 357,
        'l', 357,
        'N', 533,
        'n', 533,
        'Q', 552,
        'q', 552,
        'Z', 559,
        'z', 559,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(584);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 412:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(769);
      END_STATE();
    case 413:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 414:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(328);
      END_STATE();
    case 415:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 416:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(462);
      END_STATE();
    case 417:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 418:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 419:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(452);
      END_STATE();
    case 420:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 421:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      END_STATE();
    case 422:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 425:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(460);
      END_STATE();
    case 426:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 427:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 428:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 429:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 430:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 431:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 432:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 433:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 435:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 436:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 437:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 438:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 439:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 440:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 441:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 442:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 443:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 444:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 470:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 471:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 472:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 473:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(769);
      END_STATE();
    case 474:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      END_STATE();
    case 475:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 476:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(351);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 477:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 478:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(396);
      END_STATE();
    case 479:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(548);
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
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(558);
      END_STATE();
    case 483:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(557);
      END_STATE();
    case 484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 487:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 488:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 489:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 490:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 491:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 492:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 494:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 495:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 496:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 497:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 498:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 499:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 500:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 501:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 502:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 503:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 504:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 506:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 510:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 511:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 512:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 513:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 514:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 515:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(480);
      END_STATE();
    case 516:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      END_STATE();
    case 517:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(477);
      END_STATE();
    case 518:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      END_STATE();
    case 519:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(542);
      END_STATE();
    case 520:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      END_STATE();
    case 521:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 522:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(541);
      END_STATE();
    case 523:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      END_STATE();
    case 524:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 525:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      END_STATE();
    case 526:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 527:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(769);
      END_STATE();
    case 528:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 529:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 530:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      END_STATE();
    case 531:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(570);
      END_STATE();
    case 532:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(577);
      END_STATE();
    case 533:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 534:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(446);
      END_STATE();
    case 536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 537:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 539:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 541:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 542:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      END_STATE();
    case 543:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 544:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      END_STATE();
    case 545:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      END_STATE();
    case 546:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(769);
      END_STATE();
    case 547:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 548:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(492);
      END_STATE();
    case 549:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 550:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(510);
      END_STATE();
    case 551:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 552:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 553:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 554:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 555:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(466);
      END_STATE();
    case 556:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 557:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 558:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 559:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 560:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 561:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(301);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(440);
      END_STATE();
    case 562:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(282);
      END_STATE();
    case 563:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(307);
      END_STATE();
    case 564:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(313);
      END_STATE();
    case 565:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(769);
      END_STATE();
    case 566:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(775);
      END_STATE();
    case 567:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(423);
      END_STATE();
    case 568:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(266);
      END_STATE();
    case 569:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(304);
      END_STATE();
    case 570:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(346);
      END_STATE();
    case 571:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(463);
      END_STATE();
    case 572:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(348);
      END_STATE();
    case 573:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(769);
      END_STATE();
    case 574:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(232);
      END_STATE();
    case 575:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 576:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(571);
      END_STATE();
    case 577:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(500);
      END_STATE();
    case 578:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 579:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 580:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 581:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 582:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 583:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 584:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 585:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      END_STATE();
    case 586:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(584);
      END_STATE();
    case 587:
      if (eof) ADVANCE(589);
      if (lookahead == '\n') ADVANCE(732);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(587);
      END_STATE();
    case 588:
      if (eof) ADVANCE(589);
      ADVANCE_MAP(
        '"', 693,
        '\'', 751,
        '-', 41,
        '/', 22,
        ':', 703,
        '<', 42,
        '@', 89,
        'a', 620,
        'b', 653,
        'c', 651,
        'd', 614,
        'e', 647,
        'g', 670,
        'l', 658,
        'p', 613,
        'q', 683,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_resume);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(681);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead == 'u') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(681);
      if (lookahead == 'u') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(767);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(641);
      if (lookahead == 'n') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(698);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(758);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '\\') ADVANCE(695);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(694);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(705);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(704);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(706);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(758);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(722);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(712);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(724);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(725);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(717);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '@') ADVANCE(718);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_json_token2);
      if (lookahead == '\n') ADVANCE(732);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(756);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '/') ADVANCE(763);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(706);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(757);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(756);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(706);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SLASH);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(394);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(785);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(506);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(785);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(361);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(585);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(785);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 588},
  [2] = {.lex_state = 588},
  [3] = {.lex_state = 588},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 588},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 588},
  [41] = {.lex_state = 588},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 588},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 588},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 588},
  [52] = {.lex_state = 588},
  [53] = {.lex_state = 588},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 588},
  [58] = {.lex_state = 588},
  [59] = {.lex_state = 588},
  [60] = {.lex_state = 588},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 588},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 588},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 588},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 588},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 31},
  [79] = {.lex_state = 588},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 30},
  [84] = {.lex_state = 31},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 34},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 587},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 587},
  [123] = {.lex_state = 587},
  [124] = {.lex_state = 587},
  [125] = {.lex_state = 587},
  [126] = {.lex_state = 587},
  [127] = {.lex_state = 587},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 587},
  [130] = {.lex_state = 587},
  [131] = {.lex_state = 587},
  [132] = {.lex_state = 587},
  [133] = {.lex_state = 587},
  [134] = {.lex_state = 587},
  [135] = {.lex_state = 587},
  [136] = {.lex_state = 587},
  [137] = {.lex_state = 587},
  [138] = {.lex_state = 587},
  [139] = {.lex_state = 587},
  [140] = {.lex_state = 587},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 30},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 587},
  [147] = {.lex_state = 587},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 587},
  [150] = {.lex_state = 587},
  [151] = {.lex_state = 33},
  [152] = {.lex_state = 587},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 587},
  [155] = {.lex_state = 27},
  [156] = {.lex_state = 587},
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 587},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 587},
  [161] = {.lex_state = 587},
  [162] = {.lex_state = 587},
  [163] = {.lex_state = 587},
  [164] = {.lex_state = 587},
  [165] = {.lex_state = 587},
  [166] = {.lex_state = 587},
  [167] = {.lex_state = 587},
  [168] = {.lex_state = 587},
  [169] = {.lex_state = 587},
  [170] = {.lex_state = 587},
  [171] = {.lex_state = 587},
  [172] = {.lex_state = 587},
  [173] = {.lex_state = 587},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 587},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 588},
  [178] = {.lex_state = 37},
  [179] = {.lex_state = 24},
  [180] = {.lex_state = 25},
  [181] = {.lex_state = 588},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 588},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 26},
  [187] = {.lex_state = 26},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 37},
  [190] = {.lex_state = 25},
  [191] = {.lex_state = 26},
  [192] = {.lex_state = 26},
  [193] = {.lex_state = 38},
  [194] = {.lex_state = 38},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 588},
  [197] = {(TSStateId)(-1)},
  [198] = {(TSStateId)(-1)},
  [199] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(1),
    [aux_sym_attribute_token2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
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
    [anon_sym_SQUOTE_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_diagram] = STATE(177),
    [sym_uml] = STATE(181),
    [sym_json] = STATE(181),
    [sym_yaml] = STATE(181),
    [sym_ebnf] = STATE(181),
    [sym_regex] = STATE(181),
    [sym_ditaa] = STATE(181),
    [sym_gantt] = STATE(181),
    [sym_chronology] = STATE(181),
    [sym_mindmap] = STATE(181),
    [sym_wbs] = STATE(181),
    [sym_chen] = STATE(181),
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
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_ATenduml,
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
    STATE(5), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(51), 1,
      sym_expression,
    STATE(79), 1,
      sym_participant_name,
    STATE(52), 4,
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
  [59] = 15,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_ATenduml,
    ACTIONS(49), 1,
      anon_sym_autonumber,
    ACTIONS(52), 1,
      anon_sym_autonumberstop,
    ACTIONS(58), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_group,
    ACTIONS(67), 1,
      anon_sym_loop,
    STATE(16), 1,
      sym_string,
    STATE(51), 1,
      sym_expression,
    STATE(79), 1,
      sym_participant_name,
    STATE(3), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(52), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(55), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [116] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(76), 1,
      anon_sym_group,
    ACTIONS(78), 1,
      anon_sym_end,
    ACTIONS(80), 1,
      anon_sym_loop,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(68), 4,
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
  [175] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
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
    ACTIONS(82), 1,
      anon_sym_ATenduml,
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    STATE(51), 1,
      sym_expression,
    STATE(79), 1,
      sym_participant_name,
    STATE(52), 4,
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
  [234] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(76), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_loop,
    ACTIONS(84), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(68), 4,
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
  [293] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(76), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_loop,
    ACTIONS(86), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(68), 4,
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
  [352] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(76), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_loop,
    ACTIONS(88), 1,
      anon_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(68), 4,
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
  [411] = 15,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_autonumber,
    ACTIONS(93), 1,
      anon_sym_autonumberstop,
    ACTIONS(99), 1,
      anon_sym_group,
    ACTIONS(102), 1,
      anon_sym_end,
    ACTIONS(104), 1,
      anon_sym_loop,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(9), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(68), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(96), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [468] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(76), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_loop,
    ACTIONS(107), 1,
      anon_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(68), 4,
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
  [527] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(76), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_loop,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(68), 4,
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
  [586] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(76), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_loop,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(68), 4,
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
  [645] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(76), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_loop,
    ACTIONS(113), 1,
      anon_sym_end,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    STATE(67), 1,
      sym_expression,
    STATE(71), 1,
      sym_participant_name,
    STATE(68), 4,
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
  [704] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(115), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(117), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [740] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_comment,
    ACTIONS(119), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(121), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [776] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym_comment,
    ACTIONS(123), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(125), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [812] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      anon_sym_as,
    ACTIONS(137), 1,
      anon_sym_order,
    STATE(17), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(26), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(127), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(129), 12,
      anon_sym_autonumber,
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
  [855] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      anon_sym_as,
    ACTIONS(148), 1,
      anon_sym_order,
    STATE(17), 1,
      aux_sym_attribute_repeat2,
    STATE(18), 1,
      sym_comment,
    STATE(26), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(140), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(142), 12,
      anon_sym_autonumber,
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
  [900] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      anon_sym_as,
    ACTIONS(158), 1,
      anon_sym_order,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(152), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(28), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(150), 13,
      anon_sym_autonumber,
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
  [945] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      anon_sym_as,
    ACTIONS(158), 1,
      anon_sym_order,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(140), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(28), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(142), 13,
      anon_sym_autonumber,
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
  [990] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_as,
    ACTIONS(166), 1,
      anon_sym_order,
    ACTIONS(127), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(21), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(28), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(129), 13,
      anon_sym_autonumber,
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
  [1033] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      anon_sym_as,
    ACTIONS(148), 1,
      anon_sym_order,
    STATE(18), 1,
      aux_sym_attribute_repeat2,
    STATE(22), 1,
      sym_comment,
    STATE(26), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(152), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(150), 12,
      anon_sym_autonumber,
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
  [1078] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_attribute_token3,
    STATE(23), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(171), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(175), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(169), 13,
      anon_sym_autonumber,
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
  [1117] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      aux_sym_attribute_token3,
    STATE(24), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(177), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(175), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(169), 12,
      anon_sym_autonumber,
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
  [1156] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(183), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1188] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(187), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1220] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_comment,
    ACTIONS(189), 4,
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
  [1252] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(187), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1284] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(183), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1316] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(129), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1348] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(189), 3,
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
  [1380] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(121), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1412] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(117), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1444] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(125), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1476] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(129), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1508] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_attribute_token3,
    STATE(36), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(152), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(150), 13,
      anon_sym_autonumber,
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
  [1543] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      aux_sym_attribute_token3,
    STATE(37), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(193), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(195), 12,
      anon_sym_autonumber,
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
  [1576] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      aux_sym_attribute_token3,
    ACTIONS(193), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(38), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(195), 13,
      anon_sym_autonumber,
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
  [1609] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      aux_sym_attribute_token3,
    STATE(37), 1,
      aux_sym_attribute_repeat1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(150), 12,
      anon_sym_autonumber,
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
  [1644] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(125), 12,
      anon_sym_autonumber,
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
  [1674] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(205), 12,
      anon_sym_autonumber,
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
  [1706] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(205), 13,
      anon_sym_autonumber,
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
  [1738] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(213), 13,
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
  [1768] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(119), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(121), 12,
      anon_sym_autonumber,
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
  [1798] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(117), 13,
      anon_sym_autonumber,
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
  [1828] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(121), 13,
      anon_sym_autonumber,
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
  [1858] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(125), 13,
      anon_sym_autonumber,
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
  [1888] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(117), 12,
      anon_sym_autonumber,
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
  [1918] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(213), 14,
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
  [1948] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(142), 13,
      anon_sym_autonumber,
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
  [1977] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(217), 12,
      anon_sym_autonumber,
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
  [2006] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(221), 12,
      anon_sym_autonumber,
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
  [2035] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(225), 12,
      anon_sym_autonumber,
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
  [2064] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(227), 13,
      anon_sym_autonumber,
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
  [2093] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(231), 13,
      anon_sym_autonumber,
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
  [2122] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(225), 13,
      anon_sym_autonumber,
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
  [2151] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(231), 12,
      anon_sym_autonumber,
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
  [2180] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 12,
      anon_sym_autonumber,
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
  [2209] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(239), 3,
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
  [2238] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(243), 3,
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
  [2267] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 13,
      anon_sym_autonumber,
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
  [2296] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(142), 12,
      anon_sym_autonumber,
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
  [2325] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(169), 13,
      anon_sym_autonumber,
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
  [2354] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(227), 12,
      anon_sym_autonumber,
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
  [2383] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(243), 2,
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
  [2412] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(239), 2,
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
  [2441] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(217), 13,
      anon_sym_autonumber,
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
  [2470] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(221), 13,
      anon_sym_autonumber,
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
  [2499] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(169), 12,
      anon_sym_autonumber,
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
  [2528] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_ATendmindmap,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_json_repeat1,
    ACTIONS(247), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2548] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_LT_DASH,
    STATE(71), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [2566] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(72), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [2584] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_ATendjson,
    STATE(73), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_json_repeat1,
    ACTIONS(262), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2604] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_attr_alias_token1,
    STATE(16), 1,
      sym_string,
    STATE(22), 1,
      sym_participant_name,
    STATE(74), 1,
      sym_comment,
  [2626] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(270), 1,
      anon_sym_ATendyaml,
    STATE(75), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_json_repeat1,
    ACTIONS(268), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2646] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_string_repeat1,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2666] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_ATendebnf,
    STATE(77), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_json_repeat1,
    ACTIONS(276), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2686] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(282), 1,
      anon_sym_ATendregex,
    STATE(78), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_json_repeat1,
    ACTIONS(280), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2706] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(286), 1,
      anon_sym_LT_DASH,
    STATE(79), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [2724] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(290), 1,
      anon_sym_ATendditaa,
    STATE(80), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_json_repeat1,
    ACTIONS(288), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2744] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(292), 1,
      anon_sym_ATendjson,
    STATE(81), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_json_repeat1,
    ACTIONS(262), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2764] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(294), 1,
      anon_sym_ATendyaml,
    STATE(82), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_json_repeat1,
    ACTIONS(268), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2784] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(296), 1,
      anon_sym_ATendebnf,
    STATE(83), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_json_repeat1,
    ACTIONS(276), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2804] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_ATendregex,
    STATE(84), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_json_repeat1,
    ACTIONS(280), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2824] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendjson,
    ACTIONS(300), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(85), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [2842] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendyaml,
    ACTIONS(305), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(86), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [2860] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_ATendgantt,
    STATE(87), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_json_repeat1,
    ACTIONS(308), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2880] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(314), 1,
      anon_sym_ATendchronology,
    STATE(88), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_json_repeat1,
    ACTIONS(312), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2900] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(316), 1,
      anon_sym_ATendmindmap,
    STATE(89), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_json_repeat1,
    ACTIONS(247), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2920] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_ATendwbs,
    STATE(90), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_json_repeat1,
    ACTIONS(318), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2940] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_ATendchen,
    STATE(91), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_json_repeat1,
    ACTIONS(322), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2960] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_attribute_token1,
    ACTIONS(328), 1,
      aux_sym_attribute_token2,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_comment,
    STATE(188), 1,
      sym_string,
  [2982] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_ATendgantt,
    STATE(87), 1,
      aux_sym_json_repeat1,
    STATE(93), 1,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3002] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(334), 1,
      anon_sym_ATendchronology,
    STATE(88), 1,
      aux_sym_json_repeat1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3022] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(336), 1,
      anon_sym_ATendwbs,
    STATE(90), 1,
      aux_sym_json_repeat1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3042] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendebnf,
    ACTIONS(338), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(96), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3060] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3080] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(343), 1,
      anon_sym_ATendchen,
    STATE(91), 1,
      aux_sym_json_repeat1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(322), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3100] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendregex,
    ACTIONS(345), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(99), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3118] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_string,
    STATE(41), 1,
      sym_participant_name,
    STATE(100), 1,
      sym_comment,
  [3140] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendditaa,
    ACTIONS(352), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(101), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3158] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendgantt,
    ACTIONS(355), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(102), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3176] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendchronology,
    ACTIONS(358), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(103), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3194] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendmindmap,
    ACTIONS(361), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(104), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3212] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendwbs,
    ACTIONS(364), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(105), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3230] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_ATendchen,
    ACTIONS(367), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(106), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3248] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(370), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_participant_name,
    STATE(34), 1,
      sym_string,
    STATE(107), 1,
      sym_comment,
  [3270] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_string_repeat1,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3290] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      aux_sym_attribute_token1,
    ACTIONS(378), 1,
      aux_sym_attribute_token2,
    STATE(109), 1,
      sym_comment,
    STATE(180), 1,
      sym_string,
  [3312] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3332] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_participant_name,
    STATE(47), 1,
      sym_string,
    STATE(111), 1,
      sym_comment,
  [3354] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_string_repeat1,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3374] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3394] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_string_repeat1,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3414] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3434] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_string_repeat1,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3454] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(274), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3474] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_ATendditaa,
    STATE(101), 1,
      aux_sym_json_repeat1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3494] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [3509] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    STATE(120), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_json_repeat2,
  [3528] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [3543] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [3562] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [3581] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_json_repeat2,
  [3600] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_json_repeat2,
  [3619] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_json_repeat2,
  [3638] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [3657] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [3672] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_json_repeat2,
  [3691] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_json_repeat2,
  [3710] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [3729] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [3748] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_json_repeat2,
  [3767] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      aux_sym_json_repeat2,
    STATE(134), 1,
      sym_comment,
  [3786] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [3805] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      aux_sym_json_repeat2,
    STATE(136), 1,
      sym_comment,
  [3824] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_json_repeat2,
  [3843] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      aux_sym_json_repeat2,
    STATE(138), 1,
      sym_comment,
  [3862] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      aux_sym_json_repeat2,
    STATE(139), 1,
      sym_comment,
  [3881] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(140), 1,
      sym_comment,
  [3900] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(442), 1,
      aux_sym_comment_token2,
    ACTIONS(445), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(141), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [3917] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(447), 1,
      aux_sym_comment_token2,
    ACTIONS(449), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(142), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_comment_repeat1,
  [3936] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [3951] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(447), 1,
      aux_sym_comment_token2,
    ACTIONS(451), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(141), 1,
      aux_sym_comment_repeat1,
    STATE(144), 1,
      sym_comment,
  [3970] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(453), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3985] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [4004] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym_json_repeat2,
  [4023] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [4038] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [4057] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_json_repeat2,
  [4076] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [4091] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_json_repeat2,
  [4110] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [4125] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    STATE(154), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_json_repeat2,
  [4144] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [4159] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      aux_sym_json_token2,
    STATE(156), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [4176] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [4191] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(158), 1,
      sym_comment,
  [4210] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [4225] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(160), 1,
      sym_comment,
  [4244] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(161), 1,
      sym_comment,
  [4263] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(162), 1,
      sym_comment,
  [4282] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(163), 1,
      sym_comment,
  [4301] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(164), 1,
      sym_comment,
  [4320] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(165), 1,
      sym_comment,
  [4339] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(166), 1,
      sym_comment,
  [4358] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      aux_sym_json_repeat2,
    STATE(167), 1,
      sym_comment,
  [4377] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(168), 1,
      sym_comment,
  [4396] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(169), 1,
      sym_comment,
  [4415] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(170), 1,
      sym_comment,
  [4434] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      aux_sym_json_repeat2,
    STATE(171), 1,
      sym_comment,
  [4453] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    STATE(163), 1,
      aux_sym_json_repeat2,
    STATE(172), 1,
      sym_comment,
  [4472] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(404), 1,
      aux_sym_json_token2,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      aux_sym_json_repeat2,
    STATE(173), 1,
      sym_comment,
  [4491] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(174), 1,
      sym_comment,
    ACTIONS(502), 2,
      aux_sym_comment_token2,
      anon_sym_SQUOTE_SLASH,
  [4505] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(175), 1,
      sym_comment,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      aux_sym_json_token2,
  [4519] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      aux_sym_comment_token1,
    STATE(176), 1,
      sym_comment,
  [4532] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_comment,
  [4545] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(510), 1,
      aux_sym_sequence_diagram_token1,
    STATE(178), 1,
      sym_comment,
  [4558] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(512), 1,
      sym_color,
    STATE(179), 1,
      sym_comment,
  [4571] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(514), 1,
      aux_sym_attribute_token2,
    STATE(180), 1,
      sym_comment,
  [4584] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym_comment,
  [4597] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      aux_sym_attr_alias_token1,
    STATE(182), 1,
      sym_comment,
  [4610] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_comment,
  [4623] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      aux_sym_attr_alias_token1,
    STATE(184), 1,
      sym_comment,
  [4636] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      sym_color,
    STATE(185), 1,
      sym_comment,
  [4649] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      aux_sym_attribute_token3,
    STATE(186), 1,
      sym_comment,
  [4662] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      aux_sym_attribute_token3,
    STATE(187), 1,
      sym_comment,
  [4675] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      aux_sym_attribute_token2,
    STATE(188), 1,
      sym_comment,
  [4688] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(532), 1,
      aux_sym_sequence_diagram_token1,
    STATE(189), 1,
      sym_comment,
  [4701] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      aux_sym_attribute_token2,
    STATE(190), 1,
      sym_comment,
  [4714] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(534), 1,
      aux_sym_attribute_token3,
    STATE(191), 1,
      sym_comment,
  [4727] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(536), 1,
      aux_sym_attribute_token3,
    STATE(192), 1,
      sym_comment,
  [4740] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(538), 1,
      aux_sym_group_block_token1,
    STATE(193), 1,
      sym_comment,
  [4753] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(540), 1,
      aux_sym_group_block_token1,
    STATE(194), 1,
      sym_comment,
  [4766] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_attribute_token2,
    STATE(195), 1,
      sym_comment,
  [4779] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    STATE(196), 1,
      sym_comment,
  [4792] = 1,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
  [4796] = 1,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
  [4800] = 1,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 175,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 293,
  [SMALL_STATE(8)] = 352,
  [SMALL_STATE(9)] = 411,
  [SMALL_STATE(10)] = 468,
  [SMALL_STATE(11)] = 527,
  [SMALL_STATE(12)] = 586,
  [SMALL_STATE(13)] = 645,
  [SMALL_STATE(14)] = 704,
  [SMALL_STATE(15)] = 740,
  [SMALL_STATE(16)] = 776,
  [SMALL_STATE(17)] = 812,
  [SMALL_STATE(18)] = 855,
  [SMALL_STATE(19)] = 900,
  [SMALL_STATE(20)] = 945,
  [SMALL_STATE(21)] = 990,
  [SMALL_STATE(22)] = 1033,
  [SMALL_STATE(23)] = 1078,
  [SMALL_STATE(24)] = 1117,
  [SMALL_STATE(25)] = 1156,
  [SMALL_STATE(26)] = 1188,
  [SMALL_STATE(27)] = 1220,
  [SMALL_STATE(28)] = 1252,
  [SMALL_STATE(29)] = 1284,
  [SMALL_STATE(30)] = 1316,
  [SMALL_STATE(31)] = 1348,
  [SMALL_STATE(32)] = 1380,
  [SMALL_STATE(33)] = 1412,
  [SMALL_STATE(34)] = 1444,
  [SMALL_STATE(35)] = 1476,
  [SMALL_STATE(36)] = 1508,
  [SMALL_STATE(37)] = 1543,
  [SMALL_STATE(38)] = 1576,
  [SMALL_STATE(39)] = 1609,
  [SMALL_STATE(40)] = 1644,
  [SMALL_STATE(41)] = 1674,
  [SMALL_STATE(42)] = 1706,
  [SMALL_STATE(43)] = 1738,
  [SMALL_STATE(44)] = 1768,
  [SMALL_STATE(45)] = 1798,
  [SMALL_STATE(46)] = 1828,
  [SMALL_STATE(47)] = 1858,
  [SMALL_STATE(48)] = 1888,
  [SMALL_STATE(49)] = 1918,
  [SMALL_STATE(50)] = 1948,
  [SMALL_STATE(51)] = 1977,
  [SMALL_STATE(52)] = 2006,
  [SMALL_STATE(53)] = 2035,
  [SMALL_STATE(54)] = 2064,
  [SMALL_STATE(55)] = 2093,
  [SMALL_STATE(56)] = 2122,
  [SMALL_STATE(57)] = 2151,
  [SMALL_STATE(58)] = 2180,
  [SMALL_STATE(59)] = 2209,
  [SMALL_STATE(60)] = 2238,
  [SMALL_STATE(61)] = 2267,
  [SMALL_STATE(62)] = 2296,
  [SMALL_STATE(63)] = 2325,
  [SMALL_STATE(64)] = 2354,
  [SMALL_STATE(65)] = 2383,
  [SMALL_STATE(66)] = 2412,
  [SMALL_STATE(67)] = 2441,
  [SMALL_STATE(68)] = 2470,
  [SMALL_STATE(69)] = 2499,
  [SMALL_STATE(70)] = 2528,
  [SMALL_STATE(71)] = 2548,
  [SMALL_STATE(72)] = 2566,
  [SMALL_STATE(73)] = 2584,
  [SMALL_STATE(74)] = 2604,
  [SMALL_STATE(75)] = 2626,
  [SMALL_STATE(76)] = 2646,
  [SMALL_STATE(77)] = 2666,
  [SMALL_STATE(78)] = 2686,
  [SMALL_STATE(79)] = 2706,
  [SMALL_STATE(80)] = 2724,
  [SMALL_STATE(81)] = 2744,
  [SMALL_STATE(82)] = 2764,
  [SMALL_STATE(83)] = 2784,
  [SMALL_STATE(84)] = 2804,
  [SMALL_STATE(85)] = 2824,
  [SMALL_STATE(86)] = 2842,
  [SMALL_STATE(87)] = 2860,
  [SMALL_STATE(88)] = 2880,
  [SMALL_STATE(89)] = 2900,
  [SMALL_STATE(90)] = 2920,
  [SMALL_STATE(91)] = 2940,
  [SMALL_STATE(92)] = 2960,
  [SMALL_STATE(93)] = 2982,
  [SMALL_STATE(94)] = 3002,
  [SMALL_STATE(95)] = 3022,
  [SMALL_STATE(96)] = 3042,
  [SMALL_STATE(97)] = 3060,
  [SMALL_STATE(98)] = 3080,
  [SMALL_STATE(99)] = 3100,
  [SMALL_STATE(100)] = 3118,
  [SMALL_STATE(101)] = 3140,
  [SMALL_STATE(102)] = 3158,
  [SMALL_STATE(103)] = 3176,
  [SMALL_STATE(104)] = 3194,
  [SMALL_STATE(105)] = 3212,
  [SMALL_STATE(106)] = 3230,
  [SMALL_STATE(107)] = 3248,
  [SMALL_STATE(108)] = 3270,
  [SMALL_STATE(109)] = 3290,
  [SMALL_STATE(110)] = 3312,
  [SMALL_STATE(111)] = 3332,
  [SMALL_STATE(112)] = 3354,
  [SMALL_STATE(113)] = 3374,
  [SMALL_STATE(114)] = 3394,
  [SMALL_STATE(115)] = 3414,
  [SMALL_STATE(116)] = 3434,
  [SMALL_STATE(117)] = 3454,
  [SMALL_STATE(118)] = 3474,
  [SMALL_STATE(119)] = 3494,
  [SMALL_STATE(120)] = 3509,
  [SMALL_STATE(121)] = 3528,
  [SMALL_STATE(122)] = 3543,
  [SMALL_STATE(123)] = 3562,
  [SMALL_STATE(124)] = 3581,
  [SMALL_STATE(125)] = 3600,
  [SMALL_STATE(126)] = 3619,
  [SMALL_STATE(127)] = 3638,
  [SMALL_STATE(128)] = 3657,
  [SMALL_STATE(129)] = 3672,
  [SMALL_STATE(130)] = 3691,
  [SMALL_STATE(131)] = 3710,
  [SMALL_STATE(132)] = 3729,
  [SMALL_STATE(133)] = 3748,
  [SMALL_STATE(134)] = 3767,
  [SMALL_STATE(135)] = 3786,
  [SMALL_STATE(136)] = 3805,
  [SMALL_STATE(137)] = 3824,
  [SMALL_STATE(138)] = 3843,
  [SMALL_STATE(139)] = 3862,
  [SMALL_STATE(140)] = 3881,
  [SMALL_STATE(141)] = 3900,
  [SMALL_STATE(142)] = 3917,
  [SMALL_STATE(143)] = 3936,
  [SMALL_STATE(144)] = 3951,
  [SMALL_STATE(145)] = 3970,
  [SMALL_STATE(146)] = 3985,
  [SMALL_STATE(147)] = 4004,
  [SMALL_STATE(148)] = 4023,
  [SMALL_STATE(149)] = 4038,
  [SMALL_STATE(150)] = 4057,
  [SMALL_STATE(151)] = 4076,
  [SMALL_STATE(152)] = 4091,
  [SMALL_STATE(153)] = 4110,
  [SMALL_STATE(154)] = 4125,
  [SMALL_STATE(155)] = 4144,
  [SMALL_STATE(156)] = 4159,
  [SMALL_STATE(157)] = 4176,
  [SMALL_STATE(158)] = 4191,
  [SMALL_STATE(159)] = 4210,
  [SMALL_STATE(160)] = 4225,
  [SMALL_STATE(161)] = 4244,
  [SMALL_STATE(162)] = 4263,
  [SMALL_STATE(163)] = 4282,
  [SMALL_STATE(164)] = 4301,
  [SMALL_STATE(165)] = 4320,
  [SMALL_STATE(166)] = 4339,
  [SMALL_STATE(167)] = 4358,
  [SMALL_STATE(168)] = 4377,
  [SMALL_STATE(169)] = 4396,
  [SMALL_STATE(170)] = 4415,
  [SMALL_STATE(171)] = 4434,
  [SMALL_STATE(172)] = 4453,
  [SMALL_STATE(173)] = 4472,
  [SMALL_STATE(174)] = 4491,
  [SMALL_STATE(175)] = 4505,
  [SMALL_STATE(176)] = 4519,
  [SMALL_STATE(177)] = 4532,
  [SMALL_STATE(178)] = 4545,
  [SMALL_STATE(179)] = 4558,
  [SMALL_STATE(180)] = 4571,
  [SMALL_STATE(181)] = 4584,
  [SMALL_STATE(182)] = 4597,
  [SMALL_STATE(183)] = 4610,
  [SMALL_STATE(184)] = 4623,
  [SMALL_STATE(185)] = 4636,
  [SMALL_STATE(186)] = 4649,
  [SMALL_STATE(187)] = 4662,
  [SMALL_STATE(188)] = 4675,
  [SMALL_STATE(189)] = 4688,
  [SMALL_STATE(190)] = 4701,
  [SMALL_STATE(191)] = 4714,
  [SMALL_STATE(192)] = 4727,
  [SMALL_STATE(193)] = 4740,
  [SMALL_STATE(194)] = 4753,
  [SMALL_STATE(195)] = 4766,
  [SMALL_STATE(196)] = 4779,
  [SMALL_STATE(197)] = 4792,
  [SMALL_STATE(198)] = 4796,
  [SMALL_STATE(199)] = 4800,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(179),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(182),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(187),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(185),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(184),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 11),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 11),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 11),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 11),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(175),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [508] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
