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
#define STATE_COUNT 441
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 14
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  aux_sym_label_token1 = 3,
  anon_sym_LBRACK = 4,
  aux_sym_custom_label_token1 = 5,
  anon_sym_RBRACK = 6,
  anon_sym_alt = 7,
  anon_sym_else = 8,
  anon_sym_end = 9,
  aux_sym_line_token1 = 10,
  aux_sym_line_token2 = 11,
  anon_sym_note = 12,
  anon_sym_left = 13,
  anon_sym_right = 14,
  anon_sym_leftover = 15,
  anon_sym_rightover = 16,
  anon_sym_over = 17,
  anon_sym_POUND = 18,
  anon_sym_COLON = 19,
  anon_sym_endnote = 20,
  anon_sym_loop = 21,
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
  sym_label = 98,
  sym_custom_label = 99,
  sym_alt_block = 100,
  sym_line = 101,
  sym_note_block = 102,
  sym_loop_block = 103,
  sym_group_block = 104,
  sym_skinparam = 105,
  sym_boolean_literal = 106,
  sym_attribute = 107,
  sym_multiline = 108,
  sym_attr_alias = 109,
  sym_attr_order = 110,
  sym_string = 111,
  sym_escape_char = 112,
  sym_participant_name = 113,
  sym_sequence_diagram = 114,
  sym_connector = 115,
  sym_json = 116,
  sym_yaml = 117,
  sym_ebnf = 118,
  sym_regex = 119,
  sym_ditaa = 120,
  sym_gantt = 121,
  sym_chronology = 122,
  sym_mindmap = 123,
  sym_wbs = 124,
  sym_chen = 125,
  sym_comment = 126,
  aux_sym_uml_repeat1 = 127,
  aux_sym_alt_block_repeat1 = 128,
  aux_sym_note_block_repeat1 = 129,
  aux_sym_attribute_repeat1 = 130,
  aux_sym_attribute_repeat2 = 131,
  aux_sym_multiline_repeat1 = 132,
  aux_sym_string_repeat1 = 133,
  aux_sym_json_repeat1 = 134,
  aux_sym_json_repeat2 = 135,
  alias_sym_chen_data = 136,
  alias_sym_chronology_data = 137,
  alias_sym_ditaa_data = 138,
  alias_sym_ebnf_data = 139,
  alias_sym_gantt_data = 140,
  alias_sym_json_data = 141,
  alias_sym_left = 142,
  alias_sym_mindmap_data = 143,
  alias_sym_new_name = 144,
  alias_sym_regex_data = 145,
  alias_sym_right = 146,
  alias_sym_value = 147,
  alias_sym_wbs_data = 148,
  alias_sym_yaml_data = 149,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_custom_label_token1] = "content",
  [anon_sym_RBRACK] = "]",
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
  [sym_label] = "label",
  [sym_custom_label] = "custom_label",
  [sym_alt_block] = "alt_block",
  [sym_line] = "line",
  [sym_note_block] = "note_block",
  [sym_loop_block] = "loop_block",
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
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_custom_label_token1] = aux_sym_custom_label_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_label] = sym_label,
  [sym_custom_label] = sym_custom_label,
  [sym_alt_block] = sym_alt_block,
  [sym_line] = sym_line,
  [sym_note_block] = sym_note_block,
  [sym_loop_block] = sym_loop_block,
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
  [aux_sym_label_token1] = {
    .visible = false,
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_label] = {
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
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 10,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 13,
  [20] = 12,
  [21] = 16,
  [22] = 17,
  [23] = 16,
  [24] = 10,
  [25] = 13,
  [26] = 17,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 32,
  [36] = 31,
  [37] = 32,
  [38] = 30,
  [39] = 31,
  [40] = 30,
  [41] = 33,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 52,
  [53] = 44,
  [54] = 44,
  [55] = 43,
  [56] = 56,
  [57] = 42,
  [58] = 45,
  [59] = 48,
  [60] = 56,
  [61] = 52,
  [62] = 47,
  [63] = 50,
  [64] = 49,
  [65] = 45,
  [66] = 56,
  [67] = 48,
  [68] = 47,
  [69] = 43,
  [70] = 49,
  [71] = 52,
  [72] = 42,
  [73] = 44,
  [74] = 74,
  [75] = 50,
  [76] = 42,
  [77] = 44,
  [78] = 78,
  [79] = 43,
  [80] = 74,
  [81] = 44,
  [82] = 56,
  [83] = 43,
  [84] = 42,
  [85] = 85,
  [86] = 56,
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
  [97] = 97,
  [98] = 78,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 78,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 56,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 114,
  [117] = 93,
  [118] = 115,
  [119] = 105,
  [120] = 87,
  [121] = 104,
  [122] = 90,
  [123] = 87,
  [124] = 108,
  [125] = 91,
  [126] = 92,
  [127] = 94,
  [128] = 95,
  [129] = 96,
  [130] = 97,
  [131] = 99,
  [132] = 100,
  [133] = 101,
  [134] = 91,
  [135] = 104,
  [136] = 109,
  [137] = 108,
  [138] = 109,
  [139] = 110,
  [140] = 111,
  [141] = 114,
  [142] = 115,
  [143] = 89,
  [144] = 113,
  [145] = 92,
  [146] = 94,
  [147] = 88,
  [148] = 103,
  [149] = 107,
  [150] = 112,
  [151] = 113,
  [152] = 85,
  [153] = 110,
  [154] = 111,
  [155] = 90,
  [156] = 88,
  [157] = 103,
  [158] = 95,
  [159] = 85,
  [160] = 107,
  [161] = 112,
  [162] = 96,
  [163] = 97,
  [164] = 99,
  [165] = 100,
  [166] = 101,
  [167] = 105,
  [168] = 168,
  [169] = 168,
  [170] = 168,
  [171] = 43,
  [172] = 42,
  [173] = 44,
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
  [184] = 184,
  [185] = 182,
  [186] = 182,
  [187] = 187,
  [188] = 187,
  [189] = 189,
  [190] = 189,
  [191] = 191,
  [192] = 191,
  [193] = 187,
  [194] = 194,
  [195] = 189,
  [196] = 191,
  [197] = 197,
  [198] = 187,
  [199] = 199,
  [200] = 200,
  [201] = 189,
  [202] = 187,
  [203] = 189,
  [204] = 189,
  [205] = 187,
  [206] = 189,
  [207] = 187,
  [208] = 189,
  [209] = 187,
  [210] = 189,
  [211] = 187,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 213,
  [216] = 213,
  [217] = 217,
  [218] = 218,
  [219] = 217,
  [220] = 218,
  [221] = 217,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 223,
  [230] = 218,
  [231] = 224,
  [232] = 232,
  [233] = 224,
  [234] = 223,
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
  [260] = 235,
  [261] = 250,
  [262] = 250,
  [263] = 263,
  [264] = 250,
  [265] = 265,
  [266] = 250,
  [267] = 250,
  [268] = 250,
  [269] = 269,
  [270] = 235,
  [271] = 271,
  [272] = 271,
  [273] = 237,
  [274] = 265,
  [275] = 250,
  [276] = 269,
  [277] = 271,
  [278] = 237,
  [279] = 265,
  [280] = 250,
  [281] = 281,
  [282] = 269,
  [283] = 250,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 284,
  [294] = 294,
  [295] = 247,
  [296] = 296,
  [297] = 294,
  [298] = 298,
  [299] = 294,
  [300] = 294,
  [301] = 301,
  [302] = 294,
  [303] = 294,
  [304] = 294,
  [305] = 305,
  [306] = 306,
  [307] = 294,
  [308] = 294,
  [309] = 309,
  [310] = 292,
  [311] = 311,
  [312] = 312,
  [313] = 311,
  [314] = 314,
  [315] = 286,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 292,
  [325] = 284,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 311,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 286,
  [335] = 294,
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
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 353,
  [361] = 356,
  [362] = 362,
  [363] = 85,
  [364] = 364,
  [365] = 353,
  [366] = 366,
  [367] = 367,
  [368] = 356,
  [369] = 369,
  [370] = 370,
  [371] = 352,
  [372] = 372,
  [373] = 359,
  [374] = 369,
  [375] = 370,
  [376] = 352,
  [377] = 377,
  [378] = 359,
  [379] = 379,
  [380] = 369,
  [381] = 370,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 382,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 42,
  [393] = 393,
  [394] = 383,
  [395] = 384,
  [396] = 396,
  [397] = 397,
  [398] = 391,
  [399] = 396,
  [400] = 44,
  [401] = 397,
  [402] = 44,
  [403] = 403,
  [404] = 384,
  [405] = 382,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 390,
  [410] = 391,
  [411] = 42,
  [412] = 385,
  [413] = 391,
  [414] = 403,
  [415] = 415,
  [416] = 391,
  [417] = 403,
  [418] = 406,
  [419] = 419,
  [420] = 390,
  [421] = 421,
  [422] = 422,
  [423] = 396,
  [424] = 385,
  [425] = 406,
  [426] = 426,
  [427] = 427,
  [428] = 391,
  [429] = 422,
  [430] = 389,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 390,
  [436] = 388,
  [437] = 389,
  [438] = 383,
  [439] = 439,
  [440] = 440,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        '"', 835,
        '#', 712,
        '\'', 911,
        '-', 851,
        '/', 861,
        ':', 714,
        '<', 865,
        '>', 852,
        '@', 869,
        '[', 680,
        '\\', 842,
        ']', 684,
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
      if (lookahead == '\n') ADVANCE(703);
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
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(911);
      if (lookahead == '/') ADVANCE(846);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0) ADVANCE(844);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(919);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(912);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(918);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(921);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 835,
        '#', 712,
        '\'', 911,
        '/', 35,
        '@', 115,
        '[', 680,
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
        '#', 712,
        '\'', 911,
        '/', 35,
        '[', 680,
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
        '#', 712,
        '\'', 911,
        '/', 35,
        '[', 680,
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
        ':', 714,
        '<', 865,
        '>', 852,
        '@', 233,
        '[', 680,
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
        '/', 861,
        ':', 714,
        '>', 852,
        '@', 115,
        '[', 20,
        '\\', 843,
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
        ':', 714,
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
        ':', 714,
        '[', 680,
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
        ':', 714,
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
        ':', 714,
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
      if (lookahead == ']') ADVANCE(684);
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
      if (lookahead == '\'') ADVANCE(914);
      if (lookahead == '/') ADVANCE(678);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0) ADVANCE(679);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(913);
      if (lookahead == '/') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(922);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(915);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(849);
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
      if (lookahead == 'd') ADVANCE(688);
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
      if (lookahead == 'e') ADVANCE(686);
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
      if (lookahead == 'e') ADVANCE(181);
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
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(79);
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
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(710);
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
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(707);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(708);
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
      if (lookahead == '\n') ADVANCE(703);
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
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\'') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(679);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(917);
      if (lookahead == '/') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(683);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead == '\'') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_custom_label_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_line_token1);
      ADVANCE_MAP(
        '#', 713,
        '\'', 916,
        '/', 695,
        ':', 715,
        'e', 698,
        '\t', 691,
        0x0b, 691,
        '\f', 691,
        ' ', 691,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(702);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(916);
      if (lookahead == '/') ADVANCE(695);
      if (lookahead == ':') ADVANCE(715);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(692);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(702);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(916);
      if (lookahead == '/') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(693);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(702);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(916);
      if (lookahead == '/') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(702);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\'') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'n') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_line_token2);
      if (lookahead == '\n') ADVANCE(703);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == ' ') ADVANCE(194);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_leftover);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_rightover);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_endnote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
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
      if (lookahead == 'd') ADVANCE(689);
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
      if (lookahead == 'e') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(704);
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
      if (lookahead == 'p') ADVANCE(717);
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
      if (lookahead == 't') ADVANCE(685);
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
      if (lookahead == 'e') ADVANCE(180);
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
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(38);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(679);
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
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(683);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(919);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(912);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(38);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?' &&
          lookahead != '[') ADVANCE(679);
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
          lookahead != '\r') ADVANCE(702);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(683);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(38);
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
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 21},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 674},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 674},
  [186] = {.lex_state = 674},
  [187] = {.lex_state = 19},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 19},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 691},
  [192] = {.lex_state = 691},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 691},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 10},
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
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 24},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 24},
  [216] = {.lex_state = 24},
  [217] = {.lex_state = 692},
  [218] = {.lex_state = 24},
  [219] = {.lex_state = 692},
  [220] = {.lex_state = 24},
  [221] = {.lex_state = 692},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 674},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 24},
  [229] = {.lex_state = 674},
  [230] = {.lex_state = 24},
  [231] = {.lex_state = 22},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 22},
  [234] = {.lex_state = 674},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 25},
  [237] = {.lex_state = 693},
  [238] = {.lex_state = 26},
  [239] = {.lex_state = 27},
  [240] = {.lex_state = 28},
  [241] = {.lex_state = 29},
  [242] = {.lex_state = 30},
  [243] = {.lex_state = 31},
  [244] = {.lex_state = 674},
  [245] = {.lex_state = 25},
  [246] = {.lex_state = 26},
  [247] = {.lex_state = 19},
  [248] = {.lex_state = 27},
  [249] = {.lex_state = 28},
  [250] = {.lex_state = 25},
  [251] = {.lex_state = 29},
  [252] = {.lex_state = 32},
  [253] = {.lex_state = 33},
  [254] = {.lex_state = 693},
  [255] = {.lex_state = 34},
  [256] = {.lex_state = 32},
  [257] = {.lex_state = 33},
  [258] = {.lex_state = 34},
  [259] = {.lex_state = 31},
  [260] = {.lex_state = 18},
  [261] = {.lex_state = 27},
  [262] = {.lex_state = 28},
  [263] = {.lex_state = 19},
  [264] = {.lex_state = 29},
  [265] = {.lex_state = 693},
  [266] = {.lex_state = 32},
  [267] = {.lex_state = 33},
  [268] = {.lex_state = 34},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 18},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 693},
  [274] = {.lex_state = 693},
  [275] = {.lex_state = 30},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 693},
  [279] = {.lex_state = 693},
  [280] = {.lex_state = 31},
  [281] = {.lex_state = 30},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 26},
  [284] = {.lex_state = 21},
  [285] = {.lex_state = 674},
  [286] = {.lex_state = 21},
  [287] = {.lex_state = 21},
  [288] = {.lex_state = 674},
  [289] = {.lex_state = 674},
  [290] = {.lex_state = 674},
  [291] = {.lex_state = 24},
  [292] = {.lex_state = 21},
  [293] = {.lex_state = 21},
  [294] = {.lex_state = 26},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 674},
  [297] = {.lex_state = 27},
  [298] = {.lex_state = 674},
  [299] = {.lex_state = 28},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 674},
  [302] = {.lex_state = 29},
  [303] = {.lex_state = 25},
  [304] = {.lex_state = 32},
  [305] = {.lex_state = 674},
  [306] = {.lex_state = 674},
  [307] = {.lex_state = 33},
  [308] = {.lex_state = 34},
  [309] = {.lex_state = 674},
  [310] = {.lex_state = 21},
  [311] = {.lex_state = 21},
  [312] = {.lex_state = 674},
  [313] = {.lex_state = 21},
  [314] = {.lex_state = 674},
  [315] = {.lex_state = 21},
  [316] = {.lex_state = 674},
  [317] = {.lex_state = 674},
  [318] = {.lex_state = 674},
  [319] = {.lex_state = 674},
  [320] = {.lex_state = 674},
  [321] = {.lex_state = 674},
  [322] = {.lex_state = 674},
  [323] = {.lex_state = 674},
  [324] = {.lex_state = 21},
  [325] = {.lex_state = 21},
  [326] = {.lex_state = 674},
  [327] = {.lex_state = 674},
  [328] = {.lex_state = 674},
  [329] = {.lex_state = 21},
  [330] = {.lex_state = 674},
  [331] = {.lex_state = 674},
  [332] = {.lex_state = 674},
  [333] = {.lex_state = 674},
  [334] = {.lex_state = 21},
  [335] = {.lex_state = 31},
  [336] = {.lex_state = 674},
  [337] = {.lex_state = 674},
  [338] = {.lex_state = 674},
  [339] = {.lex_state = 674},
  [340] = {.lex_state = 674},
  [341] = {.lex_state = 674},
  [342] = {.lex_state = 674},
  [343] = {.lex_state = 674},
  [344] = {.lex_state = 674},
  [345] = {.lex_state = 674},
  [346] = {.lex_state = 674},
  [347] = {.lex_state = 674},
  [348] = {.lex_state = 674},
  [349] = {.lex_state = 674},
  [350] = {.lex_state = 674},
  [351] = {.lex_state = 11},
  [352] = {.lex_state = 21},
  [353] = {.lex_state = 694},
  [354] = {.lex_state = 693},
  [355] = {.lex_state = 674},
  [356] = {.lex_state = 694},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 36},
  [360] = {.lex_state = 694},
  [361] = {.lex_state = 694},
  [362] = {.lex_state = 11},
  [363] = {.lex_state = 693},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 694},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 11},
  [368] = {.lex_state = 694},
  [369] = {.lex_state = 36},
  [370] = {.lex_state = 36},
  [371] = {.lex_state = 21},
  [372] = {.lex_state = 11},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 36},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 21},
  [377] = {.lex_state = 36},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 36},
  [381] = {.lex_state = 36},
  [382] = {.lex_state = 22},
  [383] = {.lex_state = 23},
  [384] = {.lex_state = 674},
  [385] = {.lex_state = 674},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 22},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 22},
  [390] = {.lex_state = 674},
  [391] = {.lex_state = 11},
  [392] = {.lex_state = 23},
  [393] = {.lex_state = 37},
  [394] = {.lex_state = 23},
  [395] = {.lex_state = 674},
  [396] = {.lex_state = 21},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 11},
  [399] = {.lex_state = 21},
  [400] = {.lex_state = 674},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 23},
  [403] = {.lex_state = 40},
  [404] = {.lex_state = 674},
  [405] = {.lex_state = 22},
  [406] = {.lex_state = 40},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 674},
  [410] = {.lex_state = 11},
  [411] = {.lex_state = 674},
  [412] = {.lex_state = 674},
  [413] = {.lex_state = 11},
  [414] = {.lex_state = 40},
  [415] = {.lex_state = 22},
  [416] = {.lex_state = 11},
  [417] = {.lex_state = 40},
  [418] = {.lex_state = 40},
  [419] = {.lex_state = 22},
  [420] = {.lex_state = 674},
  [421] = {.lex_state = 22},
  [422] = {.lex_state = 681},
  [423] = {.lex_state = 21},
  [424] = {.lex_state = 674},
  [425] = {.lex_state = 40},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 11},
  [429] = {.lex_state = 681},
  [430] = {.lex_state = 22},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 3},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 674},
  [436] = {.lex_state = 2},
  [437] = {.lex_state = 22},
  [438] = {.lex_state = 23},
  [439] = {(TSStateId)(-1)},
  [440] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_diagram] = STATE(427),
    [sym_uml] = STATE(434),
    [sym_json] = STATE(434),
    [sym_yaml] = STATE(434),
    [sym_ebnf] = STATE(434),
    [sym_regex] = STATE(434),
    [sym_ditaa] = STATE(434),
    [sym_gantt] = STATE(434),
    [sym_chronology] = STATE(434),
    [sym_mindmap] = STATE(434),
    [sym_wbs] = STATE(434),
    [sym_chen] = STATE(434),
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
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(315), 1,
      aux_sym_alt_block_repeat1,
    STATE(104), 7,
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
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(334), 1,
      aux_sym_alt_block_repeat1,
    STATE(104), 7,
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
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(286), 1,
      aux_sym_alt_block_repeat1,
    STATE(104), 7,
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
    STATE(4), 1,
      aux_sym_uml_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(311), 1,
      aux_sym_alt_block_repeat1,
    STATE(104), 7,
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
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(2), 1,
      aux_sym_uml_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(313), 1,
      aux_sym_alt_block_repeat1,
    STATE(104), 7,
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
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(3), 1,
      aux_sym_uml_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(329), 1,
      aux_sym_alt_block_repeat1,
    STATE(104), 7,
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
  [462] = 19,
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
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_uml_repeat1,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    ACTIONS(63), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(104), 7,
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
  [534] = 19,
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
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_uml_repeat1,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    ACTIONS(65), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(104), 7,
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
  [606] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_alt,
    ACTIONS(72), 1,
      anon_sym_note,
    ACTIONS(75), 1,
      anon_sym_loop,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(81), 1,
      anon_sym_skinparam,
    ACTIONS(84), 1,
      anon_sym_autonumber,
    ACTIONS(87), 1,
      anon_sym_autonumberstop,
    ACTIONS(93), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_expression,
    STATE(170), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    ACTIONS(70), 2,
      anon_sym_else,
      anon_sym_end,
    STATE(10), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(104), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(90), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [676] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_ATenduml,
    ACTIONS(101), 1,
      anon_sym_alt,
    ACTIONS(103), 1,
      anon_sym_note,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(107), 1,
      anon_sym_group,
    ACTIONS(109), 1,
      anon_sym_skinparam,
    ACTIONS(111), 1,
      anon_sym_autonumber,
    ACTIONS(113), 1,
      anon_sym_autonumberstop,
    STATE(11), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_uml_repeat1,
    STATE(123), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(135), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(115), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [747] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(119), 1,
      anon_sym_end,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [818] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(13), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [889] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(137), 1,
      anon_sym_end,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [960] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(70), 1,
      anon_sym_end,
    ACTIONS(93), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_alt,
    ACTIONS(142), 1,
      anon_sym_note,
    ACTIONS(145), 1,
      anon_sym_loop,
    ACTIONS(148), 1,
      anon_sym_group,
    ACTIONS(151), 1,
      anon_sym_skinparam,
    ACTIONS(154), 1,
      anon_sym_autonumber,
    ACTIONS(157), 1,
      anon_sym_autonumberstop,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(15), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(160), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1029] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_uml_repeat1,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1100] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(165), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_uml_repeat1,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1171] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_alt,
    ACTIONS(103), 1,
      anon_sym_note,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(107), 1,
      anon_sym_group,
    ACTIONS(109), 1,
      anon_sym_skinparam,
    ACTIONS(111), 1,
      anon_sym_autonumber,
    ACTIONS(113), 1,
      anon_sym_autonumberstop,
    ACTIONS(167), 1,
      anon_sym_ATenduml,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(123), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(135), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(115), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1242] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1313] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1384] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(173), 1,
      anon_sym_end,
    STATE(21), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_uml_repeat1,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1455] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_uml_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1526] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(177), 1,
      anon_sym_end,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1597] = 18,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(93), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_ATenduml,
    ACTIONS(181), 1,
      anon_sym_alt,
    ACTIONS(184), 1,
      anon_sym_note,
    ACTIONS(187), 1,
      anon_sym_loop,
    ACTIONS(190), 1,
      anon_sym_group,
    ACTIONS(193), 1,
      anon_sym_skinparam,
    ACTIONS(196), 1,
      anon_sym_autonumber,
    ACTIONS(199), 1,
      anon_sym_autonumberstop,
    STATE(123), 1,
      sym_expression,
    STATE(168), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(24), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(135), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(202), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1666] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(15), 1,
      aux_sym_uml_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1737] = 19,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_alt,
    ACTIONS(121), 1,
      anon_sym_note,
    ACTIONS(123), 1,
      anon_sym_loop,
    ACTIONS(125), 1,
      anon_sym_group,
    ACTIONS(127), 1,
      anon_sym_skinparam,
    ACTIONS(129), 1,
      anon_sym_autonumber,
    ACTIONS(131), 1,
      anon_sym_autonumberstop,
    ACTIONS(207), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(120), 1,
      sym_expression,
    STATE(169), 1,
      sym_participant_name,
    STATE(171), 1,
      sym_string,
    STATE(121), 7,
      sym_alt_block,
      sym_note_block,
      sym_loop_block,
      sym_group_block,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
    ACTIONS(133), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [1808] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_as,
    ACTIONS(219), 1,
      anon_sym_order,
    STATE(27), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_attribute_repeat2,
    STATE(31), 1,
      sym_multiline,
    ACTIONS(215), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(211), 17,
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
  [1863] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_as,
    ACTIONS(227), 1,
      anon_sym_order,
    STATE(28), 1,
      sym_comment,
    STATE(39), 1,
      sym_multiline,
    STATE(40), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(215), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(211), 16,
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
  [1917] = 12,
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
    STATE(29), 1,
      sym_comment,
    STATE(36), 1,
      sym_multiline,
    STATE(38), 1,
      aux_sym_attribute_repeat2,
    STATE(75), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(215), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(211), 15,
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
  [1971] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_as,
    ACTIONS(219), 1,
      anon_sym_order,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(237), 17,
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
  [2020] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_as,
    ACTIONS(219), 1,
      anon_sym_order,
    STATE(31), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(237), 17,
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
  [2069] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      anon_sym_as,
    ACTIONS(251), 1,
      anon_sym_order,
    ACTIONS(246), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(32), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(241), 17,
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
  [2116] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_as,
    ACTIONS(219), 1,
      anon_sym_order,
    STATE(32), 1,
      aux_sym_attribute_repeat2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(254), 17,
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
  [2165] = 10,
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
    STATE(34), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_attribute_repeat2,
    STATE(75), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(256), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(254), 15,
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
  [2213] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_as,
    ACTIONS(264), 1,
      anon_sym_order,
    STATE(35), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(75), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(246), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(241), 15,
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
  [2259] = 10,
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
    STATE(34), 1,
      aux_sym_attribute_repeat2,
    STATE(36), 1,
      sym_comment,
    STATE(75), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(239), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 15,
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
  [2307] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      anon_sym_as,
    ACTIONS(273), 1,
      anon_sym_order,
    ACTIONS(246), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(37), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(241), 16,
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
  [2353] = 10,
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
    STATE(35), 1,
      aux_sym_attribute_repeat2,
    STATE(38), 1,
      sym_comment,
    STATE(75), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(239), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 15,
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
  [2401] = 10,
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
    STATE(39), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(237), 16,
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
  [2449] = 10,
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
      aux_sym_attribute_repeat2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(237), 16,
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
  [2497] = 10,
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
      aux_sym_attribute_repeat2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(63), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(254), 16,
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
  [2545] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(278), 19,
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
  [2582] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(282), 19,
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
  [2619] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 19,
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
  [2656] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_POUND,
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
  [2692] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(276), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(278), 17,
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
  [2728] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_POUND,
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
  [2764] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(48), 1,
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
  [2800] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      anon_sym_as,
    STATE(49), 1,
      sym_comment,
    STATE(78), 1,
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
  [2842] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
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
  [2878] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(280), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(282), 17,
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
  [2914] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(241), 19,
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
  [2950] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(284), 5,
      anon_sym_ATenduml,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 17,
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
  [2986] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 18,
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
  [3022] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(282), 18,
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
  [3058] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
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
  [3094] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(278), 18,
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
  [3130] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
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
  [3165] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(59), 1,
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
  [3200] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(60), 1,
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
  [3235] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(61), 1,
      sym_comment,
    ACTIONS(246), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(241), 17,
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
  [3270] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_ATenduml,
      anon_sym_POUND,
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
  [3305] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
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
  [3340] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(318), 1,
      anon_sym_as,
    STATE(64), 1,
      sym_comment,
    STATE(98), 1,
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
  [3381] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_POUND,
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
  [3416] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
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
  [3451] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
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
  [3486] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_POUND,
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
  [3521] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(282), 18,
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
  [3556] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      anon_sym_as,
    STATE(70), 1,
      sym_comment,
    STATE(102), 1,
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
  [3597] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_POUND,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(241), 18,
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
  [3632] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(278), 18,
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
  [3667] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 18,
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
  [3702] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      sym_comment,
    STATE(89), 1,
      sym_custom_label,
    ACTIONS(328), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(326), 17,
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
  [3741] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
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
  [3776] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(278), 16,
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
  [3810] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 17,
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
  [3844] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(330), 17,
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
  [3880] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(282), 16,
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
  [3914] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_comment,
    STATE(143), 1,
      sym_custom_label,
    ACTIONS(328), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(326), 16,
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
  [3952] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(286), 16,
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
  [3986] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 17,
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
  [4020] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(282), 17,
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
  [4054] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(278), 17,
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
  [4088] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
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
  [4121] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 15,
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
  [4154] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
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
  [4187] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
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
  [4220] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
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
  [4253] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(211), 17,
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
  [4286] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
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
  [4319] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
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
  [4352] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
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
  [4385] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(94), 1,
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
  [4418] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(95), 1,
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
  [4451] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(96), 1,
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
  [4484] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(97), 1,
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
  [4517] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(330), 16,
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
  [4552] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
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
  [4585] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(100), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 17,
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
  [4618] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(101), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 17,
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
  [4651] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(388), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym_comment,
    ACTIONS(334), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(330), 15,
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
  [4686] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(103), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(390), 17,
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
    STATE(104), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(394), 17,
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
    STATE(105), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(398), 17,
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
    STATE(106), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_COLON,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(312), 16,
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
  [4818] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(107), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(402), 17,
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
    STATE(108), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(406), 17,
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
  [4884] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(109), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(410), 17,
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
  [4917] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(110), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(414), 17,
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
  [4950] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(111), 1,
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
  [4983] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(112), 1,
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
  [5016] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(426), 17,
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
  [5049] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(114), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(254), 17,
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
  [5082] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(115), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(254), 17,
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
  [5115] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(116), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(254), 15,
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
  [5147] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(117), 1,
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
  [5179] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(118), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(254), 15,
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
  [5211] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(398), 16,
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
  [5243] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(120), 1,
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
  [5275] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(121), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(394), 16,
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
  [5307] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(211), 16,
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
  [5339] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(123), 1,
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
  [5371] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(124), 1,
      sym_comment,
    ACTIONS(408), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(406), 15,
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
  [5403] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(125), 1,
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
  [5435] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(126), 1,
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
  [5467] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(127), 1,
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
  [5499] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(128), 1,
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
  [5531] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(129), 1,
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
  [5563] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(130), 1,
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
  [5595] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
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
  [5627] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(132), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 16,
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
  [5659] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(133), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 16,
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
  [5691] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(134), 1,
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
  [5723] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(135), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(394), 15,
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
  [5755] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(410), 15,
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
  [5787] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(137), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(406), 16,
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
  [5819] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(138), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(410), 16,
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
  [5851] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(139), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(414), 16,
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
  [5883] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(140), 1,
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
  [5915] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(141), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(254), 16,
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
  [5947] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(142), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(254), 16,
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
  [5979] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(143), 1,
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
  [6011] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(144), 1,
      sym_comment,
    ACTIONS(428), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(426), 15,
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
  [6043] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(145), 1,
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
  [6075] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
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
  [6107] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(147), 1,
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
  [6139] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(148), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(390), 16,
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
  [6171] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(149), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(402), 16,
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
  [6203] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(150), 1,
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
  [6235] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(151), 1,
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
  [6267] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(152), 1,
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
  [6299] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(416), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(414), 15,
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
  [6331] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(154), 1,
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
  [6363] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(211), 15,
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
  [6395] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(156), 1,
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
  [6427] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(392), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(390), 15,
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
  [6459] = 5,
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
  [6491] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(159), 1,
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
  [6523] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(160), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(402), 15,
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
  [6555] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
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
  [6587] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(162), 1,
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
  [6619] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(163), 1,
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
  [6651] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
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
  [6683] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(165), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 15,
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
  [6715] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(166), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(237), 15,
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
  [6747] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(167), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(398), 15,
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
  [6779] = 10,
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
    STATE(168), 1,
      sym_comment,
    STATE(271), 1,
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
  [6815] = 10,
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
    STATE(169), 1,
      sym_comment,
    STATE(277), 1,
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
  [6851] = 10,
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
    STATE(170), 1,
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
  [6887] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(171), 1,
      sym_comment,
    ACTIONS(282), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(280), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [6912] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(276), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [6937] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(173), 1,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_BSLASH,
      anon_sym_DASH,
      anon_sym_x,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(284), 6,
      anon_sym_o,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH_DASH,
      anon_sym_xo,
      anon_sym_LT_LT,
  [6962] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(446), 1,
      anon_sym_DASH,
    STATE(174), 1,
      sym_comment,
    ACTIONS(442), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(444), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(448), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [6989] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(456), 1,
      anon_sym_LBRACK_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(450), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(452), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(454), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7016] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_DASH,
    STATE(176), 1,
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
  [7043] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(472), 1,
      anon_sym_LBRACK_POUND,
    STATE(177), 1,
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
  [7070] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(178), 1,
      sym_comment,
    ACTIONS(450), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
    ACTIONS(452), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(454), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7094] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(179), 1,
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
  [7118] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(180), 1,
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
  [7142] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(181), 1,
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
  [7166] = 9,
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
    STATE(182), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_attribute_repeat1,
    STATE(385), 1,
      sym_string,
    ACTIONS(482), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7195] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(494), 1,
      anon_sym_DASH,
    STATE(183), 1,
      sym_comment,
    ACTIONS(492), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(496), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7218] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(502), 1,
      anon_sym_LBRACK_POUND,
    STATE(184), 1,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(500), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7241] = 9,
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
    STATE(185), 1,
      sym_comment,
    STATE(234), 1,
      aux_sym_attribute_repeat1,
    STATE(412), 1,
      sym_string,
    ACTIONS(506), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7270] = 9,
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
    STATE(186), 1,
      sym_comment,
    STATE(223), 1,
      aux_sym_attribute_repeat1,
    STATE(424), 1,
      sym_string,
    ACTIONS(510), 2,
      anon_sym_inc,
      anon_sym_resume,
  [7299] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(512), 1,
      anon_sym_DQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7325] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7351] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7377] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(522), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_comment,
    STATE(211), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7403] = 9,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(526), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(530), 1,
      anon_sym_endnote,
    STATE(191), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym_note_block_repeat1,
    STATE(354), 1,
      sym_line,
  [7431] = 9,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(532), 1,
      anon_sym_POUND,
    ACTIONS(534), 1,
      anon_sym_COLON,
    ACTIONS(536), 1,
      anon_sym_endnote,
    STATE(192), 1,
      sym_comment,
    STATE(237), 1,
      aux_sym_note_block_repeat1,
    STATE(354), 1,
      sym_line,
  [7459] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7485] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(194), 1,
      sym_comment,
    ACTIONS(540), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_LT,
  [7505] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7531] = 9,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(546), 1,
      anon_sym_POUND,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      anon_sym_endnote,
    STATE(196), 1,
      sym_comment,
    STATE(278), 1,
      aux_sym_note_block_repeat1,
    STATE(354), 1,
      sym_line,
  [7559] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(197), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(448), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7579] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(552), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7605] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      anon_sym_BSLASH,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(556), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(199), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [7629] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(200), 1,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym_BSLASH,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(500), 3,
      anon_sym_GT_GT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_SLASH_SLASH,
  [7649] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym_comment,
    STATE(202), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7675] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(202), 1,
      sym_comment,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7701] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      aux_sym_string_repeat1,
    STATE(203), 1,
      sym_comment,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7727] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7753] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(205), 1,
      sym_comment,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7779] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(572), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym_comment,
    STATE(207), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7805] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(207), 1,
      sym_comment,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7831] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_comment,
    STATE(209), 1,
      aux_sym_string_repeat1,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7857] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(578), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(209), 1,
      sym_comment,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7883] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      aux_sym_string_repeat1,
    STATE(210), 1,
      sym_comment,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7909] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(516), 1,
      anon_sym_BSLASH,
    ACTIONS(582), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    STATE(211), 1,
      sym_comment,
    STATE(263), 1,
      sym_escape_char,
    ACTIONS(514), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [7935] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(584), 1,
      aux_sym_attr_alias_token1,
    STATE(212), 1,
      sym_comment,
    ACTIONS(586), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [7956] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    ACTIONS(590), 1,
      aux_sym_multiline_token1,
    ACTIONS(592), 1,
      anon_sym_BSLASH,
    STATE(213), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_multiline_repeat1,
    STATE(291), 1,
      sym_escape_char,
  [7981] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(594), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      sym_comment,
    ACTIONS(598), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8002] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_multiline_token1,
    ACTIONS(592), 1,
      anon_sym_BSLASH,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym_multiline_repeat1,
    STATE(291), 1,
      sym_escape_char,
  [8027] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_multiline_token1,
    ACTIONS(592), 1,
      anon_sym_BSLASH,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym_multiline_repeat1,
    STATE(291), 1,
      sym_escape_char,
  [8052] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(604), 1,
      anon_sym_COLON,
    ACTIONS(606), 1,
      anon_sym_endnote,
    STATE(217), 1,
      sym_comment,
    STATE(279), 1,
      aux_sym_note_block_repeat1,
    STATE(354), 1,
      sym_line,
  [8077] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_multiline_token1,
    ACTIONS(592), 1,
      anon_sym_BSLASH,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_multiline_repeat1,
    STATE(291), 1,
      sym_escape_char,
  [8102] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(610), 1,
      anon_sym_COLON,
    ACTIONS(612), 1,
      anon_sym_endnote,
    STATE(219), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_note_block_repeat1,
    STATE(354), 1,
      sym_line,
  [8127] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_multiline_token1,
    ACTIONS(592), 1,
      anon_sym_BSLASH,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_multiline_repeat1,
    STATE(291), 1,
      sym_escape_char,
  [8152] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(616), 1,
      anon_sym_COLON,
    ACTIONS(618), 1,
      anon_sym_endnote,
    STATE(221), 1,
      sym_comment,
    STATE(265), 1,
      aux_sym_note_block_repeat1,
    STATE(354), 1,
      sym_line,
  [8177] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
    ACTIONS(620), 1,
      aux_sym_attr_alias_token1,
    STATE(222), 1,
      sym_comment,
    ACTIONS(622), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8198] = 8,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(624), 1,
      aux_sym_line_token2,
    STATE(223), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_attribute_repeat1,
    STATE(384), 1,
      sym_string,
  [8223] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(224), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_left,
      anon_sym_right,
    ACTIONS(628), 3,
      anon_sym_leftover,
      anon_sym_rightover,
      anon_sym_over,
  [8242] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      aux_sym_attr_alias_token1,
    STATE(225), 1,
      sym_comment,
    ACTIONS(632), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8263] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    ACTIONS(634), 1,
      aux_sym_attr_alias_token1,
    STATE(226), 1,
      sym_comment,
    ACTIONS(636), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8284] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    ACTIONS(638), 1,
      aux_sym_attr_alias_token1,
    STATE(227), 1,
      sym_comment,
    ACTIONS(640), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8305] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(642), 1,
      anon_sym_RBRACK,
    ACTIONS(644), 1,
      aux_sym_multiline_token1,
    ACTIONS(647), 1,
      anon_sym_BSLASH,
    STATE(291), 1,
      sym_escape_char,
    STATE(228), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [8328] = 8,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(650), 1,
      aux_sym_line_token2,
    STATE(229), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_attribute_repeat1,
    STATE(395), 1,
      sym_string,
  [8353] = 8,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_multiline_token1,
    ACTIONS(592), 1,
      anon_sym_BSLASH,
    ACTIONS(652), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_multiline_repeat1,
    STATE(230), 1,
      sym_comment,
    STATE(291), 1,
      sym_escape_char,
  [8378] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(231), 1,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_left,
      anon_sym_right,
    ACTIONS(656), 3,
      anon_sym_leftover,
      anon_sym_rightover,
      anon_sym_over,
  [8397] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(658), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      sym_comment,
    ACTIONS(662), 3,
      anon_sym_o,
      anon_sym_x,
      anon_sym_ox,
  [8418] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(233), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_left,
      anon_sym_right,
    ACTIONS(666), 3,
      anon_sym_leftover,
      anon_sym_rightover,
      anon_sym_over,
  [8437] = 8,
    ACTIONS(484), 1,
      aux_sym_attribute_token3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(668), 1,
      aux_sym_line_token2,
    STATE(234), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_attribute_repeat1,
    STATE(404), 1,
      sym_string,
  [8462] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(670), 1,
      aux_sym_attribute_token1,
    ACTIONS(672), 1,
      aux_sym_attribute_token2,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    STATE(235), 1,
      sym_comment,
    STATE(394), 1,
      sym_string,
  [8484] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_ATendebnf,
    STATE(236), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_json_repeat1,
    ACTIONS(676), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8504] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(680), 1,
      anon_sym_endnote,
    STATE(237), 1,
      sym_comment,
    STATE(254), 1,
      aux_sym_note_block_repeat1,
    STATE(354), 1,
      sym_line,
  [8526] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(684), 1,
      anon_sym_ATendregex,
    STATE(238), 1,
      sym_comment,
    STATE(246), 1,
      aux_sym_json_repeat1,
    ACTIONS(682), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8546] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(688), 1,
      anon_sym_ATendditaa,
    STATE(239), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym_json_repeat1,
    ACTIONS(686), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8566] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(692), 1,
      anon_sym_ATendgantt,
    STATE(240), 1,
      sym_comment,
    STATE(249), 1,
      aux_sym_json_repeat1,
    ACTIONS(690), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8586] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(696), 1,
      anon_sym_ATendchronology,
    STATE(241), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym_json_repeat1,
    ACTIONS(694), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8606] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(700), 1,
      anon_sym_ATendjson,
    STATE(242), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym_json_repeat1,
    ACTIONS(698), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8626] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(704), 1,
      anon_sym_ATendyaml,
    STATE(243), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym_json_repeat1,
    ACTIONS(702), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8646] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(706), 1,
      aux_sym_line_token2,
    ACTIONS(708), 1,
      aux_sym_attribute_token3,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    STATE(244), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [8666] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(713), 1,
      anon_sym_ATendebnf,
    STATE(245), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_json_repeat1,
    ACTIONS(676), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8686] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(715), 1,
      anon_sym_ATendregex,
    STATE(246), 1,
      sym_comment,
    STATE(283), 1,
      aux_sym_json_repeat1,
    ACTIONS(682), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8706] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(247), 1,
      sym_comment,
    ACTIONS(717), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [8722] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(719), 1,
      anon_sym_ATendditaa,
    STATE(248), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_json_repeat1,
    ACTIONS(686), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8742] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(721), 1,
      anon_sym_ATendgantt,
    STATE(249), 1,
      sym_comment,
    STATE(262), 1,
      aux_sym_json_repeat1,
    ACTIONS(690), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8762] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendebnf,
    ACTIONS(723), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(250), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [8780] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(728), 1,
      anon_sym_ATendchronology,
    STATE(251), 1,
      sym_comment,
    STATE(264), 1,
      aux_sym_json_repeat1,
    ACTIONS(694), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8800] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(732), 1,
      anon_sym_ATendmindmap,
    STATE(252), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym_json_repeat1,
    ACTIONS(730), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8820] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(736), 1,
      anon_sym_ATendwbs,
    STATE(253), 1,
      sym_comment,
    STATE(267), 1,
      aux_sym_json_repeat1,
    ACTIONS(734), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8840] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(738), 1,
      aux_sym_line_token1,
    ACTIONS(741), 1,
      anon_sym_endnote,
    STATE(354), 1,
      sym_line,
    STATE(254), 2,
      sym_comment,
      aux_sym_note_block_repeat1,
  [8860] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(745), 1,
      anon_sym_ATendchen,
    STATE(255), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_json_repeat1,
    ACTIONS(743), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8880] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(747), 1,
      anon_sym_ATendmindmap,
    STATE(252), 1,
      aux_sym_json_repeat1,
    STATE(256), 1,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8900] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(749), 1,
      anon_sym_ATendwbs,
    STATE(253), 1,
      aux_sym_json_repeat1,
    STATE(257), 1,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8920] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(751), 1,
      anon_sym_ATendchen,
    STATE(255), 1,
      aux_sym_json_repeat1,
    STATE(258), 1,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8940] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(753), 1,
      anon_sym_ATendyaml,
    STATE(243), 1,
      aux_sym_json_repeat1,
    STATE(259), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [8960] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    ACTIONS(755), 1,
      aux_sym_attribute_token1,
    ACTIONS(757), 1,
      aux_sym_attribute_token2,
    STATE(260), 1,
      sym_comment,
    STATE(438), 1,
      sym_string,
  [8982] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendditaa,
    ACTIONS(759), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(261), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9000] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendgantt,
    ACTIONS(762), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(262), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9018] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(263), 1,
      sym_comment,
    ACTIONS(765), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [9034] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendchronology,
    ACTIONS(767), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(264), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9052] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(770), 1,
      anon_sym_endnote,
    STATE(254), 1,
      aux_sym_note_block_repeat1,
    STATE(265), 1,
      sym_comment,
    STATE(354), 1,
      sym_line,
  [9074] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendmindmap,
    ACTIONS(772), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(266), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9092] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendwbs,
    ACTIONS(775), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(267), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9110] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendchen,
    ACTIONS(778), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(268), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9128] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(781), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(783), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_participant_name,
    STATE(43), 1,
      sym_string,
    STATE(269), 1,
      sym_comment,
  [9150] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    ACTIONS(785), 1,
      aux_sym_attribute_token1,
    ACTIONS(787), 1,
      aux_sym_attribute_token2,
    STATE(270), 1,
      sym_comment,
    STATE(383), 1,
      sym_string,
  [9172] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(789), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_participant_name,
    STATE(79), 1,
      sym_string,
    STATE(271), 1,
      sym_comment,
  [9194] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(793), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(795), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_participant_name,
    STATE(69), 1,
      sym_string,
    STATE(272), 1,
      sym_comment,
  [9216] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(797), 1,
      anon_sym_endnote,
    STATE(254), 1,
      aux_sym_note_block_repeat1,
    STATE(273), 1,
      sym_comment,
    STATE(354), 1,
      sym_line,
  [9238] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(799), 1,
      anon_sym_endnote,
    STATE(254), 1,
      aux_sym_note_block_repeat1,
    STATE(274), 1,
      sym_comment,
    STATE(354), 1,
      sym_line,
  [9260] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendjson,
    ACTIONS(801), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(275), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9278] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(804), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_participant_name,
    STATE(55), 1,
      sym_string,
    STATE(276), 1,
      sym_comment,
  [9300] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(808), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_participant_name,
    STATE(83), 1,
      sym_string,
    STATE(277), 1,
      sym_comment,
  [9322] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(812), 1,
      anon_sym_endnote,
    STATE(254), 1,
      aux_sym_note_block_repeat1,
    STATE(278), 1,
      sym_comment,
    STATE(354), 1,
      sym_line,
  [9344] = 7,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(814), 1,
      anon_sym_endnote,
    STATE(254), 1,
      aux_sym_note_block_repeat1,
    STATE(279), 1,
      sym_comment,
    STATE(354), 1,
      sym_line,
  [9366] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendyaml,
    ACTIONS(816), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(280), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9384] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(819), 1,
      anon_sym_ATendjson,
    STATE(242), 1,
      aux_sym_json_repeat1,
    STATE(281), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [9404] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(821), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(823), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_participant_name,
    STATE(51), 1,
      sym_string,
    STATE(282), 1,
      sym_comment,
  [9426] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(726), 1,
      anon_sym_ATendregex,
    ACTIONS(825), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(283), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [9444] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(99), 1,
      sym_boolean_literal,
    STATE(284), 1,
      sym_comment,
    ACTIONS(828), 2,
      anon_sym_true,
      anon_sym_false,
  [9461] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    STATE(285), 1,
      sym_comment,
    STATE(342), 1,
      aux_sym_json_repeat2,
  [9480] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(834), 1,
      anon_sym_else,
    ACTIONS(836), 1,
      anon_sym_end,
    STATE(286), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_alt_block_repeat1,
  [9499] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(838), 1,
      anon_sym_else,
    ACTIONS(841), 1,
      anon_sym_end,
    STATE(287), 2,
      sym_comment,
      aux_sym_alt_block_repeat1,
  [9516] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(843), 1,
      ts_builtin_sym_end,
    STATE(288), 1,
      sym_comment,
    STATE(344), 1,
      aux_sym_json_repeat2,
  [9535] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      sym_comment,
    STATE(346), 1,
      aux_sym_json_repeat2,
  [9554] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(847), 1,
      ts_builtin_sym_end,
    STATE(290), 1,
      sym_comment,
    STATE(323), 1,
      aux_sym_json_repeat2,
  [9573] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(291), 1,
      sym_comment,
    ACTIONS(849), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [9588] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(292), 1,
      sym_comment,
    ACTIONS(851), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [9603] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(164), 1,
      sym_boolean_literal,
    STATE(293), 1,
      sym_comment,
    ACTIONS(853), 2,
      anon_sym_true,
      anon_sym_false,
  [9620] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(294), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [9635] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(295), 1,
      sym_comment,
    ACTIONS(717), 3,
      anon_sym_RBRACK,
      aux_sym_multiline_token1,
      anon_sym_BSLASH,
  [9650] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
    STATE(296), 1,
      sym_comment,
    STATE(328), 1,
      aux_sym_json_repeat2,
  [9669] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(297), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [9684] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(859), 1,
      aux_sym_line_token2,
    STATE(298), 1,
      sym_comment,
    ACTIONS(861), 2,
      aux_sym_attribute_token3,
      anon_sym_DQUOTE,
  [9701] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(299), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [9716] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(300), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [9731] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_comment,
    STATE(332), 1,
      aux_sym_json_repeat2,
  [9750] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(302), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [9765] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(303), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [9780] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(304), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [9795] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(865), 1,
      ts_builtin_sym_end,
    STATE(305), 1,
      sym_comment,
    STATE(316), 1,
      aux_sym_json_repeat2,
  [9814] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(867), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_comment,
    STATE(336), 1,
      aux_sym_json_repeat2,
  [9833] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(307), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [9848] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(308), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [9863] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
    STATE(309), 1,
      sym_comment,
    STATE(339), 1,
      aux_sym_json_repeat2,
  [9882] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(310), 1,
      sym_comment,
    ACTIONS(871), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [9897] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(834), 1,
      anon_sym_else,
    ACTIONS(873), 1,
      anon_sym_end,
    STATE(287), 1,
      aux_sym_alt_block_repeat1,
    STATE(311), 1,
      sym_comment,
  [9916] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(875), 1,
      ts_builtin_sym_end,
    STATE(312), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_json_repeat2,
  [9935] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(834), 1,
      anon_sym_else,
    ACTIONS(877), 1,
      anon_sym_end,
    STATE(287), 1,
      aux_sym_alt_block_repeat1,
    STATE(313), 1,
      sym_comment,
  [9954] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(879), 1,
      ts_builtin_sym_end,
    ACTIONS(881), 1,
      aux_sym_line_token2,
    STATE(314), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [9971] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(834), 1,
      anon_sym_else,
    ACTIONS(884), 1,
      anon_sym_end,
    STATE(287), 1,
      aux_sym_alt_block_repeat1,
    STATE(315), 1,
      sym_comment,
  [9990] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(886), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(316), 1,
      sym_comment,
  [10009] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(888), 1,
      ts_builtin_sym_end,
    STATE(317), 1,
      sym_comment,
    STATE(318), 1,
      aux_sym_json_repeat2,
  [10028] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(890), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(318), 1,
      sym_comment,
  [10047] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(319), 1,
      sym_comment,
  [10066] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(320), 1,
      sym_comment,
  [10085] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(896), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(321), 1,
      sym_comment,
  [10104] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
    STATE(319), 1,
      aux_sym_json_repeat2,
    STATE(322), 1,
      sym_comment,
  [10123] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(900), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(323), 1,
      sym_comment,
  [10142] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(324), 1,
      sym_comment,
    ACTIONS(902), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [10157] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(131), 1,
      sym_boolean_literal,
    STATE(325), 1,
      sym_comment,
    ACTIONS(904), 2,
      anon_sym_true,
      anon_sym_false,
  [10174] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(906), 1,
      ts_builtin_sym_end,
    STATE(326), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_json_repeat2,
  [10193] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(908), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(327), 1,
      sym_comment,
  [10212] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(328), 1,
      sym_comment,
  [10231] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(834), 1,
      anon_sym_else,
    ACTIONS(912), 1,
      anon_sym_end,
    STATE(287), 1,
      aux_sym_alt_block_repeat1,
    STATE(329), 1,
      sym_comment,
  [10250] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(914), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(330), 1,
      sym_comment,
  [10269] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
    STATE(327), 1,
      aux_sym_json_repeat2,
    STATE(331), 1,
      sym_comment,
  [10288] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(332), 1,
      sym_comment,
  [10307] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(330), 1,
      aux_sym_json_repeat2,
    STATE(333), 1,
      sym_comment,
  [10326] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(834), 1,
      anon_sym_else,
    ACTIONS(922), 1,
      anon_sym_end,
    STATE(287), 1,
      aux_sym_alt_block_repeat1,
    STATE(334), 1,
      sym_comment,
  [10345] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(335), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [10360] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(924), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(336), 1,
      sym_comment,
  [10379] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(926), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(337), 1,
      sym_comment,
  [10398] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(928), 1,
      ts_builtin_sym_end,
    STATE(337), 1,
      aux_sym_json_repeat2,
    STATE(338), 1,
      sym_comment,
  [10417] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(930), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(339), 1,
      sym_comment,
  [10436] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(932), 1,
      ts_builtin_sym_end,
    STATE(340), 1,
      sym_comment,
    STATE(341), 1,
      aux_sym_json_repeat2,
  [10455] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(341), 1,
      sym_comment,
  [10474] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(936), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(342), 1,
      sym_comment,
  [10493] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(938), 1,
      ts_builtin_sym_end,
    STATE(343), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym_json_repeat2,
  [10512] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(344), 1,
      sym_comment,
  [10531] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(942), 1,
      ts_builtin_sym_end,
    STATE(345), 1,
      sym_comment,
    STATE(349), 1,
      aux_sym_json_repeat2,
  [10550] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(944), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(346), 1,
      sym_comment,
  [10569] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(946), 1,
      ts_builtin_sym_end,
    STATE(320), 1,
      aux_sym_json_repeat2,
    STATE(347), 1,
      sym_comment,
  [10588] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(948), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(348), 1,
      sym_comment,
  [10607] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(950), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(349), 1,
      sym_comment,
  [10626] = 6,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(832), 1,
      aux_sym_line_token2,
    ACTIONS(952), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      aux_sym_json_repeat2,
    STATE(350), 1,
      sym_comment,
  [10645] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(351), 1,
      sym_comment,
    ACTIONS(442), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10659] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(954), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(956), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(352), 1,
      sym_comment,
  [10675] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(958), 1,
      aux_sym_line_token1,
    STATE(109), 1,
      sym_line,
    STATE(353), 1,
      sym_comment,
  [10691] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(354), 1,
      sym_comment,
    ACTIONS(960), 2,
      aux_sym_line_token1,
      anon_sym_endnote,
  [10705] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(355), 1,
      sym_comment,
    ACTIONS(962), 2,
      ts_builtin_sym_end,
      aux_sym_line_token2,
  [10719] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(958), 1,
      aux_sym_line_token1,
    STATE(112), 1,
      sym_line,
    STATE(356), 1,
      sym_comment,
  [10735] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(357), 1,
      sym_comment,
    ACTIONS(458), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10749] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(358), 1,
      sym_comment,
    ACTIONS(474), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10763] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      aux_sym_label_token1,
    STATE(5), 1,
      sym_label,
    STATE(359), 1,
      sym_comment,
  [10779] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(966), 1,
      aux_sym_line_token1,
    STATE(136), 1,
      sym_line,
    STATE(360), 1,
      sym_comment,
  [10795] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(966), 1,
      aux_sym_line_token1,
    STATE(161), 1,
      sym_line,
    STATE(361), 1,
      sym_comment,
  [10811] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(362), 1,
      sym_comment,
    ACTIONS(596), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10825] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(363), 1,
      sym_comment,
    ACTIONS(338), 2,
      aux_sym_line_token1,
      anon_sym_endnote,
  [10839] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(364), 1,
      sym_comment,
    ACTIONS(968), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10853] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(970), 1,
      aux_sym_line_token1,
    STATE(138), 1,
      sym_line,
    STATE(365), 1,
      sym_comment,
  [10869] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(972), 1,
      anon_sym_DASH,
    ACTIONS(974), 1,
      anon_sym_DASH_DASH,
    STATE(366), 1,
      sym_comment,
  [10885] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(367), 1,
      sym_comment,
    ACTIONS(660), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10899] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(970), 1,
      aux_sym_line_token1,
    STATE(150), 1,
      sym_line,
    STATE(368), 1,
      sym_comment,
  [10915] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      aux_sym_label_token1,
    STATE(23), 1,
      sym_label,
    STATE(369), 1,
      sym_comment,
  [10931] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      aux_sym_label_token1,
    STATE(26), 1,
      sym_label,
    STATE(370), 1,
      sym_comment,
  [10947] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(978), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(980), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(371), 1,
      sym_comment,
  [10963] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(372), 1,
      sym_comment,
    ACTIONS(450), 2,
      aux_sym_attr_alias_token1,
      anon_sym_DQUOTE,
  [10977] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      aux_sym_label_token1,
    STATE(6), 1,
      sym_label,
    STATE(373), 1,
      sym_comment,
  [10993] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      aux_sym_label_token1,
    STATE(16), 1,
      sym_label,
    STATE(374), 1,
      sym_comment,
  [11009] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      aux_sym_label_token1,
    STATE(17), 1,
      sym_label,
    STATE(375), 1,
      sym_comment,
  [11025] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(982), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(984), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(376), 1,
      sym_comment,
  [11041] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      aux_sym_label_token1,
    STATE(8), 1,
      sym_label,
    STATE(377), 1,
      sym_comment,
  [11057] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(964), 1,
      aux_sym_label_token1,
    STATE(7), 1,
      sym_label,
    STATE(378), 1,
      sym_comment,
  [11073] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(986), 1,
      anon_sym_DASH,
    ACTIONS(988), 1,
      anon_sym_DASH_DASH,
    STATE(379), 1,
      sym_comment,
  [11089] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      aux_sym_label_token1,
    STATE(21), 1,
      sym_label,
    STATE(380), 1,
      sym_comment,
  [11105] = 5,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(976), 1,
      aux_sym_label_token1,
    STATE(22), 1,
      sym_label,
    STATE(381), 1,
      sym_comment,
  [11121] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(990), 1,
      sym_color,
    STATE(382), 1,
      sym_comment,
  [11134] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(992), 1,
      aux_sym_attribute_token2,
    STATE(383), 1,
      sym_comment,
  [11147] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(994), 1,
      aux_sym_line_token2,
    STATE(384), 1,
      sym_comment,
  [11160] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(650), 1,
      aux_sym_line_token2,
    STATE(385), 1,
      sym_comment,
  [11173] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(996), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      sym_comment,
  [11186] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(998), 1,
      sym_color,
    STATE(387), 1,
      sym_comment,
  [11199] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1000), 1,
      aux_sym_escape_char_token1,
    STATE(388), 1,
      sym_comment,
  [11212] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1002), 1,
      sym_color,
    STATE(389), 1,
      sym_comment,
  [11225] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1004), 1,
      aux_sym_line_token2,
    STATE(390), 1,
      sym_comment,
  [11238] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1006), 1,
      aux_sym_attr_alias_token1,
    STATE(391), 1,
      sym_comment,
  [11251] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(276), 1,
      aux_sym_attribute_token2,
    STATE(392), 1,
      sym_comment,
  [11264] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1008), 1,
      aux_sym_comment_token2,
    STATE(393), 1,
      sym_comment,
  [11277] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1010), 1,
      aux_sym_attribute_token2,
    STATE(394), 1,
      sym_comment,
  [11290] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1012), 1,
      aux_sym_line_token2,
    STATE(395), 1,
      sym_comment,
  [11303] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1014), 1,
      aux_sym_attribute_token3,
    STATE(396), 1,
      sym_comment,
  [11316] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      sym_comment,
  [11329] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1018), 1,
      aux_sym_attr_alias_token1,
    STATE(398), 1,
      sym_comment,
  [11342] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1020), 1,
      aux_sym_attribute_token3,
    STATE(399), 1,
      sym_comment,
  [11355] = 4,
    ACTIONS(284), 1,
      aux_sym_line_token2,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(400), 1,
      sym_comment,
  [11368] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1022), 1,
      anon_sym_RBRACK,
    STATE(401), 1,
      sym_comment,
  [11381] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(284), 1,
      aux_sym_attribute_token2,
    STATE(402), 1,
      sym_comment,
  [11394] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1024), 1,
      aux_sym_sequence_diagram_token1,
    STATE(403), 1,
      sym_comment,
  [11407] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1026), 1,
      aux_sym_line_token2,
    STATE(404), 1,
      sym_comment,
  [11420] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1028), 1,
      sym_color,
    STATE(405), 1,
      sym_comment,
  [11433] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1030), 1,
      aux_sym_sequence_diagram_token1,
    STATE(406), 1,
      sym_comment,
  [11446] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1032), 1,
      anon_sym_RBRACK,
    STATE(407), 1,
      sym_comment,
  [11459] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1034), 1,
      ts_builtin_sym_end,
    STATE(408), 1,
      sym_comment,
  [11472] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1036), 1,
      aux_sym_line_token2,
    STATE(409), 1,
      sym_comment,
  [11485] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1038), 1,
      aux_sym_attr_alias_token1,
    STATE(410), 1,
      sym_comment,
  [11498] = 4,
    ACTIONS(276), 1,
      aux_sym_line_token2,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(411), 1,
      sym_comment,
  [11511] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(668), 1,
      aux_sym_line_token2,
    STATE(412), 1,
      sym_comment,
  [11524] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1040), 1,
      aux_sym_attr_alias_token1,
    STATE(413), 1,
      sym_comment,
  [11537] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1042), 1,
      aux_sym_sequence_diagram_token1,
    STATE(414), 1,
      sym_comment,
  [11550] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1044), 1,
      sym_color,
    STATE(415), 1,
      sym_comment,
  [11563] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1046), 1,
      aux_sym_attr_alias_token1,
    STATE(416), 1,
      sym_comment,
  [11576] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1048), 1,
      aux_sym_sequence_diagram_token1,
    STATE(417), 1,
      sym_comment,
  [11589] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1050), 1,
      aux_sym_sequence_diagram_token1,
    STATE(418), 1,
      sym_comment,
  [11602] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1052), 1,
      sym_color,
    STATE(419), 1,
      sym_comment,
  [11615] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1054), 1,
      aux_sym_line_token2,
    STATE(420), 1,
      sym_comment,
  [11628] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1056), 1,
      sym_color,
    STATE(421), 1,
      sym_comment,
  [11641] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1058), 1,
      aux_sym_custom_label_token1,
    STATE(422), 1,
      sym_comment,
  [11654] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1060), 1,
      aux_sym_attribute_token3,
    STATE(423), 1,
      sym_comment,
  [11667] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(624), 1,
      aux_sym_line_token2,
    STATE(424), 1,
      sym_comment,
  [11680] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1062), 1,
      aux_sym_sequence_diagram_token1,
    STATE(425), 1,
      sym_comment,
  [11693] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1064), 1,
      anon_sym_SLASH,
    STATE(426), 1,
      sym_comment,
  [11706] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1066), 1,
      ts_builtin_sym_end,
    STATE(427), 1,
      sym_comment,
  [11719] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1068), 1,
      aux_sym_attr_alias_token1,
    STATE(428), 1,
      sym_comment,
  [11732] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1070), 1,
      aux_sym_custom_label_token1,
    STATE(429), 1,
      sym_comment,
  [11745] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1072), 1,
      sym_color,
    STATE(430), 1,
      sym_comment,
  [11758] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1074), 1,
      ts_builtin_sym_end,
    STATE(431), 1,
      sym_comment,
  [11771] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1076), 1,
      aux_sym_comment_token1,
    STATE(432), 1,
      sym_comment,
  [11784] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1078), 1,
      anon_sym_RBRACK,
    STATE(433), 1,
      sym_comment,
  [11797] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1080), 1,
      ts_builtin_sym_end,
    STATE(434), 1,
      sym_comment,
  [11810] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1082), 1,
      aux_sym_line_token2,
    STATE(435), 1,
      sym_comment,
  [11823] = 4,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1084), 1,
      aux_sym_escape_char_token1,
    STATE(436), 1,
      sym_comment,
  [11836] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1086), 1,
      sym_color,
    STATE(437), 1,
      sym_comment,
  [11849] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(1088), 1,
      aux_sym_attribute_token2,
    STATE(438), 1,
      sym_comment,
  [11862] = 1,
    ACTIONS(1090), 1,
      ts_builtin_sym_end,
  [11866] = 1,
    ACTIONS(1092), 1,
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
  [SMALL_STATE(9)] = 534,
  [SMALL_STATE(10)] = 606,
  [SMALL_STATE(11)] = 676,
  [SMALL_STATE(12)] = 747,
  [SMALL_STATE(13)] = 818,
  [SMALL_STATE(14)] = 889,
  [SMALL_STATE(15)] = 960,
  [SMALL_STATE(16)] = 1029,
  [SMALL_STATE(17)] = 1100,
  [SMALL_STATE(18)] = 1171,
  [SMALL_STATE(19)] = 1242,
  [SMALL_STATE(20)] = 1313,
  [SMALL_STATE(21)] = 1384,
  [SMALL_STATE(22)] = 1455,
  [SMALL_STATE(23)] = 1526,
  [SMALL_STATE(24)] = 1597,
  [SMALL_STATE(25)] = 1666,
  [SMALL_STATE(26)] = 1737,
  [SMALL_STATE(27)] = 1808,
  [SMALL_STATE(28)] = 1863,
  [SMALL_STATE(29)] = 1917,
  [SMALL_STATE(30)] = 1971,
  [SMALL_STATE(31)] = 2020,
  [SMALL_STATE(32)] = 2069,
  [SMALL_STATE(33)] = 2116,
  [SMALL_STATE(34)] = 2165,
  [SMALL_STATE(35)] = 2213,
  [SMALL_STATE(36)] = 2259,
  [SMALL_STATE(37)] = 2307,
  [SMALL_STATE(38)] = 2353,
  [SMALL_STATE(39)] = 2401,
  [SMALL_STATE(40)] = 2449,
  [SMALL_STATE(41)] = 2497,
  [SMALL_STATE(42)] = 2545,
  [SMALL_STATE(43)] = 2582,
  [SMALL_STATE(44)] = 2619,
  [SMALL_STATE(45)] = 2656,
  [SMALL_STATE(46)] = 2692,
  [SMALL_STATE(47)] = 2728,
  [SMALL_STATE(48)] = 2764,
  [SMALL_STATE(49)] = 2800,
  [SMALL_STATE(50)] = 2842,
  [SMALL_STATE(51)] = 2878,
  [SMALL_STATE(52)] = 2914,
  [SMALL_STATE(53)] = 2950,
  [SMALL_STATE(54)] = 2986,
  [SMALL_STATE(55)] = 3022,
  [SMALL_STATE(56)] = 3058,
  [SMALL_STATE(57)] = 3094,
  [SMALL_STATE(58)] = 3130,
  [SMALL_STATE(59)] = 3165,
  [SMALL_STATE(60)] = 3200,
  [SMALL_STATE(61)] = 3235,
  [SMALL_STATE(62)] = 3270,
  [SMALL_STATE(63)] = 3305,
  [SMALL_STATE(64)] = 3340,
  [SMALL_STATE(65)] = 3381,
  [SMALL_STATE(66)] = 3416,
  [SMALL_STATE(67)] = 3451,
  [SMALL_STATE(68)] = 3486,
  [SMALL_STATE(69)] = 3521,
  [SMALL_STATE(70)] = 3556,
  [SMALL_STATE(71)] = 3597,
  [SMALL_STATE(72)] = 3632,
  [SMALL_STATE(73)] = 3667,
  [SMALL_STATE(74)] = 3702,
  [SMALL_STATE(75)] = 3741,
  [SMALL_STATE(76)] = 3776,
  [SMALL_STATE(77)] = 3810,
  [SMALL_STATE(78)] = 3844,
  [SMALL_STATE(79)] = 3880,
  [SMALL_STATE(80)] = 3914,
  [SMALL_STATE(81)] = 3952,
  [SMALL_STATE(82)] = 3986,
  [SMALL_STATE(83)] = 4020,
  [SMALL_STATE(84)] = 4054,
  [SMALL_STATE(85)] = 4088,
  [SMALL_STATE(86)] = 4121,
  [SMALL_STATE(87)] = 4154,
  [SMALL_STATE(88)] = 4187,
  [SMALL_STATE(89)] = 4220,
  [SMALL_STATE(90)] = 4253,
  [SMALL_STATE(91)] = 4286,
  [SMALL_STATE(92)] = 4319,
  [SMALL_STATE(93)] = 4352,
  [SMALL_STATE(94)] = 4385,
  [SMALL_STATE(95)] = 4418,
  [SMALL_STATE(96)] = 4451,
  [SMALL_STATE(97)] = 4484,
  [SMALL_STATE(98)] = 4517,
  [SMALL_STATE(99)] = 4552,
  [SMALL_STATE(100)] = 4585,
  [SMALL_STATE(101)] = 4618,
  [SMALL_STATE(102)] = 4651,
  [SMALL_STATE(103)] = 4686,
  [SMALL_STATE(104)] = 4719,
  [SMALL_STATE(105)] = 4752,
  [SMALL_STATE(106)] = 4785,
  [SMALL_STATE(107)] = 4818,
  [SMALL_STATE(108)] = 4851,
  [SMALL_STATE(109)] = 4884,
  [SMALL_STATE(110)] = 4917,
  [SMALL_STATE(111)] = 4950,
  [SMALL_STATE(112)] = 4983,
  [SMALL_STATE(113)] = 5016,
  [SMALL_STATE(114)] = 5049,
  [SMALL_STATE(115)] = 5082,
  [SMALL_STATE(116)] = 5115,
  [SMALL_STATE(117)] = 5147,
  [SMALL_STATE(118)] = 5179,
  [SMALL_STATE(119)] = 5211,
  [SMALL_STATE(120)] = 5243,
  [SMALL_STATE(121)] = 5275,
  [SMALL_STATE(122)] = 5307,
  [SMALL_STATE(123)] = 5339,
  [SMALL_STATE(124)] = 5371,
  [SMALL_STATE(125)] = 5403,
  [SMALL_STATE(126)] = 5435,
  [SMALL_STATE(127)] = 5467,
  [SMALL_STATE(128)] = 5499,
  [SMALL_STATE(129)] = 5531,
  [SMALL_STATE(130)] = 5563,
  [SMALL_STATE(131)] = 5595,
  [SMALL_STATE(132)] = 5627,
  [SMALL_STATE(133)] = 5659,
  [SMALL_STATE(134)] = 5691,
  [SMALL_STATE(135)] = 5723,
  [SMALL_STATE(136)] = 5755,
  [SMALL_STATE(137)] = 5787,
  [SMALL_STATE(138)] = 5819,
  [SMALL_STATE(139)] = 5851,
  [SMALL_STATE(140)] = 5883,
  [SMALL_STATE(141)] = 5915,
  [SMALL_STATE(142)] = 5947,
  [SMALL_STATE(143)] = 5979,
  [SMALL_STATE(144)] = 6011,
  [SMALL_STATE(145)] = 6043,
  [SMALL_STATE(146)] = 6075,
  [SMALL_STATE(147)] = 6107,
  [SMALL_STATE(148)] = 6139,
  [SMALL_STATE(149)] = 6171,
  [SMALL_STATE(150)] = 6203,
  [SMALL_STATE(151)] = 6235,
  [SMALL_STATE(152)] = 6267,
  [SMALL_STATE(153)] = 6299,
  [SMALL_STATE(154)] = 6331,
  [SMALL_STATE(155)] = 6363,
  [SMALL_STATE(156)] = 6395,
  [SMALL_STATE(157)] = 6427,
  [SMALL_STATE(158)] = 6459,
  [SMALL_STATE(159)] = 6491,
  [SMALL_STATE(160)] = 6523,
  [SMALL_STATE(161)] = 6555,
  [SMALL_STATE(162)] = 6587,
  [SMALL_STATE(163)] = 6619,
  [SMALL_STATE(164)] = 6651,
  [SMALL_STATE(165)] = 6683,
  [SMALL_STATE(166)] = 6715,
  [SMALL_STATE(167)] = 6747,
  [SMALL_STATE(168)] = 6779,
  [SMALL_STATE(169)] = 6815,
  [SMALL_STATE(170)] = 6851,
  [SMALL_STATE(171)] = 6887,
  [SMALL_STATE(172)] = 6912,
  [SMALL_STATE(173)] = 6937,
  [SMALL_STATE(174)] = 6962,
  [SMALL_STATE(175)] = 6989,
  [SMALL_STATE(176)] = 7016,
  [SMALL_STATE(177)] = 7043,
  [SMALL_STATE(178)] = 7070,
  [SMALL_STATE(179)] = 7094,
  [SMALL_STATE(180)] = 7118,
  [SMALL_STATE(181)] = 7142,
  [SMALL_STATE(182)] = 7166,
  [SMALL_STATE(183)] = 7195,
  [SMALL_STATE(184)] = 7218,
  [SMALL_STATE(185)] = 7241,
  [SMALL_STATE(186)] = 7270,
  [SMALL_STATE(187)] = 7299,
  [SMALL_STATE(188)] = 7325,
  [SMALL_STATE(189)] = 7351,
  [SMALL_STATE(190)] = 7377,
  [SMALL_STATE(191)] = 7403,
  [SMALL_STATE(192)] = 7431,
  [SMALL_STATE(193)] = 7459,
  [SMALL_STATE(194)] = 7485,
  [SMALL_STATE(195)] = 7505,
  [SMALL_STATE(196)] = 7531,
  [SMALL_STATE(197)] = 7559,
  [SMALL_STATE(198)] = 7579,
  [SMALL_STATE(199)] = 7605,
  [SMALL_STATE(200)] = 7629,
  [SMALL_STATE(201)] = 7649,
  [SMALL_STATE(202)] = 7675,
  [SMALL_STATE(203)] = 7701,
  [SMALL_STATE(204)] = 7727,
  [SMALL_STATE(205)] = 7753,
  [SMALL_STATE(206)] = 7779,
  [SMALL_STATE(207)] = 7805,
  [SMALL_STATE(208)] = 7831,
  [SMALL_STATE(209)] = 7857,
  [SMALL_STATE(210)] = 7883,
  [SMALL_STATE(211)] = 7909,
  [SMALL_STATE(212)] = 7935,
  [SMALL_STATE(213)] = 7956,
  [SMALL_STATE(214)] = 7981,
  [SMALL_STATE(215)] = 8002,
  [SMALL_STATE(216)] = 8027,
  [SMALL_STATE(217)] = 8052,
  [SMALL_STATE(218)] = 8077,
  [SMALL_STATE(219)] = 8102,
  [SMALL_STATE(220)] = 8127,
  [SMALL_STATE(221)] = 8152,
  [SMALL_STATE(222)] = 8177,
  [SMALL_STATE(223)] = 8198,
  [SMALL_STATE(224)] = 8223,
  [SMALL_STATE(225)] = 8242,
  [SMALL_STATE(226)] = 8263,
  [SMALL_STATE(227)] = 8284,
  [SMALL_STATE(228)] = 8305,
  [SMALL_STATE(229)] = 8328,
  [SMALL_STATE(230)] = 8353,
  [SMALL_STATE(231)] = 8378,
  [SMALL_STATE(232)] = 8397,
  [SMALL_STATE(233)] = 8418,
  [SMALL_STATE(234)] = 8437,
  [SMALL_STATE(235)] = 8462,
  [SMALL_STATE(236)] = 8484,
  [SMALL_STATE(237)] = 8504,
  [SMALL_STATE(238)] = 8526,
  [SMALL_STATE(239)] = 8546,
  [SMALL_STATE(240)] = 8566,
  [SMALL_STATE(241)] = 8586,
  [SMALL_STATE(242)] = 8606,
  [SMALL_STATE(243)] = 8626,
  [SMALL_STATE(244)] = 8646,
  [SMALL_STATE(245)] = 8666,
  [SMALL_STATE(246)] = 8686,
  [SMALL_STATE(247)] = 8706,
  [SMALL_STATE(248)] = 8722,
  [SMALL_STATE(249)] = 8742,
  [SMALL_STATE(250)] = 8762,
  [SMALL_STATE(251)] = 8780,
  [SMALL_STATE(252)] = 8800,
  [SMALL_STATE(253)] = 8820,
  [SMALL_STATE(254)] = 8840,
  [SMALL_STATE(255)] = 8860,
  [SMALL_STATE(256)] = 8880,
  [SMALL_STATE(257)] = 8900,
  [SMALL_STATE(258)] = 8920,
  [SMALL_STATE(259)] = 8940,
  [SMALL_STATE(260)] = 8960,
  [SMALL_STATE(261)] = 8982,
  [SMALL_STATE(262)] = 9000,
  [SMALL_STATE(263)] = 9018,
  [SMALL_STATE(264)] = 9034,
  [SMALL_STATE(265)] = 9052,
  [SMALL_STATE(266)] = 9074,
  [SMALL_STATE(267)] = 9092,
  [SMALL_STATE(268)] = 9110,
  [SMALL_STATE(269)] = 9128,
  [SMALL_STATE(270)] = 9150,
  [SMALL_STATE(271)] = 9172,
  [SMALL_STATE(272)] = 9194,
  [SMALL_STATE(273)] = 9216,
  [SMALL_STATE(274)] = 9238,
  [SMALL_STATE(275)] = 9260,
  [SMALL_STATE(276)] = 9278,
  [SMALL_STATE(277)] = 9300,
  [SMALL_STATE(278)] = 9322,
  [SMALL_STATE(279)] = 9344,
  [SMALL_STATE(280)] = 9366,
  [SMALL_STATE(281)] = 9384,
  [SMALL_STATE(282)] = 9404,
  [SMALL_STATE(283)] = 9426,
  [SMALL_STATE(284)] = 9444,
  [SMALL_STATE(285)] = 9461,
  [SMALL_STATE(286)] = 9480,
  [SMALL_STATE(287)] = 9499,
  [SMALL_STATE(288)] = 9516,
  [SMALL_STATE(289)] = 9535,
  [SMALL_STATE(290)] = 9554,
  [SMALL_STATE(291)] = 9573,
  [SMALL_STATE(292)] = 9588,
  [SMALL_STATE(293)] = 9603,
  [SMALL_STATE(294)] = 9620,
  [SMALL_STATE(295)] = 9635,
  [SMALL_STATE(296)] = 9650,
  [SMALL_STATE(297)] = 9669,
  [SMALL_STATE(298)] = 9684,
  [SMALL_STATE(299)] = 9701,
  [SMALL_STATE(300)] = 9716,
  [SMALL_STATE(301)] = 9731,
  [SMALL_STATE(302)] = 9750,
  [SMALL_STATE(303)] = 9765,
  [SMALL_STATE(304)] = 9780,
  [SMALL_STATE(305)] = 9795,
  [SMALL_STATE(306)] = 9814,
  [SMALL_STATE(307)] = 9833,
  [SMALL_STATE(308)] = 9848,
  [SMALL_STATE(309)] = 9863,
  [SMALL_STATE(310)] = 9882,
  [SMALL_STATE(311)] = 9897,
  [SMALL_STATE(312)] = 9916,
  [SMALL_STATE(313)] = 9935,
  [SMALL_STATE(314)] = 9954,
  [SMALL_STATE(315)] = 9971,
  [SMALL_STATE(316)] = 9990,
  [SMALL_STATE(317)] = 10009,
  [SMALL_STATE(318)] = 10028,
  [SMALL_STATE(319)] = 10047,
  [SMALL_STATE(320)] = 10066,
  [SMALL_STATE(321)] = 10085,
  [SMALL_STATE(322)] = 10104,
  [SMALL_STATE(323)] = 10123,
  [SMALL_STATE(324)] = 10142,
  [SMALL_STATE(325)] = 10157,
  [SMALL_STATE(326)] = 10174,
  [SMALL_STATE(327)] = 10193,
  [SMALL_STATE(328)] = 10212,
  [SMALL_STATE(329)] = 10231,
  [SMALL_STATE(330)] = 10250,
  [SMALL_STATE(331)] = 10269,
  [SMALL_STATE(332)] = 10288,
  [SMALL_STATE(333)] = 10307,
  [SMALL_STATE(334)] = 10326,
  [SMALL_STATE(335)] = 10345,
  [SMALL_STATE(336)] = 10360,
  [SMALL_STATE(337)] = 10379,
  [SMALL_STATE(338)] = 10398,
  [SMALL_STATE(339)] = 10417,
  [SMALL_STATE(340)] = 10436,
  [SMALL_STATE(341)] = 10455,
  [SMALL_STATE(342)] = 10474,
  [SMALL_STATE(343)] = 10493,
  [SMALL_STATE(344)] = 10512,
  [SMALL_STATE(345)] = 10531,
  [SMALL_STATE(346)] = 10550,
  [SMALL_STATE(347)] = 10569,
  [SMALL_STATE(348)] = 10588,
  [SMALL_STATE(349)] = 10607,
  [SMALL_STATE(350)] = 10626,
  [SMALL_STATE(351)] = 10645,
  [SMALL_STATE(352)] = 10659,
  [SMALL_STATE(353)] = 10675,
  [SMALL_STATE(354)] = 10691,
  [SMALL_STATE(355)] = 10705,
  [SMALL_STATE(356)] = 10719,
  [SMALL_STATE(357)] = 10735,
  [SMALL_STATE(358)] = 10749,
  [SMALL_STATE(359)] = 10763,
  [SMALL_STATE(360)] = 10779,
  [SMALL_STATE(361)] = 10795,
  [SMALL_STATE(362)] = 10811,
  [SMALL_STATE(363)] = 10825,
  [SMALL_STATE(364)] = 10839,
  [SMALL_STATE(365)] = 10853,
  [SMALL_STATE(366)] = 10869,
  [SMALL_STATE(367)] = 10885,
  [SMALL_STATE(368)] = 10899,
  [SMALL_STATE(369)] = 10915,
  [SMALL_STATE(370)] = 10931,
  [SMALL_STATE(371)] = 10947,
  [SMALL_STATE(372)] = 10963,
  [SMALL_STATE(373)] = 10977,
  [SMALL_STATE(374)] = 10993,
  [SMALL_STATE(375)] = 11009,
  [SMALL_STATE(376)] = 11025,
  [SMALL_STATE(377)] = 11041,
  [SMALL_STATE(378)] = 11057,
  [SMALL_STATE(379)] = 11073,
  [SMALL_STATE(380)] = 11089,
  [SMALL_STATE(381)] = 11105,
  [SMALL_STATE(382)] = 11121,
  [SMALL_STATE(383)] = 11134,
  [SMALL_STATE(384)] = 11147,
  [SMALL_STATE(385)] = 11160,
  [SMALL_STATE(386)] = 11173,
  [SMALL_STATE(387)] = 11186,
  [SMALL_STATE(388)] = 11199,
  [SMALL_STATE(389)] = 11212,
  [SMALL_STATE(390)] = 11225,
  [SMALL_STATE(391)] = 11238,
  [SMALL_STATE(392)] = 11251,
  [SMALL_STATE(393)] = 11264,
  [SMALL_STATE(394)] = 11277,
  [SMALL_STATE(395)] = 11290,
  [SMALL_STATE(396)] = 11303,
  [SMALL_STATE(397)] = 11316,
  [SMALL_STATE(398)] = 11329,
  [SMALL_STATE(399)] = 11342,
  [SMALL_STATE(400)] = 11355,
  [SMALL_STATE(401)] = 11368,
  [SMALL_STATE(402)] = 11381,
  [SMALL_STATE(403)] = 11394,
  [SMALL_STATE(404)] = 11407,
  [SMALL_STATE(405)] = 11420,
  [SMALL_STATE(406)] = 11433,
  [SMALL_STATE(407)] = 11446,
  [SMALL_STATE(408)] = 11459,
  [SMALL_STATE(409)] = 11472,
  [SMALL_STATE(410)] = 11485,
  [SMALL_STATE(411)] = 11498,
  [SMALL_STATE(412)] = 11511,
  [SMALL_STATE(413)] = 11524,
  [SMALL_STATE(414)] = 11537,
  [SMALL_STATE(415)] = 11550,
  [SMALL_STATE(416)] = 11563,
  [SMALL_STATE(417)] = 11576,
  [SMALL_STATE(418)] = 11589,
  [SMALL_STATE(419)] = 11602,
  [SMALL_STATE(420)] = 11615,
  [SMALL_STATE(421)] = 11628,
  [SMALL_STATE(422)] = 11641,
  [SMALL_STATE(423)] = 11654,
  [SMALL_STATE(424)] = 11667,
  [SMALL_STATE(425)] = 11680,
  [SMALL_STATE(426)] = 11693,
  [SMALL_STATE(427)] = 11706,
  [SMALL_STATE(428)] = 11719,
  [SMALL_STATE(429)] = 11732,
  [SMALL_STATE(430)] = 11745,
  [SMALL_STATE(431)] = 11758,
  [SMALL_STATE(432)] = 11771,
  [SMALL_STATE(433)] = 11784,
  [SMALL_STATE(434)] = 11797,
  [SMALL_STATE(435)] = 11810,
  [SMALL_STATE(436)] = 11823,
  [SMALL_STATE(437)] = 11836,
  [SMALL_STATE(438)] = 11849,
  [SMALL_STATE(439)] = 11862,
  [SMALL_STATE(440)] = 11866,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alt_block_repeat1, 3, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(387),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(398),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(396),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(405),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(428),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(423),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(382),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(410),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(399),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 14),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 14),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 12),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 13),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 12),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 5, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 5, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 3, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_label, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_label, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 11),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 11),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 5, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 5, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 12),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alt_block, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_block, 4, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 4, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 4, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_block, 6, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_block, 6, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 12),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 5, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 6, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 2, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 7, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 3, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 8, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 8, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 5, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 6, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 7, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connector, 4, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 4, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 2, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [778] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [816] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [825] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_block_repeat1, 2, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(355),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 10),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 3),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 4),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 5),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 4),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 5),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 6),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 6),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 7),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 7),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 8),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 9),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 10),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 8),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 9),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 3),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_block_repeat1, 1, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector, 9, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1066] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
