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
#define STATE_COUNT 240
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 994
#define ALIAS_COUNT 15
#define TOKEN_COUNT 961
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_skinparam = 3,
  anon_sym_sequenceMessageAlign = 4,
  anon_sym_left = 5,
  anon_sym_right = 6,
  anon_sym_center = 7,
  anon_sym_responseMessageBelowArrow = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_autonumber = 11,
  anon_sym_inc = 12,
  anon_sym_resume = 13,
  aux_sym_attribute_token1 = 14,
  aux_sym_attribute_token2 = 15,
  aux_sym_attribute_token3 = 16,
  anon_sym_autonumberstop = 17,
  anon_sym_participant = 18,
  anon_sym_actor = 19,
  anon_sym_boundary = 20,
  anon_sym_control = 21,
  anon_sym_entity = 22,
  anon_sym_database = 23,
  anon_sym_collections = 24,
  anon_sym_queue = 25,
  anon_sym_POUND = 26,
  anon_sym_LBRACK = 27,
  aux_sym_multiline_token1 = 28,
  anon_sym_RBRACK = 29,
  anon_sym_as = 30,
  aux_sym_attr_alias_token1 = 31,
  anon_sym_order = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_string_token1 = 34,
  anon_sym_BSLASH_DQUOTE = 35,
  anon_sym_BSLASH = 36,
  aux_sym_escape_char_token1 = 37,
  anon_sym_DASH_GT = 38,
  anon_sym_DASH_GTo = 39,
  anon_sym_DASH_GTx = 40,
  anon_sym_DASH_GTox = 41,
  anon_sym_DASH_GT_GT = 42,
  anon_sym_DASH_GT_GTo = 43,
  anon_sym_DASH_GT_GTx = 44,
  anon_sym_DASH_GT_GTox = 45,
  anon_sym_DASH_BSLASH = 46,
  anon_sym_DASH_BSLASHo = 47,
  anon_sym_DASH_BSLASHx = 48,
  anon_sym_DASH_BSLASHox = 49,
  anon_sym_DASH_BSLASH_BSLASH = 50,
  anon_sym_DASH_BSLASH_BSLASHo = 51,
  anon_sym_DASH_BSLASH_BSLASHx = 52,
  anon_sym_DASH_BSLASH_BSLASHox = 53,
  anon_sym_DASH_SLASH = 54,
  anon_sym_DASH_SLASHo = 55,
  anon_sym_DASH_SLASHx = 56,
  anon_sym_DASH_SLASHox = 57,
  anon_sym_DASH_SLASH_SLASH = 58,
  anon_sym_DASH_SLASH_SLASHo = 59,
  anon_sym_DASH_SLASH_SLASHx = 60,
  anon_sym_DASH_SLASH_SLASHox = 61,
  anon_sym_DASH_DASH_GT = 62,
  anon_sym_DASH_DASH_GTo = 63,
  anon_sym_DASH_DASH_GTx = 64,
  anon_sym_DASH_DASH_GTox = 65,
  anon_sym_DASH_DASH_GT_GT = 66,
  anon_sym_DASH_DASH_GT_GTo = 67,
  anon_sym_DASH_DASH_GT_GTx = 68,
  anon_sym_DASH_DASH_GT_GTox = 69,
  anon_sym_DASH_DASH_BSLASH = 70,
  anon_sym_DASH_DASH_BSLASHo = 71,
  anon_sym_DASH_DASH_BSLASHx = 72,
  anon_sym_DASH_DASH_BSLASHox = 73,
  anon_sym_DASH_DASH_BSLASH_BSLASH = 74,
  anon_sym_DASH_DASH_BSLASH_BSLASHo = 75,
  anon_sym_DASH_DASH_BSLASH_BSLASHx = 76,
  anon_sym_DASH_DASH_BSLASH_BSLASHox = 77,
  anon_sym_DASH_DASH_SLASH = 78,
  anon_sym_DASH_DASH_SLASHo = 79,
  anon_sym_DASH_DASH_SLASHx = 80,
  anon_sym_DASH_DASH_SLASHox = 81,
  anon_sym_DASH_DASH_SLASH_SLASH = 82,
  anon_sym_DASH_DASH_SLASH_SLASHo = 83,
  anon_sym_DASH_DASH_SLASH_SLASHx = 84,
  anon_sym_DASH_DASH_SLASH_SLASHox = 85,
  anon_sym_LT_DASH = 86,
  anon_sym_o_LT_DASH = 87,
  anon_sym_x_LT_DASH = 88,
  anon_sym_xo_LT_DASH = 89,
  anon_sym_LT_LT_DASH = 90,
  anon_sym_o_LT_LT_DASH = 91,
  anon_sym_x_LT_LT_DASH = 92,
  anon_sym_xo_LT_LT_DASH = 93,
  anon_sym_SLASH_DASH = 94,
  anon_sym_o_SLASH_DASH = 95,
  anon_sym_x_SLASH_DASH = 96,
  anon_sym_xo_SLASH_DASH = 97,
  anon_sym_SLASH_SLASH_DASH = 98,
  anon_sym_o_SLASH_SLASH_DASH = 99,
  anon_sym_x_SLASH_SLASH_DASH = 100,
  anon_sym_xo_SLASH_SLASH_DASH = 101,
  anon_sym_BSLASH_DASH = 102,
  anon_sym_o_BSLASH_DASH = 103,
  anon_sym_x_BSLASH_DASH = 104,
  anon_sym_xo_BSLASH_DASH = 105,
  anon_sym_BSLASH_BSLASH_DASH = 106,
  anon_sym_o_BSLASH_BSLASH_DASH = 107,
  anon_sym_x_BSLASH_BSLASH_DASH = 108,
  anon_sym_xo_BSLASH_BSLASH_DASH = 109,
  anon_sym_LT_DASH_DASH = 110,
  anon_sym_o_LT_DASH_DASH = 111,
  anon_sym_x_LT_DASH_DASH = 112,
  anon_sym_xo_LT_DASH_DASH = 113,
  anon_sym_LT_LT_DASH_DASH = 114,
  anon_sym_o_LT_LT_DASH_DASH = 115,
  anon_sym_x_LT_LT_DASH_DASH = 116,
  anon_sym_xo_LT_LT_DASH_DASH = 117,
  anon_sym_SLASH_DASH_DASH = 118,
  anon_sym_o_SLASH_DASH_DASH = 119,
  anon_sym_x_SLASH_DASH_DASH = 120,
  anon_sym_xo_SLASH_DASH_DASH = 121,
  anon_sym_SLASH_SLASH_DASH_DASH = 122,
  anon_sym_o_SLASH_SLASH_DASH_DASH = 123,
  anon_sym_x_SLASH_SLASH_DASH_DASH = 124,
  anon_sym_xo_SLASH_SLASH_DASH_DASH = 125,
  anon_sym_BSLASH_DASH_DASH = 126,
  anon_sym_o_BSLASH_DASH_DASH = 127,
  anon_sym_x_BSLASH_DASH_DASH = 128,
  anon_sym_xo_BSLASH_DASH_DASH = 129,
  anon_sym_BSLASH_BSLASH_DASH_DASH = 130,
  anon_sym_o_BSLASH_BSLASH_DASH_DASH = 131,
  anon_sym_x_BSLASH_BSLASH_DASH_DASH = 132,
  anon_sym_xo_BSLASH_BSLASH_DASH_DASH = 133,
  anon_sym_LT_DASH_GT = 134,
  anon_sym_LT_DASH_GTo = 135,
  anon_sym_LT_DASH_GTx = 136,
  anon_sym_LT_DASH_GTox = 137,
  anon_sym_LT_DASH_GToo = 138,
  anon_sym_LT_DASH_GTxo = 139,
  anon_sym_LT_DASH_GToxo = 140,
  anon_sym_LT_DASH_GTxx = 141,
  anon_sym_LT_DASH_GToxx = 142,
  anon_sym_LT_DASH_GTxxo = 143,
  anon_sym_LT_DASH_GToxxo = 144,
  anon_sym_LT_DASH_GT_GT = 145,
  anon_sym_LT_DASH_GT_GTo = 146,
  anon_sym_LT_DASH_GT_GTx = 147,
  anon_sym_LT_DASH_GT_GTox = 148,
  anon_sym_LT_DASH_GT_GToo = 149,
  anon_sym_LT_DASH_GT_GTxo = 150,
  anon_sym_LT_DASH_GT_GToxo = 151,
  anon_sym_LT_DASH_GT_GTxx = 152,
  anon_sym_LT_DASH_GT_GToxx = 153,
  anon_sym_LT_DASH_GT_GTxxo = 154,
  anon_sym_LT_DASH_GT_GToxxo = 155,
  anon_sym_LT_DASH_BSLASH = 156,
  anon_sym_LT_DASH_BSLASHo = 157,
  anon_sym_LT_DASH_BSLASHx = 158,
  anon_sym_LT_DASH_BSLASHox = 159,
  anon_sym_LT_DASH_BSLASHoo = 160,
  anon_sym_LT_DASH_BSLASHxo = 161,
  anon_sym_LT_DASH_BSLASHoxo = 162,
  anon_sym_LT_DASH_BSLASHxx = 163,
  anon_sym_LT_DASH_BSLASHoxx = 164,
  anon_sym_LT_DASH_BSLASHxxo = 165,
  anon_sym_LT_DASH_BSLASHoxxo = 166,
  anon_sym_LT_DASH_BSLASH_BSLASH = 167,
  anon_sym_LT_DASH_BSLASH_BSLASHo = 168,
  anon_sym_LT_DASH_BSLASH_BSLASHx = 169,
  anon_sym_LT_DASH_BSLASH_BSLASHox = 170,
  anon_sym_LT_DASH_BSLASH_BSLASHoo = 171,
  anon_sym_LT_DASH_BSLASH_BSLASHxo = 172,
  anon_sym_LT_DASH_BSLASH_BSLASHoxo = 173,
  anon_sym_LT_DASH_BSLASH_BSLASHxx = 174,
  anon_sym_LT_DASH_BSLASH_BSLASHoxx = 175,
  anon_sym_LT_DASH_BSLASH_BSLASHxxo = 176,
  anon_sym_LT_DASH_BSLASH_BSLASHoxxo = 177,
  anon_sym_LT_DASH_SLASH = 178,
  anon_sym_LT_DASH_SLASHo = 179,
  anon_sym_LT_DASH_SLASHx = 180,
  anon_sym_LT_DASH_SLASHox = 181,
  anon_sym_LT_DASH_SLASHoo = 182,
  anon_sym_LT_DASH_SLASHxo = 183,
  anon_sym_LT_DASH_SLASHoxo = 184,
  anon_sym_LT_DASH_SLASHxx = 185,
  anon_sym_LT_DASH_SLASHoxx = 186,
  anon_sym_LT_DASH_SLASHxxo = 187,
  anon_sym_LT_DASH_SLASHoxxo = 188,
  anon_sym_LT_DASH_SLASH_SLASH = 189,
  anon_sym_LT_DASH_SLASH_SLASHo = 190,
  anon_sym_LT_DASH_SLASH_SLASHx = 191,
  anon_sym_LT_DASH_SLASH_SLASHox = 192,
  anon_sym_LT_DASH_SLASH_SLASHoo = 193,
  anon_sym_LT_DASH_SLASH_SLASHxo = 194,
  anon_sym_LT_DASH_SLASH_SLASHoxo = 195,
  anon_sym_LT_DASH_SLASH_SLASHxx = 196,
  anon_sym_LT_DASH_SLASH_SLASHoxx = 197,
  anon_sym_LT_DASH_SLASH_SLASHxxo = 198,
  anon_sym_LT_DASH_SLASH_SLASHoxxo = 199,
  anon_sym_LT_LT_DASH_GT = 200,
  anon_sym_LT_LT_DASH_GTo = 201,
  anon_sym_LT_LT_DASH_GTx = 202,
  anon_sym_LT_LT_DASH_GTox = 203,
  anon_sym_LT_LT_DASH_GToo = 204,
  anon_sym_LT_LT_DASH_GTxo = 205,
  anon_sym_LT_LT_DASH_GToxo = 206,
  anon_sym_LT_LT_DASH_GTxx = 207,
  anon_sym_LT_LT_DASH_GToxx = 208,
  anon_sym_LT_LT_DASH_GTxxo = 209,
  anon_sym_LT_LT_DASH_GToxxo = 210,
  anon_sym_LT_LT_DASH_GT_GT = 211,
  anon_sym_LT_LT_DASH_GT_GTo = 212,
  anon_sym_LT_LT_DASH_GT_GTx = 213,
  anon_sym_LT_LT_DASH_GT_GTox = 214,
  anon_sym_LT_LT_DASH_GT_GToo = 215,
  anon_sym_LT_LT_DASH_GT_GTxo = 216,
  anon_sym_LT_LT_DASH_GT_GToxo = 217,
  anon_sym_LT_LT_DASH_GT_GTxx = 218,
  anon_sym_LT_LT_DASH_GT_GToxx = 219,
  anon_sym_LT_LT_DASH_GT_GTxxo = 220,
  anon_sym_LT_LT_DASH_GT_GToxxo = 221,
  anon_sym_LT_LT_DASH_BSLASH = 222,
  anon_sym_LT_LT_DASH_BSLASHo = 223,
  anon_sym_LT_LT_DASH_BSLASHx = 224,
  anon_sym_LT_LT_DASH_BSLASHox = 225,
  anon_sym_LT_LT_DASH_BSLASHoo = 226,
  anon_sym_LT_LT_DASH_BSLASHxo = 227,
  anon_sym_LT_LT_DASH_BSLASHoxo = 228,
  anon_sym_LT_LT_DASH_BSLASHxx = 229,
  anon_sym_LT_LT_DASH_BSLASHoxx = 230,
  anon_sym_LT_LT_DASH_BSLASHxxo = 231,
  anon_sym_LT_LT_DASH_BSLASHoxxo = 232,
  anon_sym_LT_LT_DASH_BSLASH_BSLASH = 233,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHo = 234,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHx = 235,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHox = 236,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHoo = 237,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHxo = 238,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo = 239,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHxx = 240,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx = 241,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo = 242,
  anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo = 243,
  anon_sym_LT_LT_DASH_SLASH = 244,
  anon_sym_LT_LT_DASH_SLASHo = 245,
  anon_sym_LT_LT_DASH_SLASHx = 246,
  anon_sym_LT_LT_DASH_SLASHox = 247,
  anon_sym_LT_LT_DASH_SLASHoo = 248,
  anon_sym_LT_LT_DASH_SLASHxo = 249,
  anon_sym_LT_LT_DASH_SLASHoxo = 250,
  anon_sym_LT_LT_DASH_SLASHxx = 251,
  anon_sym_LT_LT_DASH_SLASHoxx = 252,
  anon_sym_LT_LT_DASH_SLASHxxo = 253,
  anon_sym_LT_LT_DASH_SLASHoxxo = 254,
  anon_sym_LT_LT_DASH_SLASH_SLASH = 255,
  anon_sym_LT_LT_DASH_SLASH_SLASHo = 256,
  anon_sym_LT_LT_DASH_SLASH_SLASHx = 257,
  anon_sym_LT_LT_DASH_SLASH_SLASHox = 258,
  anon_sym_LT_LT_DASH_SLASH_SLASHoo = 259,
  anon_sym_LT_LT_DASH_SLASH_SLASHxo = 260,
  anon_sym_LT_LT_DASH_SLASH_SLASHoxo = 261,
  anon_sym_LT_LT_DASH_SLASH_SLASHxx = 262,
  anon_sym_LT_LT_DASH_SLASH_SLASHoxx = 263,
  anon_sym_LT_LT_DASH_SLASH_SLASHxxo = 264,
  anon_sym_LT_LT_DASH_SLASH_SLASHoxxo = 265,
  anon_sym_SLASH_DASH_GT = 266,
  anon_sym_SLASH_DASH_GTo = 267,
  anon_sym_SLASH_DASH_GTx = 268,
  anon_sym_SLASH_DASH_GTox = 269,
  anon_sym_SLASH_DASH_GToo = 270,
  anon_sym_SLASH_DASH_GTxo = 271,
  anon_sym_SLASH_DASH_GToxo = 272,
  anon_sym_SLASH_DASH_GTxx = 273,
  anon_sym_SLASH_DASH_GToxx = 274,
  anon_sym_SLASH_DASH_GTxxo = 275,
  anon_sym_SLASH_DASH_GToxxo = 276,
  anon_sym_SLASH_DASH_GT_GT = 277,
  anon_sym_SLASH_DASH_GT_GTo = 278,
  anon_sym_SLASH_DASH_GT_GTx = 279,
  anon_sym_SLASH_DASH_GT_GTox = 280,
  anon_sym_SLASH_DASH_GT_GToo = 281,
  anon_sym_SLASH_DASH_GT_GTxo = 282,
  anon_sym_SLASH_DASH_GT_GToxo = 283,
  anon_sym_SLASH_DASH_GT_GTxx = 284,
  anon_sym_SLASH_DASH_GT_GToxx = 285,
  anon_sym_SLASH_DASH_GT_GTxxo = 286,
  anon_sym_SLASH_DASH_GT_GToxxo = 287,
  anon_sym_SLASH_DASH_BSLASH = 288,
  anon_sym_SLASH_DASH_BSLASHo = 289,
  anon_sym_SLASH_DASH_BSLASHx = 290,
  anon_sym_SLASH_DASH_BSLASHox = 291,
  anon_sym_SLASH_DASH_BSLASHoo = 292,
  anon_sym_SLASH_DASH_BSLASHxo = 293,
  anon_sym_SLASH_DASH_BSLASHoxo = 294,
  anon_sym_SLASH_DASH_BSLASHxx = 295,
  anon_sym_SLASH_DASH_BSLASHoxx = 296,
  anon_sym_SLASH_DASH_BSLASHxxo = 297,
  anon_sym_SLASH_DASH_BSLASHoxxo = 298,
  anon_sym_SLASH_DASH_BSLASH_BSLASH = 299,
  anon_sym_SLASH_DASH_BSLASH_BSLASHo = 300,
  anon_sym_SLASH_DASH_BSLASH_BSLASHx = 301,
  anon_sym_SLASH_DASH_BSLASH_BSLASHox = 302,
  anon_sym_SLASH_DASH_BSLASH_BSLASHoo = 303,
  anon_sym_SLASH_DASH_BSLASH_BSLASHxo = 304,
  anon_sym_SLASH_DASH_BSLASH_BSLASHoxo = 305,
  anon_sym_SLASH_DASH_BSLASH_BSLASHxx = 306,
  anon_sym_SLASH_DASH_BSLASH_BSLASHoxx = 307,
  anon_sym_SLASH_DASH_BSLASH_BSLASHxxo = 308,
  anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo = 309,
  anon_sym_SLASH_DASH_SLASH = 310,
  anon_sym_SLASH_DASH_SLASHo = 311,
  anon_sym_SLASH_DASH_SLASHx = 312,
  anon_sym_SLASH_DASH_SLASHox = 313,
  anon_sym_SLASH_DASH_SLASHoo = 314,
  anon_sym_SLASH_DASH_SLASHxo = 315,
  anon_sym_SLASH_DASH_SLASHoxo = 316,
  anon_sym_SLASH_DASH_SLASHxx = 317,
  anon_sym_SLASH_DASH_SLASHoxx = 318,
  anon_sym_SLASH_DASH_SLASHxxo = 319,
  anon_sym_SLASH_DASH_SLASHoxxo = 320,
  anon_sym_SLASH_DASH_SLASH_SLASH = 321,
  anon_sym_SLASH_DASH_SLASH_SLASHo = 322,
  anon_sym_SLASH_DASH_SLASH_SLASHx = 323,
  anon_sym_SLASH_DASH_SLASH_SLASHox = 324,
  anon_sym_SLASH_DASH_SLASH_SLASHoo = 325,
  anon_sym_SLASH_DASH_SLASH_SLASHxo = 326,
  anon_sym_SLASH_DASH_SLASH_SLASHoxo = 327,
  anon_sym_SLASH_DASH_SLASH_SLASHxx = 328,
  anon_sym_SLASH_DASH_SLASH_SLASHoxx = 329,
  anon_sym_SLASH_DASH_SLASH_SLASHxxo = 330,
  anon_sym_SLASH_DASH_SLASH_SLASHoxxo = 331,
  anon_sym_SLASH_SLASH_DASH_GT = 332,
  anon_sym_SLASH_SLASH_DASH_GTo = 333,
  anon_sym_SLASH_SLASH_DASH_GTx = 334,
  anon_sym_SLASH_SLASH_DASH_GTox = 335,
  anon_sym_SLASH_SLASH_DASH_GToo = 336,
  anon_sym_SLASH_SLASH_DASH_GTxo = 337,
  anon_sym_SLASH_SLASH_DASH_GToxo = 338,
  anon_sym_SLASH_SLASH_DASH_GTxx = 339,
  anon_sym_SLASH_SLASH_DASH_GToxx = 340,
  anon_sym_SLASH_SLASH_DASH_GTxxo = 341,
  anon_sym_SLASH_SLASH_DASH_GToxxo = 342,
  anon_sym_SLASH_SLASH_DASH_GT_GT = 343,
  anon_sym_SLASH_SLASH_DASH_GT_GTo = 344,
  anon_sym_SLASH_SLASH_DASH_GT_GTx = 345,
  anon_sym_SLASH_SLASH_DASH_GT_GTox = 346,
  anon_sym_SLASH_SLASH_DASH_GT_GToo = 347,
  anon_sym_SLASH_SLASH_DASH_GT_GTxo = 348,
  anon_sym_SLASH_SLASH_DASH_GT_GToxo = 349,
  anon_sym_SLASH_SLASH_DASH_GT_GTxx = 350,
  anon_sym_SLASH_SLASH_DASH_GT_GToxx = 351,
  anon_sym_SLASH_SLASH_DASH_GT_GTxxo = 352,
  anon_sym_SLASH_SLASH_DASH_GT_GToxxo = 353,
  anon_sym_SLASH_SLASH_DASH_BSLASH = 354,
  anon_sym_SLASH_SLASH_DASH_BSLASHo = 355,
  anon_sym_SLASH_SLASH_DASH_BSLASHx = 356,
  anon_sym_SLASH_SLASH_DASH_BSLASHox = 357,
  anon_sym_SLASH_SLASH_DASH_BSLASHoo = 358,
  anon_sym_SLASH_SLASH_DASH_BSLASHxo = 359,
  anon_sym_SLASH_SLASH_DASH_BSLASHoxo = 360,
  anon_sym_SLASH_SLASH_DASH_BSLASHxx = 361,
  anon_sym_SLASH_SLASH_DASH_BSLASHoxx = 362,
  anon_sym_SLASH_SLASH_DASH_BSLASHxxo = 363,
  anon_sym_SLASH_SLASH_DASH_BSLASHoxxo = 364,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH = 365,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo = 366,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx = 367,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox = 368,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo = 369,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo = 370,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo = 371,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx = 372,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx = 373,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo = 374,
  anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo = 375,
  anon_sym_SLASH_SLASH_DASH_SLASH = 376,
  anon_sym_SLASH_SLASH_DASH_SLASHo = 377,
  anon_sym_SLASH_SLASH_DASH_SLASHx = 378,
  anon_sym_SLASH_SLASH_DASH_SLASHox = 379,
  anon_sym_SLASH_SLASH_DASH_SLASHoo = 380,
  anon_sym_SLASH_SLASH_DASH_SLASHxo = 381,
  anon_sym_SLASH_SLASH_DASH_SLASHoxo = 382,
  anon_sym_SLASH_SLASH_DASH_SLASHxx = 383,
  anon_sym_SLASH_SLASH_DASH_SLASHoxx = 384,
  anon_sym_SLASH_SLASH_DASH_SLASHxxo = 385,
  anon_sym_SLASH_SLASH_DASH_SLASHoxxo = 386,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASH = 387,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo = 388,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx = 389,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox = 390,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo = 391,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo = 392,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo = 393,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx = 394,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx = 395,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo = 396,
  anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo = 397,
  anon_sym_BSLASH_DASH_GT = 398,
  anon_sym_BSLASH_DASH_GTo = 399,
  anon_sym_BSLASH_DASH_GTx = 400,
  anon_sym_BSLASH_DASH_GTox = 401,
  anon_sym_BSLASH_DASH_GToo = 402,
  anon_sym_BSLASH_DASH_GTxo = 403,
  anon_sym_BSLASH_DASH_GToxo = 404,
  anon_sym_BSLASH_DASH_GTxx = 405,
  anon_sym_BSLASH_DASH_GToxx = 406,
  anon_sym_BSLASH_DASH_GTxxo = 407,
  anon_sym_BSLASH_DASH_GToxxo = 408,
  anon_sym_BSLASH_DASH_GT_GT = 409,
  anon_sym_BSLASH_DASH_GT_GTo = 410,
  anon_sym_BSLASH_DASH_GT_GTx = 411,
  anon_sym_BSLASH_DASH_GT_GTox = 412,
  anon_sym_BSLASH_DASH_GT_GToo = 413,
  anon_sym_BSLASH_DASH_GT_GTxo = 414,
  anon_sym_BSLASH_DASH_GT_GToxo = 415,
  anon_sym_BSLASH_DASH_GT_GTxx = 416,
  anon_sym_BSLASH_DASH_GT_GToxx = 417,
  anon_sym_BSLASH_DASH_GT_GTxxo = 418,
  anon_sym_BSLASH_DASH_GT_GToxxo = 419,
  anon_sym_BSLASH_DASH_BSLASH = 420,
  anon_sym_BSLASH_DASH_BSLASHo = 421,
  anon_sym_BSLASH_DASH_BSLASHx = 422,
  anon_sym_BSLASH_DASH_BSLASHox = 423,
  anon_sym_BSLASH_DASH_BSLASHoo = 424,
  anon_sym_BSLASH_DASH_BSLASHxo = 425,
  anon_sym_BSLASH_DASH_BSLASHoxo = 426,
  anon_sym_BSLASH_DASH_BSLASHxx = 427,
  anon_sym_BSLASH_DASH_BSLASHoxx = 428,
  anon_sym_BSLASH_DASH_BSLASHxxo = 429,
  anon_sym_BSLASH_DASH_BSLASHoxxo = 430,
  anon_sym_BSLASH_DASH_BSLASH_BSLASH = 431,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHo = 432,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHx = 433,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHox = 434,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHoo = 435,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHxo = 436,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo = 437,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHxx = 438,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx = 439,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo = 440,
  anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo = 441,
  anon_sym_BSLASH_DASH_SLASH = 442,
  anon_sym_BSLASH_DASH_SLASHo = 443,
  anon_sym_BSLASH_DASH_SLASHx = 444,
  anon_sym_BSLASH_DASH_SLASHox = 445,
  anon_sym_BSLASH_DASH_SLASHoo = 446,
  anon_sym_BSLASH_DASH_SLASHxo = 447,
  anon_sym_BSLASH_DASH_SLASHoxo = 448,
  anon_sym_BSLASH_DASH_SLASHxx = 449,
  anon_sym_BSLASH_DASH_SLASHoxx = 450,
  anon_sym_BSLASH_DASH_SLASHxxo = 451,
  anon_sym_BSLASH_DASH_SLASHoxxo = 452,
  anon_sym_BSLASH_DASH_SLASH_SLASH = 453,
  anon_sym_BSLASH_DASH_SLASH_SLASHo = 454,
  anon_sym_BSLASH_DASH_SLASH_SLASHx = 455,
  anon_sym_BSLASH_DASH_SLASH_SLASHox = 456,
  anon_sym_BSLASH_DASH_SLASH_SLASHoo = 457,
  anon_sym_BSLASH_DASH_SLASH_SLASHxo = 458,
  anon_sym_BSLASH_DASH_SLASH_SLASHoxo = 459,
  anon_sym_BSLASH_DASH_SLASH_SLASHxx = 460,
  anon_sym_BSLASH_DASH_SLASH_SLASHoxx = 461,
  anon_sym_BSLASH_DASH_SLASH_SLASHxxo = 462,
  anon_sym_BSLASH_DASH_SLASH_SLASHoxxo = 463,
  anon_sym_BSLASH_BSLASH_DASH_GT = 464,
  anon_sym_BSLASH_BSLASH_DASH_GTo = 465,
  anon_sym_BSLASH_BSLASH_DASH_GTx = 466,
  anon_sym_BSLASH_BSLASH_DASH_GTox = 467,
  anon_sym_BSLASH_BSLASH_DASH_GToo = 468,
  anon_sym_BSLASH_BSLASH_DASH_GTxo = 469,
  anon_sym_BSLASH_BSLASH_DASH_GToxo = 470,
  anon_sym_BSLASH_BSLASH_DASH_GTxx = 471,
  anon_sym_BSLASH_BSLASH_DASH_GToxx = 472,
  anon_sym_BSLASH_BSLASH_DASH_GTxxo = 473,
  anon_sym_BSLASH_BSLASH_DASH_GToxxo = 474,
  anon_sym_BSLASH_BSLASH_DASH_GT_GT = 475,
  anon_sym_BSLASH_BSLASH_DASH_GT_GTo = 476,
  anon_sym_BSLASH_BSLASH_DASH_GT_GTx = 477,
  anon_sym_BSLASH_BSLASH_DASH_GT_GTox = 478,
  anon_sym_BSLASH_BSLASH_DASH_GT_GToo = 479,
  anon_sym_BSLASH_BSLASH_DASH_GT_GTxo = 480,
  anon_sym_BSLASH_BSLASH_DASH_GT_GToxo = 481,
  anon_sym_BSLASH_BSLASH_DASH_GT_GTxx = 482,
  anon_sym_BSLASH_BSLASH_DASH_GT_GToxx = 483,
  anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo = 484,
  anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo = 485,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH = 486,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHo = 487,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHx = 488,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHox = 489,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHoo = 490,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHxo = 491,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo = 492,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHxx = 493,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx = 494,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo = 495,
  anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo = 496,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH = 497,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo = 498,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx = 499,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox = 500,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo = 501,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo = 502,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo = 503,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx = 504,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx = 505,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo = 506,
  anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo = 507,
  anon_sym_BSLASH_BSLASH_DASH_SLASH = 508,
  anon_sym_BSLASH_BSLASH_DASH_SLASHo = 509,
  anon_sym_BSLASH_BSLASH_DASH_SLASHx = 510,
  anon_sym_BSLASH_BSLASH_DASH_SLASHox = 511,
  anon_sym_BSLASH_BSLASH_DASH_SLASHoo = 512,
  anon_sym_BSLASH_BSLASH_DASH_SLASHxo = 513,
  anon_sym_BSLASH_BSLASH_DASH_SLASHoxo = 514,
  anon_sym_BSLASH_BSLASH_DASH_SLASHxx = 515,
  anon_sym_BSLASH_BSLASH_DASH_SLASHoxx = 516,
  anon_sym_BSLASH_BSLASH_DASH_SLASHxxo = 517,
  anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo = 518,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH = 519,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo = 520,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx = 521,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox = 522,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo = 523,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo = 524,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo = 525,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx = 526,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx = 527,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo = 528,
  anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo = 529,
  anon_sym_LT_DASH_DASH_GT = 530,
  anon_sym_LT_DASH_DASH_GTo = 531,
  anon_sym_LT_DASH_DASH_GTx = 532,
  anon_sym_LT_DASH_DASH_GTox = 533,
  anon_sym_LT_DASH_DASH_GToo = 534,
  anon_sym_LT_DASH_DASH_GTxo = 535,
  anon_sym_LT_DASH_DASH_GToxo = 536,
  anon_sym_LT_DASH_DASH_GTxx = 537,
  anon_sym_LT_DASH_DASH_GToxx = 538,
  anon_sym_LT_DASH_DASH_GTxxo = 539,
  anon_sym_LT_DASH_DASH_GToxxo = 540,
  anon_sym_LT_DASH_DASH_GT_GT = 541,
  anon_sym_LT_DASH_DASH_GT_GTo = 542,
  anon_sym_LT_DASH_DASH_GT_GTx = 543,
  anon_sym_LT_DASH_DASH_GT_GTox = 544,
  anon_sym_LT_DASH_DASH_GT_GToo = 545,
  anon_sym_LT_DASH_DASH_GT_GTxo = 546,
  anon_sym_LT_DASH_DASH_GT_GToxo = 547,
  anon_sym_LT_DASH_DASH_GT_GTxx = 548,
  anon_sym_LT_DASH_DASH_GT_GToxx = 549,
  anon_sym_LT_DASH_DASH_GT_GTxxo = 550,
  anon_sym_LT_DASH_DASH_GT_GToxxo = 551,
  anon_sym_LT_DASH_DASH_BSLASH = 552,
  anon_sym_LT_DASH_DASH_BSLASHo = 553,
  anon_sym_LT_DASH_DASH_BSLASHx = 554,
  anon_sym_LT_DASH_DASH_BSLASHox = 555,
  anon_sym_LT_DASH_DASH_BSLASHoo = 556,
  anon_sym_LT_DASH_DASH_BSLASHxo = 557,
  anon_sym_LT_DASH_DASH_BSLASHoxo = 558,
  anon_sym_LT_DASH_DASH_BSLASHxx = 559,
  anon_sym_LT_DASH_DASH_BSLASHoxx = 560,
  anon_sym_LT_DASH_DASH_BSLASHxxo = 561,
  anon_sym_LT_DASH_DASH_BSLASHoxxo = 562,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASH = 563,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHo = 564,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHx = 565,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHox = 566,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo = 567,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo = 568,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo = 569,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx = 570,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx = 571,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo = 572,
  anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo = 573,
  anon_sym_LT_DASH_DASH_SLASH = 574,
  anon_sym_LT_DASH_DASH_SLASHo = 575,
  anon_sym_LT_DASH_DASH_SLASHx = 576,
  anon_sym_LT_DASH_DASH_SLASHox = 577,
  anon_sym_LT_DASH_DASH_SLASHoo = 578,
  anon_sym_LT_DASH_DASH_SLASHxo = 579,
  anon_sym_LT_DASH_DASH_SLASHoxo = 580,
  anon_sym_LT_DASH_DASH_SLASHxx = 581,
  anon_sym_LT_DASH_DASH_SLASHoxx = 582,
  anon_sym_LT_DASH_DASH_SLASHxxo = 583,
  anon_sym_LT_DASH_DASH_SLASHoxxo = 584,
  anon_sym_LT_DASH_DASH_SLASH_SLASH = 585,
  anon_sym_LT_DASH_DASH_SLASH_SLASHo = 586,
  anon_sym_LT_DASH_DASH_SLASH_SLASHx = 587,
  anon_sym_LT_DASH_DASH_SLASH_SLASHox = 588,
  anon_sym_LT_DASH_DASH_SLASH_SLASHoo = 589,
  anon_sym_LT_DASH_DASH_SLASH_SLASHxo = 590,
  anon_sym_LT_DASH_DASH_SLASH_SLASHoxo = 591,
  anon_sym_LT_DASH_DASH_SLASH_SLASHxx = 592,
  anon_sym_LT_DASH_DASH_SLASH_SLASHoxx = 593,
  anon_sym_LT_DASH_DASH_SLASH_SLASHxxo = 594,
  anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo = 595,
  anon_sym_LT_LT_DASH_DASH_GT = 596,
  anon_sym_LT_LT_DASH_DASH_GTo = 597,
  anon_sym_LT_LT_DASH_DASH_GTx = 598,
  anon_sym_LT_LT_DASH_DASH_GTox = 599,
  anon_sym_LT_LT_DASH_DASH_GToo = 600,
  anon_sym_LT_LT_DASH_DASH_GTxo = 601,
  anon_sym_LT_LT_DASH_DASH_GToxo = 602,
  anon_sym_LT_LT_DASH_DASH_GTxx = 603,
  anon_sym_LT_LT_DASH_DASH_GToxx = 604,
  anon_sym_LT_LT_DASH_DASH_GTxxo = 605,
  anon_sym_LT_LT_DASH_DASH_GToxxo = 606,
  anon_sym_LT_LT_DASH_DASH_GT_GT = 607,
  anon_sym_LT_LT_DASH_DASH_GT_GTo = 608,
  anon_sym_LT_LT_DASH_DASH_GT_GTx = 609,
  anon_sym_LT_LT_DASH_DASH_GT_GTox = 610,
  anon_sym_LT_LT_DASH_DASH_GT_GToo = 611,
  anon_sym_LT_LT_DASH_DASH_GT_GTxo = 612,
  anon_sym_LT_LT_DASH_DASH_GT_GToxo = 613,
  anon_sym_LT_LT_DASH_DASH_GT_GTxx = 614,
  anon_sym_LT_LT_DASH_DASH_GT_GToxx = 615,
  anon_sym_LT_LT_DASH_DASH_GT_GTxxo = 616,
  anon_sym_LT_LT_DASH_DASH_GT_GToxxo = 617,
  anon_sym_LT_LT_DASH_DASH_BSLASH = 618,
  anon_sym_LT_LT_DASH_DASH_BSLASHo = 619,
  anon_sym_LT_LT_DASH_DASH_BSLASHx = 620,
  anon_sym_LT_LT_DASH_DASH_BSLASHox = 621,
  anon_sym_LT_LT_DASH_DASH_BSLASHoo = 622,
  anon_sym_LT_LT_DASH_DASH_BSLASHxo = 623,
  anon_sym_LT_LT_DASH_DASH_BSLASHoxo = 624,
  anon_sym_LT_LT_DASH_DASH_BSLASHxx = 625,
  anon_sym_LT_LT_DASH_DASH_BSLASHoxx = 626,
  anon_sym_LT_LT_DASH_DASH_BSLASHxxo = 627,
  anon_sym_LT_LT_DASH_DASH_BSLASHoxxo = 628,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH = 629,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo = 630,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx = 631,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox = 632,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo = 633,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo = 634,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo = 635,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx = 636,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx = 637,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo = 638,
  anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo = 639,
  anon_sym_LT_LT_DASH_DASH_SLASH = 640,
  anon_sym_LT_LT_DASH_DASH_SLASHo = 641,
  anon_sym_LT_LT_DASH_DASH_SLASHx = 642,
  anon_sym_LT_LT_DASH_DASH_SLASHox = 643,
  anon_sym_LT_LT_DASH_DASH_SLASHoo = 644,
  anon_sym_LT_LT_DASH_DASH_SLASHxo = 645,
  anon_sym_LT_LT_DASH_DASH_SLASHoxo = 646,
  anon_sym_LT_LT_DASH_DASH_SLASHxx = 647,
  anon_sym_LT_LT_DASH_DASH_SLASHoxx = 648,
  anon_sym_LT_LT_DASH_DASH_SLASHxxo = 649,
  anon_sym_LT_LT_DASH_DASH_SLASHoxxo = 650,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASH = 651,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo = 652,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx = 653,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox = 654,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo = 655,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo = 656,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo = 657,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx = 658,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx = 659,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo = 660,
  anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo = 661,
  anon_sym_SLASH_DASH_DASH_GT = 662,
  anon_sym_SLASH_DASH_DASH_GTo = 663,
  anon_sym_SLASH_DASH_DASH_GTx = 664,
  anon_sym_SLASH_DASH_DASH_GTox = 665,
  anon_sym_SLASH_DASH_DASH_GToo = 666,
  anon_sym_SLASH_DASH_DASH_GTxo = 667,
  anon_sym_SLASH_DASH_DASH_GToxo = 668,
  anon_sym_SLASH_DASH_DASH_GTxx = 669,
  anon_sym_SLASH_DASH_DASH_GToxx = 670,
  anon_sym_SLASH_DASH_DASH_GTxxo = 671,
  anon_sym_SLASH_DASH_DASH_GToxxo = 672,
  anon_sym_SLASH_DASH_DASH_GT_GT = 673,
  anon_sym_SLASH_DASH_DASH_GT_GTo = 674,
  anon_sym_SLASH_DASH_DASH_GT_GTx = 675,
  anon_sym_SLASH_DASH_DASH_GT_GTox = 676,
  anon_sym_SLASH_DASH_DASH_GT_GToo = 677,
  anon_sym_SLASH_DASH_DASH_GT_GTxo = 678,
  anon_sym_SLASH_DASH_DASH_GT_GToxo = 679,
  anon_sym_SLASH_DASH_DASH_GT_GTxx = 680,
  anon_sym_SLASH_DASH_DASH_GT_GToxx = 681,
  anon_sym_SLASH_DASH_DASH_GT_GTxxo = 682,
  anon_sym_SLASH_DASH_DASH_GT_GToxxo = 683,
  anon_sym_SLASH_DASH_DASH_BSLASH = 684,
  anon_sym_SLASH_DASH_DASH_BSLASHo = 685,
  anon_sym_SLASH_DASH_DASH_BSLASHx = 686,
  anon_sym_SLASH_DASH_DASH_BSLASHox = 687,
  anon_sym_SLASH_DASH_DASH_BSLASHoo = 688,
  anon_sym_SLASH_DASH_DASH_BSLASHxo = 689,
  anon_sym_SLASH_DASH_DASH_BSLASHoxo = 690,
  anon_sym_SLASH_DASH_DASH_BSLASHxx = 691,
  anon_sym_SLASH_DASH_DASH_BSLASHoxx = 692,
  anon_sym_SLASH_DASH_DASH_BSLASHxxo = 693,
  anon_sym_SLASH_DASH_DASH_BSLASHoxxo = 694,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH = 695,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo = 696,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx = 697,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox = 698,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo = 699,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo = 700,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo = 701,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx = 702,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx = 703,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo = 704,
  anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo = 705,
  anon_sym_SLASH_DASH_DASH_SLASH = 706,
  anon_sym_SLASH_DASH_DASH_SLASHo = 707,
  anon_sym_SLASH_DASH_DASH_SLASHx = 708,
  anon_sym_SLASH_DASH_DASH_SLASHox = 709,
  anon_sym_SLASH_DASH_DASH_SLASHoo = 710,
  anon_sym_SLASH_DASH_DASH_SLASHxo = 711,
  anon_sym_SLASH_DASH_DASH_SLASHoxo = 712,
  anon_sym_SLASH_DASH_DASH_SLASHxx = 713,
  anon_sym_SLASH_DASH_DASH_SLASHoxx = 714,
  anon_sym_SLASH_DASH_DASH_SLASHxxo = 715,
  anon_sym_SLASH_DASH_DASH_SLASHoxxo = 716,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASH = 717,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHo = 718,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHx = 719,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHox = 720,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo = 721,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo = 722,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo = 723,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx = 724,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx = 725,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo = 726,
  anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo = 727,
  anon_sym_SLASH_SLASH_DASH_DASH_GT = 728,
  anon_sym_SLASH_SLASH_DASH_DASH_GTo = 729,
  anon_sym_SLASH_SLASH_DASH_DASH_GTx = 730,
  anon_sym_SLASH_SLASH_DASH_DASH_GTox = 731,
  anon_sym_SLASH_SLASH_DASH_DASH_GToo = 732,
  anon_sym_SLASH_SLASH_DASH_DASH_GTxo = 733,
  anon_sym_SLASH_SLASH_DASH_DASH_GToxo = 734,
  anon_sym_SLASH_SLASH_DASH_DASH_GTxx = 735,
  anon_sym_SLASH_SLASH_DASH_DASH_GToxx = 736,
  anon_sym_SLASH_SLASH_DASH_DASH_GTxxo = 737,
  anon_sym_SLASH_SLASH_DASH_DASH_GToxxo = 738,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GT = 739,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo = 740,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx = 741,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox = 742,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo = 743,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo = 744,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo = 745,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx = 746,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx = 747,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo = 748,
  anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo = 749,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH = 750,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo = 751,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx = 752,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox = 753,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo = 754,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo = 755,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo = 756,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx = 757,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx = 758,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo = 759,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo = 760,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH = 761,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo = 762,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx = 763,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox = 764,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo = 765,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo = 766,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo = 767,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx = 768,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx = 769,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo = 770,
  anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo = 771,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH = 772,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHo = 773,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHx = 774,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHox = 775,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo = 776,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo = 777,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo = 778,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx = 779,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx = 780,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo = 781,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo = 782,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH = 783,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo = 784,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx = 785,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox = 786,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo = 787,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo = 788,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo = 789,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx = 790,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx = 791,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo = 792,
  anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo = 793,
  anon_sym_BSLASH_DASH_DASH_GT = 794,
  anon_sym_BSLASH_DASH_DASH_GTo = 795,
  anon_sym_BSLASH_DASH_DASH_GTx = 796,
  anon_sym_BSLASH_DASH_DASH_GTox = 797,
  anon_sym_BSLASH_DASH_DASH_GToo = 798,
  anon_sym_BSLASH_DASH_DASH_GTxo = 799,
  anon_sym_BSLASH_DASH_DASH_GToxo = 800,
  anon_sym_BSLASH_DASH_DASH_GTxx = 801,
  anon_sym_BSLASH_DASH_DASH_GToxx = 802,
  anon_sym_BSLASH_DASH_DASH_GTxxo = 803,
  anon_sym_BSLASH_DASH_DASH_GToxxo = 804,
  anon_sym_BSLASH_DASH_DASH_GT_GT = 805,
  anon_sym_BSLASH_DASH_DASH_GT_GTo = 806,
  anon_sym_BSLASH_DASH_DASH_GT_GTx = 807,
  anon_sym_BSLASH_DASH_DASH_GT_GTox = 808,
  anon_sym_BSLASH_DASH_DASH_GT_GToo = 809,
  anon_sym_BSLASH_DASH_DASH_GT_GTxo = 810,
  anon_sym_BSLASH_DASH_DASH_GT_GToxo = 811,
  anon_sym_BSLASH_DASH_DASH_GT_GTxx = 812,
  anon_sym_BSLASH_DASH_DASH_GT_GToxx = 813,
  anon_sym_BSLASH_DASH_DASH_GT_GTxxo = 814,
  anon_sym_BSLASH_DASH_DASH_GT_GToxxo = 815,
  anon_sym_BSLASH_DASH_DASH_BSLASH = 816,
  anon_sym_BSLASH_DASH_DASH_BSLASHo = 817,
  anon_sym_BSLASH_DASH_DASH_BSLASHx = 818,
  anon_sym_BSLASH_DASH_DASH_BSLASHox = 819,
  anon_sym_BSLASH_DASH_DASH_BSLASHoo = 820,
  anon_sym_BSLASH_DASH_DASH_BSLASHxo = 821,
  anon_sym_BSLASH_DASH_DASH_BSLASHoxo = 822,
  anon_sym_BSLASH_DASH_DASH_BSLASHxx = 823,
  anon_sym_BSLASH_DASH_DASH_BSLASHoxx = 824,
  anon_sym_BSLASH_DASH_DASH_BSLASHxxo = 825,
  anon_sym_BSLASH_DASH_DASH_BSLASHoxxo = 826,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH = 827,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo = 828,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx = 829,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox = 830,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo = 831,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo = 832,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo = 833,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx = 834,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx = 835,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo = 836,
  anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo = 837,
  anon_sym_BSLASH_DASH_DASH_SLASH = 838,
  anon_sym_BSLASH_DASH_DASH_SLASHo = 839,
  anon_sym_BSLASH_DASH_DASH_SLASHx = 840,
  anon_sym_BSLASH_DASH_DASH_SLASHox = 841,
  anon_sym_BSLASH_DASH_DASH_SLASHoo = 842,
  anon_sym_BSLASH_DASH_DASH_SLASHxo = 843,
  anon_sym_BSLASH_DASH_DASH_SLASHoxo = 844,
  anon_sym_BSLASH_DASH_DASH_SLASHxx = 845,
  anon_sym_BSLASH_DASH_DASH_SLASHoxx = 846,
  anon_sym_BSLASH_DASH_DASH_SLASHxxo = 847,
  anon_sym_BSLASH_DASH_DASH_SLASHoxxo = 848,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASH = 849,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo = 850,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx = 851,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox = 852,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo = 853,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo = 854,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo = 855,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx = 856,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx = 857,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo = 858,
  anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo = 859,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT = 860,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GTo = 861,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GTx = 862,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GTox = 863,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GToo = 864,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo = 865,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo = 866,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx = 867,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx = 868,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo = 869,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo = 870,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT = 871,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo = 872,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx = 873,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox = 874,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo = 875,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo = 876,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo = 877,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx = 878,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx = 879,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo = 880,
  anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo = 881,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH = 882,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo = 883,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx = 884,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox = 885,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo = 886,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo = 887,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo = 888,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx = 889,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx = 890,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo = 891,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo = 892,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH = 893,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo = 894,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx = 895,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox = 896,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo = 897,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo = 898,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo = 899,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx = 900,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx = 901,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo = 902,
  anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo = 903,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH = 904,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo = 905,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx = 906,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox = 907,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo = 908,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo = 909,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo = 910,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx = 911,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx = 912,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo = 913,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo = 914,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH = 915,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo = 916,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx = 917,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox = 918,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo = 919,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo = 920,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo = 921,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx = 922,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx = 923,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo = 924,
  anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo = 925,
  anon_sym_COLON = 926,
  aux_sym_sequence_diagram_token1 = 927,
  anon_sym_ATstartjson = 928,
  anon_sym_AT = 929,
  aux_sym_json_token1 = 930,
  anon_sym_ATendjson = 931,
  aux_sym_json_token2 = 932,
  anon_sym_ATstartyaml = 933,
  anon_sym_ATendyaml = 934,
  anon_sym_ATstartebnf = 935,
  anon_sym_ATendebnf = 936,
  anon_sym_ATstartregex = 937,
  anon_sym_ATendregex = 938,
  anon_sym_ATstartditaa = 939,
  anon_sym_ATendditaa = 940,
  anon_sym_ATstartgantt = 941,
  anon_sym_ATendgantt = 942,
  anon_sym_ATstartchronology = 943,
  anon_sym_ATendchronology = 944,
  anon_sym_ATstartmindmap = 945,
  anon_sym_ATendmindmap = 946,
  anon_sym_ATstartwbs = 947,
  anon_sym_ATendwbs = 948,
  anon_sym_ATstartchen = 949,
  anon_sym_ATendchen = 950,
  anon_sym_SQUOTE = 951,
  aux_sym_comment_token1 = 952,
  anon_sym_SLASH_SQUOTE = 953,
  aux_sym_comment_token2 = 954,
  anon_sym_SLASH = 955,
  anon_sym_group = 956,
  aux_sym_group_block_token1 = 957,
  anon_sym_end = 958,
  anon_sym_loop = 959,
  sym_color = 960,
  sym_diagram = 961,
  sym_uml = 962,
  sym_expression = 963,
  sym_skinparam = 964,
  sym_boolean_literal = 965,
  sym_attribute = 966,
  sym_multiline = 967,
  sym_attr_alias = 968,
  sym_attr_order = 969,
  sym_string = 970,
  sym_escape_char = 971,
  sym_participant_name = 972,
  sym_sequence_diagram = 973,
  sym_json = 974,
  sym_yaml = 975,
  sym_ebnf = 976,
  sym_regex = 977,
  sym_ditaa = 978,
  sym_gantt = 979,
  sym_chronology = 980,
  sym_mindmap = 981,
  sym_wbs = 982,
  sym_chen = 983,
  sym_comment = 984,
  sym_group_block = 985,
  sym_loop_block = 986,
  aux_sym_uml_repeat1 = 987,
  aux_sym_attribute_repeat1 = 988,
  aux_sym_attribute_repeat2 = 989,
  aux_sym_multiline_repeat1 = 990,
  aux_sym_string_repeat1 = 991,
  aux_sym_json_repeat1 = 992,
  aux_sym_json_repeat2 = 993,
  alias_sym_chen_data = 994,
  alias_sym_chronology_data = 995,
  alias_sym_ditaa_data = 996,
  alias_sym_ebnf_data = 997,
  alias_sym_gantt_data = 998,
  alias_sym_json_data = 999,
  alias_sym_mindmap_data = 1000,
  alias_sym_name = 1001,
  alias_sym_new_name = 1002,
  alias_sym_regex_data = 1003,
  alias_sym_right = 1004,
  alias_sym_times = 1005,
  alias_sym_value = 1006,
  alias_sym_wbs_data = 1007,
  alias_sym_yaml_data = 1008,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_skinparam] = "skinparam",
  [anon_sym_sequenceMessageAlign] = "sequenceMessageAlign",
  [anon_sym_left] = "align",
  [anon_sym_right] = "align",
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
  [anon_sym_DASH_GT] = "connector",
  [anon_sym_DASH_GTo] = "connector",
  [anon_sym_DASH_GTx] = "connector",
  [anon_sym_DASH_GTox] = "connector",
  [anon_sym_DASH_GT_GT] = "connector",
  [anon_sym_DASH_GT_GTo] = "connector",
  [anon_sym_DASH_GT_GTx] = "connector",
  [anon_sym_DASH_GT_GTox] = "connector",
  [anon_sym_DASH_BSLASH] = "connector",
  [anon_sym_DASH_BSLASHo] = "connector",
  [anon_sym_DASH_BSLASHx] = "connector",
  [anon_sym_DASH_BSLASHox] = "connector",
  [anon_sym_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_DASH_SLASH] = "connector",
  [anon_sym_DASH_SLASHo] = "connector",
  [anon_sym_DASH_SLASHx] = "connector",
  [anon_sym_DASH_SLASHox] = "connector",
  [anon_sym_DASH_SLASH_SLASH] = "connector",
  [anon_sym_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_DASH_DASH_GT] = "connector",
  [anon_sym_DASH_DASH_GTo] = "connector",
  [anon_sym_DASH_DASH_GTx] = "connector",
  [anon_sym_DASH_DASH_GTox] = "connector",
  [anon_sym_DASH_DASH_GT_GT] = "connector",
  [anon_sym_DASH_DASH_GT_GTo] = "connector",
  [anon_sym_DASH_DASH_GT_GTx] = "connector",
  [anon_sym_DASH_DASH_GT_GTox] = "connector",
  [anon_sym_DASH_DASH_BSLASH] = "connector",
  [anon_sym_DASH_DASH_BSLASHo] = "connector",
  [anon_sym_DASH_DASH_BSLASHx] = "connector",
  [anon_sym_DASH_DASH_BSLASHox] = "connector",
  [anon_sym_DASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_DASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_DASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_DASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_DASH_DASH_SLASH] = "connector",
  [anon_sym_DASH_DASH_SLASHo] = "connector",
  [anon_sym_DASH_DASH_SLASHx] = "connector",
  [anon_sym_DASH_DASH_SLASHox] = "connector",
  [anon_sym_DASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_DASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_DASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_DASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_LT_DASH] = "connector",
  [anon_sym_o_LT_DASH] = "connector",
  [anon_sym_x_LT_DASH] = "connector",
  [anon_sym_xo_LT_DASH] = "connector",
  [anon_sym_LT_LT_DASH] = "connector",
  [anon_sym_o_LT_LT_DASH] = "connector",
  [anon_sym_x_LT_LT_DASH] = "connector",
  [anon_sym_xo_LT_LT_DASH] = "connector",
  [anon_sym_SLASH_DASH] = "connector",
  [anon_sym_o_SLASH_DASH] = "connector",
  [anon_sym_x_SLASH_DASH] = "connector",
  [anon_sym_xo_SLASH_DASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH] = "connector",
  [anon_sym_o_SLASH_SLASH_DASH] = "connector",
  [anon_sym_x_SLASH_SLASH_DASH] = "connector",
  [anon_sym_xo_SLASH_SLASH_DASH] = "connector",
  [anon_sym_BSLASH_DASH] = "connector",
  [anon_sym_o_BSLASH_DASH] = "connector",
  [anon_sym_x_BSLASH_DASH] = "connector",
  [anon_sym_xo_BSLASH_DASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH] = "connector",
  [anon_sym_o_BSLASH_BSLASH_DASH] = "connector",
  [anon_sym_x_BSLASH_BSLASH_DASH] = "connector",
  [anon_sym_xo_BSLASH_BSLASH_DASH] = "connector",
  [anon_sym_LT_DASH_DASH] = "connector",
  [anon_sym_o_LT_DASH_DASH] = "connector",
  [anon_sym_x_LT_DASH_DASH] = "connector",
  [anon_sym_xo_LT_DASH_DASH] = "connector",
  [anon_sym_LT_LT_DASH_DASH] = "connector",
  [anon_sym_o_LT_LT_DASH_DASH] = "connector",
  [anon_sym_x_LT_LT_DASH_DASH] = "connector",
  [anon_sym_xo_LT_LT_DASH_DASH] = "connector",
  [anon_sym_SLASH_DASH_DASH] = "connector",
  [anon_sym_o_SLASH_DASH_DASH] = "connector",
  [anon_sym_x_SLASH_DASH_DASH] = "connector",
  [anon_sym_xo_SLASH_DASH_DASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH] = "connector",
  [anon_sym_o_SLASH_SLASH_DASH_DASH] = "connector",
  [anon_sym_x_SLASH_SLASH_DASH_DASH] = "connector",
  [anon_sym_xo_SLASH_SLASH_DASH_DASH] = "connector",
  [anon_sym_BSLASH_DASH_DASH] = "connector",
  [anon_sym_o_BSLASH_DASH_DASH] = "connector",
  [anon_sym_x_BSLASH_DASH_DASH] = "connector",
  [anon_sym_xo_BSLASH_DASH_DASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH] = "connector",
  [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = "connector",
  [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = "connector",
  [anon_sym_xo_BSLASH_BSLASH_DASH_DASH] = "connector",
  [anon_sym_LT_DASH_GT] = "connector",
  [anon_sym_LT_DASH_GTo] = "connector",
  [anon_sym_LT_DASH_GTx] = "connector",
  [anon_sym_LT_DASH_GTox] = "connector",
  [anon_sym_LT_DASH_GToo] = "connector",
  [anon_sym_LT_DASH_GTxo] = "connector",
  [anon_sym_LT_DASH_GToxo] = "connector",
  [anon_sym_LT_DASH_GTxx] = "connector",
  [anon_sym_LT_DASH_GToxx] = "connector",
  [anon_sym_LT_DASH_GTxxo] = "connector",
  [anon_sym_LT_DASH_GToxxo] = "connector",
  [anon_sym_LT_DASH_GT_GT] = "connector",
  [anon_sym_LT_DASH_GT_GTo] = "connector",
  [anon_sym_LT_DASH_GT_GTx] = "connector",
  [anon_sym_LT_DASH_GT_GTox] = "connector",
  [anon_sym_LT_DASH_GT_GToo] = "connector",
  [anon_sym_LT_DASH_GT_GTxo] = "connector",
  [anon_sym_LT_DASH_GT_GToxo] = "connector",
  [anon_sym_LT_DASH_GT_GTxx] = "connector",
  [anon_sym_LT_DASH_GT_GToxx] = "connector",
  [anon_sym_LT_DASH_GT_GTxxo] = "connector",
  [anon_sym_LT_DASH_GT_GToxxo] = "connector",
  [anon_sym_LT_DASH_BSLASH] = "connector",
  [anon_sym_LT_DASH_BSLASHo] = "connector",
  [anon_sym_LT_DASH_BSLASHx] = "connector",
  [anon_sym_LT_DASH_BSLASHox] = "connector",
  [anon_sym_LT_DASH_BSLASHoo] = "connector",
  [anon_sym_LT_DASH_BSLASHxo] = "connector",
  [anon_sym_LT_DASH_BSLASHoxo] = "connector",
  [anon_sym_LT_DASH_BSLASHxx] = "connector",
  [anon_sym_LT_DASH_BSLASHoxx] = "connector",
  [anon_sym_LT_DASH_BSLASHxxo] = "connector",
  [anon_sym_LT_DASH_BSLASHoxxo] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_LT_DASH_SLASH] = "connector",
  [anon_sym_LT_DASH_SLASHo] = "connector",
  [anon_sym_LT_DASH_SLASHx] = "connector",
  [anon_sym_LT_DASH_SLASHox] = "connector",
  [anon_sym_LT_DASH_SLASHoo] = "connector",
  [anon_sym_LT_DASH_SLASHxo] = "connector",
  [anon_sym_LT_DASH_SLASHoxo] = "connector",
  [anon_sym_LT_DASH_SLASHxx] = "connector",
  [anon_sym_LT_DASH_SLASHoxx] = "connector",
  [anon_sym_LT_DASH_SLASHxxo] = "connector",
  [anon_sym_LT_DASH_SLASHoxxo] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASH] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_LT_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_LT_LT_DASH_GT] = "connector",
  [anon_sym_LT_LT_DASH_GTo] = "connector",
  [anon_sym_LT_LT_DASH_GTx] = "connector",
  [anon_sym_LT_LT_DASH_GTox] = "connector",
  [anon_sym_LT_LT_DASH_GToo] = "connector",
  [anon_sym_LT_LT_DASH_GTxo] = "connector",
  [anon_sym_LT_LT_DASH_GToxo] = "connector",
  [anon_sym_LT_LT_DASH_GTxx] = "connector",
  [anon_sym_LT_LT_DASH_GToxx] = "connector",
  [anon_sym_LT_LT_DASH_GTxxo] = "connector",
  [anon_sym_LT_LT_DASH_GToxxo] = "connector",
  [anon_sym_LT_LT_DASH_GT_GT] = "connector",
  [anon_sym_LT_LT_DASH_GT_GTo] = "connector",
  [anon_sym_LT_LT_DASH_GT_GTx] = "connector",
  [anon_sym_LT_LT_DASH_GT_GTox] = "connector",
  [anon_sym_LT_LT_DASH_GT_GToo] = "connector",
  [anon_sym_LT_LT_DASH_GT_GTxo] = "connector",
  [anon_sym_LT_LT_DASH_GT_GToxo] = "connector",
  [anon_sym_LT_LT_DASH_GT_GTxx] = "connector",
  [anon_sym_LT_LT_DASH_GT_GToxx] = "connector",
  [anon_sym_LT_LT_DASH_GT_GTxxo] = "connector",
  [anon_sym_LT_LT_DASH_GT_GToxxo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHx] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHox] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHoo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHxo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHoxo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHxx] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHoxx] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHxxo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASHoxxo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_LT_LT_DASH_SLASH] = "connector",
  [anon_sym_LT_LT_DASH_SLASHo] = "connector",
  [anon_sym_LT_LT_DASH_SLASHx] = "connector",
  [anon_sym_LT_LT_DASH_SLASHox] = "connector",
  [anon_sym_LT_LT_DASH_SLASHoo] = "connector",
  [anon_sym_LT_LT_DASH_SLASHxo] = "connector",
  [anon_sym_LT_LT_DASH_SLASHoxo] = "connector",
  [anon_sym_LT_LT_DASH_SLASHxx] = "connector",
  [anon_sym_LT_LT_DASH_SLASHoxx] = "connector",
  [anon_sym_LT_LT_DASH_SLASHxxo] = "connector",
  [anon_sym_LT_LT_DASH_SLASHoxxo] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASH] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_SLASH_DASH_GT] = "connector",
  [anon_sym_SLASH_DASH_GTo] = "connector",
  [anon_sym_SLASH_DASH_GTx] = "connector",
  [anon_sym_SLASH_DASH_GTox] = "connector",
  [anon_sym_SLASH_DASH_GToo] = "connector",
  [anon_sym_SLASH_DASH_GTxo] = "connector",
  [anon_sym_SLASH_DASH_GToxo] = "connector",
  [anon_sym_SLASH_DASH_GTxx] = "connector",
  [anon_sym_SLASH_DASH_GToxx] = "connector",
  [anon_sym_SLASH_DASH_GTxxo] = "connector",
  [anon_sym_SLASH_DASH_GToxxo] = "connector",
  [anon_sym_SLASH_DASH_GT_GT] = "connector",
  [anon_sym_SLASH_DASH_GT_GTo] = "connector",
  [anon_sym_SLASH_DASH_GT_GTx] = "connector",
  [anon_sym_SLASH_DASH_GT_GTox] = "connector",
  [anon_sym_SLASH_DASH_GT_GToo] = "connector",
  [anon_sym_SLASH_DASH_GT_GTxo] = "connector",
  [anon_sym_SLASH_DASH_GT_GToxo] = "connector",
  [anon_sym_SLASH_DASH_GT_GTxx] = "connector",
  [anon_sym_SLASH_DASH_GT_GToxx] = "connector",
  [anon_sym_SLASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_SLASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_SLASH_DASH_BSLASH] = "connector",
  [anon_sym_SLASH_DASH_BSLASHo] = "connector",
  [anon_sym_SLASH_DASH_BSLASHx] = "connector",
  [anon_sym_SLASH_DASH_BSLASHox] = "connector",
  [anon_sym_SLASH_DASH_BSLASHoo] = "connector",
  [anon_sym_SLASH_DASH_BSLASHxo] = "connector",
  [anon_sym_SLASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_SLASH_DASH_BSLASHxx] = "connector",
  [anon_sym_SLASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_SLASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_SLASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_SLASH_DASH_SLASH] = "connector",
  [anon_sym_SLASH_DASH_SLASHo] = "connector",
  [anon_sym_SLASH_DASH_SLASHx] = "connector",
  [anon_sym_SLASH_DASH_SLASHox] = "connector",
  [anon_sym_SLASH_DASH_SLASHoo] = "connector",
  [anon_sym_SLASH_DASH_SLASHxo] = "connector",
  [anon_sym_SLASH_DASH_SLASHoxo] = "connector",
  [anon_sym_SLASH_DASH_SLASHxx] = "connector",
  [anon_sym_SLASH_DASH_SLASHoxx] = "connector",
  [anon_sym_SLASH_DASH_SLASHxxo] = "connector",
  [anon_sym_SLASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GTo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GTx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GTox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GToo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GTxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GToxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GTxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GToxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GTxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GToxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GT] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GTo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GTx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GTox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GToo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHoo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_BSLASH_DASH_GT] = "connector",
  [anon_sym_BSLASH_DASH_GTo] = "connector",
  [anon_sym_BSLASH_DASH_GTx] = "connector",
  [anon_sym_BSLASH_DASH_GTox] = "connector",
  [anon_sym_BSLASH_DASH_GToo] = "connector",
  [anon_sym_BSLASH_DASH_GTxo] = "connector",
  [anon_sym_BSLASH_DASH_GToxo] = "connector",
  [anon_sym_BSLASH_DASH_GTxx] = "connector",
  [anon_sym_BSLASH_DASH_GToxx] = "connector",
  [anon_sym_BSLASH_DASH_GTxxo] = "connector",
  [anon_sym_BSLASH_DASH_GToxxo] = "connector",
  [anon_sym_BSLASH_DASH_GT_GT] = "connector",
  [anon_sym_BSLASH_DASH_GT_GTo] = "connector",
  [anon_sym_BSLASH_DASH_GT_GTx] = "connector",
  [anon_sym_BSLASH_DASH_GT_GTox] = "connector",
  [anon_sym_BSLASH_DASH_GT_GToo] = "connector",
  [anon_sym_BSLASH_DASH_GT_GTxo] = "connector",
  [anon_sym_BSLASH_DASH_GT_GToxo] = "connector",
  [anon_sym_BSLASH_DASH_GT_GTxx] = "connector",
  [anon_sym_BSLASH_DASH_GT_GToxx] = "connector",
  [anon_sym_BSLASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_BSLASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHx] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHox] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHoo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHxo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHxx] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_BSLASH_DASH_SLASH] = "connector",
  [anon_sym_BSLASH_DASH_SLASHo] = "connector",
  [anon_sym_BSLASH_DASH_SLASHx] = "connector",
  [anon_sym_BSLASH_DASH_SLASHox] = "connector",
  [anon_sym_BSLASH_DASH_SLASHoo] = "connector",
  [anon_sym_BSLASH_DASH_SLASHxo] = "connector",
  [anon_sym_BSLASH_DASH_SLASHoxo] = "connector",
  [anon_sym_BSLASH_DASH_SLASHxx] = "connector",
  [anon_sym_BSLASH_DASH_SLASHoxx] = "connector",
  [anon_sym_BSLASH_DASH_SLASHxxo] = "connector",
  [anon_sym_BSLASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GTo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GTx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GTox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GToo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GTxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GToxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GTxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GToxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GTxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GToxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GT] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_LT_DASH_DASH_GT] = "connector",
  [anon_sym_LT_DASH_DASH_GTo] = "connector",
  [anon_sym_LT_DASH_DASH_GTx] = "connector",
  [anon_sym_LT_DASH_DASH_GTox] = "connector",
  [anon_sym_LT_DASH_DASH_GToo] = "connector",
  [anon_sym_LT_DASH_DASH_GTxo] = "connector",
  [anon_sym_LT_DASH_DASH_GToxo] = "connector",
  [anon_sym_LT_DASH_DASH_GTxx] = "connector",
  [anon_sym_LT_DASH_DASH_GToxx] = "connector",
  [anon_sym_LT_DASH_DASH_GTxxo] = "connector",
  [anon_sym_LT_DASH_DASH_GToxxo] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GT] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GTo] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GTx] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GTox] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GToo] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GTxo] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GToxo] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GTxx] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GToxx] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_LT_DASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHx] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHox] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHoo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHxo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHxx] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHx] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHox] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHoo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHxo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHoxo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHxx] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHoxx] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHxxo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GTo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GTx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GTox] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GToo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GTxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GToxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GTxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GToxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GTxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GToxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GT] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GTo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GTx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GTox] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GToo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHox] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHox] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHoo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT] = "connector",
  [anon_sym_SLASH_DASH_DASH_GTo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GTx] = "connector",
  [anon_sym_SLASH_DASH_DASH_GTox] = "connector",
  [anon_sym_SLASH_DASH_DASH_GToo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GTxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GToxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GTxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_GToxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_GTxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GToxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GT] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GTo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GTx] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GTox] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GToo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GTxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GToxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GTxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GToxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHx] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHox] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHoo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHx] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHox] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHoo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHoxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHoxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GTo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GTx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GTox] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GToo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GTxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GToxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GTxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GToxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GTxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GToxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GT] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GTo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GTx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GTox] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GToo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GTxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GToxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GTxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GToxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHox] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHoo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHox] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHoo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHoxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHoxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo] = "connector",
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = "connector",
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
  [sym_skinparam] = "skinparam",
  [sym_boolean_literal] = "boolean_literal",
  [sym_attribute] = "attribute",
  [sym_multiline] = "multiline",
  [sym_attr_alias] = "attr_alias",
  [sym_attr_order] = "attr_order",
  [sym_string] = "string",
  [sym_escape_char] = "escape_char",
  [sym_participant_name] = "left",
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
  [alias_sym_mindmap_data] = "mindmap_data",
  [alias_sym_name] = "name",
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
  [anon_sym_skinparam] = anon_sym_skinparam,
  [anon_sym_sequenceMessageAlign] = anon_sym_sequenceMessageAlign,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_left,
  [anon_sym_center] = anon_sym_left,
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
  [anon_sym_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_LT_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_LT_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_LT_DASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_LT_LT_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_LT_LT_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_LT_LT_DASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_SLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_SLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_SLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_SLASH_SLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_SLASH_SLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_SLASH_SLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_BSLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_BSLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_BSLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_BSLASH_BSLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_BSLASH_BSLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_BSLASH_BSLASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_LT_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_LT_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_LT_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_LT_LT_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_LT_LT_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_LT_LT_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_SLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_SLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_SLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_SLASH_SLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_SLASH_SLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_SLASH_SLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_BSLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_BSLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_BSLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_xo_BSLASH_BSLASH_DASH_DASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo] = anon_sym_DASH_GT,
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = anon_sym_DASH_GT,
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
  [alias_sym_mindmap_data] = alias_sym_mindmap_data,
  [alias_sym_name] = alias_sym_name,
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
  [anon_sym_skinparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequenceMessageAlign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_LT_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_LT_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_LT_LT_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_SLASH_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_SLASH_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_SLASH_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_BSLASH_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_BSLASH_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_BSLASH_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_LT_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_LT_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_LT_LT_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_SLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_SLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_SLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_SLASH_SLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_SLASH_SLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_SLASH_SLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_BSLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_BSLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_BSLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xo_BSLASH_BSLASH_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = {
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
  [alias_sym_mindmap_data] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
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
    [1] = alias_sym_name,
  },
  [2] = {
    [1] = alias_sym_json_data,
  },
  [3] = {
    [1] = alias_sym_yaml_data,
  },
  [4] = {
    [1] = alias_sym_ebnf_data,
  },
  [5] = {
    [1] = alias_sym_regex_data,
  },
  [6] = {
    [1] = alias_sym_ditaa_data,
  },
  [7] = {
    [1] = alias_sym_gantt_data,
  },
  [8] = {
    [1] = alias_sym_chronology_data,
  },
  [9] = {
    [1] = alias_sym_mindmap_data,
  },
  [10] = {
    [1] = alias_sym_wbs_data,
  },
  [11] = {
    [1] = alias_sym_chen_data,
  },
  [12] = {
    [1] = alias_sym_times,
  },
  [13] = {
    [2] = alias_sym_right,
  },
  [14] = {
    [1] = alias_sym_new_name,
  },
  [15] = {
    [1] = alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_participant_name, 3,
    sym_participant_name,
    alias_sym_name,
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 8,
  [15] = 15,
  [16] = 9,
  [17] = 11,
  [18] = 13,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 21,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 27,
  [29] = 6,
  [30] = 3,
  [31] = 5,
  [32] = 6,
  [33] = 33,
  [34] = 3,
  [35] = 33,
  [36] = 5,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 38,
  [44] = 39,
  [45] = 45,
  [46] = 37,
  [47] = 40,
  [48] = 42,
  [49] = 41,
  [50] = 45,
  [51] = 51,
  [52] = 52,
  [53] = 3,
  [54] = 3,
  [55] = 6,
  [56] = 5,
  [57] = 6,
  [58] = 52,
  [59] = 5,
  [60] = 51,
  [61] = 61,
  [62] = 62,
  [63] = 45,
  [64] = 61,
  [65] = 62,
  [66] = 45,
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
  [80] = 74,
  [81] = 76,
  [82] = 77,
  [83] = 68,
  [84] = 69,
  [85] = 70,
  [86] = 71,
  [87] = 72,
  [88] = 73,
  [89] = 75,
  [90] = 67,
  [91] = 78,
  [92] = 79,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 93,
  [98] = 93,
  [99] = 94,
  [100] = 93,
  [101] = 94,
  [102] = 93,
  [103] = 94,
  [104] = 93,
  [105] = 94,
  [106] = 106,
  [107] = 106,
  [108] = 108,
  [109] = 108,
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
  [121] = 117,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 117,
  [129] = 117,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 117,
  [135] = 135,
  [136] = 136,
  [137] = 117,
  [138] = 117,
  [139] = 117,
  [140] = 117,
  [141] = 117,
  [142] = 112,
  [143] = 130,
  [144] = 144,
  [145] = 127,
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
  [157] = 146,
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
  [172] = 170,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 170,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 170,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 170,
  [186] = 186,
  [187] = 170,
  [188] = 170,
  [189] = 170,
  [190] = 190,
  [191] = 191,
  [192] = 171,
  [193] = 173,
  [194] = 170,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 170,
  [206] = 206,
  [207] = 207,
  [208] = 206,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 6,
  [215] = 211,
  [216] = 216,
  [217] = 209,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 216,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 219,
  [226] = 223,
  [227] = 209,
  [228] = 228,
  [229] = 229,
  [230] = 209,
  [231] = 213,
  [232] = 232,
  [233] = 5,
  [234] = 229,
  [235] = 224,
  [236] = 220,
  [237] = 237,
  [238] = 238,
  [239] = 239,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(674);
      ADVANCE_MAP(
        '"', 801,
        '#', 704,
        '\'', 1747,
        '-', 41,
        '/', 1761,
        ':', 1699,
        '<', 42,
        '@', 1704,
        '[', 705,
        '\\', 807,
        ']', 709,
        'o', 691,
        'x', 692,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(689);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1728);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0) ADVANCE(808);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1753);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1748);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1752);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1752);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(1755);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1752);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 801,
        '#', 704,
        '\'', 1747,
        '/', 34,
        '@', 135,
        '[', 705,
        'a', 721,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 752,
        'g', 778,
        'l', 763,
        'o', 773,
        'p', 713,
        'q', 791,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 801,
        '#', 704,
        '\'', 1747,
        '/', 34,
        '[', 705,
        'a', 721,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 750,
        'g', 778,
        'l', 763,
        'o', 773,
        'p', 713,
        'q', 791,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 801,
        '\'', 1747,
        '/', 1760,
        ':', 1699,
        '@', 135,
        'a', 722,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 752,
        'g', 778,
        'l', 763,
        'p', 713,
        'q', 791,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 801,
        '\'', 1747,
        '/', 34,
        ':', 1699,
        '@', 135,
        'a', 721,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 752,
        'g', 778,
        'l', 763,
        'p', 713,
        'q', 791,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 801,
        '\'', 1747,
        '/', 34,
        ':', 1699,
        'a', 722,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 750,
        'g', 778,
        'l', 763,
        'p', 713,
        'q', 791,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 801,
        '\'', 1747,
        '/', 34,
        ':', 1699,
        'a', 721,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 750,
        'g', 778,
        'l', 763,
        'p', 713,
        'q', 791,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 801,
        '\'', 1747,
        '/', 34,
        '@', 135,
        'a', 722,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 752,
        'g', 778,
        'i', 754,
        'l', 763,
        'p', 713,
        'q', 791,
        'r', 733,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 801,
        '\'', 1747,
        '/', 34,
        '@', 135,
        'a', 722,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 752,
        'g', 778,
        'l', 763,
        'p', 713,
        'q', 791,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 801,
        '\'', 1747,
        '/', 34,
        'a', 722,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 750,
        'g', 778,
        'i', 754,
        'l', 763,
        'p', 713,
        'q', 791,
        'r', 733,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 801,
        '\'', 1747,
        '/', 34,
        'a', 722,
        'b', 759,
        'c', 757,
        'd', 714,
        'e', 750,
        'g', 778,
        'l', 763,
        'p', 713,
        'q', 791,
        's', 742,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(801);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(801);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(689);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(801);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(804);
      if (lookahead == '\\') ADVANCE(807);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0) ADVANCE(802);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\'', 1747,
        '-', 41,
        '/', 35,
        '<', 42,
        '@', 238,
        'C', 265,
        'F', 441,
        'L', 266,
        'O', 469,
        'R', 360,
        'S', 267,
        'T', 269,
        '\\', 57,
        'c', 121,
        'f', 83,
        'l', 74,
        'o', 67,
        'r', 75,
        's', 76,
        't', 79,
        'x', 69,
        'A', 475,
        'a', 475,
        'B', 363,
        'b', 363,
        'D', 270,
        'd', 270,
        'G', 290,
        'g', 290,
        'H', 532,
        'h', 532,
        'I', 511,
        'i', 511,
        'K', 429,
        'k', 429,
        'M', 271,
        'm', 271,
        'N', 272,
        'n', 272,
        'P', 273,
        'p', 273,
        'V', 448,
        'v', 448,
        'W', 424,
        'w', 424,
        'Y', 374,
        'y', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(689);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(708);
      if (lookahead == '\\') ADVANCE(806);
      if (lookahead == ']') ADVANCE(709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(707);
      if (lookahead != 0) ADVANCE(706);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1705);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1716);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1717);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1707);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1718);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1708);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1719);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1720);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1721);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1722);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1712);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1723);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1724);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1725);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(1754);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(1754);
      if (lookahead == '-') ADVANCE(867);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(1751);
      if (lookahead == '/') ADVANCE(1701);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1700);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(1702);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(1750);
      if (lookahead == '/') ADVANCE(1763);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (lookahead != 0) ADVANCE(1764);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(1749);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(1759);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(1756);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(827);
      if (lookahead == '>') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(819);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(859);
      if (lookahead == '<') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(863);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(868);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(860);
      if (lookahead == '<') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(876);
      if (lookahead == '\\') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(869);
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(861);
      if (lookahead == '<') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(864);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(880);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(865);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(881);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(862);
      if (lookahead == '<') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(874);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(866);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(882);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '>') ADVANCE(835);
      if (lookahead == '\\') ADVANCE(843);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(225);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(166);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(136);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(502);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(647);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 76:
      ADVANCE_MAP(
        'E', 275,
        'e', 222,
        'A', 345,
        'a', 345,
        'I', 380,
        'i', 380,
        'K', 660,
        'k', 660,
        'L', 282,
        'l', 282,
        'N', 534,
        'n', 534,
        'P', 585,
        'p', 585,
        'T', 399,
        't', 399,
      );
      END_STATE();
    case 77:
      if (lookahead == 'M') ADVANCE(131);
      END_STATE();
    case 78:
      if (lookahead == 'M') ADVANCE(137);
      END_STATE();
    case 79:
      ADVANCE_MAP(
        'R', 293,
        'r', 254,
        'A', 508,
        'a', 508,
        'E', 287,
        'e', 287,
        'H', 443,
        'h', 443,
        'O', 503,
        'o', 503,
        'U', 573,
        'u', 573,
      );
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(1736);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 83:
      ADVANCE_MAP(
        'a', 168,
        'I', 579,
        'i', 579,
        'L', 543,
        'l', 543,
        'O', 581,
        'o', 581,
        'U', 327,
        'u', 327,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(1735);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 94:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(231);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(189);
      END_STATE();
    case 98:
      ADVANCE_MAP(
        'c', 151,
        'd', 156,
        'e', 94,
        'g', 86,
        'j', 229,
        'm', 158,
        'r', 119,
        'w', 95,
        'y', 80,
      );
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 101:
      ADVANCE_MAP(
        'c', 155,
        'd', 159,
        'e', 97,
        'g', 90,
        'j', 239,
        'm', 160,
        'r', 134,
        'u', 173,
        'w', 96,
        'y', 92,
      );
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 121:
      ADVANCE_MAP(
        'e', 192,
        'A', 342,
        'a', 342,
        'H', 294,
        'h', 294,
        'O', 570,
        'o', 570,
        'R', 445,
        'r', 445,
        'Y', 268,
        'y', 268,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(1732);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(1731);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 161:
      if (lookahead == 'j') ADVANCE(229);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(1730);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(675);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(1729);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(1746);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(1727);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(1745);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(1703);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(1742);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(1741);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(695);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 222:
      if (lookahead == 'q') ADVANCE(255);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(1744);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(1743);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(404);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1767);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(1738);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(1737);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 257:
      if (lookahead == 'w') ADVANCE(682);
      END_STATE();
    case 258:
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 259:
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 260:
      if (lookahead == 'x') ADVANCE(1734);
      END_STATE();
    case 261:
      if (lookahead == 'x') ADVANCE(1733);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(1740);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(1739);
      END_STATE();
    case 264:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 265:
      ADVANCE_MAP(
        'A', 342,
        'a', 342,
        'H', 294,
        'h', 294,
        'O', 570,
        'o', 570,
        'R', 445,
        'r', 445,
        'Y', 268,
        'y', 268,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 266:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(647);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 267:
      ADVANCE_MAP(
        'A', 345,
        'a', 345,
        'E', 275,
        'e', 275,
        'I', 380,
        'i', 380,
        'K', 660,
        'k', 660,
        'L', 282,
        'l', 282,
        'N', 534,
        'n', 534,
        'P', 585,
        'p', 585,
        'T', 399,
        't', 399,
      );
      END_STATE();
    case 268:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 269:
      ADVANCE_MAP(
        'A', 508,
        'a', 508,
        'E', 287,
        'e', 287,
        'H', 443,
        'h', 443,
        'O', 503,
        'o', 503,
        'R', 293,
        'r', 293,
        'U', 573,
        'u', 573,
      );
      END_STATE();
    case 270:
      ADVANCE_MAP(
        'A', 574,
        'a', 574,
        'E', 366,
        'e', 366,
        'I', 500,
        'i', 500,
        'O', 356,
        'o', 356,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 271:
      ADVANCE_MAP(
        'A', 421,
        'a', 421,
        'E', 350,
        'e', 350,
        'I', 349,
        'i', 349,
        'O', 331,
        'o', 331,
      );
      END_STATE();
    case 272:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 273:
      ADVANCE_MAP(
        'A', 483,
        'a', 483,
        'E', 303,
        'e', 303,
        'I', 513,
        'i', 513,
        'L', 635,
        'l', 635,
        'O', 654,
        'o', 654,
        'U', 578,
        'u', 578,
      );
      END_STATE();
    case 274:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1767);
      END_STATE();
    case 275:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 276:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1774);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1767);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 281:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 282:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 283:
      ADVANCE_MAP(
        'A', 568,
        'a', 568,
        'B', 479,
        'b', 479,
        'O', 600,
        'o', 600,
        'P', 636,
        'p', 636,
        'S', 397,
        's', 397,
        'T', 634,
        't', 634,
        'V', 462,
        'v', 462,
      );
      END_STATE();
    case 284:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 285:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 286:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 288:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 290:
      ADVANCE_MAP(
        'A', 450,
        'a', 450,
        'H', 555,
        'h', 555,
        'O', 477,
        'o', 477,
        'R', 279,
        'r', 279,
      );
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 292:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 295:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 296:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 298:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 299:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 300:
      ADVANCE_MAP(
        'A', 493,
        'a', 493,
        'E', 285,
        'e', 285,
        'K', 660,
        'k', 660,
        'L', 313,
        'l', 313,
        'T', 399,
        't', 399,
      );
      END_STATE();
    case 301:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 302:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(533);
      END_STATE();
    case 303:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(632);
      END_STATE();
    case 304:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 305:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 306:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 307:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 308:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 309:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 310:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 311:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 313:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 314:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 315:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 316:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 317:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1767);
      END_STATE();
    case 318:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(404);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1767);
      END_STATE();
    case 319:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 320:
      ADVANCE_MAP(
        'B', 479,
        'b', 479,
        'C', 550,
        'c', 550,
        'G', 558,
        'g', 558,
        'P', 442,
        'p', 442,
        'S', 300,
        's', 300,
        'Y', 403,
        'y', 403,
      );
      END_STATE();
    case 321:
      ADVANCE_MAP(
        'B', 479,
        'b', 479,
        'C', 661,
        'c', 661,
        'G', 554,
        'g', 554,
        'K', 429,
        'k', 429,
        'M', 312,
        'm', 312,
        'O', 489,
        'o', 489,
        'R', 383,
        'r', 383,
        'S', 301,
        's', 301,
        'T', 634,
        't', 634,
        'V', 448,
        'v', 448,
      );
      END_STATE();
    case 322:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(479);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 323:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(580);
      END_STATE();
    case 324:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(596);
      END_STATE();
    case 325:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 326:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(491);
      END_STATE();
    case 327:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 328:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 329:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 330:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 331:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 332:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 333:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 334:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 335:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 336:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 337:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 338:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 339:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 340:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 341:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      END_STATE();
    case 342:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      END_STATE();
    case 343:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1767);
      END_STATE();
    case 344:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1772);
      END_STATE();
    case 345:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 346:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(485);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 347:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 348:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(667);
      END_STATE();
    case 349:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(521);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      END_STATE();
    case 350:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 351:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 352:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 353:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 354:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 355:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(665);
      END_STATE();
    case 356:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 357:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 358:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 359:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1767);
      END_STATE();
    case 363:
      ADVANCE_MAP(
        'E', 439,
        'e', 439,
        'I', 612,
        'i', 612,
        'L', 276,
        'l', 276,
        'R', 535,
        'r', 535,
        'U', 584,
        'u', 584,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1773);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1779);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1770);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1777);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(649);
      END_STATE();
    case 381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 391:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1767);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 393:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 396:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 397:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(585);
      END_STATE();
    case 398:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 399:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 400:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 401:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 402:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 403:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 404:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 405:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 406:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 407:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1767);
      END_STATE();
    case 408:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(407);
      END_STATE();
    case 409:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(531);
      END_STATE();
    case 411:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(487);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(453);
      END_STATE();
    case 412:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(553);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(634);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(462);
      END_STATE();
    case 413:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(422);
      END_STATE();
    case 414:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(428);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 415:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 416:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 417:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 418:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      END_STATE();
    case 419:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(431);
      END_STATE();
    case 420:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(393);
      END_STATE();
    case 421:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(393);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 422:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(591);
      END_STATE();
    case 423:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      END_STATE();
    case 424:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 425:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1767);
      END_STATE();
    case 426:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(608);
      END_STATE();
    case 427:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(560);
      END_STATE();
    case 428:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      END_STATE();
    case 429:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 430:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(452);
      END_STATE();
    case 431:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(614);
      END_STATE();
    case 432:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(456);
      END_STATE();
    case 433:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(460);
      END_STATE();
    case 434:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(447);
      END_STATE();
    case 435:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(384);
      END_STATE();
    case 436:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(400);
      END_STATE();
    case 437:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 438:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1767);
      END_STATE();
    case 439:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      END_STATE();
    case 440:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 441:
      ADVANCE_MAP(
        'I', 579,
        'i', 579,
        'L', 543,
        'l', 543,
        'O', 581,
        'o', 581,
        'U', 327,
        'u', 327,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 442:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 443:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 444:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 446:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 448:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 449:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 452:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 455:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 457:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 458:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 461:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(650);
      END_STATE();
    case 462:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 463:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(536);
      END_STATE();
    case 464:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(660);
      END_STATE();
    case 465:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1767);
      END_STATE();
    case 466:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(321);
      END_STATE();
    case 467:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(438);
      END_STATE();
    case 468:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(364);
      END_STATE();
    case 469:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1767);
      END_STATE();
    case 471:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 472:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 473:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 474:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 475:
      ADVANCE_MAP(
        'L', 444,
        'l', 444,
        'N', 621,
        'n', 621,
        'Q', 640,
        'q', 640,
        'Z', 645,
        'z', 645,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 476:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 477:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 478:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 479:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 480:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 481:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 482:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(539);
      END_STATE();
    case 483:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 484:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(639);
      END_STATE();
    case 485:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 486:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 487:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 488:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 489:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 490:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 491:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 492:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 493:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 494:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 495:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 496:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 497:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 498:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1767);
      END_STATE();
    case 499:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 500:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(415);
      END_STATE();
    case 501:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(606);
      END_STATE();
    case 502:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 503:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 504:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(531);
      END_STATE();
    case 505:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 506:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 507:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1767);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1780);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(544);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
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
          lookahead == 'n') ADVANCE(523);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1767);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 559:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1767);
      END_STATE();
    case 560:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(633);
      END_STATE();
    case 561:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 562:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(442);
      END_STATE();
    case 563:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(442);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(464);
      END_STATE();
    case 564:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 565:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(488);
      END_STATE();
    case 566:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(641);
      END_STATE();
    case 567:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(642);
      END_STATE();
    case 568:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(643);
      END_STATE();
    case 569:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(644);
      END_STATE();
    case 570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1767);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1769);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      END_STATE();
    case 602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      END_STATE();
    case 603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      END_STATE();
    case 604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      END_STATE();
    case 605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      END_STATE();
    case 606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      END_STATE();
    case 607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      END_STATE();
    case 608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(454);
      END_STATE();
    case 609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      END_STATE();
    case 610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      END_STATE();
    case 611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      END_STATE();
    case 613:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1767);
      END_STATE();
    case 614:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 615:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 616:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1768);
      END_STATE();
    case 617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      END_STATE();
    case 618:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      END_STATE();
    case 619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      END_STATE();
    case 620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(459);
      END_STATE();
    case 622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(533);
      END_STATE();
    case 623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 625:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 626:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 627:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 628:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(488);
      END_STATE();
    case 630:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      END_STATE();
    case 631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      END_STATE();
    case 632:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1767);
      END_STATE();
    case 633:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 634:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(573);
      END_STATE();
    case 635:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 636:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(578);
      END_STATE();
    case 637:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 638:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
      END_STATE();
    case 639:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 640:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 641:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(548);
      END_STATE();
    case 642:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 643:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 644:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 645:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 646:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(278);
      END_STATE();
    case 647:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(386);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(512);
      END_STATE();
    case 648:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(370);
      END_STATE();
    case 649:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(390);
      END_STATE();
    case 650:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(378);
      END_STATE();
    case 651:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      END_STATE();
    case 652:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1767);
      END_STATE();
    case 653:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1773);
      END_STATE();
    case 654:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(352);
      END_STATE();
    case 655:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(392);
      END_STATE();
    case 656:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(549);
      END_STATE();
    case 657:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(433);
      END_STATE();
    case 658:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 659:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1767);
      END_STATE();
    case 660:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      END_STATE();
    case 661:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 662:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(656);
      END_STATE();
    case 663:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(587);
      END_STATE();
    case 664:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(316);
      END_STATE();
    case 665:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 666:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 667:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(403);
      END_STATE();
    case 668:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 669:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 670:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      END_STATE();
    case 671:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1767);
      END_STATE();
    case 672:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(670);
      END_STATE();
    case 673:
      if (eof) ADVANCE(674);
      if (lookahead == '\n') ADVANCE(1728);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_sequenceMessageAlign);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_responseMessageBelowArrow);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_autonumber);
      if (lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_resume);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '.') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_attribute_token2);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(50);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_attribute_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_autonumberstop);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_database);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(708);
      if (lookahead == '\\') ADVANCE(806);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(706);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_multiline_token1);
      if (lookahead == '\'') ADVANCE(1754);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'a') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'b') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(788);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead == 'u') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(788);
      if (lookahead == 'u') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'c') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(1765);
      if (lookahead == 't') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'd') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'e') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'i') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'k') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'l') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'm') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'n') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'o') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(1766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(1762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'p') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'r') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 's') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 't') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'u') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (lookahead == 'y') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_attr_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_order);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(804);
      if (lookahead == '\\') ADVANCE(807);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(802);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(1754);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(805);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(810);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(808);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      if (lookahead == '\'') ADVANCE(1754);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>') ADVANCE(815);
      if (lookahead == 'o') ADVANCE(812);
      if (lookahead == 'x') ADVANCE(813);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_DASH_GTo);
      if (lookahead == 'x') ADVANCE(814);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_DASH_GTx);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_DASH_GTox);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(816);
      if (lookahead == 'x') ADVANCE(817);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GTo);
      if (lookahead == 'x') ADVANCE(818);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GTx);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GTox);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(820);
      if (lookahead == 'x') ADVANCE(821);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_DASH_BSLASHo);
      if (lookahead == 'x') ADVANCE(822);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_DASH_BSLASHx);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_DASH_BSLASHox);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(824);
      if (lookahead == 'x') ADVANCE(825);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_DASH_BSLASH_BSLASHo);
      if (lookahead == 'x') ADVANCE(826);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_DASH_BSLASH_BSLASHx);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_DASH_BSLASH_BSLASHox);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_DASH_SLASH);
      if (lookahead == '/') ADVANCE(831);
      if (lookahead == 'o') ADVANCE(828);
      if (lookahead == 'x') ADVANCE(829);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_DASH_SLASHo);
      if (lookahead == 'x') ADVANCE(830);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_DASH_SLASHx);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_DASH_SLASHox);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(832);
      if (lookahead == 'x') ADVANCE(833);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_DASH_SLASH_SLASHo);
      if (lookahead == 'x') ADVANCE(834);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_DASH_SLASH_SLASHx);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_DASH_SLASH_SLASHox);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(839);
      if (lookahead == 'o') ADVANCE(836);
      if (lookahead == 'x') ADVANCE(837);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GTo);
      if (lookahead == 'x') ADVANCE(838);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GTx);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GTox);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(840);
      if (lookahead == 'x') ADVANCE(841);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT_GTo);
      if (lookahead == 'x') ADVANCE(842);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT_GTx);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT_GTox);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(847);
      if (lookahead == 'o') ADVANCE(844);
      if (lookahead == 'x') ADVANCE(845);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_BSLASHo);
      if (lookahead == 'x') ADVANCE(846);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_BSLASHx);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_BSLASHox);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(848);
      if (lookahead == 'x') ADVANCE(849);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'x') ADVANCE(850);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_BSLASH_BSLASHx);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_BSLASH_BSLASHox);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(855);
      if (lookahead == 'o') ADVANCE(852);
      if (lookahead == 'x') ADVANCE(853);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_SLASHo);
      if (lookahead == 'x') ADVANCE(854);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_SLASHx);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_SLASHox);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead == 'x') ADVANCE(857);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_SLASH_SLASHo);
      if (lookahead == 'x') ADVANCE(858);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_SLASH_SLASHx);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_SLASH_SLASHox);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(883);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == '>') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(929);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_o_LT_DASH);
      if (lookahead == '-') ADVANCE(884);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_x_LT_DASH);
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_xo_LT_DASH);
      if (lookahead == '-') ADVANCE(886);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead == '-') ADVANCE(887);
      if (lookahead == '/') ADVANCE(1017);
      if (lookahead == '>') ADVANCE(973);
      if (lookahead == '\\') ADVANCE(995);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_o_LT_LT_DASH);
      if (lookahead == '-') ADVANCE(888);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_x_LT_LT_DASH);
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_xo_LT_LT_DASH);
      if (lookahead == '-') ADVANCE(890);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      if (lookahead == '-') ADVANCE(891);
      if (lookahead == '/') ADVANCE(1083);
      if (lookahead == '>') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(1061);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_o_SLASH_DASH);
      if (lookahead == '-') ADVANCE(892);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_x_SLASH_DASH);
      if (lookahead == '-') ADVANCE(893);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_xo_SLASH_DASH);
      if (lookahead == '-') ADVANCE(894);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead == '-') ADVANCE(895);
      if (lookahead == '/') ADVANCE(1149);
      if (lookahead == '>') ADVANCE(1105);
      if (lookahead == '\\') ADVANCE(1127);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_o_SLASH_SLASH_DASH);
      if (lookahead == '-') ADVANCE(896);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_x_SLASH_SLASH_DASH);
      if (lookahead == '-') ADVANCE(897);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_xo_SLASH_SLASH_DASH);
      if (lookahead == '-') ADVANCE(898);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH);
      if (lookahead == '-') ADVANCE(899);
      if (lookahead == '/') ADVANCE(1215);
      if (lookahead == '>') ADVANCE(1171);
      if (lookahead == '\\') ADVANCE(1193);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_o_BSLASH_DASH);
      if (lookahead == '-') ADVANCE(900);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_x_BSLASH_DASH);
      if (lookahead == '-') ADVANCE(901);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_xo_BSLASH_DASH);
      if (lookahead == '-') ADVANCE(902);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH);
      if (lookahead == '-') ADVANCE(903);
      if (lookahead == '/') ADVANCE(1281);
      if (lookahead == '>') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(1259);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_o_BSLASH_BSLASH_DASH);
      if (lookahead == '-') ADVANCE(904);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_x_BSLASH_BSLASH_DASH);
      if (lookahead == '-') ADVANCE(905);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_xo_BSLASH_BSLASH_DASH);
      if (lookahead == '-') ADVANCE(906);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      if (lookahead == '/') ADVANCE(1347);
      if (lookahead == '>') ADVANCE(1303);
      if (lookahead == '\\') ADVANCE(1325);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_o_LT_DASH_DASH);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_x_LT_DASH_DASH);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_xo_LT_DASH_DASH);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH);
      if (lookahead == '/') ADVANCE(1413);
      if (lookahead == '>') ADVANCE(1369);
      if (lookahead == '\\') ADVANCE(1391);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_o_LT_LT_DASH_DASH);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_x_LT_LT_DASH_DASH);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_xo_LT_LT_DASH_DASH);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH);
      if (lookahead == '/') ADVANCE(1479);
      if (lookahead == '>') ADVANCE(1435);
      if (lookahead == '\\') ADVANCE(1457);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_o_SLASH_DASH_DASH);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_x_SLASH_DASH_DASH);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_xo_SLASH_DASH_DASH);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH);
      if (lookahead == '/') ADVANCE(1545);
      if (lookahead == '>') ADVANCE(1501);
      if (lookahead == '\\') ADVANCE(1523);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_o_SLASH_SLASH_DASH_DASH);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_x_SLASH_SLASH_DASH_DASH);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_xo_SLASH_SLASH_DASH_DASH);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH);
      if (lookahead == '/') ADVANCE(1611);
      if (lookahead == '>') ADVANCE(1567);
      if (lookahead == '\\') ADVANCE(1589);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_o_BSLASH_DASH_DASH);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_x_BSLASH_DASH_DASH);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_xo_BSLASH_DASH_DASH);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH);
      if (lookahead == '/') ADVANCE(1677);
      if (lookahead == '>') ADVANCE(1633);
      if (lookahead == '\\') ADVANCE(1655);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_o_BSLASH_BSLASH_DASH_DASH);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_x_BSLASH_BSLASH_DASH_DASH);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_xo_BSLASH_BSLASH_DASH_DASH);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      if (lookahead == '>') ADVANCE(918);
      if (lookahead == 'o') ADVANCE(908);
      if (lookahead == 'x') ADVANCE(909);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GTo);
      if (lookahead == 'o') ADVANCE(911);
      if (lookahead == 'x') ADVANCE(910);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GTx);
      if (lookahead == 'o') ADVANCE(912);
      if (lookahead == 'x') ADVANCE(914);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GTox);
      if (lookahead == 'o') ADVANCE(913);
      if (lookahead == 'x') ADVANCE(915);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GToo);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GTxo);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GToxo);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(916);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GTxxo);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GToxxo);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(919);
      if (lookahead == 'x') ADVANCE(920);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'x') ADVANCE(921);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == 'x') ADVANCE(925);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'x') ADVANCE(926);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GToo);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GTxo);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GToxo);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(927);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GTxxo);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT_GToxxo);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(940);
      if (lookahead == 'o') ADVANCE(930);
      if (lookahead == 'x') ADVANCE(931);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead == 'x') ADVANCE(932);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(934);
      if (lookahead == 'x') ADVANCE(936);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(935);
      if (lookahead == 'x') ADVANCE(937);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHoo);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHxo);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHoxo);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(938);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHxxo);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASHoxxo);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(941);
      if (lookahead == 'x') ADVANCE(942);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(944);
      if (lookahead == 'x') ADVANCE(943);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(945);
      if (lookahead == 'x') ADVANCE(947);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(946);
      if (lookahead == 'x') ADVANCE(948);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(950);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_LT_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH);
      if (lookahead == '/') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(952);
      if (lookahead == 'x') ADVANCE(953);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == 'x') ADVANCE(954);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(956);
      if (lookahead == 'x') ADVANCE(958);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(957);
      if (lookahead == 'x') ADVANCE(959);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHoo);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHxo);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHoxo);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(960);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(961);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHxxo);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASHoxxo);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(963);
      if (lookahead == 'x') ADVANCE(964);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == 'x') ADVANCE(965);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(967);
      if (lookahead == 'x') ADVANCE(969);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(968);
      if (lookahead == 'x') ADVANCE(970);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHoo);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHxo);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(971);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(972);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_LT_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT);
      if (lookahead == '>') ADVANCE(984);
      if (lookahead == 'o') ADVANCE(974);
      if (lookahead == 'x') ADVANCE(975);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GTo);
      if (lookahead == 'o') ADVANCE(977);
      if (lookahead == 'x') ADVANCE(976);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GTx);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead == 'x') ADVANCE(980);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GTox);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == 'x') ADVANCE(981);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GToo);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GTxo);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GToxo);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(983);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GTxxo);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GToxxo);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(985);
      if (lookahead == 'x') ADVANCE(986);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(988);
      if (lookahead == 'x') ADVANCE(987);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(989);
      if (lookahead == 'x') ADVANCE(991);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead == 'x') ADVANCE(992);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GToo);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GTxo);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GToxo);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(993);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GTxxo);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_GT_GToxxo);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1006);
      if (lookahead == 'o') ADVANCE(996);
      if (lookahead == 'x') ADVANCE(997);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(999);
      if (lookahead == 'x') ADVANCE(998);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1000);
      if (lookahead == 'x') ADVANCE(1002);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1001);
      if (lookahead == 'x') ADVANCE(1003);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHoo);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHxo);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHoxo);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1004);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1005);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHxxo);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASHoxxo);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1007);
      if (lookahead == 'x') ADVANCE(1008);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1010);
      if (lookahead == 'x') ADVANCE(1009);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1011);
      if (lookahead == 'x') ADVANCE(1013);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1012);
      if (lookahead == 'x') ADVANCE(1014);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1015);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1016);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1028);
      if (lookahead == 'o') ADVANCE(1018);
      if (lookahead == 'x') ADVANCE(1019);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead == 'x') ADVANCE(1020);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1022);
      if (lookahead == 'x') ADVANCE(1024);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1023);
      if (lookahead == 'x') ADVANCE(1025);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHoo);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHxo);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHoxo);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1026);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1027);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHxxo);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASHoxxo);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead == 'x') ADVANCE(1030);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1032);
      if (lookahead == 'x') ADVANCE(1031);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead == 'x') ADVANCE(1035);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1034);
      if (lookahead == 'x') ADVANCE(1036);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1037);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1038);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1050);
      if (lookahead == 'o') ADVANCE(1040);
      if (lookahead == 'x') ADVANCE(1041);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1043);
      if (lookahead == 'x') ADVANCE(1042);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'x') ADVANCE(1046);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == 'x') ADVANCE(1047);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GToo);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GTxo);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GToxo);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1048);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1049);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GTxxo);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GToxxo);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1051);
      if (lookahead == 'x') ADVANCE(1052);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1054);
      if (lookahead == 'x') ADVANCE(1053);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1055);
      if (lookahead == 'x') ADVANCE(1057);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1056);
      if (lookahead == 'x') ADVANCE(1058);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GToo);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GTxo);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GToxo);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1060);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GTxxo);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_GT_GToxxo);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1072);
      if (lookahead == 'o') ADVANCE(1062);
      if (lookahead == 'x') ADVANCE(1063);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1065);
      if (lookahead == 'x') ADVANCE(1064);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1066);
      if (lookahead == 'x') ADVANCE(1068);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1067);
      if (lookahead == 'x') ADVANCE(1069);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHoo);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHxo);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHoxo);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1070);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHxxo);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1073);
      if (lookahead == 'x') ADVANCE(1074);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1076);
      if (lookahead == 'x') ADVANCE(1075);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1077);
      if (lookahead == 'x') ADVANCE(1079);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1078);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1082);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1094);
      if (lookahead == 'o') ADVANCE(1084);
      if (lookahead == 'x') ADVANCE(1085);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1087);
      if (lookahead == 'x') ADVANCE(1086);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1088);
      if (lookahead == 'x') ADVANCE(1090);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'x') ADVANCE(1091);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHoo);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHxo);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHoxo);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1092);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHxxo);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASHoxxo);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1095);
      if (lookahead == 'x') ADVANCE(1096);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1098);
      if (lookahead == 'x') ADVANCE(1097);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1099);
      if (lookahead == 'x') ADVANCE(1101);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1100);
      if (lookahead == 'x') ADVANCE(1102);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1103);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1104);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1116);
      if (lookahead == 'o') ADVANCE(1106);
      if (lookahead == 'x') ADVANCE(1107);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1109);
      if (lookahead == 'x') ADVANCE(1108);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1110);
      if (lookahead == 'x') ADVANCE(1112);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1111);
      if (lookahead == 'x') ADVANCE(1113);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GToo);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GTxo);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GToxo);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1114);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1115);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GTxxo);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GToxxo);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1117);
      if (lookahead == 'x') ADVANCE(1118);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1120);
      if (lookahead == 'x') ADVANCE(1119);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1121);
      if (lookahead == 'x') ADVANCE(1123);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1122);
      if (lookahead == 'x') ADVANCE(1124);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GToo);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GTxo);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GToxo);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1125);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1126);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GTxxo);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_GT_GToxxo);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1138);
      if (lookahead == 'o') ADVANCE(1128);
      if (lookahead == 'x') ADVANCE(1129);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1131);
      if (lookahead == 'x') ADVANCE(1130);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1132);
      if (lookahead == 'x') ADVANCE(1134);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1133);
      if (lookahead == 'x') ADVANCE(1135);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHoo);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHxo);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHoxo);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1136);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1137);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHxxo);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1139);
      if (lookahead == 'x') ADVANCE(1140);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1142);
      if (lookahead == 'x') ADVANCE(1141);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1143);
      if (lookahead == 'x') ADVANCE(1145);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1144);
      if (lookahead == 'x') ADVANCE(1146);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1147);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1148);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1160);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'x') ADVANCE(1151);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1153);
      if (lookahead == 'x') ADVANCE(1152);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == 'x') ADVANCE(1156);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1155);
      if (lookahead == 'x') ADVANCE(1157);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHoo);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHxo);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHoxo);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1158);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1159);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHxxo);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASHoxxo);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1161);
      if (lookahead == 'x') ADVANCE(1162);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1164);
      if (lookahead == 'x') ADVANCE(1163);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'x') ADVANCE(1167);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead == 'x') ADVANCE(1168);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1169);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1170);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1182);
      if (lookahead == 'o') ADVANCE(1172);
      if (lookahead == 'x') ADVANCE(1173);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1175);
      if (lookahead == 'x') ADVANCE(1174);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1176);
      if (lookahead == 'x') ADVANCE(1178);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1177);
      if (lookahead == 'x') ADVANCE(1179);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GToo);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GTxo);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GToxo);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1180);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1181);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GTxxo);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GToxxo);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1183);
      if (lookahead == 'x') ADVANCE(1184);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1186);
      if (lookahead == 'x') ADVANCE(1185);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1187);
      if (lookahead == 'x') ADVANCE(1189);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1188);
      if (lookahead == 'x') ADVANCE(1190);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GToo);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GTxo);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GToxo);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1191);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1192);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GTxxo);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_GT_GToxxo);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1204);
      if (lookahead == 'o') ADVANCE(1194);
      if (lookahead == 'x') ADVANCE(1195);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1197);
      if (lookahead == 'x') ADVANCE(1196);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1198);
      if (lookahead == 'x') ADVANCE(1200);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1199);
      if (lookahead == 'x') ADVANCE(1201);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHoo);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHxo);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHoxo);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1202);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1203);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHxxo);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1205);
      if (lookahead == 'x') ADVANCE(1206);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1208);
      if (lookahead == 'x') ADVANCE(1207);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1209);
      if (lookahead == 'x') ADVANCE(1211);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == 'x') ADVANCE(1212);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1213);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1214);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1226);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'x') ADVANCE(1217);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1219);
      if (lookahead == 'x') ADVANCE(1218);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1220);
      if (lookahead == 'x') ADVANCE(1222);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'x') ADVANCE(1223);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHoo);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHxo);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHoxo);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1224);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1225);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHxxo);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASHoxxo);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1227);
      if (lookahead == 'x') ADVANCE(1228);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1230);
      if (lookahead == 'x') ADVANCE(1229);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1231);
      if (lookahead == 'x') ADVANCE(1233);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1232);
      if (lookahead == 'x') ADVANCE(1234);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1235);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1236);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1248);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == 'x') ADVANCE(1239);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1241);
      if (lookahead == 'x') ADVANCE(1240);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1242);
      if (lookahead == 'x') ADVANCE(1244);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1243);
      if (lookahead == 'x') ADVANCE(1245);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GToo);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GTxo);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GToxo);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1246);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1247);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GTxxo);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GToxxo);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1249);
      if (lookahead == 'x') ADVANCE(1250);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1252);
      if (lookahead == 'x') ADVANCE(1251);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1253);
      if (lookahead == 'x') ADVANCE(1255);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1254);
      if (lookahead == 'x') ADVANCE(1256);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GToo);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GTxo);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GToxo);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1257);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1258);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1270);
      if (lookahead == 'o') ADVANCE(1260);
      if (lookahead == 'x') ADVANCE(1261);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1263);
      if (lookahead == 'x') ADVANCE(1262);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1264);
      if (lookahead == 'x') ADVANCE(1266);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1267);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHoo);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHxo);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1268);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1269);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1271);
      if (lookahead == 'x') ADVANCE(1272);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1274);
      if (lookahead == 'x') ADVANCE(1273);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1275);
      if (lookahead == 'x') ADVANCE(1277);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1276);
      if (lookahead == 'x') ADVANCE(1278);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1279);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1280);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1292);
      if (lookahead == 'o') ADVANCE(1282);
      if (lookahead == 'x') ADVANCE(1283);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1285);
      if (lookahead == 'x') ADVANCE(1284);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1286);
      if (lookahead == 'x') ADVANCE(1288);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1287);
      if (lookahead == 'x') ADVANCE(1289);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHoo);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHxo);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHoxo);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1290);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1291);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHxxo);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1293);
      if (lookahead == 'x') ADVANCE(1294);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1296);
      if (lookahead == 'x') ADVANCE(1295);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1297);
      if (lookahead == 'x') ADVANCE(1299);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1298);
      if (lookahead == 'x') ADVANCE(1300);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1301);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1302);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1314);
      if (lookahead == 'o') ADVANCE(1304);
      if (lookahead == 'x') ADVANCE(1305);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1307);
      if (lookahead == 'x') ADVANCE(1306);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1308);
      if (lookahead == 'x') ADVANCE(1310);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1309);
      if (lookahead == 'x') ADVANCE(1311);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GToo);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GTxo);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GToxo);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1312);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1313);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GTxxo);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GToxxo);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1315);
      if (lookahead == 'x') ADVANCE(1316);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1318);
      if (lookahead == 'x') ADVANCE(1317);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1319);
      if (lookahead == 'x') ADVANCE(1321);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1320);
      if (lookahead == 'x') ADVANCE(1322);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GToo);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GTxo);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GToxo);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1323);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1324);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GTxxo);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT_GToxxo);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1336);
      if (lookahead == 'o') ADVANCE(1326);
      if (lookahead == 'x') ADVANCE(1327);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1329);
      if (lookahead == 'x') ADVANCE(1328);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1330);
      if (lookahead == 'x') ADVANCE(1332);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1331);
      if (lookahead == 'x') ADVANCE(1333);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHoo);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHxo);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHoxo);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1335);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHxxo);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1337);
      if (lookahead == 'x') ADVANCE(1338);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1340);
      if (lookahead == 'x') ADVANCE(1339);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1341);
      if (lookahead == 'x') ADVANCE(1343);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1342);
      if (lookahead == 'x') ADVANCE(1344);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1345);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1346);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1358);
      if (lookahead == 'o') ADVANCE(1348);
      if (lookahead == 'x') ADVANCE(1349);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1351);
      if (lookahead == 'x') ADVANCE(1350);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1352);
      if (lookahead == 'x') ADVANCE(1354);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1353);
      if (lookahead == 'x') ADVANCE(1355);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHoo);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHxo);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHoxo);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1356);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1357);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHxxo);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASHoxxo);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1359);
      if (lookahead == 'x') ADVANCE(1360);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1362);
      if (lookahead == 'x') ADVANCE(1361);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1363);
      if (lookahead == 'x') ADVANCE(1365);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1364);
      if (lookahead == 'x') ADVANCE(1366);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1368);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1380);
      if (lookahead == 'o') ADVANCE(1370);
      if (lookahead == 'x') ADVANCE(1371);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1373);
      if (lookahead == 'x') ADVANCE(1372);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1374);
      if (lookahead == 'x') ADVANCE(1376);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1375);
      if (lookahead == 'x') ADVANCE(1377);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GToo);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GTxo);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GToxo);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1378);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1379);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GTxxo);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GToxxo);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1381);
      if (lookahead == 'x') ADVANCE(1382);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 'x') ADVANCE(1383);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == 'x') ADVANCE(1387);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1386);
      if (lookahead == 'x') ADVANCE(1388);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GToo);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GTxo);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GToxo);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1389);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1390);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GTxxo);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_GT_GToxxo);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1402);
      if (lookahead == 'o') ADVANCE(1392);
      if (lookahead == 'x') ADVANCE(1393);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1395);
      if (lookahead == 'x') ADVANCE(1394);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1396);
      if (lookahead == 'x') ADVANCE(1398);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1397);
      if (lookahead == 'x') ADVANCE(1399);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHoo);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHxo);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHoxo);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1400);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1401);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHxxo);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1403);
      if (lookahead == 'x') ADVANCE(1404);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1406);
      if (lookahead == 'x') ADVANCE(1405);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1407);
      if (lookahead == 'x') ADVANCE(1409);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1408);
      if (lookahead == 'x') ADVANCE(1410);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1411);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1412);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1424);
      if (lookahead == 'o') ADVANCE(1414);
      if (lookahead == 'x') ADVANCE(1415);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1417);
      if (lookahead == 'x') ADVANCE(1416);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1418);
      if (lookahead == 'x') ADVANCE(1420);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1419);
      if (lookahead == 'x') ADVANCE(1421);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHoo);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHxo);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHoxo);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1422);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1423);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHxxo);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASHoxxo);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1425);
      if (lookahead == 'x') ADVANCE(1426);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1428);
      if (lookahead == 'x') ADVANCE(1427);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1429);
      if (lookahead == 'x') ADVANCE(1431);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1430);
      if (lookahead == 'x') ADVANCE(1432);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1433);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1434);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1446);
      if (lookahead == 'o') ADVANCE(1436);
      if (lookahead == 'x') ADVANCE(1437);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1439);
      if (lookahead == 'x') ADVANCE(1438);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1440);
      if (lookahead == 'x') ADVANCE(1442);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1441);
      if (lookahead == 'x') ADVANCE(1443);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GToo);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GTxo);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GToxo);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1444);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1445);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GTxxo);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GToxxo);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1447);
      if (lookahead == 'x') ADVANCE(1448);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1450);
      if (lookahead == 'x') ADVANCE(1449);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1451);
      if (lookahead == 'x') ADVANCE(1453);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1452);
      if (lookahead == 'x') ADVANCE(1454);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GToo);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GTxo);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GToxo);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1455);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1456);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GTxxo);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_GT_GToxxo);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1468);
      if (lookahead == 'o') ADVANCE(1458);
      if (lookahead == 'x') ADVANCE(1459);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1461);
      if (lookahead == 'x') ADVANCE(1460);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1462);
      if (lookahead == 'x') ADVANCE(1464);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1463);
      if (lookahead == 'x') ADVANCE(1465);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHoo);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHxo);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHoxo);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1466);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1467);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHxxo);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1469);
      if (lookahead == 'x') ADVANCE(1470);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1472);
      if (lookahead == 'x') ADVANCE(1471);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1473);
      if (lookahead == 'x') ADVANCE(1475);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1474);
      if (lookahead == 'x') ADVANCE(1476);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1477);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1478);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1490);
      if (lookahead == 'o') ADVANCE(1480);
      if (lookahead == 'x') ADVANCE(1481);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1483);
      if (lookahead == 'x') ADVANCE(1482);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1484);
      if (lookahead == 'x') ADVANCE(1486);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1485);
      if (lookahead == 'x') ADVANCE(1487);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHoo);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHxo);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHoxo);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1488);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1489);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHxxo);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASHoxxo);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1491);
      if (lookahead == 'x') ADVANCE(1492);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1494);
      if (lookahead == 'x') ADVANCE(1493);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1495);
      if (lookahead == 'x') ADVANCE(1497);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1496);
      if (lookahead == 'x') ADVANCE(1498);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1499);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1500);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1512);
      if (lookahead == 'o') ADVANCE(1502);
      if (lookahead == 'x') ADVANCE(1503);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1505);
      if (lookahead == 'x') ADVANCE(1504);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1506);
      if (lookahead == 'x') ADVANCE(1508);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1507);
      if (lookahead == 'x') ADVANCE(1509);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GToo);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GTxo);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GToxo);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1510);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1511);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GTxxo);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GToxxo);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1513);
      if (lookahead == 'x') ADVANCE(1514);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1516);
      if (lookahead == 'x') ADVANCE(1515);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1517);
      if (lookahead == 'x') ADVANCE(1519);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1518);
      if (lookahead == 'x') ADVANCE(1520);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1521);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1522);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1534);
      if (lookahead == 'o') ADVANCE(1524);
      if (lookahead == 'x') ADVANCE(1525);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1527);
      if (lookahead == 'x') ADVANCE(1526);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1528);
      if (lookahead == 'x') ADVANCE(1530);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1529);
      if (lookahead == 'x') ADVANCE(1531);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1532);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1533);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1535);
      if (lookahead == 'x') ADVANCE(1536);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1538);
      if (lookahead == 'x') ADVANCE(1537);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1539);
      if (lookahead == 'x') ADVANCE(1541);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1540);
      if (lookahead == 'x') ADVANCE(1542);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1543);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1544);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1556);
      if (lookahead == 'o') ADVANCE(1546);
      if (lookahead == 'x') ADVANCE(1547);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1549);
      if (lookahead == 'x') ADVANCE(1548);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1550);
      if (lookahead == 'x') ADVANCE(1552);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1551);
      if (lookahead == 'x') ADVANCE(1553);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1554);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1555);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == 'x') ADVANCE(1558);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1560);
      if (lookahead == 'x') ADVANCE(1559);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1561);
      if (lookahead == 'x') ADVANCE(1563);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1562);
      if (lookahead == 'x') ADVANCE(1564);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1565);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1566);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1578);
      if (lookahead == 'o') ADVANCE(1568);
      if (lookahead == 'x') ADVANCE(1569);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1571);
      if (lookahead == 'x') ADVANCE(1570);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1572);
      if (lookahead == 'x') ADVANCE(1574);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1573);
      if (lookahead == 'x') ADVANCE(1575);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GToo);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GTxo);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GToxo);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1576);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1577);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GTxxo);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GToxxo);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1579);
      if (lookahead == 'x') ADVANCE(1580);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1582);
      if (lookahead == 'x') ADVANCE(1581);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1583);
      if (lookahead == 'x') ADVANCE(1585);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1584);
      if (lookahead == 'x') ADVANCE(1586);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GToo);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GTxo);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GToxo);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1587);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1588);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GTxxo);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_GT_GToxxo);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1600);
      if (lookahead == 'o') ADVANCE(1590);
      if (lookahead == 'x') ADVANCE(1591);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1593);
      if (lookahead == 'x') ADVANCE(1592);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1594);
      if (lookahead == 'x') ADVANCE(1596);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1595);
      if (lookahead == 'x') ADVANCE(1597);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHoo);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHxo);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHoxo);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1598);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1599);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHxxo);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1601);
      if (lookahead == 'x') ADVANCE(1602);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1604);
      if (lookahead == 'x') ADVANCE(1603);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1605);
      if (lookahead == 'x') ADVANCE(1607);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1606);
      if (lookahead == 'x') ADVANCE(1608);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1609);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1610);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1622);
      if (lookahead == 'o') ADVANCE(1612);
      if (lookahead == 'x') ADVANCE(1613);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1615);
      if (lookahead == 'x') ADVANCE(1614);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1616);
      if (lookahead == 'x') ADVANCE(1618);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1617);
      if (lookahead == 'x') ADVANCE(1619);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHoo);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHxo);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHoxo);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1620);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1621);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHxxo);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASHoxxo);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1623);
      if (lookahead == 'x') ADVANCE(1624);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1626);
      if (lookahead == 'x') ADVANCE(1625);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1627);
      if (lookahead == 'x') ADVANCE(1629);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1628);
      if (lookahead == 'x') ADVANCE(1630);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1631);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1632);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(1644);
      if (lookahead == 'o') ADVANCE(1634);
      if (lookahead == 'x') ADVANCE(1635);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GTo);
      if (lookahead == 'o') ADVANCE(1637);
      if (lookahead == 'x') ADVANCE(1636);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GTx);
      if (lookahead == 'o') ADVANCE(1638);
      if (lookahead == 'x') ADVANCE(1640);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GTox);
      if (lookahead == 'o') ADVANCE(1639);
      if (lookahead == 'x') ADVANCE(1641);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GToo);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx);
      if (lookahead == 'o') ADVANCE(1642);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx);
      if (lookahead == 'o') ADVANCE(1643);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT);
      if (lookahead == 'o') ADVANCE(1645);
      if (lookahead == 'x') ADVANCE(1646);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo);
      if (lookahead == 'o') ADVANCE(1648);
      if (lookahead == 'x') ADVANCE(1647);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx);
      if (lookahead == 'o') ADVANCE(1649);
      if (lookahead == 'x') ADVANCE(1651);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox);
      if (lookahead == 'o') ADVANCE(1650);
      if (lookahead == 'x') ADVANCE(1652);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx);
      if (lookahead == 'o') ADVANCE(1653);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx);
      if (lookahead == 'o') ADVANCE(1654);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH);
      if (lookahead == '\\') ADVANCE(1666);
      if (lookahead == 'o') ADVANCE(1656);
      if (lookahead == 'x') ADVANCE(1657);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1659);
      if (lookahead == 'x') ADVANCE(1658);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1660);
      if (lookahead == 'x') ADVANCE(1662);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1661);
      if (lookahead == 'x') ADVANCE(1663);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1664);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1665);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH);
      if (lookahead == 'o') ADVANCE(1667);
      if (lookahead == 'x') ADVANCE(1668);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo);
      if (lookahead == 'o') ADVANCE(1670);
      if (lookahead == 'x') ADVANCE(1669);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx);
      if (lookahead == 'o') ADVANCE(1671);
      if (lookahead == 'x') ADVANCE(1673);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox);
      if (lookahead == 'o') ADVANCE(1672);
      if (lookahead == 'x') ADVANCE(1674);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx);
      if (lookahead == 'o') ADVANCE(1675);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx);
      if (lookahead == 'o') ADVANCE(1676);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH);
      if (lookahead == '/') ADVANCE(1688);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 'x') ADVANCE(1679);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1681);
      if (lookahead == 'x') ADVANCE(1680);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'x') ADVANCE(1684);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1683);
      if (lookahead == 'x') ADVANCE(1685);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1686);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1687);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH);
      if (lookahead == 'o') ADVANCE(1689);
      if (lookahead == 'x') ADVANCE(1690);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo);
      if (lookahead == 'o') ADVANCE(1692);
      if (lookahead == 'x') ADVANCE(1691);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx);
      if (lookahead == 'o') ADVANCE(1693);
      if (lookahead == 'x') ADVANCE(1695);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox);
      if (lookahead == 'o') ADVANCE(1694);
      if (lookahead == 'x') ADVANCE(1696);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx);
      if (lookahead == 'o') ADVANCE(1697);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx);
      if (lookahead == 'o') ADVANCE(1698);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(1751);
      if (lookahead == '/') ADVANCE(1701);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '?') ADVANCE(1702);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead == '\'') ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(1702);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_sequence_diagram_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(1702);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_json_token1);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1705);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1716);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1717);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1707);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1718);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1708);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1719);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1720);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1721);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1722);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1712);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1723);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1724);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1747);
      if (lookahead == '/') ADVANCE(1726);
      if (lookahead == '@') ADVANCE(1714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1725);
      if (lookahead != 0) ADVANCE(1715);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_json_token1);
      if (lookahead == '\'') ADVANCE(1754);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_json_token2);
      if (lookahead == '\n') ADVANCE(1728);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_ATstartebnf);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_ATendebnf);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_ATstartregex);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_ATendregex);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_ATstartditaa);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_ATendditaa);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_ATstartchronology);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_ATendchronology);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_ATstartwbs);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_ATendwbs);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_ATstartchen);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_ATendchen);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(1752);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1764);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(1702);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(1753);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1748);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\n') ADVANCE(1752);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead == '\'') ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1764);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(1702);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(39);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(1754);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(1754);
      if (lookahead == '-') ADVANCE(867);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead == '\'') ADVANCE(1757);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1764);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_group_block_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1764);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(592);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1783);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(591);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1783);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1781);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(448);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(403);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1782);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(671);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1781);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1783);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 26},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 28},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 25},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 31},
  [124] = {.lex_state = 32},
  [125] = {.lex_state = 33},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 28},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 27},
  [132] = {.lex_state = 28},
  [133] = {.lex_state = 24},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 30},
  [142] = {.lex_state = 17},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 33},
  [148] = {.lex_state = 30},
  [149] = {.lex_state = 673},
  [150] = {.lex_state = 673},
  [151] = {.lex_state = 673},
  [152] = {.lex_state = 673},
  [153] = {.lex_state = 673},
  [154] = {.lex_state = 673},
  [155] = {.lex_state = 673},
  [156] = {.lex_state = 673},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 673},
  [159] = {.lex_state = 673},
  [160] = {.lex_state = 673},
  [161] = {.lex_state = 23},
  [162] = {.lex_state = 673},
  [163] = {.lex_state = 673},
  [164] = {.lex_state = 673},
  [165] = {.lex_state = 673},
  [166] = {.lex_state = 673},
  [167] = {.lex_state = 673},
  [168] = {.lex_state = 673},
  [169] = {.lex_state = 673},
  [170] = {.lex_state = 27},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 28},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 673},
  [175] = {.lex_state = 673},
  [176] = {.lex_state = 673},
  [177] = {.lex_state = 24},
  [178] = {.lex_state = 673},
  [179] = {.lex_state = 673},
  [180] = {.lex_state = 673},
  [181] = {.lex_state = 31},
  [182] = {.lex_state = 673},
  [183] = {.lex_state = 673},
  [184] = {.lex_state = 673},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 673},
  [187] = {.lex_state = 29},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 30},
  [190] = {.lex_state = 673},
  [191] = {.lex_state = 673},
  [192] = {.lex_state = 20},
  [193] = {.lex_state = 20},
  [194] = {.lex_state = 26},
  [195] = {.lex_state = 673},
  [196] = {.lex_state = 673},
  [197] = {.lex_state = 673},
  [198] = {.lex_state = 673},
  [199] = {.lex_state = 673},
  [200] = {.lex_state = 673},
  [201] = {.lex_state = 673},
  [202] = {.lex_state = 673},
  [203] = {.lex_state = 673},
  [204] = {.lex_state = 673},
  [205] = {.lex_state = 32},
  [206] = {.lex_state = 20},
  [207] = {.lex_state = 673},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 21},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 22},
  [220] = {.lex_state = 22},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 36},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 37},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 38},
  [233] = {.lex_state = 21},
  [234] = {.lex_state = 37},
  [235] = {.lex_state = 36},
  [236] = {.lex_state = 22},
  [237] = {.lex_state = 0},
  [238] = {(TSStateId)(-1)},
  [239] = {(TSStateId)(-1)},
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
    [anon_sym_DASH_GTo] = ACTIONS(1),
    [anon_sym_DASH_GTx] = ACTIONS(1),
    [anon_sym_DASH_GTox] = ACTIONS(1),
    [anon_sym_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_DASH_SLASH] = ACTIONS(1),
    [anon_sym_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH_GTo] = ACTIONS(1),
    [anon_sym_DASH_DASH_GTx] = ACTIONS(1),
    [anon_sym_DASH_DASH_GTox] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_DASH_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_DASH_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_DASH_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_DASH_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_DASH_DASH_SLASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_DASH_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_DASH_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_DASH_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_DASH_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_DASH_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_o_LT_DASH] = ACTIONS(1),
    [anon_sym_x_LT_DASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH] = ACTIONS(1),
    [anon_sym_o_LT_LT_DASH] = ACTIONS(1),
    [anon_sym_x_LT_LT_DASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH] = ACTIONS(1),
    [anon_sym_o_SLASH_DASH] = ACTIONS(1),
    [anon_sym_x_SLASH_DASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(1),
    [anon_sym_o_SLASH_SLASH_DASH] = ACTIONS(1),
    [anon_sym_x_SLASH_SLASH_DASH] = ACTIONS(1),
    [anon_sym_o_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_x_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_o_BSLASH_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_x_BSLASH_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(1),
    [anon_sym_o_LT_DASH_DASH] = ACTIONS(1),
    [anon_sym_x_LT_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH] = ACTIONS(1),
    [anon_sym_o_LT_LT_DASH_DASH] = ACTIONS(1),
    [anon_sym_x_LT_LT_DASH_DASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_o_SLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_x_SLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_o_SLASH_SLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_x_SLASH_SLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_o_BSLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_x_BSLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_GTo] = ACTIONS(1),
    [anon_sym_LT_DASH_GTx] = ACTIONS(1),
    [anon_sym_LT_DASH_GTox] = ACTIONS(1),
    [anon_sym_LT_DASH_GToo] = ACTIONS(1),
    [anon_sym_LT_DASH_GTxo] = ACTIONS(1),
    [anon_sym_LT_DASH_GToxo] = ACTIONS(1),
    [anon_sym_LT_DASH_GTxx] = ACTIONS(1),
    [anon_sym_LT_DASH_GToxx] = ACTIONS(1),
    [anon_sym_LT_DASH_GTxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_GToxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GToo] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GTxo] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GToxo] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GTxx] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GToxx] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GTxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_GT_GToxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHoo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHxo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHxx] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHoo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHxo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHxx] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GTo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GTx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GTox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GToo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GTxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GToxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GTxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GToxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GTxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GToxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GToo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GTxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GToxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GTxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GToxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GTxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_GT_GToxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHoo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GTo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GTx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GTox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GToo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GTxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GToxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GTxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GToxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GTxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GToxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GToo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GTxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GToxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GTxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GToxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GTxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_GT_GToxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GTo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GTx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GTox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GToo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GTxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GToxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GTxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GToxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GTxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GToxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GToo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GTo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GTx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GTox] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GToo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GTxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GToxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GTxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GToxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GTxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GToxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GToo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GTxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GToxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GTxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GToxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GTxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT_GToxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHoo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GTo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GTx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GTox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GToo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GTxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GToxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GTxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GToxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GTxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GToxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GToo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHoo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GTo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GTx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GTox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GToo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GTxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GToxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GTxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GToxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GTxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GToxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GToo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(1),
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
    [sym_diagram] = STATE(210),
    [sym_uml] = STATE(212),
    [sym_json] = STATE(212),
    [sym_yaml] = STATE(212),
    [sym_ebnf] = STATE(212),
    [sym_regex] = STATE(212),
    [sym_ditaa] = STATE(212),
    [sym_gantt] = STATE(212),
    [sym_chronology] = STATE(212),
    [sym_mindmap] = STATE(212),
    [sym_wbs] = STATE(212),
    [sym_chen] = STATE(212),
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
  [2] = {
    [sym_comment] = STATE(2),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_GTo] = ACTIONS(29),
    [anon_sym_DASH_GTx] = ACTIONS(31),
    [anon_sym_DASH_GTox] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_DASH_GT_GTx] = ACTIONS(31),
    [anon_sym_DASH_GT_GTox] = ACTIONS(31),
    [anon_sym_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_DASH_BSLASHx] = ACTIONS(31),
    [anon_sym_DASH_BSLASHox] = ACTIONS(31),
    [anon_sym_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_DASH_BSLASH_BSLASHx] = ACTIONS(31),
    [anon_sym_DASH_BSLASH_BSLASHox] = ACTIONS(31),
    [anon_sym_DASH_SLASH] = ACTIONS(29),
    [anon_sym_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_DASH_SLASHx] = ACTIONS(31),
    [anon_sym_DASH_SLASHox] = ACTIONS(31),
    [anon_sym_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_DASH_SLASH_SLASHx] = ACTIONS(31),
    [anon_sym_DASH_SLASH_SLASHox] = ACTIONS(31),
    [anon_sym_DASH_DASH_GT] = ACTIONS(29),
    [anon_sym_DASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_DASH_DASH_GTx] = ACTIONS(31),
    [anon_sym_DASH_DASH_GTox] = ACTIONS(31),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_DASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_DASH_DASH_GT_GTx] = ACTIONS(31),
    [anon_sym_DASH_DASH_GT_GTox] = ACTIONS(31),
    [anon_sym_DASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_DASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_DASH_DASH_BSLASHx] = ACTIONS(31),
    [anon_sym_DASH_DASH_BSLASHox] = ACTIONS(31),
    [anon_sym_DASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(31),
    [anon_sym_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(31),
    [anon_sym_DASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_DASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_DASH_DASH_SLASHx] = ACTIONS(31),
    [anon_sym_DASH_DASH_SLASHox] = ACTIONS(31),
    [anon_sym_DASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_DASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_DASH_DASH_SLASH_SLASHx] = ACTIONS(31),
    [anon_sym_DASH_DASH_SLASH_SLASHox] = ACTIONS(31),
    [anon_sym_LT_DASH] = ACTIONS(29),
    [anon_sym_o_LT_DASH] = ACTIONS(29),
    [anon_sym_x_LT_DASH] = ACTIONS(29),
    [anon_sym_xo_LT_DASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH] = ACTIONS(29),
    [anon_sym_o_LT_LT_DASH] = ACTIONS(29),
    [anon_sym_x_LT_LT_DASH] = ACTIONS(29),
    [anon_sym_xo_LT_LT_DASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(29),
    [anon_sym_o_SLASH_DASH] = ACTIONS(29),
    [anon_sym_x_SLASH_DASH] = ACTIONS(29),
    [anon_sym_xo_SLASH_DASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(29),
    [anon_sym_o_SLASH_SLASH_DASH] = ACTIONS(29),
    [anon_sym_x_SLASH_SLASH_DASH] = ACTIONS(29),
    [anon_sym_xo_SLASH_SLASH_DASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH] = ACTIONS(29),
    [anon_sym_o_BSLASH_DASH] = ACTIONS(29),
    [anon_sym_x_BSLASH_DASH] = ACTIONS(29),
    [anon_sym_xo_BSLASH_DASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH] = ACTIONS(29),
    [anon_sym_o_BSLASH_BSLASH_DASH] = ACTIONS(29),
    [anon_sym_x_BSLASH_BSLASH_DASH] = ACTIONS(29),
    [anon_sym_xo_BSLASH_BSLASH_DASH] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH] = ACTIONS(29),
    [anon_sym_o_LT_DASH_DASH] = ACTIONS(31),
    [anon_sym_x_LT_DASH_DASH] = ACTIONS(31),
    [anon_sym_xo_LT_DASH_DASH] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH] = ACTIONS(29),
    [anon_sym_o_LT_LT_DASH_DASH] = ACTIONS(31),
    [anon_sym_x_LT_LT_DASH_DASH] = ACTIONS(31),
    [anon_sym_xo_LT_LT_DASH_DASH] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(29),
    [anon_sym_o_SLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_x_SLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_xo_SLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH] = ACTIONS(29),
    [anon_sym_o_SLASH_SLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_x_SLASH_SLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_xo_SLASH_SLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH] = ACTIONS(29),
    [anon_sym_o_BSLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_x_BSLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_xo_BSLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH] = ACTIONS(29),
    [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_xo_BSLASH_BSLASH_DASH_DASH] = ACTIONS(31),
    [anon_sym_LT_DASH_GT] = ACTIONS(29),
    [anon_sym_LT_DASH_GTo] = ACTIONS(29),
    [anon_sym_LT_DASH_GTx] = ACTIONS(29),
    [anon_sym_LT_DASH_GTox] = ACTIONS(29),
    [anon_sym_LT_DASH_GToo] = ACTIONS(31),
    [anon_sym_LT_DASH_GTxo] = ACTIONS(31),
    [anon_sym_LT_DASH_GToxo] = ACTIONS(31),
    [anon_sym_LT_DASH_GTxx] = ACTIONS(29),
    [anon_sym_LT_DASH_GToxx] = ACTIONS(29),
    [anon_sym_LT_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_LT_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_LT_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_LT_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_LT_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_LT_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_LT_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_LT_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_LT_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_LT_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASH] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_LT_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GT] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GTo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GTx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GTox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GToo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GTxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GToxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GTxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GToxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GT] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GT] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GT] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GT] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GT] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GT] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GT] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(29),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(31),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(5),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GTo] = ACTIONS(33),
    [anon_sym_DASH_GTx] = ACTIONS(35),
    [anon_sym_DASH_GTox] = ACTIONS(35),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_DASH_GT_GTx] = ACTIONS(35),
    [anon_sym_DASH_GT_GTox] = ACTIONS(35),
    [anon_sym_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_DASH_BSLASHx] = ACTIONS(35),
    [anon_sym_DASH_BSLASHox] = ACTIONS(35),
    [anon_sym_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_DASH_BSLASH_BSLASHx] = ACTIONS(35),
    [anon_sym_DASH_BSLASH_BSLASHox] = ACTIONS(35),
    [anon_sym_DASH_SLASH] = ACTIONS(33),
    [anon_sym_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_DASH_SLASHx] = ACTIONS(35),
    [anon_sym_DASH_SLASHox] = ACTIONS(35),
    [anon_sym_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_DASH_SLASH_SLASHx] = ACTIONS(35),
    [anon_sym_DASH_SLASH_SLASHox] = ACTIONS(35),
    [anon_sym_DASH_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_DASH_DASH_GTx] = ACTIONS(35),
    [anon_sym_DASH_DASH_GTox] = ACTIONS(35),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_DASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_DASH_DASH_GT_GTx] = ACTIONS(35),
    [anon_sym_DASH_DASH_GT_GTox] = ACTIONS(35),
    [anon_sym_DASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_DASH_DASH_BSLASHx] = ACTIONS(35),
    [anon_sym_DASH_DASH_BSLASHox] = ACTIONS(35),
    [anon_sym_DASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(35),
    [anon_sym_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(35),
    [anon_sym_DASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_DASH_DASH_SLASHx] = ACTIONS(35),
    [anon_sym_DASH_DASH_SLASHox] = ACTIONS(35),
    [anon_sym_DASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_DASH_DASH_SLASH_SLASHx] = ACTIONS(35),
    [anon_sym_DASH_DASH_SLASH_SLASHox] = ACTIONS(35),
    [anon_sym_LT_DASH] = ACTIONS(33),
    [anon_sym_o_LT_DASH] = ACTIONS(33),
    [anon_sym_x_LT_DASH] = ACTIONS(33),
    [anon_sym_xo_LT_DASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH] = ACTIONS(33),
    [anon_sym_o_LT_LT_DASH] = ACTIONS(33),
    [anon_sym_x_LT_LT_DASH] = ACTIONS(33),
    [anon_sym_xo_LT_LT_DASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_o_SLASH_DASH] = ACTIONS(33),
    [anon_sym_x_SLASH_DASH] = ACTIONS(33),
    [anon_sym_xo_SLASH_DASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(33),
    [anon_sym_o_SLASH_SLASH_DASH] = ACTIONS(33),
    [anon_sym_x_SLASH_SLASH_DASH] = ACTIONS(33),
    [anon_sym_xo_SLASH_SLASH_DASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH] = ACTIONS(33),
    [anon_sym_o_BSLASH_DASH] = ACTIONS(33),
    [anon_sym_x_BSLASH_DASH] = ACTIONS(33),
    [anon_sym_xo_BSLASH_DASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH] = ACTIONS(33),
    [anon_sym_o_BSLASH_BSLASH_DASH] = ACTIONS(33),
    [anon_sym_x_BSLASH_BSLASH_DASH] = ACTIONS(33),
    [anon_sym_xo_BSLASH_BSLASH_DASH] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH] = ACTIONS(33),
    [anon_sym_o_LT_DASH_DASH] = ACTIONS(35),
    [anon_sym_x_LT_DASH_DASH] = ACTIONS(35),
    [anon_sym_xo_LT_DASH_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH] = ACTIONS(33),
    [anon_sym_o_LT_LT_DASH_DASH] = ACTIONS(35),
    [anon_sym_x_LT_LT_DASH_DASH] = ACTIONS(35),
    [anon_sym_xo_LT_LT_DASH_DASH] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(33),
    [anon_sym_o_SLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_x_SLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_xo_SLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH] = ACTIONS(33),
    [anon_sym_o_SLASH_SLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_x_SLASH_SLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_xo_SLASH_SLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH] = ACTIONS(33),
    [anon_sym_o_BSLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_x_BSLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_xo_BSLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH] = ACTIONS(33),
    [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_xo_BSLASH_BSLASH_DASH_DASH] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_DASH_GTo] = ACTIONS(33),
    [anon_sym_LT_DASH_GTx] = ACTIONS(33),
    [anon_sym_LT_DASH_GTox] = ACTIONS(33),
    [anon_sym_LT_DASH_GToo] = ACTIONS(35),
    [anon_sym_LT_DASH_GTxo] = ACTIONS(35),
    [anon_sym_LT_DASH_GToxo] = ACTIONS(35),
    [anon_sym_LT_DASH_GTxx] = ACTIONS(33),
    [anon_sym_LT_DASH_GToxx] = ACTIONS(33),
    [anon_sym_LT_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_LT_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_LT_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_LT_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_LT_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_LT_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_LT_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_LT_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_LT_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_LT_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_LT_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GTo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GTx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GTox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GToo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GTxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GToxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GTxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GToxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GT] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GT] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GT] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GT] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GT] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GT] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(5),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_GTo] = ACTIONS(37),
    [anon_sym_DASH_GTx] = ACTIONS(39),
    [anon_sym_DASH_GTox] = ACTIONS(39),
    [anon_sym_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_DASH_GT_GTx] = ACTIONS(39),
    [anon_sym_DASH_GT_GTox] = ACTIONS(39),
    [anon_sym_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_DASH_BSLASHx] = ACTIONS(39),
    [anon_sym_DASH_BSLASHox] = ACTIONS(39),
    [anon_sym_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_DASH_BSLASH_BSLASHx] = ACTIONS(39),
    [anon_sym_DASH_BSLASH_BSLASHox] = ACTIONS(39),
    [anon_sym_DASH_SLASH] = ACTIONS(37),
    [anon_sym_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_DASH_SLASHx] = ACTIONS(39),
    [anon_sym_DASH_SLASHox] = ACTIONS(39),
    [anon_sym_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_DASH_SLASH_SLASHx] = ACTIONS(39),
    [anon_sym_DASH_SLASH_SLASHox] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_DASH_DASH_GTx] = ACTIONS(39),
    [anon_sym_DASH_DASH_GTox] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT_GTx] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT_GTox] = ACTIONS(39),
    [anon_sym_DASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_DASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_DASH_DASH_BSLASHx] = ACTIONS(39),
    [anon_sym_DASH_DASH_BSLASHox] = ACTIONS(39),
    [anon_sym_DASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(39),
    [anon_sym_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(39),
    [anon_sym_DASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_DASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_DASH_DASH_SLASHx] = ACTIONS(39),
    [anon_sym_DASH_DASH_SLASHox] = ACTIONS(39),
    [anon_sym_DASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_DASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_DASH_DASH_SLASH_SLASHx] = ACTIONS(39),
    [anon_sym_DASH_DASH_SLASH_SLASHox] = ACTIONS(39),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_o_LT_DASH] = ACTIONS(37),
    [anon_sym_x_LT_DASH] = ACTIONS(37),
    [anon_sym_xo_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_o_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_x_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_xo_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH] = ACTIONS(37),
    [anon_sym_o_SLASH_DASH] = ACTIONS(37),
    [anon_sym_x_SLASH_DASH] = ACTIONS(37),
    [anon_sym_xo_SLASH_DASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(37),
    [anon_sym_o_SLASH_SLASH_DASH] = ACTIONS(37),
    [anon_sym_x_SLASH_SLASH_DASH] = ACTIONS(37),
    [anon_sym_xo_SLASH_SLASH_DASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH] = ACTIONS(37),
    [anon_sym_o_BSLASH_DASH] = ACTIONS(37),
    [anon_sym_x_BSLASH_DASH] = ACTIONS(37),
    [anon_sym_xo_BSLASH_DASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH] = ACTIONS(37),
    [anon_sym_o_BSLASH_BSLASH_DASH] = ACTIONS(37),
    [anon_sym_x_BSLASH_BSLASH_DASH] = ACTIONS(37),
    [anon_sym_xo_BSLASH_BSLASH_DASH] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_o_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_x_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_xo_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_o_LT_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_x_LT_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_xo_LT_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(37),
    [anon_sym_o_SLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_x_SLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_xo_SLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH] = ACTIONS(37),
    [anon_sym_o_SLASH_SLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_x_SLASH_SLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_xo_SLASH_SLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH] = ACTIONS(37),
    [anon_sym_o_BSLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_x_BSLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_xo_BSLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH] = ACTIONS(37),
    [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_xo_BSLASH_BSLASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_GTo] = ACTIONS(37),
    [anon_sym_LT_DASH_GTx] = ACTIONS(37),
    [anon_sym_LT_DASH_GTox] = ACTIONS(37),
    [anon_sym_LT_DASH_GToo] = ACTIONS(39),
    [anon_sym_LT_DASH_GTxo] = ACTIONS(39),
    [anon_sym_LT_DASH_GToxo] = ACTIONS(39),
    [anon_sym_LT_DASH_GTxx] = ACTIONS(37),
    [anon_sym_LT_DASH_GToxx] = ACTIONS(37),
    [anon_sym_LT_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_LT_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_LT_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_LT_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_LT_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_LT_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_LT_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_LT_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_LT_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASH] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_LT_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GTo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GTx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GTox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GToo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GTxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GToxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GTxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GToxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GT] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GT] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GT] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GT] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(39),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(5),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [anon_sym_DASH_GT] = ACTIONS(41),
    [anon_sym_DASH_GTo] = ACTIONS(41),
    [anon_sym_DASH_GTx] = ACTIONS(43),
    [anon_sym_DASH_GTox] = ACTIONS(43),
    [anon_sym_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_DASH_GT_GTx] = ACTIONS(43),
    [anon_sym_DASH_GT_GTox] = ACTIONS(43),
    [anon_sym_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_DASH_BSLASHx] = ACTIONS(43),
    [anon_sym_DASH_BSLASHox] = ACTIONS(43),
    [anon_sym_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_DASH_BSLASH_BSLASHx] = ACTIONS(43),
    [anon_sym_DASH_BSLASH_BSLASHox] = ACTIONS(43),
    [anon_sym_DASH_SLASH] = ACTIONS(41),
    [anon_sym_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_DASH_SLASHx] = ACTIONS(43),
    [anon_sym_DASH_SLASHox] = ACTIONS(43),
    [anon_sym_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_DASH_SLASH_SLASHx] = ACTIONS(43),
    [anon_sym_DASH_SLASH_SLASHox] = ACTIONS(43),
    [anon_sym_DASH_DASH_GT] = ACTIONS(41),
    [anon_sym_DASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_DASH_DASH_GTx] = ACTIONS(43),
    [anon_sym_DASH_DASH_GTox] = ACTIONS(43),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_DASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_DASH_DASH_GT_GTx] = ACTIONS(43),
    [anon_sym_DASH_DASH_GT_GTox] = ACTIONS(43),
    [anon_sym_DASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_DASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_DASH_DASH_BSLASHx] = ACTIONS(43),
    [anon_sym_DASH_DASH_BSLASHox] = ACTIONS(43),
    [anon_sym_DASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(43),
    [anon_sym_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(43),
    [anon_sym_DASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_DASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_DASH_DASH_SLASHx] = ACTIONS(43),
    [anon_sym_DASH_DASH_SLASHox] = ACTIONS(43),
    [anon_sym_DASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_DASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_DASH_DASH_SLASH_SLASHx] = ACTIONS(43),
    [anon_sym_DASH_DASH_SLASH_SLASHox] = ACTIONS(43),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_o_LT_DASH] = ACTIONS(41),
    [anon_sym_x_LT_DASH] = ACTIONS(41),
    [anon_sym_xo_LT_DASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH] = ACTIONS(41),
    [anon_sym_o_LT_LT_DASH] = ACTIONS(41),
    [anon_sym_x_LT_LT_DASH] = ACTIONS(41),
    [anon_sym_xo_LT_LT_DASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH] = ACTIONS(41),
    [anon_sym_o_SLASH_DASH] = ACTIONS(41),
    [anon_sym_x_SLASH_DASH] = ACTIONS(41),
    [anon_sym_xo_SLASH_DASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(41),
    [anon_sym_o_SLASH_SLASH_DASH] = ACTIONS(41),
    [anon_sym_x_SLASH_SLASH_DASH] = ACTIONS(41),
    [anon_sym_xo_SLASH_SLASH_DASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH] = ACTIONS(41),
    [anon_sym_o_BSLASH_DASH] = ACTIONS(41),
    [anon_sym_x_BSLASH_DASH] = ACTIONS(41),
    [anon_sym_xo_BSLASH_DASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH] = ACTIONS(41),
    [anon_sym_o_BSLASH_BSLASH_DASH] = ACTIONS(41),
    [anon_sym_x_BSLASH_BSLASH_DASH] = ACTIONS(41),
    [anon_sym_xo_BSLASH_BSLASH_DASH] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH] = ACTIONS(41),
    [anon_sym_o_LT_DASH_DASH] = ACTIONS(43),
    [anon_sym_x_LT_DASH_DASH] = ACTIONS(43),
    [anon_sym_xo_LT_DASH_DASH] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH] = ACTIONS(41),
    [anon_sym_o_LT_LT_DASH_DASH] = ACTIONS(43),
    [anon_sym_x_LT_LT_DASH_DASH] = ACTIONS(43),
    [anon_sym_xo_LT_LT_DASH_DASH] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(41),
    [anon_sym_o_SLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_x_SLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_xo_SLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH] = ACTIONS(41),
    [anon_sym_o_SLASH_SLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_x_SLASH_SLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_xo_SLASH_SLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH] = ACTIONS(41),
    [anon_sym_o_BSLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_x_BSLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_xo_BSLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH] = ACTIONS(41),
    [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_xo_BSLASH_BSLASH_DASH_DASH] = ACTIONS(43),
    [anon_sym_LT_DASH_GT] = ACTIONS(41),
    [anon_sym_LT_DASH_GTo] = ACTIONS(41),
    [anon_sym_LT_DASH_GTx] = ACTIONS(41),
    [anon_sym_LT_DASH_GTox] = ACTIONS(41),
    [anon_sym_LT_DASH_GToo] = ACTIONS(43),
    [anon_sym_LT_DASH_GTxo] = ACTIONS(43),
    [anon_sym_LT_DASH_GToxo] = ACTIONS(43),
    [anon_sym_LT_DASH_GTxx] = ACTIONS(41),
    [anon_sym_LT_DASH_GToxx] = ACTIONS(41),
    [anon_sym_LT_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_LT_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_LT_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_LT_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_LT_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_LT_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_LT_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_LT_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_LT_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_LT_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASH] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_LT_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GT] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GTo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GTx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GTox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GToo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GTxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GToxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GTxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GToxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GT] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GT] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GT] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GT] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GT] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GT] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GT] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(41),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(43),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(5),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [anon_sym_DASH_GT] = ACTIONS(45),
    [anon_sym_DASH_GTo] = ACTIONS(45),
    [anon_sym_DASH_GTx] = ACTIONS(47),
    [anon_sym_DASH_GTox] = ACTIONS(47),
    [anon_sym_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_DASH_GT_GTx] = ACTIONS(47),
    [anon_sym_DASH_GT_GTox] = ACTIONS(47),
    [anon_sym_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_DASH_BSLASHx] = ACTIONS(47),
    [anon_sym_DASH_BSLASHox] = ACTIONS(47),
    [anon_sym_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_DASH_BSLASH_BSLASHx] = ACTIONS(47),
    [anon_sym_DASH_BSLASH_BSLASHox] = ACTIONS(47),
    [anon_sym_DASH_SLASH] = ACTIONS(45),
    [anon_sym_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_DASH_SLASHx] = ACTIONS(47),
    [anon_sym_DASH_SLASHox] = ACTIONS(47),
    [anon_sym_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_DASH_SLASH_SLASHx] = ACTIONS(47),
    [anon_sym_DASH_SLASH_SLASHox] = ACTIONS(47),
    [anon_sym_DASH_DASH_GT] = ACTIONS(45),
    [anon_sym_DASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_DASH_DASH_GTx] = ACTIONS(47),
    [anon_sym_DASH_DASH_GTox] = ACTIONS(47),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_DASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_DASH_DASH_GT_GTx] = ACTIONS(47),
    [anon_sym_DASH_DASH_GT_GTox] = ACTIONS(47),
    [anon_sym_DASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_DASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_DASH_DASH_BSLASHx] = ACTIONS(47),
    [anon_sym_DASH_DASH_BSLASHox] = ACTIONS(47),
    [anon_sym_DASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(47),
    [anon_sym_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(47),
    [anon_sym_DASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_DASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_DASH_DASH_SLASHx] = ACTIONS(47),
    [anon_sym_DASH_DASH_SLASHox] = ACTIONS(47),
    [anon_sym_DASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_DASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_DASH_DASH_SLASH_SLASHx] = ACTIONS(47),
    [anon_sym_DASH_DASH_SLASH_SLASHox] = ACTIONS(47),
    [anon_sym_LT_DASH] = ACTIONS(45),
    [anon_sym_o_LT_DASH] = ACTIONS(45),
    [anon_sym_x_LT_DASH] = ACTIONS(45),
    [anon_sym_xo_LT_DASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH] = ACTIONS(45),
    [anon_sym_o_LT_LT_DASH] = ACTIONS(45),
    [anon_sym_x_LT_LT_DASH] = ACTIONS(45),
    [anon_sym_xo_LT_LT_DASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH] = ACTIONS(45),
    [anon_sym_o_SLASH_DASH] = ACTIONS(45),
    [anon_sym_x_SLASH_DASH] = ACTIONS(45),
    [anon_sym_xo_SLASH_DASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(45),
    [anon_sym_o_SLASH_SLASH_DASH] = ACTIONS(45),
    [anon_sym_x_SLASH_SLASH_DASH] = ACTIONS(45),
    [anon_sym_xo_SLASH_SLASH_DASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH] = ACTIONS(45),
    [anon_sym_o_BSLASH_DASH] = ACTIONS(45),
    [anon_sym_x_BSLASH_DASH] = ACTIONS(45),
    [anon_sym_xo_BSLASH_DASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH] = ACTIONS(45),
    [anon_sym_o_BSLASH_BSLASH_DASH] = ACTIONS(45),
    [anon_sym_x_BSLASH_BSLASH_DASH] = ACTIONS(45),
    [anon_sym_xo_BSLASH_BSLASH_DASH] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH] = ACTIONS(45),
    [anon_sym_o_LT_DASH_DASH] = ACTIONS(47),
    [anon_sym_x_LT_DASH_DASH] = ACTIONS(47),
    [anon_sym_xo_LT_DASH_DASH] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH] = ACTIONS(45),
    [anon_sym_o_LT_LT_DASH_DASH] = ACTIONS(47),
    [anon_sym_x_LT_LT_DASH_DASH] = ACTIONS(47),
    [anon_sym_xo_LT_LT_DASH_DASH] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(45),
    [anon_sym_o_SLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_x_SLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_xo_SLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH] = ACTIONS(45),
    [anon_sym_o_SLASH_SLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_x_SLASH_SLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_xo_SLASH_SLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH] = ACTIONS(45),
    [anon_sym_o_BSLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_x_BSLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_xo_BSLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH] = ACTIONS(45),
    [anon_sym_o_BSLASH_BSLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_x_BSLASH_BSLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_xo_BSLASH_BSLASH_DASH_DASH] = ACTIONS(47),
    [anon_sym_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_DASH_GTo] = ACTIONS(45),
    [anon_sym_LT_DASH_GTx] = ACTIONS(45),
    [anon_sym_LT_DASH_GTox] = ACTIONS(45),
    [anon_sym_LT_DASH_GToo] = ACTIONS(47),
    [anon_sym_LT_DASH_GTxo] = ACTIONS(47),
    [anon_sym_LT_DASH_GToxo] = ACTIONS(47),
    [anon_sym_LT_DASH_GTxx] = ACTIONS(45),
    [anon_sym_LT_DASH_GToxx] = ACTIONS(45),
    [anon_sym_LT_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_LT_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_LT_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_LT_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_LT_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_LT_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_LT_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_LT_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_LT_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_LT_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASH] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_LT_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GTo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GTx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GTox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GToo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GTxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GToxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GTxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GToxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GT] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GT] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GT] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GT] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_LT_LT_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GT] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_SLASH_SLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GT] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GTxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GToxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GT] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GTxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_GT_GToxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_BSLASH_BSLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHo] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHox] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxx] = ACTIONS(45),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHxxo] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH_DASH_DASH_SLASH_SLASHoxxo] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_ATenduml,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_loop,
    STATE(3), 1,
      sym_string,
    STATE(4), 1,
      sym_participant_name,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_uml_repeat1,
    STATE(76), 1,
      sym_expression,
    STATE(77), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [63] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_ATenduml,
    ACTIONS(69), 1,
      anon_sym_skinparam,
    ACTIONS(72), 1,
      anon_sym_autonumber,
    ACTIONS(75), 1,
      anon_sym_autonumberstop,
    ACTIONS(81), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_group,
    ACTIONS(90), 1,
      anon_sym_loop,
    STATE(3), 1,
      sym_string,
    STATE(4), 1,
      sym_participant_name,
    STATE(76), 1,
      sym_expression,
    STATE(8), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(77), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(78), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [124] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_skinparam,
    ACTIONS(95), 1,
      anon_sym_autonumber,
    ACTIONS(97), 1,
      anon_sym_autonumberstop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(103), 1,
      anon_sym_end,
    ACTIONS(105), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_uml_repeat1,
    STATE(81), 1,
      sym_expression,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(99), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [187] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_skinparam,
    ACTIONS(95), 1,
      anon_sym_autonumber,
    ACTIONS(97), 1,
      anon_sym_autonumberstop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(107), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_uml_repeat1,
    STATE(81), 1,
      sym_expression,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(99), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [250] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_skinparam,
    ACTIONS(95), 1,
      anon_sym_autonumber,
    ACTIONS(97), 1,
      anon_sym_autonumberstop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(11), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(81), 1,
      sym_expression,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(99), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [313] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_skinparam,
    ACTIONS(95), 1,
      anon_sym_autonumber,
    ACTIONS(97), 1,
      anon_sym_autonumberstop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(12), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_uml_repeat1,
    STATE(81), 1,
      sym_expression,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(99), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [376] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_skinparam,
    ACTIONS(95), 1,
      anon_sym_autonumber,
    ACTIONS(97), 1,
      anon_sym_autonumberstop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(113), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(81), 1,
      sym_expression,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(99), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [439] = 16,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_skinparam,
    ACTIONS(118), 1,
      anon_sym_autonumber,
    ACTIONS(121), 1,
      anon_sym_autonumberstop,
    ACTIONS(127), 1,
      anon_sym_group,
    ACTIONS(130), 1,
      anon_sym_end,
    ACTIONS(132), 1,
      anon_sym_loop,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(81), 1,
      sym_expression,
    STATE(14), 2,
      sym_comment,
      aux_sym_uml_repeat1,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(124), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [500] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      anon_sym_autonumber,
    ACTIONS(55), 1,
      anon_sym_autonumberstop,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_group,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(135), 1,
      anon_sym_ATenduml,
    STATE(3), 1,
      sym_string,
    STATE(4), 1,
      sym_participant_name,
    STATE(7), 1,
      aux_sym_uml_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(76), 1,
      sym_expression,
    STATE(77), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(57), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [563] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_skinparam,
    ACTIONS(95), 1,
      anon_sym_autonumber,
    ACTIONS(97), 1,
      anon_sym_autonumberstop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(137), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_uml_repeat1,
    STATE(81), 1,
      sym_expression,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(99), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [626] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_skinparam,
    ACTIONS(95), 1,
      anon_sym_autonumber,
    ACTIONS(97), 1,
      anon_sym_autonumberstop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(81), 1,
      sym_expression,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(99), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [689] = 17,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_skinparam,
    ACTIONS(95), 1,
      anon_sym_autonumber,
    ACTIONS(97), 1,
      anon_sym_autonumberstop,
    ACTIONS(101), 1,
      anon_sym_group,
    ACTIONS(105), 1,
      anon_sym_loop,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(2), 1,
      sym_participant_name,
    STATE(3), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_uml_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(81), 1,
      sym_expression,
    STATE(82), 5,
      sym_skinparam,
      sym_attribute,
      sym_sequence_diagram,
      sym_group_block,
      sym_loop_block,
    ACTIONS(99), 8,
      anon_sym_participant,
      anon_sym_actor,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
  [752] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_as,
    ACTIONS(153), 1,
      anon_sym_order,
    STATE(19), 1,
      sym_comment,
    STATE(22), 1,
      sym_multiline,
    STATE(26), 1,
      aux_sym_attribute_repeat2,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(143), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(145), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [804] = 12,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      anon_sym_as,
    ACTIONS(161), 1,
      anon_sym_order,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      sym_multiline,
    STATE(25), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(143), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(37), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(145), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [856] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      anon_sym_as,
    ACTIONS(173), 1,
      anon_sym_order,
    ACTIONS(165), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(21), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(37), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(163), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_as,
    ACTIONS(153), 1,
      anon_sym_order,
    STATE(22), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_attribute_repeat2,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(176), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(178), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [946] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_as,
    ACTIONS(161), 1,
      anon_sym_order,
    STATE(23), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_attribute_repeat2,
    ACTIONS(176), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(37), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(178), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [992] = 9,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_as,
    ACTIONS(186), 1,
      anon_sym_order,
    STATE(24), 2,
      sym_comment,
      aux_sym_attribute_repeat2,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(165), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(163), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1036] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_as,
    ACTIONS(161), 1,
      anon_sym_order,
    STATE(21), 1,
      aux_sym_attribute_repeat2,
    STATE(25), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(37), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(178), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1082] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_as,
    ACTIONS(153), 1,
      anon_sym_order,
    STATE(24), 1,
      aux_sym_attribute_repeat2,
    STATE(26), 1,
      sym_comment,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(176), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(178), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1128] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_as,
    ACTIONS(161), 1,
      anon_sym_order,
    STATE(21), 1,
      aux_sym_attribute_repeat2,
    STATE(27), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(37), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(189), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1174] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_as,
    ACTIONS(153), 1,
      anon_sym_order,
    STATE(24), 1,
      aux_sym_attribute_repeat2,
    STATE(28), 1,
      sym_comment,
    STATE(46), 2,
      sym_attr_alias,
      sym_attr_order,
    ACTIONS(191), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(189), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1220] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(29), 1,
      sym_comment,
    ACTIONS(47), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(45), 15,
      anon_sym_skinparam,
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
  [1254] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(35), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(33), 16,
      anon_sym_skinparam,
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
  [1288] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(43), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(41), 16,
      anon_sym_skinparam,
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
  [1322] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(47), 4,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(45), 16,
      anon_sym_skinparam,
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
  [1356] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(197), 1,
      aux_sym_attribute_token3,
    STATE(33), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(195), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(199), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(193), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1396] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(35), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(33), 15,
      anon_sym_skinparam,
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
  [1430] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_attribute_token3,
    STATE(35), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(201), 2,
      anon_sym_inc,
      anon_sym_resume,
    ACTIONS(199), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(193), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1470] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(41), 15,
      anon_sym_skinparam,
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
  [1504] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(205), 16,
      anon_sym_skinparam,
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
  [1537] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(211), 15,
      anon_sym_skinparam,
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
  [1570] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(215), 15,
      anon_sym_skinparam,
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
  [1603] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(163), 16,
      anon_sym_skinparam,
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
  [1636] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(217), 16,
      anon_sym_skinparam,
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
  [1669] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_as,
    ACTIONS(227), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_comment,
    STATE(64), 1,
      sym_attr_alias,
    ACTIONS(223), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(221), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1708] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(211), 16,
      anon_sym_skinparam,
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
  [1741] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(215), 16,
      anon_sym_skinparam,
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
  [1774] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(229), 16,
      anon_sym_skinparam,
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
  [1807] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(205), 15,
      anon_sym_skinparam,
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
  [1840] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(163), 15,
      anon_sym_skinparam,
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
  [1873] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_as,
    ACTIONS(235), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym_comment,
    STATE(61), 1,
      sym_attr_alias,
    ACTIONS(223), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(221), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [1912] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(217), 15,
      anon_sym_skinparam,
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
  [1945] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(231), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(229), 15,
      anon_sym_skinparam,
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
  [1978] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(241), 1,
      aux_sym_attribute_token3,
    STATE(51), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(237), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(239), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2012] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_attribute_token3,
    STATE(51), 1,
      aux_sym_attribute_repeat1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(246), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2048] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(35), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(33), 14,
      anon_sym_skinparam,
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
  [2080] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(33), 15,
      anon_sym_skinparam,
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
  [2112] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(47), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(45), 14,
      anon_sym_skinparam,
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
  [2144] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(43), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(41), 14,
      anon_sym_skinparam,
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
  [2176] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(45), 15,
      anon_sym_skinparam,
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
  [2208] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(197), 1,
      aux_sym_attribute_token3,
    STATE(58), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(244), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(246), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
    STATE(59), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(41), 15,
      anon_sym_skinparam,
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
  [2276] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(248), 1,
      aux_sym_attribute_token3,
    ACTIONS(237), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
    ACTIONS(239), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2310] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(253), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2343] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(259), 14,
      anon_sym_skinparam,
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
  [2374] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(231), 4,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(229), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2405] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(253), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2438] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(259), 15,
      anon_sym_skinparam,
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
  [2469] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
      anon_sym_COLON,
    ACTIONS(229), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2500] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(265), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2530] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(269), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2560] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(273), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2590] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(277), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2620] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(281), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2650] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(285), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2680] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(289), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2710] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(193), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2740] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2770] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(297), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2800] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(301), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2830] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(305), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2860] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_ATenduml,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(309), 13,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2890] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(193), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2920] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(297), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2950] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(301), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [2980] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(269), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3010] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(273), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3040] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(277), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3070] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(86), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(281), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3100] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(285), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3130] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(289), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3160] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(293), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3190] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(265), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3220] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(305), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3250] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_autonumberstop,
      anon_sym_DQUOTE,
    ACTIONS(309), 14,
      anon_sym_skinparam,
      anon_sym_autonumber,
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
  [3280] = 8,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(93), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_string_repeat1,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3306] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_string_repeat1,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3332] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_string_repeat1,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3358] = 7,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_BSLASH,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(327), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(96), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3382] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_string_repeat1,
    STATE(97), 1,
      sym_comment,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3408] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_string_repeat1,
    STATE(98), 1,
      sym_comment,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3434] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_string_repeat1,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3460] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_string_repeat1,
    STATE(100), 1,
      sym_comment,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3486] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_string_repeat1,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3512] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_string_repeat1,
    STATE(102), 1,
      sym_comment,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3538] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_string_repeat1,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3564] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_string_repeat1,
    STATE(104), 1,
      sym_comment,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3590] = 8,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(136), 1,
      sym_escape_char,
    ACTIONS(313), 2,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
  [3616] = 8,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(351), 1,
      aux_sym_multiline_token1,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    STATE(106), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_multiline_repeat1,
    STATE(161), 1,
      sym_escape_char,
  [3641] = 8,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(351), 1,
      aux_sym_multiline_token1,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_multiline_repeat1,
    STATE(161), 1,
      sym_escape_char,
  [3666] = 8,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(351), 1,
      aux_sym_multiline_token1,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_multiline_repeat1,
    STATE(108), 1,
      sym_comment,
    STATE(161), 1,
      sym_escape_char,
  [3691] = 8,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(351), 1,
      aux_sym_multiline_token1,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_multiline_repeat1,
    STATE(109), 1,
      sym_comment,
    STATE(161), 1,
      sym_escape_char,
  [3716] = 7,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(363), 1,
      aux_sym_multiline_token1,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    ACTIONS(368), 1,
      anon_sym_BSLASH,
    STATE(161), 1,
      sym_escape_char,
    STATE(110), 2,
      sym_comment,
      aux_sym_multiline_repeat1,
  [3739] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(373), 1,
      anon_sym_ATendditaa,
    STATE(111), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_json_repeat1,
    ACTIONS(371), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3759] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_participant_name,
    STATE(34), 1,
      sym_string,
    STATE(112), 1,
      sym_comment,
  [3781] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(381), 1,
      anon_sym_ATendjson,
    STATE(113), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_json_repeat1,
    ACTIONS(379), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3801] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(385), 1,
      anon_sym_ATendyaml,
    STATE(114), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_json_repeat1,
    ACTIONS(383), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3821] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_ATendjson,
    STATE(115), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_json_repeat1,
    ACTIONS(379), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3841] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(389), 1,
      anon_sym_ATendyaml,
    STATE(116), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_json_repeat1,
    ACTIONS(383), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3861] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendyaml,
    ACTIONS(391), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(117), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3879] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_ATendebnf,
    STATE(118), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_json_repeat1,
    ACTIONS(396), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3899] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_ATendregex,
    STATE(119), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym_json_repeat1,
    ACTIONS(400), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3919] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_ATendwbs,
    STATE(120), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_json_repeat1,
    ACTIONS(404), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3939] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendjson,
    ACTIONS(408), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(121), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [3957] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(413), 1,
      anon_sym_ATendchen,
    STATE(122), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_json_repeat1,
    ACTIONS(411), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3977] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(417), 1,
      anon_sym_ATendgantt,
    STATE(123), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_json_repeat1,
    ACTIONS(415), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [3997] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(421), 1,
      anon_sym_ATendchronology,
    STATE(124), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym_json_repeat1,
    ACTIONS(419), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4017] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(425), 1,
      anon_sym_ATendmindmap,
    STATE(125), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_json_repeat1,
    ACTIONS(423), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4037] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(427), 1,
      anon_sym_ATendwbs,
    STATE(126), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_json_repeat1,
    ACTIONS(404), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4057] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(429), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_participant_name,
    STATE(53), 1,
      sym_string,
    STATE(127), 1,
      sym_comment,
  [4079] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendebnf,
    ACTIONS(433), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(128), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4097] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendregex,
    ACTIONS(436), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(129), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4115] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(439), 1,
      aux_sym_attribute_token1,
    ACTIONS(441), 1,
      aux_sym_attribute_token2,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_comment,
    STATE(221), 1,
      sym_string,
  [4137] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(445), 1,
      anon_sym_ATendebnf,
    STATE(118), 1,
      aux_sym_json_repeat1,
    STATE(131), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4157] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(447), 1,
      anon_sym_ATendregex,
    STATE(119), 1,
      aux_sym_json_repeat1,
    STATE(132), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4177] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(449), 1,
      anon_sym_ATendditaa,
    STATE(111), 1,
      aux_sym_json_repeat1,
    STATE(133), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4197] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendditaa,
    ACTIONS(451), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(134), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4215] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(454), 1,
      anon_sym_ATendgantt,
    STATE(123), 1,
      aux_sym_json_repeat1,
    STATE(135), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4235] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(136), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [4251] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendgantt,
    ACTIONS(458), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(137), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4269] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendchronology,
    ACTIONS(461), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(138), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4287] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendmindmap,
    ACTIONS(464), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(139), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4305] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendwbs,
    ACTIONS(467), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(140), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4323] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_ATendchen,
    ACTIONS(470), 2,
      anon_sym_AT,
      aux_sym_json_token1,
    STATE(141), 2,
      sym_comment,
      aux_sym_json_repeat1,
  [4341] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(473), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_participant_name,
    STATE(30), 1,
      sym_string,
    STATE(142), 1,
      sym_comment,
  [4363] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    ACTIONS(477), 1,
      aux_sym_attribute_token1,
    ACTIONS(479), 1,
      aux_sym_attribute_token2,
    STATE(143), 1,
      sym_comment,
    STATE(216), 1,
      sym_string,
  [4385] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(481), 1,
      anon_sym_ATendchronology,
    STATE(124), 1,
      aux_sym_json_repeat1,
    STATE(144), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4405] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(483), 1,
      aux_sym_attr_alias_token1,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_participant_name,
    STATE(54), 1,
      sym_string,
    STATE(145), 1,
      sym_comment,
  [4427] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(146), 1,
      sym_comment,
    ACTIONS(487), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH,
  [4443] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(489), 1,
      anon_sym_ATendmindmap,
    STATE(125), 1,
      aux_sym_json_repeat1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4463] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(491), 1,
      anon_sym_ATendchen,
    STATE(141), 1,
      aux_sym_json_repeat1,
    STATE(148), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_AT,
      aux_sym_json_token1,
  [4483] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    STATE(149), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4502] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4521] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_json_repeat2,
  [4540] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4559] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      sym_comment,
    STATE(204), 1,
      aux_sym_json_repeat2,
  [4578] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    STATE(154), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_json_repeat2,
  [4597] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4616] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_json_repeat2,
  [4635] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(487), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [4650] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4669] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    STATE(159), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_json_repeat2,
  [4688] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    STATE(160), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_json_repeat2,
  [4707] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(161), 1,
      sym_comment,
    ACTIONS(517), 3,
      aux_sym_multiline_token1,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
  [4722] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    STATE(162), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4741] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
    STATE(163), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym_json_repeat2,
  [4760] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    STATE(164), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4779] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(165), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_json_repeat2,
  [4798] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_json_repeat2,
  [4817] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4836] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_json_repeat2,
  [4855] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
    STATE(169), 1,
      sym_comment,
    STATE(191), 1,
      aux_sym_json_repeat2,
  [4874] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(170), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendebnf,
  [4889] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(171), 1,
      sym_comment,
    ACTIONS(537), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [4904] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendregex,
  [4919] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(68), 1,
      sym_boolean_literal,
    STATE(173), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_true,
      anon_sym_false,
  [4936] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4955] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_comment,
    STATE(196), 1,
      aux_sym_json_repeat2,
  [4974] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [4993] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendditaa,
  [5008] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5027] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_json_repeat2,
  [5046] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5065] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(181), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendgantt,
  [5080] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      aux_sym_json_repeat2,
    STATE(182), 1,
      sym_comment,
  [5099] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5118] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5137] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(185), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendmindmap,
  [5152] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    STATE(186), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5171] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(187), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendwbs,
  [5186] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(188), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendjson,
  [5201] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(189), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchen,
  [5216] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      aux_sym_json_repeat2,
    STATE(190), 1,
      sym_comment,
  [5235] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5254] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(192), 1,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [5269] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(83), 1,
      sym_boolean_literal,
    STATE(193), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_true,
      anon_sym_false,
  [5286] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(194), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendyaml,
  [5301] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      aux_sym_json_repeat2,
    STATE(195), 1,
      sym_comment,
  [5320] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    STATE(196), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5339] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      aux_sym_json_repeat2,
    STATE(197), 1,
      sym_comment,
  [5358] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    STATE(198), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5377] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    STATE(199), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_json_repeat2,
  [5396] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      aux_sym_json_repeat2,
    STATE(200), 1,
      sym_comment,
  [5415] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    STATE(201), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_json_repeat2,
  [5434] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
    STATE(162), 1,
      aux_sym_json_repeat2,
    STATE(202), 1,
      sym_comment,
  [5453] = 5,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    ACTIONS(587), 1,
      aux_sym_json_token2,
    STATE(203), 2,
      sym_comment,
      aux_sym_json_repeat2,
  [5470] = 6,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(495), 1,
      aux_sym_json_token2,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    STATE(203), 1,
      aux_sym_json_repeat2,
    STATE(204), 1,
      sym_comment,
  [5489] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(205), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_AT,
      aux_sym_json_token1,
      anon_sym_ATendchronology,
  [5504] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(592), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(594), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(206), 1,
      sym_comment,
  [5520] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(207), 1,
      sym_comment,
    ACTIONS(596), 2,
      ts_builtin_sym_end,
      aux_sym_json_token2,
  [5534] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(598), 1,
      anon_sym_sequenceMessageAlign,
    ACTIONS(600), 1,
      anon_sym_responseMessageBelowArrow,
    STATE(208), 1,
      sym_comment,
  [5550] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(602), 1,
      aux_sym_attr_alias_token1,
    STATE(209), 1,
      sym_comment,
  [5563] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
    STATE(210), 1,
      sym_comment,
  [5576] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(606), 1,
      aux_sym_escape_char_token1,
    STATE(211), 1,
      sym_comment,
  [5589] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    STATE(212), 1,
      sym_comment,
  [5602] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(610), 1,
      sym_color,
    STATE(213), 1,
      sym_comment,
  [5615] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_attribute_token2,
    STATE(214), 1,
      sym_comment,
  [5628] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(612), 1,
      aux_sym_escape_char_token1,
    STATE(215), 1,
      sym_comment,
  [5641] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(614), 1,
      aux_sym_attribute_token2,
    STATE(216), 1,
      sym_comment,
  [5654] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(616), 1,
      aux_sym_attr_alias_token1,
    STATE(217), 1,
      sym_comment,
  [5667] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(618), 1,
      aux_sym_comment_token1,
    STATE(218), 1,
      sym_comment,
  [5680] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(620), 1,
      aux_sym_attribute_token3,
    STATE(219), 1,
      sym_comment,
  [5693] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(622), 1,
      aux_sym_attribute_token3,
    STATE(220), 1,
      sym_comment,
  [5706] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(624), 1,
      aux_sym_attribute_token2,
    STATE(221), 1,
      sym_comment,
  [5719] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_SLASH,
    STATE(222), 1,
      sym_comment,
  [5732] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(628), 1,
      aux_sym_sequence_diagram_token1,
    STATE(223), 1,
      sym_comment,
  [5745] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(630), 1,
      aux_sym_sequence_diagram_token1,
    STATE(224), 1,
      sym_comment,
  [5758] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(632), 1,
      aux_sym_attribute_token3,
    STATE(225), 1,
      sym_comment,
  [5771] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(634), 1,
      aux_sym_sequence_diagram_token1,
    STATE(226), 1,
      sym_comment,
  [5784] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(636), 1,
      aux_sym_attr_alias_token1,
    STATE(227), 1,
      sym_comment,
  [5797] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(228), 1,
      sym_comment,
  [5810] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(640), 1,
      aux_sym_group_block_token1,
    STATE(229), 1,
      sym_comment,
  [5823] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(642), 1,
      aux_sym_attr_alias_token1,
    STATE(230), 1,
      sym_comment,
  [5836] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(644), 1,
      sym_color,
    STATE(231), 1,
      sym_comment,
  [5849] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(646), 1,
      aux_sym_comment_token2,
    STATE(232), 1,
      sym_comment,
  [5862] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_attribute_token2,
    STATE(233), 1,
      sym_comment,
  [5875] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(648), 1,
      aux_sym_group_block_token1,
    STATE(234), 1,
      sym_comment,
  [5888] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(650), 1,
      aux_sym_sequence_diagram_token1,
    STATE(235), 1,
      sym_comment,
  [5901] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(652), 1,
      aux_sym_attribute_token3,
    STATE(236), 1,
      sym_comment,
  [5914] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    STATE(237), 1,
      sym_comment,
  [5927] = 1,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
  [5931] = 1,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 376,
  [SMALL_STATE(14)] = 439,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 563,
  [SMALL_STATE(17)] = 626,
  [SMALL_STATE(18)] = 689,
  [SMALL_STATE(19)] = 752,
  [SMALL_STATE(20)] = 804,
  [SMALL_STATE(21)] = 856,
  [SMALL_STATE(22)] = 900,
  [SMALL_STATE(23)] = 946,
  [SMALL_STATE(24)] = 992,
  [SMALL_STATE(25)] = 1036,
  [SMALL_STATE(26)] = 1082,
  [SMALL_STATE(27)] = 1128,
  [SMALL_STATE(28)] = 1174,
  [SMALL_STATE(29)] = 1220,
  [SMALL_STATE(30)] = 1254,
  [SMALL_STATE(31)] = 1288,
  [SMALL_STATE(32)] = 1322,
  [SMALL_STATE(33)] = 1356,
  [SMALL_STATE(34)] = 1396,
  [SMALL_STATE(35)] = 1430,
  [SMALL_STATE(36)] = 1470,
  [SMALL_STATE(37)] = 1504,
  [SMALL_STATE(38)] = 1537,
  [SMALL_STATE(39)] = 1570,
  [SMALL_STATE(40)] = 1603,
  [SMALL_STATE(41)] = 1636,
  [SMALL_STATE(42)] = 1669,
  [SMALL_STATE(43)] = 1708,
  [SMALL_STATE(44)] = 1741,
  [SMALL_STATE(45)] = 1774,
  [SMALL_STATE(46)] = 1807,
  [SMALL_STATE(47)] = 1840,
  [SMALL_STATE(48)] = 1873,
  [SMALL_STATE(49)] = 1912,
  [SMALL_STATE(50)] = 1945,
  [SMALL_STATE(51)] = 1978,
  [SMALL_STATE(52)] = 2012,
  [SMALL_STATE(53)] = 2048,
  [SMALL_STATE(54)] = 2080,
  [SMALL_STATE(55)] = 2112,
  [SMALL_STATE(56)] = 2144,
  [SMALL_STATE(57)] = 2176,
  [SMALL_STATE(58)] = 2208,
  [SMALL_STATE(59)] = 2244,
  [SMALL_STATE(60)] = 2276,
  [SMALL_STATE(61)] = 2310,
  [SMALL_STATE(62)] = 2343,
  [SMALL_STATE(63)] = 2374,
  [SMALL_STATE(64)] = 2405,
  [SMALL_STATE(65)] = 2438,
  [SMALL_STATE(66)] = 2469,
  [SMALL_STATE(67)] = 2500,
  [SMALL_STATE(68)] = 2530,
  [SMALL_STATE(69)] = 2560,
  [SMALL_STATE(70)] = 2590,
  [SMALL_STATE(71)] = 2620,
  [SMALL_STATE(72)] = 2650,
  [SMALL_STATE(73)] = 2680,
  [SMALL_STATE(74)] = 2710,
  [SMALL_STATE(75)] = 2740,
  [SMALL_STATE(76)] = 2770,
  [SMALL_STATE(77)] = 2800,
  [SMALL_STATE(78)] = 2830,
  [SMALL_STATE(79)] = 2860,
  [SMALL_STATE(80)] = 2890,
  [SMALL_STATE(81)] = 2920,
  [SMALL_STATE(82)] = 2950,
  [SMALL_STATE(83)] = 2980,
  [SMALL_STATE(84)] = 3010,
  [SMALL_STATE(85)] = 3040,
  [SMALL_STATE(86)] = 3070,
  [SMALL_STATE(87)] = 3100,
  [SMALL_STATE(88)] = 3130,
  [SMALL_STATE(89)] = 3160,
  [SMALL_STATE(90)] = 3190,
  [SMALL_STATE(91)] = 3220,
  [SMALL_STATE(92)] = 3250,
  [SMALL_STATE(93)] = 3280,
  [SMALL_STATE(94)] = 3306,
  [SMALL_STATE(95)] = 3332,
  [SMALL_STATE(96)] = 3358,
  [SMALL_STATE(97)] = 3382,
  [SMALL_STATE(98)] = 3408,
  [SMALL_STATE(99)] = 3434,
  [SMALL_STATE(100)] = 3460,
  [SMALL_STATE(101)] = 3486,
  [SMALL_STATE(102)] = 3512,
  [SMALL_STATE(103)] = 3538,
  [SMALL_STATE(104)] = 3564,
  [SMALL_STATE(105)] = 3590,
  [SMALL_STATE(106)] = 3616,
  [SMALL_STATE(107)] = 3641,
  [SMALL_STATE(108)] = 3666,
  [SMALL_STATE(109)] = 3691,
  [SMALL_STATE(110)] = 3716,
  [SMALL_STATE(111)] = 3739,
  [SMALL_STATE(112)] = 3759,
  [SMALL_STATE(113)] = 3781,
  [SMALL_STATE(114)] = 3801,
  [SMALL_STATE(115)] = 3821,
  [SMALL_STATE(116)] = 3841,
  [SMALL_STATE(117)] = 3861,
  [SMALL_STATE(118)] = 3879,
  [SMALL_STATE(119)] = 3899,
  [SMALL_STATE(120)] = 3919,
  [SMALL_STATE(121)] = 3939,
  [SMALL_STATE(122)] = 3957,
  [SMALL_STATE(123)] = 3977,
  [SMALL_STATE(124)] = 3997,
  [SMALL_STATE(125)] = 4017,
  [SMALL_STATE(126)] = 4037,
  [SMALL_STATE(127)] = 4057,
  [SMALL_STATE(128)] = 4079,
  [SMALL_STATE(129)] = 4097,
  [SMALL_STATE(130)] = 4115,
  [SMALL_STATE(131)] = 4137,
  [SMALL_STATE(132)] = 4157,
  [SMALL_STATE(133)] = 4177,
  [SMALL_STATE(134)] = 4197,
  [SMALL_STATE(135)] = 4215,
  [SMALL_STATE(136)] = 4235,
  [SMALL_STATE(137)] = 4251,
  [SMALL_STATE(138)] = 4269,
  [SMALL_STATE(139)] = 4287,
  [SMALL_STATE(140)] = 4305,
  [SMALL_STATE(141)] = 4323,
  [SMALL_STATE(142)] = 4341,
  [SMALL_STATE(143)] = 4363,
  [SMALL_STATE(144)] = 4385,
  [SMALL_STATE(145)] = 4405,
  [SMALL_STATE(146)] = 4427,
  [SMALL_STATE(147)] = 4443,
  [SMALL_STATE(148)] = 4463,
  [SMALL_STATE(149)] = 4483,
  [SMALL_STATE(150)] = 4502,
  [SMALL_STATE(151)] = 4521,
  [SMALL_STATE(152)] = 4540,
  [SMALL_STATE(153)] = 4559,
  [SMALL_STATE(154)] = 4578,
  [SMALL_STATE(155)] = 4597,
  [SMALL_STATE(156)] = 4616,
  [SMALL_STATE(157)] = 4635,
  [SMALL_STATE(158)] = 4650,
  [SMALL_STATE(159)] = 4669,
  [SMALL_STATE(160)] = 4688,
  [SMALL_STATE(161)] = 4707,
  [SMALL_STATE(162)] = 4722,
  [SMALL_STATE(163)] = 4741,
  [SMALL_STATE(164)] = 4760,
  [SMALL_STATE(165)] = 4779,
  [SMALL_STATE(166)] = 4798,
  [SMALL_STATE(167)] = 4817,
  [SMALL_STATE(168)] = 4836,
  [SMALL_STATE(169)] = 4855,
  [SMALL_STATE(170)] = 4874,
  [SMALL_STATE(171)] = 4889,
  [SMALL_STATE(172)] = 4904,
  [SMALL_STATE(173)] = 4919,
  [SMALL_STATE(174)] = 4936,
  [SMALL_STATE(175)] = 4955,
  [SMALL_STATE(176)] = 4974,
  [SMALL_STATE(177)] = 4993,
  [SMALL_STATE(178)] = 5008,
  [SMALL_STATE(179)] = 5027,
  [SMALL_STATE(180)] = 5046,
  [SMALL_STATE(181)] = 5065,
  [SMALL_STATE(182)] = 5080,
  [SMALL_STATE(183)] = 5099,
  [SMALL_STATE(184)] = 5118,
  [SMALL_STATE(185)] = 5137,
  [SMALL_STATE(186)] = 5152,
  [SMALL_STATE(187)] = 5171,
  [SMALL_STATE(188)] = 5186,
  [SMALL_STATE(189)] = 5201,
  [SMALL_STATE(190)] = 5216,
  [SMALL_STATE(191)] = 5235,
  [SMALL_STATE(192)] = 5254,
  [SMALL_STATE(193)] = 5269,
  [SMALL_STATE(194)] = 5286,
  [SMALL_STATE(195)] = 5301,
  [SMALL_STATE(196)] = 5320,
  [SMALL_STATE(197)] = 5339,
  [SMALL_STATE(198)] = 5358,
  [SMALL_STATE(199)] = 5377,
  [SMALL_STATE(200)] = 5396,
  [SMALL_STATE(201)] = 5415,
  [SMALL_STATE(202)] = 5434,
  [SMALL_STATE(203)] = 5453,
  [SMALL_STATE(204)] = 5470,
  [SMALL_STATE(205)] = 5489,
  [SMALL_STATE(206)] = 5504,
  [SMALL_STATE(207)] = 5520,
  [SMALL_STATE(208)] = 5534,
  [SMALL_STATE(209)] = 5550,
  [SMALL_STATE(210)] = 5563,
  [SMALL_STATE(211)] = 5576,
  [SMALL_STATE(212)] = 5589,
  [SMALL_STATE(213)] = 5602,
  [SMALL_STATE(214)] = 5615,
  [SMALL_STATE(215)] = 5628,
  [SMALL_STATE(216)] = 5641,
  [SMALL_STATE(217)] = 5654,
  [SMALL_STATE(218)] = 5667,
  [SMALL_STATE(219)] = 5680,
  [SMALL_STATE(220)] = 5693,
  [SMALL_STATE(221)] = 5706,
  [SMALL_STATE(222)] = 5719,
  [SMALL_STATE(223)] = 5732,
  [SMALL_STATE(224)] = 5745,
  [SMALL_STATE(225)] = 5758,
  [SMALL_STATE(226)] = 5771,
  [SMALL_STATE(227)] = 5784,
  [SMALL_STATE(228)] = 5797,
  [SMALL_STATE(229)] = 5810,
  [SMALL_STATE(230)] = 5823,
  [SMALL_STATE(231)] = 5836,
  [SMALL_STATE(232)] = 5849,
  [SMALL_STATE(233)] = 5862,
  [SMALL_STATE(234)] = 5875,
  [SMALL_STATE(235)] = 5888,
  [SMALL_STATE(236)] = 5901,
  [SMALL_STATE(237)] = 5914,
  [SMALL_STATE(238)] = 5927,
  [SMALL_STATE(239)] = 5931,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_participant_name, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participant_name, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(213),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(227),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(219),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 1),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(231),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(209),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 2, 0, 0), SHIFT_REPEAT(225),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat2, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_order, 2, 0, 15),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_order, 2, 0, 15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 3, 0, 13),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_alias, 2, 0, 14),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 4, 0, 13),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 4, 0, 12),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 4, 0, 12),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparam, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparam, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_block, 3, 0, 12),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_block, 3, 0, 12),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uml_repeat1, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 5, 0, 13),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_diagram, 6, 0, 13),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 4, 0, 10),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 4, 0, 9),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 11),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3, 0, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 4, 0, 11),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_repeat1, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 4, 0, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 3, 0, 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_repeat1, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 3, 0, 7),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4, 0, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 3, 0, 8),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3, 0, 9),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 4, 0, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ditaa, 4, 0, 6),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wbs, 3, 0, 10),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chen, 3, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt, 4, 0, 7),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 2, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chronology, 4, 0, 8),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 3, 0, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ebnf, 3, 0, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 2, 0, 0), SHIFT_REPEAT(207),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 4, 0, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_repeat2, 1, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [604] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uml, 3, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
