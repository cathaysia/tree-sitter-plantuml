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
#define STATE_COUNT 215
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 15
#define TOKEN_COUNT 69
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
  [13] = 5,
  [14] = 9,
  [15] = 7,
  [16] = 8,
  [17] = 10,
  [18] = 11,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 20,
  [25] = 19,
  [26] = 21,
  [27] = 27,
  [28] = 27,
  [29] = 6,
  [30] = 3,
  [31] = 12,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 33,
  [39] = 35,
  [40] = 37,
  [41] = 32,
  [42] = 36,
  [43] = 34,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 44,
  [48] = 3,
  [49] = 49,
  [50] = 12,
  [51] = 49,
  [52] = 6,
  [53] = 12,
  [54] = 3,
  [55] = 55,
  [56] = 55,
  [57] = 6,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 61,
  [67] = 67,
  [68] = 62,
  [69] = 64,
  [70] = 65,
  [71] = 58,
  [72] = 67,
  [73] = 73,
  [74] = 59,
  [75] = 73,
  [76] = 63,
  [77] = 60,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 79,
  [83] = 78,
  [84] = 78,
  [85] = 79,
  [86] = 78,
  [87] = 78,
  [88] = 79,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 92,
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
  [119] = 112,
  [120] = 112,
  [121] = 112,
  [122] = 112,
  [123] = 112,
  [124] = 112,
  [125] = 112,
  [126] = 112,
  [127] = 112,
  [128] = 114,
  [129] = 108,
  [130] = 117,
  [131] = 131,
  [132] = 131,
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
  [143] = 143,
  [144] = 95,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
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
  [161] = 161,
  [162] = 135,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 135,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 135,
  [171] = 171,
  [172] = 135,
  [173] = 173,
  [174] = 135,
  [175] = 175,
  [176] = 135,
  [177] = 135,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 135,
  [186] = 135,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 188,
  [191] = 191,
  [192] = 191,
  [193] = 6,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 12,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 195,
  [204] = 196,
  [205] = 205,
  [206] = 206,
  [207] = 198,
  [208] = 208,
  [209] = 200,
  [210] = 199,
  [211] = 205,
  [212] = 212,
  [213] = 213,
  [214] = 214,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(584);
      ADVANCE_MAP(
        '"', 693,
        '#', 604,
        '\'', 755,
        '-', 37,
        '/', 768,
        ':', 707,
        '<', 38,
        '@', 712,
        '[', 605,
        '\\', 699,
        ']', 609,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(736);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead != 0) ADVANCE(700);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(761);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(756);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(760);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(763);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 693,
        '#', 604,
        '\'', 755,
        '-', 37,
        '/', 31,
        '<', 38,
        '@', 84,
        '[', 605,
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
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 693,
        '#', 604,
        '\'', 755,
        '/', 31,
        '[', 605,
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
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 693,
        '\'', 755,
        '/', 31,
        ':', 707,
        '@', 85,
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
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 693,
        '\'', 755,
        '/', 31,
        ':', 707,
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
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 693,
        '\'', 755,
        '/', 31,
        '@', 84,
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
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 693,
        '\'', 755,
        '/', 31,
        '@', 84,
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
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 693,
        '\'', 755,
        '/', 31,
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
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 693,
        '\'', 755,
        '/', 31,
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
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '\\') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(695);
      if (lookahead != 0) ADVANCE(694);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\'', 755,
        '/', 31,
        'A', 382,
        'a', 382,
        'B', 270,
        'b', 270,
        'C', 175,
        'c', 175,
        'D', 176,
        'd', 176,
        'F', 352,
        'f', 352,
        'G', 194,
        'g', 194,
        'H', 441,
        'h', 441,
        'I', 421,
        'i', 421,
        'K', 336,
        'k', 336,
        'L', 177,
        'l', 177,
        'M', 178,
        'm', 178,
        'N', 179,
        'n', 179,
        'O', 379,
        'o', 379,
        'P', 180,
        'p', 180,
        'R', 271,
        'r', 271,
        'S', 181,
        's', 181,
        'T', 188,
        't', 188,
        'V', 357,
        'v', 357,
        'W', 334,
        'w', 334,
        'Y', 282,
        'y', 282,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(608);
      if (lookahead == '\\') ADVANCE(698);
      if (lookahead == ']') ADVANCE(609);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(724);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(725);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(717);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(718);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(719);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(720);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(721);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(732);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(733);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(762);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '/') ADVANCE(770);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(771);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(757);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(767);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(764);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(759);
      if (lookahead == '/') ADVANCE(709);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(710);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(703);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(705);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(704);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(744);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        'c', 93,
        'd', 97,
        'e', 53,
        'g', 48,
        'j', 154,
        'm', 98,
        'r', 77,
        'w', 54,
        'y', 42,
      );
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 60:
      ADVANCE_MAP(
        'c', 96,
        'd', 99,
        'e', 56,
        'g', 51,
        'j', 158,
        'm', 100,
        'r', 83,
        'u', 111,
        'w', 55,
        'y', 52,
      );
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(740);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(739);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 'j') ADVANCE(154);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(738);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(737);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(750);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(595);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(752);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(751);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(745);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 169:
      if (lookahead == 'w') ADVANCE(54);
      END_STATE();
    case 170:
      if (lookahead == 'x') ADVANCE(742);
      END_STATE();
    case 171:
      if (lookahead == 'x') ADVANCE(741);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(748);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(747);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 175:
      ADVANCE_MAP(
        'A', 252,
        'a', 252,
        'H', 203,
        'h', 203,
        'O', 480,
        'o', 480,
        'R', 356,
        'r', 356,
        'Y', 187,
        'y', 187,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(580);
      END_STATE();
    case 176:
      ADVANCE_MAP(
        'A', 481,
        'a', 481,
        'E', 272,
        'e', 272,
        'I', 410,
        'i', 410,
        'O', 267,
        'o', 267,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(580);
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 178:
      ADVANCE_MAP(
        'A', 331,
        'a', 331,
        'E', 259,
        'e', 259,
        'I', 257,
        'i', 257,
        'O', 241,
        'o', 241,
      );
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 180:
      ADVANCE_MAP(
        'A', 391,
        'a', 391,
        'E', 212,
        'e', 212,
        'I', 422,
        'i', 422,
        'L', 545,
        'l', 545,
        'O', 564,
        'o', 564,
        'U', 488,
        'u', 488,
      );
      END_STATE();
    case 181:
      ADVANCE_MAP(
        'A', 256,
        'a', 256,
        'E', 184,
        'e', 184,
        'I', 291,
        'i', 291,
        'K', 570,
        'k', 570,
        'L', 195,
        'l', 195,
        'N', 446,
        'n', 446,
        'P', 494,
        'p', 494,
        'T', 307,
        't', 307,
      );
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(774);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 188:
      ADVANCE_MAP(
        'A', 419,
        'a', 419,
        'E', 198,
        'e', 198,
        'H', 367,
        'h', 367,
        'O', 414,
        'o', 414,
        'R', 216,
        'r', 216,
        'U', 506,
        'u', 506,
      );
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 192:
      ADVANCE_MAP(
        'A', 478,
        'a', 478,
        'B', 386,
        'b', 386,
        'O', 510,
        'o', 510,
        'P', 544,
        'p', 544,
        'S', 305,
        's', 305,
        'T', 546,
        't', 546,
        'V', 372,
        'v', 372,
      );
      END_STATE();
    case 193:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 194:
      ADVANCE_MAP(
        'A', 354,
        'a', 354,
        'H', 443,
        'h', 443,
        'O', 383,
        'o', 383,
        'R', 189,
        'r', 189,
      );
      END_STATE();
    case 195:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 196:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 197:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 198:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 199:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 200:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 201:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 206:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 207:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 208:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 209:
      ADVANCE_MAP(
        'A', 399,
        'a', 399,
        'E', 213,
        'e', 213,
        'K', 570,
        'k', 570,
        'L', 222,
        'l', 222,
        'T', 307,
        't', 307,
      );
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 211:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(442);
      END_STATE();
    case 212:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 213:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 214:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 215:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 216:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 217:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 218:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 219:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 220:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 221:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 222:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 223:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 224:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 225:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 226:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 227:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(774);
      END_STATE();
    case 228:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(386);
      END_STATE();
    case 229:
      ADVANCE_MAP(
        'B', 386,
        'b', 386,
        'C', 463,
        'c', 463,
        'G', 468,
        'g', 468,
        'P', 347,
        'p', 347,
        'S', 209,
        's', 209,
        'Y', 316,
        'y', 316,
      );
      END_STATE();
    case 230:
      ADVANCE_MAP(
        'B', 386,
        'b', 386,
        'C', 571,
        'c', 571,
        'G', 465,
        'g', 465,
        'K', 336,
        'k', 336,
        'M', 221,
        'm', 221,
        'O', 394,
        'o', 394,
        'R', 290,
        'r', 290,
        'S', 210,
        's', 210,
        'T', 546,
        't', 546,
        'V', 357,
        'v', 357,
      );
      END_STATE();
    case 231:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(386);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(486);
      END_STATE();
    case 232:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(314);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 233:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(507);
      END_STATE();
    case 234:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(485);
      END_STATE();
    case 235:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(460);
      END_STATE();
    case 236:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(396);
      END_STATE();
    case 237:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 238:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 239:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 240:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 241:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 242:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 243:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 244:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 245:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 246:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 247:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 248:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 249:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 250:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 251:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 252:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 253:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 254:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(779);
      END_STATE();
    case 255:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(393);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 256:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(261);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 257:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(428);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(528);
      END_STATE();
    case 258:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 259:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 260:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(577);
      END_STATE();
    case 261:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 262:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 263:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 264:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 265:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 266:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(575);
      END_STATE();
    case 267:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 268:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 269:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 270:
      ADVANCE_MAP(
        'E', 348,
        'e', 348,
        'I', 511,
        'i', 511,
        'L', 182,
        'l', 182,
        'R', 445,
        'r', 445,
        'U', 489,
        'u', 489,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(580);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(774);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(774);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(494);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 317:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(774);
      END_STATE();
    case 318:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(317);
      END_STATE();
    case 319:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(444);
      END_STATE();
    case 321:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(404);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      END_STATE();
    case 322:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(372);
      END_STATE();
    case 323:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(339);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(276);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 324:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(486);
      END_STATE();
    case 325:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 326:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 327:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 328:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 329:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 330:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 331:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 332:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(502);
      END_STATE();
    case 333:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(502);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 334:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 335:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(774);
      END_STATE();
    case 336:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 337:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(470);
      END_STATE();
    case 338:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(520);
      END_STATE();
    case 339:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(525);
      END_STATE();
    case 340:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      END_STATE();
    case 341:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(524);
      END_STATE();
    case 342:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 344:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 346:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 352:
      ADVANCE_MAP(
        'I', 490,
        'i', 490,
        'L', 454,
        'l', 454,
        'O', 491,
        'o', 491,
        'U', 237,
        'u', 237,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(580);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 373:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(447);
      END_STATE();
    case 374:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(570);
      END_STATE();
    case 375:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(774);
      END_STATE();
    case 376:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(230);
      END_STATE();
    case 377:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(349);
      END_STATE();
    case 378:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(273);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 382:
      ADVANCE_MAP(
        'L', 353,
        'l', 353,
        'N', 529,
        'n', 529,
        'Q', 548,
        'q', 548,
        'Z', 555,
        'z', 555,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(580);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 408:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(774);
      END_STATE();
    case 409:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 410:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 411:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 412:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(458);
      END_STATE();
    case 413:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(444);
      END_STATE();
    case 414:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 415:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 416:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 417:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 418:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 419:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 420:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(787);
      END_STATE();
    case 421:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(456);
      END_STATE();
    case 422:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 425:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      END_STATE();
    case 426:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 427:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 428:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 429:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 430:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 431:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 432:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 433:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 435:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 436:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 437:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 438:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 439:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 440:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(774);
      END_STATE();
    case 443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 469:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(774);
      END_STATE();
    case 470:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 471:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 472:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(347);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(374);
      END_STATE();
    case 473:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 474:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 475:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(544);
      END_STATE();
    case 476:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(552);
      END_STATE();
    case 477:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(551);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 481:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 487:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 488:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 489:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 490:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 491:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 492:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 494:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 495:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 496:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 497:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 498:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 499:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 500:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 501:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 502:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 503:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 504:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 506:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 510:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 511:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(476);
      END_STATE();
    case 512:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      END_STATE();
    case 513:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(473);
      END_STATE();
    case 514:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(527);
      END_STATE();
    case 515:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      END_STATE();
    case 516:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(444);
      END_STATE();
    case 517:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 518:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(537);
      END_STATE();
    case 519:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 520:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      END_STATE();
    case 521:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 522:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 523:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(774);
      END_STATE();
    case 524:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 525:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 526:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      END_STATE();
    case 527:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      END_STATE();
    case 528:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      END_STATE();
    case 529:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 530:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 531:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      END_STATE();
    case 532:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 533:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 534:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 537:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      END_STATE();
    case 538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      END_STATE();
    case 539:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      END_STATE();
    case 541:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(501);
      END_STATE();
    case 542:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(774);
      END_STATE();
    case 543:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 544:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 545:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 546:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      END_STATE();
    case 547:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 548:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 549:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(519);
      END_STATE();
    case 550:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 551:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 552:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 553:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 554:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 555:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 556:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(186);
      END_STATE();
    case 557:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(297);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(436);
      END_STATE();
    case 558:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(278);
      END_STATE();
    case 559:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 560:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(309);
      END_STATE();
    case 561:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(774);
      END_STATE();
    case 562:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(780);
      END_STATE();
    case 563:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(419);
      END_STATE();
    case 564:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(262);
      END_STATE();
    case 565:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(300);
      END_STATE();
    case 566:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(342);
      END_STATE();
    case 567:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(459);
      END_STATE();
    case 568:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(344);
      END_STATE();
    case 569:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(774);
      END_STATE();
    case 570:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 571:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 572:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(567);
      END_STATE();
    case 573:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(496);
      END_STATE();
    case 574:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 575:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(234);
      END_STATE();
    case 576:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 577:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(316);
      END_STATE();
    case 578:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 579:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 580:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 581:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 582:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(580);
      END_STATE();
    case 583:
      if (eof) ADVANCE(584);
      if (lookahead == '\n') ADVANCE(736);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(583);
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
      if (lookahead == ' ') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_resume);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(608);
      if (lookahead == '\\') ADVANCE(698);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(606);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(762);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
      if (lookahead == 'c') ADVANCE(588);
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
      if (lookahead == 'd') ADVANCE(772);
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
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(589);
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
      if (lookahead == 'l') ADVANCE(599);
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
      if (lookahead == 'p') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(769);
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
      if (lookahead == 'r') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(587);
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
      if (lookahead == 's') ADVANCE(602);
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
      if (lookahead == 't') ADVANCE(596);
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
      if (lookahead == 'y') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(598);
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
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '\\') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(694);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(762);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(697);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(702);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(700);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(762);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(759);
      if (lookahead == '/') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(710);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(710);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(127);
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
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(724);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(725);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(717);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(718);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(719);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(720);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(721);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(732);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '/') ADVANCE(734);
      if (lookahead == '@') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(733);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(762);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_json_token2);
      if (lookahead == '\n') ADVANCE(736);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(34);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(710);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(761);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(756);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(34);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(710);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(34);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(762);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead == '\'') ADVANCE(765);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(390);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(502);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(788);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(357);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(316);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(789);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(581);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(788);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 24},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 28},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 30},
  [110] = {.lex_state = 30},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 30},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 26},
  [126] = {.lex_state = 28},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 583},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 583},
  [137] = {.lex_state = 583},
  [138] = {.lex_state = 583},
  [139] = {.lex_state = 583},
  [140] = {.lex_state = 583},
  [141] = {.lex_state = 583},
  [142] = {.lex_state = 583},
  [143] = {.lex_state = 583},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 583},
  [147] = {.lex_state = 583},
  [148] = {.lex_state = 583},
  [149] = {.lex_state = 583},
  [150] = {.lex_state = 583},
  [151] = {.lex_state = 583},
  [152] = {.lex_state = 583},
  [153] = {.lex_state = 583},
  [154] = {.lex_state = 583},
  [155] = {.lex_state = 583},
  [156] = {.lex_state = 583},
  [157] = {.lex_state = 583},
  [158] = {.lex_state = 583},
  [159] = {.lex_state = 583},
  [160] = {.lex_state = 583},
  [161] = {.lex_state = 583},
  [162] = {.lex_state = 27},
  [163] = {.lex_state = 583},
  [164] = {.lex_state = 583},
  [165] = {.lex_state = 583},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 583},
  [168] = {.lex_state = 583},
  [169] = {.lex_state = 583},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 583},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 583},
  [174] = {.lex_state = 26},
  [175] = {.lex_state = 583},
  [176] = {.lex_state = 28},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 583},
  [179] = {.lex_state = 583},
  [180] = {.lex_state = 583},
  [181] = {.lex_state = 583},
  [182] = {.lex_state = 583},
  [183] = {.lex_state = 583},
  [184] = {.lex_state = 583},
  [185] = {.lex_state = 30},
  [186] = {.lex_state = 25},
  [187] = {.lex_state = 583},
  [188] = {.lex_state = 32},
  [189] = {.lex_state = 33},
  [190] = {.lex_state = 32},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 17},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 17},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 19},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 0},
  [213] = {(TSStateId)(-1)},
  [214] = {(TSStateId)(-1)},
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
    [sym_diagram] = STATE(208),
    [sym_uml] = STATE(194),
    [sym_json] = STATE(194),
    [sym_yaml] = STATE(194),
    [sym_ebnf] = STATE(194),
    [sym_regex] = STATE(194),
    [sym_ditaa] = STATE(194),
    [sym_gantt] = STATE(194),
    [sym_chronology] = STATE(194),
    [sym_mindmap] = STATE(194),
    [sym_wbs] = STATE(194),
    [sym_chen] = STATE(194),
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
      anon_sym_ATenduml,
    ACTIONS(31), 1,
      anon_sym_autonumber,
    ACTIONS(33), 1,
      anon_sym_autonumberstop,
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      sym_string,
    STATE(4), 1,
      aux_sym_uml_repeat1,
    STATE(59), 1,
      sym_expression,
    STATE(131), 1,
      sym_participant_name,
    STATE(73), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(35), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [59] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(3), 1,
      sym_comment,
    ACTIONS(45), 8,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(47), 15,
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
  [96] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_autonumber,
    ACTIONS(33), 1,
      anon_sym_autonumberstop,
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_group,
    ACTIONS(43), 1,
      anon_sym_loop,
    ACTIONS(49), 1,
      anon_sym_ATenduml,
    STATE(3), 1,
      sym_string,
    STATE(4), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(59), 1,
      sym_expression,
    STATE(131), 1,
      sym_participant_name,
    STATE(73), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(35), 8,
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
    STATE(20), 1,
      aux_sym_attribute_repeat2,
    STATE(22), 1,
      sym_multiline,
    STATE(32), 2,
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
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
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
    STATE(3), 1,
      sym_string,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(75), 4,
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
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
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
    STATE(3), 1,
      sym_string,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(75), 4,
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
    STATE(3), 1,
      sym_string,
    STATE(59), 1,
      sym_expression,
    STATE(131), 1,
      sym_participant_name,
    STATE(9), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(73), 4,
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
  [418] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(104), 1,
      anon_sym_end,
    STATE(3), 1,
      sym_string,
    STATE(10), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(75), 4,
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
  [477] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(106), 1,
      anon_sym_end,
    STATE(3), 1,
      sym_string,
    STATE(11), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(75), 4,
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
  [536] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(12), 1,
      sym_comment,
    ACTIONS(108), 8,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(110), 15,
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
  [573] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_as,
    ACTIONS(118), 1,
      anon_sym_order,
    STATE(13), 1,
      sym_comment,
    STATE(23), 1,
      sym_multiline,
    STATE(24), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(51), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(41), 2,
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
  [624] = 15,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(92), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_autonumber,
    ACTIONS(123), 1,
      anon_sym_autonumberstop,
    ACTIONS(129), 1,
      anon_sym_group,
    ACTIONS(132), 1,
      anon_sym_end,
    ACTIONS(134), 1,
      anon_sym_loop,
    STATE(3), 1,
      sym_string,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(14), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(75), 4,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(126), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [681] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(73), 1,
      anon_sym_group,
    ACTIONS(77), 1,
      anon_sym_loop,
    ACTIONS(137), 1,
      anon_sym_end,
    STATE(3), 1,
      sym_string,
    STATE(15), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(75), 4,
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
  [740] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
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
    STATE(3), 1,
      sym_string,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_uml_repeat1,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(75), 4,
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
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
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
    STATE(3), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(75), 4,
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
    ACTIONS(37), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(39), 1,
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
    STATE(3), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(74), 1,
      sym_expression,
    STATE(132), 1,
      sym_participant_name,
    STATE(75), 4,
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
  [917] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_as,
    ACTIONS(155), 1,
      anon_sym_order,
    STATE(19), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(32), 2,
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
  [960] = 10,
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
      aux_sym_attribute_repeat2,
    STATE(20), 1,
      sym_comment,
    STATE(32), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(158), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(160), 12,
      anon_sym_autonumber,
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
  [1005] = 10,
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
      aux_sym_attribute_repeat2,
    STATE(21), 1,
      sym_comment,
    STATE(32), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(162), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(164), 12,
      anon_sym_autonumber,
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
  [1050] = 10,
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
      aux_sym_attribute_repeat2,
    STATE(22), 1,
      sym_comment,
    STATE(32), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(158), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(160), 12,
      anon_sym_autonumber,
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
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_as,
    ACTIONS(118), 1,
      anon_sym_order,
    STATE(23), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(158), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(41), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(160), 13,
      anon_sym_autonumber,
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
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_as,
    ACTIONS(118), 1,
      anon_sym_order,
    STATE(24), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(158), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(41), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(160), 13,
      anon_sym_autonumber,
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
    ACTIONS(145), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(25), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(41), 2,
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
  [1228] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_as,
    ACTIONS(118), 1,
      anon_sym_order,
    STATE(25), 1,
      aux_sym_attribute_repeat2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(41), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(164), 13,
      anon_sym_autonumber,
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
  [1273] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(179), 1,
      aux_sym_attribute_token3,
    STATE(27), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(177), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(181), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(175), 13,
      anon_sym_autonumber,
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
  [1312] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(185), 1,
      aux_sym_attribute_token3,
    STATE(28), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(183), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(181), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(175), 12,
      anon_sym_autonumber,
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
  [1351] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(29), 1,
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
  [1384] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(45), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(47), 15,
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
  [1417] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(108), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(110), 15,
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
    ACTIONS(145), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(147), 14,
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
  [1514] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(191), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(193), 14,
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
  [1546] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(35), 1,
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
  [1578] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(199), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(201), 14,
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
  [1610] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(203), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(205), 14,
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
  [1642] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(147), 15,
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
  [1674] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(39), 1,
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
  [1706] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(205), 15,
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
  [1738] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(41), 1,
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
  [1770] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(201), 15,
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
  [1802] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(193), 15,
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
  [1834] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_attribute_token3,
    STATE(44), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(207), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(209), 12,
      anon_sym_autonumber,
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
  [1867] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(185), 1,
      aux_sym_attribute_token3,
    STATE(44), 1,
      aux_sym_attribute_repeat1,
    STATE(45), 1,
      sym_comment,
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
  [1902] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(179), 1,
      aux_sym_attribute_token3,
    STATE(46), 1,
      sym_comment,
    STATE(47), 1,
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
  [1937] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(214), 1,
      aux_sym_attribute_token3,
    ACTIONS(207), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(47), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(209), 13,
      anon_sym_autonumber,
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
  [1970] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(45), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(47), 12,
      anon_sym_autonumber,
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
  [2000] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(219), 13,
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
  [2030] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(110), 13,
      anon_sym_autonumber,
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
  [2060] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(219), 14,
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
  [2090] = 5,
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
    ACTIONS(65), 12,
      anon_sym_autonumber,
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
  [2120] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(108), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(110), 12,
      anon_sym_autonumber,
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
  [2150] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(47), 13,
      anon_sym_autonumber,
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
  [2180] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_COLON,
    STATE(55), 1,
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
  [2212] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(227), 1,
      anon_sym_COLON,
    STATE(56), 1,
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
  [2244] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(63), 3,
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
      aux_sym_attr_alias_token1,
      anon_sym_group,
      anon_sym_end,
      anon_sym_loop,
  [2274] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(175), 12,
      anon_sym_autonumber,
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
  [2303] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(229), 3,
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
  [2332] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(160), 12,
      anon_sym_autonumber,
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
  [2361] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
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
  [2390] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
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
  [2419] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(164), 13,
      anon_sym_autonumber,
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
  [2448] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
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
  [2477] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(247), 12,
      anon_sym_autonumber,
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
  [2506] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
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
  [2535] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
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
  [2564] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
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
  [2593] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
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
  [2622] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(247), 13,
      anon_sym_autonumber,
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
  [2651] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(175), 13,
      anon_sym_autonumber,
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
  [2680] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
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
  [2709] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(255), 12,
      anon_sym_autonumber,
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
  [2738] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(229), 2,
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
  [2767] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(255), 13,
      anon_sym_autonumber,
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
  [2796] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(162), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(164), 12,
      anon_sym_autonumber,
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
  [2825] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(160), 13,
      anon_sym_autonumber,
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
  [2854] = 8,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_string_repeat1,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2880] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_string_repeat1,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2906] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_string_repeat1,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2932] = 7,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_BSLASH,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(273), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(81), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [2956] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_string_repeat1,
    STATE(82), 1,
      sym_comment,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [2982] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_string_repeat1,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3008] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_string_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3034] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_string_repeat1,
    STATE(85), 1,
      sym_comment,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3060] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3086] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_string_repeat1,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3112] = 8,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_string_repeat1,
    STATE(88), 1,
      sym_comment,
    STATE(113), 1,
      sym_escape_char,
    ACTIONS(259), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3138] = 7,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(293), 1,
      aux_sym_multiline_token1,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    ACTIONS(298), 1,
      anon_sym_BSLASH,
    STATE(145), 1,
      sym_escape_char,
    STATE(89), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [3161] = 8,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(301), 1,
      aux_sym_multiline_token1,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    STATE(90), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_multiline_repeat1,
    STATE(145), 1,
      sym_escape_char,
  [3186] = 8,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(301), 1,
      aux_sym_multiline_token1,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_multiline_repeat1,
    STATE(145), 1,
      sym_escape_char,
  [3211] = 8,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(301), 1,
      aux_sym_multiline_token1,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_multiline_repeat1,
    STATE(92), 1,
      sym_comment,
    STATE(145), 1,
      sym_escape_char,
  [3236] = 8,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(301), 1,
      aux_sym_multiline_token1,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_multiline_repeat1,
    STATE(93), 1,
      sym_comment,
    STATE(145), 1,
      sym_escape_char,
  [3261] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(315), 1,
      anon_sym_ATendditaa,
    STATE(94), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_json_repeat1,
    ACTIONS(313), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3281] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_comment,
    ACTIONS(317), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [3297] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(321), 1,
      anon_sym_ATendgantt,
    STATE(96), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_json_repeat1,
    ACTIONS(319), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3317] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(325), 1,
      anon_sym_ATendyaml,
    STATE(97), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_json_repeat1,
    ACTIONS(323), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3337] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_ATendchronology,
    STATE(98), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_json_repeat1,
    ACTIONS(327), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3357] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(333), 1,
      anon_sym_ATendebnf,
    STATE(99), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_json_repeat1,
    ACTIONS(331), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3377] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(337), 1,
      anon_sym_ATendmindmap,
    STATE(100), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_json_repeat1,
    ACTIONS(335), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3397] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(341), 1,
      anon_sym_ATendregex,
    STATE(101), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_json_repeat1,
    ACTIONS(339), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3417] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(343), 1,
      anon_sym_ATendgantt,
    STATE(102), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_json_repeat1,
    ACTIONS(319), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3437] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(345), 1,
      anon_sym_ATendchronology,
    STATE(103), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_json_repeat1,
    ACTIONS(327), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3457] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(349), 1,
      anon_sym_ATendwbs,
    STATE(104), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_json_repeat1,
    ACTIONS(347), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3477] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_ATendmindmap,
    STATE(105), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym_json_repeat1,
    ACTIONS(335), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3497] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(353), 1,
      anon_sym_ATendwbs,
    STATE(106), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_json_repeat1,
    ACTIONS(347), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3517] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_ATendchen,
    STATE(107), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym_json_repeat1,
    ACTIONS(355), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3537] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(359), 1,
      aux_sym_attribute_token1,
    ACTIONS(361), 1,
      aux_sym_attribute_token2,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_comment,
    STATE(203), 1,
      sym_string,
  [3559] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(367), 1,
      anon_sym_ATendjson,
    STATE(109), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_json_repeat1,
    ACTIONS(365), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3579] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(369), 1,
      anon_sym_ATendjson,
    STATE(110), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym_json_repeat1,
    ACTIONS(365), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3599] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_ATendchen,
    STATE(107), 1,
      aux_sym_json_repeat1,
    STATE(111), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3619] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendyaml,
    ACTIONS(373), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(112), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3637] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [3653] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      aux_sym_attr_alias_token1,
    STATE(3), 1,
      sym_string,
    STATE(5), 1,
      sym_participant_name,
    STATE(114), 1,
      sym_comment,
  [3675] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_ATendebnf,
    STATE(99), 1,
      aux_sym_json_repeat1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3695] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_ATendregex,
    STATE(101), 1,
      aux_sym_json_repeat1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3715] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(386), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_string,
    STATE(55), 1,
      sym_participant_name,
    STATE(117), 1,
      sym_comment,
  [3737] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_ATendditaa,
    STATE(94), 1,
      aux_sym_json_repeat1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3757] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendjson,
    ACTIONS(392), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(119), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3775] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendebnf,
    ACTIONS(395), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(120), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3793] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendregex,
    ACTIONS(398), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(121), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3811] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendditaa,
    ACTIONS(401), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(122), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3829] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendgantt,
    ACTIONS(404), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(123), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3847] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendchronology,
    ACTIONS(407), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(124), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3865] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendmindmap,
    ACTIONS(410), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(125), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3883] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendwbs,
    ACTIONS(413), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(126), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3901] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_ATendchen,
    ACTIONS(416), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(127), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3919] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(419), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_participant_name,
    STATE(30), 1,
      sym_string,
    STATE(128), 1,
      sym_comment,
  [3941] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(423), 1,
      aux_sym_attribute_token1,
    ACTIONS(425), 1,
      aux_sym_attribute_token2,
    STATE(129), 1,
      sym_comment,
    STATE(195), 1,
      sym_string,
  [3963] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(427), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(429), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_string,
    STATE(56), 1,
      sym_participant_name,
    STATE(130), 1,
      sym_comment,
  [3985] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_LT_DASH,
    STATE(131), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [4003] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(437), 1,
      anon_sym_LT_DASH,
    STATE(132), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [4021] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(439), 1,
      anon_sym_ATendyaml,
    STATE(97), 1,
      aux_sym_json_repeat1,
    STATE(133), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4041] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    STATE(134), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_json_repeat2,
  [4060] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [4075] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4094] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4113] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4132] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4151] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4170] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4189] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_json_repeat2,
  [4208] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_json_repeat2,
  [4227] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
      sym_comment,
    ACTIONS(317), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [4242] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(463), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [4257] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4276] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_comment,
    STATE(175), 1,
      aux_sym_json_repeat2,
  [4295] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_json_repeat2,
  [4314] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4333] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      aux_sym_json_repeat2,
    STATE(150), 1,
      sym_comment,
  [4352] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4371] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_json_repeat2,
  [4390] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4409] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    STATE(154), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_json_repeat2,
  [4428] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4447] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      aux_sym_json_repeat2,
    STATE(156), 1,
      sym_comment,
  [4466] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4485] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4504] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      aux_sym_json_repeat2,
    STATE(159), 1,
      sym_comment,
  [4523] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      aux_sym_json_repeat2,
    STATE(160), 1,
      sym_comment,
  [4542] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4561] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [4576] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      aux_sym_json_repeat2,
    STATE(163), 1,
      sym_comment,
  [4595] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      aux_sym_json_repeat2,
    STATE(164), 1,
      sym_comment,
  [4614] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    STATE(165), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4633] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [4648] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      aux_sym_json_repeat2,
    STATE(167), 1,
      sym_comment,
  [4667] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      aux_sym_json_repeat2,
    STATE(168), 1,
      sym_comment,
  [4686] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    STATE(169), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_json_repeat2,
  [4705] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(170), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [4720] = 5,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    ACTIONS(511), 1,
      aux_sym_json_token2,
    STATE(171), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [4737] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [4752] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    STATE(165), 1,
      aux_sym_json_repeat2,
    STATE(173), 1,
      sym_comment,
  [4771] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(174), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [4786] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      aux_sym_json_repeat2,
    STATE(175), 1,
      sym_comment,
  [4805] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(176), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [4820] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [4835] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    STATE(169), 1,
      aux_sym_json_repeat2,
    STATE(178), 1,
      sym_comment,
  [4854] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      aux_sym_json_repeat2,
    STATE(179), 1,
      sym_comment,
  [4873] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      aux_sym_json_repeat2,
    STATE(180), 1,
      sym_comment,
  [4892] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym_json_repeat2,
  [4911] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      aux_sym_json_repeat2,
    STATE(182), 1,
      sym_comment,
  [4930] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      aux_sym_json_repeat2,
    STATE(183), 1,
      sym_comment,
  [4949] = 6,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      aux_sym_json_token2,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      aux_sym_json_repeat2,
    STATE(184), 1,
      sym_comment,
  [4968] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(185), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [4983] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(186), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [4998] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(187), 1,
      sym_comment,
    ACTIONS(532), 2,
      ts_builtin_sym_end,
      aux_sym_json_token2,
  [5012] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(534), 1,
      aux_sym_group_block_token1,
    STATE(188), 1,
      sym_comment,
  [5025] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(536), 1,
      aux_sym_comment_token2,
    STATE(189), 1,
      sym_comment,
  [5038] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(538), 1,
      aux_sym_group_block_token1,
    STATE(190), 1,
      sym_comment,
  [5051] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(540), 1,
      aux_sym_escape_char_token1,
    STATE(191), 1,
      sym_comment,
  [5064] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(542), 1,
      aux_sym_escape_char_token1,
    STATE(192), 1,
      sym_comment,
  [5077] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(63), 1,
      aux_sym_attribute_token2,
    STATE(193), 1,
      sym_comment,
  [5090] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_comment,
  [5103] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(546), 1,
      aux_sym_attribute_token2,
    STATE(195), 1,
      sym_comment,
  [5116] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(548), 1,
      aux_sym_sequence_diagram_token1,
    STATE(196), 1,
      sym_comment,
  [5129] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(108), 1,
      aux_sym_attribute_token2,
    STATE(197), 1,
      sym_comment,
  [5142] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(550), 1,
      sym_color,
    STATE(198), 1,
      sym_comment,
  [5155] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(552), 1,
      aux_sym_attribute_token3,
    STATE(199), 1,
      sym_comment,
  [5168] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(554), 1,
      aux_sym_attr_alias_token1,
    STATE(200), 1,
      sym_comment,
  [5181] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(556), 1,
      anon_sym_SLASH,
    STATE(201), 1,
      sym_comment,
  [5194] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym_comment,
  [5207] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(560), 1,
      aux_sym_attribute_token2,
    STATE(203), 1,
      sym_comment,
  [5220] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(562), 1,
      aux_sym_sequence_diagram_token1,
    STATE(204), 1,
      sym_comment,
  [5233] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(564), 1,
      aux_sym_attribute_token3,
    STATE(205), 1,
      sym_comment,
  [5246] = 4,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(566), 1,
      aux_sym_comment_token1,
    STATE(206), 1,
      sym_comment,
  [5259] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(568), 1,
      sym_color,
    STATE(207), 1,
      sym_comment,
  [5272] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_comment,
  [5285] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_attr_alias_token1,
    STATE(209), 1,
      sym_comment,
  [5298] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(574), 1,
      aux_sym_attribute_token3,
    STATE(210), 1,
      sym_comment,
  [5311] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(576), 1,
      aux_sym_attribute_token3,
    STATE(211), 1,
      sym_comment,
  [5324] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    STATE(212), 1,
      sym_comment,
  [5337] = 1,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
  [5341] = 1,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 302,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 418,
  [SMALL_STATE(11)] = 477,
  [SMALL_STATE(12)] = 536,
  [SMALL_STATE(13)] = 573,
  [SMALL_STATE(14)] = 624,
  [SMALL_STATE(15)] = 681,
  [SMALL_STATE(16)] = 740,
  [SMALL_STATE(17)] = 799,
  [SMALL_STATE(18)] = 858,
  [SMALL_STATE(19)] = 917,
  [SMALL_STATE(20)] = 960,
  [SMALL_STATE(21)] = 1005,
  [SMALL_STATE(22)] = 1050,
  [SMALL_STATE(23)] = 1095,
  [SMALL_STATE(24)] = 1140,
  [SMALL_STATE(25)] = 1185,
  [SMALL_STATE(26)] = 1228,
  [SMALL_STATE(27)] = 1273,
  [SMALL_STATE(28)] = 1312,
  [SMALL_STATE(29)] = 1351,
  [SMALL_STATE(30)] = 1384,
  [SMALL_STATE(31)] = 1417,
  [SMALL_STATE(32)] = 1450,
  [SMALL_STATE(33)] = 1482,
  [SMALL_STATE(34)] = 1514,
  [SMALL_STATE(35)] = 1546,
  [SMALL_STATE(36)] = 1578,
  [SMALL_STATE(37)] = 1610,
  [SMALL_STATE(38)] = 1642,
  [SMALL_STATE(39)] = 1674,
  [SMALL_STATE(40)] = 1706,
  [SMALL_STATE(41)] = 1738,
  [SMALL_STATE(42)] = 1770,
  [SMALL_STATE(43)] = 1802,
  [SMALL_STATE(44)] = 1834,
  [SMALL_STATE(45)] = 1867,
  [SMALL_STATE(46)] = 1902,
  [SMALL_STATE(47)] = 1937,
  [SMALL_STATE(48)] = 1970,
  [SMALL_STATE(49)] = 2000,
  [SMALL_STATE(50)] = 2030,
  [SMALL_STATE(51)] = 2060,
  [SMALL_STATE(52)] = 2090,
  [SMALL_STATE(53)] = 2120,
  [SMALL_STATE(54)] = 2150,
  [SMALL_STATE(55)] = 2180,
  [SMALL_STATE(56)] = 2212,
  [SMALL_STATE(57)] = 2244,
  [SMALL_STATE(58)] = 2274,
  [SMALL_STATE(59)] = 2303,
  [SMALL_STATE(60)] = 2332,
  [SMALL_STATE(61)] = 2361,
  [SMALL_STATE(62)] = 2390,
  [SMALL_STATE(63)] = 2419,
  [SMALL_STATE(64)] = 2448,
  [SMALL_STATE(65)] = 2477,
  [SMALL_STATE(66)] = 2506,
  [SMALL_STATE(67)] = 2535,
  [SMALL_STATE(68)] = 2564,
  [SMALL_STATE(69)] = 2593,
  [SMALL_STATE(70)] = 2622,
  [SMALL_STATE(71)] = 2651,
  [SMALL_STATE(72)] = 2680,
  [SMALL_STATE(73)] = 2709,
  [SMALL_STATE(74)] = 2738,
  [SMALL_STATE(75)] = 2767,
  [SMALL_STATE(76)] = 2796,
  [SMALL_STATE(77)] = 2825,
  [SMALL_STATE(78)] = 2854,
  [SMALL_STATE(79)] = 2880,
  [SMALL_STATE(80)] = 2906,
  [SMALL_STATE(81)] = 2932,
  [SMALL_STATE(82)] = 2956,
  [SMALL_STATE(83)] = 2982,
  [SMALL_STATE(84)] = 3008,
  [SMALL_STATE(85)] = 3034,
  [SMALL_STATE(86)] = 3060,
  [SMALL_STATE(87)] = 3086,
  [SMALL_STATE(88)] = 3112,
  [SMALL_STATE(89)] = 3138,
  [SMALL_STATE(90)] = 3161,
  [SMALL_STATE(91)] = 3186,
  [SMALL_STATE(92)] = 3211,
  [SMALL_STATE(93)] = 3236,
  [SMALL_STATE(94)] = 3261,
  [SMALL_STATE(95)] = 3281,
  [SMALL_STATE(96)] = 3297,
  [SMALL_STATE(97)] = 3317,
  [SMALL_STATE(98)] = 3337,
  [SMALL_STATE(99)] = 3357,
  [SMALL_STATE(100)] = 3377,
  [SMALL_STATE(101)] = 3397,
  [SMALL_STATE(102)] = 3417,
  [SMALL_STATE(103)] = 3437,
  [SMALL_STATE(104)] = 3457,
  [SMALL_STATE(105)] = 3477,
  [SMALL_STATE(106)] = 3497,
  [SMALL_STATE(107)] = 3517,
  [SMALL_STATE(108)] = 3537,
  [SMALL_STATE(109)] = 3559,
  [SMALL_STATE(110)] = 3579,
  [SMALL_STATE(111)] = 3599,
  [SMALL_STATE(112)] = 3619,
  [SMALL_STATE(113)] = 3637,
  [SMALL_STATE(114)] = 3653,
  [SMALL_STATE(115)] = 3675,
  [SMALL_STATE(116)] = 3695,
  [SMALL_STATE(117)] = 3715,
  [SMALL_STATE(118)] = 3737,
  [SMALL_STATE(119)] = 3757,
  [SMALL_STATE(120)] = 3775,
  [SMALL_STATE(121)] = 3793,
  [SMALL_STATE(122)] = 3811,
  [SMALL_STATE(123)] = 3829,
  [SMALL_STATE(124)] = 3847,
  [SMALL_STATE(125)] = 3865,
  [SMALL_STATE(126)] = 3883,
  [SMALL_STATE(127)] = 3901,
  [SMALL_STATE(128)] = 3919,
  [SMALL_STATE(129)] = 3941,
  [SMALL_STATE(130)] = 3963,
  [SMALL_STATE(131)] = 3985,
  [SMALL_STATE(132)] = 4003,
  [SMALL_STATE(133)] = 4021,
  [SMALL_STATE(134)] = 4041,
  [SMALL_STATE(135)] = 4060,
  [SMALL_STATE(136)] = 4075,
  [SMALL_STATE(137)] = 4094,
  [SMALL_STATE(138)] = 4113,
  [SMALL_STATE(139)] = 4132,
  [SMALL_STATE(140)] = 4151,
  [SMALL_STATE(141)] = 4170,
  [SMALL_STATE(142)] = 4189,
  [SMALL_STATE(143)] = 4208,
  [SMALL_STATE(144)] = 4227,
  [SMALL_STATE(145)] = 4242,
  [SMALL_STATE(146)] = 4257,
  [SMALL_STATE(147)] = 4276,
  [SMALL_STATE(148)] = 4295,
  [SMALL_STATE(149)] = 4314,
  [SMALL_STATE(150)] = 4333,
  [SMALL_STATE(151)] = 4352,
  [SMALL_STATE(152)] = 4371,
  [SMALL_STATE(153)] = 4390,
  [SMALL_STATE(154)] = 4409,
  [SMALL_STATE(155)] = 4428,
  [SMALL_STATE(156)] = 4447,
  [SMALL_STATE(157)] = 4466,
  [SMALL_STATE(158)] = 4485,
  [SMALL_STATE(159)] = 4504,
  [SMALL_STATE(160)] = 4523,
  [SMALL_STATE(161)] = 4542,
  [SMALL_STATE(162)] = 4561,
  [SMALL_STATE(163)] = 4576,
  [SMALL_STATE(164)] = 4595,
  [SMALL_STATE(165)] = 4614,
  [SMALL_STATE(166)] = 4633,
  [SMALL_STATE(167)] = 4648,
  [SMALL_STATE(168)] = 4667,
  [SMALL_STATE(169)] = 4686,
  [SMALL_STATE(170)] = 4705,
  [SMALL_STATE(171)] = 4720,
  [SMALL_STATE(172)] = 4737,
  [SMALL_STATE(173)] = 4752,
  [SMALL_STATE(174)] = 4771,
  [SMALL_STATE(175)] = 4786,
  [SMALL_STATE(176)] = 4805,
  [SMALL_STATE(177)] = 4820,
  [SMALL_STATE(178)] = 4835,
  [SMALL_STATE(179)] = 4854,
  [SMALL_STATE(180)] = 4873,
  [SMALL_STATE(181)] = 4892,
  [SMALL_STATE(182)] = 4911,
  [SMALL_STATE(183)] = 4930,
  [SMALL_STATE(184)] = 4949,
  [SMALL_STATE(185)] = 4968,
  [SMALL_STATE(186)] = 4983,
  [SMALL_STATE(187)] = 4998,
  [SMALL_STATE(188)] = 5012,
  [SMALL_STATE(189)] = 5025,
  [SMALL_STATE(190)] = 5038,
  [SMALL_STATE(191)] = 5051,
  [SMALL_STATE(192)] = 5064,
  [SMALL_STATE(193)] = 5077,
  [SMALL_STATE(194)] = 5090,
  [SMALL_STATE(195)] = 5103,
  [SMALL_STATE(196)] = 5116,
  [SMALL_STATE(197)] = 5129,
  [SMALL_STATE(198)] = 5142,
  [SMALL_STATE(199)] = 5155,
  [SMALL_STATE(200)] = 5168,
  [SMALL_STATE(201)] = 5181,
  [SMALL_STATE(202)] = 5194,
  [SMALL_STATE(203)] = 5207,
  [SMALL_STATE(204)] = 5220,
  [SMALL_STATE(205)] = 5233,
  [SMALL_STATE(206)] = 5246,
  [SMALL_STATE(207)] = 5259,
  [SMALL_STATE(208)] = 5272,
  [SMALL_STATE(209)] = 5285,
  [SMALL_STATE(210)] = 5298,
  [SMALL_STATE(211)] = 5311,
  [SMALL_STATE(212)] = 5324,
  [SMALL_STATE(213)] = 5337,
  [SMALL_STATE(214)] = 5341,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(207),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(209),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(210),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(198),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(199),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 14),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 14),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 11),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 11),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 11),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 11),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(187),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [570] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
