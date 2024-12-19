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
#define STATE_COUNT 422
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 14
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  sym_label = 3,
  anon_sym_alt = 4,
  anon_sym_else = 5,
  anon_sym_end = 6,
  aux_sym_line_token1 = 7,
  aux_sym_line_token2 = 8,
  anon_sym_note = 9,
  anon_sym_left = 10,
  anon_sym_right = 11,
  anon_sym_endnote = 12,
  anon_sym_loop = 13,
  anon_sym_LBRACK = 14,
  aux_sym_custom_label_token1 = 15,
  anon_sym_RBRACK = 16,
  anon_sym_group = 17,
  anon_sym_skinparam = 18,
  anon_sym_sequenceMessageAlign = 19,
  anon_sym_center = 20,
  anon_sym_responseMessageBelowArrow = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_autonumber = 24,
  anon_sym_inc = 25,
  anon_sym_resume = 26,
  aux_sym_attribute_token1 = 27,
  aux_sym_attribute_token2 = 28,
  aux_sym_attribute_token3 = 29,
  anon_sym_autonumberstop = 30,
  anon_sym_participant = 31,
  anon_sym_actor = 32,
  anon_sym_boundary = 33,
  anon_sym_control = 34,
  anon_sym_entity = 35,
  anon_sym_database = 36,
  anon_sym_collections = 37,
  anon_sym_queue = 38,
  anon_sym_POUND = 39,
  aux_sym_multiline_token1 = 40,
  anon_sym_as = 41,
  aux_sym_attr_alias_token1 = 42,
  anon_sym_order = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_string_token1 = 45,
  anon_sym_BSLASH_DQUOTE = 46,
  anon_sym_BSLASH = 47,
  aux_sym_escape_char_token1 = 48,
  anon_sym_COLON = 49,
  aux_sym_sequence_diagram_token1 = 50,
  anon_sym_DASH = 51,
  anon_sym_GT = 52,
  anon_sym_o = 53,
  anon_sym_x = 54,
  anon_sym_ox = 55,
  anon_sym_GT_GT = 56,
  anon_sym_BSLASH_BSLASH = 57,
  anon_sym_SLASH = 58,
  anon_sym_SLASH_SLASH = 59,
  anon_sym_DASH_DASH = 60,
  anon_sym_LBRACK_POUND = 61,
  anon_sym_LT = 62,
  anon_sym_xo = 63,
  anon_sym_LT_LT = 64,
  anon_sym_ATstartjson = 65,
  anon_sym_AT = 66,
  aux_sym_json_token1 = 67,
  anon_sym_ATendjson = 68,
  anon_sym_ATstartyaml = 69,
  anon_sym_ATendyaml = 70,
  anon_sym_ATstartebnf = 71,
  anon_sym_ATendebnf = 72,
  anon_sym_ATstartregex = 73,
  anon_sym_ATendregex = 74,
  anon_sym_ATstartditaa = 75,
  anon_sym_ATendditaa = 76,
  anon_sym_ATstartgantt = 77,
  anon_sym_ATendgantt = 78,
  anon_sym_ATstartchronology = 79,
  anon_sym_ATendchronology = 80,
  anon_sym_ATstartmindmap = 81,
  anon_sym_ATendmindmap = 82,
  anon_sym_ATstartwbs = 83,
  anon_sym_ATendwbs = 84,
  anon_sym_ATstartchen = 85,
  anon_sym_ATendchen = 86,
  anon_sym_SQUOTE = 87,
  aux_sym_comment_token1 = 88,
  anon_sym_SLASH_SQUOTE = 89,
  aux_sym_comment_token2 = 90,
  sym_color = 91,
  sym_diagram = 92,
  sym_uml = 93,
  sym_expression = 94,
  sym_alt_block = 95,
  sym_line = 96,
  sym_note_block = 97,
  sym_loop_block = 98,
  sym_custom_label = 99,
  sym_group_block = 100,
  sym_skinparam = 101,
  sym_boolean_literal = 102,
  sym_attribute = 103,
  sym_multiline = 104,
  sym_attr_alias = 105,
  sym_attr_order = 106,
  sym_string = 107,
  sym_escape_char = 108,
  sym_participant_name = 109,
  sym_sequence_diagram = 110,
  sym_connector = 111,
  sym_json = 112,
  sym_yaml = 113,
  sym_ebnf = 114,
  sym_regex = 115,
  sym_ditaa = 116,
  sym_gantt = 117,
  sym_chronology = 118,
  sym_mindmap = 119,
  sym_wbs = 120,
  sym_chen = 121,
  sym_comment = 122,
  aux_sym_uml_repeat1 = 123,
  aux_sym_alt_block_repeat1 = 124,
  aux_sym_note_block_repeat1 = 125,
  aux_sym_attribute_repeat1 = 126,
  aux_sym_attribute_repeat2 = 127,
  aux_sym_multiline_repeat1 = 128,
  aux_sym_string_repeat1 = 129,
  aux_sym_json_repeat1 = 130,
  aux_sym_json_repeat2 = 131,
  alias_sym_chen_data = 132,
  alias_sym_chronology_data = 133,
  alias_sym_ditaa_data = 134,
  alias_sym_ebnf_data = 135,
  alias_sym_gantt_data = 136,
  alias_sym_json_data = 137,
  alias_sym_left = 138,
  alias_sym_mindmap_data = 139,
  alias_sym_new_name = 140,
  alias_sym_regex_data = 141,
  alias_sym_right = 142,
  alias_sym_value = 143,
  alias_sym_wbs_data = 144,
  alias_sym_yaml_data = 145,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [sym_label] = "label",
  [anon_sym_alt] = "alt",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [aux_sym_line_token1] = "line_token1",
  [aux_sym_line_token2] = "line_token2",
  [anon_sym_note] = "note",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_endnote] = "end note",
  [anon_sym_loop] = "loop",
  [anon_sym_LBRACK] = "[",
  [aux_sym_custom_label_token1] = "content",
  [anon_sym_RBRACK] = "]",
  [anon_sym_group] = "group",
  [anon_sym_skinparam] = "skinparam",
  [anon_sym_sequenceMessageAlign] = "sequenceMessageAlign",
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
  [sym_line] = "line",
  [sym_note_block] = "note_block",
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
  [aux_sym_note_block_repeat1] = "note_block_repeat1",
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
  [aux_sym_line_token1] = aux_sym_line_token1,
  [aux_sym_line_token2] = aux_sym_line_token2,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_endnote] = anon_sym_endnote,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_custom_label_token1] = aux_sym_custom_label_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_skinparam] = anon_sym_skinparam,
  [anon_sym_sequenceMessageAlign] = anon_sym_sequenceMessageAlign,
  [anon_sym_center] = anon_sym_center,
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
  [sym_line] = sym_line,
  [sym_note_block] = sym_note_block,
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
  [aux_sym_note_block_repeat1] = aux_sym_note_block_repeat1,
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
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endnote] = {
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
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_note_block] = {
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
  [aux_sym_note_block_repeat1] = {
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
    [2] = anon_sym_center,
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
  [5] = 4,
  [6] = 2,
  [7] = 3,
  [8] = 4,
  [9] = 2,
  [10] = 3,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 11,
  [21] = 21,
  [22] = 21,
  [23] = 16,
  [24] = 17,
  [25] = 18,
  [26] = 19,
  [27] = 21,
  [28] = 16,
  [29] = 17,
  [30] = 18,
  [31] = 19,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 39,
  [42] = 36,
  [43] = 38,
  [44] = 36,
  [45] = 37,
  [46] = 39,
  [47] = 37,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 48,
  [60] = 49,
  [61] = 50,
  [62] = 62,
  [63] = 50,
  [64] = 48,
  [65] = 48,
  [66] = 53,
  [67] = 56,
  [68] = 62,
  [69] = 57,
  [70] = 52,
  [71] = 53,
  [72] = 54,
  [73] = 54,
  [74] = 55,
  [75] = 56,
  [76] = 57,
  [77] = 58,
  [78] = 62,
  [79] = 49,
  [80] = 55,
  [81] = 58,
  [82] = 50,
  [83] = 52,
  [84] = 84,
  [85] = 48,
  [86] = 86,
  [87] = 50,
  [88] = 48,
  [89] = 62,
  [90] = 49,
  [91] = 49,
  [92] = 50,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 86,
  [98] = 98,
  [99] = 99,
  [100] = 84,
  [101] = 101,
  [102] = 84,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 86,
  [109] = 62,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 62,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 103,
  [122] = 106,
  [123] = 94,
  [124] = 112,
  [125] = 112,
  [126] = 114,
  [127] = 118,
  [128] = 119,
  [129] = 101,
  [130] = 114,
  [131] = 118,
  [132] = 120,
  [133] = 107,
  [134] = 110,
  [135] = 116,
  [136] = 119,
  [137] = 93,
  [138] = 106,
  [139] = 107,
  [140] = 110,
  [141] = 141,
  [142] = 98,
  [143] = 101,
  [144] = 117,
  [145] = 94,
  [146] = 104,
  [147] = 93,
  [148] = 111,
  [149] = 111,
  [150] = 120,
  [151] = 105,
  [152] = 98,
  [153] = 105,
  [154] = 117,
  [155] = 115,
  [156] = 103,
  [157] = 115,
  [158] = 95,
  [159] = 104,
  [160] = 95,
  [161] = 96,
  [162] = 99,
  [163] = 96,
  [164] = 99,
  [165] = 116,
  [166] = 166,
  [167] = 166,
  [168] = 166,
  [169] = 49,
  [170] = 50,
  [171] = 48,
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
  [182] = 180,
  [183] = 180,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 186,
  [189] = 189,
  [190] = 190,
  [191] = 185,
  [192] = 192,
  [193] = 185,
  [194] = 186,
  [195] = 186,
  [196] = 185,
  [197] = 186,
  [198] = 185,
  [199] = 186,
  [200] = 185,
  [201] = 186,
  [202] = 185,
  [203] = 186,
  [204] = 185,
  [205] = 186,
  [206] = 185,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 210,
  [215] = 215,
  [216] = 209,
  [217] = 212,
  [218] = 210,
  [219] = 219,
  [220] = 209,
  [221] = 212,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 226,
  [227] = 224,
  [228] = 228,
  [229] = 224,
  [230] = 224,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
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
  [247] = 235,
  [248] = 248,
  [249] = 224,
  [250] = 238,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 241,
  [256] = 241,
  [257] = 257,
  [258] = 235,
  [259] = 224,
  [260] = 224,
  [261] = 261,
  [262] = 238,
  [263] = 224,
  [264] = 224,
  [265] = 232,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 232,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 272,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 272,
  [288] = 288,
  [289] = 289,
  [290] = 272,
  [291] = 291,
  [292] = 292,
  [293] = 272,
  [294] = 294,
  [295] = 295,
  [296] = 272,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 272,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 272,
  [305] = 233,
  [306] = 306,
  [307] = 272,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 274,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 289,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 314,
  [330] = 274,
  [331] = 321,
  [332] = 321,
  [333] = 272,
  [334] = 289,
  [335] = 314,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 84,
  [347] = 345,
  [348] = 345,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 349,
  [355] = 350,
  [356] = 349,
  [357] = 350,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 50,
  [362] = 362,
  [363] = 359,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 365,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 365,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 377,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 48,
  [386] = 386,
  [387] = 387,
  [388] = 50,
  [389] = 381,
  [390] = 359,
  [391] = 360,
  [392] = 392,
  [393] = 393,
  [394] = 365,
  [395] = 384,
  [396] = 383,
  [397] = 384,
  [398] = 384,
  [399] = 377,
  [400] = 384,
  [401] = 401,
  [402] = 360,
  [403] = 381,
  [404] = 374,
  [405] = 370,
  [406] = 383,
  [407] = 373,
  [408] = 382,
  [409] = 378,
  [410] = 379,
  [411] = 370,
  [412] = 384,
  [413] = 373,
  [414] = 48,
  [415] = 378,
  [416] = 379,
  [417] = 417,
  [418] = 418,
  [419] = 382,
  [420] = 420,
  [421] = 421,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(657);
      ADVANCE_MAP(
        '"', 922,
        '#', 827,
        '\'', 1000,
        '-', 940,
        '/', 950,
        ':', 935,
        '<', 954,
        '>', 941,
        '@', 958,
        '[', 787,
        '\\', 930,
        ']', 791,
        'o', 942,
        'x', 944,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(779);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(934);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0) ADVANCE(932);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1008);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1001);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1007);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1007);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(1010);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1007);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 922,
        '#', 827,
        '\'', 1000,
        '/', 35,
        '@', 111,
        '[', 787,
        'a', 842,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 875,
        'g', 898,
        'l', 885,
        'n', 883,
        'o', 893,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 922,
        '#', 827,
        '\'', 1000,
        '/', 35,
        '[', 787,
        'a', 842,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 863,
        'g', 898,
        'l', 885,
        'n', 883,
        'o', 893,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 922,
        '#', 827,
        '\'', 1000,
        '/', 35,
        '[', 787,
        'a', 842,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 869,
        'g', 898,
        'l', 885,
        'n', 883,
        'o', 893,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 922,
        '\'', 1000,
        '-', 939,
        '/', 950,
        ':', 935,
        '<', 954,
        '>', 941,
        '@', 220,
        '[', 20,
        '\\', 931,
        'a', 843,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 863,
        'g', 898,
        'l', 885,
        'n', 883,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '-') ADVANCE(939);
      if (lookahead == '/') ADVANCE(950);
      if (lookahead == '>') ADVANCE(941);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(931);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 922,
        '\'', 1000,
        '/', 35,
        ':', 935,
        '@', 111,
        'a', 843,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 875,
        'g', 898,
        'l', 885,
        'n', 883,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 922,
        '\'', 1000,
        '/', 35,
        ':', 935,
        '@', 111,
        'a', 842,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 875,
        'g', 898,
        'l', 885,
        'n', 883,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 922,
        '\'', 1000,
        '/', 35,
        ':', 935,
        '[', 787,
        'a', 843,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 869,
        'g', 898,
        'l', 885,
        'n', 883,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 922,
        '\'', 1000,
        '/', 35,
        ':', 935,
        'a', 842,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 863,
        'g', 898,
        'l', 885,
        'n', 883,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 922,
        '\'', 1000,
        '/', 35,
        ':', 935,
        'a', 842,
        'b', 878,
        'c', 877,
        'd', 835,
        'e', 869,
        'g', 898,
        'l', 885,
        'n', 883,
        'p', 833,
        'q', 913,
        's', 862,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(943);
      if (lookahead == 'x') ADVANCE(946);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(926);
      if (lookahead == '\\') ADVANCE(929);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0) ADVANCE(924);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(953);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\'', 1000,
        '-', 940,
        '/', 950,
        '<', 954,
        '\\', 931,
        'c', 107,
        'e', 145,
        'f', 56,
        'l', 100,
        'o', 942,
        'r', 104,
        's', 91,
        't', 204,
        'x', 945,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 1000,
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
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(830);
      if (lookahead == '\\') ADVANCE(928);
      if (lookahead == ']') ADVANCE(791);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(829);
      if (lookahead != 0) ADVANCE(828);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(959);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(970);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(960);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(971);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(961);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(972);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(962);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(973);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(963);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(974);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(964);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(975);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(965);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(976);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(966);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(977);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(967);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(978);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(968);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(1009);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(1004);
      if (lookahead == '/') ADVANCE(937);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(938);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(1003);
      if (lookahead == '/') ADVANCE(661);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (lookahead != 0) ADVANCE(662);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(1002);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(1011);
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
      if (lookahead == 'a') ADVANCE(989);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(988);
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
      if (lookahead == 'c') ADVANCE(803);
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
      if (lookahead == 'd') ADVANCE(668);
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
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(800);
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
      if (lookahead == 'e') ADVANCE(804);
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
      if (lookahead == 'f') ADVANCE(985);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(984);
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
      if (lookahead == 'l') ADVANCE(983);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(982);
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
      if (lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(981);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(998);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(957);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(796);
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
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(78);
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
      if (lookahead == 'p') ADVANCE(995);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(994);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(809);
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
      if (lookahead == 'r') ADVANCE(797);
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
      if (lookahead == 's') ADVANCE(997);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(996);
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
      if (lookahead == 't') ADVANCE(991);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(990);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(782);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(783);
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
      if (lookahead == 'w') ADVANCE(798);
      END_STATE();
    case 241:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 242:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 243:
      if (lookahead == 'x') ADVANCE(987);
      END_STATE();
    case 244:
      if (lookahead == 'x') ADVANCE(986);
      END_STATE();
    case 245:
      if (lookahead == 'y') ADVANCE(993);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(992);
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
          lookahead == 'a') ADVANCE(1017);
      END_STATE();
    case 257:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 258:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1024);
      END_STATE();
    case 259:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1017);
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
          lookahead == 'b') ADVANCE(1017);
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
          lookahead == 'd') ADVANCE(1017);
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
          lookahead == 'd') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1034);
      END_STATE();
    case 326:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1017);
      END_STATE();
    case 327:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1022);
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
          lookahead == 'e') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1034);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1017);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1029);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1026);
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
          lookahead == 'y') ADVANCE(1017);
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
          lookahead == 'y') ADVANCE(1017);
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
          lookahead == 'f') ADVANCE(1017);
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
          lookahead == 'h') ADVANCE(1017);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1034);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1017);
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
          lookahead == 'k') ADVANCE(1017);
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
          lookahead == 'l') ADVANCE(1017);
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
          lookahead == 'm') ADVANCE(1017);
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
          lookahead == 'n') ADVANCE(1017);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1030);
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
          lookahead == 'o') ADVANCE(1017);
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
          lookahead == 'p') ADVANCE(1017);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1034);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1019);
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
          lookahead == 't') ADVANCE(1017);
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
          lookahead == 't') ADVANCE(1018);
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
          lookahead == 'u') ADVANCE(1017);
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
          lookahead == 'w') ADVANCE(1017);
      END_STATE();
    case 635:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1023);
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
          lookahead == 'y') ADVANCE(1017);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 652:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 653:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1034);
      END_STATE();
    case 654:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1017);
      END_STATE();
    case 655:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      END_STATE();
    case 656:
      if (eof) ADVANCE(657);
      if (lookahead == '\n') ADVANCE(779);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
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
      ACCEPT_TOKEN(anon_sym_ATenduml);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'') ADVANCE(1012);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(662);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_line_token1);
      ADVANCE_MAP(
        '"', 923,
        '\'', 1005,
        '/', 677,
        '@', 700,
        'a', 688,
        'b', 731,
        'c', 730,
        'd', 681,
        'e', 727,
        'g', 751,
        'l', 739,
        'n', 737,
        'p', 679,
        'q', 769,
        's', 709,
        '\t', 672,
        0x0b, 672,
        '\f', 672,
        ' ', 672,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(778);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_line_token1);
      ADVANCE_MAP(
        '"', 923,
        '\'', 1005,
        '/', 677,
        'a', 688,
        'b', 731,
        'c', 730,
        'd', 681,
        'e', 710,
        'g', 751,
        'l', 739,
        'n', 737,
        'p', 679,
        'q', 769,
        's', 709,
        '\t', 673,
        0x0b, 673,
        '\f', 673,
        ' ', 673,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(778);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_line_token1);
      ADVANCE_MAP(
        '"', 923,
        '\'', 1005,
        '/', 677,
        'a', 688,
        'b', 731,
        'c', 730,
        'd', 681,
        'e', 718,
        'g', 751,
        'l', 739,
        'n', 737,
        'p', 679,
        'q', 769,
        's', 709,
        '\t', 674,
        0x0b, 674,
        '\f', 674,
        ' ', 674,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(778);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == 'e') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(778);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(1005);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(778);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'a') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'a') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'a') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'a') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'a') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'a') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'a') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'a') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'b') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'b') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'c') ADVANCE(767);
      if (lookahead == 'l') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'c') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'c') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(670);
      if (lookahead == 't') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'i') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'i') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'i') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'i') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'i') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'k') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'n') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'l') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'l') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'm') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'm') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'm') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'p') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'p') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'p') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'p') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'p') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'r') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 's') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 's') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 's') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'u') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'u') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'u') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'u') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'u') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'u') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'y') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'y') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_line_token2);
      if (lookahead == '\n') ADVANCE(779);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_endnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(1006);
      if (lookahead == '/') ADVANCE(789);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(790);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(790);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(830);
      if (lookahead == '\\') ADVANCE(928);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(828);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(1009);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(911);
      if (lookahead == 'l') ADVANCE(902);
      if (lookahead == 's') ADVANCE(831);
      if (lookahead == 'u') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(911);
      if (lookahead == 'l') ADVANCE(902);
      if (lookahead == 'u') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == 't') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(900);
      if (lookahead == 'n') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(866);
      if (lookahead == 'n') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(926);
      if (lookahead == '\\') ADVANCE(929);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(924);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(1009);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(927);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(949);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(949);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(934);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(932);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(1009);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(1004);
      if (lookahead == '/') ADVANCE(937);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(938);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(938);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(938);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(952);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(948);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(955);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(1009);
      if (lookahead == '/') ADVANCE(951);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(956);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(959);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(970);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(960);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(971);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(961);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(972);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(962);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(973);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(963);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(974);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(964);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(975);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(965);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(976);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(966);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(977);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(967);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(978);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1000);
      if (lookahead == '/') ADVANCE(980);
      if (lookahead == '@') ADVANCE(968);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      if (lookahead != 0) ADVANCE(969);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1009);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(1007);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(662);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(938);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(790);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(1008);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1001);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(1007);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(662);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(938);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(778);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(790);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(463);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(576);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(575);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(488);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1031);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(430);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1032);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(654);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1031);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
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
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 12},
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
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 673},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 674},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 672},
  [84] = {.lex_state = 673},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 674},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 672},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 656},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 656},
  [183] = {.lex_state = 656},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 19},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 19},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 17},
  [208] = {.lex_state = 17},
  [209] = {.lex_state = 24},
  [210] = {.lex_state = 656},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 24},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 656},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 24},
  [217] = {.lex_state = 24},
  [218] = {.lex_state = 656},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 24},
  [221] = {.lex_state = 24},
  [222] = {.lex_state = 24},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 25},
  [225] = {.lex_state = 26},
  [226] = {.lex_state = 27},
  [227] = {.lex_state = 28},
  [228] = {.lex_state = 29},
  [229] = {.lex_state = 30},
  [230] = {.lex_state = 31},
  [231] = {.lex_state = 26},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 19},
  [234] = {.lex_state = 28},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 32},
  [237] = {.lex_state = 31},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 33},
  [240] = {.lex_state = 25},
  [241] = {.lex_state = 675},
  [242] = {.lex_state = 30},
  [243] = {.lex_state = 656},
  [244] = {.lex_state = 29},
  [245] = {.lex_state = 31},
  [246] = {.lex_state = 27},
  [247] = {.lex_state = 18},
  [248] = {.lex_state = 34},
  [249] = {.lex_state = 29},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 675},
  [252] = {.lex_state = 26},
  [253] = {.lex_state = 28},
  [254] = {.lex_state = 32},
  [255] = {.lex_state = 675},
  [256] = {.lex_state = 675},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 18},
  [259] = {.lex_state = 27},
  [260] = {.lex_state = 34},
  [261] = {.lex_state = 30},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 33},
  [264] = {.lex_state = 32},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 33},
  [267] = {.lex_state = 25},
  [268] = {.lex_state = 34},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 656},
  [271] = {.lex_state = 656},
  [272] = {.lex_state = 34},
  [273] = {.lex_state = 33},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 656},
  [276] = {.lex_state = 656},
  [277] = {.lex_state = 656},
  [278] = {.lex_state = 656},
  [279] = {.lex_state = 656},
  [280] = {.lex_state = 656},
  [281] = {.lex_state = 656},
  [282] = {.lex_state = 656},
  [283] = {.lex_state = 656},
  [284] = {.lex_state = 656},
  [285] = {.lex_state = 656},
  [286] = {.lex_state = 656},
  [287] = {.lex_state = 25},
  [288] = {.lex_state = 656},
  [289] = {.lex_state = 21},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 21},
  [292] = {.lex_state = 656},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 656},
  [295] = {.lex_state = 656},
  [296] = {.lex_state = 26},
  [297] = {.lex_state = 656},
  [298] = {.lex_state = 656},
  [299] = {.lex_state = 656},
  [300] = {.lex_state = 28},
  [301] = {.lex_state = 656},
  [302] = {.lex_state = 656},
  [303] = {.lex_state = 24},
  [304] = {.lex_state = 30},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 656},
  [307] = {.lex_state = 31},
  [308] = {.lex_state = 656},
  [309] = {.lex_state = 656},
  [310] = {.lex_state = 656},
  [311] = {.lex_state = 656},
  [312] = {.lex_state = 656},
  [313] = {.lex_state = 656},
  [314] = {.lex_state = 21},
  [315] = {.lex_state = 21},
  [316] = {.lex_state = 656},
  [317] = {.lex_state = 656},
  [318] = {.lex_state = 656},
  [319] = {.lex_state = 656},
  [320] = {.lex_state = 656},
  [321] = {.lex_state = 21},
  [322] = {.lex_state = 656},
  [323] = {.lex_state = 21},
  [324] = {.lex_state = 656},
  [325] = {.lex_state = 656},
  [326] = {.lex_state = 656},
  [327] = {.lex_state = 656},
  [328] = {.lex_state = 656},
  [329] = {.lex_state = 21},
  [330] = {.lex_state = 21},
  [331] = {.lex_state = 21},
  [332] = {.lex_state = 21},
  [333] = {.lex_state = 32},
  [334] = {.lex_state = 21},
  [335] = {.lex_state = 21},
  [336] = {.lex_state = 656},
  [337] = {.lex_state = 11},
  [338] = {.lex_state = 11},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 656},
  [342] = {.lex_state = 675},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 676},
  [346] = {.lex_state = 675},
  [347] = {.lex_state = 676},
  [348] = {.lex_state = 676},
  [349] = {.lex_state = 21},
  [350] = {.lex_state = 21},
  [351] = {.lex_state = 11},
  [352] = {.lex_state = 11},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 21},
  [355] = {.lex_state = 21},
  [356] = {.lex_state = 21},
  [357] = {.lex_state = 21},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 36},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 656},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 36},
  [364] = {.lex_state = 37},
  [365] = {.lex_state = 656},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 22},
  [368] = {.lex_state = 22},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 656},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 656},
  [373] = {.lex_state = 37},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 656},
  [377] = {.lex_state = 23},
  [378] = {.lex_state = 37},
  [379] = {.lex_state = 37},
  [380] = {.lex_state = 23},
  [381] = {.lex_state = 656},
  [382] = {.lex_state = 21},
  [383] = {.lex_state = 22},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 23},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 788},
  [388] = {.lex_state = 23},
  [389] = {.lex_state = 656},
  [390] = {.lex_state = 36},
  [391] = {.lex_state = 36},
  [392] = {.lex_state = 38},
  [393] = {.lex_state = 3},
  [394] = {.lex_state = 656},
  [395] = {.lex_state = 11},
  [396] = {.lex_state = 22},
  [397] = {.lex_state = 11},
  [398] = {.lex_state = 11},
  [399] = {.lex_state = 23},
  [400] = {.lex_state = 11},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 36},
  [403] = {.lex_state = 656},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 656},
  [406] = {.lex_state = 22},
  [407] = {.lex_state = 37},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 37},
  [410] = {.lex_state = 37},
  [411] = {.lex_state = 656},
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 37},
  [414] = {.lex_state = 656},
  [415] = {.lex_state = 37},
  [416] = {.lex_state = 37},
  [417] = {.lex_state = 22},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 21},
  [420] = {(TSStateId)(-1)},
  [421] = {(TSStateId)(-1)},
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
    [sym_diagram] = STATE(401),
    [sym_uml] = STATE(362),
    [sym_json] = STATE(362),
    [sym_yaml] = STATE(362),
    [sym_ebnf] = STATE(362),
    [sym_regex] = STATE(362),
    [sym_ditaa] = STATE(362),
    [sym_gantt] = STATE(362),
    [sym_chronology] = STATE(362),
    [sym_mindmap] = STATE(362),
    [sym_wbs] = STATE(362),
    [sym_chen] = STATE(362),
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
  [0] = 21,
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
      anon_sym_note,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      anon_sym_autonumber,
    ACTIONS(45), 1,
      anon_sym_autonumberstop,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_uml_repeat1,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(331), 1,
      aux_sym_alt_block_repeat1,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(47), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [77] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(55), 1,
      anon_sym_end,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    STATE(3), 1,
      sym_comment,
    STATE(17), 1,
      sym_custom_label,
    STATE(18), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [154] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_note,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      anon_sym_autonumber,
    ACTIONS(45), 1,
      anon_sym_autonumberstop,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(289), 1,
      aux_sym_alt_block_repeat1,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(47), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [231] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_note,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      anon_sym_autonumber,
    ACTIONS(45), 1,
      anon_sym_autonumberstop,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(334), 1,
      aux_sym_alt_block_repeat1,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(47), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [308] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_note,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      anon_sym_autonumber,
    ACTIONS(45), 1,
      anon_sym_autonumberstop,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(321), 1,
      aux_sym_alt_block_repeat1,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(47), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [385] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(79), 1,
      anon_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(24), 1,
      sym_custom_label,
    STATE(25), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [462] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_note,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      anon_sym_autonumber,
    ACTIONS(45), 1,
      anon_sym_autonumberstop,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(323), 1,
      aux_sym_alt_block_repeat1,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(47), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [539] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(31), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_note,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      anon_sym_autonumber,
    ACTIONS(45), 1,
      anon_sym_autonumberstop,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_end,
    STATE(5), 1,
      aux_sym_uml_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(332), 1,
      aux_sym_alt_block_repeat1,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(47), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [616] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(85), 1,
      anon_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(29), 1,
      sym_custom_label,
    STATE(30), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [693] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_alt,
    ACTIONS(92), 1,
      anon_sym_note,
    ACTIONS(95), 1,
      anon_sym_loop,
    ACTIONS(98), 1,
      anon_sym_group,
    ACTIONS(101), 1,
      anon_sym_skinparam,
    ACTIONS(104), 1,
      anon_sym_autonumber,
    ACTIONS(107), 1,
      anon_sym_autonumberstop,
    ACTIONS(113), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    ACTIONS(90), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(11), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(110), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [763] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_note,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      anon_sym_autonumber,
    ACTIONS(45), 1,
      anon_sym_autonumberstop,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    ACTIONS(119), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(47), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [835] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_alt,
    ACTIONS(35), 1,
      anon_sym_note,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(41), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      anon_sym_autonumber,
    ACTIONS(45), 1,
      anon_sym_autonumberstop,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(117), 1,
      sym_expression,
    STATE(166), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    ACTIONS(121), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(94), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(47), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [907] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_ATenduml,
    ACTIONS(125), 1,
      anon_sym_alt,
    ACTIONS(127), 1,
      anon_sym_note,
    ACTIONS(129), 1,
      anon_sym_loop,
    ACTIONS(131), 1,
      anon_sym_group,
    ACTIONS(133), 1,
      anon_sym_skinparam,
    ACTIONS(135), 1,
      anon_sym_autonumber,
    ACTIONS(137), 1,
      anon_sym_autonumberstop,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(154), 1,
      sym_expression,
    STATE(167), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(123), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(139), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [978] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(113), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_ATenduml,
    ACTIONS(143), 1,
      anon_sym_alt,
    ACTIONS(146), 1,
      anon_sym_note,
    ACTIONS(149), 1,
      anon_sym_loop,
    ACTIONS(152), 1,
      anon_sym_group,
    ACTIONS(155), 1,
      anon_sym_skinparam,
    ACTIONS(158), 1,
      anon_sym_autonumber,
    ACTIONS(161), 1,
      anon_sym_autonumberstop,
    STATE(154), 1,
      sym_expression,
    STATE(167), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(15), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(123), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(164), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1047] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1118] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1189] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1260] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1331] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_end,
    ACTIONS(113), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_alt,
    ACTIONS(176), 1,
      anon_sym_note,
    ACTIONS(179), 1,
      anon_sym_loop,
    ACTIONS(182), 1,
      anon_sym_group,
    ACTIONS(185), 1,
      anon_sym_skinparam,
    ACTIONS(188), 1,
      anon_sym_autonumber,
    ACTIONS(191), 1,
      anon_sym_autonumberstop,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(20), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(194), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1400] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(21), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1471] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1542] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(201), 1,
      anon_sym_end,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1613] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1684] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1755] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1826] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(207), 1,
      anon_sym_end,
    STATE(27), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1897] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(209), 1,
      anon_sym_end,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1968] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(29), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_uml_repeat1,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [2039] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [2110] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_alt,
    ACTIONS(57), 1,
      anon_sym_note,
    ACTIONS(59), 1,
      anon_sym_loop,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      anon_sym_autonumber,
    ACTIONS(69), 1,
      anon_sym_autonumberstop,
    ACTIONS(213), 1,
      anon_sym_end,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(144), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(145), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(71), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [2181] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_alt,
    ACTIONS(127), 1,
      anon_sym_note,
    ACTIONS(129), 1,
      anon_sym_loop,
    ACTIONS(131), 1,
      anon_sym_group,
    ACTIONS(133), 1,
      anon_sym_skinparam,
    ACTIONS(135), 1,
      anon_sym_autonumber,
    ACTIONS(137), 1,
      anon_sym_autonumberstop,
    ACTIONS(215), 1,
      anon_sym_ATenduml,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(154), 1,
      sym_expression,
    STATE(167), 1,
      sym_participant_name,
    STATE(169), 1,
      sym_string,
    STATE(123), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(139), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [2252] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_as,
    ACTIONS(227), 1,
      anon_sym_order,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      sym_multiline,
    STATE(37), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(221), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(217), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [2307] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_order,
    STATE(34), 1,
      sym_comment,
    STATE(44), 1,
      sym_multiline,
    STATE(45), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(221), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(217), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [2361] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_as,
    ACTIONS(243), 1,
      anon_sym_order,
    STATE(35), 1,
      sym_comment,
    STATE(42), 1,
      sym_multiline,
    STATE(47), 1,
      aux_sym_attribute_repeat2,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(221), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(217), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [2415] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_as,
    ACTIONS(227), 1,
      anon_sym_order,
    STATE(36), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(245), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [2464] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_as,
    ACTIONS(227), 1,
      anon_sym_order,
    STATE(37), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(245), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [2513] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_as,
    ACTIONS(227), 1,
      anon_sym_order,
    STATE(38), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(249), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [2562] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      anon_sym_as,
    ACTIONS(263), 1,
      anon_sym_order,
    ACTIONS(255), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(39), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(53), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(253), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [2609] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_as,
    ACTIONS(243), 1,
      anon_sym_order,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(251), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [2657] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_as,
    ACTIONS(272), 1,
      anon_sym_order,
    STATE(41), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(255), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(253), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [2703] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_as,
    ACTIONS(243), 1,
      anon_sym_order,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(42), 1,
      sym_comment,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(247), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [2751] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_order,
    STATE(43), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(249), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [2799] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_order,
    STATE(43), 1,
      aux_sym_attribute_repeat2,
    STATE(44), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(245), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [2847] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_order,
    STATE(45), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(245), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [2895] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_as,
    ACTIONS(281), 1,
      anon_sym_order,
    ACTIONS(255), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(71), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(253), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [2941] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_as,
    ACTIONS(243), 1,
      anon_sym_order,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(47), 1,
      sym_comment,
    STATE(66), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(247), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [2989] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(284), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3026] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(288), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3063] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(292), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3100] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(290), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(288), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [3136] = 7,
    ACTIONS(298), 1,
      aux_sym_line_token1,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_note_block_repeat1,
    STATE(342), 1,
      sym_line,
    ACTIONS(296), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_autonumberstop,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [3176] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(304), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3212] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(312), 1,
      anon_sym_as,
    ACTIONS(314), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym_comment,
    STATE(86), 1,
      sym_attr_alias,
    ACTIONS(310), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(308), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3254] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(316), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3290] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(253), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3326] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(320), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3362] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(324), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3398] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(284), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [3434] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(288), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [3470] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(292), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [3506] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(328), 19,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3542] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(292), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [3578] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(284), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [3614] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(284), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [3649] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(306), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(304), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [3684] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(253), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [3719] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(328), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [3754] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(320), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [3789] = 7,
    ACTIONS(298), 1,
      aux_sym_line_token1,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym_note_block_repeat1,
    STATE(342), 1,
      sym_line,
    ACTIONS(296), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_autonumberstop,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [3828] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(304), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [3863] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_as,
    ACTIONS(334), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym_comment,
    STATE(97), 1,
      sym_attr_alias,
    ACTIONS(310), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(308), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [3904] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym_comment,
    STATE(108), 1,
      sym_attr_alias,
    ACTIONS(310), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(308), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [3945] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(316), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [3980] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(253), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [4015] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(320), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [4050] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(324), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [4085] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(328), 18,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [4120] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(288), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4155] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(316), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [4190] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(324), 17,
      anon_sym_alt,
      anon_sym_note,
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
  [4225] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(292), 18,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4260] = 7,
    ACTIONS(298), 1,
      aux_sym_line_token1,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym_note_block_repeat1,
    STATE(342), 1,
      sym_line,
    ACTIONS(296), 18,
      anon_sym_ATenduml,
      anon_sym_alt,
      anon_sym_note,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_autonumberstop,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [4299] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(340), 20,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      aux_sym_line_token1,
      anon_sym_note,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_autonumberstop,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [4331] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(284), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [4365] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(346), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4401] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(292), 16,
      anon_sym_alt,
      anon_sym_note,
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
  [4435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(284), 16,
      anon_sym_alt,
      anon_sym_note,
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
  [4469] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(328), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4503] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(288), 16,
      anon_sym_alt,
      anon_sym_note,
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
  [4537] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(288), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [4571] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(292), 17,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [4605] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(348), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4638] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(352), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4671] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_comment,
    ACTIONS(358), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(356), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4704] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4737] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(360), 1,
      anon_sym_COLON,
    STATE(97), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [4772] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(362), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4805] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4838] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
      sym_comment,
    ACTIONS(340), 19,
      anon_sym_alt,
      anon_sym_end,
      aux_sym_line_token1,
      anon_sym_note,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_autonumberstop,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [4869] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(101), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4902] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(102), 1,
      sym_comment,
    ACTIONS(340), 19,
      anon_sym_ATenduml,
      anon_sym_alt,
      aux_sym_line_token1,
      anon_sym_note,
      anon_sym_loop,
      anon_sym_group,
      anon_sym_skinparam,
      anon_sym_autonumber,
      anon_sym_autonumberstop,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [4933] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(103), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(366), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4966] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(217), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [4999] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(370), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5032] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(374), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5065] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(378), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5098] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    STATE(108), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(342), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [5133] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(328), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [5166] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(384), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5199] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(388), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5232] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(392), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5265] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(328), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [5298] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(114), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(396), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5331] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(115), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(400), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5364] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(404), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5397] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(408), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5430] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(412), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
    STATE(119), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5496] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(416), 17,
      anon_sym_alt,
      anon_sym_else,
      anon_sym_end,
      anon_sym_note,
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
  [5529] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(366), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [5561] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(374), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [5593] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(352), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [5625] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(124), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(392), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [5657] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(394), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(392), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [5689] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(396), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [5721] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(412), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [5753] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [5785] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(129), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [5817] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(130), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(396), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [5849] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(412), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [5881] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(416), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [5913] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(378), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [5945] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(384), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
    STATE(135), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(404), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6009] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6041] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(348), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6073] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(374), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6105] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(378), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6137] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
      sym_comment,
    ACTIONS(386), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(384), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6169] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(420), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6201] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(362), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6233] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(249), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6265] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(408), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6297] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(352), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6329] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(217), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6361] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(348), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6393] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(388), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6425] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(388), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6457] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(416), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6489] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(370), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6521] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(364), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(362), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6553] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(370), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6585] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(408), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6617] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(400), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6649] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(156), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(366), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6681] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(400), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6713] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
      sym_comment,
    ACTIONS(358), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(356), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6745] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(217), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6777] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(160), 1,
      sym_comment,
    ACTIONS(358), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(356), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6809] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6841] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6873] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(163), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6905] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(245), 16,
      anon_sym_alt,
      anon_sym_end,
      anon_sym_note,
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
  [6937] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(165), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(404), 15,
      anon_sym_alt,
      anon_sym_note,
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
  [6969] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(426), 1,
      anon_sym_DASH,
    ACTIONS(430), 1,
      anon_sym_x,
    ACTIONS(434), 1,
      anon_sym_DASH_DASH,
    STATE(166), 1,
      sym_comment,
    STATE(238), 1,
      sym_connector,
    ACTIONS(428), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(424), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(432), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7005] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(426), 1,
      anon_sym_DASH,
    ACTIONS(430), 1,
      anon_sym_x,
    ACTIONS(434), 1,
      anon_sym_DASH_DASH,
    STATE(167), 1,
      sym_comment,
    STATE(262), 1,
      sym_connector,
    ACTIONS(428), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(424), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(432), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7041] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(426), 1,
      anon_sym_DASH,
    ACTIONS(430), 1,
      anon_sym_x,
    ACTIONS(434), 1,
      anon_sym_DASH_DASH,
    STATE(168), 1,
      sym_comment,
    STATE(250), 1,
      sym_connector,
    ACTIONS(428), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(424), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(432), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7077] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(169), 1,
      sym_comment,
    ACTIONS(288), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(290), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [7102] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(170), 1,
      sym_comment,
    ACTIONS(292), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(294), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [7127] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(171), 1,
      sym_comment,
    ACTIONS(284), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(286), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [7152] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(440), 1,
      anon_sym_DASH,
    STATE(172), 1,
      sym_comment,
    ACTIONS(436), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(438), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(442), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7179] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(448), 1,
      anon_sym_DASH,
    STATE(173), 1,
      sym_comment,
    ACTIONS(444), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(446), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(450), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7206] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(458), 1,
      anon_sym_LBRACK_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(452), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(454), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(456), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7233] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(466), 1,
      anon_sym_LBRACK_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(460), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(462), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(464), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7260] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(176), 1,
      sym_comment,
    ACTIONS(444), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(446), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(450), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7284] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(468), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(470), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(472), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7308] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(178), 1,
      sym_comment,
    ACTIONS(452), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(454), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(456), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7332] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(179), 1,
      sym_comment,
    ACTIONS(460), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(462), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(464), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7356] = 9,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(474), 1,
      aux_sym_line_token2,
    ACTIONS(478), 1,
      aux_sym_attribute_token3,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym_attribute_repeat1,
    STATE(370), 1,
      sym_string,
    ACTIONS(476), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7385] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(484), 1,
      anon_sym_DASH,
    STATE(181), 1,
      sym_comment,
    ACTIONS(482), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(486), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7408] = 9,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(478), 1,
      aux_sym_attribute_token3,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      aux_sym_line_token2,
    STATE(182), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_attribute_repeat1,
    STATE(411), 1,
      sym_string,
    ACTIONS(490), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7437] = 9,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(478), 1,
      aux_sym_attribute_token3,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      aux_sym_line_token2,
    STATE(183), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_attribute_repeat1,
    STATE(405), 1,
      sym_string,
    ACTIONS(494), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7466] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(500), 1,
      anon_sym_LBRACK_POUND,
    STATE(184), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(498), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7489] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    STATE(185), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7515] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7541] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(187), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(442), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7561] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7587] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(189), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(514), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7607] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(190), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(498), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7627] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      aux_sym_string_repeat1,
    STATE(191), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7653] = 7,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      anon_sym_BSLASH,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(520), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(192), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [7677] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7703] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(194), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7729] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(195), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7755] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(532), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7781] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(534), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(197), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7807] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(536), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7833] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(199), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7859] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7885] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(201), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7911] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7937] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(203), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7963] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_string_repeat1,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7989] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(550), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(205), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8015] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_BSLASH,
    ACTIONS(552), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      aux_sym_string_repeat1,
    STATE(206), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_char,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8041] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    ACTIONS(554), 1,
      aux_sym_attr_alias_token1,
    STATE(207), 1,
      sym_comment,
    ACTIONS(556), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8062] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(558), 1,
      aux_sym_attr_alias_token1,
    STATE(208), 1,
      sym_comment,
    ACTIONS(560), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8083] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      aux_sym_multiline_token1,
    ACTIONS(566), 1,
      anon_sym_BSLASH,
    STATE(209), 1,
      sym_comment,
    STATE(212), 1,
      aux_sym_multiline_repeat1,
    STATE(303), 1,
      sym_escape_char,
  [8108] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(478), 1,
      aux_sym_attribute_token3,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(568), 1,
      aux_sym_line_token2,
    STATE(210), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_attribute_repeat1,
    STATE(403), 1,
      sym_string,
  [8133] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_attr_alias_token1,
    STATE(211), 1,
      sym_comment,
    ACTIONS(572), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8154] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(564), 1,
      aux_sym_multiline_token1,
    ACTIONS(566), 1,
      anon_sym_BSLASH,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    STATE(212), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_multiline_repeat1,
    STATE(303), 1,
      sym_escape_char,
  [8179] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(576), 1,
      aux_sym_attr_alias_token1,
    STATE(213), 1,
      sym_comment,
    ACTIONS(578), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8200] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(478), 1,
      aux_sym_attribute_token3,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(580), 1,
      aux_sym_line_token2,
    STATE(214), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_attribute_repeat1,
    STATE(389), 1,
      sym_string,
  [8225] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_DQUOTE,
    ACTIONS(582), 1,
      aux_sym_attr_alias_token1,
    STATE(215), 1,
      sym_comment,
    ACTIONS(584), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8246] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(564), 1,
      aux_sym_multiline_token1,
    ACTIONS(566), 1,
      anon_sym_BSLASH,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_multiline_repeat1,
    STATE(303), 1,
      sym_escape_char,
  [8271] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(564), 1,
      aux_sym_multiline_token1,
    ACTIONS(566), 1,
      anon_sym_BSLASH,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_multiline_repeat1,
    STATE(303), 1,
      sym_escape_char,
  [8296] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(478), 1,
      aux_sym_attribute_token3,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(590), 1,
      aux_sym_line_token2,
    STATE(218), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_attribute_repeat1,
    STATE(381), 1,
      sym_string,
  [8321] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(592), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_comment,
    ACTIONS(596), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8342] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(564), 1,
      aux_sym_multiline_token1,
    ACTIONS(566), 1,
      anon_sym_BSLASH,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_multiline_repeat1,
    STATE(303), 1,
      sym_escape_char,
  [8367] = 8,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(564), 1,
      aux_sym_multiline_token1,
    ACTIONS(566), 1,
      anon_sym_BSLASH,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_multiline_repeat1,
    STATE(303), 1,
      sym_escape_char,
  [8392] = 7,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    ACTIONS(604), 1,
      aux_sym_multiline_token1,
    ACTIONS(607), 1,
      anon_sym_BSLASH,
    STATE(303), 1,
      sym_escape_char,
    STATE(222), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [8415] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(610), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    STATE(223), 1,
      sym_comment,
    ACTIONS(614), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8436] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendregex,
    ACTIONS(616), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(224), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8454] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendchronology,
    ACTIONS(621), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(225), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8472] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_ATendgantt,
    STATE(226), 1,
      sym_comment,
    STATE(259), 1,
      aux_sym_json_repeat1,
    ACTIONS(624), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8492] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendmindmap,
    ACTIONS(628), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(227), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8510] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(633), 1,
      anon_sym_ATendditaa,
    STATE(228), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_json_repeat1,
    ACTIONS(631), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8530] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendwbs,
    ACTIONS(635), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(229), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8548] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendchen,
    ACTIONS(638), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(230), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8566] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_ATendchronology,
    STATE(225), 1,
      aux_sym_json_repeat1,
    STATE(231), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8586] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(645), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_participant_name,
    STATE(49), 1,
      sym_string,
    STATE(232), 1,
      sym_comment,
  [8608] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(233), 1,
      sym_comment,
    ACTIONS(649), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [8624] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(653), 1,
      anon_sym_ATendmindmap,
    STATE(227), 1,
      aux_sym_json_repeat1,
    STATE(234), 1,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8644] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(655), 1,
      aux_sym_attribute_token1,
    ACTIONS(657), 1,
      aux_sym_attribute_token2,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    STATE(235), 1,
      sym_comment,
    STATE(377), 1,
      sym_string,
  [8666] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(663), 1,
      anon_sym_ATendebnf,
    STATE(236), 1,
      sym_comment,
    STATE(254), 1,
      aux_sym_json_repeat1,
    ACTIONS(661), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8686] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_ATendchen,
    STATE(237), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_json_repeat1,
    ACTIONS(665), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8706] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(669), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(671), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_participant_name,
    STATE(79), 1,
      sym_string,
    STATE(238), 1,
      sym_comment,
  [8728] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(675), 1,
      anon_sym_ATendjson,
    STATE(239), 1,
      sym_comment,
    STATE(263), 1,
      aux_sym_json_repeat1,
    ACTIONS(673), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8748] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_ATendregex,
    STATE(240), 1,
      sym_comment,
    STATE(267), 1,
      aux_sym_json_repeat1,
    ACTIONS(677), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8768] = 7,
    ACTIONS(298), 1,
      aux_sym_line_token1,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(681), 1,
      anon_sym_endnote,
    STATE(241), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym_note_block_repeat1,
    STATE(342), 1,
      sym_line,
  [8790] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(685), 1,
      anon_sym_ATendwbs,
    STATE(229), 1,
      aux_sym_json_repeat1,
    STATE(242), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8810] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(687), 1,
      aux_sym_line_token2,
    ACTIONS(689), 1,
      aux_sym_attribute_token3,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    STATE(243), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [8830] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(694), 1,
      anon_sym_ATendditaa,
    STATE(244), 1,
      sym_comment,
    STATE(249), 1,
      aux_sym_json_repeat1,
    ACTIONS(631), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8850] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(696), 1,
      anon_sym_ATendchen,
    STATE(230), 1,
      aux_sym_json_repeat1,
    STATE(245), 1,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8870] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(698), 1,
      anon_sym_ATendgantt,
    STATE(226), 1,
      aux_sym_json_repeat1,
    STATE(246), 1,
      sym_comment,
    ACTIONS(624), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8890] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      aux_sym_attribute_token1,
    ACTIONS(702), 1,
      aux_sym_attribute_token2,
    STATE(247), 1,
      sym_comment,
    STATE(380), 1,
      sym_string,
  [8912] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(706), 1,
      anon_sym_ATendyaml,
    STATE(248), 1,
      sym_comment,
    STATE(260), 1,
      aux_sym_json_repeat1,
    ACTIONS(704), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8932] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendditaa,
    ACTIONS(708), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(249), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8950] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_participant_name,
    STATE(91), 1,
      sym_string,
    STATE(250), 1,
      sym_comment,
  [8972] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(715), 1,
      aux_sym_line_token1,
    ACTIONS(718), 1,
      anon_sym_endnote,
    STATE(342), 1,
      sym_line,
    STATE(251), 2,
      sym_comment,
      aux_sym_note_block_repeat1,
  [8992] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(720), 1,
      anon_sym_ATendchronology,
    STATE(231), 1,
      aux_sym_json_repeat1,
    STATE(252), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9012] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(722), 1,
      anon_sym_ATendmindmap,
    STATE(234), 1,
      aux_sym_json_repeat1,
    STATE(253), 1,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9032] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(724), 1,
      anon_sym_ATendebnf,
    STATE(254), 1,
      sym_comment,
    STATE(264), 1,
      aux_sym_json_repeat1,
    ACTIONS(661), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9052] = 7,
    ACTIONS(298), 1,
      aux_sym_line_token1,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_endnote,
    STATE(251), 1,
      aux_sym_note_block_repeat1,
    STATE(255), 1,
      sym_comment,
    STATE(342), 1,
      sym_line,
  [9074] = 7,
    ACTIONS(298), 1,
      aux_sym_line_token1,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      anon_sym_endnote,
    STATE(251), 1,
      aux_sym_note_block_repeat1,
    STATE(256), 1,
      sym_comment,
    STATE(342), 1,
      sym_line,
  [9096] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(257), 1,
      sym_comment,
    ACTIONS(730), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [9112] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      aux_sym_attribute_token1,
    ACTIONS(734), 1,
      aux_sym_attribute_token2,
    STATE(258), 1,
      sym_comment,
    STATE(399), 1,
      sym_string,
  [9134] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendgantt,
    ACTIONS(736), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(259), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9152] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendyaml,
    ACTIONS(739), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(260), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9170] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(742), 1,
      anon_sym_ATendwbs,
    STATE(242), 1,
      aux_sym_json_repeat1,
    STATE(261), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9190] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(744), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(746), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_participant_name,
    STATE(90), 1,
      sym_string,
    STATE(262), 1,
      sym_comment,
  [9212] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendjson,
    ACTIONS(748), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(263), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9230] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(619), 1,
      anon_sym_ATendebnf,
    ACTIONS(751), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(264), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9248] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(754), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_participant_name,
    STATE(51), 1,
      sym_string,
    STATE(265), 1,
      sym_comment,
  [9270] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(758), 1,
      anon_sym_ATendjson,
    STATE(239), 1,
      aux_sym_json_repeat1,
    STATE(266), 1,
      sym_comment,
    ACTIONS(673), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9290] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(760), 1,
      anon_sym_ATendregex,
    STATE(224), 1,
      aux_sym_json_repeat1,
    STATE(267), 1,
      sym_comment,
    ACTIONS(677), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9310] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(762), 1,
      anon_sym_ATendyaml,
    STATE(248), 1,
      aux_sym_json_repeat1,
    STATE(268), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9330] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(764), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(766), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_participant_name,
    STATE(60), 1,
      sym_string,
    STATE(269), 1,
      sym_comment,
  [9352] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(768), 1,
      ts_builtin_sym_end,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    STATE(270), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_json_repeat2,
  [9371] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(772), 1,
      aux_sym_line_token2,
    STATE(271), 1,
      sym_comment,
    ACTIONS(774), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [9388] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(272), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [9403] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(273), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [9418] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
      sym_boolean_literal,
    STATE(274), 1,
      sym_comment,
    ACTIONS(778), 2,
      anon_sym_true,
      anon_sym_false,
  [9435] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(780), 1,
      ts_builtin_sym_end,
    STATE(275), 1,
      sym_comment,
    STATE(297), 1,
      aux_sym_json_repeat2,
  [9454] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(782), 1,
      ts_builtin_sym_end,
    ACTIONS(784), 1,
      aux_sym_line_token2,
    STATE(276), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [9471] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(277), 1,
      sym_comment,
  [9490] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(278), 1,
      sym_comment,
  [9509] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(279), 1,
      sym_comment,
  [9528] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(280), 1,
      sym_comment,
  [9547] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(795), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(281), 1,
      sym_comment,
  [9566] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(282), 1,
      sym_comment,
  [9585] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(799), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(283), 1,
      sym_comment,
  [9604] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(801), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(284), 1,
      sym_comment,
  [9623] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(803), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(285), 1,
      sym_comment,
  [9642] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(286), 1,
      sym_comment,
  [9661] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(287), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [9676] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(807), 1,
      ts_builtin_sym_end,
    STATE(288), 1,
      sym_comment,
    STATE(301), 1,
      aux_sym_json_repeat2,
  [9695] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(809), 1,
      anon_sym_else,
    ACTIONS(811), 1,
      anon_sym_end,
    STATE(289), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_alt_block_repeat1,
  [9714] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(290), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [9729] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(813), 1,
      anon_sym_else,
    ACTIONS(816), 1,
      anon_sym_end,
    STATE(291), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [9746] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(292), 1,
      sym_comment,
  [9765] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(293), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [9780] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
    STATE(294), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_json_repeat2,
  [9799] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
    STATE(277), 1,
      aux_sym_json_repeat2,
    STATE(295), 1,
      sym_comment,
  [9818] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(296), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [9833] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(297), 1,
      sym_comment,
  [9852] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(826), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      aux_sym_json_repeat2,
    STATE(298), 1,
      sym_comment,
  [9871] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    STATE(299), 1,
      sym_comment,
    STATE(316), 1,
      aux_sym_json_repeat2,
  [9890] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(300), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [9905] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(301), 1,
      sym_comment,
  [9924] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
    STATE(279), 1,
      aux_sym_json_repeat2,
    STATE(302), 1,
      sym_comment,
  [9943] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(303), 1,
      sym_comment,
    ACTIONS(834), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [9958] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(304), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [9973] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(305), 1,
      sym_comment,
    ACTIONS(649), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [9988] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_comment,
    STATE(318), 1,
      aux_sym_json_repeat2,
  [10007] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(307), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [10022] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(308), 1,
      sym_comment,
  [10041] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(840), 1,
      ts_builtin_sym_end,
    STATE(280), 1,
      aux_sym_json_repeat2,
    STATE(309), 1,
      sym_comment,
  [10060] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(310), 1,
      sym_comment,
  [10079] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    STATE(311), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym_json_repeat2,
  [10098] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(846), 1,
      ts_builtin_sym_end,
    STATE(281), 1,
      aux_sym_json_repeat2,
    STATE(312), 1,
      sym_comment,
  [10117] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
    STATE(313), 1,
      sym_comment,
    STATE(324), 1,
      aux_sym_json_repeat2,
  [10136] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(314), 1,
      sym_comment,
    ACTIONS(850), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [10151] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_boolean_literal,
    STATE(315), 1,
      sym_comment,
    ACTIONS(852), 2,
      anon_sym_true,
      anon_sym_false,
  [10168] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(854), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(316), 1,
      sym_comment,
  [10187] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(856), 1,
      ts_builtin_sym_end,
    STATE(282), 1,
      aux_sym_json_repeat2,
    STATE(317), 1,
      sym_comment,
  [10206] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(858), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(318), 1,
      sym_comment,
  [10225] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(860), 1,
      ts_builtin_sym_end,
    STATE(283), 1,
      aux_sym_json_repeat2,
    STATE(319), 1,
      sym_comment,
  [10244] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(862), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(320), 1,
      sym_comment,
  [10263] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(809), 1,
      anon_sym_else,
    ACTIONS(864), 1,
      anon_sym_end,
    STATE(291), 1,
      aux_sym_alt_block_repeat1,
    STATE(321), 1,
      sym_comment,
  [10282] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(866), 1,
      ts_builtin_sym_end,
    STATE(284), 1,
      aux_sym_json_repeat2,
    STATE(322), 1,
      sym_comment,
  [10301] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(809), 1,
      anon_sym_else,
    ACTIONS(868), 1,
      anon_sym_end,
    STATE(291), 1,
      aux_sym_alt_block_repeat1,
    STATE(323), 1,
      sym_comment,
  [10320] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(870), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(324), 1,
      sym_comment,
  [10339] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(872), 1,
      ts_builtin_sym_end,
    STATE(285), 1,
      aux_sym_json_repeat2,
    STATE(325), 1,
      sym_comment,
  [10358] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(874), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      aux_sym_json_repeat2,
    STATE(326), 1,
      sym_comment,
  [10377] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(876), 1,
      ts_builtin_sym_end,
    STATE(326), 1,
      aux_sym_json_repeat2,
    STATE(327), 1,
      sym_comment,
  [10396] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(878), 1,
      ts_builtin_sym_end,
    STATE(286), 1,
      aux_sym_json_repeat2,
    STATE(328), 1,
      sym_comment,
  [10415] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(329), 1,
      sym_comment,
    ACTIONS(880), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [10430] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(160), 1,
      sym_boolean_literal,
    STATE(330), 1,
      sym_comment,
    ACTIONS(882), 2,
      anon_sym_true,
      anon_sym_false,
  [10447] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(809), 1,
      anon_sym_else,
    ACTIONS(884), 1,
      anon_sym_end,
    STATE(291), 1,
      aux_sym_alt_block_repeat1,
    STATE(331), 1,
      sym_comment,
  [10466] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(809), 1,
      anon_sym_else,
    ACTIONS(886), 1,
      anon_sym_end,
    STATE(291), 1,
      aux_sym_alt_block_repeat1,
    STATE(332), 1,
      sym_comment,
  [10485] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(333), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [10500] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(809), 1,
      anon_sym_else,
    ACTIONS(888), 1,
      anon_sym_end,
    STATE(291), 1,
      aux_sym_alt_block_repeat1,
    STATE(334), 1,
      sym_comment,
  [10519] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(335), 1,
      sym_comment,
    ACTIONS(890), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [10534] = 6,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(770), 1,
      aux_sym_line_token2,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
    STATE(292), 1,
      aux_sym_json_repeat2,
    STATE(336), 1,
      sym_comment,
  [10553] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(337), 1,
      sym_comment,
    ACTIONS(612), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10567] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(338), 1,
      sym_comment,
    ACTIONS(468), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10581] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(894), 1,
      anon_sym_DASH,
    ACTIONS(896), 1,
      anon_sym_DASH_DASH,
    STATE(339), 1,
      sym_comment,
  [10597] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(340), 1,
      sym_comment,
    ACTIONS(460), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10611] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(341), 1,
      sym_comment,
    ACTIONS(898), 2,
      ts_builtin_sym_end,
      aux_sym_line_token2,
  [10625] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(342), 1,
      sym_comment,
    ACTIONS(900), 2,
      aux_sym_line_token1,
      anon_sym_endnote,
  [10639] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(902), 1,
      anon_sym_DASH,
    ACTIONS(904), 1,
      anon_sym_DASH_DASH,
    STATE(343), 1,
      sym_comment,
  [10655] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(344), 1,
      sym_comment,
    ACTIONS(444), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10669] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(906), 1,
      aux_sym_line_token1,
    STATE(70), 1,
      sym_line,
    STATE(345), 1,
      sym_comment,
  [10685] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(346), 1,
      sym_comment,
    ACTIONS(340), 2,
      aux_sym_line_token1,
      anon_sym_endnote,
  [10699] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(908), 1,
      aux_sym_line_token1,
    STATE(83), 1,
      sym_line,
    STATE(347), 1,
      sym_comment,
  [10715] = 5,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(910), 1,
      aux_sym_line_token1,
    STATE(52), 1,
      sym_line,
    STATE(348), 1,
      sym_comment,
  [10731] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(349), 1,
      sym_comment,
    ACTIONS(912), 2,
      anon_sym_left,
      anon_sym_right,
  [10745] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(914), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(916), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(350), 1,
      sym_comment,
  [10761] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(351), 1,
      sym_comment,
    ACTIONS(594), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10775] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(352), 1,
      sym_comment,
    ACTIONS(436), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10789] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(353), 1,
      sym_comment,
    ACTIONS(918), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10803] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(354), 1,
      sym_comment,
    ACTIONS(920), 2,
      anon_sym_left,
      anon_sym_right,
  [10817] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(922), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(924), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(355), 1,
      sym_comment,
  [10833] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(356), 1,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_left,
      anon_sym_right,
  [10847] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(928), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(930), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(357), 1,
      sym_comment,
  [10863] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(932), 1,
      anon_sym_RBRACK,
    STATE(358), 1,
      sym_comment,
  [10876] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(934), 1,
      aux_sym_sequence_diagram_token1,
    STATE(359), 1,
      sym_comment,
  [10889] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(936), 1,
      aux_sym_sequence_diagram_token1,
    STATE(360), 1,
      sym_comment,
  [10902] = 4,
    ACTIONS(294), 1,
      aux_sym_line_token2,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(361), 1,
      sym_comment,
  [10915] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(938), 1,
      ts_builtin_sym_end,
    STATE(362), 1,
      sym_comment,
  [10928] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(940), 1,
      aux_sym_sequence_diagram_token1,
    STATE(363), 1,
      sym_comment,
  [10941] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(942), 1,
      sym_label,
    STATE(364), 1,
      sym_comment,
  [10954] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(944), 1,
      aux_sym_line_token2,
    STATE(365), 1,
      sym_comment,
  [10967] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(946), 1,
      anon_sym_SLASH,
    STATE(366), 1,
      sym_comment,
  [10980] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(948), 1,
      sym_color,
    STATE(367), 1,
      sym_comment,
  [10993] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(950), 1,
      sym_color,
    STATE(368), 1,
      sym_comment,
  [11006] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(952), 1,
      ts_builtin_sym_end,
    STATE(369), 1,
      sym_comment,
  [11019] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_line_token2,
    STATE(370), 1,
      sym_comment,
  [11032] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    STATE(371), 1,
      sym_comment,
  [11045] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(956), 1,
      aux_sym_line_token2,
    STATE(372), 1,
      sym_comment,
  [11058] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(958), 1,
      sym_label,
    STATE(373), 1,
      sym_comment,
  [11071] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(960), 1,
      aux_sym_escape_char_token1,
    STATE(374), 1,
      sym_comment,
  [11084] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(962), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      sym_comment,
  [11097] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      aux_sym_line_token2,
    STATE(376), 1,
      sym_comment,
  [11110] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(966), 1,
      aux_sym_attribute_token2,
    STATE(377), 1,
      sym_comment,
  [11123] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(968), 1,
      sym_label,
    STATE(378), 1,
      sym_comment,
  [11136] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(970), 1,
      sym_label,
    STATE(379), 1,
      sym_comment,
  [11149] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(972), 1,
      aux_sym_attribute_token2,
    STATE(380), 1,
      sym_comment,
  [11162] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(974), 1,
      aux_sym_line_token2,
    STATE(381), 1,
      sym_comment,
  [11175] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      aux_sym_attribute_token3,
    STATE(382), 1,
      sym_comment,
  [11188] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(978), 1,
      sym_color,
    STATE(383), 1,
      sym_comment,
  [11201] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(980), 1,
      aux_sym_attr_alias_token1,
    STATE(384), 1,
      sym_comment,
  [11214] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(286), 1,
      aux_sym_attribute_token2,
    STATE(385), 1,
      sym_comment,
  [11227] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      sym_comment,
  [11240] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(984), 1,
      aux_sym_custom_label_token1,
    STATE(387), 1,
      sym_comment,
  [11253] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(294), 1,
      aux_sym_attribute_token2,
    STATE(388), 1,
      sym_comment,
  [11266] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(986), 1,
      aux_sym_line_token2,
    STATE(389), 1,
      sym_comment,
  [11279] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(988), 1,
      aux_sym_sequence_diagram_token1,
    STATE(390), 1,
      sym_comment,
  [11292] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(990), 1,
      aux_sym_sequence_diagram_token1,
    STATE(391), 1,
      sym_comment,
  [11305] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(992), 1,
      aux_sym_comment_token2,
    STATE(392), 1,
      sym_comment,
  [11318] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(994), 1,
      aux_sym_comment_token1,
    STATE(393), 1,
      sym_comment,
  [11331] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(996), 1,
      aux_sym_line_token2,
    STATE(394), 1,
      sym_comment,
  [11344] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(998), 1,
      aux_sym_attr_alias_token1,
    STATE(395), 1,
      sym_comment,
  [11357] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1000), 1,
      sym_color,
    STATE(396), 1,
      sym_comment,
  [11370] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1002), 1,
      aux_sym_attr_alias_token1,
    STATE(397), 1,
      sym_comment,
  [11383] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1004), 1,
      aux_sym_attr_alias_token1,
    STATE(398), 1,
      sym_comment,
  [11396] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1006), 1,
      aux_sym_attribute_token2,
    STATE(399), 1,
      sym_comment,
  [11409] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1008), 1,
      aux_sym_attr_alias_token1,
    STATE(400), 1,
      sym_comment,
  [11422] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1010), 1,
      ts_builtin_sym_end,
    STATE(401), 1,
      sym_comment,
  [11435] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1012), 1,
      aux_sym_sequence_diagram_token1,
    STATE(402), 1,
      sym_comment,
  [11448] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1014), 1,
      aux_sym_line_token2,
    STATE(403), 1,
      sym_comment,
  [11461] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1016), 1,
      aux_sym_escape_char_token1,
    STATE(404), 1,
      sym_comment,
  [11474] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(568), 1,
      aux_sym_line_token2,
    STATE(405), 1,
      sym_comment,
  [11487] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1018), 1,
      sym_color,
    STATE(406), 1,
      sym_comment,
  [11500] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1020), 1,
      sym_label,
    STATE(407), 1,
      sym_comment,
  [11513] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1022), 1,
      aux_sym_attribute_token3,
    STATE(408), 1,
      sym_comment,
  [11526] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1024), 1,
      sym_label,
    STATE(409), 1,
      sym_comment,
  [11539] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1026), 1,
      sym_label,
    STATE(410), 1,
      sym_comment,
  [11552] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(580), 1,
      aux_sym_line_token2,
    STATE(411), 1,
      sym_comment,
  [11565] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1028), 1,
      aux_sym_attr_alias_token1,
    STATE(412), 1,
      sym_comment,
  [11578] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1030), 1,
      sym_label,
    STATE(413), 1,
      sym_comment,
  [11591] = 4,
    ACTIONS(286), 1,
      aux_sym_line_token2,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(414), 1,
      sym_comment,
  [11604] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1032), 1,
      sym_label,
    STATE(415), 1,
      sym_comment,
  [11617] = 4,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1034), 1,
      sym_label,
    STATE(416), 1,
      sym_comment,
  [11630] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1036), 1,
      sym_color,
    STATE(417), 1,
      sym_comment,
  [11643] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1038), 1,
      ts_builtin_sym_end,
    STATE(418), 1,
      sym_comment,
  [11656] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1040), 1,
      aux_sym_attribute_token3,
    STATE(419), 1,
      sym_comment,
  [11669] = 1,
    ACTIONS(1042), 1,
      ts_builtin_sym_end,
  [11673] = 1,
    ACTIONS(1044), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 462,
  [SMALL_STATE(9)] = 539,
  [SMALL_STATE(10)] = 616,
  [SMALL_STATE(11)] = 693,
  [SMALL_STATE(12)] = 763,
  [SMALL_STATE(13)] = 835,
  [SMALL_STATE(14)] = 907,
  [SMALL_STATE(15)] = 978,
  [SMALL_STATE(16)] = 1047,
  [SMALL_STATE(17)] = 1118,
  [SMALL_STATE(18)] = 1189,
  [SMALL_STATE(19)] = 1260,
  [SMALL_STATE(20)] = 1331,
  [SMALL_STATE(21)] = 1400,
  [SMALL_STATE(22)] = 1471,
  [SMALL_STATE(23)] = 1542,
  [SMALL_STATE(24)] = 1613,
  [SMALL_STATE(25)] = 1684,
  [SMALL_STATE(26)] = 1755,
  [SMALL_STATE(27)] = 1826,
  [SMALL_STATE(28)] = 1897,
  [SMALL_STATE(29)] = 1968,
  [SMALL_STATE(30)] = 2039,
  [SMALL_STATE(31)] = 2110,
  [SMALL_STATE(32)] = 2181,
  [SMALL_STATE(33)] = 2252,
  [SMALL_STATE(34)] = 2307,
  [SMALL_STATE(35)] = 2361,
  [SMALL_STATE(36)] = 2415,
  [SMALL_STATE(37)] = 2464,
  [SMALL_STATE(38)] = 2513,
  [SMALL_STATE(39)] = 2562,
  [SMALL_STATE(40)] = 2609,
  [SMALL_STATE(41)] = 2657,
  [SMALL_STATE(42)] = 2703,
  [SMALL_STATE(43)] = 2751,
  [SMALL_STATE(44)] = 2799,
  [SMALL_STATE(45)] = 2847,
  [SMALL_STATE(46)] = 2895,
  [SMALL_STATE(47)] = 2941,
  [SMALL_STATE(48)] = 2989,
  [SMALL_STATE(49)] = 3026,
  [SMALL_STATE(50)] = 3063,
  [SMALL_STATE(51)] = 3100,
  [SMALL_STATE(52)] = 3136,
  [SMALL_STATE(53)] = 3176,
  [SMALL_STATE(54)] = 3212,
  [SMALL_STATE(55)] = 3254,
  [SMALL_STATE(56)] = 3290,
  [SMALL_STATE(57)] = 3326,
  [SMALL_STATE(58)] = 3362,
  [SMALL_STATE(59)] = 3398,
  [SMALL_STATE(60)] = 3434,
  [SMALL_STATE(61)] = 3470,
  [SMALL_STATE(62)] = 3506,
  [SMALL_STATE(63)] = 3542,
  [SMALL_STATE(64)] = 3578,
  [SMALL_STATE(65)] = 3614,
  [SMALL_STATE(66)] = 3649,
  [SMALL_STATE(67)] = 3684,
  [SMALL_STATE(68)] = 3719,
  [SMALL_STATE(69)] = 3754,
  [SMALL_STATE(70)] = 3789,
  [SMALL_STATE(71)] = 3828,
  [SMALL_STATE(72)] = 3863,
  [SMALL_STATE(73)] = 3904,
  [SMALL_STATE(74)] = 3945,
  [SMALL_STATE(75)] = 3980,
  [SMALL_STATE(76)] = 4015,
  [SMALL_STATE(77)] = 4050,
  [SMALL_STATE(78)] = 4085,
  [SMALL_STATE(79)] = 4120,
  [SMALL_STATE(80)] = 4155,
  [SMALL_STATE(81)] = 4190,
  [SMALL_STATE(82)] = 4225,
  [SMALL_STATE(83)] = 4260,
  [SMALL_STATE(84)] = 4299,
  [SMALL_STATE(85)] = 4331,
  [SMALL_STATE(86)] = 4365,
  [SMALL_STATE(87)] = 4401,
  [SMALL_STATE(88)] = 4435,
  [SMALL_STATE(89)] = 4469,
  [SMALL_STATE(90)] = 4503,
  [SMALL_STATE(91)] = 4537,
  [SMALL_STATE(92)] = 4571,
  [SMALL_STATE(93)] = 4605,
  [SMALL_STATE(94)] = 4638,
  [SMALL_STATE(95)] = 4671,
  [SMALL_STATE(96)] = 4704,
  [SMALL_STATE(97)] = 4737,
  [SMALL_STATE(98)] = 4772,
  [SMALL_STATE(99)] = 4805,
  [SMALL_STATE(100)] = 4838,
  [SMALL_STATE(101)] = 4869,
  [SMALL_STATE(102)] = 4902,
  [SMALL_STATE(103)] = 4933,
  [SMALL_STATE(104)] = 4966,
  [SMALL_STATE(105)] = 4999,
  [SMALL_STATE(106)] = 5032,
  [SMALL_STATE(107)] = 5065,
  [SMALL_STATE(108)] = 5098,
  [SMALL_STATE(109)] = 5133,
  [SMALL_STATE(110)] = 5166,
  [SMALL_STATE(111)] = 5199,
  [SMALL_STATE(112)] = 5232,
  [SMALL_STATE(113)] = 5265,
  [SMALL_STATE(114)] = 5298,
  [SMALL_STATE(115)] = 5331,
  [SMALL_STATE(116)] = 5364,
  [SMALL_STATE(117)] = 5397,
  [SMALL_STATE(118)] = 5430,
  [SMALL_STATE(119)] = 5463,
  [SMALL_STATE(120)] = 5496,
  [SMALL_STATE(121)] = 5529,
  [SMALL_STATE(122)] = 5561,
  [SMALL_STATE(123)] = 5593,
  [SMALL_STATE(124)] = 5625,
  [SMALL_STATE(125)] = 5657,
  [SMALL_STATE(126)] = 5689,
  [SMALL_STATE(127)] = 5721,
  [SMALL_STATE(128)] = 5753,
  [SMALL_STATE(129)] = 5785,
  [SMALL_STATE(130)] = 5817,
  [SMALL_STATE(131)] = 5849,
  [SMALL_STATE(132)] = 5881,
  [SMALL_STATE(133)] = 5913,
  [SMALL_STATE(134)] = 5945,
  [SMALL_STATE(135)] = 5977,
  [SMALL_STATE(136)] = 6009,
  [SMALL_STATE(137)] = 6041,
  [SMALL_STATE(138)] = 6073,
  [SMALL_STATE(139)] = 6105,
  [SMALL_STATE(140)] = 6137,
  [SMALL_STATE(141)] = 6169,
  [SMALL_STATE(142)] = 6201,
  [SMALL_STATE(143)] = 6233,
  [SMALL_STATE(144)] = 6265,
  [SMALL_STATE(145)] = 6297,
  [SMALL_STATE(146)] = 6329,
  [SMALL_STATE(147)] = 6361,
  [SMALL_STATE(148)] = 6393,
  [SMALL_STATE(149)] = 6425,
  [SMALL_STATE(150)] = 6457,
  [SMALL_STATE(151)] = 6489,
  [SMALL_STATE(152)] = 6521,
  [SMALL_STATE(153)] = 6553,
  [SMALL_STATE(154)] = 6585,
  [SMALL_STATE(155)] = 6617,
  [SMALL_STATE(156)] = 6649,
  [SMALL_STATE(157)] = 6681,
  [SMALL_STATE(158)] = 6713,
  [SMALL_STATE(159)] = 6745,
  [SMALL_STATE(160)] = 6777,
  [SMALL_STATE(161)] = 6809,
  [SMALL_STATE(162)] = 6841,
  [SMALL_STATE(163)] = 6873,
  [SMALL_STATE(164)] = 6905,
  [SMALL_STATE(165)] = 6937,
  [SMALL_STATE(166)] = 6969,
  [SMALL_STATE(167)] = 7005,
  [SMALL_STATE(168)] = 7041,
  [SMALL_STATE(169)] = 7077,
  [SMALL_STATE(170)] = 7102,
  [SMALL_STATE(171)] = 7127,
  [SMALL_STATE(172)] = 7152,
  [SMALL_STATE(173)] = 7179,
  [SMALL_STATE(174)] = 7206,
  [SMALL_STATE(175)] = 7233,
  [SMALL_STATE(176)] = 7260,
  [SMALL_STATE(177)] = 7284,
  [SMALL_STATE(178)] = 7308,
  [SMALL_STATE(179)] = 7332,
  [SMALL_STATE(180)] = 7356,
  [SMALL_STATE(181)] = 7385,
  [SMALL_STATE(182)] = 7408,
  [SMALL_STATE(183)] = 7437,
  [SMALL_STATE(184)] = 7466,
  [SMALL_STATE(185)] = 7489,
  [SMALL_STATE(186)] = 7515,
  [SMALL_STATE(187)] = 7541,
  [SMALL_STATE(188)] = 7561,
  [SMALL_STATE(189)] = 7587,
  [SMALL_STATE(190)] = 7607,
  [SMALL_STATE(191)] = 7627,
  [SMALL_STATE(192)] = 7653,
  [SMALL_STATE(193)] = 7677,
  [SMALL_STATE(194)] = 7703,
  [SMALL_STATE(195)] = 7729,
  [SMALL_STATE(196)] = 7755,
  [SMALL_STATE(197)] = 7781,
  [SMALL_STATE(198)] = 7807,
  [SMALL_STATE(199)] = 7833,
  [SMALL_STATE(200)] = 7859,
  [SMALL_STATE(201)] = 7885,
  [SMALL_STATE(202)] = 7911,
  [SMALL_STATE(203)] = 7937,
  [SMALL_STATE(204)] = 7963,
  [SMALL_STATE(205)] = 7989,
  [SMALL_STATE(206)] = 8015,
  [SMALL_STATE(207)] = 8041,
  [SMALL_STATE(208)] = 8062,
  [SMALL_STATE(209)] = 8083,
  [SMALL_STATE(210)] = 8108,
  [SMALL_STATE(211)] = 8133,
  [SMALL_STATE(212)] = 8154,
  [SMALL_STATE(213)] = 8179,
  [SMALL_STATE(214)] = 8200,
  [SMALL_STATE(215)] = 8225,
  [SMALL_STATE(216)] = 8246,
  [SMALL_STATE(217)] = 8271,
  [SMALL_STATE(218)] = 8296,
  [SMALL_STATE(219)] = 8321,
  [SMALL_STATE(220)] = 8342,
  [SMALL_STATE(221)] = 8367,
  [SMALL_STATE(222)] = 8392,
  [SMALL_STATE(223)] = 8415,
  [SMALL_STATE(224)] = 8436,
  [SMALL_STATE(225)] = 8454,
  [SMALL_STATE(226)] = 8472,
  [SMALL_STATE(227)] = 8492,
  [SMALL_STATE(228)] = 8510,
  [SMALL_STATE(229)] = 8530,
  [SMALL_STATE(230)] = 8548,
  [SMALL_STATE(231)] = 8566,
  [SMALL_STATE(232)] = 8586,
  [SMALL_STATE(233)] = 8608,
  [SMALL_STATE(234)] = 8624,
  [SMALL_STATE(235)] = 8644,
  [SMALL_STATE(236)] = 8666,
  [SMALL_STATE(237)] = 8686,
  [SMALL_STATE(238)] = 8706,
  [SMALL_STATE(239)] = 8728,
  [SMALL_STATE(240)] = 8748,
  [SMALL_STATE(241)] = 8768,
  [SMALL_STATE(242)] = 8790,
  [SMALL_STATE(243)] = 8810,
  [SMALL_STATE(244)] = 8830,
  [SMALL_STATE(245)] = 8850,
  [SMALL_STATE(246)] = 8870,
  [SMALL_STATE(247)] = 8890,
  [SMALL_STATE(248)] = 8912,
  [SMALL_STATE(249)] = 8932,
  [SMALL_STATE(250)] = 8950,
  [SMALL_STATE(251)] = 8972,
  [SMALL_STATE(252)] = 8992,
  [SMALL_STATE(253)] = 9012,
  [SMALL_STATE(254)] = 9032,
  [SMALL_STATE(255)] = 9052,
  [SMALL_STATE(256)] = 9074,
  [SMALL_STATE(257)] = 9096,
  [SMALL_STATE(258)] = 9112,
  [SMALL_STATE(259)] = 9134,
  [SMALL_STATE(260)] = 9152,
  [SMALL_STATE(261)] = 9170,
  [SMALL_STATE(262)] = 9190,
  [SMALL_STATE(263)] = 9212,
  [SMALL_STATE(264)] = 9230,
  [SMALL_STATE(265)] = 9248,
  [SMALL_STATE(266)] = 9270,
  [SMALL_STATE(267)] = 9290,
  [SMALL_STATE(268)] = 9310,
  [SMALL_STATE(269)] = 9330,
  [SMALL_STATE(270)] = 9352,
  [SMALL_STATE(271)] = 9371,
  [SMALL_STATE(272)] = 9388,
  [SMALL_STATE(273)] = 9403,
  [SMALL_STATE(274)] = 9418,
  [SMALL_STATE(275)] = 9435,
  [SMALL_STATE(276)] = 9454,
  [SMALL_STATE(277)] = 9471,
  [SMALL_STATE(278)] = 9490,
  [SMALL_STATE(279)] = 9509,
  [SMALL_STATE(280)] = 9528,
  [SMALL_STATE(281)] = 9547,
  [SMALL_STATE(282)] = 9566,
  [SMALL_STATE(283)] = 9585,
  [SMALL_STATE(284)] = 9604,
  [SMALL_STATE(285)] = 9623,
  [SMALL_STATE(286)] = 9642,
  [SMALL_STATE(287)] = 9661,
  [SMALL_STATE(288)] = 9676,
  [SMALL_STATE(289)] = 9695,
  [SMALL_STATE(290)] = 9714,
  [SMALL_STATE(291)] = 9729,
  [SMALL_STATE(292)] = 9746,
  [SMALL_STATE(293)] = 9765,
  [SMALL_STATE(294)] = 9780,
  [SMALL_STATE(295)] = 9799,
  [SMALL_STATE(296)] = 9818,
  [SMALL_STATE(297)] = 9833,
  [SMALL_STATE(298)] = 9852,
  [SMALL_STATE(299)] = 9871,
  [SMALL_STATE(300)] = 9890,
  [SMALL_STATE(301)] = 9905,
  [SMALL_STATE(302)] = 9924,
  [SMALL_STATE(303)] = 9943,
  [SMALL_STATE(304)] = 9958,
  [SMALL_STATE(305)] = 9973,
  [SMALL_STATE(306)] = 9988,
  [SMALL_STATE(307)] = 10007,
  [SMALL_STATE(308)] = 10022,
  [SMALL_STATE(309)] = 10041,
  [SMALL_STATE(310)] = 10060,
  [SMALL_STATE(311)] = 10079,
  [SMALL_STATE(312)] = 10098,
  [SMALL_STATE(313)] = 10117,
  [SMALL_STATE(314)] = 10136,
  [SMALL_STATE(315)] = 10151,
  [SMALL_STATE(316)] = 10168,
  [SMALL_STATE(317)] = 10187,
  [SMALL_STATE(318)] = 10206,
  [SMALL_STATE(319)] = 10225,
  [SMALL_STATE(320)] = 10244,
  [SMALL_STATE(321)] = 10263,
  [SMALL_STATE(322)] = 10282,
  [SMALL_STATE(323)] = 10301,
  [SMALL_STATE(324)] = 10320,
  [SMALL_STATE(325)] = 10339,
  [SMALL_STATE(326)] = 10358,
  [SMALL_STATE(327)] = 10377,
  [SMALL_STATE(328)] = 10396,
  [SMALL_STATE(329)] = 10415,
  [SMALL_STATE(330)] = 10430,
  [SMALL_STATE(331)] = 10447,
  [SMALL_STATE(332)] = 10466,
  [SMALL_STATE(333)] = 10485,
  [SMALL_STATE(334)] = 10500,
  [SMALL_STATE(335)] = 10519,
  [SMALL_STATE(336)] = 10534,
  [SMALL_STATE(337)] = 10553,
  [SMALL_STATE(338)] = 10567,
  [SMALL_STATE(339)] = 10581,
  [SMALL_STATE(340)] = 10597,
  [SMALL_STATE(341)] = 10611,
  [SMALL_STATE(342)] = 10625,
  [SMALL_STATE(343)] = 10639,
  [SMALL_STATE(344)] = 10655,
  [SMALL_STATE(345)] = 10669,
  [SMALL_STATE(346)] = 10685,
  [SMALL_STATE(347)] = 10699,
  [SMALL_STATE(348)] = 10715,
  [SMALL_STATE(349)] = 10731,
  [SMALL_STATE(350)] = 10745,
  [SMALL_STATE(351)] = 10761,
  [SMALL_STATE(352)] = 10775,
  [SMALL_STATE(353)] = 10789,
  [SMALL_STATE(354)] = 10803,
  [SMALL_STATE(355)] = 10817,
  [SMALL_STATE(356)] = 10833,
  [SMALL_STATE(357)] = 10847,
  [SMALL_STATE(358)] = 10863,
  [SMALL_STATE(359)] = 10876,
  [SMALL_STATE(360)] = 10889,
  [SMALL_STATE(361)] = 10902,
  [SMALL_STATE(362)] = 10915,
  [SMALL_STATE(363)] = 10928,
  [SMALL_STATE(364)] = 10941,
  [SMALL_STATE(365)] = 10954,
  [SMALL_STATE(366)] = 10967,
  [SMALL_STATE(367)] = 10980,
  [SMALL_STATE(368)] = 10993,
  [SMALL_STATE(369)] = 11006,
  [SMALL_STATE(370)] = 11019,
  [SMALL_STATE(371)] = 11032,
  [SMALL_STATE(372)] = 11045,
  [SMALL_STATE(373)] = 11058,
  [SMALL_STATE(374)] = 11071,
  [SMALL_STATE(375)] = 11084,
  [SMALL_STATE(376)] = 11097,
  [SMALL_STATE(377)] = 11110,
  [SMALL_STATE(378)] = 11123,
  [SMALL_STATE(379)] = 11136,
  [SMALL_STATE(380)] = 11149,
  [SMALL_STATE(381)] = 11162,
  [SMALL_STATE(382)] = 11175,
  [SMALL_STATE(383)] = 11188,
  [SMALL_STATE(384)] = 11201,
  [SMALL_STATE(385)] = 11214,
  [SMALL_STATE(386)] = 11227,
  [SMALL_STATE(387)] = 11240,
  [SMALL_STATE(388)] = 11253,
  [SMALL_STATE(389)] = 11266,
  [SMALL_STATE(390)] = 11279,
  [SMALL_STATE(391)] = 11292,
  [SMALL_STATE(392)] = 11305,
  [SMALL_STATE(393)] = 11318,
  [SMALL_STATE(394)] = 11331,
  [SMALL_STATE(395)] = 11344,
  [SMALL_STATE(396)] = 11357,
  [SMALL_STATE(397)] = 11370,
  [SMALL_STATE(398)] = 11383,
  [SMALL_STATE(399)] = 11396,
  [SMALL_STATE(400)] = 11409,
  [SMALL_STATE(401)] = 11422,
  [SMALL_STATE(402)] = 11435,
  [SMALL_STATE(403)] = 11448,
  [SMALL_STATE(404)] = 11461,
  [SMALL_STATE(405)] = 11474,
  [SMALL_STATE(406)] = 11487,
  [SMALL_STATE(407)] = 11500,
  [SMALL_STATE(408)] = 11513,
  [SMALL_STATE(409)] = 11526,
  [SMALL_STATE(410)] = 11539,
  [SMALL_STATE(411)] = 11552,
  [SMALL_STATE(412)] = 11565,
  [SMALL_STATE(413)] = 11578,
  [SMALL_STATE(414)] = 11591,
  [SMALL_STATE(415)] = 11604,
  [SMALL_STATE(416)] = 11617,
  [SMALL_STATE(417)] = 11630,
  [SMALL_STATE(418)] = 11643,
  [SMALL_STATE(419)] = 11656,
  [SMALL_STATE(420)] = 11669,
  [SMALL_STATE(421)] = 11673,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(396),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(384),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(408),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(406),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(412),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(382),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(383),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(395),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(419),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 14),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 14),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 11),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 11),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 5, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 5, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 5, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 5, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_label, 3, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_label, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 2, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(341),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 1, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1010] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
