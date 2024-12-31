#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 7
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_sequence_diagram_token1 = 1,
  sym__eof = 2,
  sym_sequence_diagram_header = 3,
  sym_expression = 4,
  sym_sequence_diagram = 5,
  aux_sym_sequence_diagram_repeat1 = 6,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_sequence_diagram_token1] = "sequence_diagram_token1",
  [sym__eof] = "_eof",
  [sym_sequence_diagram_header] = "sequence_diagram_header",
  [sym_expression] = "expression",
  [sym_sequence_diagram] = "sequence_diagram",
  [aux_sym_sequence_diagram_repeat1] = "sequence_diagram_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_sequence_diagram_token1] = aux_sym_sequence_diagram_token1,
  [sym__eof] = sym__eof,
  [sym_sequence_diagram_header] = sym_sequence_diagram_header,
  [sym_expression] = sym_expression,
  [sym_sequence_diagram] = sym_sequence_diagram,
  [aux_sym_sequence_diagram_repeat1] = aux_sym_sequence_diagram_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_sequence_diagram_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence_diagram_header] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_diagram] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sequence_diagram_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '\n') SKIP(0);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_sequence_diagram_token1] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_sequence_diagram_header] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(5),
    [sym_sequence_diagram] = STATE(6),
    [sym_sequence_diagram_header] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      aux_sym_sequence_diagram_token1,
    ACTIONS(7), 1,
      sym__eof,
    STATE(3), 1,
      aux_sym_sequence_diagram_repeat1,
  [10] = 3,
    ACTIONS(9), 1,
      aux_sym_sequence_diagram_token1,
    ACTIONS(11), 1,
      sym__eof,
    STATE(4), 1,
      aux_sym_sequence_diagram_repeat1,
  [20] = 3,
    ACTIONS(13), 1,
      aux_sym_sequence_diagram_token1,
    ACTIONS(16), 1,
      sym__eof,
    STATE(4), 1,
      aux_sym_sequence_diagram_repeat1,
  [30] = 1,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
  [34] = 1,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
  [38] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
  [42] = 1,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 10,
  [SMALL_STATE(4)] = 20,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 42,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_diagram_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_diagram_repeat1, 2, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 2, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eof = 0,
  ts_external_token_sequence_diagram_header = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_sequence_diagram_header] = sym_sequence_diagram_header,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token_sequence_diagram_header] = true,
  },
  [2] = {
    [ts_external_token_sequence_diagram_header] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_plantuml_external_scanner_create(void);
void tree_sitter_plantuml_external_scanner_destroy(void *);
bool tree_sitter_plantuml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_plantuml_external_scanner_serialize(void *, char *);
void tree_sitter_plantuml_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_plantuml_external_scanner_create,
      tree_sitter_plantuml_external_scanner_destroy,
      tree_sitter_plantuml_external_scanner_scan,
      tree_sitter_plantuml_external_scanner_serialize,
      tree_sitter_plantuml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
