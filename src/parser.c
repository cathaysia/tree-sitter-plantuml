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
#define STATE_COUNT 443
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 14
#define TOKEN_COUNT 95
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
  anon_sym_leftover = 12,
  anon_sym_rightover = 13,
  anon_sym_over = 14,
  anon_sym_POUND = 15,
  anon_sym_COLON = 16,
  anon_sym_endnote = 17,
  anon_sym_loop = 18,
  anon_sym_LBRACK = 19,
  aux_sym_custom_label_token1 = 20,
  anon_sym_RBRACK = 21,
  anon_sym_group = 22,
  anon_sym_skinparam = 23,
  anon_sym_sequenceMessageAlign = 24,
  anon_sym_center = 25,
  anon_sym_responseMessageBelowArrow = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  anon_sym_autonumber = 29,
  anon_sym_inc = 30,
  anon_sym_resume = 31,
  aux_sym_attribute_token1 = 32,
  aux_sym_attribute_token2 = 33,
  aux_sym_attribute_token3 = 34,
  anon_sym_autonumberstop = 35,
  anon_sym_participant = 36,
  anon_sym_actor = 37,
  anon_sym_boundary = 38,
  anon_sym_control = 39,
  anon_sym_entity = 40,
  anon_sym_database = 41,
  anon_sym_collections = 42,
  anon_sym_queue = 43,
  aux_sym_multiline_token1 = 44,
  anon_sym_as = 45,
  aux_sym_attr_alias_token1 = 46,
  anon_sym_order = 47,
  anon_sym_DQUOTE = 48,
  aux_sym_string_token1 = 49,
  anon_sym_BSLASH_DQUOTE = 50,
  anon_sym_BSLASH = 51,
  aux_sym_escape_char_token1 = 52,
  aux_sym_sequence_diagram_token1 = 53,
  anon_sym_DASH = 54,
  anon_sym_GT = 55,
  anon_sym_o = 56,
  anon_sym_x = 57,
  anon_sym_ox = 58,
  anon_sym_GT_GT = 59,
  anon_sym_BSLASH_BSLASH = 60,
  anon_sym_SLASH = 61,
  anon_sym_SLASH_SLASH = 62,
  anon_sym_DASH_DASH = 63,
  anon_sym_LBRACK_POUND = 64,
  anon_sym_LT = 65,
  anon_sym_xo = 66,
  anon_sym_LT_LT = 67,
  anon_sym_ATstartjson = 68,
  anon_sym_AT = 69,
  aux_sym_json_token1 = 70,
  anon_sym_ATendjson = 71,
  anon_sym_ATstartyaml = 72,
  anon_sym_ATendyaml = 73,
  anon_sym_ATstartebnf = 74,
  anon_sym_ATendebnf = 75,
  anon_sym_ATstartregex = 76,
  anon_sym_ATendregex = 77,
  anon_sym_ATstartditaa = 78,
  anon_sym_ATendditaa = 79,
  anon_sym_ATstartgantt = 80,
  anon_sym_ATendgantt = 81,
  anon_sym_ATstartchronology = 82,
  anon_sym_ATendchronology = 83,
  anon_sym_ATstartmindmap = 84,
  anon_sym_ATendmindmap = 85,
  anon_sym_ATstartwbs = 86,
  anon_sym_ATendwbs = 87,
  anon_sym_ATstartchen = 88,
  anon_sym_ATendchen = 89,
  anon_sym_SQUOTE = 90,
  aux_sym_comment_token1 = 91,
  anon_sym_SLASH_SQUOTE = 92,
  aux_sym_comment_token2 = 93,
  sym_color = 94,
  sym_diagram = 95,
  sym_uml = 96,
  sym_expression = 97,
  sym_alt_block = 98,
  sym_line = 99,
  sym_note_block = 100,
  sym_loop_block = 101,
  sym_custom_label = 102,
  sym_group_block = 103,
  sym_skinparam = 104,
  sym_boolean_literal = 105,
  sym_attribute = 106,
  sym_multiline = 107,
  sym_attr_alias = 108,
  sym_attr_order = 109,
  sym_string = 110,
  sym_escape_char = 111,
  sym_participant_name = 112,
  sym_sequence_diagram = 113,
  sym_connector = 114,
  sym_json = 115,
  sym_yaml = 116,
  sym_ebnf = 117,
  sym_regex = 118,
  sym_ditaa = 119,
  sym_gantt = 120,
  sym_chronology = 121,
  sym_mindmap = 122,
  sym_wbs = 123,
  sym_chen = 124,
  sym_comment = 125,
  aux_sym_uml_repeat1 = 126,
  aux_sym_alt_block_repeat1 = 127,
  aux_sym_note_block_repeat1 = 128,
  aux_sym_attribute_repeat1 = 129,
  aux_sym_attribute_repeat2 = 130,
  aux_sym_multiline_repeat1 = 131,
  aux_sym_string_repeat1 = 132,
  aux_sym_json_repeat1 = 133,
  aux_sym_json_repeat2 = 134,
  alias_sym_chen_data = 135,
  alias_sym_chronology_data = 136,
  alias_sym_ditaa_data = 137,
  alias_sym_ebnf_data = 138,
  alias_sym_gantt_data = 139,
  alias_sym_json_data = 140,
  alias_sym_left = 141,
  alias_sym_mindmap_data = 142,
  alias_sym_new_name = 143,
  alias_sym_regex_data = 144,
  alias_sym_right = 145,
  alias_sym_value = 146,
  alias_sym_wbs_data = 147,
  alias_sym_yaml_data = 148,
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
  [anon_sym_leftover] = "left over",
  [anon_sym_rightover] = "right over",
  [anon_sym_over] = "over",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ":",
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
  [aux_sym_multiline_token1] = "multiline_token1",
  [anon_sym_as] = "as",
  [aux_sym_attr_alias_token1] = "attr_alias_token1",
  [anon_sym_order] = "order",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_char_token1] = "escape_char_token1",
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
  [anon_sym_leftover] = anon_sym_leftover,
  [anon_sym_rightover] = anon_sym_rightover,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [aux_sym_multiline_token1] = aux_sym_multiline_token1,
  [anon_sym_as] = anon_sym_as,
  [aux_sym_attr_alias_token1] = aux_sym_attr_alias_token1,
  [anon_sym_order] = anon_sym_order,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_char_token1] = aux_sym_escape_char_token1,
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
  [anon_sym_leftover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rightover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [4] = 3,
  [5] = 3,
  [6] = 6,
  [7] = 2,
  [8] = 6,
  [9] = 2,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 17,
  [24] = 20,
  [25] = 22,
  [26] = 15,
  [27] = 27,
  [28] = 18,
  [29] = 17,
  [30] = 15,
  [31] = 22,
  [32] = 20,
  [33] = 33,
  [34] = 33,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 38,
  [42] = 38,
  [43] = 37,
  [44] = 39,
  [45] = 36,
  [46] = 36,
  [47] = 39,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 48,
  [53] = 50,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 49,
  [60] = 48,
  [61] = 61,
  [62] = 50,
  [63] = 49,
  [64] = 55,
  [65] = 54,
  [66] = 61,
  [67] = 57,
  [68] = 58,
  [69] = 56,
  [70] = 54,
  [71] = 55,
  [72] = 51,
  [73] = 56,
  [74] = 57,
  [75] = 58,
  [76] = 61,
  [77] = 51,
  [78] = 50,
  [79] = 49,
  [80] = 48,
  [81] = 48,
  [82] = 48,
  [83] = 83,
  [84] = 50,
  [85] = 49,
  [86] = 61,
  [87] = 50,
  [88] = 49,
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
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 83,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 61,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 83,
  [116] = 116,
  [117] = 117,
  [118] = 61,
  [119] = 104,
  [120] = 103,
  [121] = 114,
  [122] = 105,
  [123] = 95,
  [124] = 111,
  [125] = 95,
  [126] = 100,
  [127] = 105,
  [128] = 113,
  [129] = 98,
  [130] = 112,
  [131] = 113,
  [132] = 98,
  [133] = 89,
  [134] = 99,
  [135] = 90,
  [136] = 93,
  [137] = 94,
  [138] = 96,
  [139] = 89,
  [140] = 101,
  [141] = 109,
  [142] = 103,
  [143] = 104,
  [144] = 107,
  [145] = 109,
  [146] = 114,
  [147] = 92,
  [148] = 106,
  [149] = 149,
  [150] = 111,
  [151] = 108,
  [152] = 92,
  [153] = 106,
  [154] = 108,
  [155] = 116,
  [156] = 117,
  [157] = 91,
  [158] = 99,
  [159] = 97,
  [160] = 97,
  [161] = 90,
  [162] = 93,
  [163] = 116,
  [164] = 117,
  [165] = 100,
  [166] = 91,
  [167] = 94,
  [168] = 96,
  [169] = 112,
  [170] = 101,
  [171] = 107,
  [172] = 172,
  [173] = 172,
  [174] = 172,
  [175] = 49,
  [176] = 48,
  [177] = 50,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 186,
  [190] = 186,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 192,
  [195] = 193,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 193,
  [201] = 192,
  [202] = 191,
  [203] = 192,
  [204] = 191,
  [205] = 192,
  [206] = 191,
  [207] = 192,
  [208] = 191,
  [209] = 192,
  [210] = 191,
  [211] = 192,
  [212] = 191,
  [213] = 192,
  [214] = 191,
  [215] = 191,
  [216] = 216,
  [217] = 217,
  [218] = 217,
  [219] = 219,
  [220] = 217,
  [221] = 221,
  [222] = 222,
  [223] = 219,
  [224] = 222,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 222,
  [229] = 229,
  [230] = 230,
  [231] = 227,
  [232] = 227,
  [233] = 233,
  [234] = 219,
  [235] = 221,
  [236] = 236,
  [237] = 221,
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
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 251,
  [261] = 251,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 251,
  [266] = 251,
  [267] = 251,
  [268] = 251,
  [269] = 269,
  [270] = 270,
  [271] = 259,
  [272] = 270,
  [273] = 273,
  [274] = 251,
  [275] = 264,
  [276] = 269,
  [277] = 259,
  [278] = 270,
  [279] = 273,
  [280] = 264,
  [281] = 251,
  [282] = 282,
  [283] = 269,
  [284] = 273,
  [285] = 285,
  [286] = 286,
  [287] = 251,
  [288] = 248,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 292,
  [295] = 292,
  [296] = 296,
  [297] = 297,
  [298] = 292,
  [299] = 299,
  [300] = 300,
  [301] = 292,
  [302] = 302,
  [303] = 292,
  [304] = 304,
  [305] = 292,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 289,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 309,
  [320] = 320,
  [321] = 321,
  [322] = 292,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 309,
  [329] = 289,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 315,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 292,
  [338] = 338,
  [339] = 324,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 292,
  [350] = 315,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 324,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 359,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 97,
  [365] = 359,
  [366] = 366,
  [367] = 367,
  [368] = 367,
  [369] = 369,
  [370] = 367,
  [371] = 371,
  [372] = 361,
  [373] = 373,
  [374] = 361,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 386,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 394,
  [398] = 395,
  [399] = 399,
  [400] = 379,
  [401] = 401,
  [402] = 401,
  [403] = 403,
  [404] = 392,
  [405] = 405,
  [406] = 49,
  [407] = 389,
  [408] = 403,
  [409] = 409,
  [410] = 387,
  [411] = 411,
  [412] = 395,
  [413] = 392,
  [414] = 401,
  [415] = 399,
  [416] = 379,
  [417] = 401,
  [418] = 386,
  [419] = 419,
  [420] = 401,
  [421] = 401,
  [422] = 403,
  [423] = 399,
  [424] = 392,
  [425] = 425,
  [426] = 49,
  [427] = 390,
  [428] = 428,
  [429] = 425,
  [430] = 428,
  [431] = 389,
  [432] = 376,
  [433] = 390,
  [434] = 48,
  [435] = 425,
  [436] = 428,
  [437] = 48,
  [438] = 387,
  [439] = 376,
  [440] = 440,
  [441] = 441,
  [442] = 442,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        '"', 835,
        '#', 707,
        '\'', 911,
        '-', 851,
        '/', 861,
        ':', 709,
        '<', 865,
        '>', 852,
        '@', 869,
        '[', 713,
        '\\', 842,
        ']', 717,
        'o', 853,
        'x', 855,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(729);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(698);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(919);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(912);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(918);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(921);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(846);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0) ADVANCE(844);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 835,
        '#', 707,
        '\'', 911,
        '/', 35,
        '@', 115,
        '[', 713,
        'a', 755,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 788,
        'g', 811,
        'l', 798,
        'n', 796,
        'o', 806,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 835,
        '#', 707,
        '\'', 911,
        '/', 35,
        '[', 713,
        'a', 755,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 776,
        'g', 811,
        'l', 798,
        'n', 796,
        'o', 806,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 835,
        '#', 707,
        '\'', 911,
        '/', 35,
        '[', 713,
        'a', 755,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 782,
        'g', 811,
        'l', 798,
        'n', 796,
        'o', 806,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 835,
        '\'', 911,
        '-', 850,
        '/', 861,
        ':', 709,
        '<', 865,
        '>', 852,
        '@', 233,
        '[', 20,
        '\\', 843,
        'a', 756,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 776,
        'g', 811,
        'l', 798,
        'n', 796,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '-') ADVANCE(850);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == '>') ADVANCE(852);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(843);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 835,
        '\'', 911,
        '/', 35,
        ':', 709,
        '@', 115,
        'a', 756,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 788,
        'g', 811,
        'l', 798,
        'n', 796,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 835,
        '\'', 911,
        '/', 35,
        ':', 709,
        '@', 115,
        'a', 755,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 788,
        'g', 811,
        'l', 798,
        'n', 796,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 835,
        '\'', 911,
        '/', 35,
        ':', 709,
        '[', 713,
        'a', 756,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 782,
        'g', 811,
        'l', 798,
        'n', 796,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 835,
        '\'', 911,
        '/', 35,
        ':', 709,
        'a', 755,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 776,
        'g', 811,
        'l', 798,
        'n', 796,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 835,
        '\'', 911,
        '/', 35,
        ':', 709,
        'a', 755,
        'b', 791,
        'c', 790,
        'd', 748,
        'e', 782,
        'g', 811,
        'l', 798,
        'n', 796,
        'p', 746,
        'q', 826,
        's', 775,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == 'x') ADVANCE(857);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(729);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(838);
      if (lookahead == '\\') ADVANCE(841);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(837);
      if (lookahead != 0) ADVANCE(836);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(864);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\'', 911,
        '-', 851,
        '/', 861,
        '<', 865,
        '\\', 843,
        'c', 111,
        'e', 153,
        'f', 57,
        'l', 101,
        'o', 853,
        'r', 106,
        's', 92,
        't', 217,
        'x', 856,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 911,
        '/', 35,
        'L', 266,
        'O', 470,
        'R', 361,
        'l', 46,
        'o', 255,
        'r', 142,
        'A', 473,
        'a', 473,
        'B', 362,
        'b', 362,
        'C', 267,
        'c', 267,
        'D', 268,
        'd', 268,
        'F', 443,
        'f', 443,
        'G', 285,
        'g', 285,
        'H', 532,
        'h', 532,
        'I', 512,
        'i', 512,
        'K', 427,
        'k', 427,
        'M', 269,
        'm', 269,
        'N', 270,
        'n', 270,
        'P', 271,
        'p', 271,
        'S', 272,
        's', 272,
        'T', 279,
        't', 279,
        'V', 447,
        'v', 447,
        'W', 425,
        'w', 425,
        'Y', 373,
        'y', 373,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(729);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(743);
      if (lookahead == '\\') ADVANCE(840);
      if (lookahead == ']') ADVANCE(717);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(742);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(870);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(881);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(871);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(882);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(872);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(883);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(873);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(884);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(874);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(885);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(875);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(876);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(877);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(878);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(879);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(890);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(920);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(915);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(849);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(914);
      if (lookahead == '/') ADVANCE(678);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (lookahead != 0) ADVANCE(679);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(922);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(219);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(109);
      END_STATE();
    case 48:
      if (lookahead == 'M') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(900);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(899);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        'c', 133,
        'd', 139,
        'e', 63,
        'g', 55,
        'j', 222,
        'm', 141,
        'r', 90,
        'w', 64,
        'y', 49,
      );
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 71:
      ADVANCE_MAP(
        'c', 138,
        'd', 143,
        'e', 66,
        'g', 59,
        'j', 234,
        'm', 144,
        'r', 114,
        'u', 158,
        'w', 65,
        'y', 61,
      );
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(683);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(896);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(895);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(240);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 145:
      if (lookahead == 'j') ADVANCE(222);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(894);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(677);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(910);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(909);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(906);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(905);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(732);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 211:
      if (lookahead == 'q') ADVANCE(253);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(908);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(907);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 255:
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 256:
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 257:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 258:
      if (lookahead == 'w') ADVANCE(722);
      END_STATE();
    case 259:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 260:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 261:
      if (lookahead == 'x') ADVANCE(898);
      END_STATE();
    case 262:
      if (lookahead == 'x') ADVANCE(897);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(904);
      END_STATE();
    case 264:
      if (lookahead == 'y') ADVANCE(903);
      END_STATE();
    case 265:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 266:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 267:
      ADVANCE_MAP(
        'A', 344,
        'a', 344,
        'H', 294,
        'h', 294,
        'O', 572,
        'o', 572,
        'R', 446,
        'r', 446,
        'Y', 278,
        'y', 278,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 268:
      ADVANCE_MAP(
        'A', 573,
        'a', 573,
        'E', 364,
        'e', 364,
        'I', 501,
        'i', 501,
        'O', 356,
        'o', 356,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 269:
      ADVANCE_MAP(
        'A', 422,
        'a', 422,
        'E', 350,
        'e', 350,
        'I', 348,
        'i', 348,
        'O', 332,
        'o', 332,
      );
      END_STATE();
    case 270:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 271:
      ADVANCE_MAP(
        'A', 483,
        'a', 483,
        'E', 305,
        'e', 305,
        'I', 513,
        'i', 513,
        'L', 636,
        'l', 636,
        'O', 655,
        'o', 655,
        'U', 579,
        'u', 579,
      );
      END_STATE();
    case 272:
      ADVANCE_MAP(
        'A', 347,
        'a', 347,
        'E', 275,
        'e', 275,
        'I', 383,
        'i', 383,
        'K', 661,
        'k', 661,
        'L', 286,
        'l', 286,
        'N', 537,
        'n', 537,
        'P', 597,
        'p', 597,
        'T', 399,
        't', 399,
      );
      END_STATE();
    case 273:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(928);
      END_STATE();
    case 274:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 275:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 276:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(935);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(928);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 279:
      ADVANCE_MAP(
        'A', 509,
        'a', 509,
        'E', 290,
        'e', 290,
        'H', 458,
        'h', 458,
        'O', 505,
        'o', 505,
        'R', 297,
        'r', 297,
        'U', 595,
        'u', 595,
      );
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 281:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 282:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 283:
      ADVANCE_MAP(
        'A', 569,
        'a', 569,
        'B', 477,
        'b', 477,
        'O', 601,
        'o', 601,
        'P', 635,
        'p', 635,
        'S', 397,
        's', 397,
        'T', 638,
        't', 638,
        'V', 463,
        'v', 463,
      );
      END_STATE();
    case 284:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 285:
      ADVANCE_MAP(
        'A', 448,
        'a', 448,
        'H', 534,
        'h', 534,
        'O', 474,
        'o', 474,
        'R', 280,
        'r', 280,
      );
      END_STATE();
    case 286:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 288:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 290:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 292:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 295:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 296:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 298:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 299:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 300:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 301:
      ADVANCE_MAP(
        'A', 490,
        'a', 490,
        'E', 306,
        'e', 306,
        'K', 661,
        'k', 661,
        'L', 314,
        'l', 314,
        'T', 399,
        't', 399,
      );
      END_STATE();
    case 302:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 303:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(533);
      END_STATE();
    case 304:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 305:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 306:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 307:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 308:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 309:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 310:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 311:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 313:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 314:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 315:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 316:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 317:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 318:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(928);
      END_STATE();
    case 319:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(405);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(928);
      END_STATE();
    case 320:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(477);
      END_STATE();
    case 321:
      ADVANCE_MAP(
        'B', 477,
        'b', 477,
        'C', 552,
        'c', 552,
        'G', 559,
        'g', 559,
        'P', 438,
        'p', 438,
        'S', 301,
        's', 301,
        'Y', 407,
        'y', 407,
      );
      END_STATE();
    case 322:
      ADVANCE_MAP(
        'B', 477,
        'b', 477,
        'C', 662,
        'c', 662,
        'G', 556,
        'g', 556,
        'K', 427,
        'k', 427,
        'M', 313,
        'm', 313,
        'O', 486,
        'o', 486,
        'R', 382,
        'r', 382,
        'S', 302,
        's', 302,
        'T', 638,
        't', 638,
        'V', 447,
        'v', 447,
      );
      END_STATE();
    case 323:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(477);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 324:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(576);
      END_STATE();
    case 325:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(596);
      END_STATE();
    case 326:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(554);
      END_STATE();
    case 327:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(488);
      END_STATE();
    case 328:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 329:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 330:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 331:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 332:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 333:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 334:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 335:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 336:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 337:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 338:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 339:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 340:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 341:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 342:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(594);
      END_STATE();
    case 343:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(928);
      END_STATE();
    case 344:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      END_STATE();
    case 345:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(933);
      END_STATE();
    case 346:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 347:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 348:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(519);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      END_STATE();
    case 349:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 350:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 351:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(668);
      END_STATE();
    case 352:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 353:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 354:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 355:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 356:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 357:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 358:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(493);
      END_STATE();
    case 359:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 360:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 362:
      ADVANCE_MAP(
        'E', 440,
        'e', 440,
        'I', 602,
        'i', 602,
        'L', 274,
        'l', 274,
        'R', 536,
        'r', 536,
        'U', 580,
        'u', 580,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 363:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(928);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(928);
      END_STATE();
    case 391:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 393:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 396:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 397:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(597);
      END_STATE();
    case 398:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 399:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 400:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 401:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 402:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 403:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 404:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 405:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 406:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 407:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 408:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(928);
      END_STATE();
    case 409:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      END_STATE();
    case 410:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(535);
      END_STATE();
    case 412:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(495);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(453);
      END_STATE();
    case 413:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(555);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(463);
      END_STATE();
    case 414:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(430);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(366);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 415:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 416:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 417:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(391);
      END_STATE();
    case 418:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 419:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(423);
      END_STATE();
    case 420:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(432);
      END_STATE();
    case 421:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 422:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(392);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 423:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(592);
      END_STATE();
    case 424:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(592);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      END_STATE();
    case 425:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 426:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(928);
      END_STATE();
    case 427:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 428:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(561);
      END_STATE();
    case 429:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(610);
      END_STATE();
    case 430:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(616);
      END_STATE();
    case 431:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 432:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      END_STATE();
    case 433:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(457);
      END_STATE();
    case 434:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(461);
      END_STATE();
    case 435:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(449);
      END_STATE();
    case 436:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(385);
      END_STATE();
    case 437:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(400);
      END_STATE();
    case 438:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 439:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(928);
      END_STATE();
    case 440:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      END_STATE();
    case 441:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 442:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 443:
      ADVANCE_MAP(
        'I', 583,
        'i', 583,
        'L', 545,
        'l', 545,
        'O', 584,
        'o', 584,
        'U', 331,
        'u', 331,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 444:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 446:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 448:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 449:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 452:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 455:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 457:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 458:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 461:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 462:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 463:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 464:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(538);
      END_STATE();
    case 465:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(661);
      END_STATE();
    case 466:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(928);
      END_STATE();
    case 467:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(322);
      END_STATE();
    case 468:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(439);
      END_STATE();
    case 469:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(363);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 471:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 472:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 473:
      ADVANCE_MAP(
        'L', 444,
        'l', 444,
        'N', 620,
        'n', 620,
        'Q', 640,
        'q', 640,
        'Z', 646,
        'z', 646,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 474:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 475:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(664);
      END_STATE();
    case 476:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(466);
      END_STATE();
    case 477:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 478:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 479:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 480:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 481:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 482:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 483:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 484:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 485:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 486:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 487:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 488:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 489:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 490:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 491:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 492:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 493:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 494:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 495:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 496:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 497:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 498:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 499:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(928);
      END_STATE();
    case 500:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 501:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(415);
      END_STATE();
    case 502:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(607);
      END_STATE();
    case 503:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 504:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 505:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 506:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 507:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 508:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(553);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(928);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(941);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(547);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(581);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 560:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(928);
      END_STATE();
    case 561:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(634);
      END_STATE();
    case 562:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 563:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(438);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(465);
      END_STATE();
    case 564:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 565:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 566:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(635);
      END_STATE();
    case 567:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(643);
      END_STATE();
    case 568:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(642);
      END_STATE();
    case 569:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(644);
      END_STATE();
    case 570:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(645);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(928);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      END_STATE();
    case 574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      END_STATE();
    case 603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      END_STATE();
    case 604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      END_STATE();
    case 605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      END_STATE();
    case 606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      END_STATE();
    case 607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(535);
      END_STATE();
    case 608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      END_STATE();
    case 609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      END_STATE();
    case 610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(455);
      END_STATE();
    case 611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      END_STATE();
    case 613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 614:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(928);
      END_STATE();
    case 615:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 616:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(929);
      END_STATE();
    case 618:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      END_STATE();
    case 619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      END_STATE();
    case 620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(462);
      END_STATE();
    case 621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(533);
      END_STATE();
    case 623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 625:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 626:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 627:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 628:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(423);
      END_STATE();
    case 629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      END_STATE();
    case 630:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      END_STATE();
    case 632:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      END_STATE();
    case 633:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(928);
      END_STATE();
    case 634:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 635:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 636:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 637:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(500);
      END_STATE();
    case 638:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(595);
      END_STATE();
    case 639:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(611);
      END_STATE();
    case 640:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 641:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(608);
      END_STATE();
    case 642:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 643:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 644:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 645:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 646:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 647:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(277);
      END_STATE();
    case 648:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(387);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(527);
      END_STATE();
    case 649:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(369);
      END_STATE();
    case 650:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(393);
      END_STATE();
    case 651:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(401);
      END_STATE();
    case 652:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(928);
      END_STATE();
    case 653:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(934);
      END_STATE();
    case 654:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(509);
      END_STATE();
    case 655:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(352);
      END_STATE();
    case 656:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(391);
      END_STATE();
    case 657:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(550);
      END_STATE();
    case 658:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 659:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(435);
      END_STATE();
    case 660:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(928);
      END_STATE();
    case 661:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 662:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 663:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(324);
      END_STATE();
    case 664:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(657);
      END_STATE();
    case 665:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(586);
      END_STATE();
    case 666:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      END_STATE();
    case 667:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 668:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 669:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(728);
      END_STATE();
    case 670:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 671:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(928);
      END_STATE();
    case 672:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      END_STATE();
    case 673:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 674:
      if (eof) ADVANCE(675);
      if (lookahead == '\n') ADVANCE(698);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'') ADVANCE(923);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(679);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_line_token1);
      ADVANCE_MAP(
        '#', 708,
        '\'', 916,
        '/', 690,
        ':', 710,
        'e', 693,
        '\t', 686,
        0x0b, 686,
        '\f', 686,
        ' ', 686,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(697);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(916);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == ':') ADVANCE(710);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(687);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(697);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(916);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(697);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(916);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(689);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(697);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_line_token2);
      if (lookahead == '\n') ADVANCE(698);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == ' ') ADVANCE(194);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_leftover);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_rightover);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_endnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(917);
      if (lookahead == '/') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(716);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_resume);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(743);
      if (lookahead == '\\') ADVANCE(840);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(741);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(920);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(824);
      if (lookahead == 'l') ADVANCE(815);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead == 'u') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(824);
      if (lookahead == 'l') ADVANCE(815);
      if (lookahead == 'u') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead == 't') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(813);
      if (lookahead == 'n') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(838);
      if (lookahead == '\\') ADVANCE(841);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(836);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(920);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(839);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(839);
      if (lookahead == '\\') ADVANCE(860);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(860);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(844);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(920);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(915);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(849);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(849);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(863);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(859);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'x') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'o') ADVANCE(866);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_ox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(920);
      if (lookahead == '/') ADVANCE(862);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(867);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_xo);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(870);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(881);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(871);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(882);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(872);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(883);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(873);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(884);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(874);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(885);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(875);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(876);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(877);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(878);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '@') ADVANCE(879);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(890);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(920);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(679);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(849);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(716);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(919);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(912);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(679);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(849);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(716);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(327);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(481);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(944);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(592);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(944);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(942);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(447);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(943);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(671);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(942);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(944);
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
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 12},
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
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
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
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 21},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 21},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 674},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 674},
  [190] = {.lex_state = 674},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 19},
  [193] = {.lex_state = 686},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 686},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 686},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 19},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 19},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 19},
  [214] = {.lex_state = 19},
  [215] = {.lex_state = 19},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 687},
  [218] = {.lex_state = 687},
  [219] = {.lex_state = 24},
  [220] = {.lex_state = 687},
  [221] = {.lex_state = 22},
  [222] = {.lex_state = 24},
  [223] = {.lex_state = 24},
  [224] = {.lex_state = 24},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 674},
  [228] = {.lex_state = 24},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 674},
  [232] = {.lex_state = 674},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 24},
  [235] = {.lex_state = 22},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 24},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 26},
  [241] = {.lex_state = 27},
  [242] = {.lex_state = 28},
  [243] = {.lex_state = 29},
  [244] = {.lex_state = 30},
  [245] = {.lex_state = 674},
  [246] = {.lex_state = 31},
  [247] = {.lex_state = 32},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 26},
  [250] = {.lex_state = 27},
  [251] = {.lex_state = 31},
  [252] = {.lex_state = 28},
  [253] = {.lex_state = 32},
  [254] = {.lex_state = 33},
  [255] = {.lex_state = 688},
  [256] = {.lex_state = 34},
  [257] = {.lex_state = 33},
  [258] = {.lex_state = 34},
  [259] = {.lex_state = 18},
  [260] = {.lex_state = 25},
  [261] = {.lex_state = 26},
  [262] = {.lex_state = 19},
  [263] = {.lex_state = 25},
  [264] = {.lex_state = 688},
  [265] = {.lex_state = 28},
  [266] = {.lex_state = 32},
  [267] = {.lex_state = 33},
  [268] = {.lex_state = 34},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 18},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 688},
  [274] = {.lex_state = 29},
  [275] = {.lex_state = 688},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 18},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 688},
  [280] = {.lex_state = 688},
  [281] = {.lex_state = 30},
  [282] = {.lex_state = 29},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 688},
  [285] = {.lex_state = 30},
  [286] = {.lex_state = 31},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 24},
  [289] = {.lex_state = 21},
  [290] = {.lex_state = 674},
  [291] = {.lex_state = 674},
  [292] = {.lex_state = 25},
  [293] = {.lex_state = 674},
  [294] = {.lex_state = 26},
  [295] = {.lex_state = 27},
  [296] = {.lex_state = 674},
  [297] = {.lex_state = 674},
  [298] = {.lex_state = 28},
  [299] = {.lex_state = 674},
  [300] = {.lex_state = 674},
  [301] = {.lex_state = 32},
  [302] = {.lex_state = 674},
  [303] = {.lex_state = 33},
  [304] = {.lex_state = 674},
  [305] = {.lex_state = 34},
  [306] = {.lex_state = 674},
  [307] = {.lex_state = 674},
  [308] = {.lex_state = 674},
  [309] = {.lex_state = 21},
  [310] = {.lex_state = 21},
  [311] = {.lex_state = 674},
  [312] = {.lex_state = 674},
  [313] = {.lex_state = 674},
  [314] = {.lex_state = 674},
  [315] = {.lex_state = 21},
  [316] = {.lex_state = 674},
  [317] = {.lex_state = 674},
  [318] = {.lex_state = 674},
  [319] = {.lex_state = 21},
  [320] = {.lex_state = 674},
  [321] = {.lex_state = 674},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 674},
  [324] = {.lex_state = 21},
  [325] = {.lex_state = 674},
  [326] = {.lex_state = 674},
  [327] = {.lex_state = 674},
  [328] = {.lex_state = 21},
  [329] = {.lex_state = 21},
  [330] = {.lex_state = 21},
  [331] = {.lex_state = 674},
  [332] = {.lex_state = 674},
  [333] = {.lex_state = 21},
  [334] = {.lex_state = 674},
  [335] = {.lex_state = 674},
  [336] = {.lex_state = 674},
  [337] = {.lex_state = 30},
  [338] = {.lex_state = 674},
  [339] = {.lex_state = 21},
  [340] = {.lex_state = 674},
  [341] = {.lex_state = 674},
  [342] = {.lex_state = 674},
  [343] = {.lex_state = 674},
  [344] = {.lex_state = 674},
  [345] = {.lex_state = 674},
  [346] = {.lex_state = 674},
  [347] = {.lex_state = 674},
  [348] = {.lex_state = 674},
  [349] = {.lex_state = 31},
  [350] = {.lex_state = 21},
  [351] = {.lex_state = 674},
  [352] = {.lex_state = 674},
  [353] = {.lex_state = 24},
  [354] = {.lex_state = 21},
  [355] = {.lex_state = 11},
  [356] = {.lex_state = 11},
  [357] = {.lex_state = 674},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 689},
  [360] = {.lex_state = 689},
  [361] = {.lex_state = 21},
  [362] = {.lex_state = 11},
  [363] = {.lex_state = 11},
  [364] = {.lex_state = 688},
  [365] = {.lex_state = 689},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 689},
  [368] = {.lex_state = 689},
  [369] = {.lex_state = 11},
  [370] = {.lex_state = 689},
  [371] = {.lex_state = 11},
  [372] = {.lex_state = 21},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 21},
  [375] = {.lex_state = 688},
  [376] = {.lex_state = 22},
  [377] = {.lex_state = 714},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 22},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 22},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 674},
  [387] = {.lex_state = 36},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 36},
  [390] = {.lex_state = 37},
  [391] = {.lex_state = 674},
  [392] = {.lex_state = 674},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 6},
  [395] = {.lex_state = 23},
  [396] = {.lex_state = 22},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 23},
  [399] = {.lex_state = 674},
  [400] = {.lex_state = 22},
  [401] = {.lex_state = 11},
  [402] = {.lex_state = 11},
  [403] = {.lex_state = 21},
  [404] = {.lex_state = 674},
  [405] = {.lex_state = 38},
  [406] = {.lex_state = 674},
  [407] = {.lex_state = 36},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 36},
  [411] = {.lex_state = 22},
  [412] = {.lex_state = 23},
  [413] = {.lex_state = 674},
  [414] = {.lex_state = 11},
  [415] = {.lex_state = 674},
  [416] = {.lex_state = 22},
  [417] = {.lex_state = 11},
  [418] = {.lex_state = 674},
  [419] = {.lex_state = 37},
  [420] = {.lex_state = 11},
  [421] = {.lex_state = 11},
  [422] = {.lex_state = 21},
  [423] = {.lex_state = 674},
  [424] = {.lex_state = 674},
  [425] = {.lex_state = 37},
  [426] = {.lex_state = 23},
  [427] = {.lex_state = 37},
  [428] = {.lex_state = 37},
  [429] = {.lex_state = 37},
  [430] = {.lex_state = 37},
  [431] = {.lex_state = 36},
  [432] = {.lex_state = 22},
  [433] = {.lex_state = 37},
  [434] = {.lex_state = 674},
  [435] = {.lex_state = 37},
  [436] = {.lex_state = 37},
  [437] = {.lex_state = 23},
  [438] = {.lex_state = 36},
  [439] = {.lex_state = 22},
  [440] = {.lex_state = 0},
  [441] = {(TSStateId)(-1)},
  [442] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(1),
    [aux_sym_attribute_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
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
    [sym_diagram] = STATE(382),
    [sym_uml] = STATE(393),
    [sym_json] = STATE(393),
    [sym_yaml] = STATE(393),
    [sym_ebnf] = STATE(393),
    [sym_regex] = STATE(393),
    [sym_ditaa] = STATE(393),
    [sym_gantt] = STATE(393),
    [sym_chronology] = STATE(393),
    [sym_mindmap] = STATE(393),
    [sym_wbs] = STATE(393),
    [sym_chen] = STATE(393),
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
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(350), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 7,
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
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(339), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 7,
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
    ACTIONS(55), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(324), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 7,
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
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(354), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 7,
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
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(61), 1,
      anon_sym_end,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    STATE(6), 1,
      sym_comment,
    STATE(20), 1,
      sym_custom_label,
    STATE(22), 1,
      aux_sym_uml_repeat1,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(79), 1,
      anon_sym_end,
    STATE(5), 1,
      aux_sym_uml_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(315), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 7,
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
  [462] = 21,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(81), 1,
      anon_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(24), 1,
      sym_custom_label,
    STATE(25), 1,
      aux_sym_uml_repeat1,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(333), 1,
      aux_sym_alt_block_repeat1,
    STATE(100), 7,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(85), 1,
      anon_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_uml_repeat1,
    STATE(32), 1,
      sym_custom_label,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    ACTIONS(90), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(11), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(100), 7,
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
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    ACTIONS(119), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(100), 7,
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
    STATE(95), 1,
      sym_expression,
    STATE(173), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    ACTIONS(121), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(100), 7,
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
    STATE(27), 1,
      aux_sym_uml_repeat1,
    STATE(123), 1,
      sym_expression,
    STATE(172), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(165), 7,
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
  [978] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(15), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1049] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(113), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_ATenduml,
    ACTIONS(145), 1,
      anon_sym_alt,
    ACTIONS(148), 1,
      anon_sym_note,
    ACTIONS(151), 1,
      anon_sym_loop,
    ACTIONS(154), 1,
      anon_sym_group,
    ACTIONS(157), 1,
      anon_sym_skinparam,
    ACTIONS(160), 1,
      anon_sym_autonumber,
    ACTIONS(163), 1,
      anon_sym_autonumberstop,
    STATE(123), 1,
      sym_expression,
    STATE(172), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(16), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(165), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(166), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1260] = 18,
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
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(19), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(126), 7,
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
  [1329] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(20), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_uml_repeat1,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(21), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_uml_repeat1,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(201), 1,
      anon_sym_end,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_uml_repeat1,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(207), 1,
      anon_sym_ATenduml,
    STATE(16), 1,
      aux_sym_uml_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(123), 1,
      sym_expression,
    STATE(172), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(165), 7,
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
  [1897] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(209), 1,
      anon_sym_end,
    STATE(28), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_uml_repeat1,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(213), 1,
      anon_sym_end,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(215), 1,
      anon_sym_end,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
    ACTIONS(59), 1,
      anon_sym_alt,
    ACTIONS(63), 1,
      anon_sym_note,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_group,
    ACTIONS(71), 1,
      anon_sym_skinparam,
    ACTIONS(73), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(215), 1,
      anon_sym_end,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_participant_name,
    STATE(177), 1,
      sym_string,
    STATE(126), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(77), 8,
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
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
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
    ACTIONS(223), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(54), 2,
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
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_order,
    STATE(34), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_attribute_repeat2,
    STATE(45), 1,
      sym_multiline,
    ACTIONS(223), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(70), 2,
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
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_as,
    ACTIONS(243), 1,
      anon_sym_order,
    STATE(35), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    STATE(46), 1,
      sym_multiline,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(223), 3,
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
    ACTIONS(219), 1,
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
    STATE(54), 2,
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
    ACTIONS(219), 1,
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
    STATE(54), 2,
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
    ACTIONS(219), 1,
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
    STATE(54), 2,
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
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      anon_sym_as,
    ACTIONS(263), 1,
      anon_sym_order,
    ACTIONS(258), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(39), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(54), 2,
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
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_as,
    ACTIONS(243), 1,
      anon_sym_order,
    STATE(40), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_attribute_repeat2,
    STATE(65), 2,
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
  [2657] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_as,
    ACTIONS(243), 1,
      anon_sym_order,
    STATE(41), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_attribute_repeat2,
    STATE(65), 2,
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
  [2705] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_order,
    STATE(42), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(70), 2,
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
  [2753] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_order,
    STATE(43), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(70), 2,
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
  [2801] = 9,
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
    STATE(44), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(65), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(258), 3,
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
  [2847] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_order,
    STATE(42), 1,
      aux_sym_attribute_repeat2,
    STATE(45), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(70), 2,
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
  [2895] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_as,
    ACTIONS(243), 1,
      anon_sym_order,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    STATE(46), 1,
      sym_comment,
    STATE(65), 2,
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
  [2943] = 9,
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
    ACTIONS(258), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(47), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(70), 2,
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
  [2989] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
    ACTIONS(258), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [3136] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
  [3172] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
  [3208] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(296), 19,
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
  [3244] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      anon_sym_as,
    STATE(55), 1,
      sym_comment,
    STATE(83), 1,
      sym_attr_alias,
    ACTIONS(304), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(300), 17,
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
  [3286] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(308), 19,
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
  [3322] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 19,
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
  [3358] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [3394] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(290), 5,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
  [3430] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
  [3466] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [3502] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
  [3538] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_autonumberstop,
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
  [3574] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_COLON,
    ACTIONS(326), 1,
      anon_sym_as,
    STATE(64), 1,
      sym_comment,
    STATE(115), 1,
      sym_attr_alias,
    ACTIONS(304), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(300), 15,
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
  [3615] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(298), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(296), 17,
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
  [3650] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [3685] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 17,
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
  [3720] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [3755] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(310), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(308), 17,
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
  [3790] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(296), 18,
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
  [3825] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(330), 1,
      anon_sym_as,
    STATE(71), 1,
      sym_comment,
    STATE(102), 1,
      sym_attr_alias,
    ACTIONS(304), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(300), 16,
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
  [3866] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(258), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [3901] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(308), 18,
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
  [3936] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 18,
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
  [3971] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [4006] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [4041] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
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
  [4076] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4111] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4146] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4181] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4215] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4249] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(334), 1,
      anon_sym_COLON,
    STATE(83), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(332), 17,
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
  [4285] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4319] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4353] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(320), 17,
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
  [4387] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4421] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
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
  [4455] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 17,
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
  [4488] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
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
  [4521] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 17,
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
  [4554] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(350), 17,
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
  [4587] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 17,
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
  [4620] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
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
  [4653] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(358), 17,
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
  [4686] = 5,
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
  [4719] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
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
  [4752] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(98), 1,
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
  [4785] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
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
  [4818] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
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
  [4851] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(101), 1,
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
  [4884] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(332), 16,
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
  [4919] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(103), 1,
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
  [4952] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(104), 1,
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
  [4985] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(223), 2,
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
  [5018] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(106), 1,
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
  [5051] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
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
  [5084] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(108), 1,
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
  [5117] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
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
  [5150] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(320), 16,
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
  [5183] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
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
  [5216] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
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
  [5249] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
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
  [5282] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(114), 1,
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
  [5315] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_COLON,
    STATE(115), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(332), 15,
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
  [5350] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(418), 17,
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
  [5383] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(422), 17,
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
  [5416] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(320), 15,
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
  [5449] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
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
  [5481] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
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
  [5513] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
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
  [5545] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(223), 3,
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
  [5577] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(358), 15,
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
  [5609] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(124), 1,
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
  [5641] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(358), 16,
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
  [5673] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
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
  [5705] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(223), 2,
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
  [5737] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
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
  [5769] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(129), 1,
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
  [5801] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(130), 1,
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
  [5833] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
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
  [5865] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
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
  [5897] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 16,
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
  [5929] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
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
  [5961] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
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
  [5993] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 16,
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
  [6025] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
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
  [6057] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
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
  [6089] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(338), 15,
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
  [6121] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
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
  [6153] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
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
  [6185] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
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
  [6217] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
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
  [6249] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
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
  [6281] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
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
  [6313] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
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
  [6345] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(350), 15,
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
  [6377] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
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
  [6409] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(426), 16,
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
  [6441] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
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
  [6473] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
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
  [6505] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(350), 16,
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
  [6537] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
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
  [6569] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
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
  [6601] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(418), 16,
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
  [6633] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(156), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(422), 16,
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
  [6665] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 16,
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
  [6697] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(158), 1,
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
  [6729] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
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
  [6761] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(160), 1,
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
  [6793] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
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
  [6825] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(354), 15,
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
  [6857] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(163), 1,
      sym_comment,
    ACTIONS(420), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(418), 15,
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
  [6889] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
      sym_comment,
    ACTIONS(424), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(422), 15,
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
  [6921] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(165), 1,
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
  [6953] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(346), 15,
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
  [6985] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
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
  [7017] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(168), 1,
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
  [7049] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(169), 1,
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
  [7081] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(170), 1,
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
  [7113] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(171), 1,
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
  [7145] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(432), 1,
      anon_sym_DASH,
    ACTIONS(436), 1,
      anon_sym_x,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH,
    STATE(172), 1,
      sym_comment,
    STATE(270), 1,
      sym_connector,
    ACTIONS(434), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(430), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(438), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7181] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(432), 1,
      anon_sym_DASH,
    ACTIONS(436), 1,
      anon_sym_x,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH,
    STATE(173), 1,
      sym_comment,
    STATE(272), 1,
      sym_connector,
    ACTIONS(434), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(430), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(438), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7217] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(432), 1,
      anon_sym_DASH,
    ACTIONS(436), 1,
      anon_sym_x,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH,
    STATE(174), 1,
      sym_comment,
    STATE(278), 1,
      sym_connector,
    ACTIONS(434), 2,
      anon_sym_o,
      anon_sym_xo,
    ACTIONS(430), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(438), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7253] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(175), 1,
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
  [7278] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(176), 1,
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
  [7303] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
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
  [7328] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(448), 1,
      anon_sym_LBRACK_POUND,
    STATE(178), 1,
      sym_comment,
    ACTIONS(442), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(444), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(446), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7355] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(179), 1,
      sym_comment,
    ACTIONS(450), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(452), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(456), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7382] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_DASH,
    STATE(180), 1,
      sym_comment,
    ACTIONS(458), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(460), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(464), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7409] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(472), 1,
      anon_sym_LBRACK_POUND,
    STATE(181), 1,
      sym_comment,
    ACTIONS(466), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(468), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(470), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7436] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(182), 1,
      sym_comment,
    ACTIONS(474), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(476), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(478), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7460] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(183), 1,
      sym_comment,
    ACTIONS(442), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(444), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(446), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7484] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(184), 1,
      sym_comment,
    ACTIONS(466), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(468), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(470), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7508] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(185), 1,
      sym_comment,
    ACTIONS(458), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(460), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(464), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7532] = 9,
    ACTIONS(480), 1,
      aux_sym_line_token2,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(186), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_attribute_repeat1,
    STATE(418), 1,
      sym_string,
    ACTIONS(482), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7561] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(494), 1,
      anon_sym_DASH,
    STATE(187), 1,
      sym_comment,
    ACTIONS(492), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(496), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7584] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(502), 1,
      anon_sym_LBRACK_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(500), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7607] = 9,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(504), 1,
      aux_sym_line_token2,
    STATE(189), 1,
      sym_comment,
    STATE(227), 1,
      aux_sym_attribute_repeat1,
    STATE(391), 1,
      sym_string,
    ACTIONS(506), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7636] = 9,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(508), 1,
      aux_sym_line_token2,
    STATE(190), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_attribute_repeat1,
    STATE(386), 1,
      sym_string,
    ACTIONS(510), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7665] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(512), 1,
      anon_sym_DQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    STATE(191), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7691] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7717] = 9,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_endnote,
    STATE(193), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym_note_block_repeat1,
    STATE(375), 1,
      sym_line,
  [7745] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7771] = 9,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(530), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(534), 1,
      anon_sym_endnote,
    STATE(195), 1,
      sym_comment,
    STATE(284), 1,
      aux_sym_note_block_repeat1,
    STATE(375), 1,
      sym_line,
  [7799] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(196), 1,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(500), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7819] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(197), 1,
      sym_comment,
    ACTIONS(536), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(538), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7839] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
    ACTIONS(545), 1,
      anon_sym_BSLASH,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(542), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(198), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [7863] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(199), 1,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(456), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7883] = 9,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(548), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      anon_sym_COLON,
    ACTIONS(552), 1,
      anon_sym_endnote,
    STATE(200), 1,
      sym_comment,
    STATE(279), 1,
      aux_sym_note_block_repeat1,
    STATE(375), 1,
      sym_line,
  [7911] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(201), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7937] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7963] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(203), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7989] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(560), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8015] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(205), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8041] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym_comment,
    STATE(207), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8067] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(207), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8093] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_comment,
    STATE(209), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8119] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(209), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8145] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(572), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_comment,
    STATE(211), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8171] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(211), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8197] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_comment,
    STATE(213), 1,
      aux_sym_string_repeat1,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8223] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(578), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(213), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8249] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    STATE(214), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8275] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(582), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      aux_sym_string_repeat1,
    STATE(215), 1,
      sym_comment,
    STATE(262), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [8301] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(584), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_comment,
    ACTIONS(588), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8322] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_endnote,
    STATE(217), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym_note_block_repeat1,
    STATE(375), 1,
      sym_line,
  [8347] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(596), 1,
      anon_sym_endnote,
    STATE(218), 1,
      sym_comment,
    STATE(264), 1,
      aux_sym_note_block_repeat1,
    STATE(375), 1,
      sym_line,
  [8372] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    ACTIONS(600), 1,
      aux_sym_multiline_token1,
    ACTIONS(602), 1,
      anon_sym_BSLASH,
    STATE(219), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_multiline_repeat1,
    STATE(353), 1,
      sym_escape_char,
  [8397] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(604), 1,
      anon_sym_COLON,
    ACTIONS(606), 1,
      anon_sym_endnote,
    STATE(220), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym_note_block_repeat1,
    STATE(375), 1,
      sym_line,
  [8422] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(221), 1,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_left,
      anon_sym_right,
    ACTIONS(610), 3,
      anon_sym_leftover,
      anon_sym_rightover,
      anon_sym_over,
  [8441] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(600), 1,
      aux_sym_multiline_token1,
    ACTIONS(602), 1,
      anon_sym_BSLASH,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_multiline_repeat1,
    STATE(353), 1,
      sym_escape_char,
  [8466] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(600), 1,
      aux_sym_multiline_token1,
    ACTIONS(602), 1,
      anon_sym_BSLASH,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_multiline_repeat1,
    STATE(353), 1,
      sym_escape_char,
  [8491] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(600), 1,
      aux_sym_multiline_token1,
    ACTIONS(602), 1,
      anon_sym_BSLASH,
    ACTIONS(616), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_multiline_repeat1,
    STATE(353), 1,
      sym_escape_char,
  [8516] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(618), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_comment,
    ACTIONS(622), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8537] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      aux_sym_attr_alias_token1,
    STATE(226), 1,
      sym_comment,
    ACTIONS(626), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8558] = 8,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(628), 1,
      aux_sym_line_token2,
    STATE(227), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_attribute_repeat1,
    STATE(415), 1,
      sym_string,
  [8583] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(600), 1,
      aux_sym_multiline_token1,
    ACTIONS(602), 1,
      anon_sym_BSLASH,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_multiline_repeat1,
    STATE(353), 1,
      sym_escape_char,
  [8608] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      aux_sym_attr_alias_token1,
    STATE(229), 1,
      sym_comment,
    ACTIONS(634), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8629] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      aux_sym_attr_alias_token1,
    STATE(230), 1,
      sym_comment,
    ACTIONS(638), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8650] = 8,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(640), 1,
      aux_sym_line_token2,
    STATE(231), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_attribute_repeat1,
    STATE(399), 1,
      sym_string,
  [8675] = 8,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(642), 1,
      aux_sym_line_token2,
    STATE(232), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_attribute_repeat1,
    STATE(423), 1,
      sym_string,
  [8700] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      aux_sym_attr_alias_token1,
    STATE(233), 1,
      sym_comment,
    ACTIONS(646), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8721] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(600), 1,
      aux_sym_multiline_token1,
    ACTIONS(602), 1,
      anon_sym_BSLASH,
    ACTIONS(648), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      aux_sym_multiline_repeat1,
    STATE(234), 1,
      sym_comment,
    STATE(353), 1,
      sym_escape_char,
  [8746] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(235), 1,
      sym_comment,
    ACTIONS(650), 2,
      anon_sym_left,
      anon_sym_right,
    ACTIONS(652), 3,
      anon_sym_leftover,
      anon_sym_rightover,
      anon_sym_over,
  [8765] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(654), 1,
      aux_sym_attr_alias_token1,
    STATE(236), 1,
      sym_comment,
    ACTIONS(656), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8786] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(237), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_left,
      anon_sym_right,
    ACTIONS(660), 3,
      anon_sym_leftover,
      anon_sym_rightover,
      anon_sym_over,
  [8805] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
    ACTIONS(664), 1,
      aux_sym_multiline_token1,
    ACTIONS(667), 1,
      anon_sym_BSLASH,
    STATE(353), 1,
      sym_escape_char,
    STATE(238), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [8828] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(672), 1,
      anon_sym_ATendregex,
    STATE(239), 1,
      sym_comment,
    STATE(260), 1,
      aux_sym_json_repeat1,
    ACTIONS(670), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8848] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_ATendditaa,
    STATE(240), 1,
      sym_comment,
    STATE(249), 1,
      aux_sym_json_repeat1,
    ACTIONS(674), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8868] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_ATendgantt,
    STATE(241), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_json_repeat1,
    ACTIONS(678), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8888] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(684), 1,
      anon_sym_ATendchronology,
    STATE(242), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym_json_repeat1,
    ACTIONS(682), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8908] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(688), 1,
      anon_sym_ATendjson,
    STATE(243), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_json_repeat1,
    ACTIONS(686), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8928] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(692), 1,
      anon_sym_ATendyaml,
    STATE(244), 1,
      sym_comment,
    STATE(281), 1,
      aux_sym_json_repeat1,
    ACTIONS(690), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8948] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(694), 1,
      aux_sym_line_token2,
    ACTIONS(696), 1,
      aux_sym_attribute_token3,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(245), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [8968] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(703), 1,
      anon_sym_ATendebnf,
    STATE(246), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym_json_repeat1,
    ACTIONS(701), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8988] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(707), 1,
      anon_sym_ATendmindmap,
    STATE(247), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_json_repeat1,
    ACTIONS(705), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9008] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(248), 1,
      sym_comment,
    ACTIONS(709), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [9024] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(711), 1,
      anon_sym_ATendditaa,
    STATE(249), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_json_repeat1,
    ACTIONS(674), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9044] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(713), 1,
      anon_sym_ATendgantt,
    STATE(250), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_json_repeat1,
    ACTIONS(678), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9064] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendebnf,
    ACTIONS(715), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(251), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9082] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(720), 1,
      anon_sym_ATendchronology,
    STATE(252), 1,
      sym_comment,
    STATE(265), 1,
      aux_sym_json_repeat1,
    ACTIONS(682), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9102] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(722), 1,
      anon_sym_ATendmindmap,
    STATE(253), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym_json_repeat1,
    ACTIONS(705), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9122] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendwbs,
    STATE(254), 1,
      sym_comment,
    STATE(267), 1,
      aux_sym_json_repeat1,
    ACTIONS(724), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9142] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      aux_sym_line_token1,
    ACTIONS(731), 1,
      anon_sym_endnote,
    STATE(375), 1,
      sym_line,
    STATE(255), 2,
      sym_comment,
      aux_sym_note_block_repeat1,
  [9162] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_ATendchen,
    STATE(256), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_json_repeat1,
    ACTIONS(733), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9182] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_ATendwbs,
    STATE(254), 1,
      aux_sym_json_repeat1,
    STATE(257), 1,
      sym_comment,
    ACTIONS(724), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9202] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(739), 1,
      anon_sym_ATendchen,
    STATE(256), 1,
      aux_sym_json_repeat1,
    STATE(258), 1,
      sym_comment,
    ACTIONS(733), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9222] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_attribute_token1,
    ACTIONS(743), 1,
      aux_sym_attribute_token2,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    STATE(259), 1,
      sym_comment,
    STATE(395), 1,
      sym_string,
  [9244] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendregex,
    ACTIONS(747), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(260), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9262] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendditaa,
    ACTIONS(750), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(261), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9280] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(262), 1,
      sym_comment,
    ACTIONS(753), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [9296] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(755), 1,
      anon_sym_ATendregex,
    STATE(239), 1,
      aux_sym_json_repeat1,
    STATE(263), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9316] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(757), 1,
      anon_sym_endnote,
    STATE(255), 1,
      aux_sym_note_block_repeat1,
    STATE(264), 1,
      sym_comment,
    STATE(375), 1,
      sym_line,
  [9338] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendchronology,
    ACTIONS(759), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(265), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9356] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendmindmap,
    ACTIONS(762), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(266), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9374] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendwbs,
    ACTIONS(765), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(267), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9392] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendchen,
    ACTIONS(768), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(268), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9410] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(771), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_participant_name,
    STATE(50), 1,
      sym_string,
    STATE(269), 1,
      sym_comment,
  [9432] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(775), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_participant_name,
    STATE(84), 1,
      sym_string,
    STATE(270), 1,
      sym_comment,
  [9454] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      aux_sym_attribute_token1,
    ACTIONS(781), 1,
      aux_sym_attribute_token2,
    STATE(271), 1,
      sym_comment,
    STATE(412), 1,
      sym_string,
  [9476] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(783), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(785), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_participant_name,
    STATE(78), 1,
      sym_string,
    STATE(272), 1,
      sym_comment,
  [9498] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(787), 1,
      anon_sym_endnote,
    STATE(255), 1,
      aux_sym_note_block_repeat1,
    STATE(273), 1,
      sym_comment,
    STATE(375), 1,
      sym_line,
  [9520] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendjson,
    ACTIONS(789), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(274), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9538] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(792), 1,
      anon_sym_endnote,
    STATE(255), 1,
      aux_sym_note_block_repeat1,
    STATE(275), 1,
      sym_comment,
    STATE(375), 1,
      sym_line,
  [9560] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(794), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(796), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_participant_name,
    STATE(62), 1,
      sym_string,
    STATE(276), 1,
      sym_comment,
  [9582] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    ACTIONS(798), 1,
      aux_sym_attribute_token1,
    ACTIONS(800), 1,
      aux_sym_attribute_token2,
    STATE(277), 1,
      sym_comment,
    STATE(398), 1,
      sym_string,
  [9604] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(802), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(804), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_participant_name,
    STATE(87), 1,
      sym_string,
    STATE(278), 1,
      sym_comment,
  [9626] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(806), 1,
      anon_sym_endnote,
    STATE(255), 1,
      aux_sym_note_block_repeat1,
    STATE(279), 1,
      sym_comment,
    STATE(375), 1,
      sym_line,
  [9648] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(808), 1,
      anon_sym_endnote,
    STATE(255), 1,
      aux_sym_note_block_repeat1,
    STATE(280), 1,
      sym_comment,
    STATE(375), 1,
      sym_line,
  [9670] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendyaml,
    ACTIONS(810), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(281), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9688] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(813), 1,
      anon_sym_ATendjson,
    STATE(243), 1,
      aux_sym_json_repeat1,
    STATE(282), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9708] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(815), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_participant_name,
    STATE(53), 1,
      sym_string,
    STATE(283), 1,
      sym_comment,
  [9730] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(520), 1,
      aux_sym_line_token1,
    ACTIONS(819), 1,
      anon_sym_endnote,
    STATE(255), 1,
      aux_sym_note_block_repeat1,
    STATE(284), 1,
      sym_comment,
    STATE(375), 1,
      sym_line,
  [9752] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(821), 1,
      anon_sym_ATendyaml,
    STATE(244), 1,
      aux_sym_json_repeat1,
    STATE(285), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9772] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(823), 1,
      anon_sym_ATendebnf,
    STATE(246), 1,
      aux_sym_json_repeat1,
    STATE(286), 1,
      sym_comment,
    ACTIONS(701), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9792] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_ATendgantt,
    ACTIONS(825), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(287), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9810] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(288), 1,
      sym_comment,
    ACTIONS(709), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [9825] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
      sym_boolean_literal,
    STATE(289), 1,
      sym_comment,
    ACTIONS(828), 2,
      anon_sym_true,
      anon_sym_false,
  [9842] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    STATE(290), 1,
      sym_comment,
    STATE(336), 1,
      aux_sym_json_repeat2,
  [9861] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(834), 1,
      aux_sym_line_token2,
    STATE(291), 1,
      sym_comment,
    ACTIONS(836), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [9878] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(292), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [9893] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(840), 1,
      ts_builtin_sym_end,
    STATE(293), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_json_repeat2,
  [9912] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(294), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [9927] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(295), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [9942] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    STATE(296), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym_json_repeat2,
  [9961] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    ACTIONS(846), 1,
      aux_sym_line_token2,
    STATE(297), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [9978] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(298), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [9993] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(849), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(299), 1,
      sym_comment,
  [10012] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(851), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(300), 1,
      sym_comment,
  [10031] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(301), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [10046] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(853), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(302), 1,
      sym_comment,
  [10065] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(303), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [10080] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(304), 1,
      sym_comment,
  [10099] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(305), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [10114] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(306), 1,
      sym_comment,
  [10133] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(859), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(307), 1,
      sym_comment,
  [10152] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(861), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(308), 1,
      sym_comment,
  [10171] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(309), 1,
      sym_comment,
    ACTIONS(863), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [10186] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_boolean_literal,
    STATE(310), 1,
      sym_comment,
    ACTIONS(865), 2,
      anon_sym_true,
      anon_sym_false,
  [10203] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(867), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(311), 1,
      sym_comment,
  [10222] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(312), 1,
      sym_comment,
  [10241] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(313), 1,
      sym_comment,
  [10260] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
    STATE(299), 1,
      aux_sym_json_repeat2,
    STATE(314), 1,
      sym_comment,
  [10279] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(877), 1,
      anon_sym_end,
    STATE(315), 1,
      sym_comment,
    STATE(330), 1,
      aux_sym_alt_block_repeat1,
  [10298] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(879), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(316), 1,
      sym_comment,
  [10317] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(881), 1,
      ts_builtin_sym_end,
    STATE(317), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym_json_repeat2,
  [10336] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(883), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(318), 1,
      sym_comment,
  [10355] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(319), 1,
      sym_comment,
    ACTIONS(885), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [10370] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      aux_sym_json_repeat2,
    STATE(320), 1,
      sym_comment,
  [10389] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(889), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(321), 1,
      sym_comment,
  [10408] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(322), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [10423] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(891), 1,
      ts_builtin_sym_end,
    STATE(302), 1,
      aux_sym_json_repeat2,
    STATE(323), 1,
      sym_comment,
  [10442] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(893), 1,
      anon_sym_end,
    STATE(324), 1,
      sym_comment,
    STATE(330), 1,
      aux_sym_alt_block_repeat1,
  [10461] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(895), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(325), 1,
      sym_comment,
  [10480] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
    STATE(304), 1,
      aux_sym_json_repeat2,
    STATE(326), 1,
      sym_comment,
  [10499] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(899), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(327), 1,
      sym_comment,
  [10518] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(328), 1,
      sym_comment,
    ACTIONS(901), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [10533] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_boolean_literal,
    STATE(329), 1,
      sym_comment,
    ACTIONS(903), 2,
      anon_sym_true,
      anon_sym_false,
  [10550] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(905), 1,
      anon_sym_else,
    ACTIONS(908), 1,
      anon_sym_end,
    STATE(330), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [10567] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      aux_sym_json_repeat2,
    STATE(331), 1,
      sym_comment,
  [10586] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(912), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(332), 1,
      sym_comment,
  [10605] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(914), 1,
      anon_sym_end,
    STATE(330), 1,
      aux_sym_alt_block_repeat1,
    STATE(333), 1,
      sym_comment,
  [10624] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
    STATE(334), 1,
      sym_comment,
    STATE(344), 1,
      aux_sym_json_repeat2,
  [10643] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
    STATE(307), 1,
      aux_sym_json_repeat2,
    STATE(335), 1,
      sym_comment,
  [10662] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(336), 1,
      sym_comment,
  [10681] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(337), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [10696] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(922), 1,
      ts_builtin_sym_end,
    STATE(308), 1,
      aux_sym_json_repeat2,
    STATE(338), 1,
      sym_comment,
  [10715] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(924), 1,
      anon_sym_end,
    STATE(330), 1,
      aux_sym_alt_block_repeat1,
    STATE(339), 1,
      sym_comment,
  [10734] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(926), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(340), 1,
      sym_comment,
  [10753] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(928), 1,
      ts_builtin_sym_end,
    STATE(311), 1,
      aux_sym_json_repeat2,
    STATE(341), 1,
      sym_comment,
  [10772] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(930), 1,
      ts_builtin_sym_end,
    STATE(327), 1,
      aux_sym_json_repeat2,
    STATE(342), 1,
      sym_comment,
  [10791] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(932), 1,
      ts_builtin_sym_end,
    STATE(321), 1,
      aux_sym_json_repeat2,
    STATE(343), 1,
      sym_comment,
  [10810] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(344), 1,
      sym_comment,
  [10829] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(936), 1,
      ts_builtin_sym_end,
    STATE(313), 1,
      aux_sym_json_repeat2,
    STATE(345), 1,
      sym_comment,
  [10848] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(938), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      aux_sym_json_repeat2,
    STATE(346), 1,
      sym_comment,
  [10867] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
    STATE(316), 1,
      aux_sym_json_repeat2,
    STATE(347), 1,
      sym_comment,
  [10886] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(942), 1,
      ts_builtin_sym_end,
    STATE(346), 1,
      aux_sym_json_repeat2,
    STATE(348), 1,
      sym_comment,
  [10905] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(349), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [10920] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(944), 1,
      anon_sym_end,
    STATE(330), 1,
      aux_sym_alt_block_repeat1,
    STATE(350), 1,
      sym_comment,
  [10939] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(946), 1,
      ts_builtin_sym_end,
    STATE(332), 1,
      aux_sym_json_repeat2,
    STATE(351), 1,
      sym_comment,
  [10958] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(948), 1,
      ts_builtin_sym_end,
    STATE(318), 1,
      aux_sym_json_repeat2,
    STATE(352), 1,
      sym_comment,
  [10977] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(353), 1,
      sym_comment,
    ACTIONS(950), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [10992] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(875), 1,
      anon_sym_else,
    ACTIONS(952), 1,
      anon_sym_end,
    STATE(330), 1,
      aux_sym_alt_block_repeat1,
    STATE(354), 1,
      sym_comment,
  [11011] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(355), 1,
      sym_comment,
    ACTIONS(450), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11025] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(356), 1,
      sym_comment,
    ACTIONS(586), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11039] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(357), 1,
      sym_comment,
    ACTIONS(954), 2,
      ts_builtin_sym_end,
      aux_sym_line_token2,
  [11053] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(358), 1,
      sym_comment,
    ACTIONS(442), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11067] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(956), 1,
      aux_sym_line_token1,
    STATE(156), 1,
      sym_line,
    STATE(359), 1,
      sym_comment,
  [11083] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(958), 1,
      aux_sym_line_token1,
    STATE(164), 1,
      sym_line,
    STATE(360), 1,
      sym_comment,
  [11099] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(960), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(962), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(361), 1,
      sym_comment,
  [11115] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(362), 1,
      sym_comment,
    ACTIONS(964), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11129] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(363), 1,
      sym_comment,
    ACTIONS(458), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11143] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(364), 1,
      sym_comment,
    ACTIONS(362), 2,
      aux_sym_line_token1,
      anon_sym_endnote,
  [11157] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(966), 1,
      aux_sym_line_token1,
    STATE(117), 1,
      sym_line,
    STATE(365), 1,
      sym_comment,
  [11173] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(968), 1,
      anon_sym_DASH,
    ACTIONS(970), 1,
      anon_sym_DASH_DASH,
    STATE(366), 1,
      sym_comment,
  [11189] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(956), 1,
      aux_sym_line_token1,
    STATE(142), 1,
      sym_line,
    STATE(367), 1,
      sym_comment,
  [11205] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(966), 1,
      aux_sym_line_token1,
    STATE(103), 1,
      sym_line,
    STATE(368), 1,
      sym_comment,
  [11221] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(369), 1,
      sym_comment,
    ACTIONS(620), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11235] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(958), 1,
      aux_sym_line_token1,
    STATE(120), 1,
      sym_line,
    STATE(370), 1,
      sym_comment,
  [11251] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(371), 1,
      sym_comment,
    ACTIONS(474), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [11265] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(972), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(974), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(372), 1,
      sym_comment,
  [11281] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      anon_sym_DASH,
    ACTIONS(978), 1,
      anon_sym_DASH_DASH,
    STATE(373), 1,
      sym_comment,
  [11297] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(980), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(982), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(374), 1,
      sym_comment,
  [11313] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(375), 1,
      sym_comment,
    ACTIONS(984), 2,
      aux_sym_line_token1,
      anon_sym_endnote,
  [11327] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(986), 1,
      sym_color,
    STATE(376), 1,
      sym_comment,
  [11340] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(988), 1,
      aux_sym_custom_label_token1,
    STATE(377), 1,
      sym_comment,
  [11353] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      sym_comment,
  [11366] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(992), 1,
      sym_color,
    STATE(379), 1,
      sym_comment,
  [11379] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(994), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      sym_comment,
  [11392] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(996), 1,
      anon_sym_SLASH,
    STATE(381), 1,
      sym_comment,
  [11405] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(998), 1,
      ts_builtin_sym_end,
    STATE(382), 1,
      sym_comment,
  [11418] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1000), 1,
      ts_builtin_sym_end,
    STATE(383), 1,
      sym_comment,
  [11431] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1002), 1,
      sym_color,
    STATE(384), 1,
      sym_comment,
  [11444] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1004), 1,
      aux_sym_comment_token1,
    STATE(385), 1,
      sym_comment,
  [11457] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(640), 1,
      aux_sym_line_token2,
    STATE(386), 1,
      sym_comment,
  [11470] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1006), 1,
      aux_sym_sequence_diagram_token1,
    STATE(387), 1,
      sym_comment,
  [11483] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1008), 1,
      ts_builtin_sym_end,
    STATE(388), 1,
      sym_comment,
  [11496] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1010), 1,
      aux_sym_sequence_diagram_token1,
    STATE(389), 1,
      sym_comment,
  [11509] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1012), 1,
      sym_label,
    STATE(390), 1,
      sym_comment,
  [11522] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(628), 1,
      aux_sym_line_token2,
    STATE(391), 1,
      sym_comment,
  [11535] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1014), 1,
      aux_sym_line_token2,
    STATE(392), 1,
      sym_comment,
  [11548] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1016), 1,
      ts_builtin_sym_end,
    STATE(393), 1,
      sym_comment,
  [11561] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1018), 1,
      aux_sym_escape_char_token1,
    STATE(394), 1,
      sym_comment,
  [11574] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1020), 1,
      aux_sym_attribute_token2,
    STATE(395), 1,
      sym_comment,
  [11587] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1022), 1,
      sym_color,
    STATE(396), 1,
      sym_comment,
  [11600] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1024), 1,
      aux_sym_escape_char_token1,
    STATE(397), 1,
      sym_comment,
  [11613] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1026), 1,
      aux_sym_attribute_token2,
    STATE(398), 1,
      sym_comment,
  [11626] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1028), 1,
      aux_sym_line_token2,
    STATE(399), 1,
      sym_comment,
  [11639] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1030), 1,
      sym_color,
    STATE(400), 1,
      sym_comment,
  [11652] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1032), 1,
      aux_sym_attr_alias_token1,
    STATE(401), 1,
      sym_comment,
  [11665] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1034), 1,
      aux_sym_attr_alias_token1,
    STATE(402), 1,
      sym_comment,
  [11678] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1036), 1,
      aux_sym_attribute_token3,
    STATE(403), 1,
      sym_comment,
  [11691] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1038), 1,
      aux_sym_line_token2,
    STATE(404), 1,
      sym_comment,
  [11704] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1040), 1,
      aux_sym_comment_token2,
    STATE(405), 1,
      sym_comment,
  [11717] = 4,
    ACTIONS(290), 1,
      aux_sym_line_token2,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(406), 1,
      sym_comment,
  [11730] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1042), 1,
      aux_sym_sequence_diagram_token1,
    STATE(407), 1,
      sym_comment,
  [11743] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1044), 1,
      aux_sym_attribute_token3,
    STATE(408), 1,
      sym_comment,
  [11756] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1046), 1,
      anon_sym_RBRACK,
    STATE(409), 1,
      sym_comment,
  [11769] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1048), 1,
      aux_sym_sequence_diagram_token1,
    STATE(410), 1,
      sym_comment,
  [11782] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1050), 1,
      sym_color,
    STATE(411), 1,
      sym_comment,
  [11795] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1052), 1,
      aux_sym_attribute_token2,
    STATE(412), 1,
      sym_comment,
  [11808] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1054), 1,
      aux_sym_line_token2,
    STATE(413), 1,
      sym_comment,
  [11821] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1056), 1,
      aux_sym_attr_alias_token1,
    STATE(414), 1,
      sym_comment,
  [11834] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1058), 1,
      aux_sym_line_token2,
    STATE(415), 1,
      sym_comment,
  [11847] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1060), 1,
      sym_color,
    STATE(416), 1,
      sym_comment,
  [11860] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1062), 1,
      aux_sym_attr_alias_token1,
    STATE(417), 1,
      sym_comment,
  [11873] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(642), 1,
      aux_sym_line_token2,
    STATE(418), 1,
      sym_comment,
  [11886] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1064), 1,
      sym_label,
    STATE(419), 1,
      sym_comment,
  [11899] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1066), 1,
      aux_sym_attr_alias_token1,
    STATE(420), 1,
      sym_comment,
  [11912] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1068), 1,
      aux_sym_attr_alias_token1,
    STATE(421), 1,
      sym_comment,
  [11925] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1070), 1,
      aux_sym_attribute_token3,
    STATE(422), 1,
      sym_comment,
  [11938] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1072), 1,
      aux_sym_line_token2,
    STATE(423), 1,
      sym_comment,
  [11951] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1074), 1,
      aux_sym_line_token2,
    STATE(424), 1,
      sym_comment,
  [11964] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1076), 1,
      sym_label,
    STATE(425), 1,
      sym_comment,
  [11977] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(290), 1,
      aux_sym_attribute_token2,
    STATE(426), 1,
      sym_comment,
  [11990] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1078), 1,
      sym_label,
    STATE(427), 1,
      sym_comment,
  [12003] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1080), 1,
      sym_label,
    STATE(428), 1,
      sym_comment,
  [12016] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1082), 1,
      sym_label,
    STATE(429), 1,
      sym_comment,
  [12029] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1084), 1,
      sym_label,
    STATE(430), 1,
      sym_comment,
  [12042] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1086), 1,
      aux_sym_sequence_diagram_token1,
    STATE(431), 1,
      sym_comment,
  [12055] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1088), 1,
      sym_color,
    STATE(432), 1,
      sym_comment,
  [12068] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1090), 1,
      sym_label,
    STATE(433), 1,
      sym_comment,
  [12081] = 4,
    ACTIONS(286), 1,
      aux_sym_line_token2,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(434), 1,
      sym_comment,
  [12094] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1092), 1,
      sym_label,
    STATE(435), 1,
      sym_comment,
  [12107] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1094), 1,
      sym_label,
    STATE(436), 1,
      sym_comment,
  [12120] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(286), 1,
      aux_sym_attribute_token2,
    STATE(437), 1,
      sym_comment,
  [12133] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1096), 1,
      aux_sym_sequence_diagram_token1,
    STATE(438), 1,
      sym_comment,
  [12146] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1098), 1,
      sym_color,
    STATE(439), 1,
      sym_comment,
  [12159] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1100), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_comment,
  [12172] = 1,
    ACTIONS(1102), 1,
      ts_builtin_sym_end,
  [12176] = 1,
    ACTIONS(1104), 1,
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
  [SMALL_STATE(16)] = 1049,
  [SMALL_STATE(17)] = 1118,
  [SMALL_STATE(18)] = 1189,
  [SMALL_STATE(19)] = 1260,
  [SMALL_STATE(20)] = 1329,
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
  [SMALL_STATE(42)] = 2705,
  [SMALL_STATE(43)] = 2753,
  [SMALL_STATE(44)] = 2801,
  [SMALL_STATE(45)] = 2847,
  [SMALL_STATE(46)] = 2895,
  [SMALL_STATE(47)] = 2943,
  [SMALL_STATE(48)] = 2989,
  [SMALL_STATE(49)] = 3026,
  [SMALL_STATE(50)] = 3063,
  [SMALL_STATE(51)] = 3100,
  [SMALL_STATE(52)] = 3136,
  [SMALL_STATE(53)] = 3172,
  [SMALL_STATE(54)] = 3208,
  [SMALL_STATE(55)] = 3244,
  [SMALL_STATE(56)] = 3286,
  [SMALL_STATE(57)] = 3322,
  [SMALL_STATE(58)] = 3358,
  [SMALL_STATE(59)] = 3394,
  [SMALL_STATE(60)] = 3430,
  [SMALL_STATE(61)] = 3466,
  [SMALL_STATE(62)] = 3502,
  [SMALL_STATE(63)] = 3538,
  [SMALL_STATE(64)] = 3574,
  [SMALL_STATE(65)] = 3615,
  [SMALL_STATE(66)] = 3650,
  [SMALL_STATE(67)] = 3685,
  [SMALL_STATE(68)] = 3720,
  [SMALL_STATE(69)] = 3755,
  [SMALL_STATE(70)] = 3790,
  [SMALL_STATE(71)] = 3825,
  [SMALL_STATE(72)] = 3866,
  [SMALL_STATE(73)] = 3901,
  [SMALL_STATE(74)] = 3936,
  [SMALL_STATE(75)] = 3971,
  [SMALL_STATE(76)] = 4006,
  [SMALL_STATE(77)] = 4041,
  [SMALL_STATE(78)] = 4076,
  [SMALL_STATE(79)] = 4111,
  [SMALL_STATE(80)] = 4146,
  [SMALL_STATE(81)] = 4181,
  [SMALL_STATE(82)] = 4215,
  [SMALL_STATE(83)] = 4249,
  [SMALL_STATE(84)] = 4285,
  [SMALL_STATE(85)] = 4319,
  [SMALL_STATE(86)] = 4353,
  [SMALL_STATE(87)] = 4387,
  [SMALL_STATE(88)] = 4421,
  [SMALL_STATE(89)] = 4455,
  [SMALL_STATE(90)] = 4488,
  [SMALL_STATE(91)] = 4521,
  [SMALL_STATE(92)] = 4554,
  [SMALL_STATE(93)] = 4587,
  [SMALL_STATE(94)] = 4620,
  [SMALL_STATE(95)] = 4653,
  [SMALL_STATE(96)] = 4686,
  [SMALL_STATE(97)] = 4719,
  [SMALL_STATE(98)] = 4752,
  [SMALL_STATE(99)] = 4785,
  [SMALL_STATE(100)] = 4818,
  [SMALL_STATE(101)] = 4851,
  [SMALL_STATE(102)] = 4884,
  [SMALL_STATE(103)] = 4919,
  [SMALL_STATE(104)] = 4952,
  [SMALL_STATE(105)] = 4985,
  [SMALL_STATE(106)] = 5018,
  [SMALL_STATE(107)] = 5051,
  [SMALL_STATE(108)] = 5084,
  [SMALL_STATE(109)] = 5117,
  [SMALL_STATE(110)] = 5150,
  [SMALL_STATE(111)] = 5183,
  [SMALL_STATE(112)] = 5216,
  [SMALL_STATE(113)] = 5249,
  [SMALL_STATE(114)] = 5282,
  [SMALL_STATE(115)] = 5315,
  [SMALL_STATE(116)] = 5350,
  [SMALL_STATE(117)] = 5383,
  [SMALL_STATE(118)] = 5416,
  [SMALL_STATE(119)] = 5449,
  [SMALL_STATE(120)] = 5481,
  [SMALL_STATE(121)] = 5513,
  [SMALL_STATE(122)] = 5545,
  [SMALL_STATE(123)] = 5577,
  [SMALL_STATE(124)] = 5609,
  [SMALL_STATE(125)] = 5641,
  [SMALL_STATE(126)] = 5673,
  [SMALL_STATE(127)] = 5705,
  [SMALL_STATE(128)] = 5737,
  [SMALL_STATE(129)] = 5769,
  [SMALL_STATE(130)] = 5801,
  [SMALL_STATE(131)] = 5833,
  [SMALL_STATE(132)] = 5865,
  [SMALL_STATE(133)] = 5897,
  [SMALL_STATE(134)] = 5929,
  [SMALL_STATE(135)] = 5961,
  [SMALL_STATE(136)] = 5993,
  [SMALL_STATE(137)] = 6025,
  [SMALL_STATE(138)] = 6057,
  [SMALL_STATE(139)] = 6089,
  [SMALL_STATE(140)] = 6121,
  [SMALL_STATE(141)] = 6153,
  [SMALL_STATE(142)] = 6185,
  [SMALL_STATE(143)] = 6217,
  [SMALL_STATE(144)] = 6249,
  [SMALL_STATE(145)] = 6281,
  [SMALL_STATE(146)] = 6313,
  [SMALL_STATE(147)] = 6345,
  [SMALL_STATE(148)] = 6377,
  [SMALL_STATE(149)] = 6409,
  [SMALL_STATE(150)] = 6441,
  [SMALL_STATE(151)] = 6473,
  [SMALL_STATE(152)] = 6505,
  [SMALL_STATE(153)] = 6537,
  [SMALL_STATE(154)] = 6569,
  [SMALL_STATE(155)] = 6601,
  [SMALL_STATE(156)] = 6633,
  [SMALL_STATE(157)] = 6665,
  [SMALL_STATE(158)] = 6697,
  [SMALL_STATE(159)] = 6729,
  [SMALL_STATE(160)] = 6761,
  [SMALL_STATE(161)] = 6793,
  [SMALL_STATE(162)] = 6825,
  [SMALL_STATE(163)] = 6857,
  [SMALL_STATE(164)] = 6889,
  [SMALL_STATE(165)] = 6921,
  [SMALL_STATE(166)] = 6953,
  [SMALL_STATE(167)] = 6985,
  [SMALL_STATE(168)] = 7017,
  [SMALL_STATE(169)] = 7049,
  [SMALL_STATE(170)] = 7081,
  [SMALL_STATE(171)] = 7113,
  [SMALL_STATE(172)] = 7145,
  [SMALL_STATE(173)] = 7181,
  [SMALL_STATE(174)] = 7217,
  [SMALL_STATE(175)] = 7253,
  [SMALL_STATE(176)] = 7278,
  [SMALL_STATE(177)] = 7303,
  [SMALL_STATE(178)] = 7328,
  [SMALL_STATE(179)] = 7355,
  [SMALL_STATE(180)] = 7382,
  [SMALL_STATE(181)] = 7409,
  [SMALL_STATE(182)] = 7436,
  [SMALL_STATE(183)] = 7460,
  [SMALL_STATE(184)] = 7484,
  [SMALL_STATE(185)] = 7508,
  [SMALL_STATE(186)] = 7532,
  [SMALL_STATE(187)] = 7561,
  [SMALL_STATE(188)] = 7584,
  [SMALL_STATE(189)] = 7607,
  [SMALL_STATE(190)] = 7636,
  [SMALL_STATE(191)] = 7665,
  [SMALL_STATE(192)] = 7691,
  [SMALL_STATE(193)] = 7717,
  [SMALL_STATE(194)] = 7745,
  [SMALL_STATE(195)] = 7771,
  [SMALL_STATE(196)] = 7799,
  [SMALL_STATE(197)] = 7819,
  [SMALL_STATE(198)] = 7839,
  [SMALL_STATE(199)] = 7863,
  [SMALL_STATE(200)] = 7883,
  [SMALL_STATE(201)] = 7911,
  [SMALL_STATE(202)] = 7937,
  [SMALL_STATE(203)] = 7963,
  [SMALL_STATE(204)] = 7989,
  [SMALL_STATE(205)] = 8015,
  [SMALL_STATE(206)] = 8041,
  [SMALL_STATE(207)] = 8067,
  [SMALL_STATE(208)] = 8093,
  [SMALL_STATE(209)] = 8119,
  [SMALL_STATE(210)] = 8145,
  [SMALL_STATE(211)] = 8171,
  [SMALL_STATE(212)] = 8197,
  [SMALL_STATE(213)] = 8223,
  [SMALL_STATE(214)] = 8249,
  [SMALL_STATE(215)] = 8275,
  [SMALL_STATE(216)] = 8301,
  [SMALL_STATE(217)] = 8322,
  [SMALL_STATE(218)] = 8347,
  [SMALL_STATE(219)] = 8372,
  [SMALL_STATE(220)] = 8397,
  [SMALL_STATE(221)] = 8422,
  [SMALL_STATE(222)] = 8441,
  [SMALL_STATE(223)] = 8466,
  [SMALL_STATE(224)] = 8491,
  [SMALL_STATE(225)] = 8516,
  [SMALL_STATE(226)] = 8537,
  [SMALL_STATE(227)] = 8558,
  [SMALL_STATE(228)] = 8583,
  [SMALL_STATE(229)] = 8608,
  [SMALL_STATE(230)] = 8629,
  [SMALL_STATE(231)] = 8650,
  [SMALL_STATE(232)] = 8675,
  [SMALL_STATE(233)] = 8700,
  [SMALL_STATE(234)] = 8721,
  [SMALL_STATE(235)] = 8746,
  [SMALL_STATE(236)] = 8765,
  [SMALL_STATE(237)] = 8786,
  [SMALL_STATE(238)] = 8805,
  [SMALL_STATE(239)] = 8828,
  [SMALL_STATE(240)] = 8848,
  [SMALL_STATE(241)] = 8868,
  [SMALL_STATE(242)] = 8888,
  [SMALL_STATE(243)] = 8908,
  [SMALL_STATE(244)] = 8928,
  [SMALL_STATE(245)] = 8948,
  [SMALL_STATE(246)] = 8968,
  [SMALL_STATE(247)] = 8988,
  [SMALL_STATE(248)] = 9008,
  [SMALL_STATE(249)] = 9024,
  [SMALL_STATE(250)] = 9044,
  [SMALL_STATE(251)] = 9064,
  [SMALL_STATE(252)] = 9082,
  [SMALL_STATE(253)] = 9102,
  [SMALL_STATE(254)] = 9122,
  [SMALL_STATE(255)] = 9142,
  [SMALL_STATE(256)] = 9162,
  [SMALL_STATE(257)] = 9182,
  [SMALL_STATE(258)] = 9202,
  [SMALL_STATE(259)] = 9222,
  [SMALL_STATE(260)] = 9244,
  [SMALL_STATE(261)] = 9262,
  [SMALL_STATE(262)] = 9280,
  [SMALL_STATE(263)] = 9296,
  [SMALL_STATE(264)] = 9316,
  [SMALL_STATE(265)] = 9338,
  [SMALL_STATE(266)] = 9356,
  [SMALL_STATE(267)] = 9374,
  [SMALL_STATE(268)] = 9392,
  [SMALL_STATE(269)] = 9410,
  [SMALL_STATE(270)] = 9432,
  [SMALL_STATE(271)] = 9454,
  [SMALL_STATE(272)] = 9476,
  [SMALL_STATE(273)] = 9498,
  [SMALL_STATE(274)] = 9520,
  [SMALL_STATE(275)] = 9538,
  [SMALL_STATE(276)] = 9560,
  [SMALL_STATE(277)] = 9582,
  [SMALL_STATE(278)] = 9604,
  [SMALL_STATE(279)] = 9626,
  [SMALL_STATE(280)] = 9648,
  [SMALL_STATE(281)] = 9670,
  [SMALL_STATE(282)] = 9688,
  [SMALL_STATE(283)] = 9708,
  [SMALL_STATE(284)] = 9730,
  [SMALL_STATE(285)] = 9752,
  [SMALL_STATE(286)] = 9772,
  [SMALL_STATE(287)] = 9792,
  [SMALL_STATE(288)] = 9810,
  [SMALL_STATE(289)] = 9825,
  [SMALL_STATE(290)] = 9842,
  [SMALL_STATE(291)] = 9861,
  [SMALL_STATE(292)] = 9878,
  [SMALL_STATE(293)] = 9893,
  [SMALL_STATE(294)] = 9912,
  [SMALL_STATE(295)] = 9927,
  [SMALL_STATE(296)] = 9942,
  [SMALL_STATE(297)] = 9961,
  [SMALL_STATE(298)] = 9978,
  [SMALL_STATE(299)] = 9993,
  [SMALL_STATE(300)] = 10012,
  [SMALL_STATE(301)] = 10031,
  [SMALL_STATE(302)] = 10046,
  [SMALL_STATE(303)] = 10065,
  [SMALL_STATE(304)] = 10080,
  [SMALL_STATE(305)] = 10099,
  [SMALL_STATE(306)] = 10114,
  [SMALL_STATE(307)] = 10133,
  [SMALL_STATE(308)] = 10152,
  [SMALL_STATE(309)] = 10171,
  [SMALL_STATE(310)] = 10186,
  [SMALL_STATE(311)] = 10203,
  [SMALL_STATE(312)] = 10222,
  [SMALL_STATE(313)] = 10241,
  [SMALL_STATE(314)] = 10260,
  [SMALL_STATE(315)] = 10279,
  [SMALL_STATE(316)] = 10298,
  [SMALL_STATE(317)] = 10317,
  [SMALL_STATE(318)] = 10336,
  [SMALL_STATE(319)] = 10355,
  [SMALL_STATE(320)] = 10370,
  [SMALL_STATE(321)] = 10389,
  [SMALL_STATE(322)] = 10408,
  [SMALL_STATE(323)] = 10423,
  [SMALL_STATE(324)] = 10442,
  [SMALL_STATE(325)] = 10461,
  [SMALL_STATE(326)] = 10480,
  [SMALL_STATE(327)] = 10499,
  [SMALL_STATE(328)] = 10518,
  [SMALL_STATE(329)] = 10533,
  [SMALL_STATE(330)] = 10550,
  [SMALL_STATE(331)] = 10567,
  [SMALL_STATE(332)] = 10586,
  [SMALL_STATE(333)] = 10605,
  [SMALL_STATE(334)] = 10624,
  [SMALL_STATE(335)] = 10643,
  [SMALL_STATE(336)] = 10662,
  [SMALL_STATE(337)] = 10681,
  [SMALL_STATE(338)] = 10696,
  [SMALL_STATE(339)] = 10715,
  [SMALL_STATE(340)] = 10734,
  [SMALL_STATE(341)] = 10753,
  [SMALL_STATE(342)] = 10772,
  [SMALL_STATE(343)] = 10791,
  [SMALL_STATE(344)] = 10810,
  [SMALL_STATE(345)] = 10829,
  [SMALL_STATE(346)] = 10848,
  [SMALL_STATE(347)] = 10867,
  [SMALL_STATE(348)] = 10886,
  [SMALL_STATE(349)] = 10905,
  [SMALL_STATE(350)] = 10920,
  [SMALL_STATE(351)] = 10939,
  [SMALL_STATE(352)] = 10958,
  [SMALL_STATE(353)] = 10977,
  [SMALL_STATE(354)] = 10992,
  [SMALL_STATE(355)] = 11011,
  [SMALL_STATE(356)] = 11025,
  [SMALL_STATE(357)] = 11039,
  [SMALL_STATE(358)] = 11053,
  [SMALL_STATE(359)] = 11067,
  [SMALL_STATE(360)] = 11083,
  [SMALL_STATE(361)] = 11099,
  [SMALL_STATE(362)] = 11115,
  [SMALL_STATE(363)] = 11129,
  [SMALL_STATE(364)] = 11143,
  [SMALL_STATE(365)] = 11157,
  [SMALL_STATE(366)] = 11173,
  [SMALL_STATE(367)] = 11189,
  [SMALL_STATE(368)] = 11205,
  [SMALL_STATE(369)] = 11221,
  [SMALL_STATE(370)] = 11235,
  [SMALL_STATE(371)] = 11251,
  [SMALL_STATE(372)] = 11265,
  [SMALL_STATE(373)] = 11281,
  [SMALL_STATE(374)] = 11297,
  [SMALL_STATE(375)] = 11313,
  [SMALL_STATE(376)] = 11327,
  [SMALL_STATE(377)] = 11340,
  [SMALL_STATE(378)] = 11353,
  [SMALL_STATE(379)] = 11366,
  [SMALL_STATE(380)] = 11379,
  [SMALL_STATE(381)] = 11392,
  [SMALL_STATE(382)] = 11405,
  [SMALL_STATE(383)] = 11418,
  [SMALL_STATE(384)] = 11431,
  [SMALL_STATE(385)] = 11444,
  [SMALL_STATE(386)] = 11457,
  [SMALL_STATE(387)] = 11470,
  [SMALL_STATE(388)] = 11483,
  [SMALL_STATE(389)] = 11496,
  [SMALL_STATE(390)] = 11509,
  [SMALL_STATE(391)] = 11522,
  [SMALL_STATE(392)] = 11535,
  [SMALL_STATE(393)] = 11548,
  [SMALL_STATE(394)] = 11561,
  [SMALL_STATE(395)] = 11574,
  [SMALL_STATE(396)] = 11587,
  [SMALL_STATE(397)] = 11600,
  [SMALL_STATE(398)] = 11613,
  [SMALL_STATE(399)] = 11626,
  [SMALL_STATE(400)] = 11639,
  [SMALL_STATE(401)] = 11652,
  [SMALL_STATE(402)] = 11665,
  [SMALL_STATE(403)] = 11678,
  [SMALL_STATE(404)] = 11691,
  [SMALL_STATE(405)] = 11704,
  [SMALL_STATE(406)] = 11717,
  [SMALL_STATE(407)] = 11730,
  [SMALL_STATE(408)] = 11743,
  [SMALL_STATE(409)] = 11756,
  [SMALL_STATE(410)] = 11769,
  [SMALL_STATE(411)] = 11782,
  [SMALL_STATE(412)] = 11795,
  [SMALL_STATE(413)] = 11808,
  [SMALL_STATE(414)] = 11821,
  [SMALL_STATE(415)] = 11834,
  [SMALL_STATE(416)] = 11847,
  [SMALL_STATE(417)] = 11860,
  [SMALL_STATE(418)] = 11873,
  [SMALL_STATE(419)] = 11886,
  [SMALL_STATE(420)] = 11899,
  [SMALL_STATE(421)] = 11912,
  [SMALL_STATE(422)] = 11925,
  [SMALL_STATE(423)] = 11938,
  [SMALL_STATE(424)] = 11951,
  [SMALL_STATE(425)] = 11964,
  [SMALL_STATE(426)] = 11977,
  [SMALL_STATE(427)] = 11990,
  [SMALL_STATE(428)] = 12003,
  [SMALL_STATE(429)] = 12016,
  [SMALL_STATE(430)] = 12029,
  [SMALL_STATE(431)] = 12042,
  [SMALL_STATE(432)] = 12055,
  [SMALL_STATE(433)] = 12068,
  [SMALL_STATE(434)] = 12081,
  [SMALL_STATE(435)] = 12094,
  [SMALL_STATE(436)] = 12107,
  [SMALL_STATE(437)] = 12120,
  [SMALL_STATE(438)] = 12133,
  [SMALL_STATE(439)] = 12146,
  [SMALL_STATE(440)] = 12159,
  [SMALL_STATE(441)] = 12172,
  [SMALL_STATE(442)] = 12176,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(416),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(402),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(422),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(379),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(401),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(408),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(400),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(414),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(403),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 14),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 14),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 11),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 11),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 4, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 4, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 5, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 5, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 5, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 5, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 6, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 6, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_label, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_label, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [728] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 2, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [768] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [825] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(357),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 1, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [998] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
