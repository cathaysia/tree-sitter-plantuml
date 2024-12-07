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
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 13
#define TOKEN_COUNT 60
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
  anon_sym_SQUOTE = 54,
  aux_sym_comment_token1 = 55,
  anon_sym_SLASH_SQUOTE = 56,
  aux_sym_comment_token2 = 57,
  anon_sym_SQUOTE_SLASH = 58,
  sym_color = 59,
  sym_diagram = 60,
  sym_uml = 61,
  sym_expression = 62,
  sym_attribute = 63,
  sym_attr_alias = 64,
  sym_attr_order = 65,
  sym_string = 66,
  sym_participant_name = 67,
  sym_sequence_diagram = 68,
  sym_json = 69,
  sym_yaml = 70,
  sym_ebnf = 71,
  sym_regex = 72,
  sym_ditaa = 73,
  sym_gantt = 74,
  sym_chronology = 75,
  sym_mindmap = 76,
  sym_wbs = 77,
  sym_chen = 78,
  sym_comment = 79,
  aux_sym_uml_repeat1 = 80,
  aux_sym_attribute_repeat1 = 81,
  aux_sym_attribute_repeat2 = 82,
  aux_sym_string_repeat1 = 83,
  aux_sym_json_repeat1 = 84,
  aux_sym_json_repeat2 = 85,
  aux_sym_comment_repeat1 = 86,
  alias_sym_chen_data = 87,
  alias_sym_chronology_data = 88,
  alias_sym_ditaa_data = 89,
  alias_sym_ebnf_data = 90,
  alias_sym_gantt_data = 91,
  alias_sym_json_data = 92,
  alias_sym_left = 93,
  alias_sym_mindmap_data = 94,
  alias_sym_new_name = 95,
  alias_sym_regex_data = 96,
  alias_sym_right = 97,
  alias_sym_wbs_data = 98,
  alias_sym_yaml_data = 99,
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
  [17] = 17,
  [18] = 18,
  [19] = 2,
  [20] = 20,
  [21] = 3,
  [22] = 4,
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
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 47,
  [55] = 55,
  [56] = 47,
  [57] = 57,
  [58] = 47,
  [59] = 47,
  [60] = 47,
  [61] = 47,
  [62] = 62,
  [63] = 47,
  [64] = 47,
  [65] = 47,
  [66] = 52,
  [67] = 45,
  [68] = 52,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 70,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 70,
  [103] = 103,
  [104] = 70,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 70,
  [109] = 109,
  [110] = 70,
  [111] = 111,
  [112] = 70,
  [113] = 70,
  [114] = 114,
  [115] = 115,
  [116] = 70,
  [117] = 117,
  [118] = 70,
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
  [130] = 4,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 3,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(584);
      ADVANCE_MAP(
        '"', 679,
        '#', 604,
        '\'', 739,
        '-', 36,
        '/', 18,
        ':', 689,
        '<', 37,
        '@', 694,
        '\\', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(718);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(738);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(741);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(744);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 679,
        '\'', 737,
        '/', 18,
        ':', 689,
        '@', 83,
        'a', 615,
        'b', 645,
        'c', 644,
        'd', 609,
        'e', 641,
        'p', 608,
        'q', 670,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 679,
        '\'', 737,
        '/', 18,
        '@', 83,
        'a', 615,
        'b', 645,
        'c', 644,
        'd', 609,
        'e', 641,
        'i', 642,
        'p', 608,
        'q', 670,
        'r', 625,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 679,
        '\'', 737,
        '/', 18,
        '@', 83,
        'a', 615,
        'b', 645,
        'c', 644,
        'd', 609,
        'e', 641,
        'p', 608,
        'q', 670,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(679);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(679);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(679);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == '\\') ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0) ADVANCE(680);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(684);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(746);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == ',') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(739);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(739);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(743);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(743);
      if (lookahead == ',') ADVANCE(14);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\'', 737,
        '/', 18,
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
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(695);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(707);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(696);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(708);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(698);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(710);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(711);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(700);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(712);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(701);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(714);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(703);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(715);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(716);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(740);
      if (lookahead == '/') ADVANCE(691);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(692);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '>') ADVANCE(685);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(687);
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
      if (lookahead == '>') ADVANCE(686);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 56:
      ADVANCE_MAP(
        'c', 92,
        'd', 96,
        'e', 52,
        'g', 47,
        'j', 153,
        'm', 97,
        'r', 76,
        'w', 53,
        'y', 41,
      );
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        'c', 95,
        'd', 98,
        'e', 55,
        'g', 50,
        'j', 157,
        'm', 99,
        'r', 82,
        'u', 110,
        'w', 54,
        'y', 51,
      );
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(87);
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
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(722);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(721);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 'j') ADVANCE(153);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(719);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(732);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(731);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(595);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(734);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(733);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(728);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(727);
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
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 168:
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 169:
      if (lookahead == 'x') ADVANCE(724);
      END_STATE();
    case 170:
      if (lookahead == 'x') ADVANCE(723);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(730);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(729);
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
          lookahead == 'a') ADVANCE(748);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(748);
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
          lookahead == 'b') ADVANCE(748);
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
          lookahead == 'd') ADVANCE(748);
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
          lookahead == 'd') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      END_STATE();
    case 252:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(748);
      END_STATE();
    case 253:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(753);
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
          lookahead == 'e') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
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
          lookahead == 'y') ADVANCE(748);
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
          lookahead == 'y') ADVANCE(748);
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
          lookahead == 'f') ADVANCE(748);
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
          lookahead == 'h') ADVANCE(748);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(748);
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
          lookahead == 'k') ADVANCE(748);
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
          lookahead == 'l') ADVANCE(748);
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
          lookahead == 'm') ADVANCE(748);
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
          lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 419:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(761);
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
          lookahead == 'o') ADVANCE(748);
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
          lookahead == 'p') ADVANCE(748);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      END_STATE();
    case 481:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
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
          lookahead == 't') ADVANCE(748);
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
          lookahead == 't') ADVANCE(749);
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
          lookahead == 'u') ADVANCE(748);
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
          lookahead == 'w') ADVANCE(748);
      END_STATE();
    case 561:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(754);
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
          lookahead == 'y') ADVANCE(748);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 578:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 579:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      END_STATE();
    case 580:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(748);
      END_STATE();
    case 581:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(579);
      END_STATE();
    case 582:
      if (eof) ADVANCE(584);
      if (lookahead == '\n') ADVANCE(718);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(582);
      END_STATE();
    case 583:
      if (eof) ADVANCE(584);
      ADVANCE_MAP(
        '"', 679,
        '#', 604,
        '\'', 737,
        '-', 36,
        '/', 18,
        '<', 37,
        '@', 84,
        'a', 614,
        'b', 645,
        'c', 644,
        'd', 609,
        'e', 641,
        'o', 651,
        'p', 608,
        'q', 670,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_resume);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(665);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(684);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(743);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == '\\') ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(680);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(740);
      if (lookahead == '/') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(692);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(692);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(743);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(695);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(707);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(696);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(708);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(698);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(710);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(711);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(700);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(712);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(701);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(714);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(703);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(715);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(737);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '@') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(716);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_json_token2);
      if (lookahead == '\n') ADVANCE(718);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '/') ADVANCE(747);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(692);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(738);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(692);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SLASH);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(389);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(764);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(501);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(764);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(762);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(356);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(763);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(580);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(762);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(764);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 583},
  [2] = {.lex_state = 583},
  [3] = {.lex_state = 583},
  [4] = {.lex_state = 583},
  [5] = {.lex_state = 583},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 583},
  [10] = {.lex_state = 583},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 583},
  [13] = {.lex_state = 583},
  [14] = {.lex_state = 583},
  [15] = {.lex_state = 583},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 583},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 30},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 31},
  [71] = {.lex_state = 582},
  [72] = {.lex_state = 582},
  [73] = {.lex_state = 582},
  [74] = {.lex_state = 582},
  [75] = {.lex_state = 582},
  [76] = {.lex_state = 582},
  [77] = {.lex_state = 582},
  [78] = {.lex_state = 582},
  [79] = {.lex_state = 582},
  [80] = {.lex_state = 582},
  [81] = {.lex_state = 582},
  [82] = {.lex_state = 582},
  [83] = {.lex_state = 582},
  [84] = {.lex_state = 582},
  [85] = {.lex_state = 582},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 582},
  [88] = {.lex_state = 582},
  [89] = {.lex_state = 582},
  [90] = {.lex_state = 582},
  [91] = {.lex_state = 582},
  [92] = {.lex_state = 582},
  [93] = {.lex_state = 582},
  [94] = {.lex_state = 582},
  [95] = {.lex_state = 582},
  [96] = {.lex_state = 582},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 582},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 582},
  [101] = {.lex_state = 582},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 582},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 582},
  [106] = {.lex_state = 582},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 582},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 582},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 582},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 582},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 582},
  [120] = {.lex_state = 582},
  [121] = {.lex_state = 582},
  [122] = {.lex_state = 582},
  [123] = {.lex_state = 582},
  [124] = {.lex_state = 582},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 582},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 583},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 33},
  [133] = {.lex_state = 583},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 583},
  [136] = {.lex_state = 20},
  [137] = {.lex_state = 583},
  [138] = {.lex_state = 2},
  [139] = {(TSStateId)(-1)},
  [140] = {(TSStateId)(-1)},
  [141] = {(TSStateId)(-1)},
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
    [sym_diagram] = STATE(133),
    [sym_uml] = STATE(135),
    [sym_json] = STATE(135),
    [sym_yaml] = STATE(135),
    [sym_ebnf] = STATE(135),
    [sym_regex] = STATE(135),
    [sym_ditaa] = STATE(135),
    [sym_gantt] = STATE(135),
    [sym_chronology] = STATE(135),
    [sym_mindmap] = STATE(135),
    [sym_wbs] = STATE(135),
    [sym_chen] = STATE(135),
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
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_comment,
    ACTIONS(31), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(33), 13,
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
  [34] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      sym_comment,
    ACTIONS(35), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(37), 13,
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
  [68] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym_comment,
    ACTIONS(39), 7,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(41), 13,
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
  [102] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(51), 1,
      anon_sym_order,
    STATE(5), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_attribute_repeat2,
    STATE(12), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(43), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(45), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [145] = 14,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_ATenduml,
    ACTIONS(55), 1,
      anon_sym_autonumber,
    ACTIONS(57), 1,
      anon_sym_autonumberstop,
    ACTIONS(61), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_string,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(24), 1,
      sym_expression,
    STATE(57), 1,
      sym_participant_name,
    STATE(23), 2,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(59), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [196] = 14,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_autonumber,
    ACTIONS(57), 1,
      anon_sym_autonumberstop,
    ACTIONS(61), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_ATenduml,
    STATE(2), 1,
      sym_string,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(24), 1,
      sym_expression,
    STATE(57), 1,
      sym_participant_name,
    STATE(23), 2,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(59), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [247] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_ATenduml,
    ACTIONS(69), 1,
      anon_sym_autonumber,
    ACTIONS(72), 1,
      anon_sym_autonumberstop,
    ACTIONS(78), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_string,
    STATE(24), 1,
      sym_expression,
    STATE(57), 1,
      sym_participant_name,
    STATE(8), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(23), 2,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(75), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [296] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      anon_sym_as,
    ACTIONS(94), 1,
      anon_sym_order,
    STATE(9), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(12), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(84), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(86), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [337] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(51), 1,
      anon_sym_order,
    STATE(9), 1,
      aux_sym_attribute_repeat2,
    STATE(10), 1,
      sym_comment,
    STATE(12), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(97), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(99), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [380] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      aux_sym_attribute_token3,
    STATE(11), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(105), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(101), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(103), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [417] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(111), 12,
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
  [447] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_comment,
    ACTIONS(113), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
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
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [477] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
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
      anon_sym_as,
      aux_sym_attr_alias_token1,
      anon_sym_order,
  [507] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(86), 12,
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
  [537] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      aux_sym_attribute_token3,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(43), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(45), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [570] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      aux_sym_attribute_token3,
    STATE(17), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(121), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(123), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [601] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(130), 11,
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
  [629] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym_comment,
    ACTIONS(31), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(33), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [657] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_COLON,
    STATE(20), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(134), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [687] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_comment,
    ACTIONS(35), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(37), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [715] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym_comment,
    ACTIONS(39), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(41), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [743] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(140), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [770] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(144), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [797] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(103), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [824] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(148), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [851] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(152), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [878] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(99), 10,
      anon_sym_autonumber,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
  [905] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_ATendchen,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(29), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_json_repeat1,
    ACTIONS(154), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [925] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(162), 1,
      anon_sym_ATendjson,
    STATE(30), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_json_repeat1,
    ACTIONS(160), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [945] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_ATendyaml,
    STATE(31), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_json_repeat1,
    ACTIONS(164), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [965] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_ATendebnf,
    STATE(32), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_json_repeat1,
    ACTIONS(168), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [985] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(174), 1,
      anon_sym_ATendregex,
    STATE(33), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_json_repeat1,
    ACTIONS(172), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1005] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(178), 1,
      anon_sym_ATendditaa,
    STATE(34), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_json_repeat1,
    ACTIONS(176), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1025] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(182), 1,
      anon_sym_ATendgantt,
    STATE(35), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_json_repeat1,
    ACTIONS(180), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1045] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_ATendchronology,
    STATE(36), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_json_repeat1,
    ACTIONS(184), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1065] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_ATendmindmap,
    STATE(37), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_json_repeat1,
    ACTIONS(188), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1085] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_ATendwbs,
    STATE(38), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_json_repeat1,
    ACTIONS(192), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1105] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(196), 1,
      anon_sym_ATendchen,
    STATE(39), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_json_repeat1,
    ACTIONS(154), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1125] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      aux_sym_attribute_token1,
    ACTIONS(200), 1,
      aux_sym_attribute_token2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_comment,
    STATE(131), 1,
      sym_string,
  [1147] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_ATendgantt,
    STATE(35), 1,
      aux_sym_json_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1167] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_ATendchronology,
    STATE(36), 1,
      aux_sym_json_repeat1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1187] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_ATendmindmap,
    STATE(37), 1,
      aux_sym_json_repeat1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1207] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_ATendwbs,
    STATE(38), 1,
      aux_sym_json_repeat1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(192), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1227] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(214), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1247] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_string,
    STATE(20), 1,
      sym_participant_name,
    STATE(46), 1,
      sym_comment,
  [1269] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendjson,
    ACTIONS(220), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(47), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1287] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(48), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [1305] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(214), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1325] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      aux_sym_attr_alias_token1,
    STATE(2), 1,
      sym_string,
    STATE(5), 1,
      sym_participant_name,
    STATE(50), 1,
      sym_comment,
  [1347] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_ATendyaml,
    STATE(31), 1,
      aux_sym_json_repeat1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1367] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(214), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1387] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_ATendebnf,
    STATE(32), 1,
      aux_sym_json_repeat1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1407] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendyaml,
    ACTIONS(240), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(54), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1425] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(243), 1,
      anon_sym_ATendregex,
    STATE(33), 1,
      aux_sym_json_repeat1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1445] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendebnf,
    ACTIONS(245), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(56), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1463] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      anon_sym_LT_DASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [1481] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendregex,
    ACTIONS(252), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(58), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1499] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendditaa,
    ACTIONS(255), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(59), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1517] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendgantt,
    ACTIONS(258), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(60), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1535] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendchronology,
    ACTIONS(261), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(61), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1553] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_ATendditaa,
    STATE(34), 1,
      aux_sym_json_repeat1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1573] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendmindmap,
    ACTIONS(266), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(63), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1591] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendwbs,
    ACTIONS(269), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(64), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1609] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_ATendchen,
    ACTIONS(272), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(65), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [1627] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(214), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1647] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(214), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1667] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_string_repeat1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(214), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [1687] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_ATendjson,
    STATE(30), 1,
      aux_sym_json_repeat1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [1707] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [1722] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    STATE(71), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_json_repeat2,
  [1741] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_json_repeat2,
  [1760] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_json_repeat2,
  [1779] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_json_repeat2,
  [1798] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_json_repeat2,
  [1817] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_json_repeat2,
  [1836] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_json_repeat2,
  [1855] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_json_repeat2,
  [1874] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_json_repeat2,
  [1893] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_json_repeat2,
  [1912] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_json_repeat2,
  [1931] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_json_repeat2,
  [1950] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_json_repeat2,
  [1969] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_json_repeat2,
  [1988] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      aux_sym_json_repeat2,
    STATE(85), 1,
      sym_comment,
  [2007] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(317), 1,
      aux_sym_comment_token2,
    ACTIONS(319), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(86), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_comment_repeat1,
  [2026] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      aux_sym_json_token2,
    STATE(87), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [2043] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(88), 1,
      sym_comment,
  [2062] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(89), 1,
      sym_comment,
  [2081] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(90), 1,
      sym_comment,
  [2100] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(91), 1,
      sym_comment,
  [2119] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(92), 1,
      sym_comment,
  [2138] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(93), 1,
      sym_comment,
  [2157] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(94), 1,
      sym_comment,
  [2176] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(95), 1,
      sym_comment,
  [2195] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(96), 1,
      sym_comment,
  [2214] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [2229] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(98), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_json_repeat2,
  [2248] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(346), 1,
      aux_sym_comment_token2,
    ACTIONS(349), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(99), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [2265] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      aux_sym_json_repeat2,
    STATE(100), 1,
      sym_comment,
  [2284] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_json_repeat2,
  [2303] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(102), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [2318] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      aux_sym_json_repeat2,
    STATE(103), 1,
      sym_comment,
  [2337] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [2352] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      aux_sym_json_repeat2,
    STATE(105), 1,
      sym_comment,
  [2371] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym_json_repeat2,
    STATE(106), 1,
      sym_comment,
  [2390] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2405] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [2420] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_json_repeat2,
  [2439] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [2454] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      aux_sym_json_repeat2,
    STATE(111), 1,
      sym_comment,
  [2473] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [2488] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [2503] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(317), 1,
      aux_sym_comment_token2,
    ACTIONS(367), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(86), 1,
      aux_sym_comment_repeat1,
    STATE(114), 1,
      sym_comment,
  [2522] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(115), 1,
      sym_comment,
  [2541] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [2556] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      aux_sym_json_repeat2,
    STATE(117), 1,
      sym_comment,
  [2575] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [2590] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      aux_sym_json_repeat2,
    STATE(119), 1,
      sym_comment,
  [2609] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(120), 1,
      sym_comment,
  [2628] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      aux_sym_json_repeat2,
    STATE(121), 1,
      sym_comment,
  [2647] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(122), 1,
      sym_comment,
  [2666] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      aux_sym_json_repeat2,
    STATE(123), 1,
      sym_comment,
  [2685] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_json_token2,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_json_repeat2,
    STATE(124), 1,
      sym_comment,
  [2704] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(385), 2,
      aux_sym_comment_token2,
      anon_sym_SQUOTE_SLASH,
  [2718] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      aux_sym_json_token2,
  [2732] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      aux_sym_attr_alias_token1,
    STATE(127), 1,
      sym_comment,
  [2745] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_attribute_token3,
    STATE(128), 1,
      sym_comment,
  [2758] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_comment,
  [2771] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym_attribute_token2,
    STATE(130), 1,
      sym_comment,
  [2784] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_attribute_token2,
    STATE(131), 1,
      sym_comment,
  [2797] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(397), 1,
      aux_sym_sequence_diagram_token1,
    STATE(132), 1,
      sym_comment,
  [2810] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_comment,
  [2823] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_attribute_token2,
    STATE(134), 1,
      sym_comment,
  [2836] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_comment,
  [2849] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      sym_color,
    STATE(136), 1,
      sym_comment,
  [2862] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_comment,
  [2875] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(407), 1,
      aux_sym_comment_token1,
    STATE(138), 1,
      sym_comment,
  [2888] = 1,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
  [2892] = 1,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
  [2896] = 1,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 337,
  [SMALL_STATE(11)] = 380,
  [SMALL_STATE(12)] = 417,
  [SMALL_STATE(13)] = 447,
  [SMALL_STATE(14)] = 477,
  [SMALL_STATE(15)] = 507,
  [SMALL_STATE(16)] = 537,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 601,
  [SMALL_STATE(19)] = 629,
  [SMALL_STATE(20)] = 657,
  [SMALL_STATE(21)] = 687,
  [SMALL_STATE(22)] = 715,
  [SMALL_STATE(23)] = 743,
  [SMALL_STATE(24)] = 770,
  [SMALL_STATE(25)] = 797,
  [SMALL_STATE(26)] = 824,
  [SMALL_STATE(27)] = 851,
  [SMALL_STATE(28)] = 878,
  [SMALL_STATE(29)] = 905,
  [SMALL_STATE(30)] = 925,
  [SMALL_STATE(31)] = 945,
  [SMALL_STATE(32)] = 965,
  [SMALL_STATE(33)] = 985,
  [SMALL_STATE(34)] = 1005,
  [SMALL_STATE(35)] = 1025,
  [SMALL_STATE(36)] = 1045,
  [SMALL_STATE(37)] = 1065,
  [SMALL_STATE(38)] = 1085,
  [SMALL_STATE(39)] = 1105,
  [SMALL_STATE(40)] = 1125,
  [SMALL_STATE(41)] = 1147,
  [SMALL_STATE(42)] = 1167,
  [SMALL_STATE(43)] = 1187,
  [SMALL_STATE(44)] = 1207,
  [SMALL_STATE(45)] = 1227,
  [SMALL_STATE(46)] = 1247,
  [SMALL_STATE(47)] = 1269,
  [SMALL_STATE(48)] = 1287,
  [SMALL_STATE(49)] = 1305,
  [SMALL_STATE(50)] = 1325,
  [SMALL_STATE(51)] = 1347,
  [SMALL_STATE(52)] = 1367,
  [SMALL_STATE(53)] = 1387,
  [SMALL_STATE(54)] = 1407,
  [SMALL_STATE(55)] = 1425,
  [SMALL_STATE(56)] = 1445,
  [SMALL_STATE(57)] = 1463,
  [SMALL_STATE(58)] = 1481,
  [SMALL_STATE(59)] = 1499,
  [SMALL_STATE(60)] = 1517,
  [SMALL_STATE(61)] = 1535,
  [SMALL_STATE(62)] = 1553,
  [SMALL_STATE(63)] = 1573,
  [SMALL_STATE(64)] = 1591,
  [SMALL_STATE(65)] = 1609,
  [SMALL_STATE(66)] = 1627,
  [SMALL_STATE(67)] = 1647,
  [SMALL_STATE(68)] = 1667,
  [SMALL_STATE(69)] = 1687,
  [SMALL_STATE(70)] = 1707,
  [SMALL_STATE(71)] = 1722,
  [SMALL_STATE(72)] = 1741,
  [SMALL_STATE(73)] = 1760,
  [SMALL_STATE(74)] = 1779,
  [SMALL_STATE(75)] = 1798,
  [SMALL_STATE(76)] = 1817,
  [SMALL_STATE(77)] = 1836,
  [SMALL_STATE(78)] = 1855,
  [SMALL_STATE(79)] = 1874,
  [SMALL_STATE(80)] = 1893,
  [SMALL_STATE(81)] = 1912,
  [SMALL_STATE(82)] = 1931,
  [SMALL_STATE(83)] = 1950,
  [SMALL_STATE(84)] = 1969,
  [SMALL_STATE(85)] = 1988,
  [SMALL_STATE(86)] = 2007,
  [SMALL_STATE(87)] = 2026,
  [SMALL_STATE(88)] = 2043,
  [SMALL_STATE(89)] = 2062,
  [SMALL_STATE(90)] = 2081,
  [SMALL_STATE(91)] = 2100,
  [SMALL_STATE(92)] = 2119,
  [SMALL_STATE(93)] = 2138,
  [SMALL_STATE(94)] = 2157,
  [SMALL_STATE(95)] = 2176,
  [SMALL_STATE(96)] = 2195,
  [SMALL_STATE(97)] = 2214,
  [SMALL_STATE(98)] = 2229,
  [SMALL_STATE(99)] = 2248,
  [SMALL_STATE(100)] = 2265,
  [SMALL_STATE(101)] = 2284,
  [SMALL_STATE(102)] = 2303,
  [SMALL_STATE(103)] = 2318,
  [SMALL_STATE(104)] = 2337,
  [SMALL_STATE(105)] = 2352,
  [SMALL_STATE(106)] = 2371,
  [SMALL_STATE(107)] = 2390,
  [SMALL_STATE(108)] = 2405,
  [SMALL_STATE(109)] = 2420,
  [SMALL_STATE(110)] = 2439,
  [SMALL_STATE(111)] = 2454,
  [SMALL_STATE(112)] = 2473,
  [SMALL_STATE(113)] = 2488,
  [SMALL_STATE(114)] = 2503,
  [SMALL_STATE(115)] = 2522,
  [SMALL_STATE(116)] = 2541,
  [SMALL_STATE(117)] = 2556,
  [SMALL_STATE(118)] = 2575,
  [SMALL_STATE(119)] = 2590,
  [SMALL_STATE(120)] = 2609,
  [SMALL_STATE(121)] = 2628,
  [SMALL_STATE(122)] = 2647,
  [SMALL_STATE(123)] = 2666,
  [SMALL_STATE(124)] = 2685,
  [SMALL_STATE(125)] = 2704,
  [SMALL_STATE(126)] = 2718,
  [SMALL_STATE(127)] = 2732,
  [SMALL_STATE(128)] = 2745,
  [SMALL_STATE(129)] = 2758,
  [SMALL_STATE(130)] = 2771,
  [SMALL_STATE(131)] = 2784,
  [SMALL_STATE(132)] = 2797,
  [SMALL_STATE(133)] = 2810,
  [SMALL_STATE(134)] = 2823,
  [SMALL_STATE(135)] = 2836,
  [SMALL_STATE(136)] = 2849,
  [SMALL_STATE(137)] = 2862,
  [SMALL_STATE(138)] = 2875,
  [SMALL_STATE(139)] = 2888,
  [SMALL_STATE(140)] = 2892,
  [SMALL_STATE(141)] = 2896,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(136),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(127),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 12),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 12),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 11),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 11),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 11),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 11),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(126),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [399] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
