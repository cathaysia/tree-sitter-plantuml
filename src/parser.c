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
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 13
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

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
  sym_color = 54,
  sym_diagram = 55,
  sym_uml = 56,
  sym_expression = 57,
  sym_attribute = 58,
  sym_attr_alias = 59,
  sym_attr_order = 60,
  sym_string = 61,
  sym_participant_name = 62,
  sym_sequence_diagram = 63,
  sym_json = 64,
  sym_yaml = 65,
  sym_ebnf = 66,
  sym_regex = 67,
  sym_ditaa = 68,
  sym_gantt = 69,
  sym_chronology = 70,
  sym_mindmap = 71,
  sym_wbs = 72,
  sym_chen = 73,
  aux_sym_uml_repeat1 = 74,
  aux_sym_attribute_repeat1 = 75,
  aux_sym_attribute_repeat2 = 76,
  aux_sym_string_repeat1 = 77,
  aux_sym_json_repeat1 = 78,
  aux_sym_json_repeat2 = 79,
  alias_sym_chen_data = 80,
  alias_sym_chronology_data = 81,
  alias_sym_ditaa_data = 82,
  alias_sym_ebnf_data = 83,
  alias_sym_gantt_data = 84,
  alias_sym_json_data = 85,
  alias_sym_left = 86,
  alias_sym_mindmap_data = 87,
  alias_sym_new_name = 88,
  alias_sym_regex_data = 89,
  alias_sym_right = 90,
  alias_sym_wbs_data = 91,
  alias_sym_yaml_data = 92,
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 2,
  [18] = 18,
  [19] = 3,
  [20] = 4,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 42,
  [53] = 42,
  [54] = 54,
  [55] = 42,
  [56] = 42,
  [57] = 42,
  [58] = 42,
  [59] = 42,
  [60] = 42,
  [61] = 42,
  [62] = 48,
  [63] = 39,
  [64] = 48,
  [65] = 39,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
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
  [93] = 92,
  [94] = 94,
  [95] = 92,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 92,
  [100] = 100,
  [101] = 92,
  [102] = 102,
  [103] = 92,
  [104] = 104,
  [105] = 92,
  [106] = 106,
  [107] = 92,
  [108] = 108,
  [109] = 92,
  [110] = 110,
  [111] = 92,
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
  [124] = 124,
  [125] = 125,
  [126] = 2,
  [127] = 127,
  [128] = 4,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(570);
      if (lookahead == '"') ADVANCE(665);
      if (lookahead == '#') ADVANCE(590);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '@') ADVANCE(678);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(701);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 665,
        '#', 590,
        '-', 9,
        '<', 10,
        '@', 67,
        'a', 600,
        'b', 631,
        'c', 630,
        'd', 595,
        'e', 627,
        'o', 637,
        'p', 594,
        'q', 656,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 665,
        ':', 674,
        '@', 66,
        'a', 601,
        'b', 631,
        'c', 630,
        'd', 595,
        'e', 627,
        'p', 594,
        'q', 656,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 665,
        '@', 66,
        'a', 601,
        'b', 631,
        'c', 630,
        'd', 595,
        'e', 627,
        'i', 628,
        'p', 594,
        'q', 656,
        'r', 611,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 665,
        '@', 66,
        'a', 601,
        'b', 631,
        'c', 630,
        'd', 595,
        'e', 627,
        'p', 594,
        'q', 656,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(665);
      if (lookahead == '\\') ADVANCE(667);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0) ADVANCE(666);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(665);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(669);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '>') ADVANCE(670);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(672);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(671);
      END_STATE();
    case 14:
      if (lookahead == '@') ADVANCE(679);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 15:
      if (lookahead == '@') ADVANCE(680);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(691);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 16:
      if (lookahead == '@') ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(692);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 17:
      if (lookahead == '@') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(693);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 18:
      if (lookahead == '@') ADVANCE(683);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(684);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(695);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 20:
      if (lookahead == '@') ADVANCE(685);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 21:
      if (lookahead == '@') ADVANCE(686);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 22:
      if (lookahead == '@') ADVANCE(687);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(698);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(688);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(699);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        'c', 75,
        'd', 79,
        'e', 35,
        'g', 30,
        'j', 136,
        'm', 80,
        'r', 59,
        'w', 36,
        'y', 24,
      );
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        'c', 78,
        'd', 81,
        'e', 38,
        'g', 33,
        'j', 140,
        'm', 82,
        'r', 65,
        'u', 93,
        'w', 37,
        'y', 34,
      );
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(705);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(704);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 83:
      if (lookahead == 'j') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(715);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(714);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(581);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(711);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 151:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 152:
      if (lookahead == 'x') ADVANCE(707);
      END_STATE();
    case 153:
      if (lookahead == 'x') ADVANCE(706);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(713);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(712);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 157:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(157);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(676);
      END_STATE();
    case 158:
      ADVANCE_MAP(
        'A', 366,
        'a', 366,
        'B', 254,
        'b', 254,
        'C', 159,
        'c', 159,
        'D', 160,
        'd', 160,
        'F', 336,
        'f', 336,
        'G', 178,
        'g', 178,
        'H', 425,
        'h', 425,
        'I', 405,
        'i', 405,
        'K', 320,
        'k', 320,
        'L', 161,
        'l', 161,
        'M', 162,
        'm', 162,
        'N', 163,
        'n', 163,
        'O', 363,
        'o', 363,
        'P', 164,
        'p', 164,
        'R', 255,
        'r', 255,
        'S', 165,
        's', 165,
        'T', 172,
        't', 172,
        'V', 341,
        'v', 341,
        'W', 318,
        'w', 318,
        'Y', 266,
        'y', 266,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 159:
      ADVANCE_MAP(
        'A', 236,
        'a', 236,
        'H', 187,
        'h', 187,
        'O', 464,
        'o', 464,
        'R', 340,
        'r', 340,
        'Y', 171,
        'y', 171,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(566);
      END_STATE();
    case 160:
      ADVANCE_MAP(
        'A', 465,
        'a', 465,
        'E', 256,
        'e', 256,
        'I', 394,
        'i', 394,
        'O', 251,
        'o', 251,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(566);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 162:
      ADVANCE_MAP(
        'A', 315,
        'a', 315,
        'E', 243,
        'e', 243,
        'I', 241,
        'i', 241,
        'O', 225,
        'o', 225,
      );
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 164:
      ADVANCE_MAP(
        'A', 375,
        'a', 375,
        'E', 196,
        'e', 196,
        'I', 406,
        'i', 406,
        'L', 529,
        'l', 529,
        'O', 548,
        'o', 548,
        'U', 472,
        'u', 472,
      );
      END_STATE();
    case 165:
      ADVANCE_MAP(
        'A', 240,
        'a', 240,
        'E', 168,
        'e', 168,
        'I', 275,
        'i', 275,
        'K', 554,
        'k', 554,
        'L', 179,
        'l', 179,
        'N', 430,
        'n', 430,
        'P', 478,
        'p', 478,
        'T', 291,
        't', 291,
      );
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 169:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(720);
      END_STATE();
    case 171:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 172:
      ADVANCE_MAP(
        'A', 403,
        'a', 403,
        'E', 182,
        'e', 182,
        'H', 351,
        'h', 351,
        'O', 398,
        'o', 398,
        'R', 200,
        'r', 200,
        'U', 490,
        'u', 490,
      );
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 176:
      ADVANCE_MAP(
        'A', 462,
        'a', 462,
        'B', 370,
        'b', 370,
        'O', 494,
        'o', 494,
        'P', 528,
        'p', 528,
        'S', 289,
        's', 289,
        'T', 530,
        't', 530,
        'V', 356,
        'v', 356,
      );
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 178:
      ADVANCE_MAP(
        'A', 338,
        'a', 338,
        'H', 427,
        'h', 427,
        'O', 367,
        'o', 367,
        'R', 173,
        'r', 173,
      );
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 192:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 193:
      ADVANCE_MAP(
        'A', 383,
        'a', 383,
        'E', 197,
        'e', 197,
        'K', 554,
        'k', 554,
        'L', 206,
        'l', 206,
        'T', 291,
        't', 291,
      );
      END_STATE();
    case 194:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 195:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(426);
      END_STATE();
    case 196:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 197:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 198:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 199:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 200:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 201:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 206:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 207:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 208:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 209:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 211:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(720);
      END_STATE();
    case 212:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(370);
      END_STATE();
    case 213:
      ADVANCE_MAP(
        'B', 370,
        'b', 370,
        'C', 447,
        'c', 447,
        'G', 452,
        'g', 452,
        'P', 331,
        'p', 331,
        'S', 193,
        's', 193,
        'Y', 300,
        'y', 300,
      );
      END_STATE();
    case 214:
      ADVANCE_MAP(
        'B', 370,
        'b', 370,
        'C', 555,
        'c', 555,
        'G', 449,
        'g', 449,
        'K', 320,
        'k', 320,
        'M', 205,
        'm', 205,
        'O', 378,
        'o', 378,
        'R', 274,
        'r', 274,
        'S', 194,
        's', 194,
        'T', 530,
        't', 530,
        'V', 341,
        'v', 341,
      );
      END_STATE();
    case 215:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(370);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(470);
      END_STATE();
    case 216:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(298);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 217:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(491);
      END_STATE();
    case 218:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(469);
      END_STATE();
    case 219:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(444);
      END_STATE();
    case 220:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(380);
      END_STATE();
    case 221:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 222:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 223:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 224:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 225:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 226:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 227:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 228:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 229:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 230:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 231:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 232:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 233:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 234:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 235:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(725);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(377);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 240:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(397);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 241:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(412);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      END_STATE();
    case 242:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 243:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 244:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 245:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 246:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 247:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 248:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 249:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 250:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(559);
      END_STATE();
    case 251:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 252:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 253:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 254:
      ADVANCE_MAP(
        'E', 332,
        'e', 332,
        'I', 495,
        'i', 495,
        'L', 166,
        'l', 166,
        'R', 429,
        'r', 429,
        'U', 473,
        'u', 473,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(566);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(720);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(720);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 301:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(720);
      END_STATE();
    case 302:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(301);
      END_STATE();
    case 303:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(428);
      END_STATE();
    case 305:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(388);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 306:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(448);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(530);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(356);
      END_STATE();
    case 307:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(323);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 308:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(470);
      END_STATE();
    case 309:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 310:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 311:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(265);
      END_STATE();
    case 312:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 313:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 314:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 315:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 316:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(486);
      END_STATE();
    case 317:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 318:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(283);
      END_STATE();
    case 319:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(720);
      END_STATE();
    case 320:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 321:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(454);
      END_STATE();
    case 322:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(504);
      END_STATE();
    case 323:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(509);
      END_STATE();
    case 324:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 325:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(508);
      END_STATE();
    case 326:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      END_STATE();
    case 327:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 328:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(342);
      END_STATE();
    case 329:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(277);
      END_STATE();
    case 330:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 332:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 336:
      ADVANCE_MAP(
        'I', 474,
        'i', 474,
        'L', 438,
        'l', 438,
        'O', 475,
        'o', 475,
        'U', 221,
        'u', 221,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(566);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 357:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(431);
      END_STATE();
    case 358:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(554);
      END_STATE();
    case 359:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(720);
      END_STATE();
    case 360:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(214);
      END_STATE();
    case 361:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(333);
      END_STATE();
    case 362:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(257);
      END_STATE();
    case 363:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 364:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 365:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 366:
      ADVANCE_MAP(
        'L', 337,
        'l', 337,
        'N', 513,
        'n', 513,
        'Q', 532,
        'q', 532,
        'Z', 539,
        'z', 539,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(566);
      END_STATE();
    case 367:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 368:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 369:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 370:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 371:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 372:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 373:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 374:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 375:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 376:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 377:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 378:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 392:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(720);
      END_STATE();
    case 393:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 394:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 395:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(500);
      END_STATE();
    case 396:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 397:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 398:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 399:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(432);
      END_STATE();
    case 400:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 401:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 402:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 403:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 404:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 405:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(440);
      END_STATE();
    case 406:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 407:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 408:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 409:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 410:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 411:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 412:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 413:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 414:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 415:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 416:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 417:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 418:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 419:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 420:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 421:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 422:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 425:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 426:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 427:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 428:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 429:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 430:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 431:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 432:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 433:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 434:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 435:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 436:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 437:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 439:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 440:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 453:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(720);
      END_STATE();
    case 454:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 455:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 456:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(358);
      END_STATE();
    case 457:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 458:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(376);
      END_STATE();
    case 459:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 460:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(536);
      END_STATE();
    case 461:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(535);
      END_STATE();
    case 462:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(538);
      END_STATE();
    case 463:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(537);
      END_STATE();
    case 464:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 465:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      END_STATE();
    case 466:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 467:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 468:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 469:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 470:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 471:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 472:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 473:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 474:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 475:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 476:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 477:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 478:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 479:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 480:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 481:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 487:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 488:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 489:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 490:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 491:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 492:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 494:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 495:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 496:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      END_STATE();
    case 497:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      END_STATE();
    case 498:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      END_STATE();
    case 499:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      END_STATE();
    case 500:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(428);
      END_STATE();
    case 501:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      END_STATE();
    case 502:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(521);
      END_STATE();
    case 503:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(257);
      END_STATE();
    case 504:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      END_STATE();
    case 505:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 506:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 507:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      END_STATE();
    case 508:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 509:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 510:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      END_STATE();
    case 511:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      END_STATE();
    case 512:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 513:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      END_STATE();
    case 514:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 515:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      END_STATE();
    case 516:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 517:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 518:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 519:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 520:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 521:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 522:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 523:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 524:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(488);
      END_STATE();
    case 525:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      END_STATE();
    case 526:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      END_STATE();
    case 527:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 528:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 529:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 530:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(490);
      END_STATE();
    case 531:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 532:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 533:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 534:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 535:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 536:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 537:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 538:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 539:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 540:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(170);
      END_STATE();
    case 541:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(281);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(420);
      END_STATE();
    case 542:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(262);
      END_STATE();
    case 543:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 544:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(293);
      END_STATE();
    case 545:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(720);
      END_STATE();
    case 546:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(726);
      END_STATE();
    case 547:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(403);
      END_STATE();
    case 548:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(246);
      END_STATE();
    case 549:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(284);
      END_STATE();
    case 550:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(326);
      END_STATE();
    case 551:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(443);
      END_STATE();
    case 552:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 553:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(720);
      END_STATE();
    case 554:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 555:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 556:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(551);
      END_STATE();
    case 557:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 558:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(210);
      END_STATE();
    case 559:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 560:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 561:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 562:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 563:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      END_STATE();
    case 564:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 565:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 566:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      END_STATE();
    case 567:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(720);
      END_STATE();
    case 568:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(566);
      END_STATE();
    case 569:
      if (eof) ADVANCE(570);
      if (lookahead == '\n') ADVANCE(701);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_resume);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(651);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead == 'u') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(651);
      if (lookahead == 'u') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'n') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(669);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(667);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(666);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(673);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(676);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(679);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(680);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(691);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(692);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(693);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(683);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(684);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(695);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(685);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(686);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(687);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(698);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '@') ADVANCE(688);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(699);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_json_token2);
      if (lookahead == '\n') ADVANCE(701);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(374);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(736);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(486);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(736);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(734);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(735);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(567);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(734);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(736);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 569},
  [68] = {.lex_state = 569},
  [69] = {.lex_state = 569},
  [70] = {.lex_state = 569},
  [71] = {.lex_state = 569},
  [72] = {.lex_state = 569},
  [73] = {.lex_state = 569},
  [74] = {.lex_state = 569},
  [75] = {.lex_state = 569},
  [76] = {.lex_state = 569},
  [77] = {.lex_state = 569},
  [78] = {.lex_state = 569},
  [79] = {.lex_state = 569},
  [80] = {.lex_state = 569},
  [81] = {.lex_state = 569},
  [82] = {.lex_state = 569},
  [83] = {.lex_state = 569},
  [84] = {.lex_state = 569},
  [85] = {.lex_state = 569},
  [86] = {.lex_state = 569},
  [87] = {.lex_state = 569},
  [88] = {.lex_state = 569},
  [89] = {.lex_state = 569},
  [90] = {.lex_state = 569},
  [91] = {.lex_state = 569},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 569},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 569},
  [97] = {.lex_state = 569},
  [98] = {.lex_state = 569},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 569},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 569},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 569},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 569},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 569},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 569},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 569},
  [113] = {.lex_state = 569},
  [114] = {.lex_state = 569},
  [115] = {.lex_state = 569},
  [116] = {.lex_state = 569},
  [117] = {.lex_state = 569},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 158},
  [122] = {.lex_state = 157},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 562},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 563},
  [127] = {.lex_state = 563},
  [128] = {.lex_state = 563},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
  },
  [1] = {
    [sym_diagram] = STATE(118),
    [sym_uml] = STATE(119),
    [sym_json] = STATE(119),
    [sym_yaml] = STATE(119),
    [sym_ebnf] = STATE(119),
    [sym_regex] = STATE(119),
    [sym_ditaa] = STATE(119),
    [sym_gantt] = STATE(119),
    [sym_chronology] = STATE(119),
    [sym_mindmap] = STATE(119),
    [sym_wbs] = STATE(119),
    [sym_chen] = STATE(119),
    [anon_sym_ATstartuml] = ACTIONS(3),
    [anon_sym_ATstartjson] = ACTIONS(5),
    [anon_sym_ATstartyaml] = ACTIONS(7),
    [anon_sym_ATstartebnf] = ACTIONS(9),
    [anon_sym_ATstartregex] = ACTIONS(11),
    [anon_sym_ATstartditaa] = ACTIONS(13),
    [anon_sym_ATstartgantt] = ACTIONS(15),
    [anon_sym_ATstartchronology] = ACTIONS(17),
    [anon_sym_ATstartmindmap] = ACTIONS(19),
    [anon_sym_ATstartwbs] = ACTIONS(21),
    [anon_sym_ATstartchen] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(25), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(27), 13,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [25] = 2,
    ACTIONS(29), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
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
      anon_sym_order,
      anon_sym_LT_DASH,
  [50] = 2,
    ACTIONS(33), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(35), 13,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [75] = 10,
    ACTIONS(37), 1,
      anon_sym_ATenduml,
    ACTIONS(39), 1,
      anon_sym_autonumber,
    ACTIONS(41), 1,
      anon_sym_autonumberstop,
    ACTIONS(45), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_string,
    STATE(50), 1,
      sym_participant_name,
    STATE(6), 2,
      sym_expression,
      aux_sym_uml_repeat1,
    STATE(21), 2,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(43), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [115] = 10,
    ACTIONS(49), 1,
      anon_sym_ATenduml,
    ACTIONS(51), 1,
      anon_sym_autonumber,
    ACTIONS(54), 1,
      anon_sym_autonumberstop,
    ACTIONS(60), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_string,
    STATE(50), 1,
      sym_participant_name,
    STATE(6), 2,
      sym_expression,
      aux_sym_uml_repeat1,
    STATE(21), 2,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [155] = 10,
    ACTIONS(39), 1,
      anon_sym_autonumber,
    ACTIONS(41), 1,
      anon_sym_autonumberstop,
    ACTIONS(45), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_ATenduml,
    STATE(3), 1,
      sym_string,
    STATE(50), 1,
      sym_participant_name,
    STATE(5), 2,
      sym_expression,
      aux_sym_uml_repeat1,
    STATE(21), 2,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(43), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [195] = 6,
    ACTIONS(72), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_as,
    ACTIONS(76), 1,
      anon_sym_order,
    ACTIONS(68), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(10), 3,
      sym_attr_alias,
      sym_attr_order,
      aux_sym_attribute_repeat2,
    ACTIONS(70), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [227] = 6,
    ACTIONS(82), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      anon_sym_as,
    ACTIONS(88), 1,
      anon_sym_order,
    ACTIONS(78), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(9), 3,
      sym_attr_alias,
      sym_attr_order,
      aux_sym_attribute_repeat2,
    ACTIONS(80), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [259] = 6,
    ACTIONS(72), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_as,
    ACTIONS(76), 1,
      anon_sym_order,
    ACTIONS(91), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(9), 3,
      sym_attr_alias,
      sym_attr_order,
      aux_sym_attribute_repeat2,
    ACTIONS(93), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [291] = 5,
    ACTIONS(101), 1,
      aux_sym_attribute_token3,
    STATE(15), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(99), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(95), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(97), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [319] = 2,
    ACTIONS(78), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(80), 12,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [340] = 2,
    ACTIONS(103), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(105), 12,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [361] = 2,
    ACTIONS(107), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(109), 12,
      anon_sym_autonumber,
      anon_sym_participant,
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
  [382] = 4,
    ACTIONS(111), 1,
      aux_sym_attribute_token3,
    STATE(16), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(68), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(70), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [406] = 4,
    ACTIONS(117), 1,
      aux_sym_attribute_token3,
    STATE(16), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(113), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(115), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [430] = 2,
    ACTIONS(25), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(27), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [449] = 3,
    ACTIONS(124), 1,
      anon_sym_COLON,
    ACTIONS(120), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(122), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [470] = 2,
    ACTIONS(29), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(31), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [489] = 2,
    ACTIONS(33), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(35), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [508] = 2,
    ACTIONS(126), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(128), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [526] = 2,
    ACTIONS(95), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(97), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [544] = 2,
    ACTIONS(91), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(93), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [562] = 2,
    ACTIONS(130), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(132), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [580] = 2,
    ACTIONS(134), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(136), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [598] = 3,
    ACTIONS(140), 1,
      anon_sym_ATendgantt,
    STATE(30), 1,
      aux_sym_json_repeat1,
    ACTIONS(138), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [609] = 3,
    ACTIONS(144), 1,
      anon_sym_ATendebnf,
    STATE(53), 1,
      aux_sym_json_repeat1,
    ACTIONS(142), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [620] = 3,
    ACTIONS(148), 1,
      anon_sym_ATendregex,
    STATE(55), 1,
      aux_sym_json_repeat1,
    ACTIONS(146), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [631] = 3,
    ACTIONS(152), 1,
      anon_sym_ATendditaa,
    STATE(56), 1,
      aux_sym_json_repeat1,
    ACTIONS(150), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [642] = 3,
    ACTIONS(154), 1,
      anon_sym_ATendgantt,
    STATE(57), 1,
      aux_sym_json_repeat1,
    ACTIONS(138), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [653] = 3,
    ACTIONS(158), 1,
      anon_sym_ATendchronology,
    STATE(58), 1,
      aux_sym_json_repeat1,
    ACTIONS(156), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [664] = 3,
    ACTIONS(162), 1,
      anon_sym_ATendmindmap,
    STATE(59), 1,
      aux_sym_json_repeat1,
    ACTIONS(160), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [675] = 3,
    ACTIONS(166), 1,
      anon_sym_ATendwbs,
    STATE(60), 1,
      aux_sym_json_repeat1,
    ACTIONS(164), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [686] = 3,
    ACTIONS(170), 1,
      anon_sym_ATendchen,
    STATE(61), 1,
      aux_sym_json_repeat1,
    ACTIONS(168), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [697] = 4,
    ACTIONS(172), 1,
      aux_sym_attribute_token1,
    ACTIONS(174), 1,
      aux_sym_attribute_token2,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_string,
  [710] = 3,
    ACTIONS(178), 1,
      anon_sym_ATendchronology,
    STATE(31), 1,
      aux_sym_json_repeat1,
    ACTIONS(156), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [721] = 3,
    ACTIONS(180), 1,
      anon_sym_ATendmindmap,
    STATE(32), 1,
      aux_sym_json_repeat1,
    ACTIONS(160), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [732] = 3,
    ACTIONS(182), 1,
      anon_sym_ATendwbs,
    STATE(33), 1,
      aux_sym_json_repeat1,
    ACTIONS(164), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [743] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(186), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [754] = 4,
    ACTIONS(188), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_participant_name,
    STATE(19), 1,
      sym_string,
  [767] = 3,
    ACTIONS(192), 1,
      anon_sym_ATendchen,
    STATE(34), 1,
      aux_sym_json_repeat1,
    ACTIONS(168), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [778] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendjson,
    STATE(42), 1,
      aux_sym_json_repeat1,
    ACTIONS(194), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [789] = 3,
    ACTIONS(201), 1,
      anon_sym_ATendyaml,
    STATE(46), 1,
      aux_sym_json_repeat1,
    ACTIONS(199), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [800] = 3,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(205), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [811] = 3,
    ACTIONS(208), 1,
      anon_sym_ATendebnf,
    STATE(27), 1,
      aux_sym_json_repeat1,
    ACTIONS(142), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [822] = 3,
    ACTIONS(210), 1,
      anon_sym_ATendyaml,
    STATE(52), 1,
      aux_sym_json_repeat1,
    ACTIONS(199), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [833] = 3,
    ACTIONS(212), 1,
      anon_sym_ATendregex,
    STATE(28), 1,
      aux_sym_json_repeat1,
    ACTIONS(146), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [844] = 3,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(216), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [855] = 3,
    ACTIONS(218), 1,
      anon_sym_ATendditaa,
    STATE(29), 1,
      aux_sym_json_repeat1,
    ACTIONS(150), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [866] = 2,
    ACTIONS(222), 1,
      anon_sym_LT_DASH,
    ACTIONS(220), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [875] = 3,
    ACTIONS(226), 1,
      anon_sym_ATendjson,
    STATE(54), 1,
      aux_sym_json_repeat1,
    ACTIONS(224), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [886] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendyaml,
    STATE(52), 1,
      aux_sym_json_repeat1,
    ACTIONS(228), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [897] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendebnf,
    STATE(53), 1,
      aux_sym_json_repeat1,
    ACTIONS(231), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [908] = 3,
    ACTIONS(234), 1,
      anon_sym_ATendjson,
    STATE(42), 1,
      aux_sym_json_repeat1,
    ACTIONS(224), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [919] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendregex,
    STATE(55), 1,
      aux_sym_json_repeat1,
    ACTIONS(236), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [930] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendditaa,
    STATE(56), 1,
      aux_sym_json_repeat1,
    ACTIONS(239), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [941] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendgantt,
    STATE(57), 1,
      aux_sym_json_repeat1,
    ACTIONS(242), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [952] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendchronology,
    STATE(58), 1,
      aux_sym_json_repeat1,
    ACTIONS(245), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [963] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendmindmap,
    STATE(59), 1,
      aux_sym_json_repeat1,
    ACTIONS(248), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [974] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendwbs,
    STATE(60), 1,
      aux_sym_json_repeat1,
    ACTIONS(251), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [985] = 3,
    ACTIONS(197), 1,
      anon_sym_ATendchen,
    STATE(61), 1,
      aux_sym_json_repeat1,
    ACTIONS(254), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [996] = 3,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1007] = 3,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(186), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1018] = 3,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_string_repeat1,
    ACTIONS(265), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1029] = 3,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(186), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1040] = 4,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_attr_alias_token1,
    STATE(3), 1,
      sym_string,
    STATE(8), 1,
      sym_participant_name,
  [1053] = 3,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      aux_sym_json_token2,
    STATE(106), 1,
      aux_sym_json_repeat2,
  [1063] = 3,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      aux_sym_json_token2,
    STATE(84), 1,
      aux_sym_json_repeat2,
  [1073] = 3,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1083] = 3,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      aux_sym_json_token2,
    STATE(85), 1,
      aux_sym_json_repeat2,
  [1093] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1103] = 3,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      aux_sym_json_token2,
    STATE(86), 1,
      aux_sym_json_repeat2,
  [1113] = 3,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      aux_sym_json_token2,
    STATE(115), 1,
      aux_sym_json_repeat2,
  [1123] = 3,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 1,
      aux_sym_json_token2,
    STATE(110), 1,
      aux_sym_json_repeat2,
  [1133] = 3,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      aux_sym_json_token2,
    STATE(88), 1,
      aux_sym_json_repeat2,
  [1143] = 3,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      aux_sym_json_token2,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1153] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1163] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1173] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1183] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1193] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1203] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1213] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1223] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1233] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1243] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1253] = 3,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 1,
      aux_sym_json_token2,
    STATE(98), 1,
      aux_sym_json_repeat2,
  [1263] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1273] = 3,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 1,
      aux_sym_json_token2,
    STATE(113), 1,
      aux_sym_json_repeat2,
  [1283] = 3,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      aux_sym_json_token2,
    STATE(71), 1,
      aux_sym_json_repeat2,
  [1293] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1303] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [1309] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [1315] = 3,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 1,
      aux_sym_json_token2,
    STATE(77), 1,
      aux_sym_json_repeat2,
  [1325] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [1331] = 3,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      aux_sym_json_token2,
    STATE(91), 1,
      aux_sym_json_repeat2,
  [1341] = 3,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      aux_sym_json_token2,
    STATE(102), 1,
      aux_sym_json_repeat2,
  [1351] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1361] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [1367] = 3,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      aux_sym_json_token2,
    STATE(78), 1,
      aux_sym_json_repeat2,
  [1377] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [1383] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1393] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [1399] = 3,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      aux_sym_json_token2,
    STATE(79), 1,
      aux_sym_json_repeat2,
  [1409] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [1415] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1425] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [1431] = 3,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 1,
      aux_sym_json_token2,
    STATE(80), 1,
      aux_sym_json_repeat2,
  [1441] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [1447] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1457] = 1,
    ACTIONS(346), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [1463] = 3,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      aux_sym_json_token2,
    STATE(81), 1,
      aux_sym_json_repeat2,
  [1473] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1483] = 3,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      aux_sym_json_token2,
    STATE(82), 1,
      aux_sym_json_repeat2,
  [1493] = 3,
    ACTIONS(281), 1,
      aux_sym_json_token2,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_json_repeat2,
  [1503] = 3,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 1,
      aux_sym_json_token2,
    STATE(83), 1,
      aux_sym_json_repeat2,
  [1513] = 3,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      aux_sym_json_token2,
    STATE(69), 1,
      aux_sym_json_repeat2,
  [1523] = 1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
  [1527] = 1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
  [1531] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1535] = 1,
    ACTIONS(406), 1,
      sym_color,
  [1539] = 1,
    ACTIONS(408), 1,
      aux_sym_sequence_diagram_token1,
  [1543] = 1,
    ACTIONS(410), 1,
      aux_sym_attr_alias_token1,
  [1547] = 1,
    ACTIONS(412), 1,
      aux_sym_attribute_token3,
  [1551] = 1,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
  [1555] = 1,
    ACTIONS(25), 1,
      aux_sym_attribute_token2,
  [1559] = 1,
    ACTIONS(416), 1,
      aux_sym_attribute_token2,
  [1563] = 1,
    ACTIONS(33), 1,
      aux_sym_attribute_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 155,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 227,
  [SMALL_STATE(10)] = 259,
  [SMALL_STATE(11)] = 291,
  [SMALL_STATE(12)] = 319,
  [SMALL_STATE(13)] = 340,
  [SMALL_STATE(14)] = 361,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 406,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 449,
  [SMALL_STATE(19)] = 470,
  [SMALL_STATE(20)] = 489,
  [SMALL_STATE(21)] = 508,
  [SMALL_STATE(22)] = 526,
  [SMALL_STATE(23)] = 544,
  [SMALL_STATE(24)] = 562,
  [SMALL_STATE(25)] = 580,
  [SMALL_STATE(26)] = 598,
  [SMALL_STATE(27)] = 609,
  [SMALL_STATE(28)] = 620,
  [SMALL_STATE(29)] = 631,
  [SMALL_STATE(30)] = 642,
  [SMALL_STATE(31)] = 653,
  [SMALL_STATE(32)] = 664,
  [SMALL_STATE(33)] = 675,
  [SMALL_STATE(34)] = 686,
  [SMALL_STATE(35)] = 697,
  [SMALL_STATE(36)] = 710,
  [SMALL_STATE(37)] = 721,
  [SMALL_STATE(38)] = 732,
  [SMALL_STATE(39)] = 743,
  [SMALL_STATE(40)] = 754,
  [SMALL_STATE(41)] = 767,
  [SMALL_STATE(42)] = 778,
  [SMALL_STATE(43)] = 789,
  [SMALL_STATE(44)] = 800,
  [SMALL_STATE(45)] = 811,
  [SMALL_STATE(46)] = 822,
  [SMALL_STATE(47)] = 833,
  [SMALL_STATE(48)] = 844,
  [SMALL_STATE(49)] = 855,
  [SMALL_STATE(50)] = 866,
  [SMALL_STATE(51)] = 875,
  [SMALL_STATE(52)] = 886,
  [SMALL_STATE(53)] = 897,
  [SMALL_STATE(54)] = 908,
  [SMALL_STATE(55)] = 919,
  [SMALL_STATE(56)] = 930,
  [SMALL_STATE(57)] = 941,
  [SMALL_STATE(58)] = 952,
  [SMALL_STATE(59)] = 963,
  [SMALL_STATE(60)] = 974,
  [SMALL_STATE(61)] = 985,
  [SMALL_STATE(62)] = 996,
  [SMALL_STATE(63)] = 1007,
  [SMALL_STATE(64)] = 1018,
  [SMALL_STATE(65)] = 1029,
  [SMALL_STATE(66)] = 1040,
  [SMALL_STATE(67)] = 1053,
  [SMALL_STATE(68)] = 1063,
  [SMALL_STATE(69)] = 1073,
  [SMALL_STATE(70)] = 1083,
  [SMALL_STATE(71)] = 1093,
  [SMALL_STATE(72)] = 1103,
  [SMALL_STATE(73)] = 1113,
  [SMALL_STATE(74)] = 1123,
  [SMALL_STATE(75)] = 1133,
  [SMALL_STATE(76)] = 1143,
  [SMALL_STATE(77)] = 1153,
  [SMALL_STATE(78)] = 1163,
  [SMALL_STATE(79)] = 1173,
  [SMALL_STATE(80)] = 1183,
  [SMALL_STATE(81)] = 1193,
  [SMALL_STATE(82)] = 1203,
  [SMALL_STATE(83)] = 1213,
  [SMALL_STATE(84)] = 1223,
  [SMALL_STATE(85)] = 1233,
  [SMALL_STATE(86)] = 1243,
  [SMALL_STATE(87)] = 1253,
  [SMALL_STATE(88)] = 1263,
  [SMALL_STATE(89)] = 1273,
  [SMALL_STATE(90)] = 1283,
  [SMALL_STATE(91)] = 1293,
  [SMALL_STATE(92)] = 1303,
  [SMALL_STATE(93)] = 1309,
  [SMALL_STATE(94)] = 1315,
  [SMALL_STATE(95)] = 1325,
  [SMALL_STATE(96)] = 1331,
  [SMALL_STATE(97)] = 1341,
  [SMALL_STATE(98)] = 1351,
  [SMALL_STATE(99)] = 1361,
  [SMALL_STATE(100)] = 1367,
  [SMALL_STATE(101)] = 1377,
  [SMALL_STATE(102)] = 1383,
  [SMALL_STATE(103)] = 1393,
  [SMALL_STATE(104)] = 1399,
  [SMALL_STATE(105)] = 1409,
  [SMALL_STATE(106)] = 1415,
  [SMALL_STATE(107)] = 1425,
  [SMALL_STATE(108)] = 1431,
  [SMALL_STATE(109)] = 1441,
  [SMALL_STATE(110)] = 1447,
  [SMALL_STATE(111)] = 1457,
  [SMALL_STATE(112)] = 1463,
  [SMALL_STATE(113)] = 1473,
  [SMALL_STATE(114)] = 1483,
  [SMALL_STATE(115)] = 1493,
  [SMALL_STATE(116)] = 1503,
  [SMALL_STATE(117)] = 1513,
  [SMALL_STATE(118)] = 1523,
  [SMALL_STATE(119)] = 1527,
  [SMALL_STATE(120)] = 1531,
  [SMALL_STATE(121)] = 1535,
  [SMALL_STATE(122)] = 1539,
  [SMALL_STATE(123)] = 1543,
  [SMALL_STATE(124)] = 1547,
  [SMALL_STATE(125)] = 1551,
  [SMALL_STATE(126)] = 1555,
  [SMALL_STATE(127)] = 1559,
  [SMALL_STATE(128)] = 1563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(121),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(123),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 12),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 12),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 11),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 11),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 11),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 11),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(76),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [400] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
