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
#define STATE_COUNT 199
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 15
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_as = 19,
  aux_sym_attr_alias_token1 = 20,
  anon_sym_order = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  anon_sym_BSLASH_DQUOTE = 24,
  anon_sym_BSLASH = 25,
  aux_sym_escape_char_token1 = 26,
  anon_sym_DASH_GT = 27,
  anon_sym_DASH_DASH_GT = 28,
  anon_sym_LT_DASH = 29,
  anon_sym_LT_DASH_DASH = 30,
  anon_sym_COLON = 31,
  aux_sym_sequence_diagram_token1 = 32,
  anon_sym_ATstartjson = 33,
  anon_sym_AT = 34,
  aux_sym_json_token1 = 35,
  anon_sym_ATendjson = 36,
  aux_sym_json_token2 = 37,
  anon_sym_ATstartyaml = 38,
  anon_sym_ATendyaml = 39,
  anon_sym_ATstartebnf = 40,
  anon_sym_ATendebnf = 41,
  anon_sym_ATstartregex = 42,
  anon_sym_ATendregex = 43,
  anon_sym_ATstartditaa = 44,
  anon_sym_ATendditaa = 45,
  anon_sym_ATstartgantt = 46,
  anon_sym_ATendgantt = 47,
  anon_sym_ATstartchronology = 48,
  anon_sym_ATendchronology = 49,
  anon_sym_ATstartmindmap = 50,
  anon_sym_ATendmindmap = 51,
  anon_sym_ATstartwbs = 52,
  anon_sym_ATendwbs = 53,
  anon_sym_ATstartchen = 54,
  anon_sym_ATendchen = 55,
  anon_sym_SQUOTE = 56,
  aux_sym_comment_token1 = 57,
  anon_sym_SLASH_SQUOTE = 58,
  aux_sym_comment_token2 = 59,
  anon_sym_SLASH = 60,
  anon_sym_group = 61,
  aux_sym_group_block_token1 = 62,
  anon_sym_end = 63,
  anon_sym_loop = 64,
  sym_color = 65,
  sym_diagram = 66,
  sym_uml = 67,
  sym_expression = 68,
  sym_attribute = 69,
  sym_attr_alias = 70,
  sym_attr_order = 71,
  sym_string = 72,
  sym_escape_char = 73,
  sym_participant_name = 74,
  sym_sequence_diagram = 75,
  sym_json = 76,
  sym_yaml = 77,
  sym_ebnf = 78,
  sym_regex = 79,
  sym_ditaa = 80,
  sym_gantt = 81,
  sym_chronology = 82,
  sym_mindmap = 83,
  sym_wbs = 84,
  sym_chen = 85,
  sym_comment = 86,
  sym_group_block = 87,
  sym_loop_block = 88,
  aux_sym_uml_repeat1 = 89,
  aux_sym_attribute_repeat1 = 90,
  aux_sym_attribute_repeat2 = 91,
  aux_sym_string_repeat1 = 92,
  aux_sym_json_repeat1 = 93,
  aux_sym_json_repeat2 = 94,
  alias_sym_chen_data = 95,
  alias_sym_chronology_data = 96,
  alias_sym_ditaa_data = 97,
  alias_sym_ebnf_data = 98,
  alias_sym_gantt_data = 99,
  alias_sym_json_data = 100,
  alias_sym_left = 101,
  alias_sym_mindmap_data = 102,
  alias_sym_new_name = 103,
  alias_sym_regex_data = 104,
  alias_sym_right = 105,
  alias_sym_times = 106,
  alias_sym_value = 107,
  alias_sym_wbs_data = 108,
  alias_sym_yaml_data = 109,
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
  [8] = 6,
  [9] = 2,
  [10] = 10,
  [11] = 4,
  [12] = 5,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 17,
  [22] = 18,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 14,
  [31] = 16,
  [32] = 27,
  [33] = 28,
  [34] = 29,
  [35] = 15,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 40,
  [44] = 14,
  [45] = 15,
  [46] = 16,
  [47] = 16,
  [48] = 14,
  [49] = 15,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
  [54] = 54,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 52,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 56,
  [65] = 63,
  [66] = 57,
  [67] = 58,
  [68] = 54,
  [69] = 60,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 70,
  [75] = 70,
  [76] = 71,
  [77] = 70,
  [78] = 71,
  [79] = 70,
  [80] = 71,
  [81] = 81,
  [82] = 82,
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
  [97] = 87,
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
  [108] = 96,
  [109] = 96,
  [110] = 96,
  [111] = 96,
  [112] = 96,
  [113] = 96,
  [114] = 96,
  [115] = 96,
  [116] = 96,
  [117] = 82,
  [118] = 100,
  [119] = 107,
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
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 126,
  [141] = 141,
  [142] = 142,
  [143] = 126,
  [144] = 144,
  [145] = 145,
  [146] = 126,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 126,
  [151] = 151,
  [152] = 126,
  [153] = 126,
  [154] = 126,
  [155] = 126,
  [156] = 156,
  [157] = 126,
  [158] = 158,
  [159] = 159,
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
  [179] = 14,
  [180] = 180,
  [181] = 181,
  [182] = 175,
  [183] = 183,
  [184] = 178,
  [185] = 176,
  [186] = 15,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 183,
  [194] = 180,
  [195] = 177,
  [196] = 188,
  [197] = 197,
  [198] = 198,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(583);
      ADVANCE_MAP(
        '"', 687,
        '#', 603,
        '\'', 748,
        '-', 36,
        '/', 761,
        ':', 700,
        '<', 37,
        '@', 705,
        '\\', 692,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(695);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0) ADVANCE(693);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(749);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(753);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(753);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(756);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(753);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 687,
        '#', 603,
        '\'', 748,
        '-', 36,
        '/', 30,
        '<', 37,
        '@', 83,
        'a', 613,
        'b', 647,
        'c', 645,
        'd', 608,
        'e', 644,
        'g', 664,
        'l', 652,
        'o', 660,
        'p', 607,
        'q', 677,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 687,
        '#', 603,
        '\'', 748,
        '/', 30,
        'a', 613,
        'b', 647,
        'c', 645,
        'd', 608,
        'e', 638,
        'g', 664,
        'l', 652,
        'o', 660,
        'p', 607,
        'q', 677,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 687,
        '\'', 748,
        '/', 30,
        ':', 700,
        '@', 156,
        'a', 614,
        'b', 647,
        'c', 645,
        'd', 608,
        'e', 638,
        'g', 664,
        'l', 652,
        'p', 607,
        'q', 677,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 687,
        '\'', 748,
        '/', 30,
        ':', 700,
        '@', 83,
        'a', 614,
        'b', 647,
        'c', 645,
        'd', 608,
        'e', 644,
        'g', 664,
        'l', 652,
        'p', 607,
        'q', 677,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 687,
        '\'', 748,
        '/', 30,
        '@', 83,
        'a', 614,
        'b', 647,
        'c', 645,
        'd', 608,
        'e', 644,
        'g', 664,
        'i', 641,
        'l', 652,
        'p', 607,
        'q', 677,
        'r', 625,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 687,
        '\'', 748,
        '/', 30,
        '@', 83,
        'a', 614,
        'b', 647,
        'c', 645,
        'd', 608,
        'e', 644,
        'g', 664,
        'l', 652,
        'p', 607,
        'q', 677,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 687,
        '\'', 748,
        '/', 30,
        'a', 614,
        'b', 647,
        'c', 645,
        'd', 608,
        'e', 638,
        'g', 664,
        'i', 641,
        'l', 652,
        'p', 607,
        'q', 677,
        'r', 625,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 687,
        '\'', 748,
        '/', 30,
        'a', 614,
        'b', 647,
        'c', 645,
        'd', 608,
        'e', 638,
        'g', 664,
        'l', 652,
        'p', 607,
        'q', 677,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(687);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(687);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '\\') ADVANCE(692);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(689);
      if (lookahead != 0) ADVANCE(688);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\'', 748,
        '/', 30,
        'A', 381,
        'a', 381,
        'B', 269,
        'b', 269,
        'C', 174,
        'c', 174,
        'D', 175,
        'd', 175,
        'F', 351,
        'f', 351,
        'G', 193,
        'g', 193,
        'H', 440,
        'h', 440,
        'I', 420,
        'i', 420,
        'K', 335,
        'k', 335,
        'L', 176,
        'l', 176,
        'M', 177,
        'm', 177,
        'N', 178,
        'n', 178,
        'O', 378,
        'o', 378,
        'P', 179,
        'p', 179,
        'R', 270,
        'r', 270,
        'S', 180,
        's', 180,
        'T', 187,
        't', 187,
        'V', 356,
        'v', 356,
        'W', 333,
        'w', 333,
        'Y', 281,
        'y', 281,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(717);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(707);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(718);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(708);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(719);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(720);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(722);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(712);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(724);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(725);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(755);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(751);
      if (lookahead == '/') ADVANCE(763);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead != 0) ADVANCE(764);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '/') ADVANCE(702);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(703);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(750);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '>') ADVANCE(696);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(698);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(697);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 56:
      ADVANCE_MAP(
        'c', 91,
        'd', 95,
        'e', 52,
        'g', 47,
        'j', 152,
        'm', 96,
        'r', 76,
        'w', 53,
        'y', 41,
      );
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        'c', 94,
        'd', 97,
        'e', 55,
        'g', 50,
        'j', 157,
        'm', 98,
        'r', 82,
        'u', 108,
        'w', 54,
        'y', 51,
      );
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(733);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(732);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'j') ADVANCE(152);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(731);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(584);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(730);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(728);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(743);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(742);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(594);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(739);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 168:
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 169:
      if (lookahead == 'x') ADVANCE(735);
      END_STATE();
    case 170:
      if (lookahead == 'x') ADVANCE(734);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(740);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 174:
      ADVANCE_MAP(
        'A', 251,
        'a', 251,
        'H', 202,
        'h', 202,
        'O', 479,
        'o', 479,
        'R', 355,
        'r', 355,
        'Y', 186,
        'y', 186,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(579);
      END_STATE();
    case 175:
      ADVANCE_MAP(
        'A', 480,
        'a', 480,
        'E', 271,
        'e', 271,
        'I', 409,
        'i', 409,
        'O', 266,
        'o', 266,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(579);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 177:
      ADVANCE_MAP(
        'A', 330,
        'a', 330,
        'E', 258,
        'e', 258,
        'I', 256,
        'i', 256,
        'O', 240,
        'o', 240,
      );
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 179:
      ADVANCE_MAP(
        'A', 390,
        'a', 390,
        'E', 211,
        'e', 211,
        'I', 421,
        'i', 421,
        'L', 544,
        'l', 544,
        'O', 563,
        'o', 563,
        'U', 487,
        'u', 487,
      );
      END_STATE();
    case 180:
      ADVANCE_MAP(
        'A', 255,
        'a', 255,
        'E', 183,
        'e', 183,
        'I', 290,
        'i', 290,
        'K', 569,
        'k', 569,
        'L', 194,
        'l', 194,
        'N', 445,
        'n', 445,
        'P', 493,
        'p', 493,
        'T', 306,
        't', 306,
      );
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(767);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 187:
      ADVANCE_MAP(
        'A', 418,
        'a', 418,
        'E', 197,
        'e', 197,
        'H', 366,
        'h', 366,
        'O', 413,
        'o', 413,
        'R', 215,
        'r', 215,
        'U', 505,
        'u', 505,
      );
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 191:
      ADVANCE_MAP(
        'A', 477,
        'a', 477,
        'B', 385,
        'b', 385,
        'O', 509,
        'o', 509,
        'P', 543,
        'p', 543,
        'S', 304,
        's', 304,
        'T', 545,
        't', 545,
        'V', 371,
        'v', 371,
      );
      END_STATE();
    case 192:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 193:
      ADVANCE_MAP(
        'A', 353,
        'a', 353,
        'H', 442,
        'h', 442,
        'O', 382,
        'o', 382,
        'R', 188,
        'r', 188,
      );
      END_STATE();
    case 194:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 195:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 196:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 197:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 198:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 199:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 200:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 201:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(491);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 206:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 207:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 208:
      ADVANCE_MAP(
        'A', 398,
        'a', 398,
        'E', 212,
        'e', 212,
        'K', 569,
        'k', 569,
        'L', 221,
        'l', 221,
        'T', 306,
        't', 306,
      );
      END_STATE();
    case 209:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(441);
      END_STATE();
    case 211:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 212:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 213:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 214:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 215:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 216:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 217:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 218:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 219:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 220:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 221:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 222:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 223:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 224:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 225:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 226:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(767);
      END_STATE();
    case 227:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(385);
      END_STATE();
    case 228:
      ADVANCE_MAP(
        'B', 385,
        'b', 385,
        'C', 462,
        'c', 462,
        'G', 467,
        'g', 467,
        'P', 346,
        'p', 346,
        'S', 208,
        's', 208,
        'Y', 315,
        'y', 315,
      );
      END_STATE();
    case 229:
      ADVANCE_MAP(
        'B', 385,
        'b', 385,
        'C', 570,
        'c', 570,
        'G', 464,
        'g', 464,
        'K', 335,
        'k', 335,
        'M', 220,
        'm', 220,
        'O', 393,
        'o', 393,
        'R', 289,
        'r', 289,
        'S', 209,
        's', 209,
        'T', 545,
        't', 545,
        'V', 356,
        'v', 356,
      );
      END_STATE();
    case 230:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(385);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(485);
      END_STATE();
    case 231:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(313);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(767);
      END_STATE();
    case 232:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(506);
      END_STATE();
    case 233:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      END_STATE();
    case 234:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(459);
      END_STATE();
    case 235:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(395);
      END_STATE();
    case 236:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 237:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 238:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(374);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 239:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 240:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 241:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 242:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 243:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 244:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 245:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 246:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 247:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 248:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 249:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 250:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(504);
      END_STATE();
    case 251:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 252:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(767);
      END_STATE();
    case 253:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 254:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(392);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 255:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 256:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(427);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(527);
      END_STATE();
    case 257:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 258:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 259:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(576);
      END_STATE();
    case 260:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 261:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 262:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 263:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 264:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 265:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(574);
      END_STATE();
    case 266:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 267:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 268:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 269:
      ADVANCE_MAP(
        'E', 347,
        'e', 347,
        'I', 510,
        'i', 510,
        'L', 181,
        'l', 181,
        'R', 444,
        'r', 444,
        'U', 488,
        'u', 488,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(579);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(767);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(767);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(493);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 316:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(767);
      END_STATE();
    case 317:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(316);
      END_STATE();
    case 318:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(443);
      END_STATE();
    case 320:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(403);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      END_STATE();
    case 321:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(463);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(371);
      END_STATE();
    case 322:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(338);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(275);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 323:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(485);
      END_STATE();
    case 324:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 325:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 326:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 327:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 328:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 329:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 330:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 331:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(501);
      END_STATE();
    case 332:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(501);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      END_STATE();
    case 333:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 334:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(767);
      END_STATE();
    case 335:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 336:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(469);
      END_STATE();
    case 337:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(519);
      END_STATE();
    case 338:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(524);
      END_STATE();
    case 339:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(359);
      END_STATE();
    case 340:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(523);
      END_STATE();
    case 341:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(369);
      END_STATE();
    case 342:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(365);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 344:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 351:
      ADVANCE_MAP(
        'I', 489,
        'i', 489,
        'L', 453,
        'l', 453,
        'O', 490,
        'o', 490,
        'U', 236,
        'u', 236,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(579);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 372:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(446);
      END_STATE();
    case 373:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(569);
      END_STATE();
    case 374:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(767);
      END_STATE();
    case 375:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(229);
      END_STATE();
    case 376:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(348);
      END_STATE();
    case 377:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 378:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 381:
      ADVANCE_MAP(
        'L', 352,
        'l', 352,
        'N', 528,
        'n', 528,
        'Q', 547,
        'q', 547,
        'Z', 554,
        'z', 554,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(579);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 407:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(767);
      END_STATE();
    case 408:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 409:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 410:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 411:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(457);
      END_STATE();
    case 412:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 413:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 414:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 415:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 416:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(460);
      END_STATE();
    case 417:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 418:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 419:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 420:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(455);
      END_STATE();
    case 421:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 422:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(470);
      END_STATE();
    case 425:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 426:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 427:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 428:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(534);
      END_STATE();
    case 429:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 430:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 431:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 432:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 433:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      END_STATE();
    case 435:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 436:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 437:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 438:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 439:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 440:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(767);
      END_STATE();
    case 442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 468:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 469:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(542);
      END_STATE();
    case 470:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 471:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 472:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 473:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 474:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 475:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(551);
      END_STATE();
    case 476:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(550);
      END_STATE();
    case 477:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(553);
      END_STATE();
    case 478:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(552);
      END_STATE();
    case 479:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 480:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 481:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 487:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 488:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 489:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 490:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 491:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 492:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 494:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 495:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 496:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 497:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 498:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 499:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 500:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 501:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 502:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 503:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 504:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 506:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 510:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(475);
      END_STATE();
    case 511:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      END_STATE();
    case 512:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      END_STATE();
    case 513:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(526);
      END_STATE();
    case 514:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(537);
      END_STATE();
    case 515:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(443);
      END_STATE();
    case 516:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(334);
      END_STATE();
    case 517:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      END_STATE();
    case 518:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 519:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      END_STATE();
    case 520:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 521:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 522:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(767);
      END_STATE();
    case 523:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 524:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 525:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(768);
      END_STATE();
    case 526:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 527:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(572);
      END_STATE();
    case 528:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 529:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 530:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      END_STATE();
    case 531:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 532:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 533:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 534:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      END_STATE();
    case 537:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 539:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
      END_STATE();
    case 540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
      END_STATE();
    case 541:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(767);
      END_STATE();
    case 542:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 543:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(487);
      END_STATE();
    case 544:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 545:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(505);
      END_STATE();
    case 546:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 547:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 548:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(518);
      END_STATE();
    case 549:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(516);
      END_STATE();
    case 550:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 551:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 552:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 553:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 554:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 555:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 556:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(296);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(435);
      END_STATE();
    case 557:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(277);
      END_STATE();
    case 558:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(302);
      END_STATE();
    case 559:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(308);
      END_STATE();
    case 560:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(767);
      END_STATE();
    case 561:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(773);
      END_STATE();
    case 562:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(418);
      END_STATE();
    case 563:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(261);
      END_STATE();
    case 564:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(299);
      END_STATE();
    case 565:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(341);
      END_STATE();
    case 566:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(458);
      END_STATE();
    case 567:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(343);
      END_STATE();
    case 568:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(767);
      END_STATE();
    case 569:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(227);
      END_STATE();
    case 570:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 571:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(566);
      END_STATE();
    case 572:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(495);
      END_STATE();
    case 573:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 574:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 575:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 576:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 577:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 578:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 579:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 580:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(767);
      END_STATE();
    case 581:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(579);
      END_STATE();
    case 582:
      if (eof) ADVANCE(583);
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_resume);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 's') ADVANCE(604);
      if (lookahead == 'u') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'u') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(765);
      if (lookahead == 't') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '\\') ADVANCE(692);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(688);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(755);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(691);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(695);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(693);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(755);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '/') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(703);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(717);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(707);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(718);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(708);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(719);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(720);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(722);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(712);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(724);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(725);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(748);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '@') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_json_token2);
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(753);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(34);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(764);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(703);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(749);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(753);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(34);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(764);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(703);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(34);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(755);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(764);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(764);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(389);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(501);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(781);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(356);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(782);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(580);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(781);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 24},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 582},
  [122] = {.lex_state = 582},
  [123] = {.lex_state = 582},
  [124] = {.lex_state = 582},
  [125] = {.lex_state = 582},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 582},
  [128] = {.lex_state = 582},
  [129] = {.lex_state = 582},
  [130] = {.lex_state = 582},
  [131] = {.lex_state = 582},
  [132] = {.lex_state = 582},
  [133] = {.lex_state = 582},
  [134] = {.lex_state = 582},
  [135] = {.lex_state = 582},
  [136] = {.lex_state = 582},
  [137] = {.lex_state = 582},
  [138] = {.lex_state = 582},
  [139] = {.lex_state = 582},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 582},
  [142] = {.lex_state = 582},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 582},
  [145] = {.lex_state = 582},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 582},
  [148] = {.lex_state = 582},
  [149] = {.lex_state = 582},
  [150] = {.lex_state = 25},
  [151] = {.lex_state = 582},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 29},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 27},
  [156] = {.lex_state = 582},
  [157] = {.lex_state = 28},
  [158] = {.lex_state = 582},
  [159] = {.lex_state = 582},
  [160] = {.lex_state = 582},
  [161] = {.lex_state = 582},
  [162] = {.lex_state = 582},
  [163] = {.lex_state = 582},
  [164] = {.lex_state = 582},
  [165] = {.lex_state = 582},
  [166] = {.lex_state = 582},
  [167] = {.lex_state = 582},
  [168] = {.lex_state = 582},
  [169] = {.lex_state = 582},
  [170] = {.lex_state = 582},
  [171] = {.lex_state = 582},
  [172] = {.lex_state = 582},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 17},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 31},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 19},
  [180] = {.lex_state = 18},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 32},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 33},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 31},
  [196] = {.lex_state = 32},
  [197] = {(TSStateId)(-1)},
  [198] = {(TSStateId)(-1)},
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
    [sym_diagram] = STATE(187),
    [sym_uml] = STATE(189),
    [sym_json] = STATE(189),
    [sym_yaml] = STATE(189),
    [sym_ebnf] = STATE(189),
    [sym_regex] = STATE(189),
    [sym_ditaa] = STATE(189),
    [sym_gantt] = STATE(189),
    [sym_chronology] = STATE(189),
    [sym_mindmap] = STATE(189),
    [sym_wbs] = STATE(189),
    [sym_chen] = STATE(189),
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
  [0] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_autonumber,
    ACTIONS(31), 1,
      anon_sym_autonumberstop,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_end,
    ACTIONS(43), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(33), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [59] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_ATenduml,
    ACTIONS(47), 1,
      anon_sym_autonumber,
    ACTIONS(49), 1,
      anon_sym_autonumberstop,
    ACTIONS(53), 1,
      anon_sym_group,
    ACTIONS(55), 1,
      anon_sym_loop,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(59), 1,
      sym_expression,
    STATE(87), 1,
      sym_participant_name,
    STATE(64), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(51), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [118] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_autonumber,
    ACTIONS(31), 1,
      anon_sym_autonumberstop,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(33), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [177] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_autonumber,
    ACTIONS(31), 1,
      anon_sym_autonumberstop,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(2), 1,
      aux_sym_uml_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(33), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [236] = 15,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_ATenduml,
    ACTIONS(63), 1,
      anon_sym_autonumber,
    ACTIONS(66), 1,
      anon_sym_autonumberstop,
    ACTIONS(72), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(81), 1,
      anon_sym_loop,
    STATE(16), 1,
      sym_string,
    STATE(59), 1,
      sym_expression,
    STATE(87), 1,
      sym_participant_name,
    STATE(6), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(64), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(69), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [293] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_autonumber,
    ACTIONS(31), 1,
      anon_sym_autonumberstop,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(84), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(33), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [352] = 15,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(72), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_autonumber,
    ACTIONS(89), 1,
      anon_sym_autonumberstop,
    ACTIONS(95), 1,
      anon_sym_group,
    ACTIONS(98), 1,
      anon_sym_end,
    ACTIONS(100), 1,
      anon_sym_loop,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(8), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(92), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [409] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_autonumber,
    ACTIONS(31), 1,
      anon_sym_autonumberstop,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(103), 1,
      anon_sym_end,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(33), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [468] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_autonumber,
    ACTIONS(49), 1,
      anon_sym_autonumberstop,
    ACTIONS(53), 1,
      anon_sym_group,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(105), 1,
      anon_sym_ATenduml,
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    STATE(59), 1,
      sym_expression,
    STATE(87), 1,
      sym_participant_name,
    STATE(64), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(51), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [527] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_autonumber,
    ACTIONS(31), 1,
      anon_sym_autonumberstop,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(107), 1,
      anon_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(33), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [586] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_autonumber,
    ACTIONS(31), 1,
      anon_sym_autonumberstop,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(33), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [645] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_autonumber,
    ACTIONS(31), 1,
      anon_sym_autonumberstop,
    ACTIONS(35), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(16), 1,
      sym_string,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_participant_name,
    STATE(56), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(33), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [704] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(113), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(115), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(15), 1,
      sym_comment,
    ACTIONS(117), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(119), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(16), 1,
      sym_comment,
    ACTIONS(121), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(123), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_as,
    ACTIONS(135), 1,
      anon_sym_order,
    ACTIONS(127), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(17), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(26), 2,
      sym_attr_alias,
      sym_attr_order,
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
  [855] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(144), 1,
      anon_sym_as,
    ACTIONS(146), 1,
      anon_sym_order,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(140), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(26), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(138), 13,
      anon_sym_autonumber,
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
  [900] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_POUND,
    ACTIONS(154), 1,
      anon_sym_as,
    ACTIONS(156), 1,
      anon_sym_order,
    STATE(19), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_attribute_repeat2,
    STATE(25), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(148), 3,
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
  [945] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(144), 1,
      anon_sym_as,
    ACTIONS(146), 1,
      anon_sym_order,
    STATE(17), 1,
      aux_sym_attribute_repeat2,
    STATE(20), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(26), 2,
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
  [990] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      anon_sym_as,
    ACTIONS(164), 1,
      anon_sym_order,
    STATE(21), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(25), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(127), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [1033] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_POUND,
    ACTIONS(154), 1,
      anon_sym_as,
    ACTIONS(156), 1,
      anon_sym_order,
    STATE(19), 1,
      aux_sym_attribute_repeat2,
    STATE(22), 1,
      sym_comment,
    STATE(25), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(140), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(138), 12,
      anon_sym_autonumber,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_attribute_token3,
    STATE(23), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(171), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(167), 3,
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
  [1117] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_attribute_token3,
    STATE(24), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(167), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(175), 2,
      anon_sym_inc,
      anon_sym_resume,
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
  [1156] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(181), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(26), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(181), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1220] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(27), 1,
      sym_comment,
    ACTIONS(127), 3,
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
  [1252] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(28), 1,
      sym_comment,
    ACTIONS(185), 3,
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
  [1284] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(29), 1,
      sym_comment,
    ACTIONS(189), 3,
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
  [1316] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(115), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(123), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(125), 14,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1412] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(33), 1,
      sym_comment,
    ACTIONS(185), 4,
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
  [1444] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(189), 4,
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
  [1476] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(119), 15,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [1508] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(193), 1,
      aux_sym_attribute_token3,
    ACTIONS(196), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(36), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(191), 13,
      anon_sym_autonumber,
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
  [1541] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_attribute_token3,
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(140), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(138), 12,
      anon_sym_autonumber,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(198), 1,
      aux_sym_attribute_token3,
    STATE(38), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(196), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(191), 12,
      anon_sym_autonumber,
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
  [1609] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_attribute_token3,
    STATE(36), 1,
      aux_sym_attribute_repeat1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(138), 13,
      anon_sym_autonumber,
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
  [1644] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(201), 14,
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
  [1674] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym_comment,
    ACTIONS(207), 2,
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
  [1706] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_comment,
    ACTIONS(207), 3,
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
  [1738] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(201), 13,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(113), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(115), 12,
      anon_sym_autonumber,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(119), 12,
      anon_sym_autonumber,
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
  [1828] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(123), 13,
      anon_sym_autonumber,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(123), 12,
      anon_sym_autonumber,
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
  [1888] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(115), 13,
      anon_sym_autonumber,
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
  [1918] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(119), 13,
      anon_sym_autonumber,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(215), 12,
      anon_sym_autonumber,
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
  [1977] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(167), 2,
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
  [2006] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(219), 2,
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
  [2035] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(215), 13,
      anon_sym_autonumber,
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
  [2064] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(223), 12,
      anon_sym_autonumber,
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
  [2093] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(167), 3,
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
  [2122] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(227), 2,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
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
  [2180] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(233), 13,
      anon_sym_autonumber,
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
  [2209] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(219), 3,
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
  [2238] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(239), 2,
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
  [2267] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(148), 2,
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
  [2296] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(148), 3,
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
  [2325] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(243), 12,
      anon_sym_autonumber,
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
  [2354] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(227), 3,
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
  [2383] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(243), 13,
      anon_sym_autonumber,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
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
  [2441] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(233), 12,
      anon_sym_autonumber,
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
  [2470] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(223), 13,
      anon_sym_autonumber,
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
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(239), 3,
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
  [2528] = 8,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2554] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2580] = 7,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_BSLASH,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(72), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [2604] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2630] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_string_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2656] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2682] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2708] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2734] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2760] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2786] = 8,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(105), 1,
      sym_escape_char,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2812] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(281), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [2828] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_attr_alias_token1,
    STATE(16), 1,
      sym_string,
    STATE(22), 1,
      sym_participant_name,
    STATE(82), 1,
      sym_comment,
  [2850] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_ATendjson,
    STATE(83), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_json_repeat1,
    ACTIONS(285), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2870] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_ATendyaml,
    STATE(84), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym_json_repeat1,
    ACTIONS(289), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2890] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_ATendebnf,
    STATE(85), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_json_repeat1,
    ACTIONS(293), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2910] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_ATendregex,
    STATE(86), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_json_repeat1,
    ACTIONS(297), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2930] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_LT_DASH,
    STATE(87), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [2948] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(307), 1,
      anon_sym_ATendditaa,
    STATE(88), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_json_repeat1,
    ACTIONS(305), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2968] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(309), 1,
      anon_sym_ATendjson,
    STATE(89), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_json_repeat1,
    ACTIONS(285), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [2988] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(311), 1,
      anon_sym_ATendyaml,
    STATE(90), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_json_repeat1,
    ACTIONS(289), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3008] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(313), 1,
      anon_sym_ATendebnf,
    STATE(91), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_json_repeat1,
    ACTIONS(293), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3028] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(315), 1,
      anon_sym_ATendregex,
    STATE(92), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_json_repeat1,
    ACTIONS(297), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3048] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(317), 1,
      anon_sym_ATendditaa,
    STATE(93), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_json_repeat1,
    ACTIONS(305), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3068] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(321), 1,
      anon_sym_ATendgantt,
    STATE(94), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_json_repeat1,
    ACTIONS(319), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3088] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(325), 1,
      anon_sym_ATendchronology,
    STATE(95), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_json_repeat1,
    ACTIONS(323), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3108] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendyaml,
    ACTIONS(327), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(96), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3126] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(334), 1,
      anon_sym_LT_DASH,
    STATE(97), 1,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [3144] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(338), 1,
      anon_sym_ATendwbs,
    STATE(98), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_json_repeat1,
    ACTIONS(336), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3164] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_ATendchen,
    STATE(99), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_json_repeat1,
    ACTIONS(340), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3184] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(344), 1,
      aux_sym_attribute_token1,
    ACTIONS(346), 1,
      aux_sym_attribute_token2,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_comment,
    STATE(193), 1,
      sym_string,
  [3206] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(350), 1,
      anon_sym_ATendgantt,
    STATE(94), 1,
      aux_sym_json_repeat1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3226] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(352), 1,
      anon_sym_ATendchronology,
    STATE(95), 1,
      aux_sym_json_repeat1,
    STATE(102), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3246] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(356), 1,
      anon_sym_ATendmindmap,
    STATE(103), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_json_repeat1,
    ACTIONS(354), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3266] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(358), 1,
      anon_sym_ATendwbs,
    STATE(98), 1,
      aux_sym_json_repeat1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3286] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(360), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [3302] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(362), 1,
      anon_sym_ATendchen,
    STATE(99), 1,
      aux_sym_json_repeat1,
    STATE(106), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3322] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(364), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_participant_name,
    STATE(47), 1,
      sym_string,
    STATE(107), 1,
      sym_comment,
  [3344] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendebnf,
    ACTIONS(368), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(108), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3362] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendregex,
    ACTIONS(371), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(109), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3380] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendditaa,
    ACTIONS(374), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(110), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3398] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendjson,
    ACTIONS(377), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(111), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3416] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendgantt,
    ACTIONS(380), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(112), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3434] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendchronology,
    ACTIONS(383), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(113), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3452] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendmindmap,
    ACTIONS(386), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(114), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3470] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendwbs,
    ACTIONS(389), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(115), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3488] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_ATendchen,
    ACTIONS(392), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(116), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3506] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_participant_name,
    STATE(31), 1,
      sym_string,
    STATE(117), 1,
      sym_comment,
  [3528] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym_attribute_token1,
    ACTIONS(401), 1,
      aux_sym_attribute_token2,
    STATE(118), 1,
      sym_comment,
    STATE(183), 1,
      sym_string,
  [3550] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(403), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_participant_name,
    STATE(46), 1,
      sym_string,
    STATE(119), 1,
      sym_comment,
  [3572] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(407), 1,
      anon_sym_ATendmindmap,
    STATE(114), 1,
      aux_sym_json_repeat1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3592] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    STATE(121), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_json_repeat2,
  [3611] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_json_repeat2,
  [3630] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_json_repeat2,
  [3649] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_json_repeat2,
  [3668] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_json_repeat2,
  [3687] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [3702] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_json_repeat2,
  [3721] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_json_repeat2,
  [3740] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_json_repeat2,
  [3759] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_json_repeat2,
  [3778] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_json_repeat2,
  [3797] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      aux_sym_json_repeat2,
    STATE(132), 1,
      sym_comment,
  [3816] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      aux_sym_json_repeat2,
    STATE(133), 1,
      sym_comment,
  [3835] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_json_repeat2,
  [3854] = 5,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 1,
      aux_sym_json_token2,
    STATE(135), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [3871] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(136), 1,
      sym_comment,
  [3890] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(137), 1,
      sym_comment,
  [3909] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(138), 1,
      sym_comment,
  [3928] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(139), 1,
      sym_comment,
  [3947] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [3962] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(141), 1,
      sym_comment,
  [3981] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(142), 1,
      sym_comment,
  [4000] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [4015] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(144), 1,
      sym_comment,
  [4034] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(145), 1,
      sym_comment,
  [4053] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [4068] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      aux_sym_json_repeat2,
    STATE(147), 1,
      sym_comment,
  [4087] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(148), 1,
      sym_comment,
  [4106] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(149), 1,
      sym_comment,
  [4125] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [4140] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(151), 1,
      sym_comment,
  [4159] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [4174] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [4189] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [4204] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [4219] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      aux_sym_json_repeat2,
    STATE(156), 1,
      sym_comment,
  [4238] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [4253] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_json_repeat2,
  [4272] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(159), 1,
      sym_comment,
  [4291] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      aux_sym_json_repeat2,
    STATE(160), 1,
      sym_comment,
  [4310] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(161), 1,
      sym_comment,
  [4329] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      aux_sym_json_repeat2,
    STATE(162), 1,
      sym_comment,
  [4348] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    STATE(121), 1,
      aux_sym_json_repeat2,
    STATE(163), 1,
      sym_comment,
  [4367] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(164), 1,
      sym_comment,
  [4386] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      aux_sym_json_repeat2,
    STATE(165), 1,
      sym_comment,
  [4405] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(166), 1,
      sym_comment,
  [4424] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      aux_sym_json_repeat2,
    STATE(167), 1,
      sym_comment,
  [4443] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(168), 1,
      sym_comment,
  [4462] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      aux_sym_json_repeat2,
    STATE(169), 1,
      sym_comment,
  [4481] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      aux_sym_json_repeat2,
    STATE(170), 1,
      sym_comment,
  [4500] = 6,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(411), 1,
      aux_sym_json_token2,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      aux_sym_json_repeat2,
    STATE(171), 1,
      sym_comment,
  [4519] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      aux_sym_json_token2,
  [4533] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(500), 1,
      aux_sym_escape_char_token1,
    STATE(173), 1,
      sym_comment,
  [4546] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(502), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_comment,
  [4559] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(504), 1,
      sym_color,
    STATE(175), 1,
      sym_comment,
  [4572] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      aux_sym_attribute_token3,
    STATE(176), 1,
      sym_comment,
  [4585] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(508), 1,
      aux_sym_group_block_token1,
    STATE(177), 1,
      sym_comment,
  [4598] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(510), 1,
      aux_sym_attr_alias_token1,
    STATE(178), 1,
      sym_comment,
  [4611] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(113), 1,
      aux_sym_attribute_token2,
    STATE(179), 1,
      sym_comment,
  [4624] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(512), 1,
      aux_sym_attribute_token3,
    STATE(180), 1,
      sym_comment,
  [4637] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(514), 1,
      aux_sym_comment_token1,
    STATE(181), 1,
      sym_comment,
  [4650] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      sym_color,
    STATE(182), 1,
      sym_comment,
  [4663] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(518), 1,
      aux_sym_attribute_token2,
    STATE(183), 1,
      sym_comment,
  [4676] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_attr_alias_token1,
    STATE(184), 1,
      sym_comment,
  [4689] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(522), 1,
      aux_sym_attribute_token3,
    STATE(185), 1,
      sym_comment,
  [4702] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(117), 1,
      aux_sym_attribute_token2,
    STATE(186), 1,
      sym_comment,
  [4715] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_comment,
  [4728] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(526), 1,
      aux_sym_sequence_diagram_token1,
    STATE(188), 1,
      sym_comment,
  [4741] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      sym_comment,
  [4754] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(530), 1,
      aux_sym_comment_token2,
    STATE(190), 1,
      sym_comment,
  [4767] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      sym_comment,
  [4780] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      sym_comment,
  [4793] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(536), 1,
      aux_sym_attribute_token2,
    STATE(193), 1,
      sym_comment,
  [4806] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(538), 1,
      aux_sym_attribute_token3,
    STATE(194), 1,
      sym_comment,
  [4819] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(540), 1,
      aux_sym_group_block_token1,
    STATE(195), 1,
      sym_comment,
  [4832] = 4,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(542), 1,
      aux_sym_sequence_diagram_token1,
    STATE(196), 1,
      sym_comment,
  [4845] = 1,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
  [4849] = 1,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 293,
  [SMALL_STATE(8)] = 352,
  [SMALL_STATE(9)] = 409,
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
  [SMALL_STATE(37)] = 1541,
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
  [SMALL_STATE(71)] = 2554,
  [SMALL_STATE(72)] = 2580,
  [SMALL_STATE(73)] = 2604,
  [SMALL_STATE(74)] = 2630,
  [SMALL_STATE(75)] = 2656,
  [SMALL_STATE(76)] = 2682,
  [SMALL_STATE(77)] = 2708,
  [SMALL_STATE(78)] = 2734,
  [SMALL_STATE(79)] = 2760,
  [SMALL_STATE(80)] = 2786,
  [SMALL_STATE(81)] = 2812,
  [SMALL_STATE(82)] = 2828,
  [SMALL_STATE(83)] = 2850,
  [SMALL_STATE(84)] = 2870,
  [SMALL_STATE(85)] = 2890,
  [SMALL_STATE(86)] = 2910,
  [SMALL_STATE(87)] = 2930,
  [SMALL_STATE(88)] = 2948,
  [SMALL_STATE(89)] = 2968,
  [SMALL_STATE(90)] = 2988,
  [SMALL_STATE(91)] = 3008,
  [SMALL_STATE(92)] = 3028,
  [SMALL_STATE(93)] = 3048,
  [SMALL_STATE(94)] = 3068,
  [SMALL_STATE(95)] = 3088,
  [SMALL_STATE(96)] = 3108,
  [SMALL_STATE(97)] = 3126,
  [SMALL_STATE(98)] = 3144,
  [SMALL_STATE(99)] = 3164,
  [SMALL_STATE(100)] = 3184,
  [SMALL_STATE(101)] = 3206,
  [SMALL_STATE(102)] = 3226,
  [SMALL_STATE(103)] = 3246,
  [SMALL_STATE(104)] = 3266,
  [SMALL_STATE(105)] = 3286,
  [SMALL_STATE(106)] = 3302,
  [SMALL_STATE(107)] = 3322,
  [SMALL_STATE(108)] = 3344,
  [SMALL_STATE(109)] = 3362,
  [SMALL_STATE(110)] = 3380,
  [SMALL_STATE(111)] = 3398,
  [SMALL_STATE(112)] = 3416,
  [SMALL_STATE(113)] = 3434,
  [SMALL_STATE(114)] = 3452,
  [SMALL_STATE(115)] = 3470,
  [SMALL_STATE(116)] = 3488,
  [SMALL_STATE(117)] = 3506,
  [SMALL_STATE(118)] = 3528,
  [SMALL_STATE(119)] = 3550,
  [SMALL_STATE(120)] = 3572,
  [SMALL_STATE(121)] = 3592,
  [SMALL_STATE(122)] = 3611,
  [SMALL_STATE(123)] = 3630,
  [SMALL_STATE(124)] = 3649,
  [SMALL_STATE(125)] = 3668,
  [SMALL_STATE(126)] = 3687,
  [SMALL_STATE(127)] = 3702,
  [SMALL_STATE(128)] = 3721,
  [SMALL_STATE(129)] = 3740,
  [SMALL_STATE(130)] = 3759,
  [SMALL_STATE(131)] = 3778,
  [SMALL_STATE(132)] = 3797,
  [SMALL_STATE(133)] = 3816,
  [SMALL_STATE(134)] = 3835,
  [SMALL_STATE(135)] = 3854,
  [SMALL_STATE(136)] = 3871,
  [SMALL_STATE(137)] = 3890,
  [SMALL_STATE(138)] = 3909,
  [SMALL_STATE(139)] = 3928,
  [SMALL_STATE(140)] = 3947,
  [SMALL_STATE(141)] = 3962,
  [SMALL_STATE(142)] = 3981,
  [SMALL_STATE(143)] = 4000,
  [SMALL_STATE(144)] = 4015,
  [SMALL_STATE(145)] = 4034,
  [SMALL_STATE(146)] = 4053,
  [SMALL_STATE(147)] = 4068,
  [SMALL_STATE(148)] = 4087,
  [SMALL_STATE(149)] = 4106,
  [SMALL_STATE(150)] = 4125,
  [SMALL_STATE(151)] = 4140,
  [SMALL_STATE(152)] = 4159,
  [SMALL_STATE(153)] = 4174,
  [SMALL_STATE(154)] = 4189,
  [SMALL_STATE(155)] = 4204,
  [SMALL_STATE(156)] = 4219,
  [SMALL_STATE(157)] = 4238,
  [SMALL_STATE(158)] = 4253,
  [SMALL_STATE(159)] = 4272,
  [SMALL_STATE(160)] = 4291,
  [SMALL_STATE(161)] = 4310,
  [SMALL_STATE(162)] = 4329,
  [SMALL_STATE(163)] = 4348,
  [SMALL_STATE(164)] = 4367,
  [SMALL_STATE(165)] = 4386,
  [SMALL_STATE(166)] = 4405,
  [SMALL_STATE(167)] = 4424,
  [SMALL_STATE(168)] = 4443,
  [SMALL_STATE(169)] = 4462,
  [SMALL_STATE(170)] = 4481,
  [SMALL_STATE(171)] = 4500,
  [SMALL_STATE(172)] = 4519,
  [SMALL_STATE(173)] = 4533,
  [SMALL_STATE(174)] = 4546,
  [SMALL_STATE(175)] = 4559,
  [SMALL_STATE(176)] = 4572,
  [SMALL_STATE(177)] = 4585,
  [SMALL_STATE(178)] = 4598,
  [SMALL_STATE(179)] = 4611,
  [SMALL_STATE(180)] = 4624,
  [SMALL_STATE(181)] = 4637,
  [SMALL_STATE(182)] = 4650,
  [SMALL_STATE(183)] = 4663,
  [SMALL_STATE(184)] = 4676,
  [SMALL_STATE(185)] = 4689,
  [SMALL_STATE(186)] = 4702,
  [SMALL_STATE(187)] = 4715,
  [SMALL_STATE(188)] = 4728,
  [SMALL_STATE(189)] = 4741,
  [SMALL_STATE(190)] = 4754,
  [SMALL_STATE(191)] = 4767,
  [SMALL_STATE(192)] = 4780,
  [SMALL_STATE(193)] = 4793,
  [SMALL_STATE(194)] = 4806,
  [SMALL_STATE(195)] = 4819,
  [SMALL_STATE(196)] = 4832,
  [SMALL_STATE(197)] = 4845,
  [SMALL_STATE(198)] = 4849,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(182),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(184),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(185),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(175),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(178),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(176),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 14),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 14),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 11),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 11),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 11),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 11),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(172),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [524] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
