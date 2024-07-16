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
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 48
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_function_LPAREN_RPAREN_LBRACE = 2,
  anon_sym_RBRACE_SEMI = 3,
  anon_sym_RBRACE_COMMA = 4,
  aux_sym_future_token1 = 5,
  aux_sym_casting_token1 = 6,
  aux_sym_property_token1 = 7,
  aux_sym_duration_token1 = 8,
  aux_sym_constant_token1 = 9,
  aux_sym_number_token1 = 10,
  aux_sym_record_token1 = 11,
  aux_sym_record_token2 = 12,
  sym_keyword = 13,
  anon_sym_AMP_AMP = 14,
  aux_sym_operator_token1 = 15,
  anon_sym_PIPE_PIPE = 16,
  aux_sym_operator_token2 = 17,
  anon_sym_QMARK_QMARK = 18,
  anon_sym_QMARK_COLON = 19,
  anon_sym_EQ = 20,
  aux_sym_operator_token3 = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_ISNOT = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_QMARK_EQ = 25,
  anon_sym_STAR_EQ = 26,
  anon_sym_TILDE = 27,
  anon_sym_BANG_TILDE = 28,
  anon_sym_QMARK_TILDE = 29,
  anon_sym_STAR_TILDE = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_STAR = 37,
  aux_sym_operator_token4 = 38,
  anon_sym_SLASH = 39,
  anon_sym_u00f7 = 40,
  anon_sym_STAR_STAR = 41,
  aux_sym_operator_token5 = 42,
  aux_sym_operator_token6 = 43,
  anon_sym_u220b = 44,
  aux_sym_operator_token7 = 45,
  anon_sym_u220c = 46,
  aux_sym_operator_token8 = 47,
  anon_sym_u2287 = 48,
  aux_sym_operator_token9 = 49,
  anon_sym_u2283 = 50,
  aux_sym_operator_token10 = 51,
  anon_sym_u2285 = 52,
  aux_sym_operator_token11 = 53,
  anon_sym_u2208 = 54,
  aux_sym_operator_token12 = 55,
  anon_sym_NOTIN = 56,
  anon_sym_u2209 = 57,
  aux_sym_operator_token13 = 58,
  anon_sym_u2286 = 59,
  aux_sym_operator_token14 = 60,
  anon_sym_u2282 = 61,
  aux_sym_operator_token15 = 62,
  anon_sym_u2284 = 63,
  aux_sym_operator_token16 = 64,
  aux_sym_operator_token17 = 65,
  anon_sym_LPAREN = 66,
  anon_sym_RPAREN = 67,
  anon_sym_LBRACK = 68,
  anon_sym_RBRACK = 69,
  anon_sym_LBRACE = 70,
  anon_sym_RBRACE = 71,
  anon_sym_DASH_GT = 72,
  anon_sym_LT_DASH = 73,
  anon_sym_COMMA = 74,
  anon_sym_SEMI = 75,
  anon_sym_COLON = 76,
  anon_sym_any = 77,
  anon_sym_array = 78,
  anon_sym_bool = 79,
  anon_sym_datetime = 80,
  anon_sym_decimal = 81,
  anon_sym_duration = 82,
  anon_sym_float = 83,
  anon_sym_int = 84,
  anon_sym_number = 85,
  anon_sym_object = 86,
  anon_sym_string = 87,
  anon_sym_record = 88,
  anon_sym_geometry = 89,
  anon_sym_EDDSA = 90,
  anon_sym_ES256 = 91,
  anon_sym_ES384 = 92,
  anon_sym_ES512 = 93,
  anon_sym_HS256 = 94,
  anon_sym_HS384 = 95,
  anon_sym_HS512 = 96,
  anon_sym_PS256 = 97,
  anon_sym_PS384 = 98,
  anon_sym_PS512 = 99,
  anon_sym_RS256 = 100,
  anon_sym_RS384 = 101,
  anon_sym_RS512 = 102,
  aux_sym_function_token1 = 103,
  aux_sym_function_token2 = 104,
  anon_sym_count = 105,
  aux_sym_function_token3 = 106,
  aux_sym_function_token4 = 107,
  aux_sym_function_token5 = 108,
  aux_sym_function_token6 = 109,
  aux_sym_function_token7 = 110,
  aux_sym_function_token8 = 111,
  aux_sym_function_token9 = 112,
  aux_sym_function_token10 = 113,
  aux_sym_function_token11 = 114,
  aux_sym_function_token12 = 115,
  aux_sym_function_token13 = 116,
  aux_sym_function_token14 = 117,
  aux_sym_function_token15 = 118,
  aux_sym_function_token16 = 119,
  aux_sym_bool_token1 = 120,
  aux_sym_bool_token2 = 121,
  aux_sym_nothing_token1 = 122,
  aux_sym_nothing_token2 = 123,
  sym_variable = 124,
  sym_comment = 125,
  anon_sym_SQUOTE = 126,
  aux_sym_string_token1 = 127,
  anon_sym_BSLASH = 128,
  aux_sym_string_token2 = 129,
  anon_sym_DQUOTE = 130,
  aux_sym_string_token3 = 131,
  sym_new_line = 132,
  sym_source_file = 133,
  sym_tokens = 134,
  sym_scripting_function = 135,
  sym_scripting_content = 136,
  sym__scripting_statement = 137,
  sym_future = 138,
  sym_casting = 139,
  sym_property = 140,
  sym_duration = 141,
  sym_constant = 142,
  sym_number = 143,
  sym_record = 144,
  sym_operator = 145,
  sym_punctuation = 146,
  sym_delimiter = 147,
  sym_type = 148,
  sym_datatype = 149,
  sym_algotype = 150,
  sym_function = 151,
  sym_bool = 152,
  sym_nothing = 153,
  sym_string = 154,
  aux_sym_source_file_repeat1 = 155,
  aux_sym_scripting_content_repeat1 = 156,
  aux_sym_string_repeat1 = 157,
  aux_sym_string_repeat2 = 158,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = "function(){",
  [anon_sym_RBRACE_SEMI] = "};",
  [anon_sym_RBRACE_COMMA] = "},",
  [aux_sym_future_token1] = "future_token1",
  [aux_sym_casting_token1] = "casting_token1",
  [aux_sym_property_token1] = "property_token1",
  [aux_sym_duration_token1] = "duration_token1",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_record_token1] = "record_token1",
  [aux_sym_record_token2] = "record_token2",
  [sym_keyword] = "keyword",
  [anon_sym_AMP_AMP] = "&&",
  [aux_sym_operator_token1] = "operator_token1",
  [anon_sym_PIPE_PIPE] = "||",
  [aux_sym_operator_token2] = "operator_token2",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_QMARK_COLON] = "\?:",
  [anon_sym_EQ] = "=",
  [aux_sym_operator_token3] = "operator_token3",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_ISNOT] = "IS NOT",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_QMARK_TILDE] = "\?~",
  [anon_sym_STAR_TILDE] = "*~",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [aux_sym_operator_token4] = "operator_token4",
  [anon_sym_SLASH] = "/",
  [anon_sym_u00f7] = "\u00f7",
  [anon_sym_STAR_STAR] = "**",
  [aux_sym_operator_token5] = "operator_token5",
  [aux_sym_operator_token6] = "operator_token6",
  [anon_sym_u220b] = "\u220b",
  [aux_sym_operator_token7] = "operator_token7",
  [anon_sym_u220c] = "\u220c",
  [aux_sym_operator_token8] = "operator_token8",
  [anon_sym_u2287] = "\u2287",
  [aux_sym_operator_token9] = "operator_token9",
  [anon_sym_u2283] = "\u2283",
  [aux_sym_operator_token10] = "operator_token10",
  [anon_sym_u2285] = "\u2285",
  [aux_sym_operator_token11] = "operator_token11",
  [anon_sym_u2208] = "\u2208",
  [aux_sym_operator_token12] = "operator_token12",
  [anon_sym_NOTIN] = "NOT IN",
  [anon_sym_u2209] = "\u2209",
  [aux_sym_operator_token13] = "operator_token13",
  [anon_sym_u2286] = "\u2286",
  [aux_sym_operator_token14] = "operator_token14",
  [anon_sym_u2282] = "\u2282",
  [aux_sym_operator_token15] = "operator_token15",
  [anon_sym_u2284] = "\u2284",
  [aux_sym_operator_token16] = "operator_token16",
  [aux_sym_operator_token17] = "operator_token17",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_any] = "any",
  [anon_sym_array] = "array",
  [anon_sym_bool] = "bool",
  [anon_sym_datetime] = "datetime",
  [anon_sym_decimal] = "decimal",
  [anon_sym_duration] = "duration",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_number] = "number",
  [anon_sym_object] = "object",
  [anon_sym_string] = "string",
  [anon_sym_record] = "record",
  [anon_sym_geometry] = "geometry",
  [anon_sym_EDDSA] = "EDDSA",
  [anon_sym_ES256] = "ES256",
  [anon_sym_ES384] = "ES384",
  [anon_sym_ES512] = "ES512",
  [anon_sym_HS256] = "HS256",
  [anon_sym_HS384] = "HS384",
  [anon_sym_HS512] = "HS512",
  [anon_sym_PS256] = "PS256",
  [anon_sym_PS384] = "PS384",
  [anon_sym_PS512] = "PS512",
  [anon_sym_RS256] = "RS256",
  [anon_sym_RS384] = "RS384",
  [anon_sym_RS512] = "RS512",
  [aux_sym_function_token1] = "function_token1",
  [aux_sym_function_token2] = "function_token2",
  [anon_sym_count] = "count",
  [aux_sym_function_token3] = "function_token3",
  [aux_sym_function_token4] = "function_token4",
  [aux_sym_function_token5] = "function_token5",
  [aux_sym_function_token6] = "function_token6",
  [aux_sym_function_token7] = "function_token7",
  [aux_sym_function_token8] = "function_token8",
  [aux_sym_function_token9] = "function_token9",
  [aux_sym_function_token10] = "function_token10",
  [aux_sym_function_token11] = "function_token11",
  [aux_sym_function_token12] = "function_token12",
  [aux_sym_function_token13] = "function_token13",
  [aux_sym_function_token14] = "function_token14",
  [aux_sym_function_token15] = "function_token15",
  [aux_sym_function_token16] = "function_token16",
  [aux_sym_bool_token1] = "bool_token1",
  [aux_sym_bool_token2] = "bool_token2",
  [aux_sym_nothing_token1] = "nothing_token1",
  [aux_sym_nothing_token2] = "nothing_token2",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token3] = "string_token3",
  [sym_new_line] = "new_line",
  [sym_source_file] = "source_file",
  [sym_tokens] = "tokens",
  [sym_scripting_function] = "scripting_function",
  [sym_scripting_content] = "scripting_content",
  [sym__scripting_statement] = "_scripting_statement",
  [sym_future] = "future",
  [sym_casting] = "casting",
  [sym_property] = "property",
  [sym_duration] = "duration",
  [sym_constant] = "constant",
  [sym_number] = "number",
  [sym_record] = "record",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [sym_delimiter] = "delimiter",
  [sym_type] = "type",
  [sym_datatype] = "datatype",
  [sym_algotype] = "algotype",
  [sym_function] = "function",
  [sym_bool] = "bool",
  [sym_nothing] = "nothing",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_scripting_content_repeat1] = "scripting_content_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = anon_sym_function_LPAREN_RPAREN_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [anon_sym_RBRACE_COMMA] = anon_sym_RBRACE_COMMA,
  [aux_sym_future_token1] = aux_sym_future_token1,
  [aux_sym_casting_token1] = aux_sym_casting_token1,
  [aux_sym_property_token1] = aux_sym_property_token1,
  [aux_sym_duration_token1] = aux_sym_duration_token1,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_record_token1] = aux_sym_record_token1,
  [aux_sym_record_token2] = aux_sym_record_token2,
  [sym_keyword] = sym_keyword,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [aux_sym_operator_token1] = aux_sym_operator_token1,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [aux_sym_operator_token2] = aux_sym_operator_token2,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_QMARK_COLON] = anon_sym_QMARK_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_operator_token3] = aux_sym_operator_token3,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_ISNOT] = anon_sym_ISNOT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_QMARK_TILDE] = anon_sym_QMARK_TILDE,
  [anon_sym_STAR_TILDE] = anon_sym_STAR_TILDE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_operator_token4] = aux_sym_operator_token4,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_u00f7] = anon_sym_u00f7,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [aux_sym_operator_token5] = aux_sym_operator_token5,
  [aux_sym_operator_token6] = aux_sym_operator_token6,
  [anon_sym_u220b] = anon_sym_u220b,
  [aux_sym_operator_token7] = aux_sym_operator_token7,
  [anon_sym_u220c] = anon_sym_u220c,
  [aux_sym_operator_token8] = aux_sym_operator_token8,
  [anon_sym_u2287] = anon_sym_u2287,
  [aux_sym_operator_token9] = aux_sym_operator_token9,
  [anon_sym_u2283] = anon_sym_u2283,
  [aux_sym_operator_token10] = aux_sym_operator_token10,
  [anon_sym_u2285] = anon_sym_u2285,
  [aux_sym_operator_token11] = aux_sym_operator_token11,
  [anon_sym_u2208] = anon_sym_u2208,
  [aux_sym_operator_token12] = aux_sym_operator_token12,
  [anon_sym_NOTIN] = anon_sym_NOTIN,
  [anon_sym_u2209] = anon_sym_u2209,
  [aux_sym_operator_token13] = aux_sym_operator_token13,
  [anon_sym_u2286] = anon_sym_u2286,
  [aux_sym_operator_token14] = aux_sym_operator_token14,
  [anon_sym_u2282] = anon_sym_u2282,
  [aux_sym_operator_token15] = aux_sym_operator_token15,
  [anon_sym_u2284] = anon_sym_u2284,
  [aux_sym_operator_token16] = aux_sym_operator_token16,
  [aux_sym_operator_token17] = aux_sym_operator_token17,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_geometry] = anon_sym_geometry,
  [anon_sym_EDDSA] = anon_sym_EDDSA,
  [anon_sym_ES256] = anon_sym_ES256,
  [anon_sym_ES384] = anon_sym_ES384,
  [anon_sym_ES512] = anon_sym_ES512,
  [anon_sym_HS256] = anon_sym_HS256,
  [anon_sym_HS384] = anon_sym_HS384,
  [anon_sym_HS512] = anon_sym_HS512,
  [anon_sym_PS256] = anon_sym_PS256,
  [anon_sym_PS384] = anon_sym_PS384,
  [anon_sym_PS512] = anon_sym_PS512,
  [anon_sym_RS256] = anon_sym_RS256,
  [anon_sym_RS384] = anon_sym_RS384,
  [anon_sym_RS512] = anon_sym_RS512,
  [aux_sym_function_token1] = aux_sym_function_token1,
  [aux_sym_function_token2] = aux_sym_function_token2,
  [anon_sym_count] = anon_sym_count,
  [aux_sym_function_token3] = aux_sym_function_token3,
  [aux_sym_function_token4] = aux_sym_function_token4,
  [aux_sym_function_token5] = aux_sym_function_token5,
  [aux_sym_function_token6] = aux_sym_function_token6,
  [aux_sym_function_token7] = aux_sym_function_token7,
  [aux_sym_function_token8] = aux_sym_function_token8,
  [aux_sym_function_token9] = aux_sym_function_token9,
  [aux_sym_function_token10] = aux_sym_function_token10,
  [aux_sym_function_token11] = aux_sym_function_token11,
  [aux_sym_function_token12] = aux_sym_function_token12,
  [aux_sym_function_token13] = aux_sym_function_token13,
  [aux_sym_function_token14] = aux_sym_function_token14,
  [aux_sym_function_token15] = aux_sym_function_token15,
  [aux_sym_function_token16] = aux_sym_function_token16,
  [aux_sym_bool_token1] = aux_sym_bool_token1,
  [aux_sym_bool_token2] = aux_sym_bool_token2,
  [aux_sym_nothing_token1] = aux_sym_nothing_token1,
  [aux_sym_nothing_token2] = aux_sym_nothing_token2,
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_new_line] = sym_new_line,
  [sym_source_file] = sym_source_file,
  [sym_tokens] = sym_tokens,
  [sym_scripting_function] = sym_scripting_function,
  [sym_scripting_content] = sym_scripting_content,
  [sym__scripting_statement] = sym__scripting_statement,
  [sym_future] = sym_future,
  [sym_casting] = sym_casting,
  [sym_property] = sym_property,
  [sym_duration] = sym_duration,
  [sym_constant] = sym_constant,
  [sym_number] = sym_number,
  [sym_record] = sym_record,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [sym_delimiter] = sym_delimiter,
  [sym_type] = sym_type,
  [sym_datatype] = sym_datatype,
  [sym_algotype] = sym_algotype,
  [sym_function] = sym_function,
  [sym_bool] = sym_bool,
  [sym_nothing] = sym_nothing,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_scripting_content_repeat1] = aux_sym_scripting_content_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_future_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_casting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_duration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ISNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u00f7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u220b] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u220c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2287] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2283] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2285] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2208] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NOTIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2209] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token13] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2286] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token14] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2282] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token15] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2284] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token17] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geometry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EDDSA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS512] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nothing_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nothing_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_new_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_tokens] = {
    .visible = true,
    .named = true,
  },
  [sym_scripting_function] = {
    .visible = true,
    .named = true,
  },
  [sym_scripting_content] = {
    .visible = true,
    .named = true,
  },
  [sym__scripting_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_future] = {
    .visible = true,
    .named = true,
  },
  [sym_casting] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_algotype] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_nothing] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scripting_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
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
  [5] = 4,
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 17,
  [28] = 28,
  [29] = 28,
  [30] = 26,
  [31] = 22,
  [32] = 21,
  [33] = 9,
  [34] = 8,
  [35] = 25,
  [36] = 20,
  [37] = 19,
  [38] = 18,
  [39] = 24,
  [40] = 23,
  [41] = 10,
  [42] = 11,
  [43] = 12,
  [44] = 13,
  [45] = 14,
  [46] = 15,
  [47] = 16,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 49,
  [56] = 53,
  [57] = 52,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(711);
      ADVANCE_MAP(
        '\n', 1500,
        '!', 635,
        '"', 1497,
        '#', 1490,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1356,
        '/', 1361,
        ':', 1403,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 840,
        'B', 812,
        'C', 765,
        'D', 771,
        'E', 802,
        'F', 772,
        'G', 935,
        'H', 960,
        'I', 841,
        'K', 813,
        'L', 823,
        'M', 780,
        'N', 774,
        'O', 897,
        'P', 766,
        'R', 814,
        'S', 792,
        'T', 767,
        'U', 900,
        'V', 777,
        'W', 852,
        '[', 1394,
        '\\', 1494,
        ']', 1395,
        'a', 1091,
        'b', 1052,
        'c', 987,
        'd', 997,
        'e', 1131,
        'f', 992,
        'g', 1066,
        'h', 1261,
        'i', 1089,
        'k', 1053,
        'l', 1069,
        'm', 1006,
        'n', 995,
        'o', 1020,
        'p', 989,
        'r', 999,
        's', 1307,
        't', 990,
        'u', 1162,
        'v', 998,
        'w', 1100,
        '{', 1396,
        '|', 684,
        '}', 1398,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1291,
        'x', 1291,
        'J', 1291,
        'Q', 1291,
        'Y', 1291,
        'Z', 1291,
        '_', 1291,
        'j', 1291,
        'q', 1291,
        'y', 1291,
        'z', 1291,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(1489);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(638);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '#', 1490,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1356,
        '/', 1361,
        ':', 1404,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 165,
        'C', 224,
        'E', 81,
        'F', 53,
        'H', 259,
        'I', 199,
        'M', 60,
        'N', 215,
        'O', 233,
        'P', 263,
        'R', 265,
        'T', 243,
        '[', 1394,
        ']', 1395,
        'a', 448,
        'b', 510,
        'c', 415,
        'd', 316,
        'e', 469,
        'f', 296,
        'g', 380,
        'h', 587,
        'i', 409,
        'l', 391,
        'm', 309,
        'n', 511,
        'o', 323,
        'p', 305,
        'r', 302,
        's', 5,
        't', 307,
        '{', 1396,
        '|', 684,
        '}', 1397,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '#', 1490,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1356,
        '/', 1361,
        ':', 1404,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 165,
        'C', 224,
        'E', 81,
        'F', 53,
        'H', 259,
        'I', 199,
        'M', 60,
        'N', 215,
        'O', 233,
        'P', 263,
        'R', 265,
        'T', 243,
        '[', 1394,
        ']', 1395,
        'a', 448,
        'b', 510,
        'c', 514,
        'd', 316,
        'e', 570,
        'f', 296,
        'g', 380,
        'h', 587,
        'i', 484,
        'l', 393,
        'm', 309,
        'n', 511,
        'o', 323,
        'p', 306,
        'r', 302,
        's', 5,
        't', 437,
        '{', 1396,
        '|', 684,
        '}', 1397,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1357,
        '/', 1360,
        ':', 1403,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 130,
        'B', 93,
        'C', 45,
        'D', 51,
        'E', 80,
        'F', 52,
        'G', 235,
        'H', 259,
        'I', 131,
        'K', 94,
        'L', 113,
        'M', 59,
        'N', 54,
        'O', 194,
        'P', 46,
        'R', 95,
        'S', 71,
        'T', 47,
        'U', 197,
        'V', 57,
        'W', 142,
        '[', 1394,
        ']', 1395,
        'a', 404,
        'b', 356,
        'c', 290,
        'd', 299,
        'e', 449,
        'f', 295,
        'g', 379,
        'h', 587,
        'i', 402,
        'k', 357,
        'l', 382,
        'm', 308,
        'n', 297,
        'o', 322,
        'p', 292,
        'r', 301,
        's', 8,
        't', 293,
        'u', 482,
        'v', 300,
        'w', 413,
        '{', 1396,
        '|', 684,
        '}', 1398,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
        'J', 616,
        'Q', 616,
        'Y', 616,
        'Z', 616,
        '_', 616,
        'j', 616,
        'q', 616,
        'y', 616,
        'z', 616,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1357,
        '/', 1360,
        ':', 1403,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 130,
        'B', 93,
        'C', 45,
        'D', 51,
        'E', 80,
        'F', 52,
        'G', 235,
        'H', 259,
        'I', 131,
        'K', 94,
        'L', 113,
        'M', 59,
        'N', 54,
        'O', 194,
        'P', 46,
        'R', 95,
        'S', 71,
        'T', 47,
        'U', 197,
        'V', 57,
        'W', 142,
        '[', 1394,
        ']', 1395,
        'a', 404,
        'b', 356,
        'c', 290,
        'd', 299,
        'e', 449,
        'f', 295,
        'g', 379,
        'h', 587,
        'i', 402,
        'k', 357,
        'l', 382,
        'm', 308,
        'n', 297,
        'o', 322,
        'p', 292,
        'r', 301,
        's', 9,
        't', 293,
        'u', 482,
        'v', 300,
        'w', 413,
        '{', 1396,
        '|', 684,
        '}', 1397,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
        'J', 616,
        'Q', 616,
        'Y', 616,
        'Z', 616,
        '_', 616,
        'j', 616,
        'q', 616,
        'y', 616,
        'z', 616,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1357,
        '/', 1360,
        ':', 1404,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 165,
        'C', 224,
        'E', 81,
        'F', 53,
        'H', 259,
        'I', 199,
        'M', 60,
        'N', 215,
        'O', 233,
        'P', 263,
        'R', 265,
        'T', 243,
        '[', 1394,
        ']', 1395,
        'a', 448,
        'b', 510,
        'c', 415,
        'd', 316,
        'e', 469,
        'f', 296,
        'g', 380,
        'h', 587,
        'i', 409,
        'l', 391,
        'm', 309,
        'n', 511,
        'o', 323,
        'p', 305,
        'r', 302,
        's', 10,
        't', 307,
        '{', 1396,
        '|', 684,
        '}', 1398,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1357,
        '/', 1360,
        ':', 1404,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 165,
        'C', 224,
        'E', 81,
        'F', 53,
        'H', 259,
        'I', 199,
        'M', 60,
        'N', 215,
        'O', 233,
        'P', 263,
        'R', 265,
        'T', 243,
        '[', 1394,
        ']', 1395,
        'a', 448,
        'b', 510,
        'c', 415,
        'd', 316,
        'e', 469,
        'f', 296,
        'g', 380,
        'h', 587,
        'i', 409,
        'l', 391,
        'm', 309,
        'n', 511,
        'o', 323,
        'p', 305,
        'r', 302,
        's', 11,
        't', 307,
        '{', 1396,
        '|', 684,
        '}', 1397,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1357,
        '/', 1360,
        ':', 1404,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 165,
        'C', 224,
        'E', 81,
        'F', 53,
        'H', 259,
        'I', 199,
        'M', 60,
        'N', 215,
        'O', 233,
        'P', 263,
        'R', 265,
        'T', 243,
        '[', 1394,
        ']', 1395,
        'a', 448,
        'b', 510,
        'c', 514,
        'd', 316,
        'e', 570,
        'f', 296,
        'g', 380,
        'h', 587,
        'i', 484,
        'l', 393,
        'm', 309,
        'n', 511,
        'o', 323,
        'p', 306,
        'r', 302,
        's', 10,
        't', 437,
        '{', 1396,
        '|', 684,
        '}', 1398,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1357,
        '/', 1360,
        ':', 1404,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 165,
        'C', 224,
        'E', 81,
        'F', 53,
        'H', 259,
        'I', 199,
        'M', 60,
        'N', 215,
        'O', 233,
        'P', 263,
        'R', 265,
        'T', 243,
        '[', 1394,
        ']', 1395,
        'a', 448,
        'b', 510,
        'c', 514,
        'd', 316,
        'e', 570,
        'f', 296,
        'g', 380,
        'h', 587,
        'i', 484,
        'l', 393,
        'm', 309,
        'n', 511,
        'o', 323,
        'p', 306,
        'r', 302,
        's', 11,
        't', 437,
        '{', 1396,
        '|', 684,
        '}', 1397,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1497);
      if (lookahead == '\\') ADVANCE(1494);
      if (lookahead == 's') ADVANCE(1499);
      if (lookahead != 0) ADVANCE(1498);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(1331);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(1491);
      if (lookahead == '\\') ADVANCE(1494);
      if (lookahead == 's') ADVANCE(1493);
      if (lookahead != 0) ADVANCE(1492);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(683);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == '5') ADVANCE(16);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(1440);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(1446);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(1452);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(1458);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '5') ADVANCE(17);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '5') ADVANCE(18);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '5') ADVANCE(19);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(1438);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(1444);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(1450);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(1456);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 32:
      if (lookahead == '5') ADVANCE(36);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 33:
      if (lookahead == '5') ADVANCE(37);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 34:
      if (lookahead == '5') ADVANCE(38);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 35:
      if (lookahead == '5') ADVANCE(39);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 36:
      if (lookahead == '6') ADVANCE(1436);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 37:
      if (lookahead == '6') ADVANCE(1442);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 38:
      if (lookahead == '6') ADVANCE(1448);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 39:
      if (lookahead == '6') ADVANCE(1454);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 40:
      if (lookahead == '8') ADVANCE(28);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 41:
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 42:
      if (lookahead == '8') ADVANCE(30);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 43:
      if (lookahead == '8') ADVANCE(31);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(1338);
      if (lookahead == '=') ADVANCE(1345);
      if (lookahead == '?') ADVANCE(1337);
      if (lookahead == '~') ADVANCE(1349);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'R') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(240);
      if (lookahead == 'E') ADVANCE(242);
      if (lookahead == 'S') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'O') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'Y') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(273);
      if (lookahead == 'B') ADVANCE(1326);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(219);
      if (lookahead == 'U') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'E') ADVANCE(271);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'R') ADVANCE(220);
      if (lookahead == 'U') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'O') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(1326);
      if (lookahead == 'U') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'E') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(209);
      if (lookahead == 'U') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'B') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'B') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == 'E') ADVANCE(184);
      if (lookahead == 'I') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(127);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(251);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'V') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(1332);
      if (lookahead == 'Y') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'Y') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(288);
      if (lookahead == 'V') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(188);
      if (lookahead == 'O') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(237);
      if (lookahead == 'I') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'O') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(275);
      if (lookahead == 'L') ADVANCE(170);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'S') ADVANCE(1318);
      if (lookahead == 'T') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(1326);
      if (lookahead == 'G') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(1364);
      if (lookahead == 'S') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(223);
      if (lookahead == 'G') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(283);
      if (lookahead == 'L') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(63);
      if (lookahead == 'W') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(196);
      if (lookahead == 'U') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'K') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(170);
      if (lookahead == 'N') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(174);
      if (lookahead == 'M') ADVANCE(188);
      if (lookahead == 'N') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(1486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'M') ADVANCE(217);
      if (lookahead == 'T') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(168);
      if (lookahead == 'M') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(186);
      if (lookahead == 'M') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(169);
      if (lookahead == 'N') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(254);
      if (lookahead == 'T') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(1326);
      if (lookahead == 'R') ADVANCE(1334);
      if (lookahead == 'U') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(1326);
      if (lookahead == 'R') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(145);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(1365);
      if (lookahead == 'S') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == 'T') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 214:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 215:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 216:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 217:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 225:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 226:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 227:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'P') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 228:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'P') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'P') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'P') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'Q') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(1336);
      if (lookahead == 'U') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'S') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 263:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 264:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'V') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'X') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'Y') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'Y') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == 'y') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 295:
      ADVANCE_MAP(
        ':', 732,
        'a', 467,
        'e', 585,
        'i', 376,
        'l', 530,
        'n', 617,
        'o', 541,
        'r', 516,
        'u', 461,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == 'n') ADVANCE(617);
      if (lookahead == 'u') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1326);
      if (lookahead == 'u') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'b') ADVANCE(1326);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == 'u') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == 'y') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(598);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'u') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(445);
      if (lookahead == 'n') ADVANCE(1326);
      if (lookahead == 'r') ADVANCE(1335);
      if (lookahead == 'u') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(445);
      if (lookahead == 'r') ADVANCE(1336);
      if (lookahead == 'u') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'f') ADVANCE(426);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(513);
      if (lookahead == 't') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1332);
      if (lookahead == 'y') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == 'y') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'v') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 362:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 363:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 364:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 365:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 366:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 367:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 368:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 369:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 370:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 371:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 372:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 373:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 374:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == 'y') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 375:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 376:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 377:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 378:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 379:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'r') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 380:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 381:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 382:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 383:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 384:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 385:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 386:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 387:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 388:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 389:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 390:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 391:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 392:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 393:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 394:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 395:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 396:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 397:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 398:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 399:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 400:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 401:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 402:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(1326);
      if (lookahead == 'g') ADVANCE(495);
      if (lookahead == 'n') ADVANCE(1366);
      if (lookahead == 's') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 403:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 404:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == 's') ADVANCE(1322);
      if (lookahead == 't') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 405:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 406:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(607);
      if (lookahead == 'l') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 407:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead == 'g') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 408:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'g') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 409:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'g') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(1367);
      if (lookahead == 's') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 410:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'g') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 411:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'g') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 412:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 413:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 414:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 415:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == 'r') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 416:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 417:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 418:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 419:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 420:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 421:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 422:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 423:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 424:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 425:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 426:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 427:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'u') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 428:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 429:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 430:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 431:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 432:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 433:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 434:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 435:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 436:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 437:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == 'y') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 438:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 439:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 440:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 441:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 442:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 443:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 444:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 445:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'j') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 446:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'k') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 447:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 448:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 449:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(562);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 'v') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 450:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == 'u') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 451:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 452:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 453:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 454:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 455:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 456:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 457:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 458:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 459:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 460:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 461:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 462:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 463:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == 'm') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 464:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == 'm') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 465:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == 'm') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 466:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 467:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 468:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 469:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 470:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 471:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 472:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 473:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 474:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 475:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 476:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 477:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 478:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 479:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 480:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1326);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 481:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 482:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == 'p') ADVANCE(348);
      if (lookahead == 's') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 483:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 484:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1367);
      if (lookahead == 's') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 485:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 486:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 487:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 488:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 489:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 490:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 491:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 492:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 493:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 494:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 495:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 496:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 497:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 498:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 499:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 500:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 501:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == 't') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 502:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 503:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 504:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 505:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 506:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 507:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 508:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 509:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 510:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 511:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 512:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 513:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 514:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == 'r') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 515:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 516:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 517:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 518:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 519:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 520:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 521:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 522:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 523:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 524:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 525:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 526:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 527:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 528:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 529:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 530:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 531:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 532:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 533:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 534:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 535:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 536:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 537:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 538:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 539:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 540:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'q') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 541:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 542:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 543:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 544:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 545:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 546:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 547:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 548:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 549:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 550:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 551:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 552:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 553:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 554:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 555:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 556:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 557:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 558:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 559:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 560:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 561:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 562:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 563:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 564:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 565:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 566:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 567:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 568:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 569:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 570:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 571:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 572:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 573:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 574:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 575:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 576:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 577:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 578:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 579:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 580:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 581:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 582:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 583:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 584:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 585:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 586:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 587:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 588:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 589:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 590:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 591:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 592:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 593:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 594:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 595:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 596:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 597:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 598:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 599:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 600:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 601:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 602:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 603:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 604:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 605:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 606:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 607:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 608:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 609:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'v') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 610:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'x') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 611:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 612:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 613:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 614:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 615:
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 616:
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 617:
      if (lookahead == ':') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 618:
      if (lookahead == ':') ADVANCE(702);
      END_STATE();
    case 619:
      if (lookahead == ':') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 620:
      if (lookahead == ':') ADVANCE(703);
      END_STATE();
    case 621:
      if (lookahead == ':') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 622:
      if (lookahead == ':') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 623:
      if (lookahead == ':') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 624:
      if (lookahead == ':') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 625:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == 'o') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 626:
      if (lookahead == ':') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 627:
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 628:
      if (lookahead == ':') ADVANCE(697);
      END_STATE();
    case 629:
      if (lookahead == ':') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 630:
      if (lookahead == ':') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 631:
      if (lookahead == ':') ADVANCE(699);
      END_STATE();
    case 632:
      if (lookahead == ':') ADVANCE(700);
      END_STATE();
    case 633:
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 634:
      if (lookahead == ':') ADVANCE(632);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 635:
      if (lookahead == '=') ADVANCE(1342);
      if (lookahead == '~') ADVANCE(1348);
      END_STATE();
    case 636:
      if (lookahead == '>') ADVANCE(716);
      END_STATE();
    case 637:
      if (lookahead == '>') ADVANCE(715);
      END_STATE();
    case 638:
      if (lookahead == 'I') ADVANCE(640);
      END_STATE();
    case 639:
      if (lookahead == 'N') ADVANCE(641);
      END_STATE();
    case 640:
      if (lookahead == 'N') ADVANCE(1382);
      END_STATE();
    case 641:
      if (lookahead == 'O') ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 'T') ADVANCE(1343);
      END_STATE();
    case 643:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 644:
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == 'u') ADVANCE(670);
      END_STATE();
    case 645:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 646:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 647:
      if (lookahead == 'b') ADVANCE(651);
      END_STATE();
    case 648:
      if (lookahead == 'c') ADVANCE(655);
      END_STATE();
    case 649:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 651:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 652:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 653:
      if (lookahead == 'g') ADVANCE(636);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(668);
      END_STATE();
    case 658:
      if (lookahead == 'l') ADVANCE(636);
      END_STATE();
    case 659:
      if (lookahead == 'l') ADVANCE(669);
      if (lookahead == 'u') ADVANCE(677);
      END_STATE();
    case 660:
      if (lookahead == 'm') ADVANCE(647);
      END_STATE();
    case 661:
      if (lookahead == 'm') ADVANCE(643);
      END_STATE();
    case 662:
      if (lookahead == 'm') ADVANCE(649);
      END_STATE();
    case 663:
      if (lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 664:
      if (lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 665:
      if (lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 674:
      if (lookahead == 's') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1495);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 681:
      if (lookahead == 'u') ADVANCE(660);
      END_STATE();
    case 682:
      if (lookahead == 'u') ADVANCE(673);
      END_STATE();
    case 683:
      if (lookahead == '{') ADVANCE(712);
      END_STATE();
    case 684:
      if (lookahead == '|') ADVANCE(1333);
      END_STATE();
    case 685:
      if (lookahead == '`' ||
          lookahead == 0x27e9) ADVANCE(1314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 686:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1312);
      END_STATE();
    case 687:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1469);
      END_STATE();
    case 688:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1466);
      END_STATE();
    case 689:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1468);
      END_STATE();
    case 690:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1470);
      END_STATE();
    case 691:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1471);
      END_STATE();
    case 692:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1473);
      END_STATE();
    case 693:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1479);
      END_STATE();
    case 694:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1480);
      END_STATE();
    case 695:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1460);
      END_STATE();
    case 696:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 697:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1467);
      END_STATE();
    case 698:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 699:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1461);
      END_STATE();
    case 700:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1472);
      END_STATE();
    case 701:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1464);
      END_STATE();
    case 702:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1475);
      END_STATE();
    case 703:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1465);
      END_STATE();
    case 704:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(1310);
      END_STATE();
    case 705:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1478);
      END_STATE();
    case 706:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 707:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1488);
      END_STATE();
    case 708:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1459);
      END_STATE();
    case 709:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 710:
      if (eof) ADVANCE(711);
      ADVANCE_MAP(
        '!', 635,
        '"', 1497,
        '#', 1490,
        '$', 706,
        '&', 13,
        '\'', 1491,
        '(', 1392,
        ')', 1393,
        '*', 1358,
        '+', 1355,
        ',', 1401,
        '-', 1356,
        '/', 1361,
        ':', 1403,
        ';', 1402,
        '<', 1351,
        '=', 1339,
        '>', 1353,
        '?', 44,
        'A', 130,
        'B', 93,
        'C', 45,
        'D', 51,
        'E', 80,
        'F', 52,
        'G', 235,
        'H', 259,
        'I', 131,
        'K', 94,
        'L', 113,
        'M', 59,
        'N', 54,
        'O', 194,
        'P', 46,
        'R', 95,
        'S', 71,
        'T', 47,
        'U', 197,
        'V', 57,
        'W', 142,
        '[', 1394,
        ']', 1395,
        'a', 404,
        'b', 356,
        'c', 290,
        'd', 299,
        'e', 449,
        'f', 295,
        'g', 379,
        'h', 587,
        'i', 402,
        'k', 357,
        'l', 382,
        'm', 308,
        'n', 297,
        'o', 322,
        'p', 292,
        'r', 301,
        's', 4,
        't', 293,
        'u', 482,
        'v', 300,
        'w', 413,
        '{', 1396,
        '|', 684,
        '}', 1397,
        '~', 1347,
        0xf7, 1362,
        0x2208, 1380,
        0x2209, 1383,
        0x220b, 1370,
        0x220c, 1372,
        0x2282, 1387,
        0x2283, 1376,
        0x2284, 1389,
        0x2285, 1378,
        0x2286, 1385,
        0x2287, 1374,
        'X', 1359,
        'x', 1359,
        'J', 616,
        'Q', 616,
        'Y', 616,
        'Z', 616,
        '_', 616,
        'j', 616,
        'q', 616,
        'y', 616,
        'z', 616,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_function_LPAREN_RPAREN_LBRACE);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_RBRACE_COMMA);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_future_token1);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_casting_token1);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(704);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(701);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(705);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(690);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(691);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(692);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(693);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(694);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(695);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(696);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(698);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(639);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(638);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '.', 686,
        ':', 732,
        'd', 1290,
        'h', 1290,
        'm', 1290,
        's', 1290,
        'w', 1290,
        'y', 1290,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(736);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(742);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(743);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(744);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(745);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(753);
      if (lookahead == '3') ADVANCE(761);
      if (lookahead == '5') ADVANCE(737);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1439);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1445);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1451);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1457);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(754);
      if (lookahead == '3') ADVANCE(762);
      if (lookahead == '5') ADVANCE(738);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(755);
      if (lookahead == '3') ADVANCE(763);
      if (lookahead == '5') ADVANCE(739);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(756);
      if (lookahead == '3') ADVANCE(764);
      if (lookahead == '5') ADVANCE(740);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(1437);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(1443);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(1449);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(1455);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(757);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(758);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(759);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(760);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1441);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1447);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1453);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(749);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(750);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(751);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(752);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(901);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'R') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(940);
      if (lookahead == 'E') ADVANCE(942);
      if (lookahead == 'S') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(789);
      if (lookahead == 'H') ADVANCE(826);
      if (lookahead == 'I') ADVANCE(896);
      if (lookahead == 'O') ADVANCE(868);
      if (lookahead == 'R') ADVANCE(783);
      if (lookahead == 'Y') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(1433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(970);
      if (lookahead == 'B') ADVANCE(1325);
      if (lookahead == 'E') ADVANCE(846);
      if (lookahead == 'I') ADVANCE(843);
      if (lookahead == 'R') ADVANCE(919);
      if (lookahead == 'U') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(888);
      if (lookahead == 'E') ADVANCE(968);
      if (lookahead == 'I') ADVANCE(824);
      if (lookahead == 'O') ADVANCE(933);
      if (lookahead == 'R') ADVANCE(920);
      if (lookahead == 'U') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(895);
      if (lookahead == 'O') ADVANCE(910);
      if (lookahead == 'S') ADVANCE(1325);
      if (lookahead == 'U') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(884);
      if (lookahead == 'N') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(913);
      if (lookahead == 'U') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(864);
      if (lookahead == 'E') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'B') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'B') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(854);
      if (lookahead == 'E') ADVANCE(887);
      if (lookahead == 'I') ADVANCE(847);
      if (lookahead == 'L') ADVANCE(837);
      if (lookahead == 'P') ADVANCE(874);
      if (lookahead == 'T') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(1291);
      if (lookahead == 'Y') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(805);
      if (lookahead == 'L') ADVANCE(951);
      if (lookahead == 'N') ADVANCE(801);
      if (lookahead == 'S') ADVANCE(741);
      if (lookahead == 'V') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(805);
      if (lookahead == 'S') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(816);
      if (lookahead == 'F') ADVANCE(914);
      if (lookahead == 'S') ADVANCE(829);
      if (lookahead == 'T') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(844);
      if (lookahead == 'Y') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(986);
      if (lookahead == 'V') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(876);
      if (lookahead == 'S') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(965);
      if (lookahead == 'I') ADVANCE(891);
      if (lookahead == 'O') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(937);
      if (lookahead == 'I') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(944);
      if (lookahead == 'O') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'E') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(972);
      if (lookahead == 'L') ADVANCE(873);
      if (lookahead == 'N') ADVANCE(800);
      if (lookahead == 'S') ADVANCE(1317);
      if (lookahead == 'T') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(1325);
      if (lookahead == 'G') ADVANCE(907);
      if (lookahead == 'N') ADVANCE(808);
      if (lookahead == 'S') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(923);
      if (lookahead == 'G') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(980);
      if (lookahead == 'L') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'F') ADVANCE(863);
      if (lookahead == 'L') ADVANCE(838);
      if (lookahead == 'S') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(784);
      if (lookahead == 'W') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'H') ADVANCE(827);
      if (lookahead == 'O') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(899);
      if (lookahead == 'U') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'K') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(873);
      if (lookahead == 'N') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(877);
      if (lookahead == 'M') ADVANCE(891);
      if (lookahead == 'N') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(785);
      if (lookahead == 'M') ADVANCE(917);
      if (lookahead == 'T') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(785);
      if (lookahead == 'U') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(871);
      if (lookahead == 'N') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(869);
      if (lookahead == 'M') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(869);
      if (lookahead == 'N') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(889);
      if (lookahead == 'M') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(828);
      if (lookahead == 'S') ADVANCE(955);
      if (lookahead == 'T') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'L') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'M') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(1325);
      if (lookahead == 'R') ADVANCE(807);
      if (lookahead == 'U') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(1325);
      if (lookahead == 'R') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(855);
      if (lookahead == 'P') ADVANCE(806);
      if (lookahead == 'S') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(952);
      if (lookahead == 'S') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(819);
      if (lookahead == 'T') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(810);
      if (lookahead == 'T') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'N') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(910);
      if (lookahead == 'U') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'O') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'P') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'P') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'P') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'P') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'Q') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(1291);
      if (lookahead == 'U') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(775);
      if (lookahead == 'S') ADVANCE(947);
      if (lookahead == 'T') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(865);
      if (lookahead == 'T') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'T') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'V') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'X') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'Y') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'Y') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == 'o') ADVANCE(1132);
      if (lookahead == 'r') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1220);
      if (lookahead == 'e') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1023);
      if (lookahead == 'h') ADVANCE(1071);
      if (lookahead == 'i') ADVANCE(1158);
      if (lookahead == 'o') ADVANCE(1127);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead == 'y') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        ':', 732,
        'a', 1147,
        'e', 1259,
        'i', 1063,
        'l', 1207,
        'n', 1293,
        'o', 1218,
        'r', 1193,
        'u', 1141,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1147);
      if (lookahead == 'l') ADVANCE(1207);
      if (lookahead == 'n') ADVANCE(1293);
      if (lookahead == 'u') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1155);
      if (lookahead == 'o') ADVANCE(1179);
      if (lookahead == 's') ADVANCE(1325);
      if (lookahead == 'u') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == 'e') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1325);
      if (lookahead == 'e') ADVANCE(1029);
      if (lookahead == 'i') ADVANCE(1092);
      if (lookahead == 'r') ADVANCE(1194);
      if (lookahead == 'u') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1171);
      if (lookahead == 'e') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1171);
      if (lookahead == 'e') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1146);
      if (lookahead == 's') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1232);
      if (lookahead == 'l') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1227);
      if (lookahead == 'i') ADVANCE(1159);
      if (lookahead == 'r') ADVANCE(1113);
      if (lookahead == 'y') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1257);
      if (lookahead == 'e') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1257);
      if (lookahead == 'e') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1174);
      if (lookahead == 'u') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1272);
      if (lookahead == 'e') ADVANCE(1030);
      if (lookahead == 'u') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1114);
      if (lookahead == 'e') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(1126);
      if (lookahead == 'n') ADVANCE(1325);
      if (lookahead == 'r') ADVANCE(1046);
      if (lookahead == 'u') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(1126);
      if (lookahead == 'r') ADVANCE(1291);
      if (lookahead == 'u') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(1074);
      if (lookahead == 'e') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'b') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1109);
      if (lookahead == 'f') ADVANCE(1112);
      if (lookahead == 'l') ADVANCE(1083);
      if (lookahead == 's') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1199);
      if (lookahead == 'l') ADVANCE(1015);
      if (lookahead == 'm') ADVANCE(1190);
      if (lookahead == 't') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1291);
      if (lookahead == 'y') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1055);
      if (lookahead == 'f') ADVANCE(1186);
      if (lookahead == 's') ADVANCE(1064);
      if (lookahead == 't') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1094);
      if (lookahead == 'o') ADVANCE(1195);
      if (lookahead == 'y') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1286);
      if (lookahead == 'v') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1015);
      if (lookahead == 'y') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1227);
      if (lookahead == 'i') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1196);
      if (lookahead == 'r') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1253);
      if (lookahead == 'i') ADVANCE(1151);
      if (lookahead == 'o') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(1325);
      if (lookahead == 'g') ADVANCE(1176);
      if (lookahead == 'n') ADVANCE(1047);
      if (lookahead == 's') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(1266);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'n') ADVANCE(1041);
      if (lookahead == 'r') ADVANCE(1222);
      if (lookahead == 's') ADVANCE(1321);
      if (lookahead == 't') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(1281);
      if (lookahead == 'l') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(1197);
      if (lookahead == 'g') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'g') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'g') ADVANCE(1169);
      if (lookahead == 'n') ADVANCE(1241);
      if (lookahead == 's') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'g') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'g') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(1009);
      if (lookahead == 'w') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(1073);
      if (lookahead == 'o') ADVANCE(1180);
      if (lookahead == 'r') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1161);
      if (lookahead == 'u') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1170);
      if (lookahead == 'u') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1159);
      if (lookahead == 'r') ADVANCE(1113);
      if (lookahead == 'y') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'j') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'k') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'n') ADVANCE(1041);
      if (lookahead == 'r') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'n') ADVANCE(1042);
      if (lookahead == 'v') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1136);
      if (lookahead == 'm') ADVANCE(1151);
      if (lookahead == 'n') ADVANCE(1265);
      if (lookahead == 'u') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1015);
      if (lookahead == 'u') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead == 'n') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1128);
      if (lookahead == 'm') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1128);
      if (lookahead == 'm') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1128);
      if (lookahead == 'n') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1148);
      if (lookahead == 'm') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(1084);
      if (lookahead == 's') ADVANCE(1244);
      if (lookahead == 't') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1325);
      if (lookahead == 'r') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1104);
      if (lookahead == 'p') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1241);
      if (lookahead == 's') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1060);
      if (lookahead == 't') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1268);
      if (lookahead == 'p') ADVANCE(1051);
      if (lookahead == 'u') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1268);
      if (lookahead == 'u') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1050);
      if (lookahead == 't') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1179);
      if (lookahead == 'u') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1181);
      if (lookahead == 'r') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1140);
      if (lookahead == 'r') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'q') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1002);
      if (lookahead == 's') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1097);
      if (lookahead == 't') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1122);
      if (lookahead == 't') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 't') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'v') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'x') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == 'o') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 870,
        'C', 924,
        'E', 803,
        'F', 773,
        'H', 960,
        'I', 902,
        'M', 781,
        'N', 915,
        'O', 932,
        'P', 963,
        'R', 964,
        'T', 943,
        'a', 1130,
        'b', 1187,
        'c', 1102,
        'd', 1014,
        'e', 1149,
        'f', 993,
        'g', 1067,
        'h', 1261,
        'i', 1096,
        'l', 1078,
        'm', 1007,
        'n', 1188,
        'o', 1021,
        'p', 1003,
        'r', 1000,
        's', 1308,
        't', 1005,
        'X', 1291,
        'x', 1291,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(736);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 870,
        'C', 924,
        'E', 803,
        'F', 773,
        'H', 960,
        'I', 902,
        'M', 781,
        'N', 915,
        'O', 932,
        'P', 963,
        'R', 964,
        'T', 943,
        'a', 1130,
        'b', 1187,
        'c', 1191,
        'd', 1014,
        'e', 1248,
        'f', 993,
        'g', 1067,
        'h', 1261,
        'i', 1164,
        'l', 1080,
        'm', 1007,
        'n', 1188,
        'o', 1021,
        'p', 1004,
        'r', 1000,
        's', 1308,
        't', 1123,
        'X', 1291,
        'x', 1291,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(736);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_duration_token1);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(1310);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_number_token1);
      ADVANCE_MAP(
        '.', 686,
        ':', 732,
        'd', 1309,
        'h', 1309,
        'm', 1309,
        's', 1309,
        'w', 1309,
        'y', 1309,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1312);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_record_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_record_token2);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(1325);
      if (lookahead == 'S') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'C') ADVANCE(1326);
      if (lookahead == 'S') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1325);
      if (lookahead == 's') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'c') ADVANCE(1326);
      if (lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(1344);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead == ' ') ADVANCE(639);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_ISNOT);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_QMARK_TILDE);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_STAR_TILDE);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_LT);
      ADVANCE_MAP(
        '-', 1400,
        '=', 1352,
        'b', 667,
        'd', 644,
        'f', 659,
        'i', 665,
        'n', 681,
        's', 678,
      );
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1354);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1490);
      if (lookahead == '>') ADVANCE(1399);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(1399);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(1363);
      if (lookahead == '=') ADVANCE(1346);
      if (lookahead == '~') ADVANCE(1350);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_operator_token4);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(1490);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_u00f7);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'D') ADVANCE(97);
      if (lookahead == 'F') ADVANCE(214);
      if (lookahead == 'S') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'S') ADVANCE(150);
      if (lookahead == 'T') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(509);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == 't') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == 't') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_operator_token6);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'N') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_operator_token6);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead == 'n') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_u220b);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_operator_token7);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_u220c);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_operator_token8);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_u2287);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_operator_token9);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_u2283);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_operator_token10);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_u2285);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_operator_token11);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_u2208);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_operator_token12);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_NOTIN);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_u2209);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_operator_token13);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_u2286);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_operator_token14);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_u2282);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_operator_token15);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_u2284);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_operator_token16);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_operator_token17);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ',') ADVANCE(714);
      if (lookahead == ';') ADVANCE(713);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '`' ||
          lookahead == 0x27e8) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == 'o') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1459);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == ':') ADVANCE(631);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1460);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1461);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == ':') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1464);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1465);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (lookahead == ':') ADVANCE(628);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1466);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1467);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_function_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1468);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_function_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1469);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_function_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1470);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_function_token8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1471);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_function_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1472);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (lookahead == ':') ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1473);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (lookahead == ':') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1475);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_function_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1476);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_function_token12);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_function_token13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1478);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_function_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1479);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_function_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1480);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_function_token16);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_bool_token1);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_bool_token2);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_nothing_token1);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_nothing_token1);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_nothing_token2);
      if (lookahead == ':') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1488);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1490);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(1493);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1492);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1495);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 's') ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1498);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_new_line);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 710},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 710},
  [7] = {.lex_state = 710},
  [8] = {.lex_state = 710},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 710},
  [11] = {.lex_state = 710},
  [12] = {.lex_state = 710},
  [13] = {.lex_state = 710},
  [14] = {.lex_state = 710},
  [15] = {.lex_state = 710},
  [16] = {.lex_state = 710},
  [17] = {.lex_state = 710},
  [18] = {.lex_state = 710},
  [19] = {.lex_state = 710},
  [20] = {.lex_state = 710},
  [21] = {.lex_state = 710},
  [22] = {.lex_state = 710},
  [23] = {.lex_state = 710},
  [24] = {.lex_state = 710},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 710},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 710},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 710},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 710},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 674},
  [63] = {.lex_state = 674},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE_COMMA] = ACTIONS(1),
    [aux_sym_future_token1] = ACTIONS(1),
    [aux_sym_casting_token1] = ACTIONS(1),
    [aux_sym_property_token1] = ACTIONS(1),
    [aux_sym_duration_token1] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_record_token1] = ACTIONS(1),
    [aux_sym_record_token2] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [aux_sym_operator_token1] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [aux_sym_operator_token2] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_operator_token3] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_ISNOT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_QMARK_TILDE] = ACTIONS(1),
    [anon_sym_STAR_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_operator_token4] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_u00f7] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [aux_sym_operator_token5] = ACTIONS(1),
    [aux_sym_operator_token6] = ACTIONS(1),
    [anon_sym_u220b] = ACTIONS(1),
    [aux_sym_operator_token7] = ACTIONS(1),
    [anon_sym_u220c] = ACTIONS(1),
    [aux_sym_operator_token8] = ACTIONS(1),
    [anon_sym_u2287] = ACTIONS(1),
    [aux_sym_operator_token9] = ACTIONS(1),
    [anon_sym_u2283] = ACTIONS(1),
    [aux_sym_operator_token10] = ACTIONS(1),
    [anon_sym_u2285] = ACTIONS(1),
    [aux_sym_operator_token11] = ACTIONS(1),
    [anon_sym_u2208] = ACTIONS(1),
    [aux_sym_operator_token12] = ACTIONS(1),
    [anon_sym_NOTIN] = ACTIONS(1),
    [anon_sym_u2209] = ACTIONS(1),
    [aux_sym_operator_token13] = ACTIONS(1),
    [anon_sym_u2286] = ACTIONS(1),
    [aux_sym_operator_token14] = ACTIONS(1),
    [anon_sym_u2282] = ACTIONS(1),
    [aux_sym_operator_token15] = ACTIONS(1),
    [anon_sym_u2284] = ACTIONS(1),
    [aux_sym_operator_token16] = ACTIONS(1),
    [aux_sym_operator_token17] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_geometry] = ACTIONS(1),
    [anon_sym_EDDSA] = ACTIONS(1),
    [anon_sym_ES256] = ACTIONS(1),
    [anon_sym_ES384] = ACTIONS(1),
    [anon_sym_ES512] = ACTIONS(1),
    [anon_sym_HS256] = ACTIONS(1),
    [anon_sym_HS384] = ACTIONS(1),
    [anon_sym_HS512] = ACTIONS(1),
    [anon_sym_PS256] = ACTIONS(1),
    [anon_sym_PS384] = ACTIONS(1),
    [anon_sym_PS512] = ACTIONS(1),
    [anon_sym_RS256] = ACTIONS(1),
    [anon_sym_RS384] = ACTIONS(1),
    [anon_sym_RS512] = ACTIONS(1),
    [aux_sym_function_token1] = ACTIONS(1),
    [aux_sym_function_token2] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [aux_sym_function_token3] = ACTIONS(1),
    [aux_sym_function_token4] = ACTIONS(1),
    [aux_sym_function_token5] = ACTIONS(1),
    [aux_sym_function_token6] = ACTIONS(1),
    [aux_sym_function_token7] = ACTIONS(1),
    [aux_sym_function_token8] = ACTIONS(1),
    [aux_sym_function_token9] = ACTIONS(1),
    [aux_sym_function_token10] = ACTIONS(1),
    [aux_sym_function_token11] = ACTIONS(1),
    [aux_sym_function_token12] = ACTIONS(1),
    [aux_sym_function_token13] = ACTIONS(1),
    [aux_sym_function_token14] = ACTIONS(1),
    [aux_sym_function_token15] = ACTIONS(1),
    [aux_sym_function_token16] = ACTIONS(1),
    [aux_sym_bool_token1] = ACTIONS(1),
    [aux_sym_bool_token2] = ACTIONS(1),
    [aux_sym_nothing_token1] = ACTIONS(1),
    [aux_sym_nothing_token2] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_new_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym_tokens] = STATE(6),
    [sym_scripting_function] = STATE(15),
    [sym_future] = STATE(15),
    [sym_casting] = STATE(15),
    [sym_property] = STATE(15),
    [sym_duration] = STATE(15),
    [sym_constant] = STATE(15),
    [sym_number] = STATE(15),
    [sym_record] = STATE(15),
    [sym_operator] = STATE(15),
    [sym_punctuation] = STATE(15),
    [sym_delimiter] = STATE(15),
    [sym_type] = STATE(15),
    [sym_datatype] = STATE(26),
    [sym_algotype] = STATE(26),
    [sym_function] = STATE(15),
    [sym_bool] = STATE(15),
    [sym_nothing] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(5),
    [aux_sym_future_token1] = ACTIONS(7),
    [aux_sym_casting_token1] = ACTIONS(9),
    [aux_sym_property_token1] = ACTIONS(11),
    [aux_sym_duration_token1] = ACTIONS(13),
    [aux_sym_constant_token1] = ACTIONS(15),
    [aux_sym_number_token1] = ACTIONS(17),
    [aux_sym_record_token1] = ACTIONS(19),
    [aux_sym_record_token2] = ACTIONS(19),
    [sym_keyword] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [aux_sym_operator_token1] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [aux_sym_operator_token2] = ACTIONS(25),
    [anon_sym_QMARK_QMARK] = ACTIONS(23),
    [anon_sym_QMARK_COLON] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [aux_sym_operator_token3] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_ISNOT] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_QMARK_EQ] = ACTIONS(23),
    [anon_sym_STAR_EQ] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_BANG_TILDE] = ACTIONS(23),
    [anon_sym_QMARK_TILDE] = ACTIONS(23),
    [anon_sym_STAR_TILDE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [aux_sym_operator_token4] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_u00f7] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(25),
    [aux_sym_operator_token6] = ACTIONS(25),
    [anon_sym_u220b] = ACTIONS(23),
    [aux_sym_operator_token7] = ACTIONS(25),
    [anon_sym_u220c] = ACTIONS(23),
    [aux_sym_operator_token8] = ACTIONS(25),
    [anon_sym_u2287] = ACTIONS(23),
    [aux_sym_operator_token9] = ACTIONS(25),
    [anon_sym_u2283] = ACTIONS(23),
    [aux_sym_operator_token10] = ACTIONS(25),
    [anon_sym_u2285] = ACTIONS(23),
    [aux_sym_operator_token11] = ACTIONS(25),
    [anon_sym_u2208] = ACTIONS(23),
    [aux_sym_operator_token12] = ACTIONS(25),
    [anon_sym_NOTIN] = ACTIONS(23),
    [anon_sym_u2209] = ACTIONS(23),
    [aux_sym_operator_token13] = ACTIONS(25),
    [anon_sym_u2286] = ACTIONS(23),
    [aux_sym_operator_token14] = ACTIONS(25),
    [anon_sym_u2282] = ACTIONS(23),
    [aux_sym_operator_token15] = ACTIONS(25),
    [anon_sym_u2284] = ACTIONS(23),
    [aux_sym_operator_token16] = ACTIONS(25),
    [aux_sym_operator_token17] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_any] = ACTIONS(33),
    [anon_sym_array] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(33),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_decimal] = ACTIONS(33),
    [anon_sym_duration] = ACTIONS(33),
    [anon_sym_float] = ACTIONS(33),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_number] = ACTIONS(33),
    [anon_sym_object] = ACTIONS(33),
    [anon_sym_string] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_geometry] = ACTIONS(33),
    [anon_sym_EDDSA] = ACTIONS(35),
    [anon_sym_ES256] = ACTIONS(35),
    [anon_sym_ES384] = ACTIONS(35),
    [anon_sym_ES512] = ACTIONS(35),
    [anon_sym_HS256] = ACTIONS(35),
    [anon_sym_HS384] = ACTIONS(35),
    [anon_sym_HS512] = ACTIONS(35),
    [anon_sym_PS256] = ACTIONS(35),
    [anon_sym_PS384] = ACTIONS(35),
    [anon_sym_PS512] = ACTIONS(35),
    [anon_sym_RS256] = ACTIONS(35),
    [anon_sym_RS384] = ACTIONS(35),
    [anon_sym_RS512] = ACTIONS(35),
    [aux_sym_function_token1] = ACTIONS(37),
    [aux_sym_function_token2] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [aux_sym_function_token3] = ACTIONS(37),
    [aux_sym_function_token4] = ACTIONS(37),
    [aux_sym_function_token5] = ACTIONS(37),
    [aux_sym_function_token6] = ACTIONS(37),
    [aux_sym_function_token7] = ACTIONS(37),
    [aux_sym_function_token8] = ACTIONS(37),
    [aux_sym_function_token9] = ACTIONS(37),
    [aux_sym_function_token10] = ACTIONS(39),
    [aux_sym_function_token11] = ACTIONS(37),
    [aux_sym_function_token12] = ACTIONS(39),
    [aux_sym_function_token13] = ACTIONS(37),
    [aux_sym_function_token14] = ACTIONS(37),
    [aux_sym_function_token15] = ACTIONS(37),
    [aux_sym_function_token16] = ACTIONS(39),
    [aux_sym_bool_token1] = ACTIONS(41),
    [aux_sym_bool_token2] = ACTIONS(41),
    [aux_sym_nothing_token1] = ACTIONS(43),
    [aux_sym_nothing_token2] = ACTIONS(43),
    [sym_variable] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
  },
  [2] = {
    [sym_tokens] = STATE(2),
    [sym_scripting_function] = STATE(46),
    [sym__scripting_statement] = STATE(2),
    [sym_future] = STATE(46),
    [sym_casting] = STATE(46),
    [sym_property] = STATE(46),
    [sym_duration] = STATE(46),
    [sym_constant] = STATE(46),
    [sym_number] = STATE(46),
    [sym_record] = STATE(46),
    [sym_operator] = STATE(46),
    [sym_punctuation] = STATE(46),
    [sym_delimiter] = STATE(46),
    [sym_type] = STATE(46),
    [sym_datatype] = STATE(30),
    [sym_algotype] = STATE(30),
    [sym_function] = STATE(46),
    [sym_bool] = STATE(46),
    [sym_nothing] = STATE(46),
    [sym_string] = STATE(46),
    [aux_sym_scripting_content_repeat1] = STATE(2),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE_SEMI] = ACTIONS(56),
    [anon_sym_RBRACE_COMMA] = ACTIONS(56),
    [aux_sym_future_token1] = ACTIONS(58),
    [aux_sym_casting_token1] = ACTIONS(61),
    [aux_sym_property_token1] = ACTIONS(64),
    [aux_sym_duration_token1] = ACTIONS(67),
    [aux_sym_constant_token1] = ACTIONS(70),
    [aux_sym_number_token1] = ACTIONS(73),
    [aux_sym_record_token1] = ACTIONS(76),
    [aux_sym_record_token2] = ACTIONS(76),
    [sym_keyword] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [aux_sym_operator_token1] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [aux_sym_operator_token2] = ACTIONS(85),
    [anon_sym_QMARK_QMARK] = ACTIONS(82),
    [anon_sym_QMARK_COLON] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(85),
    [aux_sym_operator_token3] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(82),
    [anon_sym_ISNOT] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [anon_sym_QMARK_EQ] = ACTIONS(82),
    [anon_sym_STAR_EQ] = ACTIONS(82),
    [anon_sym_TILDE] = ACTIONS(82),
    [anon_sym_BANG_TILDE] = ACTIONS(82),
    [anon_sym_QMARK_TILDE] = ACTIONS(82),
    [anon_sym_STAR_TILDE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [aux_sym_operator_token4] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_u00f7] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [aux_sym_operator_token5] = ACTIONS(85),
    [aux_sym_operator_token6] = ACTIONS(85),
    [anon_sym_u220b] = ACTIONS(82),
    [aux_sym_operator_token7] = ACTIONS(85),
    [anon_sym_u220c] = ACTIONS(82),
    [aux_sym_operator_token8] = ACTIONS(85),
    [anon_sym_u2287] = ACTIONS(82),
    [aux_sym_operator_token9] = ACTIONS(85),
    [anon_sym_u2283] = ACTIONS(82),
    [aux_sym_operator_token10] = ACTIONS(85),
    [anon_sym_u2285] = ACTIONS(82),
    [aux_sym_operator_token11] = ACTIONS(85),
    [anon_sym_u2208] = ACTIONS(82),
    [aux_sym_operator_token12] = ACTIONS(85),
    [anon_sym_NOTIN] = ACTIONS(82),
    [anon_sym_u2209] = ACTIONS(82),
    [aux_sym_operator_token13] = ACTIONS(85),
    [anon_sym_u2286] = ACTIONS(82),
    [aux_sym_operator_token14] = ACTIONS(85),
    [anon_sym_u2282] = ACTIONS(82),
    [aux_sym_operator_token15] = ACTIONS(85),
    [anon_sym_u2284] = ACTIONS(82),
    [aux_sym_operator_token16] = ACTIONS(85),
    [aux_sym_operator_token17] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_DASH_GT] = ACTIONS(88),
    [anon_sym_LT_DASH] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_any] = ACTIONS(100),
    [anon_sym_array] = ACTIONS(100),
    [anon_sym_bool] = ACTIONS(100),
    [anon_sym_datetime] = ACTIONS(100),
    [anon_sym_decimal] = ACTIONS(100),
    [anon_sym_duration] = ACTIONS(100),
    [anon_sym_float] = ACTIONS(100),
    [anon_sym_int] = ACTIONS(100),
    [anon_sym_number] = ACTIONS(100),
    [anon_sym_object] = ACTIONS(100),
    [anon_sym_string] = ACTIONS(100),
    [anon_sym_record] = ACTIONS(100),
    [anon_sym_geometry] = ACTIONS(100),
    [anon_sym_EDDSA] = ACTIONS(103),
    [anon_sym_ES256] = ACTIONS(103),
    [anon_sym_ES384] = ACTIONS(103),
    [anon_sym_ES512] = ACTIONS(103),
    [anon_sym_HS256] = ACTIONS(103),
    [anon_sym_HS384] = ACTIONS(103),
    [anon_sym_HS512] = ACTIONS(103),
    [anon_sym_PS256] = ACTIONS(103),
    [anon_sym_PS384] = ACTIONS(103),
    [anon_sym_PS512] = ACTIONS(103),
    [anon_sym_RS256] = ACTIONS(103),
    [anon_sym_RS384] = ACTIONS(103),
    [anon_sym_RS512] = ACTIONS(103),
    [aux_sym_function_token1] = ACTIONS(106),
    [aux_sym_function_token2] = ACTIONS(106),
    [anon_sym_count] = ACTIONS(109),
    [aux_sym_function_token3] = ACTIONS(106),
    [aux_sym_function_token4] = ACTIONS(106),
    [aux_sym_function_token5] = ACTIONS(106),
    [aux_sym_function_token6] = ACTIONS(106),
    [aux_sym_function_token7] = ACTIONS(106),
    [aux_sym_function_token8] = ACTIONS(106),
    [aux_sym_function_token9] = ACTIONS(106),
    [aux_sym_function_token10] = ACTIONS(109),
    [aux_sym_function_token11] = ACTIONS(106),
    [aux_sym_function_token12] = ACTIONS(109),
    [aux_sym_function_token13] = ACTIONS(106),
    [aux_sym_function_token14] = ACTIONS(106),
    [aux_sym_function_token15] = ACTIONS(106),
    [aux_sym_function_token16] = ACTIONS(109),
    [aux_sym_bool_token1] = ACTIONS(112),
    [aux_sym_bool_token2] = ACTIONS(112),
    [aux_sym_nothing_token1] = ACTIONS(115),
    [aux_sym_nothing_token2] = ACTIONS(115),
    [sym_variable] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(124),
  },
  [3] = {
    [sym_tokens] = STATE(2),
    [sym_scripting_function] = STATE(46),
    [sym__scripting_statement] = STATE(2),
    [sym_future] = STATE(46),
    [sym_casting] = STATE(46),
    [sym_property] = STATE(46),
    [sym_duration] = STATE(46),
    [sym_constant] = STATE(46),
    [sym_number] = STATE(46),
    [sym_record] = STATE(46),
    [sym_operator] = STATE(46),
    [sym_punctuation] = STATE(46),
    [sym_delimiter] = STATE(46),
    [sym_type] = STATE(46),
    [sym_datatype] = STATE(30),
    [sym_algotype] = STATE(30),
    [sym_function] = STATE(46),
    [sym_bool] = STATE(46),
    [sym_nothing] = STATE(46),
    [sym_string] = STATE(46),
    [aux_sym_scripting_content_repeat1] = STATE(2),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE_SEMI] = ACTIONS(129),
    [anon_sym_RBRACE_COMMA] = ACTIONS(129),
    [aux_sym_future_token1] = ACTIONS(131),
    [aux_sym_casting_token1] = ACTIONS(133),
    [aux_sym_property_token1] = ACTIONS(135),
    [aux_sym_duration_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(141),
    [aux_sym_record_token1] = ACTIONS(143),
    [aux_sym_record_token2] = ACTIONS(143),
    [sym_keyword] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [aux_sym_operator_token1] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [aux_sym_operator_token2] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_QMARK_COLON] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(149),
    [aux_sym_operator_token3] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_ISNOT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_QMARK_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_BANG_TILDE] = ACTIONS(147),
    [anon_sym_QMARK_TILDE] = ACTIONS(147),
    [anon_sym_STAR_TILDE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [aux_sym_operator_token4] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_u00f7] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(147),
    [aux_sym_operator_token5] = ACTIONS(149),
    [aux_sym_operator_token6] = ACTIONS(149),
    [anon_sym_u220b] = ACTIONS(147),
    [aux_sym_operator_token7] = ACTIONS(149),
    [anon_sym_u220c] = ACTIONS(147),
    [aux_sym_operator_token8] = ACTIONS(149),
    [anon_sym_u2287] = ACTIONS(147),
    [aux_sym_operator_token9] = ACTIONS(149),
    [anon_sym_u2283] = ACTIONS(147),
    [aux_sym_operator_token10] = ACTIONS(149),
    [anon_sym_u2285] = ACTIONS(147),
    [aux_sym_operator_token11] = ACTIONS(149),
    [anon_sym_u2208] = ACTIONS(147),
    [aux_sym_operator_token12] = ACTIONS(149),
    [anon_sym_NOTIN] = ACTIONS(147),
    [anon_sym_u2209] = ACTIONS(147),
    [aux_sym_operator_token13] = ACTIONS(149),
    [anon_sym_u2286] = ACTIONS(147),
    [aux_sym_operator_token14] = ACTIONS(149),
    [anon_sym_u2282] = ACTIONS(147),
    [aux_sym_operator_token15] = ACTIONS(149),
    [anon_sym_u2284] = ACTIONS(147),
    [aux_sym_operator_token16] = ACTIONS(149),
    [aux_sym_operator_token17] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LT_DASH] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_any] = ACTIONS(159),
    [anon_sym_array] = ACTIONS(159),
    [anon_sym_bool] = ACTIONS(159),
    [anon_sym_datetime] = ACTIONS(159),
    [anon_sym_decimal] = ACTIONS(159),
    [anon_sym_duration] = ACTIONS(159),
    [anon_sym_float] = ACTIONS(159),
    [anon_sym_int] = ACTIONS(159),
    [anon_sym_number] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(159),
    [anon_sym_string] = ACTIONS(159),
    [anon_sym_record] = ACTIONS(159),
    [anon_sym_geometry] = ACTIONS(159),
    [anon_sym_EDDSA] = ACTIONS(161),
    [anon_sym_ES256] = ACTIONS(161),
    [anon_sym_ES384] = ACTIONS(161),
    [anon_sym_ES512] = ACTIONS(161),
    [anon_sym_HS256] = ACTIONS(161),
    [anon_sym_HS384] = ACTIONS(161),
    [anon_sym_HS512] = ACTIONS(161),
    [anon_sym_PS256] = ACTIONS(161),
    [anon_sym_PS384] = ACTIONS(161),
    [anon_sym_PS512] = ACTIONS(161),
    [anon_sym_RS256] = ACTIONS(161),
    [anon_sym_RS384] = ACTIONS(161),
    [anon_sym_RS512] = ACTIONS(161),
    [aux_sym_function_token1] = ACTIONS(163),
    [aux_sym_function_token2] = ACTIONS(163),
    [anon_sym_count] = ACTIONS(165),
    [aux_sym_function_token3] = ACTIONS(163),
    [aux_sym_function_token4] = ACTIONS(163),
    [aux_sym_function_token5] = ACTIONS(163),
    [aux_sym_function_token6] = ACTIONS(163),
    [aux_sym_function_token7] = ACTIONS(163),
    [aux_sym_function_token8] = ACTIONS(163),
    [aux_sym_function_token9] = ACTIONS(163),
    [aux_sym_function_token10] = ACTIONS(165),
    [aux_sym_function_token11] = ACTIONS(163),
    [aux_sym_function_token12] = ACTIONS(165),
    [aux_sym_function_token13] = ACTIONS(163),
    [aux_sym_function_token14] = ACTIONS(163),
    [aux_sym_function_token15] = ACTIONS(163),
    [aux_sym_function_token16] = ACTIONS(165),
    [aux_sym_bool_token1] = ACTIONS(167),
    [aux_sym_bool_token2] = ACTIONS(167),
    [aux_sym_nothing_token1] = ACTIONS(169),
    [aux_sym_nothing_token2] = ACTIONS(169),
    [sym_variable] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
  },
  [4] = {
    [sym_tokens] = STATE(3),
    [sym_scripting_function] = STATE(46),
    [sym_scripting_content] = STATE(60),
    [sym__scripting_statement] = STATE(3),
    [sym_future] = STATE(46),
    [sym_casting] = STATE(46),
    [sym_property] = STATE(46),
    [sym_duration] = STATE(46),
    [sym_constant] = STATE(46),
    [sym_number] = STATE(46),
    [sym_record] = STATE(46),
    [sym_operator] = STATE(46),
    [sym_punctuation] = STATE(46),
    [sym_delimiter] = STATE(46),
    [sym_type] = STATE(46),
    [sym_datatype] = STATE(30),
    [sym_algotype] = STATE(30),
    [sym_function] = STATE(46),
    [sym_bool] = STATE(46),
    [sym_nothing] = STATE(46),
    [sym_string] = STATE(46),
    [aux_sym_scripting_content_repeat1] = STATE(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(127),
    [aux_sym_future_token1] = ACTIONS(131),
    [aux_sym_casting_token1] = ACTIONS(133),
    [aux_sym_property_token1] = ACTIONS(135),
    [aux_sym_duration_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(141),
    [aux_sym_record_token1] = ACTIONS(143),
    [aux_sym_record_token2] = ACTIONS(143),
    [sym_keyword] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [aux_sym_operator_token1] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [aux_sym_operator_token2] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_QMARK_COLON] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(149),
    [aux_sym_operator_token3] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_ISNOT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_QMARK_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_BANG_TILDE] = ACTIONS(147),
    [anon_sym_QMARK_TILDE] = ACTIONS(147),
    [anon_sym_STAR_TILDE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [aux_sym_operator_token4] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_u00f7] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(147),
    [aux_sym_operator_token5] = ACTIONS(149),
    [aux_sym_operator_token6] = ACTIONS(149),
    [anon_sym_u220b] = ACTIONS(147),
    [aux_sym_operator_token7] = ACTIONS(149),
    [anon_sym_u220c] = ACTIONS(147),
    [aux_sym_operator_token8] = ACTIONS(149),
    [anon_sym_u2287] = ACTIONS(147),
    [aux_sym_operator_token9] = ACTIONS(149),
    [anon_sym_u2283] = ACTIONS(147),
    [aux_sym_operator_token10] = ACTIONS(149),
    [anon_sym_u2285] = ACTIONS(147),
    [aux_sym_operator_token11] = ACTIONS(149),
    [anon_sym_u2208] = ACTIONS(147),
    [aux_sym_operator_token12] = ACTIONS(149),
    [anon_sym_NOTIN] = ACTIONS(147),
    [anon_sym_u2209] = ACTIONS(147),
    [aux_sym_operator_token13] = ACTIONS(149),
    [anon_sym_u2286] = ACTIONS(147),
    [aux_sym_operator_token14] = ACTIONS(149),
    [anon_sym_u2282] = ACTIONS(147),
    [aux_sym_operator_token15] = ACTIONS(149),
    [anon_sym_u2284] = ACTIONS(147),
    [aux_sym_operator_token16] = ACTIONS(149),
    [aux_sym_operator_token17] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LT_DASH] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_any] = ACTIONS(159),
    [anon_sym_array] = ACTIONS(159),
    [anon_sym_bool] = ACTIONS(159),
    [anon_sym_datetime] = ACTIONS(159),
    [anon_sym_decimal] = ACTIONS(159),
    [anon_sym_duration] = ACTIONS(159),
    [anon_sym_float] = ACTIONS(159),
    [anon_sym_int] = ACTIONS(159),
    [anon_sym_number] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(159),
    [anon_sym_string] = ACTIONS(159),
    [anon_sym_record] = ACTIONS(159),
    [anon_sym_geometry] = ACTIONS(159),
    [anon_sym_EDDSA] = ACTIONS(161),
    [anon_sym_ES256] = ACTIONS(161),
    [anon_sym_ES384] = ACTIONS(161),
    [anon_sym_ES512] = ACTIONS(161),
    [anon_sym_HS256] = ACTIONS(161),
    [anon_sym_HS384] = ACTIONS(161),
    [anon_sym_HS512] = ACTIONS(161),
    [anon_sym_PS256] = ACTIONS(161),
    [anon_sym_PS384] = ACTIONS(161),
    [anon_sym_PS512] = ACTIONS(161),
    [anon_sym_RS256] = ACTIONS(161),
    [anon_sym_RS384] = ACTIONS(161),
    [anon_sym_RS512] = ACTIONS(161),
    [aux_sym_function_token1] = ACTIONS(163),
    [aux_sym_function_token2] = ACTIONS(163),
    [anon_sym_count] = ACTIONS(165),
    [aux_sym_function_token3] = ACTIONS(163),
    [aux_sym_function_token4] = ACTIONS(163),
    [aux_sym_function_token5] = ACTIONS(163),
    [aux_sym_function_token6] = ACTIONS(163),
    [aux_sym_function_token7] = ACTIONS(163),
    [aux_sym_function_token8] = ACTIONS(163),
    [aux_sym_function_token9] = ACTIONS(163),
    [aux_sym_function_token10] = ACTIONS(165),
    [aux_sym_function_token11] = ACTIONS(163),
    [aux_sym_function_token12] = ACTIONS(165),
    [aux_sym_function_token13] = ACTIONS(163),
    [aux_sym_function_token14] = ACTIONS(163),
    [aux_sym_function_token15] = ACTIONS(163),
    [aux_sym_function_token16] = ACTIONS(165),
    [aux_sym_bool_token1] = ACTIONS(167),
    [aux_sym_bool_token2] = ACTIONS(167),
    [aux_sym_nothing_token1] = ACTIONS(169),
    [aux_sym_nothing_token2] = ACTIONS(169),
    [sym_variable] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
  },
  [5] = {
    [sym_tokens] = STATE(3),
    [sym_scripting_function] = STATE(46),
    [sym_scripting_content] = STATE(61),
    [sym__scripting_statement] = STATE(3),
    [sym_future] = STATE(46),
    [sym_casting] = STATE(46),
    [sym_property] = STATE(46),
    [sym_duration] = STATE(46),
    [sym_constant] = STATE(46),
    [sym_number] = STATE(46),
    [sym_record] = STATE(46),
    [sym_operator] = STATE(46),
    [sym_punctuation] = STATE(46),
    [sym_delimiter] = STATE(46),
    [sym_type] = STATE(46),
    [sym_datatype] = STATE(30),
    [sym_algotype] = STATE(30),
    [sym_function] = STATE(46),
    [sym_bool] = STATE(46),
    [sym_nothing] = STATE(46),
    [sym_string] = STATE(46),
    [aux_sym_scripting_content_repeat1] = STATE(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(127),
    [aux_sym_future_token1] = ACTIONS(131),
    [aux_sym_casting_token1] = ACTIONS(133),
    [aux_sym_property_token1] = ACTIONS(135),
    [aux_sym_duration_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(141),
    [aux_sym_record_token1] = ACTIONS(143),
    [aux_sym_record_token2] = ACTIONS(143),
    [sym_keyword] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [aux_sym_operator_token1] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [aux_sym_operator_token2] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_QMARK_COLON] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(149),
    [aux_sym_operator_token3] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_ISNOT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_QMARK_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_BANG_TILDE] = ACTIONS(147),
    [anon_sym_QMARK_TILDE] = ACTIONS(147),
    [anon_sym_STAR_TILDE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [aux_sym_operator_token4] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_u00f7] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(147),
    [aux_sym_operator_token5] = ACTIONS(149),
    [aux_sym_operator_token6] = ACTIONS(149),
    [anon_sym_u220b] = ACTIONS(147),
    [aux_sym_operator_token7] = ACTIONS(149),
    [anon_sym_u220c] = ACTIONS(147),
    [aux_sym_operator_token8] = ACTIONS(149),
    [anon_sym_u2287] = ACTIONS(147),
    [aux_sym_operator_token9] = ACTIONS(149),
    [anon_sym_u2283] = ACTIONS(147),
    [aux_sym_operator_token10] = ACTIONS(149),
    [anon_sym_u2285] = ACTIONS(147),
    [aux_sym_operator_token11] = ACTIONS(149),
    [anon_sym_u2208] = ACTIONS(147),
    [aux_sym_operator_token12] = ACTIONS(149),
    [anon_sym_NOTIN] = ACTIONS(147),
    [anon_sym_u2209] = ACTIONS(147),
    [aux_sym_operator_token13] = ACTIONS(149),
    [anon_sym_u2286] = ACTIONS(147),
    [aux_sym_operator_token14] = ACTIONS(149),
    [anon_sym_u2282] = ACTIONS(147),
    [aux_sym_operator_token15] = ACTIONS(149),
    [anon_sym_u2284] = ACTIONS(147),
    [aux_sym_operator_token16] = ACTIONS(149),
    [aux_sym_operator_token17] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LT_DASH] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_any] = ACTIONS(159),
    [anon_sym_array] = ACTIONS(159),
    [anon_sym_bool] = ACTIONS(159),
    [anon_sym_datetime] = ACTIONS(159),
    [anon_sym_decimal] = ACTIONS(159),
    [anon_sym_duration] = ACTIONS(159),
    [anon_sym_float] = ACTIONS(159),
    [anon_sym_int] = ACTIONS(159),
    [anon_sym_number] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(159),
    [anon_sym_string] = ACTIONS(159),
    [anon_sym_record] = ACTIONS(159),
    [anon_sym_geometry] = ACTIONS(159),
    [anon_sym_EDDSA] = ACTIONS(161),
    [anon_sym_ES256] = ACTIONS(161),
    [anon_sym_ES384] = ACTIONS(161),
    [anon_sym_ES512] = ACTIONS(161),
    [anon_sym_HS256] = ACTIONS(161),
    [anon_sym_HS384] = ACTIONS(161),
    [anon_sym_HS512] = ACTIONS(161),
    [anon_sym_PS256] = ACTIONS(161),
    [anon_sym_PS384] = ACTIONS(161),
    [anon_sym_PS512] = ACTIONS(161),
    [anon_sym_RS256] = ACTIONS(161),
    [anon_sym_RS384] = ACTIONS(161),
    [anon_sym_RS512] = ACTIONS(161),
    [aux_sym_function_token1] = ACTIONS(163),
    [aux_sym_function_token2] = ACTIONS(163),
    [anon_sym_count] = ACTIONS(165),
    [aux_sym_function_token3] = ACTIONS(163),
    [aux_sym_function_token4] = ACTIONS(163),
    [aux_sym_function_token5] = ACTIONS(163),
    [aux_sym_function_token6] = ACTIONS(163),
    [aux_sym_function_token7] = ACTIONS(163),
    [aux_sym_function_token8] = ACTIONS(163),
    [aux_sym_function_token9] = ACTIONS(163),
    [aux_sym_function_token10] = ACTIONS(165),
    [aux_sym_function_token11] = ACTIONS(163),
    [aux_sym_function_token12] = ACTIONS(165),
    [aux_sym_function_token13] = ACTIONS(163),
    [aux_sym_function_token14] = ACTIONS(163),
    [aux_sym_function_token15] = ACTIONS(163),
    [aux_sym_function_token16] = ACTIONS(165),
    [aux_sym_bool_token1] = ACTIONS(167),
    [aux_sym_bool_token2] = ACTIONS(167),
    [aux_sym_nothing_token1] = ACTIONS(169),
    [aux_sym_nothing_token2] = ACTIONS(169),
    [sym_variable] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
  },
  [6] = {
    [sym_tokens] = STATE(7),
    [sym_scripting_function] = STATE(15),
    [sym_future] = STATE(15),
    [sym_casting] = STATE(15),
    [sym_property] = STATE(15),
    [sym_duration] = STATE(15),
    [sym_constant] = STATE(15),
    [sym_number] = STATE(15),
    [sym_record] = STATE(15),
    [sym_operator] = STATE(15),
    [sym_punctuation] = STATE(15),
    [sym_delimiter] = STATE(15),
    [sym_type] = STATE(15),
    [sym_datatype] = STATE(26),
    [sym_algotype] = STATE(26),
    [sym_function] = STATE(15),
    [sym_bool] = STATE(15),
    [sym_nothing] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(5),
    [aux_sym_future_token1] = ACTIONS(7),
    [aux_sym_casting_token1] = ACTIONS(9),
    [aux_sym_property_token1] = ACTIONS(11),
    [aux_sym_duration_token1] = ACTIONS(13),
    [aux_sym_constant_token1] = ACTIONS(15),
    [aux_sym_number_token1] = ACTIONS(17),
    [aux_sym_record_token1] = ACTIONS(19),
    [aux_sym_record_token2] = ACTIONS(19),
    [sym_keyword] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [aux_sym_operator_token1] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [aux_sym_operator_token2] = ACTIONS(25),
    [anon_sym_QMARK_QMARK] = ACTIONS(23),
    [anon_sym_QMARK_COLON] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [aux_sym_operator_token3] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_ISNOT] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_QMARK_EQ] = ACTIONS(23),
    [anon_sym_STAR_EQ] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_BANG_TILDE] = ACTIONS(23),
    [anon_sym_QMARK_TILDE] = ACTIONS(23),
    [anon_sym_STAR_TILDE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [aux_sym_operator_token4] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_u00f7] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(25),
    [aux_sym_operator_token6] = ACTIONS(25),
    [anon_sym_u220b] = ACTIONS(23),
    [aux_sym_operator_token7] = ACTIONS(25),
    [anon_sym_u220c] = ACTIONS(23),
    [aux_sym_operator_token8] = ACTIONS(25),
    [anon_sym_u2287] = ACTIONS(23),
    [aux_sym_operator_token9] = ACTIONS(25),
    [anon_sym_u2283] = ACTIONS(23),
    [aux_sym_operator_token10] = ACTIONS(25),
    [anon_sym_u2285] = ACTIONS(23),
    [aux_sym_operator_token11] = ACTIONS(25),
    [anon_sym_u2208] = ACTIONS(23),
    [aux_sym_operator_token12] = ACTIONS(25),
    [anon_sym_NOTIN] = ACTIONS(23),
    [anon_sym_u2209] = ACTIONS(23),
    [aux_sym_operator_token13] = ACTIONS(25),
    [anon_sym_u2286] = ACTIONS(23),
    [aux_sym_operator_token14] = ACTIONS(25),
    [anon_sym_u2282] = ACTIONS(23),
    [aux_sym_operator_token15] = ACTIONS(25),
    [anon_sym_u2284] = ACTIONS(23),
    [aux_sym_operator_token16] = ACTIONS(25),
    [aux_sym_operator_token17] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_any] = ACTIONS(33),
    [anon_sym_array] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(33),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_decimal] = ACTIONS(33),
    [anon_sym_duration] = ACTIONS(33),
    [anon_sym_float] = ACTIONS(33),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_number] = ACTIONS(33),
    [anon_sym_object] = ACTIONS(33),
    [anon_sym_string] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_geometry] = ACTIONS(33),
    [anon_sym_EDDSA] = ACTIONS(35),
    [anon_sym_ES256] = ACTIONS(35),
    [anon_sym_ES384] = ACTIONS(35),
    [anon_sym_ES512] = ACTIONS(35),
    [anon_sym_HS256] = ACTIONS(35),
    [anon_sym_HS384] = ACTIONS(35),
    [anon_sym_HS512] = ACTIONS(35),
    [anon_sym_PS256] = ACTIONS(35),
    [anon_sym_PS384] = ACTIONS(35),
    [anon_sym_PS512] = ACTIONS(35),
    [anon_sym_RS256] = ACTIONS(35),
    [anon_sym_RS384] = ACTIONS(35),
    [anon_sym_RS512] = ACTIONS(35),
    [aux_sym_function_token1] = ACTIONS(37),
    [aux_sym_function_token2] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [aux_sym_function_token3] = ACTIONS(37),
    [aux_sym_function_token4] = ACTIONS(37),
    [aux_sym_function_token5] = ACTIONS(37),
    [aux_sym_function_token6] = ACTIONS(37),
    [aux_sym_function_token7] = ACTIONS(37),
    [aux_sym_function_token8] = ACTIONS(37),
    [aux_sym_function_token9] = ACTIONS(37),
    [aux_sym_function_token10] = ACTIONS(39),
    [aux_sym_function_token11] = ACTIONS(37),
    [aux_sym_function_token12] = ACTIONS(39),
    [aux_sym_function_token13] = ACTIONS(37),
    [aux_sym_function_token14] = ACTIONS(37),
    [aux_sym_function_token15] = ACTIONS(37),
    [aux_sym_function_token16] = ACTIONS(39),
    [aux_sym_bool_token1] = ACTIONS(41),
    [aux_sym_bool_token2] = ACTIONS(41),
    [aux_sym_nothing_token1] = ACTIONS(43),
    [aux_sym_nothing_token2] = ACTIONS(43),
    [sym_variable] = ACTIONS(45),
    [sym_comment] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
  },
  [7] = {
    [sym_tokens] = STATE(7),
    [sym_scripting_function] = STATE(15),
    [sym_future] = STATE(15),
    [sym_casting] = STATE(15),
    [sym_property] = STATE(15),
    [sym_duration] = STATE(15),
    [sym_constant] = STATE(15),
    [sym_number] = STATE(15),
    [sym_record] = STATE(15),
    [sym_operator] = STATE(15),
    [sym_punctuation] = STATE(15),
    [sym_delimiter] = STATE(15),
    [sym_type] = STATE(15),
    [sym_datatype] = STATE(26),
    [sym_algotype] = STATE(26),
    [sym_function] = STATE(15),
    [sym_bool] = STATE(15),
    [sym_nothing] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(183),
    [aux_sym_future_token1] = ACTIONS(186),
    [aux_sym_casting_token1] = ACTIONS(189),
    [aux_sym_property_token1] = ACTIONS(192),
    [aux_sym_duration_token1] = ACTIONS(195),
    [aux_sym_constant_token1] = ACTIONS(198),
    [aux_sym_number_token1] = ACTIONS(201),
    [aux_sym_record_token1] = ACTIONS(204),
    [aux_sym_record_token2] = ACTIONS(204),
    [sym_keyword] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(210),
    [aux_sym_operator_token1] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [aux_sym_operator_token2] = ACTIONS(213),
    [anon_sym_QMARK_QMARK] = ACTIONS(210),
    [anon_sym_QMARK_COLON] = ACTIONS(210),
    [anon_sym_EQ] = ACTIONS(213),
    [aux_sym_operator_token3] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(210),
    [anon_sym_ISNOT] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [anon_sym_QMARK_EQ] = ACTIONS(210),
    [anon_sym_STAR_EQ] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_BANG_TILDE] = ACTIONS(210),
    [anon_sym_QMARK_TILDE] = ACTIONS(210),
    [anon_sym_STAR_TILDE] = ACTIONS(210),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [aux_sym_operator_token4] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_u00f7] = ACTIONS(210),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [aux_sym_operator_token5] = ACTIONS(213),
    [aux_sym_operator_token6] = ACTIONS(213),
    [anon_sym_u220b] = ACTIONS(210),
    [aux_sym_operator_token7] = ACTIONS(213),
    [anon_sym_u220c] = ACTIONS(210),
    [aux_sym_operator_token8] = ACTIONS(213),
    [anon_sym_u2287] = ACTIONS(210),
    [aux_sym_operator_token9] = ACTIONS(213),
    [anon_sym_u2283] = ACTIONS(210),
    [aux_sym_operator_token10] = ACTIONS(213),
    [anon_sym_u2285] = ACTIONS(210),
    [aux_sym_operator_token11] = ACTIONS(213),
    [anon_sym_u2208] = ACTIONS(210),
    [aux_sym_operator_token12] = ACTIONS(213),
    [anon_sym_NOTIN] = ACTIONS(210),
    [anon_sym_u2209] = ACTIONS(210),
    [aux_sym_operator_token13] = ACTIONS(213),
    [anon_sym_u2286] = ACTIONS(210),
    [aux_sym_operator_token14] = ACTIONS(213),
    [anon_sym_u2282] = ACTIONS(210),
    [aux_sym_operator_token15] = ACTIONS(213),
    [anon_sym_u2284] = ACTIONS(210),
    [aux_sym_operator_token16] = ACTIONS(213),
    [aux_sym_operator_token17] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_DASH_GT] = ACTIONS(216),
    [anon_sym_LT_DASH] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_any] = ACTIONS(225),
    [anon_sym_array] = ACTIONS(225),
    [anon_sym_bool] = ACTIONS(225),
    [anon_sym_datetime] = ACTIONS(225),
    [anon_sym_decimal] = ACTIONS(225),
    [anon_sym_duration] = ACTIONS(225),
    [anon_sym_float] = ACTIONS(225),
    [anon_sym_int] = ACTIONS(225),
    [anon_sym_number] = ACTIONS(225),
    [anon_sym_object] = ACTIONS(225),
    [anon_sym_string] = ACTIONS(225),
    [anon_sym_record] = ACTIONS(225),
    [anon_sym_geometry] = ACTIONS(225),
    [anon_sym_EDDSA] = ACTIONS(228),
    [anon_sym_ES256] = ACTIONS(228),
    [anon_sym_ES384] = ACTIONS(228),
    [anon_sym_ES512] = ACTIONS(228),
    [anon_sym_HS256] = ACTIONS(228),
    [anon_sym_HS384] = ACTIONS(228),
    [anon_sym_HS512] = ACTIONS(228),
    [anon_sym_PS256] = ACTIONS(228),
    [anon_sym_PS384] = ACTIONS(228),
    [anon_sym_PS512] = ACTIONS(228),
    [anon_sym_RS256] = ACTIONS(228),
    [anon_sym_RS384] = ACTIONS(228),
    [anon_sym_RS512] = ACTIONS(228),
    [aux_sym_function_token1] = ACTIONS(231),
    [aux_sym_function_token2] = ACTIONS(231),
    [anon_sym_count] = ACTIONS(234),
    [aux_sym_function_token3] = ACTIONS(231),
    [aux_sym_function_token4] = ACTIONS(231),
    [aux_sym_function_token5] = ACTIONS(231),
    [aux_sym_function_token6] = ACTIONS(231),
    [aux_sym_function_token7] = ACTIONS(231),
    [aux_sym_function_token8] = ACTIONS(231),
    [aux_sym_function_token9] = ACTIONS(231),
    [aux_sym_function_token10] = ACTIONS(234),
    [aux_sym_function_token11] = ACTIONS(231),
    [aux_sym_function_token12] = ACTIONS(234),
    [aux_sym_function_token13] = ACTIONS(231),
    [aux_sym_function_token14] = ACTIONS(231),
    [aux_sym_function_token15] = ACTIONS(231),
    [aux_sym_function_token16] = ACTIONS(234),
    [aux_sym_bool_token1] = ACTIONS(237),
    [aux_sym_bool_token2] = ACTIONS(237),
    [aux_sym_nothing_token1] = ACTIONS(240),
    [aux_sym_nothing_token2] = ACTIONS(240),
    [sym_variable] = ACTIONS(243),
    [sym_comment] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(252),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(255),
    [aux_sym_future_token1] = ACTIONS(255),
    [aux_sym_casting_token1] = ACTIONS(255),
    [aux_sym_property_token1] = ACTIONS(257),
    [aux_sym_duration_token1] = ACTIONS(257),
    [aux_sym_constant_token1] = ACTIONS(255),
    [aux_sym_number_token1] = ACTIONS(257),
    [aux_sym_record_token1] = ACTIONS(255),
    [aux_sym_record_token2] = ACTIONS(255),
    [sym_keyword] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(257),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [aux_sym_operator_token2] = ACTIONS(257),
    [anon_sym_QMARK_QMARK] = ACTIONS(255),
    [anon_sym_QMARK_COLON] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(257),
    [aux_sym_operator_token3] = ACTIONS(257),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_ISNOT] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_QMARK_EQ] = ACTIONS(255),
    [anon_sym_STAR_EQ] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_QMARK_TILDE] = ACTIONS(255),
    [anon_sym_STAR_TILDE] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [aux_sym_operator_token4] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_u00f7] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [aux_sym_operator_token5] = ACTIONS(257),
    [aux_sym_operator_token6] = ACTIONS(257),
    [anon_sym_u220b] = ACTIONS(255),
    [aux_sym_operator_token7] = ACTIONS(257),
    [anon_sym_u220c] = ACTIONS(255),
    [aux_sym_operator_token8] = ACTIONS(257),
    [anon_sym_u2287] = ACTIONS(255),
    [aux_sym_operator_token9] = ACTIONS(257),
    [anon_sym_u2283] = ACTIONS(255),
    [aux_sym_operator_token10] = ACTIONS(257),
    [anon_sym_u2285] = ACTIONS(255),
    [aux_sym_operator_token11] = ACTIONS(257),
    [anon_sym_u2208] = ACTIONS(255),
    [aux_sym_operator_token12] = ACTIONS(257),
    [anon_sym_NOTIN] = ACTIONS(255),
    [anon_sym_u2209] = ACTIONS(255),
    [aux_sym_operator_token13] = ACTIONS(257),
    [anon_sym_u2286] = ACTIONS(255),
    [aux_sym_operator_token14] = ACTIONS(257),
    [anon_sym_u2282] = ACTIONS(255),
    [aux_sym_operator_token15] = ACTIONS(257),
    [anon_sym_u2284] = ACTIONS(255),
    [aux_sym_operator_token16] = ACTIONS(257),
    [aux_sym_operator_token17] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_DASH_GT] = ACTIONS(255),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_any] = ACTIONS(257),
    [anon_sym_array] = ACTIONS(257),
    [anon_sym_bool] = ACTIONS(257),
    [anon_sym_datetime] = ACTIONS(257),
    [anon_sym_decimal] = ACTIONS(257),
    [anon_sym_duration] = ACTIONS(257),
    [anon_sym_float] = ACTIONS(257),
    [anon_sym_int] = ACTIONS(257),
    [anon_sym_number] = ACTIONS(257),
    [anon_sym_object] = ACTIONS(257),
    [anon_sym_string] = ACTIONS(257),
    [anon_sym_record] = ACTIONS(257),
    [anon_sym_geometry] = ACTIONS(257),
    [anon_sym_EDDSA] = ACTIONS(257),
    [anon_sym_ES256] = ACTIONS(257),
    [anon_sym_ES384] = ACTIONS(257),
    [anon_sym_ES512] = ACTIONS(257),
    [anon_sym_HS256] = ACTIONS(257),
    [anon_sym_HS384] = ACTIONS(257),
    [anon_sym_HS512] = ACTIONS(257),
    [anon_sym_PS256] = ACTIONS(257),
    [anon_sym_PS384] = ACTIONS(257),
    [anon_sym_PS512] = ACTIONS(257),
    [anon_sym_RS256] = ACTIONS(257),
    [anon_sym_RS384] = ACTIONS(257),
    [anon_sym_RS512] = ACTIONS(257),
    [aux_sym_function_token1] = ACTIONS(255),
    [aux_sym_function_token2] = ACTIONS(255),
    [anon_sym_count] = ACTIONS(257),
    [aux_sym_function_token3] = ACTIONS(255),
    [aux_sym_function_token4] = ACTIONS(255),
    [aux_sym_function_token5] = ACTIONS(255),
    [aux_sym_function_token6] = ACTIONS(255),
    [aux_sym_function_token7] = ACTIONS(255),
    [aux_sym_function_token8] = ACTIONS(255),
    [aux_sym_function_token9] = ACTIONS(255),
    [aux_sym_function_token10] = ACTIONS(257),
    [aux_sym_function_token11] = ACTIONS(255),
    [aux_sym_function_token12] = ACTIONS(257),
    [aux_sym_function_token13] = ACTIONS(255),
    [aux_sym_function_token14] = ACTIONS(255),
    [aux_sym_function_token15] = ACTIONS(255),
    [aux_sym_function_token16] = ACTIONS(257),
    [aux_sym_bool_token1] = ACTIONS(257),
    [aux_sym_bool_token2] = ACTIONS(257),
    [aux_sym_nothing_token1] = ACTIONS(257),
    [aux_sym_nothing_token2] = ACTIONS(257),
    [sym_variable] = ACTIONS(255),
    [sym_comment] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
  },
  [9] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE_SEMI] = ACTIONS(259),
    [anon_sym_RBRACE_COMMA] = ACTIONS(259),
    [aux_sym_future_token1] = ACTIONS(259),
    [aux_sym_casting_token1] = ACTIONS(259),
    [aux_sym_property_token1] = ACTIONS(261),
    [aux_sym_duration_token1] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(259),
    [aux_sym_number_token1] = ACTIONS(261),
    [aux_sym_record_token1] = ACTIONS(259),
    [aux_sym_record_token2] = ACTIONS(259),
    [sym_keyword] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [aux_sym_operator_token1] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [aux_sym_operator_token2] = ACTIONS(261),
    [anon_sym_QMARK_QMARK] = ACTIONS(259),
    [anon_sym_QMARK_COLON] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(261),
    [aux_sym_operator_token3] = ACTIONS(261),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_ISNOT] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_QMARK_EQ] = ACTIONS(259),
    [anon_sym_STAR_EQ] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_BANG_TILDE] = ACTIONS(259),
    [anon_sym_QMARK_TILDE] = ACTIONS(259),
    [anon_sym_STAR_TILDE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [aux_sym_operator_token4] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_u00f7] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [aux_sym_operator_token5] = ACTIONS(261),
    [aux_sym_operator_token6] = ACTIONS(261),
    [anon_sym_u220b] = ACTIONS(259),
    [aux_sym_operator_token7] = ACTIONS(261),
    [anon_sym_u220c] = ACTIONS(259),
    [aux_sym_operator_token8] = ACTIONS(261),
    [anon_sym_u2287] = ACTIONS(259),
    [aux_sym_operator_token9] = ACTIONS(261),
    [anon_sym_u2283] = ACTIONS(259),
    [aux_sym_operator_token10] = ACTIONS(261),
    [anon_sym_u2285] = ACTIONS(259),
    [aux_sym_operator_token11] = ACTIONS(261),
    [anon_sym_u2208] = ACTIONS(259),
    [aux_sym_operator_token12] = ACTIONS(261),
    [anon_sym_NOTIN] = ACTIONS(259),
    [anon_sym_u2209] = ACTIONS(259),
    [aux_sym_operator_token13] = ACTIONS(261),
    [anon_sym_u2286] = ACTIONS(259),
    [aux_sym_operator_token14] = ACTIONS(261),
    [anon_sym_u2282] = ACTIONS(259),
    [aux_sym_operator_token15] = ACTIONS(261),
    [anon_sym_u2284] = ACTIONS(259),
    [aux_sym_operator_token16] = ACTIONS(261),
    [aux_sym_operator_token17] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_LT_DASH] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_any] = ACTIONS(261),
    [anon_sym_array] = ACTIONS(261),
    [anon_sym_bool] = ACTIONS(261),
    [anon_sym_datetime] = ACTIONS(261),
    [anon_sym_decimal] = ACTIONS(261),
    [anon_sym_duration] = ACTIONS(261),
    [anon_sym_float] = ACTIONS(261),
    [anon_sym_int] = ACTIONS(261),
    [anon_sym_number] = ACTIONS(261),
    [anon_sym_object] = ACTIONS(261),
    [anon_sym_string] = ACTIONS(261),
    [anon_sym_record] = ACTIONS(261),
    [anon_sym_geometry] = ACTIONS(261),
    [anon_sym_EDDSA] = ACTIONS(261),
    [anon_sym_ES256] = ACTIONS(261),
    [anon_sym_ES384] = ACTIONS(261),
    [anon_sym_ES512] = ACTIONS(261),
    [anon_sym_HS256] = ACTIONS(261),
    [anon_sym_HS384] = ACTIONS(261),
    [anon_sym_HS512] = ACTIONS(261),
    [anon_sym_PS256] = ACTIONS(261),
    [anon_sym_PS384] = ACTIONS(261),
    [anon_sym_PS512] = ACTIONS(261),
    [anon_sym_RS256] = ACTIONS(261),
    [anon_sym_RS384] = ACTIONS(261),
    [anon_sym_RS512] = ACTIONS(261),
    [aux_sym_function_token1] = ACTIONS(259),
    [aux_sym_function_token2] = ACTIONS(259),
    [anon_sym_count] = ACTIONS(261),
    [aux_sym_function_token3] = ACTIONS(259),
    [aux_sym_function_token4] = ACTIONS(259),
    [aux_sym_function_token5] = ACTIONS(259),
    [aux_sym_function_token6] = ACTIONS(259),
    [aux_sym_function_token7] = ACTIONS(259),
    [aux_sym_function_token8] = ACTIONS(259),
    [aux_sym_function_token9] = ACTIONS(259),
    [aux_sym_function_token10] = ACTIONS(261),
    [aux_sym_function_token11] = ACTIONS(259),
    [aux_sym_function_token12] = ACTIONS(261),
    [aux_sym_function_token13] = ACTIONS(259),
    [aux_sym_function_token14] = ACTIONS(259),
    [aux_sym_function_token15] = ACTIONS(259),
    [aux_sym_function_token16] = ACTIONS(261),
    [aux_sym_bool_token1] = ACTIONS(261),
    [aux_sym_bool_token2] = ACTIONS(261),
    [aux_sym_nothing_token1] = ACTIONS(261),
    [aux_sym_nothing_token2] = ACTIONS(261),
    [sym_variable] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(263),
    [aux_sym_future_token1] = ACTIONS(263),
    [aux_sym_casting_token1] = ACTIONS(263),
    [aux_sym_property_token1] = ACTIONS(265),
    [aux_sym_duration_token1] = ACTIONS(265),
    [aux_sym_constant_token1] = ACTIONS(263),
    [aux_sym_number_token1] = ACTIONS(265),
    [aux_sym_record_token1] = ACTIONS(263),
    [aux_sym_record_token2] = ACTIONS(263),
    [sym_keyword] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [aux_sym_operator_token1] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [aux_sym_operator_token2] = ACTIONS(265),
    [anon_sym_QMARK_QMARK] = ACTIONS(263),
    [anon_sym_QMARK_COLON] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(265),
    [aux_sym_operator_token3] = ACTIONS(265),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_ISNOT] = ACTIONS(263),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_QMARK_EQ] = ACTIONS(263),
    [anon_sym_STAR_EQ] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_BANG_TILDE] = ACTIONS(263),
    [anon_sym_QMARK_TILDE] = ACTIONS(263),
    [anon_sym_STAR_TILDE] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [aux_sym_operator_token4] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_u00f7] = ACTIONS(263),
    [anon_sym_STAR_STAR] = ACTIONS(263),
    [aux_sym_operator_token5] = ACTIONS(265),
    [aux_sym_operator_token6] = ACTIONS(265),
    [anon_sym_u220b] = ACTIONS(263),
    [aux_sym_operator_token7] = ACTIONS(265),
    [anon_sym_u220c] = ACTIONS(263),
    [aux_sym_operator_token8] = ACTIONS(265),
    [anon_sym_u2287] = ACTIONS(263),
    [aux_sym_operator_token9] = ACTIONS(265),
    [anon_sym_u2283] = ACTIONS(263),
    [aux_sym_operator_token10] = ACTIONS(265),
    [anon_sym_u2285] = ACTIONS(263),
    [aux_sym_operator_token11] = ACTIONS(265),
    [anon_sym_u2208] = ACTIONS(263),
    [aux_sym_operator_token12] = ACTIONS(265),
    [anon_sym_NOTIN] = ACTIONS(263),
    [anon_sym_u2209] = ACTIONS(263),
    [aux_sym_operator_token13] = ACTIONS(265),
    [anon_sym_u2286] = ACTIONS(263),
    [aux_sym_operator_token14] = ACTIONS(265),
    [anon_sym_u2282] = ACTIONS(263),
    [aux_sym_operator_token15] = ACTIONS(265),
    [anon_sym_u2284] = ACTIONS(263),
    [aux_sym_operator_token16] = ACTIONS(265),
    [aux_sym_operator_token17] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_DASH_GT] = ACTIONS(263),
    [anon_sym_LT_DASH] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_any] = ACTIONS(265),
    [anon_sym_array] = ACTIONS(265),
    [anon_sym_bool] = ACTIONS(265),
    [anon_sym_datetime] = ACTIONS(265),
    [anon_sym_decimal] = ACTIONS(265),
    [anon_sym_duration] = ACTIONS(265),
    [anon_sym_float] = ACTIONS(265),
    [anon_sym_int] = ACTIONS(265),
    [anon_sym_number] = ACTIONS(265),
    [anon_sym_object] = ACTIONS(265),
    [anon_sym_string] = ACTIONS(265),
    [anon_sym_record] = ACTIONS(265),
    [anon_sym_geometry] = ACTIONS(265),
    [anon_sym_EDDSA] = ACTIONS(265),
    [anon_sym_ES256] = ACTIONS(265),
    [anon_sym_ES384] = ACTIONS(265),
    [anon_sym_ES512] = ACTIONS(265),
    [anon_sym_HS256] = ACTIONS(265),
    [anon_sym_HS384] = ACTIONS(265),
    [anon_sym_HS512] = ACTIONS(265),
    [anon_sym_PS256] = ACTIONS(265),
    [anon_sym_PS384] = ACTIONS(265),
    [anon_sym_PS512] = ACTIONS(265),
    [anon_sym_RS256] = ACTIONS(265),
    [anon_sym_RS384] = ACTIONS(265),
    [anon_sym_RS512] = ACTIONS(265),
    [aux_sym_function_token1] = ACTIONS(263),
    [aux_sym_function_token2] = ACTIONS(263),
    [anon_sym_count] = ACTIONS(265),
    [aux_sym_function_token3] = ACTIONS(263),
    [aux_sym_function_token4] = ACTIONS(263),
    [aux_sym_function_token5] = ACTIONS(263),
    [aux_sym_function_token6] = ACTIONS(263),
    [aux_sym_function_token7] = ACTIONS(263),
    [aux_sym_function_token8] = ACTIONS(263),
    [aux_sym_function_token9] = ACTIONS(263),
    [aux_sym_function_token10] = ACTIONS(265),
    [aux_sym_function_token11] = ACTIONS(263),
    [aux_sym_function_token12] = ACTIONS(265),
    [aux_sym_function_token13] = ACTIONS(263),
    [aux_sym_function_token14] = ACTIONS(263),
    [aux_sym_function_token15] = ACTIONS(263),
    [aux_sym_function_token16] = ACTIONS(265),
    [aux_sym_bool_token1] = ACTIONS(265),
    [aux_sym_bool_token2] = ACTIONS(265),
    [aux_sym_nothing_token1] = ACTIONS(265),
    [aux_sym_nothing_token2] = ACTIONS(265),
    [sym_variable] = ACTIONS(263),
    [sym_comment] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(267),
    [aux_sym_future_token1] = ACTIONS(267),
    [aux_sym_casting_token1] = ACTIONS(267),
    [aux_sym_property_token1] = ACTIONS(269),
    [aux_sym_duration_token1] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(267),
    [aux_sym_number_token1] = ACTIONS(269),
    [aux_sym_record_token1] = ACTIONS(267),
    [aux_sym_record_token2] = ACTIONS(267),
    [sym_keyword] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(267),
    [aux_sym_operator_token1] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(267),
    [aux_sym_operator_token2] = ACTIONS(269),
    [anon_sym_QMARK_QMARK] = ACTIONS(267),
    [anon_sym_QMARK_COLON] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(269),
    [aux_sym_operator_token3] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(267),
    [anon_sym_ISNOT] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(267),
    [anon_sym_QMARK_EQ] = ACTIONS(267),
    [anon_sym_STAR_EQ] = ACTIONS(267),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_BANG_TILDE] = ACTIONS(267),
    [anon_sym_QMARK_TILDE] = ACTIONS(267),
    [anon_sym_STAR_TILDE] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_LT_EQ] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_GT_EQ] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [aux_sym_operator_token4] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_u00f7] = ACTIONS(267),
    [anon_sym_STAR_STAR] = ACTIONS(267),
    [aux_sym_operator_token5] = ACTIONS(269),
    [aux_sym_operator_token6] = ACTIONS(269),
    [anon_sym_u220b] = ACTIONS(267),
    [aux_sym_operator_token7] = ACTIONS(269),
    [anon_sym_u220c] = ACTIONS(267),
    [aux_sym_operator_token8] = ACTIONS(269),
    [anon_sym_u2287] = ACTIONS(267),
    [aux_sym_operator_token9] = ACTIONS(269),
    [anon_sym_u2283] = ACTIONS(267),
    [aux_sym_operator_token10] = ACTIONS(269),
    [anon_sym_u2285] = ACTIONS(267),
    [aux_sym_operator_token11] = ACTIONS(269),
    [anon_sym_u2208] = ACTIONS(267),
    [aux_sym_operator_token12] = ACTIONS(269),
    [anon_sym_NOTIN] = ACTIONS(267),
    [anon_sym_u2209] = ACTIONS(267),
    [aux_sym_operator_token13] = ACTIONS(269),
    [anon_sym_u2286] = ACTIONS(267),
    [aux_sym_operator_token14] = ACTIONS(269),
    [anon_sym_u2282] = ACTIONS(267),
    [aux_sym_operator_token15] = ACTIONS(269),
    [anon_sym_u2284] = ACTIONS(267),
    [aux_sym_operator_token16] = ACTIONS(269),
    [aux_sym_operator_token17] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [anon_sym_LT_DASH] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_any] = ACTIONS(269),
    [anon_sym_array] = ACTIONS(269),
    [anon_sym_bool] = ACTIONS(269),
    [anon_sym_datetime] = ACTIONS(269),
    [anon_sym_decimal] = ACTIONS(269),
    [anon_sym_duration] = ACTIONS(269),
    [anon_sym_float] = ACTIONS(269),
    [anon_sym_int] = ACTIONS(269),
    [anon_sym_number] = ACTIONS(269),
    [anon_sym_object] = ACTIONS(269),
    [anon_sym_string] = ACTIONS(269),
    [anon_sym_record] = ACTIONS(269),
    [anon_sym_geometry] = ACTIONS(269),
    [anon_sym_EDDSA] = ACTIONS(269),
    [anon_sym_ES256] = ACTIONS(269),
    [anon_sym_ES384] = ACTIONS(269),
    [anon_sym_ES512] = ACTIONS(269),
    [anon_sym_HS256] = ACTIONS(269),
    [anon_sym_HS384] = ACTIONS(269),
    [anon_sym_HS512] = ACTIONS(269),
    [anon_sym_PS256] = ACTIONS(269),
    [anon_sym_PS384] = ACTIONS(269),
    [anon_sym_PS512] = ACTIONS(269),
    [anon_sym_RS256] = ACTIONS(269),
    [anon_sym_RS384] = ACTIONS(269),
    [anon_sym_RS512] = ACTIONS(269),
    [aux_sym_function_token1] = ACTIONS(267),
    [aux_sym_function_token2] = ACTIONS(267),
    [anon_sym_count] = ACTIONS(269),
    [aux_sym_function_token3] = ACTIONS(267),
    [aux_sym_function_token4] = ACTIONS(267),
    [aux_sym_function_token5] = ACTIONS(267),
    [aux_sym_function_token6] = ACTIONS(267),
    [aux_sym_function_token7] = ACTIONS(267),
    [aux_sym_function_token8] = ACTIONS(267),
    [aux_sym_function_token9] = ACTIONS(267),
    [aux_sym_function_token10] = ACTIONS(269),
    [aux_sym_function_token11] = ACTIONS(267),
    [aux_sym_function_token12] = ACTIONS(269),
    [aux_sym_function_token13] = ACTIONS(267),
    [aux_sym_function_token14] = ACTIONS(267),
    [aux_sym_function_token15] = ACTIONS(267),
    [aux_sym_function_token16] = ACTIONS(269),
    [aux_sym_bool_token1] = ACTIONS(269),
    [aux_sym_bool_token2] = ACTIONS(269),
    [aux_sym_nothing_token1] = ACTIONS(269),
    [aux_sym_nothing_token2] = ACTIONS(269),
    [sym_variable] = ACTIONS(267),
    [sym_comment] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(271),
    [aux_sym_future_token1] = ACTIONS(271),
    [aux_sym_casting_token1] = ACTIONS(271),
    [aux_sym_property_token1] = ACTIONS(273),
    [aux_sym_duration_token1] = ACTIONS(273),
    [aux_sym_constant_token1] = ACTIONS(271),
    [aux_sym_number_token1] = ACTIONS(273),
    [aux_sym_record_token1] = ACTIONS(271),
    [aux_sym_record_token2] = ACTIONS(271),
    [sym_keyword] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [aux_sym_operator_token1] = ACTIONS(273),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [aux_sym_operator_token2] = ACTIONS(273),
    [anon_sym_QMARK_QMARK] = ACTIONS(271),
    [anon_sym_QMARK_COLON] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(273),
    [aux_sym_operator_token3] = ACTIONS(273),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_ISNOT] = ACTIONS(271),
    [anon_sym_EQ_EQ] = ACTIONS(271),
    [anon_sym_QMARK_EQ] = ACTIONS(271),
    [anon_sym_STAR_EQ] = ACTIONS(271),
    [anon_sym_TILDE] = ACTIONS(271),
    [anon_sym_BANG_TILDE] = ACTIONS(271),
    [anon_sym_QMARK_TILDE] = ACTIONS(271),
    [anon_sym_STAR_TILDE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [aux_sym_operator_token4] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_u00f7] = ACTIONS(271),
    [anon_sym_STAR_STAR] = ACTIONS(271),
    [aux_sym_operator_token5] = ACTIONS(273),
    [aux_sym_operator_token6] = ACTIONS(273),
    [anon_sym_u220b] = ACTIONS(271),
    [aux_sym_operator_token7] = ACTIONS(273),
    [anon_sym_u220c] = ACTIONS(271),
    [aux_sym_operator_token8] = ACTIONS(273),
    [anon_sym_u2287] = ACTIONS(271),
    [aux_sym_operator_token9] = ACTIONS(273),
    [anon_sym_u2283] = ACTIONS(271),
    [aux_sym_operator_token10] = ACTIONS(273),
    [anon_sym_u2285] = ACTIONS(271),
    [aux_sym_operator_token11] = ACTIONS(273),
    [anon_sym_u2208] = ACTIONS(271),
    [aux_sym_operator_token12] = ACTIONS(273),
    [anon_sym_NOTIN] = ACTIONS(271),
    [anon_sym_u2209] = ACTIONS(271),
    [aux_sym_operator_token13] = ACTIONS(273),
    [anon_sym_u2286] = ACTIONS(271),
    [aux_sym_operator_token14] = ACTIONS(273),
    [anon_sym_u2282] = ACTIONS(271),
    [aux_sym_operator_token15] = ACTIONS(273),
    [anon_sym_u2284] = ACTIONS(271),
    [aux_sym_operator_token16] = ACTIONS(273),
    [aux_sym_operator_token17] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_any] = ACTIONS(273),
    [anon_sym_array] = ACTIONS(273),
    [anon_sym_bool] = ACTIONS(273),
    [anon_sym_datetime] = ACTIONS(273),
    [anon_sym_decimal] = ACTIONS(273),
    [anon_sym_duration] = ACTIONS(273),
    [anon_sym_float] = ACTIONS(273),
    [anon_sym_int] = ACTIONS(273),
    [anon_sym_number] = ACTIONS(273),
    [anon_sym_object] = ACTIONS(273),
    [anon_sym_string] = ACTIONS(273),
    [anon_sym_record] = ACTIONS(273),
    [anon_sym_geometry] = ACTIONS(273),
    [anon_sym_EDDSA] = ACTIONS(273),
    [anon_sym_ES256] = ACTIONS(273),
    [anon_sym_ES384] = ACTIONS(273),
    [anon_sym_ES512] = ACTIONS(273),
    [anon_sym_HS256] = ACTIONS(273),
    [anon_sym_HS384] = ACTIONS(273),
    [anon_sym_HS512] = ACTIONS(273),
    [anon_sym_PS256] = ACTIONS(273),
    [anon_sym_PS384] = ACTIONS(273),
    [anon_sym_PS512] = ACTIONS(273),
    [anon_sym_RS256] = ACTIONS(273),
    [anon_sym_RS384] = ACTIONS(273),
    [anon_sym_RS512] = ACTIONS(273),
    [aux_sym_function_token1] = ACTIONS(271),
    [aux_sym_function_token2] = ACTIONS(271),
    [anon_sym_count] = ACTIONS(273),
    [aux_sym_function_token3] = ACTIONS(271),
    [aux_sym_function_token4] = ACTIONS(271),
    [aux_sym_function_token5] = ACTIONS(271),
    [aux_sym_function_token6] = ACTIONS(271),
    [aux_sym_function_token7] = ACTIONS(271),
    [aux_sym_function_token8] = ACTIONS(271),
    [aux_sym_function_token9] = ACTIONS(271),
    [aux_sym_function_token10] = ACTIONS(273),
    [aux_sym_function_token11] = ACTIONS(271),
    [aux_sym_function_token12] = ACTIONS(273),
    [aux_sym_function_token13] = ACTIONS(271),
    [aux_sym_function_token14] = ACTIONS(271),
    [aux_sym_function_token15] = ACTIONS(271),
    [aux_sym_function_token16] = ACTIONS(273),
    [aux_sym_bool_token1] = ACTIONS(273),
    [aux_sym_bool_token2] = ACTIONS(273),
    [aux_sym_nothing_token1] = ACTIONS(273),
    [aux_sym_nothing_token2] = ACTIONS(273),
    [sym_variable] = ACTIONS(271),
    [sym_comment] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(275),
    [aux_sym_future_token1] = ACTIONS(275),
    [aux_sym_casting_token1] = ACTIONS(275),
    [aux_sym_property_token1] = ACTIONS(277),
    [aux_sym_duration_token1] = ACTIONS(277),
    [aux_sym_constant_token1] = ACTIONS(275),
    [aux_sym_number_token1] = ACTIONS(277),
    [aux_sym_record_token1] = ACTIONS(275),
    [aux_sym_record_token2] = ACTIONS(275),
    [sym_keyword] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [aux_sym_operator_token1] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_operator_token2] = ACTIONS(277),
    [anon_sym_QMARK_QMARK] = ACTIONS(275),
    [anon_sym_QMARK_COLON] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(277),
    [aux_sym_operator_token3] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_ISNOT] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_QMARK_EQ] = ACTIONS(275),
    [anon_sym_STAR_EQ] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_BANG_TILDE] = ACTIONS(275),
    [anon_sym_QMARK_TILDE] = ACTIONS(275),
    [anon_sym_STAR_TILDE] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [aux_sym_operator_token4] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_u00f7] = ACTIONS(275),
    [anon_sym_STAR_STAR] = ACTIONS(275),
    [aux_sym_operator_token5] = ACTIONS(277),
    [aux_sym_operator_token6] = ACTIONS(277),
    [anon_sym_u220b] = ACTIONS(275),
    [aux_sym_operator_token7] = ACTIONS(277),
    [anon_sym_u220c] = ACTIONS(275),
    [aux_sym_operator_token8] = ACTIONS(277),
    [anon_sym_u2287] = ACTIONS(275),
    [aux_sym_operator_token9] = ACTIONS(277),
    [anon_sym_u2283] = ACTIONS(275),
    [aux_sym_operator_token10] = ACTIONS(277),
    [anon_sym_u2285] = ACTIONS(275),
    [aux_sym_operator_token11] = ACTIONS(277),
    [anon_sym_u2208] = ACTIONS(275),
    [aux_sym_operator_token12] = ACTIONS(277),
    [anon_sym_NOTIN] = ACTIONS(275),
    [anon_sym_u2209] = ACTIONS(275),
    [aux_sym_operator_token13] = ACTIONS(277),
    [anon_sym_u2286] = ACTIONS(275),
    [aux_sym_operator_token14] = ACTIONS(277),
    [anon_sym_u2282] = ACTIONS(275),
    [aux_sym_operator_token15] = ACTIONS(277),
    [anon_sym_u2284] = ACTIONS(275),
    [aux_sym_operator_token16] = ACTIONS(277),
    [aux_sym_operator_token17] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_DASH_GT] = ACTIONS(275),
    [anon_sym_LT_DASH] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_any] = ACTIONS(277),
    [anon_sym_array] = ACTIONS(277),
    [anon_sym_bool] = ACTIONS(277),
    [anon_sym_datetime] = ACTIONS(277),
    [anon_sym_decimal] = ACTIONS(277),
    [anon_sym_duration] = ACTIONS(277),
    [anon_sym_float] = ACTIONS(277),
    [anon_sym_int] = ACTIONS(277),
    [anon_sym_number] = ACTIONS(277),
    [anon_sym_object] = ACTIONS(277),
    [anon_sym_string] = ACTIONS(277),
    [anon_sym_record] = ACTIONS(277),
    [anon_sym_geometry] = ACTIONS(277),
    [anon_sym_EDDSA] = ACTIONS(277),
    [anon_sym_ES256] = ACTIONS(277),
    [anon_sym_ES384] = ACTIONS(277),
    [anon_sym_ES512] = ACTIONS(277),
    [anon_sym_HS256] = ACTIONS(277),
    [anon_sym_HS384] = ACTIONS(277),
    [anon_sym_HS512] = ACTIONS(277),
    [anon_sym_PS256] = ACTIONS(277),
    [anon_sym_PS384] = ACTIONS(277),
    [anon_sym_PS512] = ACTIONS(277),
    [anon_sym_RS256] = ACTIONS(277),
    [anon_sym_RS384] = ACTIONS(277),
    [anon_sym_RS512] = ACTIONS(277),
    [aux_sym_function_token1] = ACTIONS(275),
    [aux_sym_function_token2] = ACTIONS(275),
    [anon_sym_count] = ACTIONS(277),
    [aux_sym_function_token3] = ACTIONS(275),
    [aux_sym_function_token4] = ACTIONS(275),
    [aux_sym_function_token5] = ACTIONS(275),
    [aux_sym_function_token6] = ACTIONS(275),
    [aux_sym_function_token7] = ACTIONS(275),
    [aux_sym_function_token8] = ACTIONS(275),
    [aux_sym_function_token9] = ACTIONS(275),
    [aux_sym_function_token10] = ACTIONS(277),
    [aux_sym_function_token11] = ACTIONS(275),
    [aux_sym_function_token12] = ACTIONS(277),
    [aux_sym_function_token13] = ACTIONS(275),
    [aux_sym_function_token14] = ACTIONS(275),
    [aux_sym_function_token15] = ACTIONS(275),
    [aux_sym_function_token16] = ACTIONS(277),
    [aux_sym_bool_token1] = ACTIONS(277),
    [aux_sym_bool_token2] = ACTIONS(277),
    [aux_sym_nothing_token1] = ACTIONS(277),
    [aux_sym_nothing_token2] = ACTIONS(277),
    [sym_variable] = ACTIONS(275),
    [sym_comment] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(279),
    [aux_sym_future_token1] = ACTIONS(279),
    [aux_sym_casting_token1] = ACTIONS(279),
    [aux_sym_property_token1] = ACTIONS(281),
    [aux_sym_duration_token1] = ACTIONS(281),
    [aux_sym_constant_token1] = ACTIONS(279),
    [aux_sym_number_token1] = ACTIONS(281),
    [aux_sym_record_token1] = ACTIONS(279),
    [aux_sym_record_token2] = ACTIONS(279),
    [sym_keyword] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [aux_sym_operator_token1] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [aux_sym_operator_token2] = ACTIONS(281),
    [anon_sym_QMARK_QMARK] = ACTIONS(279),
    [anon_sym_QMARK_COLON] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(281),
    [aux_sym_operator_token3] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_ISNOT] = ACTIONS(279),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_QMARK_EQ] = ACTIONS(279),
    [anon_sym_STAR_EQ] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_BANG_TILDE] = ACTIONS(279),
    [anon_sym_QMARK_TILDE] = ACTIONS(279),
    [anon_sym_STAR_TILDE] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(279),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(281),
    [aux_sym_operator_token4] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(281),
    [anon_sym_u00f7] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(279),
    [aux_sym_operator_token5] = ACTIONS(281),
    [aux_sym_operator_token6] = ACTIONS(281),
    [anon_sym_u220b] = ACTIONS(279),
    [aux_sym_operator_token7] = ACTIONS(281),
    [anon_sym_u220c] = ACTIONS(279),
    [aux_sym_operator_token8] = ACTIONS(281),
    [anon_sym_u2287] = ACTIONS(279),
    [aux_sym_operator_token9] = ACTIONS(281),
    [anon_sym_u2283] = ACTIONS(279),
    [aux_sym_operator_token10] = ACTIONS(281),
    [anon_sym_u2285] = ACTIONS(279),
    [aux_sym_operator_token11] = ACTIONS(281),
    [anon_sym_u2208] = ACTIONS(279),
    [aux_sym_operator_token12] = ACTIONS(281),
    [anon_sym_NOTIN] = ACTIONS(279),
    [anon_sym_u2209] = ACTIONS(279),
    [aux_sym_operator_token13] = ACTIONS(281),
    [anon_sym_u2286] = ACTIONS(279),
    [aux_sym_operator_token14] = ACTIONS(281),
    [anon_sym_u2282] = ACTIONS(279),
    [aux_sym_operator_token15] = ACTIONS(281),
    [anon_sym_u2284] = ACTIONS(279),
    [aux_sym_operator_token16] = ACTIONS(281),
    [aux_sym_operator_token17] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_DASH_GT] = ACTIONS(279),
    [anon_sym_LT_DASH] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_any] = ACTIONS(281),
    [anon_sym_array] = ACTIONS(281),
    [anon_sym_bool] = ACTIONS(281),
    [anon_sym_datetime] = ACTIONS(281),
    [anon_sym_decimal] = ACTIONS(281),
    [anon_sym_duration] = ACTIONS(281),
    [anon_sym_float] = ACTIONS(281),
    [anon_sym_int] = ACTIONS(281),
    [anon_sym_number] = ACTIONS(281),
    [anon_sym_object] = ACTIONS(281),
    [anon_sym_string] = ACTIONS(281),
    [anon_sym_record] = ACTIONS(281),
    [anon_sym_geometry] = ACTIONS(281),
    [anon_sym_EDDSA] = ACTIONS(281),
    [anon_sym_ES256] = ACTIONS(281),
    [anon_sym_ES384] = ACTIONS(281),
    [anon_sym_ES512] = ACTIONS(281),
    [anon_sym_HS256] = ACTIONS(281),
    [anon_sym_HS384] = ACTIONS(281),
    [anon_sym_HS512] = ACTIONS(281),
    [anon_sym_PS256] = ACTIONS(281),
    [anon_sym_PS384] = ACTIONS(281),
    [anon_sym_PS512] = ACTIONS(281),
    [anon_sym_RS256] = ACTIONS(281),
    [anon_sym_RS384] = ACTIONS(281),
    [anon_sym_RS512] = ACTIONS(281),
    [aux_sym_function_token1] = ACTIONS(279),
    [aux_sym_function_token2] = ACTIONS(279),
    [anon_sym_count] = ACTIONS(281),
    [aux_sym_function_token3] = ACTIONS(279),
    [aux_sym_function_token4] = ACTIONS(279),
    [aux_sym_function_token5] = ACTIONS(279),
    [aux_sym_function_token6] = ACTIONS(279),
    [aux_sym_function_token7] = ACTIONS(279),
    [aux_sym_function_token8] = ACTIONS(279),
    [aux_sym_function_token9] = ACTIONS(279),
    [aux_sym_function_token10] = ACTIONS(281),
    [aux_sym_function_token11] = ACTIONS(279),
    [aux_sym_function_token12] = ACTIONS(281),
    [aux_sym_function_token13] = ACTIONS(279),
    [aux_sym_function_token14] = ACTIONS(279),
    [aux_sym_function_token15] = ACTIONS(279),
    [aux_sym_function_token16] = ACTIONS(281),
    [aux_sym_bool_token1] = ACTIONS(281),
    [aux_sym_bool_token2] = ACTIONS(281),
    [aux_sym_nothing_token1] = ACTIONS(281),
    [aux_sym_nothing_token2] = ACTIONS(281),
    [sym_variable] = ACTIONS(279),
    [sym_comment] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(283),
    [aux_sym_future_token1] = ACTIONS(283),
    [aux_sym_casting_token1] = ACTIONS(283),
    [aux_sym_property_token1] = ACTIONS(285),
    [aux_sym_duration_token1] = ACTIONS(285),
    [aux_sym_constant_token1] = ACTIONS(283),
    [aux_sym_number_token1] = ACTIONS(285),
    [aux_sym_record_token1] = ACTIONS(283),
    [aux_sym_record_token2] = ACTIONS(283),
    [sym_keyword] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(283),
    [aux_sym_operator_token1] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(283),
    [aux_sym_operator_token2] = ACTIONS(285),
    [anon_sym_QMARK_QMARK] = ACTIONS(283),
    [anon_sym_QMARK_COLON] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(285),
    [aux_sym_operator_token3] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(283),
    [anon_sym_ISNOT] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(283),
    [anon_sym_QMARK_EQ] = ACTIONS(283),
    [anon_sym_STAR_EQ] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_BANG_TILDE] = ACTIONS(283),
    [anon_sym_QMARK_TILDE] = ACTIONS(283),
    [anon_sym_STAR_TILDE] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(283),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [aux_sym_operator_token4] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_u00f7] = ACTIONS(283),
    [anon_sym_STAR_STAR] = ACTIONS(283),
    [aux_sym_operator_token5] = ACTIONS(285),
    [aux_sym_operator_token6] = ACTIONS(285),
    [anon_sym_u220b] = ACTIONS(283),
    [aux_sym_operator_token7] = ACTIONS(285),
    [anon_sym_u220c] = ACTIONS(283),
    [aux_sym_operator_token8] = ACTIONS(285),
    [anon_sym_u2287] = ACTIONS(283),
    [aux_sym_operator_token9] = ACTIONS(285),
    [anon_sym_u2283] = ACTIONS(283),
    [aux_sym_operator_token10] = ACTIONS(285),
    [anon_sym_u2285] = ACTIONS(283),
    [aux_sym_operator_token11] = ACTIONS(285),
    [anon_sym_u2208] = ACTIONS(283),
    [aux_sym_operator_token12] = ACTIONS(285),
    [anon_sym_NOTIN] = ACTIONS(283),
    [anon_sym_u2209] = ACTIONS(283),
    [aux_sym_operator_token13] = ACTIONS(285),
    [anon_sym_u2286] = ACTIONS(283),
    [aux_sym_operator_token14] = ACTIONS(285),
    [anon_sym_u2282] = ACTIONS(283),
    [aux_sym_operator_token15] = ACTIONS(285),
    [anon_sym_u2284] = ACTIONS(283),
    [aux_sym_operator_token16] = ACTIONS(285),
    [aux_sym_operator_token17] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_LT_DASH] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_any] = ACTIONS(285),
    [anon_sym_array] = ACTIONS(285),
    [anon_sym_bool] = ACTIONS(285),
    [anon_sym_datetime] = ACTIONS(285),
    [anon_sym_decimal] = ACTIONS(285),
    [anon_sym_duration] = ACTIONS(285),
    [anon_sym_float] = ACTIONS(285),
    [anon_sym_int] = ACTIONS(285),
    [anon_sym_number] = ACTIONS(285),
    [anon_sym_object] = ACTIONS(285),
    [anon_sym_string] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_geometry] = ACTIONS(285),
    [anon_sym_EDDSA] = ACTIONS(285),
    [anon_sym_ES256] = ACTIONS(285),
    [anon_sym_ES384] = ACTIONS(285),
    [anon_sym_ES512] = ACTIONS(285),
    [anon_sym_HS256] = ACTIONS(285),
    [anon_sym_HS384] = ACTIONS(285),
    [anon_sym_HS512] = ACTIONS(285),
    [anon_sym_PS256] = ACTIONS(285),
    [anon_sym_PS384] = ACTIONS(285),
    [anon_sym_PS512] = ACTIONS(285),
    [anon_sym_RS256] = ACTIONS(285),
    [anon_sym_RS384] = ACTIONS(285),
    [anon_sym_RS512] = ACTIONS(285),
    [aux_sym_function_token1] = ACTIONS(283),
    [aux_sym_function_token2] = ACTIONS(283),
    [anon_sym_count] = ACTIONS(285),
    [aux_sym_function_token3] = ACTIONS(283),
    [aux_sym_function_token4] = ACTIONS(283),
    [aux_sym_function_token5] = ACTIONS(283),
    [aux_sym_function_token6] = ACTIONS(283),
    [aux_sym_function_token7] = ACTIONS(283),
    [aux_sym_function_token8] = ACTIONS(283),
    [aux_sym_function_token9] = ACTIONS(283),
    [aux_sym_function_token10] = ACTIONS(285),
    [aux_sym_function_token11] = ACTIONS(283),
    [aux_sym_function_token12] = ACTIONS(285),
    [aux_sym_function_token13] = ACTIONS(283),
    [aux_sym_function_token14] = ACTIONS(283),
    [aux_sym_function_token15] = ACTIONS(283),
    [aux_sym_function_token16] = ACTIONS(285),
    [aux_sym_bool_token1] = ACTIONS(285),
    [aux_sym_bool_token2] = ACTIONS(285),
    [aux_sym_nothing_token1] = ACTIONS(285),
    [aux_sym_nothing_token2] = ACTIONS(285),
    [sym_variable] = ACTIONS(283),
    [sym_comment] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(287),
    [aux_sym_future_token1] = ACTIONS(287),
    [aux_sym_casting_token1] = ACTIONS(287),
    [aux_sym_property_token1] = ACTIONS(289),
    [aux_sym_duration_token1] = ACTIONS(289),
    [aux_sym_constant_token1] = ACTIONS(287),
    [aux_sym_number_token1] = ACTIONS(289),
    [aux_sym_record_token1] = ACTIONS(287),
    [aux_sym_record_token2] = ACTIONS(287),
    [sym_keyword] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [aux_sym_operator_token1] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [aux_sym_operator_token2] = ACTIONS(289),
    [anon_sym_QMARK_QMARK] = ACTIONS(287),
    [anon_sym_QMARK_COLON] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(289),
    [aux_sym_operator_token3] = ACTIONS(289),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_ISNOT] = ACTIONS(287),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_QMARK_EQ] = ACTIONS(287),
    [anon_sym_STAR_EQ] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_BANG_TILDE] = ACTIONS(287),
    [anon_sym_QMARK_TILDE] = ACTIONS(287),
    [anon_sym_STAR_TILDE] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [aux_sym_operator_token4] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_u00f7] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [aux_sym_operator_token5] = ACTIONS(289),
    [aux_sym_operator_token6] = ACTIONS(289),
    [anon_sym_u220b] = ACTIONS(287),
    [aux_sym_operator_token7] = ACTIONS(289),
    [anon_sym_u220c] = ACTIONS(287),
    [aux_sym_operator_token8] = ACTIONS(289),
    [anon_sym_u2287] = ACTIONS(287),
    [aux_sym_operator_token9] = ACTIONS(289),
    [anon_sym_u2283] = ACTIONS(287),
    [aux_sym_operator_token10] = ACTIONS(289),
    [anon_sym_u2285] = ACTIONS(287),
    [aux_sym_operator_token11] = ACTIONS(289),
    [anon_sym_u2208] = ACTIONS(287),
    [aux_sym_operator_token12] = ACTIONS(289),
    [anon_sym_NOTIN] = ACTIONS(287),
    [anon_sym_u2209] = ACTIONS(287),
    [aux_sym_operator_token13] = ACTIONS(289),
    [anon_sym_u2286] = ACTIONS(287),
    [aux_sym_operator_token14] = ACTIONS(289),
    [anon_sym_u2282] = ACTIONS(287),
    [aux_sym_operator_token15] = ACTIONS(289),
    [anon_sym_u2284] = ACTIONS(287),
    [aux_sym_operator_token16] = ACTIONS(289),
    [aux_sym_operator_token17] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [anon_sym_LT_DASH] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_any] = ACTIONS(289),
    [anon_sym_array] = ACTIONS(289),
    [anon_sym_bool] = ACTIONS(289),
    [anon_sym_datetime] = ACTIONS(289),
    [anon_sym_decimal] = ACTIONS(289),
    [anon_sym_duration] = ACTIONS(289),
    [anon_sym_float] = ACTIONS(289),
    [anon_sym_int] = ACTIONS(289),
    [anon_sym_number] = ACTIONS(289),
    [anon_sym_object] = ACTIONS(289),
    [anon_sym_string] = ACTIONS(289),
    [anon_sym_record] = ACTIONS(289),
    [anon_sym_geometry] = ACTIONS(289),
    [anon_sym_EDDSA] = ACTIONS(289),
    [anon_sym_ES256] = ACTIONS(289),
    [anon_sym_ES384] = ACTIONS(289),
    [anon_sym_ES512] = ACTIONS(289),
    [anon_sym_HS256] = ACTIONS(289),
    [anon_sym_HS384] = ACTIONS(289),
    [anon_sym_HS512] = ACTIONS(289),
    [anon_sym_PS256] = ACTIONS(289),
    [anon_sym_PS384] = ACTIONS(289),
    [anon_sym_PS512] = ACTIONS(289),
    [anon_sym_RS256] = ACTIONS(289),
    [anon_sym_RS384] = ACTIONS(289),
    [anon_sym_RS512] = ACTIONS(289),
    [aux_sym_function_token1] = ACTIONS(287),
    [aux_sym_function_token2] = ACTIONS(287),
    [anon_sym_count] = ACTIONS(289),
    [aux_sym_function_token3] = ACTIONS(287),
    [aux_sym_function_token4] = ACTIONS(287),
    [aux_sym_function_token5] = ACTIONS(287),
    [aux_sym_function_token6] = ACTIONS(287),
    [aux_sym_function_token7] = ACTIONS(287),
    [aux_sym_function_token8] = ACTIONS(287),
    [aux_sym_function_token9] = ACTIONS(287),
    [aux_sym_function_token10] = ACTIONS(289),
    [aux_sym_function_token11] = ACTIONS(287),
    [aux_sym_function_token12] = ACTIONS(289),
    [aux_sym_function_token13] = ACTIONS(287),
    [aux_sym_function_token14] = ACTIONS(287),
    [aux_sym_function_token15] = ACTIONS(287),
    [aux_sym_function_token16] = ACTIONS(289),
    [aux_sym_bool_token1] = ACTIONS(289),
    [aux_sym_bool_token2] = ACTIONS(289),
    [aux_sym_nothing_token1] = ACTIONS(289),
    [aux_sym_nothing_token2] = ACTIONS(289),
    [sym_variable] = ACTIONS(287),
    [sym_comment] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(291),
    [aux_sym_future_token1] = ACTIONS(291),
    [aux_sym_casting_token1] = ACTIONS(291),
    [aux_sym_property_token1] = ACTIONS(293),
    [aux_sym_duration_token1] = ACTIONS(293),
    [aux_sym_constant_token1] = ACTIONS(291),
    [aux_sym_number_token1] = ACTIONS(293),
    [aux_sym_record_token1] = ACTIONS(291),
    [aux_sym_record_token2] = ACTIONS(291),
    [sym_keyword] = ACTIONS(293),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [aux_sym_operator_token1] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [aux_sym_operator_token2] = ACTIONS(293),
    [anon_sym_QMARK_QMARK] = ACTIONS(291),
    [anon_sym_QMARK_COLON] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(293),
    [aux_sym_operator_token3] = ACTIONS(293),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_ISNOT] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_QMARK_EQ] = ACTIONS(291),
    [anon_sym_STAR_EQ] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_BANG_TILDE] = ACTIONS(291),
    [anon_sym_QMARK_TILDE] = ACTIONS(291),
    [anon_sym_STAR_TILDE] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [aux_sym_operator_token4] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_u00f7] = ACTIONS(291),
    [anon_sym_STAR_STAR] = ACTIONS(291),
    [aux_sym_operator_token5] = ACTIONS(293),
    [aux_sym_operator_token6] = ACTIONS(293),
    [anon_sym_u220b] = ACTIONS(291),
    [aux_sym_operator_token7] = ACTIONS(293),
    [anon_sym_u220c] = ACTIONS(291),
    [aux_sym_operator_token8] = ACTIONS(293),
    [anon_sym_u2287] = ACTIONS(291),
    [aux_sym_operator_token9] = ACTIONS(293),
    [anon_sym_u2283] = ACTIONS(291),
    [aux_sym_operator_token10] = ACTIONS(293),
    [anon_sym_u2285] = ACTIONS(291),
    [aux_sym_operator_token11] = ACTIONS(293),
    [anon_sym_u2208] = ACTIONS(291),
    [aux_sym_operator_token12] = ACTIONS(293),
    [anon_sym_NOTIN] = ACTIONS(291),
    [anon_sym_u2209] = ACTIONS(291),
    [aux_sym_operator_token13] = ACTIONS(293),
    [anon_sym_u2286] = ACTIONS(291),
    [aux_sym_operator_token14] = ACTIONS(293),
    [anon_sym_u2282] = ACTIONS(291),
    [aux_sym_operator_token15] = ACTIONS(293),
    [anon_sym_u2284] = ACTIONS(291),
    [aux_sym_operator_token16] = ACTIONS(293),
    [aux_sym_operator_token17] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_LT_DASH] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_any] = ACTIONS(293),
    [anon_sym_array] = ACTIONS(293),
    [anon_sym_bool] = ACTIONS(293),
    [anon_sym_datetime] = ACTIONS(293),
    [anon_sym_decimal] = ACTIONS(293),
    [anon_sym_duration] = ACTIONS(293),
    [anon_sym_float] = ACTIONS(293),
    [anon_sym_int] = ACTIONS(293),
    [anon_sym_number] = ACTIONS(293),
    [anon_sym_object] = ACTIONS(293),
    [anon_sym_string] = ACTIONS(293),
    [anon_sym_record] = ACTIONS(293),
    [anon_sym_geometry] = ACTIONS(293),
    [anon_sym_EDDSA] = ACTIONS(293),
    [anon_sym_ES256] = ACTIONS(293),
    [anon_sym_ES384] = ACTIONS(293),
    [anon_sym_ES512] = ACTIONS(293),
    [anon_sym_HS256] = ACTIONS(293),
    [anon_sym_HS384] = ACTIONS(293),
    [anon_sym_HS512] = ACTIONS(293),
    [anon_sym_PS256] = ACTIONS(293),
    [anon_sym_PS384] = ACTIONS(293),
    [anon_sym_PS512] = ACTIONS(293),
    [anon_sym_RS256] = ACTIONS(293),
    [anon_sym_RS384] = ACTIONS(293),
    [anon_sym_RS512] = ACTIONS(293),
    [aux_sym_function_token1] = ACTIONS(291),
    [aux_sym_function_token2] = ACTIONS(291),
    [anon_sym_count] = ACTIONS(293),
    [aux_sym_function_token3] = ACTIONS(291),
    [aux_sym_function_token4] = ACTIONS(291),
    [aux_sym_function_token5] = ACTIONS(291),
    [aux_sym_function_token6] = ACTIONS(291),
    [aux_sym_function_token7] = ACTIONS(291),
    [aux_sym_function_token8] = ACTIONS(291),
    [aux_sym_function_token9] = ACTIONS(291),
    [aux_sym_function_token10] = ACTIONS(293),
    [aux_sym_function_token11] = ACTIONS(291),
    [aux_sym_function_token12] = ACTIONS(293),
    [aux_sym_function_token13] = ACTIONS(291),
    [aux_sym_function_token14] = ACTIONS(291),
    [aux_sym_function_token15] = ACTIONS(291),
    [aux_sym_function_token16] = ACTIONS(293),
    [aux_sym_bool_token1] = ACTIONS(293),
    [aux_sym_bool_token2] = ACTIONS(293),
    [aux_sym_nothing_token1] = ACTIONS(293),
    [aux_sym_nothing_token2] = ACTIONS(293),
    [sym_variable] = ACTIONS(291),
    [sym_comment] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(295),
    [aux_sym_future_token1] = ACTIONS(295),
    [aux_sym_casting_token1] = ACTIONS(295),
    [aux_sym_property_token1] = ACTIONS(297),
    [aux_sym_duration_token1] = ACTIONS(297),
    [aux_sym_constant_token1] = ACTIONS(295),
    [aux_sym_number_token1] = ACTIONS(297),
    [aux_sym_record_token1] = ACTIONS(295),
    [aux_sym_record_token2] = ACTIONS(295),
    [sym_keyword] = ACTIONS(297),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [aux_sym_operator_token1] = ACTIONS(297),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [aux_sym_operator_token2] = ACTIONS(297),
    [anon_sym_QMARK_QMARK] = ACTIONS(295),
    [anon_sym_QMARK_COLON] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [aux_sym_operator_token3] = ACTIONS(297),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_ISNOT] = ACTIONS(295),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_QMARK_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_BANG_TILDE] = ACTIONS(295),
    [anon_sym_QMARK_TILDE] = ACTIONS(295),
    [anon_sym_STAR_TILDE] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [aux_sym_operator_token4] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_u00f7] = ACTIONS(295),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [aux_sym_operator_token5] = ACTIONS(297),
    [aux_sym_operator_token6] = ACTIONS(297),
    [anon_sym_u220b] = ACTIONS(295),
    [aux_sym_operator_token7] = ACTIONS(297),
    [anon_sym_u220c] = ACTIONS(295),
    [aux_sym_operator_token8] = ACTIONS(297),
    [anon_sym_u2287] = ACTIONS(295),
    [aux_sym_operator_token9] = ACTIONS(297),
    [anon_sym_u2283] = ACTIONS(295),
    [aux_sym_operator_token10] = ACTIONS(297),
    [anon_sym_u2285] = ACTIONS(295),
    [aux_sym_operator_token11] = ACTIONS(297),
    [anon_sym_u2208] = ACTIONS(295),
    [aux_sym_operator_token12] = ACTIONS(297),
    [anon_sym_NOTIN] = ACTIONS(295),
    [anon_sym_u2209] = ACTIONS(295),
    [aux_sym_operator_token13] = ACTIONS(297),
    [anon_sym_u2286] = ACTIONS(295),
    [aux_sym_operator_token14] = ACTIONS(297),
    [anon_sym_u2282] = ACTIONS(295),
    [aux_sym_operator_token15] = ACTIONS(297),
    [anon_sym_u2284] = ACTIONS(295),
    [aux_sym_operator_token16] = ACTIONS(297),
    [aux_sym_operator_token17] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_LT_DASH] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_any] = ACTIONS(297),
    [anon_sym_array] = ACTIONS(297),
    [anon_sym_bool] = ACTIONS(297),
    [anon_sym_datetime] = ACTIONS(297),
    [anon_sym_decimal] = ACTIONS(297),
    [anon_sym_duration] = ACTIONS(297),
    [anon_sym_float] = ACTIONS(297),
    [anon_sym_int] = ACTIONS(297),
    [anon_sym_number] = ACTIONS(297),
    [anon_sym_object] = ACTIONS(297),
    [anon_sym_string] = ACTIONS(297),
    [anon_sym_record] = ACTIONS(297),
    [anon_sym_geometry] = ACTIONS(297),
    [anon_sym_EDDSA] = ACTIONS(297),
    [anon_sym_ES256] = ACTIONS(297),
    [anon_sym_ES384] = ACTIONS(297),
    [anon_sym_ES512] = ACTIONS(297),
    [anon_sym_HS256] = ACTIONS(297),
    [anon_sym_HS384] = ACTIONS(297),
    [anon_sym_HS512] = ACTIONS(297),
    [anon_sym_PS256] = ACTIONS(297),
    [anon_sym_PS384] = ACTIONS(297),
    [anon_sym_PS512] = ACTIONS(297),
    [anon_sym_RS256] = ACTIONS(297),
    [anon_sym_RS384] = ACTIONS(297),
    [anon_sym_RS512] = ACTIONS(297),
    [aux_sym_function_token1] = ACTIONS(295),
    [aux_sym_function_token2] = ACTIONS(295),
    [anon_sym_count] = ACTIONS(297),
    [aux_sym_function_token3] = ACTIONS(295),
    [aux_sym_function_token4] = ACTIONS(295),
    [aux_sym_function_token5] = ACTIONS(295),
    [aux_sym_function_token6] = ACTIONS(295),
    [aux_sym_function_token7] = ACTIONS(295),
    [aux_sym_function_token8] = ACTIONS(295),
    [aux_sym_function_token9] = ACTIONS(295),
    [aux_sym_function_token10] = ACTIONS(297),
    [aux_sym_function_token11] = ACTIONS(295),
    [aux_sym_function_token12] = ACTIONS(297),
    [aux_sym_function_token13] = ACTIONS(295),
    [aux_sym_function_token14] = ACTIONS(295),
    [aux_sym_function_token15] = ACTIONS(295),
    [aux_sym_function_token16] = ACTIONS(297),
    [aux_sym_bool_token1] = ACTIONS(297),
    [aux_sym_bool_token2] = ACTIONS(297),
    [aux_sym_nothing_token1] = ACTIONS(297),
    [aux_sym_nothing_token2] = ACTIONS(297),
    [sym_variable] = ACTIONS(295),
    [sym_comment] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(299),
    [aux_sym_future_token1] = ACTIONS(299),
    [aux_sym_casting_token1] = ACTIONS(299),
    [aux_sym_property_token1] = ACTIONS(301),
    [aux_sym_duration_token1] = ACTIONS(301),
    [aux_sym_constant_token1] = ACTIONS(299),
    [aux_sym_number_token1] = ACTIONS(301),
    [aux_sym_record_token1] = ACTIONS(299),
    [aux_sym_record_token2] = ACTIONS(299),
    [sym_keyword] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [aux_sym_operator_token1] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [aux_sym_operator_token2] = ACTIONS(301),
    [anon_sym_QMARK_QMARK] = ACTIONS(299),
    [anon_sym_QMARK_COLON] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [aux_sym_operator_token3] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(299),
    [anon_sym_ISNOT] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_QMARK_EQ] = ACTIONS(299),
    [anon_sym_STAR_EQ] = ACTIONS(299),
    [anon_sym_TILDE] = ACTIONS(299),
    [anon_sym_BANG_TILDE] = ACTIONS(299),
    [anon_sym_QMARK_TILDE] = ACTIONS(299),
    [anon_sym_STAR_TILDE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [aux_sym_operator_token4] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_u00f7] = ACTIONS(299),
    [anon_sym_STAR_STAR] = ACTIONS(299),
    [aux_sym_operator_token5] = ACTIONS(301),
    [aux_sym_operator_token6] = ACTIONS(301),
    [anon_sym_u220b] = ACTIONS(299),
    [aux_sym_operator_token7] = ACTIONS(301),
    [anon_sym_u220c] = ACTIONS(299),
    [aux_sym_operator_token8] = ACTIONS(301),
    [anon_sym_u2287] = ACTIONS(299),
    [aux_sym_operator_token9] = ACTIONS(301),
    [anon_sym_u2283] = ACTIONS(299),
    [aux_sym_operator_token10] = ACTIONS(301),
    [anon_sym_u2285] = ACTIONS(299),
    [aux_sym_operator_token11] = ACTIONS(301),
    [anon_sym_u2208] = ACTIONS(299),
    [aux_sym_operator_token12] = ACTIONS(301),
    [anon_sym_NOTIN] = ACTIONS(299),
    [anon_sym_u2209] = ACTIONS(299),
    [aux_sym_operator_token13] = ACTIONS(301),
    [anon_sym_u2286] = ACTIONS(299),
    [aux_sym_operator_token14] = ACTIONS(301),
    [anon_sym_u2282] = ACTIONS(299),
    [aux_sym_operator_token15] = ACTIONS(301),
    [anon_sym_u2284] = ACTIONS(299),
    [aux_sym_operator_token16] = ACTIONS(301),
    [aux_sym_operator_token17] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_DASH_GT] = ACTIONS(299),
    [anon_sym_LT_DASH] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_any] = ACTIONS(301),
    [anon_sym_array] = ACTIONS(301),
    [anon_sym_bool] = ACTIONS(301),
    [anon_sym_datetime] = ACTIONS(301),
    [anon_sym_decimal] = ACTIONS(301),
    [anon_sym_duration] = ACTIONS(301),
    [anon_sym_float] = ACTIONS(301),
    [anon_sym_int] = ACTIONS(301),
    [anon_sym_number] = ACTIONS(301),
    [anon_sym_object] = ACTIONS(301),
    [anon_sym_string] = ACTIONS(301),
    [anon_sym_record] = ACTIONS(301),
    [anon_sym_geometry] = ACTIONS(301),
    [anon_sym_EDDSA] = ACTIONS(301),
    [anon_sym_ES256] = ACTIONS(301),
    [anon_sym_ES384] = ACTIONS(301),
    [anon_sym_ES512] = ACTIONS(301),
    [anon_sym_HS256] = ACTIONS(301),
    [anon_sym_HS384] = ACTIONS(301),
    [anon_sym_HS512] = ACTIONS(301),
    [anon_sym_PS256] = ACTIONS(301),
    [anon_sym_PS384] = ACTIONS(301),
    [anon_sym_PS512] = ACTIONS(301),
    [anon_sym_RS256] = ACTIONS(301),
    [anon_sym_RS384] = ACTIONS(301),
    [anon_sym_RS512] = ACTIONS(301),
    [aux_sym_function_token1] = ACTIONS(299),
    [aux_sym_function_token2] = ACTIONS(299),
    [anon_sym_count] = ACTIONS(301),
    [aux_sym_function_token3] = ACTIONS(299),
    [aux_sym_function_token4] = ACTIONS(299),
    [aux_sym_function_token5] = ACTIONS(299),
    [aux_sym_function_token6] = ACTIONS(299),
    [aux_sym_function_token7] = ACTIONS(299),
    [aux_sym_function_token8] = ACTIONS(299),
    [aux_sym_function_token9] = ACTIONS(299),
    [aux_sym_function_token10] = ACTIONS(301),
    [aux_sym_function_token11] = ACTIONS(299),
    [aux_sym_function_token12] = ACTIONS(301),
    [aux_sym_function_token13] = ACTIONS(299),
    [aux_sym_function_token14] = ACTIONS(299),
    [aux_sym_function_token15] = ACTIONS(299),
    [aux_sym_function_token16] = ACTIONS(301),
    [aux_sym_bool_token1] = ACTIONS(301),
    [aux_sym_bool_token2] = ACTIONS(301),
    [aux_sym_nothing_token1] = ACTIONS(301),
    [aux_sym_nothing_token2] = ACTIONS(301),
    [sym_variable] = ACTIONS(299),
    [sym_comment] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(303),
    [aux_sym_future_token1] = ACTIONS(303),
    [aux_sym_casting_token1] = ACTIONS(303),
    [aux_sym_property_token1] = ACTIONS(305),
    [aux_sym_duration_token1] = ACTIONS(305),
    [aux_sym_constant_token1] = ACTIONS(303),
    [aux_sym_number_token1] = ACTIONS(305),
    [aux_sym_record_token1] = ACTIONS(303),
    [aux_sym_record_token2] = ACTIONS(303),
    [sym_keyword] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [aux_sym_operator_token1] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [aux_sym_operator_token2] = ACTIONS(305),
    [anon_sym_QMARK_QMARK] = ACTIONS(303),
    [anon_sym_QMARK_COLON] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [aux_sym_operator_token3] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_ISNOT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [anon_sym_QMARK_EQ] = ACTIONS(303),
    [anon_sym_STAR_EQ] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_BANG_TILDE] = ACTIONS(303),
    [anon_sym_QMARK_TILDE] = ACTIONS(303),
    [anon_sym_STAR_TILDE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [aux_sym_operator_token4] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_u00f7] = ACTIONS(303),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [aux_sym_operator_token5] = ACTIONS(305),
    [aux_sym_operator_token6] = ACTIONS(305),
    [anon_sym_u220b] = ACTIONS(303),
    [aux_sym_operator_token7] = ACTIONS(305),
    [anon_sym_u220c] = ACTIONS(303),
    [aux_sym_operator_token8] = ACTIONS(305),
    [anon_sym_u2287] = ACTIONS(303),
    [aux_sym_operator_token9] = ACTIONS(305),
    [anon_sym_u2283] = ACTIONS(303),
    [aux_sym_operator_token10] = ACTIONS(305),
    [anon_sym_u2285] = ACTIONS(303),
    [aux_sym_operator_token11] = ACTIONS(305),
    [anon_sym_u2208] = ACTIONS(303),
    [aux_sym_operator_token12] = ACTIONS(305),
    [anon_sym_NOTIN] = ACTIONS(303),
    [anon_sym_u2209] = ACTIONS(303),
    [aux_sym_operator_token13] = ACTIONS(305),
    [anon_sym_u2286] = ACTIONS(303),
    [aux_sym_operator_token14] = ACTIONS(305),
    [anon_sym_u2282] = ACTIONS(303),
    [aux_sym_operator_token15] = ACTIONS(305),
    [anon_sym_u2284] = ACTIONS(303),
    [aux_sym_operator_token16] = ACTIONS(305),
    [aux_sym_operator_token17] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_LT_DASH] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_any] = ACTIONS(305),
    [anon_sym_array] = ACTIONS(305),
    [anon_sym_bool] = ACTIONS(305),
    [anon_sym_datetime] = ACTIONS(305),
    [anon_sym_decimal] = ACTIONS(305),
    [anon_sym_duration] = ACTIONS(305),
    [anon_sym_float] = ACTIONS(305),
    [anon_sym_int] = ACTIONS(305),
    [anon_sym_number] = ACTIONS(305),
    [anon_sym_object] = ACTIONS(305),
    [anon_sym_string] = ACTIONS(305),
    [anon_sym_record] = ACTIONS(305),
    [anon_sym_geometry] = ACTIONS(305),
    [anon_sym_EDDSA] = ACTIONS(305),
    [anon_sym_ES256] = ACTIONS(305),
    [anon_sym_ES384] = ACTIONS(305),
    [anon_sym_ES512] = ACTIONS(305),
    [anon_sym_HS256] = ACTIONS(305),
    [anon_sym_HS384] = ACTIONS(305),
    [anon_sym_HS512] = ACTIONS(305),
    [anon_sym_PS256] = ACTIONS(305),
    [anon_sym_PS384] = ACTIONS(305),
    [anon_sym_PS512] = ACTIONS(305),
    [anon_sym_RS256] = ACTIONS(305),
    [anon_sym_RS384] = ACTIONS(305),
    [anon_sym_RS512] = ACTIONS(305),
    [aux_sym_function_token1] = ACTIONS(303),
    [aux_sym_function_token2] = ACTIONS(303),
    [anon_sym_count] = ACTIONS(305),
    [aux_sym_function_token3] = ACTIONS(303),
    [aux_sym_function_token4] = ACTIONS(303),
    [aux_sym_function_token5] = ACTIONS(303),
    [aux_sym_function_token6] = ACTIONS(303),
    [aux_sym_function_token7] = ACTIONS(303),
    [aux_sym_function_token8] = ACTIONS(303),
    [aux_sym_function_token9] = ACTIONS(303),
    [aux_sym_function_token10] = ACTIONS(305),
    [aux_sym_function_token11] = ACTIONS(303),
    [aux_sym_function_token12] = ACTIONS(305),
    [aux_sym_function_token13] = ACTIONS(303),
    [aux_sym_function_token14] = ACTIONS(303),
    [aux_sym_function_token15] = ACTIONS(303),
    [aux_sym_function_token16] = ACTIONS(305),
    [aux_sym_bool_token1] = ACTIONS(305),
    [aux_sym_bool_token2] = ACTIONS(305),
    [aux_sym_nothing_token1] = ACTIONS(305),
    [aux_sym_nothing_token2] = ACTIONS(305),
    [sym_variable] = ACTIONS(303),
    [sym_comment] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(307),
    [aux_sym_future_token1] = ACTIONS(307),
    [aux_sym_casting_token1] = ACTIONS(307),
    [aux_sym_property_token1] = ACTIONS(309),
    [aux_sym_duration_token1] = ACTIONS(309),
    [aux_sym_constant_token1] = ACTIONS(307),
    [aux_sym_number_token1] = ACTIONS(309),
    [aux_sym_record_token1] = ACTIONS(307),
    [aux_sym_record_token2] = ACTIONS(307),
    [sym_keyword] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [aux_sym_operator_token1] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [aux_sym_operator_token2] = ACTIONS(309),
    [anon_sym_QMARK_QMARK] = ACTIONS(307),
    [anon_sym_QMARK_COLON] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(309),
    [aux_sym_operator_token3] = ACTIONS(309),
    [anon_sym_BANG_EQ] = ACTIONS(307),
    [anon_sym_ISNOT] = ACTIONS(307),
    [anon_sym_EQ_EQ] = ACTIONS(307),
    [anon_sym_QMARK_EQ] = ACTIONS(307),
    [anon_sym_STAR_EQ] = ACTIONS(307),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_BANG_TILDE] = ACTIONS(307),
    [anon_sym_QMARK_TILDE] = ACTIONS(307),
    [anon_sym_STAR_TILDE] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(309),
    [aux_sym_operator_token4] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_u00f7] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(307),
    [aux_sym_operator_token5] = ACTIONS(309),
    [aux_sym_operator_token6] = ACTIONS(309),
    [anon_sym_u220b] = ACTIONS(307),
    [aux_sym_operator_token7] = ACTIONS(309),
    [anon_sym_u220c] = ACTIONS(307),
    [aux_sym_operator_token8] = ACTIONS(309),
    [anon_sym_u2287] = ACTIONS(307),
    [aux_sym_operator_token9] = ACTIONS(309),
    [anon_sym_u2283] = ACTIONS(307),
    [aux_sym_operator_token10] = ACTIONS(309),
    [anon_sym_u2285] = ACTIONS(307),
    [aux_sym_operator_token11] = ACTIONS(309),
    [anon_sym_u2208] = ACTIONS(307),
    [aux_sym_operator_token12] = ACTIONS(309),
    [anon_sym_NOTIN] = ACTIONS(307),
    [anon_sym_u2209] = ACTIONS(307),
    [aux_sym_operator_token13] = ACTIONS(309),
    [anon_sym_u2286] = ACTIONS(307),
    [aux_sym_operator_token14] = ACTIONS(309),
    [anon_sym_u2282] = ACTIONS(307),
    [aux_sym_operator_token15] = ACTIONS(309),
    [anon_sym_u2284] = ACTIONS(307),
    [aux_sym_operator_token16] = ACTIONS(309),
    [aux_sym_operator_token17] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_DASH_GT] = ACTIONS(307),
    [anon_sym_LT_DASH] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_any] = ACTIONS(309),
    [anon_sym_array] = ACTIONS(309),
    [anon_sym_bool] = ACTIONS(309),
    [anon_sym_datetime] = ACTIONS(309),
    [anon_sym_decimal] = ACTIONS(309),
    [anon_sym_duration] = ACTIONS(309),
    [anon_sym_float] = ACTIONS(309),
    [anon_sym_int] = ACTIONS(309),
    [anon_sym_number] = ACTIONS(309),
    [anon_sym_object] = ACTIONS(309),
    [anon_sym_string] = ACTIONS(309),
    [anon_sym_record] = ACTIONS(309),
    [anon_sym_geometry] = ACTIONS(309),
    [anon_sym_EDDSA] = ACTIONS(309),
    [anon_sym_ES256] = ACTIONS(309),
    [anon_sym_ES384] = ACTIONS(309),
    [anon_sym_ES512] = ACTIONS(309),
    [anon_sym_HS256] = ACTIONS(309),
    [anon_sym_HS384] = ACTIONS(309),
    [anon_sym_HS512] = ACTIONS(309),
    [anon_sym_PS256] = ACTIONS(309),
    [anon_sym_PS384] = ACTIONS(309),
    [anon_sym_PS512] = ACTIONS(309),
    [anon_sym_RS256] = ACTIONS(309),
    [anon_sym_RS384] = ACTIONS(309),
    [anon_sym_RS512] = ACTIONS(309),
    [aux_sym_function_token1] = ACTIONS(307),
    [aux_sym_function_token2] = ACTIONS(307),
    [anon_sym_count] = ACTIONS(309),
    [aux_sym_function_token3] = ACTIONS(307),
    [aux_sym_function_token4] = ACTIONS(307),
    [aux_sym_function_token5] = ACTIONS(307),
    [aux_sym_function_token6] = ACTIONS(307),
    [aux_sym_function_token7] = ACTIONS(307),
    [aux_sym_function_token8] = ACTIONS(307),
    [aux_sym_function_token9] = ACTIONS(307),
    [aux_sym_function_token10] = ACTIONS(309),
    [aux_sym_function_token11] = ACTIONS(307),
    [aux_sym_function_token12] = ACTIONS(309),
    [aux_sym_function_token13] = ACTIONS(307),
    [aux_sym_function_token14] = ACTIONS(307),
    [aux_sym_function_token15] = ACTIONS(307),
    [aux_sym_function_token16] = ACTIONS(309),
    [aux_sym_bool_token1] = ACTIONS(309),
    [aux_sym_bool_token2] = ACTIONS(309),
    [aux_sym_nothing_token1] = ACTIONS(309),
    [aux_sym_nothing_token2] = ACTIONS(309),
    [sym_variable] = ACTIONS(307),
    [sym_comment] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(311),
    [aux_sym_future_token1] = ACTIONS(311),
    [aux_sym_casting_token1] = ACTIONS(311),
    [aux_sym_property_token1] = ACTIONS(313),
    [aux_sym_duration_token1] = ACTIONS(313),
    [aux_sym_constant_token1] = ACTIONS(311),
    [aux_sym_number_token1] = ACTIONS(313),
    [aux_sym_record_token1] = ACTIONS(311),
    [aux_sym_record_token2] = ACTIONS(311),
    [sym_keyword] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [aux_sym_operator_token1] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [aux_sym_operator_token2] = ACTIONS(313),
    [anon_sym_QMARK_QMARK] = ACTIONS(311),
    [anon_sym_QMARK_COLON] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(313),
    [aux_sym_operator_token3] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_ISNOT] = ACTIONS(311),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_QMARK_EQ] = ACTIONS(311),
    [anon_sym_STAR_EQ] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BANG_TILDE] = ACTIONS(311),
    [anon_sym_QMARK_TILDE] = ACTIONS(311),
    [anon_sym_STAR_TILDE] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(313),
    [aux_sym_operator_token4] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_u00f7] = ACTIONS(311),
    [anon_sym_STAR_STAR] = ACTIONS(311),
    [aux_sym_operator_token5] = ACTIONS(313),
    [aux_sym_operator_token6] = ACTIONS(313),
    [anon_sym_u220b] = ACTIONS(311),
    [aux_sym_operator_token7] = ACTIONS(313),
    [anon_sym_u220c] = ACTIONS(311),
    [aux_sym_operator_token8] = ACTIONS(313),
    [anon_sym_u2287] = ACTIONS(311),
    [aux_sym_operator_token9] = ACTIONS(313),
    [anon_sym_u2283] = ACTIONS(311),
    [aux_sym_operator_token10] = ACTIONS(313),
    [anon_sym_u2285] = ACTIONS(311),
    [aux_sym_operator_token11] = ACTIONS(313),
    [anon_sym_u2208] = ACTIONS(311),
    [aux_sym_operator_token12] = ACTIONS(313),
    [anon_sym_NOTIN] = ACTIONS(311),
    [anon_sym_u2209] = ACTIONS(311),
    [aux_sym_operator_token13] = ACTIONS(313),
    [anon_sym_u2286] = ACTIONS(311),
    [aux_sym_operator_token14] = ACTIONS(313),
    [anon_sym_u2282] = ACTIONS(311),
    [aux_sym_operator_token15] = ACTIONS(313),
    [anon_sym_u2284] = ACTIONS(311),
    [aux_sym_operator_token16] = ACTIONS(313),
    [aux_sym_operator_token17] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_DASH_GT] = ACTIONS(311),
    [anon_sym_LT_DASH] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_any] = ACTIONS(313),
    [anon_sym_array] = ACTIONS(313),
    [anon_sym_bool] = ACTIONS(313),
    [anon_sym_datetime] = ACTIONS(313),
    [anon_sym_decimal] = ACTIONS(313),
    [anon_sym_duration] = ACTIONS(313),
    [anon_sym_float] = ACTIONS(313),
    [anon_sym_int] = ACTIONS(313),
    [anon_sym_number] = ACTIONS(313),
    [anon_sym_object] = ACTIONS(313),
    [anon_sym_string] = ACTIONS(313),
    [anon_sym_record] = ACTIONS(313),
    [anon_sym_geometry] = ACTIONS(313),
    [anon_sym_EDDSA] = ACTIONS(313),
    [anon_sym_ES256] = ACTIONS(313),
    [anon_sym_ES384] = ACTIONS(313),
    [anon_sym_ES512] = ACTIONS(313),
    [anon_sym_HS256] = ACTIONS(313),
    [anon_sym_HS384] = ACTIONS(313),
    [anon_sym_HS512] = ACTIONS(313),
    [anon_sym_PS256] = ACTIONS(313),
    [anon_sym_PS384] = ACTIONS(313),
    [anon_sym_PS512] = ACTIONS(313),
    [anon_sym_RS256] = ACTIONS(313),
    [anon_sym_RS384] = ACTIONS(313),
    [anon_sym_RS512] = ACTIONS(313),
    [aux_sym_function_token1] = ACTIONS(311),
    [aux_sym_function_token2] = ACTIONS(311),
    [anon_sym_count] = ACTIONS(313),
    [aux_sym_function_token3] = ACTIONS(311),
    [aux_sym_function_token4] = ACTIONS(311),
    [aux_sym_function_token5] = ACTIONS(311),
    [aux_sym_function_token6] = ACTIONS(311),
    [aux_sym_function_token7] = ACTIONS(311),
    [aux_sym_function_token8] = ACTIONS(311),
    [aux_sym_function_token9] = ACTIONS(311),
    [aux_sym_function_token10] = ACTIONS(313),
    [aux_sym_function_token11] = ACTIONS(311),
    [aux_sym_function_token12] = ACTIONS(313),
    [aux_sym_function_token13] = ACTIONS(311),
    [aux_sym_function_token14] = ACTIONS(311),
    [aux_sym_function_token15] = ACTIONS(311),
    [aux_sym_function_token16] = ACTIONS(313),
    [aux_sym_bool_token1] = ACTIONS(313),
    [aux_sym_bool_token2] = ACTIONS(313),
    [aux_sym_nothing_token1] = ACTIONS(313),
    [aux_sym_nothing_token2] = ACTIONS(313),
    [sym_variable] = ACTIONS(311),
    [sym_comment] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(315),
    [aux_sym_future_token1] = ACTIONS(315),
    [aux_sym_casting_token1] = ACTIONS(315),
    [aux_sym_property_token1] = ACTIONS(317),
    [aux_sym_duration_token1] = ACTIONS(317),
    [aux_sym_constant_token1] = ACTIONS(315),
    [aux_sym_number_token1] = ACTIONS(317),
    [aux_sym_record_token1] = ACTIONS(315),
    [aux_sym_record_token2] = ACTIONS(315),
    [sym_keyword] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [aux_sym_operator_token1] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [aux_sym_operator_token2] = ACTIONS(317),
    [anon_sym_QMARK_QMARK] = ACTIONS(315),
    [anon_sym_QMARK_COLON] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(317),
    [aux_sym_operator_token3] = ACTIONS(317),
    [anon_sym_BANG_EQ] = ACTIONS(315),
    [anon_sym_ISNOT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(315),
    [anon_sym_QMARK_EQ] = ACTIONS(315),
    [anon_sym_STAR_EQ] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BANG_TILDE] = ACTIONS(315),
    [anon_sym_QMARK_TILDE] = ACTIONS(315),
    [anon_sym_STAR_TILDE] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_LT_EQ] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_EQ] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [aux_sym_operator_token4] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_u00f7] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(315),
    [aux_sym_operator_token5] = ACTIONS(317),
    [aux_sym_operator_token6] = ACTIONS(317),
    [anon_sym_u220b] = ACTIONS(315),
    [aux_sym_operator_token7] = ACTIONS(317),
    [anon_sym_u220c] = ACTIONS(315),
    [aux_sym_operator_token8] = ACTIONS(317),
    [anon_sym_u2287] = ACTIONS(315),
    [aux_sym_operator_token9] = ACTIONS(317),
    [anon_sym_u2283] = ACTIONS(315),
    [aux_sym_operator_token10] = ACTIONS(317),
    [anon_sym_u2285] = ACTIONS(315),
    [aux_sym_operator_token11] = ACTIONS(317),
    [anon_sym_u2208] = ACTIONS(315),
    [aux_sym_operator_token12] = ACTIONS(317),
    [anon_sym_NOTIN] = ACTIONS(315),
    [anon_sym_u2209] = ACTIONS(315),
    [aux_sym_operator_token13] = ACTIONS(317),
    [anon_sym_u2286] = ACTIONS(315),
    [aux_sym_operator_token14] = ACTIONS(317),
    [anon_sym_u2282] = ACTIONS(315),
    [aux_sym_operator_token15] = ACTIONS(317),
    [anon_sym_u2284] = ACTIONS(315),
    [aux_sym_operator_token16] = ACTIONS(317),
    [aux_sym_operator_token17] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_DASH_GT] = ACTIONS(315),
    [anon_sym_LT_DASH] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_any] = ACTIONS(317),
    [anon_sym_array] = ACTIONS(317),
    [anon_sym_bool] = ACTIONS(317),
    [anon_sym_datetime] = ACTIONS(317),
    [anon_sym_decimal] = ACTIONS(317),
    [anon_sym_duration] = ACTIONS(317),
    [anon_sym_float] = ACTIONS(317),
    [anon_sym_int] = ACTIONS(317),
    [anon_sym_number] = ACTIONS(317),
    [anon_sym_object] = ACTIONS(317),
    [anon_sym_string] = ACTIONS(317),
    [anon_sym_record] = ACTIONS(317),
    [anon_sym_geometry] = ACTIONS(317),
    [anon_sym_EDDSA] = ACTIONS(317),
    [anon_sym_ES256] = ACTIONS(317),
    [anon_sym_ES384] = ACTIONS(317),
    [anon_sym_ES512] = ACTIONS(317),
    [anon_sym_HS256] = ACTIONS(317),
    [anon_sym_HS384] = ACTIONS(317),
    [anon_sym_HS512] = ACTIONS(317),
    [anon_sym_PS256] = ACTIONS(317),
    [anon_sym_PS384] = ACTIONS(317),
    [anon_sym_PS512] = ACTIONS(317),
    [anon_sym_RS256] = ACTIONS(317),
    [anon_sym_RS384] = ACTIONS(317),
    [anon_sym_RS512] = ACTIONS(317),
    [aux_sym_function_token1] = ACTIONS(315),
    [aux_sym_function_token2] = ACTIONS(315),
    [anon_sym_count] = ACTIONS(317),
    [aux_sym_function_token3] = ACTIONS(315),
    [aux_sym_function_token4] = ACTIONS(315),
    [aux_sym_function_token5] = ACTIONS(315),
    [aux_sym_function_token6] = ACTIONS(315),
    [aux_sym_function_token7] = ACTIONS(315),
    [aux_sym_function_token8] = ACTIONS(315),
    [aux_sym_function_token9] = ACTIONS(315),
    [aux_sym_function_token10] = ACTIONS(317),
    [aux_sym_function_token11] = ACTIONS(315),
    [aux_sym_function_token12] = ACTIONS(317),
    [aux_sym_function_token13] = ACTIONS(315),
    [aux_sym_function_token14] = ACTIONS(315),
    [aux_sym_function_token15] = ACTIONS(315),
    [aux_sym_function_token16] = ACTIONS(317),
    [aux_sym_bool_token1] = ACTIONS(317),
    [aux_sym_bool_token2] = ACTIONS(317),
    [aux_sym_nothing_token1] = ACTIONS(317),
    [aux_sym_nothing_token2] = ACTIONS(317),
    [sym_variable] = ACTIONS(315),
    [sym_comment] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(319),
    [aux_sym_future_token1] = ACTIONS(319),
    [aux_sym_casting_token1] = ACTIONS(319),
    [aux_sym_property_token1] = ACTIONS(321),
    [aux_sym_duration_token1] = ACTIONS(321),
    [aux_sym_constant_token1] = ACTIONS(319),
    [aux_sym_number_token1] = ACTIONS(321),
    [aux_sym_record_token1] = ACTIONS(319),
    [aux_sym_record_token2] = ACTIONS(319),
    [sym_keyword] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [aux_sym_operator_token1] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(319),
    [aux_sym_operator_token2] = ACTIONS(321),
    [anon_sym_QMARK_QMARK] = ACTIONS(319),
    [anon_sym_QMARK_COLON] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(321),
    [aux_sym_operator_token3] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_ISNOT] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [anon_sym_QMARK_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_BANG_TILDE] = ACTIONS(319),
    [anon_sym_QMARK_TILDE] = ACTIONS(319),
    [anon_sym_STAR_TILDE] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_STAR] = ACTIONS(321),
    [aux_sym_operator_token4] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_u00f7] = ACTIONS(319),
    [anon_sym_STAR_STAR] = ACTIONS(319),
    [aux_sym_operator_token5] = ACTIONS(321),
    [aux_sym_operator_token6] = ACTIONS(321),
    [anon_sym_u220b] = ACTIONS(319),
    [aux_sym_operator_token7] = ACTIONS(321),
    [anon_sym_u220c] = ACTIONS(319),
    [aux_sym_operator_token8] = ACTIONS(321),
    [anon_sym_u2287] = ACTIONS(319),
    [aux_sym_operator_token9] = ACTIONS(321),
    [anon_sym_u2283] = ACTIONS(319),
    [aux_sym_operator_token10] = ACTIONS(321),
    [anon_sym_u2285] = ACTIONS(319),
    [aux_sym_operator_token11] = ACTIONS(321),
    [anon_sym_u2208] = ACTIONS(319),
    [aux_sym_operator_token12] = ACTIONS(321),
    [anon_sym_NOTIN] = ACTIONS(319),
    [anon_sym_u2209] = ACTIONS(319),
    [aux_sym_operator_token13] = ACTIONS(321),
    [anon_sym_u2286] = ACTIONS(319),
    [aux_sym_operator_token14] = ACTIONS(321),
    [anon_sym_u2282] = ACTIONS(319),
    [aux_sym_operator_token15] = ACTIONS(321),
    [anon_sym_u2284] = ACTIONS(319),
    [aux_sym_operator_token16] = ACTIONS(321),
    [aux_sym_operator_token17] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_DASH_GT] = ACTIONS(319),
    [anon_sym_LT_DASH] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_any] = ACTIONS(321),
    [anon_sym_array] = ACTIONS(321),
    [anon_sym_bool] = ACTIONS(321),
    [anon_sym_datetime] = ACTIONS(321),
    [anon_sym_decimal] = ACTIONS(321),
    [anon_sym_duration] = ACTIONS(321),
    [anon_sym_float] = ACTIONS(321),
    [anon_sym_int] = ACTIONS(321),
    [anon_sym_number] = ACTIONS(321),
    [anon_sym_object] = ACTIONS(321),
    [anon_sym_string] = ACTIONS(321),
    [anon_sym_record] = ACTIONS(321),
    [anon_sym_geometry] = ACTIONS(321),
    [anon_sym_EDDSA] = ACTIONS(321),
    [anon_sym_ES256] = ACTIONS(321),
    [anon_sym_ES384] = ACTIONS(321),
    [anon_sym_ES512] = ACTIONS(321),
    [anon_sym_HS256] = ACTIONS(321),
    [anon_sym_HS384] = ACTIONS(321),
    [anon_sym_HS512] = ACTIONS(321),
    [anon_sym_PS256] = ACTIONS(321),
    [anon_sym_PS384] = ACTIONS(321),
    [anon_sym_PS512] = ACTIONS(321),
    [anon_sym_RS256] = ACTIONS(321),
    [anon_sym_RS384] = ACTIONS(321),
    [anon_sym_RS512] = ACTIONS(321),
    [aux_sym_function_token1] = ACTIONS(319),
    [aux_sym_function_token2] = ACTIONS(319),
    [anon_sym_count] = ACTIONS(321),
    [aux_sym_function_token3] = ACTIONS(319),
    [aux_sym_function_token4] = ACTIONS(319),
    [aux_sym_function_token5] = ACTIONS(319),
    [aux_sym_function_token6] = ACTIONS(319),
    [aux_sym_function_token7] = ACTIONS(319),
    [aux_sym_function_token8] = ACTIONS(319),
    [aux_sym_function_token9] = ACTIONS(319),
    [aux_sym_function_token10] = ACTIONS(321),
    [aux_sym_function_token11] = ACTIONS(319),
    [aux_sym_function_token12] = ACTIONS(321),
    [aux_sym_function_token13] = ACTIONS(319),
    [aux_sym_function_token14] = ACTIONS(319),
    [aux_sym_function_token15] = ACTIONS(319),
    [aux_sym_function_token16] = ACTIONS(321),
    [aux_sym_bool_token1] = ACTIONS(321),
    [aux_sym_bool_token2] = ACTIONS(321),
    [aux_sym_nothing_token1] = ACTIONS(321),
    [aux_sym_nothing_token2] = ACTIONS(321),
    [sym_variable] = ACTIONS(319),
    [sym_comment] = ACTIONS(319),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
  },
  [25] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE_SEMI] = ACTIONS(323),
    [anon_sym_RBRACE_COMMA] = ACTIONS(323),
    [aux_sym_future_token1] = ACTIONS(323),
    [aux_sym_casting_token1] = ACTIONS(323),
    [aux_sym_property_token1] = ACTIONS(325),
    [aux_sym_duration_token1] = ACTIONS(325),
    [aux_sym_constant_token1] = ACTIONS(323),
    [aux_sym_number_token1] = ACTIONS(325),
    [aux_sym_record_token1] = ACTIONS(323),
    [aux_sym_record_token2] = ACTIONS(323),
    [sym_keyword] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [aux_sym_operator_token1] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [aux_sym_operator_token2] = ACTIONS(325),
    [anon_sym_QMARK_QMARK] = ACTIONS(323),
    [anon_sym_QMARK_COLON] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(325),
    [aux_sym_operator_token3] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_ISNOT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_QMARK_EQ] = ACTIONS(323),
    [anon_sym_STAR_EQ] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_BANG_TILDE] = ACTIONS(323),
    [anon_sym_QMARK_TILDE] = ACTIONS(323),
    [anon_sym_STAR_TILDE] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(325),
    [aux_sym_operator_token4] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_u00f7] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(323),
    [aux_sym_operator_token5] = ACTIONS(325),
    [aux_sym_operator_token6] = ACTIONS(325),
    [anon_sym_u220b] = ACTIONS(323),
    [aux_sym_operator_token7] = ACTIONS(325),
    [anon_sym_u220c] = ACTIONS(323),
    [aux_sym_operator_token8] = ACTIONS(325),
    [anon_sym_u2287] = ACTIONS(323),
    [aux_sym_operator_token9] = ACTIONS(325),
    [anon_sym_u2283] = ACTIONS(323),
    [aux_sym_operator_token10] = ACTIONS(325),
    [anon_sym_u2285] = ACTIONS(323),
    [aux_sym_operator_token11] = ACTIONS(325),
    [anon_sym_u2208] = ACTIONS(323),
    [aux_sym_operator_token12] = ACTIONS(325),
    [anon_sym_NOTIN] = ACTIONS(323),
    [anon_sym_u2209] = ACTIONS(323),
    [aux_sym_operator_token13] = ACTIONS(325),
    [anon_sym_u2286] = ACTIONS(323),
    [aux_sym_operator_token14] = ACTIONS(325),
    [anon_sym_u2282] = ACTIONS(323),
    [aux_sym_operator_token15] = ACTIONS(325),
    [anon_sym_u2284] = ACTIONS(323),
    [aux_sym_operator_token16] = ACTIONS(325),
    [aux_sym_operator_token17] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_DASH_GT] = ACTIONS(323),
    [anon_sym_LT_DASH] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_any] = ACTIONS(325),
    [anon_sym_array] = ACTIONS(325),
    [anon_sym_bool] = ACTIONS(325),
    [anon_sym_datetime] = ACTIONS(325),
    [anon_sym_decimal] = ACTIONS(325),
    [anon_sym_duration] = ACTIONS(325),
    [anon_sym_float] = ACTIONS(325),
    [anon_sym_int] = ACTIONS(325),
    [anon_sym_number] = ACTIONS(325),
    [anon_sym_object] = ACTIONS(325),
    [anon_sym_string] = ACTIONS(325),
    [anon_sym_record] = ACTIONS(325),
    [anon_sym_geometry] = ACTIONS(325),
    [anon_sym_EDDSA] = ACTIONS(325),
    [anon_sym_ES256] = ACTIONS(325),
    [anon_sym_ES384] = ACTIONS(325),
    [anon_sym_ES512] = ACTIONS(325),
    [anon_sym_HS256] = ACTIONS(325),
    [anon_sym_HS384] = ACTIONS(325),
    [anon_sym_HS512] = ACTIONS(325),
    [anon_sym_PS256] = ACTIONS(325),
    [anon_sym_PS384] = ACTIONS(325),
    [anon_sym_PS512] = ACTIONS(325),
    [anon_sym_RS256] = ACTIONS(325),
    [anon_sym_RS384] = ACTIONS(325),
    [anon_sym_RS512] = ACTIONS(325),
    [aux_sym_function_token1] = ACTIONS(323),
    [aux_sym_function_token2] = ACTIONS(323),
    [anon_sym_count] = ACTIONS(325),
    [aux_sym_function_token3] = ACTIONS(323),
    [aux_sym_function_token4] = ACTIONS(323),
    [aux_sym_function_token5] = ACTIONS(323),
    [aux_sym_function_token6] = ACTIONS(323),
    [aux_sym_function_token7] = ACTIONS(323),
    [aux_sym_function_token8] = ACTIONS(323),
    [aux_sym_function_token9] = ACTIONS(323),
    [aux_sym_function_token10] = ACTIONS(325),
    [aux_sym_function_token11] = ACTIONS(323),
    [aux_sym_function_token12] = ACTIONS(325),
    [aux_sym_function_token13] = ACTIONS(323),
    [aux_sym_function_token14] = ACTIONS(323),
    [aux_sym_function_token15] = ACTIONS(323),
    [aux_sym_function_token16] = ACTIONS(325),
    [aux_sym_bool_token1] = ACTIONS(325),
    [aux_sym_bool_token2] = ACTIONS(325),
    [aux_sym_nothing_token1] = ACTIONS(325),
    [aux_sym_nothing_token2] = ACTIONS(325),
    [sym_variable] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(327),
    [aux_sym_future_token1] = ACTIONS(327),
    [aux_sym_casting_token1] = ACTIONS(327),
    [aux_sym_property_token1] = ACTIONS(329),
    [aux_sym_duration_token1] = ACTIONS(329),
    [aux_sym_constant_token1] = ACTIONS(327),
    [aux_sym_number_token1] = ACTIONS(329),
    [aux_sym_record_token1] = ACTIONS(327),
    [aux_sym_record_token2] = ACTIONS(327),
    [sym_keyword] = ACTIONS(329),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [aux_sym_operator_token1] = ACTIONS(329),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [aux_sym_operator_token2] = ACTIONS(329),
    [anon_sym_QMARK_QMARK] = ACTIONS(327),
    [anon_sym_QMARK_COLON] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(329),
    [aux_sym_operator_token3] = ACTIONS(329),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_ISNOT] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_QMARK_EQ] = ACTIONS(327),
    [anon_sym_STAR_EQ] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_BANG_TILDE] = ACTIONS(327),
    [anon_sym_QMARK_TILDE] = ACTIONS(327),
    [anon_sym_STAR_TILDE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(329),
    [aux_sym_operator_token4] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_u00f7] = ACTIONS(327),
    [anon_sym_STAR_STAR] = ACTIONS(327),
    [aux_sym_operator_token5] = ACTIONS(329),
    [aux_sym_operator_token6] = ACTIONS(329),
    [anon_sym_u220b] = ACTIONS(327),
    [aux_sym_operator_token7] = ACTIONS(329),
    [anon_sym_u220c] = ACTIONS(327),
    [aux_sym_operator_token8] = ACTIONS(329),
    [anon_sym_u2287] = ACTIONS(327),
    [aux_sym_operator_token9] = ACTIONS(329),
    [anon_sym_u2283] = ACTIONS(327),
    [aux_sym_operator_token10] = ACTIONS(329),
    [anon_sym_u2285] = ACTIONS(327),
    [aux_sym_operator_token11] = ACTIONS(329),
    [anon_sym_u2208] = ACTIONS(327),
    [aux_sym_operator_token12] = ACTIONS(329),
    [anon_sym_NOTIN] = ACTIONS(327),
    [anon_sym_u2209] = ACTIONS(327),
    [aux_sym_operator_token13] = ACTIONS(329),
    [anon_sym_u2286] = ACTIONS(327),
    [aux_sym_operator_token14] = ACTIONS(329),
    [anon_sym_u2282] = ACTIONS(327),
    [aux_sym_operator_token15] = ACTIONS(329),
    [anon_sym_u2284] = ACTIONS(327),
    [aux_sym_operator_token16] = ACTIONS(329),
    [aux_sym_operator_token17] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_DASH_GT] = ACTIONS(327),
    [anon_sym_LT_DASH] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_any] = ACTIONS(329),
    [anon_sym_array] = ACTIONS(329),
    [anon_sym_bool] = ACTIONS(329),
    [anon_sym_datetime] = ACTIONS(329),
    [anon_sym_decimal] = ACTIONS(329),
    [anon_sym_duration] = ACTIONS(329),
    [anon_sym_float] = ACTIONS(329),
    [anon_sym_int] = ACTIONS(329),
    [anon_sym_number] = ACTIONS(329),
    [anon_sym_object] = ACTIONS(329),
    [anon_sym_string] = ACTIONS(329),
    [anon_sym_record] = ACTIONS(329),
    [anon_sym_geometry] = ACTIONS(329),
    [anon_sym_EDDSA] = ACTIONS(329),
    [anon_sym_ES256] = ACTIONS(329),
    [anon_sym_ES384] = ACTIONS(329),
    [anon_sym_ES512] = ACTIONS(329),
    [anon_sym_HS256] = ACTIONS(329),
    [anon_sym_HS384] = ACTIONS(329),
    [anon_sym_HS512] = ACTIONS(329),
    [anon_sym_PS256] = ACTIONS(329),
    [anon_sym_PS384] = ACTIONS(329),
    [anon_sym_PS512] = ACTIONS(329),
    [anon_sym_RS256] = ACTIONS(329),
    [anon_sym_RS384] = ACTIONS(329),
    [anon_sym_RS512] = ACTIONS(329),
    [aux_sym_function_token1] = ACTIONS(327),
    [aux_sym_function_token2] = ACTIONS(327),
    [anon_sym_count] = ACTIONS(329),
    [aux_sym_function_token3] = ACTIONS(327),
    [aux_sym_function_token4] = ACTIONS(327),
    [aux_sym_function_token5] = ACTIONS(327),
    [aux_sym_function_token6] = ACTIONS(327),
    [aux_sym_function_token7] = ACTIONS(327),
    [aux_sym_function_token8] = ACTIONS(327),
    [aux_sym_function_token9] = ACTIONS(327),
    [aux_sym_function_token10] = ACTIONS(329),
    [aux_sym_function_token11] = ACTIONS(327),
    [aux_sym_function_token12] = ACTIONS(329),
    [aux_sym_function_token13] = ACTIONS(327),
    [aux_sym_function_token14] = ACTIONS(327),
    [aux_sym_function_token15] = ACTIONS(327),
    [aux_sym_function_token16] = ACTIONS(329),
    [aux_sym_bool_token1] = ACTIONS(329),
    [aux_sym_bool_token2] = ACTIONS(329),
    [aux_sym_nothing_token1] = ACTIONS(329),
    [aux_sym_nothing_token2] = ACTIONS(329),
    [sym_variable] = ACTIONS(327),
    [sym_comment] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
  },
  [27] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE_SEMI] = ACTIONS(291),
    [anon_sym_RBRACE_COMMA] = ACTIONS(291),
    [aux_sym_future_token1] = ACTIONS(291),
    [aux_sym_casting_token1] = ACTIONS(291),
    [aux_sym_property_token1] = ACTIONS(293),
    [aux_sym_duration_token1] = ACTIONS(293),
    [aux_sym_constant_token1] = ACTIONS(291),
    [aux_sym_number_token1] = ACTIONS(293),
    [aux_sym_record_token1] = ACTIONS(291),
    [aux_sym_record_token2] = ACTIONS(291),
    [sym_keyword] = ACTIONS(293),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [aux_sym_operator_token1] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [aux_sym_operator_token2] = ACTIONS(293),
    [anon_sym_QMARK_QMARK] = ACTIONS(291),
    [anon_sym_QMARK_COLON] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(293),
    [aux_sym_operator_token3] = ACTIONS(293),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_ISNOT] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_QMARK_EQ] = ACTIONS(291),
    [anon_sym_STAR_EQ] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_BANG_TILDE] = ACTIONS(291),
    [anon_sym_QMARK_TILDE] = ACTIONS(291),
    [anon_sym_STAR_TILDE] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [aux_sym_operator_token4] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_u00f7] = ACTIONS(291),
    [anon_sym_STAR_STAR] = ACTIONS(291),
    [aux_sym_operator_token5] = ACTIONS(293),
    [aux_sym_operator_token6] = ACTIONS(293),
    [anon_sym_u220b] = ACTIONS(291),
    [aux_sym_operator_token7] = ACTIONS(293),
    [anon_sym_u220c] = ACTIONS(291),
    [aux_sym_operator_token8] = ACTIONS(293),
    [anon_sym_u2287] = ACTIONS(291),
    [aux_sym_operator_token9] = ACTIONS(293),
    [anon_sym_u2283] = ACTIONS(291),
    [aux_sym_operator_token10] = ACTIONS(293),
    [anon_sym_u2285] = ACTIONS(291),
    [aux_sym_operator_token11] = ACTIONS(293),
    [anon_sym_u2208] = ACTIONS(291),
    [aux_sym_operator_token12] = ACTIONS(293),
    [anon_sym_NOTIN] = ACTIONS(291),
    [anon_sym_u2209] = ACTIONS(291),
    [aux_sym_operator_token13] = ACTIONS(293),
    [anon_sym_u2286] = ACTIONS(291),
    [aux_sym_operator_token14] = ACTIONS(293),
    [anon_sym_u2282] = ACTIONS(291),
    [aux_sym_operator_token15] = ACTIONS(293),
    [anon_sym_u2284] = ACTIONS(291),
    [aux_sym_operator_token16] = ACTIONS(293),
    [aux_sym_operator_token17] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_LT_DASH] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_any] = ACTIONS(293),
    [anon_sym_array] = ACTIONS(293),
    [anon_sym_bool] = ACTIONS(293),
    [anon_sym_datetime] = ACTIONS(293),
    [anon_sym_decimal] = ACTIONS(293),
    [anon_sym_duration] = ACTIONS(293),
    [anon_sym_float] = ACTIONS(293),
    [anon_sym_int] = ACTIONS(293),
    [anon_sym_number] = ACTIONS(293),
    [anon_sym_object] = ACTIONS(293),
    [anon_sym_string] = ACTIONS(293),
    [anon_sym_record] = ACTIONS(293),
    [anon_sym_geometry] = ACTIONS(293),
    [anon_sym_EDDSA] = ACTIONS(293),
    [anon_sym_ES256] = ACTIONS(293),
    [anon_sym_ES384] = ACTIONS(293),
    [anon_sym_ES512] = ACTIONS(293),
    [anon_sym_HS256] = ACTIONS(293),
    [anon_sym_HS384] = ACTIONS(293),
    [anon_sym_HS512] = ACTIONS(293),
    [anon_sym_PS256] = ACTIONS(293),
    [anon_sym_PS384] = ACTIONS(293),
    [anon_sym_PS512] = ACTIONS(293),
    [anon_sym_RS256] = ACTIONS(293),
    [anon_sym_RS384] = ACTIONS(293),
    [anon_sym_RS512] = ACTIONS(293),
    [aux_sym_function_token1] = ACTIONS(291),
    [aux_sym_function_token2] = ACTIONS(291),
    [anon_sym_count] = ACTIONS(293),
    [aux_sym_function_token3] = ACTIONS(291),
    [aux_sym_function_token4] = ACTIONS(291),
    [aux_sym_function_token5] = ACTIONS(291),
    [aux_sym_function_token6] = ACTIONS(291),
    [aux_sym_function_token7] = ACTIONS(291),
    [aux_sym_function_token8] = ACTIONS(291),
    [aux_sym_function_token9] = ACTIONS(291),
    [aux_sym_function_token10] = ACTIONS(293),
    [aux_sym_function_token11] = ACTIONS(291),
    [aux_sym_function_token12] = ACTIONS(293),
    [aux_sym_function_token13] = ACTIONS(291),
    [aux_sym_function_token14] = ACTIONS(291),
    [aux_sym_function_token15] = ACTIONS(291),
    [aux_sym_function_token16] = ACTIONS(293),
    [aux_sym_bool_token1] = ACTIONS(293),
    [aux_sym_bool_token2] = ACTIONS(293),
    [aux_sym_nothing_token1] = ACTIONS(293),
    [aux_sym_nothing_token2] = ACTIONS(293),
    [sym_variable] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(331),
    [aux_sym_future_token1] = ACTIONS(331),
    [aux_sym_casting_token1] = ACTIONS(331),
    [aux_sym_property_token1] = ACTIONS(333),
    [aux_sym_duration_token1] = ACTIONS(333),
    [aux_sym_constant_token1] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [aux_sym_record_token1] = ACTIONS(331),
    [aux_sym_record_token2] = ACTIONS(331),
    [sym_keyword] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [aux_sym_operator_token1] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [aux_sym_operator_token2] = ACTIONS(333),
    [anon_sym_QMARK_QMARK] = ACTIONS(331),
    [anon_sym_QMARK_COLON] = ACTIONS(331),
    [anon_sym_EQ] = ACTIONS(333),
    [aux_sym_operator_token3] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(331),
    [anon_sym_ISNOT] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(331),
    [anon_sym_QMARK_EQ] = ACTIONS(331),
    [anon_sym_STAR_EQ] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BANG_TILDE] = ACTIONS(331),
    [anon_sym_QMARK_TILDE] = ACTIONS(331),
    [anon_sym_STAR_TILDE] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [aux_sym_operator_token4] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_u00f7] = ACTIONS(331),
    [anon_sym_STAR_STAR] = ACTIONS(331),
    [aux_sym_operator_token5] = ACTIONS(333),
    [aux_sym_operator_token6] = ACTIONS(333),
    [anon_sym_u220b] = ACTIONS(331),
    [aux_sym_operator_token7] = ACTIONS(333),
    [anon_sym_u220c] = ACTIONS(331),
    [aux_sym_operator_token8] = ACTIONS(333),
    [anon_sym_u2287] = ACTIONS(331),
    [aux_sym_operator_token9] = ACTIONS(333),
    [anon_sym_u2283] = ACTIONS(331),
    [aux_sym_operator_token10] = ACTIONS(333),
    [anon_sym_u2285] = ACTIONS(331),
    [aux_sym_operator_token11] = ACTIONS(333),
    [anon_sym_u2208] = ACTIONS(331),
    [aux_sym_operator_token12] = ACTIONS(333),
    [anon_sym_NOTIN] = ACTIONS(331),
    [anon_sym_u2209] = ACTIONS(331),
    [aux_sym_operator_token13] = ACTIONS(333),
    [anon_sym_u2286] = ACTIONS(331),
    [aux_sym_operator_token14] = ACTIONS(333),
    [anon_sym_u2282] = ACTIONS(331),
    [aux_sym_operator_token15] = ACTIONS(333),
    [anon_sym_u2284] = ACTIONS(331),
    [aux_sym_operator_token16] = ACTIONS(333),
    [aux_sym_operator_token17] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_DASH_GT] = ACTIONS(331),
    [anon_sym_LT_DASH] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_any] = ACTIONS(333),
    [anon_sym_array] = ACTIONS(333),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_datetime] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_duration] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_number] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [anon_sym_record] = ACTIONS(333),
    [anon_sym_geometry] = ACTIONS(333),
    [anon_sym_EDDSA] = ACTIONS(333),
    [anon_sym_ES256] = ACTIONS(333),
    [anon_sym_ES384] = ACTIONS(333),
    [anon_sym_ES512] = ACTIONS(333),
    [anon_sym_HS256] = ACTIONS(333),
    [anon_sym_HS384] = ACTIONS(333),
    [anon_sym_HS512] = ACTIONS(333),
    [anon_sym_PS256] = ACTIONS(333),
    [anon_sym_PS384] = ACTIONS(333),
    [anon_sym_PS512] = ACTIONS(333),
    [anon_sym_RS256] = ACTIONS(333),
    [anon_sym_RS384] = ACTIONS(333),
    [anon_sym_RS512] = ACTIONS(333),
    [aux_sym_function_token1] = ACTIONS(331),
    [aux_sym_function_token2] = ACTIONS(331),
    [anon_sym_count] = ACTIONS(333),
    [aux_sym_function_token3] = ACTIONS(331),
    [aux_sym_function_token4] = ACTIONS(331),
    [aux_sym_function_token5] = ACTIONS(331),
    [aux_sym_function_token6] = ACTIONS(331),
    [aux_sym_function_token7] = ACTIONS(331),
    [aux_sym_function_token8] = ACTIONS(331),
    [aux_sym_function_token9] = ACTIONS(331),
    [aux_sym_function_token10] = ACTIONS(333),
    [aux_sym_function_token11] = ACTIONS(331),
    [aux_sym_function_token12] = ACTIONS(333),
    [aux_sym_function_token13] = ACTIONS(331),
    [aux_sym_function_token14] = ACTIONS(331),
    [aux_sym_function_token15] = ACTIONS(331),
    [aux_sym_function_token16] = ACTIONS(333),
    [aux_sym_bool_token1] = ACTIONS(333),
    [aux_sym_bool_token2] = ACTIONS(333),
    [aux_sym_nothing_token1] = ACTIONS(333),
    [aux_sym_nothing_token2] = ACTIONS(333),
    [sym_variable] = ACTIONS(331),
    [sym_comment] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
  },
  [29] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE_SEMI] = ACTIONS(331),
    [anon_sym_RBRACE_COMMA] = ACTIONS(331),
    [aux_sym_future_token1] = ACTIONS(331),
    [aux_sym_casting_token1] = ACTIONS(331),
    [aux_sym_property_token1] = ACTIONS(333),
    [aux_sym_duration_token1] = ACTIONS(333),
    [aux_sym_constant_token1] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [aux_sym_record_token1] = ACTIONS(331),
    [aux_sym_record_token2] = ACTIONS(331),
    [sym_keyword] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [aux_sym_operator_token1] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [aux_sym_operator_token2] = ACTIONS(333),
    [anon_sym_QMARK_QMARK] = ACTIONS(331),
    [anon_sym_QMARK_COLON] = ACTIONS(331),
    [anon_sym_EQ] = ACTIONS(333),
    [aux_sym_operator_token3] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(331),
    [anon_sym_ISNOT] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(331),
    [anon_sym_QMARK_EQ] = ACTIONS(331),
    [anon_sym_STAR_EQ] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BANG_TILDE] = ACTIONS(331),
    [anon_sym_QMARK_TILDE] = ACTIONS(331),
    [anon_sym_STAR_TILDE] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [aux_sym_operator_token4] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_u00f7] = ACTIONS(331),
    [anon_sym_STAR_STAR] = ACTIONS(331),
    [aux_sym_operator_token5] = ACTIONS(333),
    [aux_sym_operator_token6] = ACTIONS(333),
    [anon_sym_u220b] = ACTIONS(331),
    [aux_sym_operator_token7] = ACTIONS(333),
    [anon_sym_u220c] = ACTIONS(331),
    [aux_sym_operator_token8] = ACTIONS(333),
    [anon_sym_u2287] = ACTIONS(331),
    [aux_sym_operator_token9] = ACTIONS(333),
    [anon_sym_u2283] = ACTIONS(331),
    [aux_sym_operator_token10] = ACTIONS(333),
    [anon_sym_u2285] = ACTIONS(331),
    [aux_sym_operator_token11] = ACTIONS(333),
    [anon_sym_u2208] = ACTIONS(331),
    [aux_sym_operator_token12] = ACTIONS(333),
    [anon_sym_NOTIN] = ACTIONS(331),
    [anon_sym_u2209] = ACTIONS(331),
    [aux_sym_operator_token13] = ACTIONS(333),
    [anon_sym_u2286] = ACTIONS(331),
    [aux_sym_operator_token14] = ACTIONS(333),
    [anon_sym_u2282] = ACTIONS(331),
    [aux_sym_operator_token15] = ACTIONS(333),
    [anon_sym_u2284] = ACTIONS(331),
    [aux_sym_operator_token16] = ACTIONS(333),
    [aux_sym_operator_token17] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_DASH_GT] = ACTIONS(331),
    [anon_sym_LT_DASH] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_any] = ACTIONS(333),
    [anon_sym_array] = ACTIONS(333),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_datetime] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_duration] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_number] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [anon_sym_record] = ACTIONS(333),
    [anon_sym_geometry] = ACTIONS(333),
    [anon_sym_EDDSA] = ACTIONS(333),
    [anon_sym_ES256] = ACTIONS(333),
    [anon_sym_ES384] = ACTIONS(333),
    [anon_sym_ES512] = ACTIONS(333),
    [anon_sym_HS256] = ACTIONS(333),
    [anon_sym_HS384] = ACTIONS(333),
    [anon_sym_HS512] = ACTIONS(333),
    [anon_sym_PS256] = ACTIONS(333),
    [anon_sym_PS384] = ACTIONS(333),
    [anon_sym_PS512] = ACTIONS(333),
    [anon_sym_RS256] = ACTIONS(333),
    [anon_sym_RS384] = ACTIONS(333),
    [anon_sym_RS512] = ACTIONS(333),
    [aux_sym_function_token1] = ACTIONS(331),
    [aux_sym_function_token2] = ACTIONS(331),
    [anon_sym_count] = ACTIONS(333),
    [aux_sym_function_token3] = ACTIONS(331),
    [aux_sym_function_token4] = ACTIONS(331),
    [aux_sym_function_token5] = ACTIONS(331),
    [aux_sym_function_token6] = ACTIONS(331),
    [aux_sym_function_token7] = ACTIONS(331),
    [aux_sym_function_token8] = ACTIONS(331),
    [aux_sym_function_token9] = ACTIONS(331),
    [aux_sym_function_token10] = ACTIONS(333),
    [aux_sym_function_token11] = ACTIONS(331),
    [aux_sym_function_token12] = ACTIONS(333),
    [aux_sym_function_token13] = ACTIONS(331),
    [aux_sym_function_token14] = ACTIONS(331),
    [aux_sym_function_token15] = ACTIONS(331),
    [aux_sym_function_token16] = ACTIONS(333),
    [aux_sym_bool_token1] = ACTIONS(333),
    [aux_sym_bool_token2] = ACTIONS(333),
    [aux_sym_nothing_token1] = ACTIONS(333),
    [aux_sym_nothing_token2] = ACTIONS(333),
    [sym_variable] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
  },
  [30] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE_SEMI] = ACTIONS(327),
    [anon_sym_RBRACE_COMMA] = ACTIONS(327),
    [aux_sym_future_token1] = ACTIONS(327),
    [aux_sym_casting_token1] = ACTIONS(327),
    [aux_sym_property_token1] = ACTIONS(329),
    [aux_sym_duration_token1] = ACTIONS(329),
    [aux_sym_constant_token1] = ACTIONS(327),
    [aux_sym_number_token1] = ACTIONS(329),
    [aux_sym_record_token1] = ACTIONS(327),
    [aux_sym_record_token2] = ACTIONS(327),
    [sym_keyword] = ACTIONS(329),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [aux_sym_operator_token1] = ACTIONS(329),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [aux_sym_operator_token2] = ACTIONS(329),
    [anon_sym_QMARK_QMARK] = ACTIONS(327),
    [anon_sym_QMARK_COLON] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(329),
    [aux_sym_operator_token3] = ACTIONS(329),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_ISNOT] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_QMARK_EQ] = ACTIONS(327),
    [anon_sym_STAR_EQ] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_BANG_TILDE] = ACTIONS(327),
    [anon_sym_QMARK_TILDE] = ACTIONS(327),
    [anon_sym_STAR_TILDE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(329),
    [aux_sym_operator_token4] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(327),
    [anon_sym_u00f7] = ACTIONS(327),
    [anon_sym_STAR_STAR] = ACTIONS(327),
    [aux_sym_operator_token5] = ACTIONS(329),
    [aux_sym_operator_token6] = ACTIONS(329),
    [anon_sym_u220b] = ACTIONS(327),
    [aux_sym_operator_token7] = ACTIONS(329),
    [anon_sym_u220c] = ACTIONS(327),
    [aux_sym_operator_token8] = ACTIONS(329),
    [anon_sym_u2287] = ACTIONS(327),
    [aux_sym_operator_token9] = ACTIONS(329),
    [anon_sym_u2283] = ACTIONS(327),
    [aux_sym_operator_token10] = ACTIONS(329),
    [anon_sym_u2285] = ACTIONS(327),
    [aux_sym_operator_token11] = ACTIONS(329),
    [anon_sym_u2208] = ACTIONS(327),
    [aux_sym_operator_token12] = ACTIONS(329),
    [anon_sym_NOTIN] = ACTIONS(327),
    [anon_sym_u2209] = ACTIONS(327),
    [aux_sym_operator_token13] = ACTIONS(329),
    [anon_sym_u2286] = ACTIONS(327),
    [aux_sym_operator_token14] = ACTIONS(329),
    [anon_sym_u2282] = ACTIONS(327),
    [aux_sym_operator_token15] = ACTIONS(329),
    [anon_sym_u2284] = ACTIONS(327),
    [aux_sym_operator_token16] = ACTIONS(329),
    [aux_sym_operator_token17] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_DASH_GT] = ACTIONS(327),
    [anon_sym_LT_DASH] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_any] = ACTIONS(329),
    [anon_sym_array] = ACTIONS(329),
    [anon_sym_bool] = ACTIONS(329),
    [anon_sym_datetime] = ACTIONS(329),
    [anon_sym_decimal] = ACTIONS(329),
    [anon_sym_duration] = ACTIONS(329),
    [anon_sym_float] = ACTIONS(329),
    [anon_sym_int] = ACTIONS(329),
    [anon_sym_number] = ACTIONS(329),
    [anon_sym_object] = ACTIONS(329),
    [anon_sym_string] = ACTIONS(329),
    [anon_sym_record] = ACTIONS(329),
    [anon_sym_geometry] = ACTIONS(329),
    [anon_sym_EDDSA] = ACTIONS(329),
    [anon_sym_ES256] = ACTIONS(329),
    [anon_sym_ES384] = ACTIONS(329),
    [anon_sym_ES512] = ACTIONS(329),
    [anon_sym_HS256] = ACTIONS(329),
    [anon_sym_HS384] = ACTIONS(329),
    [anon_sym_HS512] = ACTIONS(329),
    [anon_sym_PS256] = ACTIONS(329),
    [anon_sym_PS384] = ACTIONS(329),
    [anon_sym_PS512] = ACTIONS(329),
    [anon_sym_RS256] = ACTIONS(329),
    [anon_sym_RS384] = ACTIONS(329),
    [anon_sym_RS512] = ACTIONS(329),
    [aux_sym_function_token1] = ACTIONS(327),
    [aux_sym_function_token2] = ACTIONS(327),
    [anon_sym_count] = ACTIONS(329),
    [aux_sym_function_token3] = ACTIONS(327),
    [aux_sym_function_token4] = ACTIONS(327),
    [aux_sym_function_token5] = ACTIONS(327),
    [aux_sym_function_token6] = ACTIONS(327),
    [aux_sym_function_token7] = ACTIONS(327),
    [aux_sym_function_token8] = ACTIONS(327),
    [aux_sym_function_token9] = ACTIONS(327),
    [aux_sym_function_token10] = ACTIONS(329),
    [aux_sym_function_token11] = ACTIONS(327),
    [aux_sym_function_token12] = ACTIONS(329),
    [aux_sym_function_token13] = ACTIONS(327),
    [aux_sym_function_token14] = ACTIONS(327),
    [aux_sym_function_token15] = ACTIONS(327),
    [aux_sym_function_token16] = ACTIONS(329),
    [aux_sym_bool_token1] = ACTIONS(329),
    [aux_sym_bool_token2] = ACTIONS(329),
    [aux_sym_nothing_token1] = ACTIONS(329),
    [aux_sym_nothing_token2] = ACTIONS(329),
    [sym_variable] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
  },
  [31] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE_SEMI] = ACTIONS(311),
    [anon_sym_RBRACE_COMMA] = ACTIONS(311),
    [aux_sym_future_token1] = ACTIONS(311),
    [aux_sym_casting_token1] = ACTIONS(311),
    [aux_sym_property_token1] = ACTIONS(313),
    [aux_sym_duration_token1] = ACTIONS(313),
    [aux_sym_constant_token1] = ACTIONS(311),
    [aux_sym_number_token1] = ACTIONS(313),
    [aux_sym_record_token1] = ACTIONS(311),
    [aux_sym_record_token2] = ACTIONS(311),
    [sym_keyword] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [aux_sym_operator_token1] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [aux_sym_operator_token2] = ACTIONS(313),
    [anon_sym_QMARK_QMARK] = ACTIONS(311),
    [anon_sym_QMARK_COLON] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(313),
    [aux_sym_operator_token3] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_ISNOT] = ACTIONS(311),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_QMARK_EQ] = ACTIONS(311),
    [anon_sym_STAR_EQ] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BANG_TILDE] = ACTIONS(311),
    [anon_sym_QMARK_TILDE] = ACTIONS(311),
    [anon_sym_STAR_TILDE] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(313),
    [aux_sym_operator_token4] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(311),
    [anon_sym_u00f7] = ACTIONS(311),
    [anon_sym_STAR_STAR] = ACTIONS(311),
    [aux_sym_operator_token5] = ACTIONS(313),
    [aux_sym_operator_token6] = ACTIONS(313),
    [anon_sym_u220b] = ACTIONS(311),
    [aux_sym_operator_token7] = ACTIONS(313),
    [anon_sym_u220c] = ACTIONS(311),
    [aux_sym_operator_token8] = ACTIONS(313),
    [anon_sym_u2287] = ACTIONS(311),
    [aux_sym_operator_token9] = ACTIONS(313),
    [anon_sym_u2283] = ACTIONS(311),
    [aux_sym_operator_token10] = ACTIONS(313),
    [anon_sym_u2285] = ACTIONS(311),
    [aux_sym_operator_token11] = ACTIONS(313),
    [anon_sym_u2208] = ACTIONS(311),
    [aux_sym_operator_token12] = ACTIONS(313),
    [anon_sym_NOTIN] = ACTIONS(311),
    [anon_sym_u2209] = ACTIONS(311),
    [aux_sym_operator_token13] = ACTIONS(313),
    [anon_sym_u2286] = ACTIONS(311),
    [aux_sym_operator_token14] = ACTIONS(313),
    [anon_sym_u2282] = ACTIONS(311),
    [aux_sym_operator_token15] = ACTIONS(313),
    [anon_sym_u2284] = ACTIONS(311),
    [aux_sym_operator_token16] = ACTIONS(313),
    [aux_sym_operator_token17] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_DASH_GT] = ACTIONS(311),
    [anon_sym_LT_DASH] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_any] = ACTIONS(313),
    [anon_sym_array] = ACTIONS(313),
    [anon_sym_bool] = ACTIONS(313),
    [anon_sym_datetime] = ACTIONS(313),
    [anon_sym_decimal] = ACTIONS(313),
    [anon_sym_duration] = ACTIONS(313),
    [anon_sym_float] = ACTIONS(313),
    [anon_sym_int] = ACTIONS(313),
    [anon_sym_number] = ACTIONS(313),
    [anon_sym_object] = ACTIONS(313),
    [anon_sym_string] = ACTIONS(313),
    [anon_sym_record] = ACTIONS(313),
    [anon_sym_geometry] = ACTIONS(313),
    [anon_sym_EDDSA] = ACTIONS(313),
    [anon_sym_ES256] = ACTIONS(313),
    [anon_sym_ES384] = ACTIONS(313),
    [anon_sym_ES512] = ACTIONS(313),
    [anon_sym_HS256] = ACTIONS(313),
    [anon_sym_HS384] = ACTIONS(313),
    [anon_sym_HS512] = ACTIONS(313),
    [anon_sym_PS256] = ACTIONS(313),
    [anon_sym_PS384] = ACTIONS(313),
    [anon_sym_PS512] = ACTIONS(313),
    [anon_sym_RS256] = ACTIONS(313),
    [anon_sym_RS384] = ACTIONS(313),
    [anon_sym_RS512] = ACTIONS(313),
    [aux_sym_function_token1] = ACTIONS(311),
    [aux_sym_function_token2] = ACTIONS(311),
    [anon_sym_count] = ACTIONS(313),
    [aux_sym_function_token3] = ACTIONS(311),
    [aux_sym_function_token4] = ACTIONS(311),
    [aux_sym_function_token5] = ACTIONS(311),
    [aux_sym_function_token6] = ACTIONS(311),
    [aux_sym_function_token7] = ACTIONS(311),
    [aux_sym_function_token8] = ACTIONS(311),
    [aux_sym_function_token9] = ACTIONS(311),
    [aux_sym_function_token10] = ACTIONS(313),
    [aux_sym_function_token11] = ACTIONS(311),
    [aux_sym_function_token12] = ACTIONS(313),
    [aux_sym_function_token13] = ACTIONS(311),
    [aux_sym_function_token14] = ACTIONS(311),
    [aux_sym_function_token15] = ACTIONS(311),
    [aux_sym_function_token16] = ACTIONS(313),
    [aux_sym_bool_token1] = ACTIONS(313),
    [aux_sym_bool_token2] = ACTIONS(313),
    [aux_sym_nothing_token1] = ACTIONS(313),
    [aux_sym_nothing_token2] = ACTIONS(313),
    [sym_variable] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
  },
  [32] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE_SEMI] = ACTIONS(307),
    [anon_sym_RBRACE_COMMA] = ACTIONS(307),
    [aux_sym_future_token1] = ACTIONS(307),
    [aux_sym_casting_token1] = ACTIONS(307),
    [aux_sym_property_token1] = ACTIONS(309),
    [aux_sym_duration_token1] = ACTIONS(309),
    [aux_sym_constant_token1] = ACTIONS(307),
    [aux_sym_number_token1] = ACTIONS(309),
    [aux_sym_record_token1] = ACTIONS(307),
    [aux_sym_record_token2] = ACTIONS(307),
    [sym_keyword] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [aux_sym_operator_token1] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [aux_sym_operator_token2] = ACTIONS(309),
    [anon_sym_QMARK_QMARK] = ACTIONS(307),
    [anon_sym_QMARK_COLON] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(309),
    [aux_sym_operator_token3] = ACTIONS(309),
    [anon_sym_BANG_EQ] = ACTIONS(307),
    [anon_sym_ISNOT] = ACTIONS(307),
    [anon_sym_EQ_EQ] = ACTIONS(307),
    [anon_sym_QMARK_EQ] = ACTIONS(307),
    [anon_sym_STAR_EQ] = ACTIONS(307),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_BANG_TILDE] = ACTIONS(307),
    [anon_sym_QMARK_TILDE] = ACTIONS(307),
    [anon_sym_STAR_TILDE] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(309),
    [aux_sym_operator_token4] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_u00f7] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(307),
    [aux_sym_operator_token5] = ACTIONS(309),
    [aux_sym_operator_token6] = ACTIONS(309),
    [anon_sym_u220b] = ACTIONS(307),
    [aux_sym_operator_token7] = ACTIONS(309),
    [anon_sym_u220c] = ACTIONS(307),
    [aux_sym_operator_token8] = ACTIONS(309),
    [anon_sym_u2287] = ACTIONS(307),
    [aux_sym_operator_token9] = ACTIONS(309),
    [anon_sym_u2283] = ACTIONS(307),
    [aux_sym_operator_token10] = ACTIONS(309),
    [anon_sym_u2285] = ACTIONS(307),
    [aux_sym_operator_token11] = ACTIONS(309),
    [anon_sym_u2208] = ACTIONS(307),
    [aux_sym_operator_token12] = ACTIONS(309),
    [anon_sym_NOTIN] = ACTIONS(307),
    [anon_sym_u2209] = ACTIONS(307),
    [aux_sym_operator_token13] = ACTIONS(309),
    [anon_sym_u2286] = ACTIONS(307),
    [aux_sym_operator_token14] = ACTIONS(309),
    [anon_sym_u2282] = ACTIONS(307),
    [aux_sym_operator_token15] = ACTIONS(309),
    [anon_sym_u2284] = ACTIONS(307),
    [aux_sym_operator_token16] = ACTIONS(309),
    [aux_sym_operator_token17] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_DASH_GT] = ACTIONS(307),
    [anon_sym_LT_DASH] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_any] = ACTIONS(309),
    [anon_sym_array] = ACTIONS(309),
    [anon_sym_bool] = ACTIONS(309),
    [anon_sym_datetime] = ACTIONS(309),
    [anon_sym_decimal] = ACTIONS(309),
    [anon_sym_duration] = ACTIONS(309),
    [anon_sym_float] = ACTIONS(309),
    [anon_sym_int] = ACTIONS(309),
    [anon_sym_number] = ACTIONS(309),
    [anon_sym_object] = ACTIONS(309),
    [anon_sym_string] = ACTIONS(309),
    [anon_sym_record] = ACTIONS(309),
    [anon_sym_geometry] = ACTIONS(309),
    [anon_sym_EDDSA] = ACTIONS(309),
    [anon_sym_ES256] = ACTIONS(309),
    [anon_sym_ES384] = ACTIONS(309),
    [anon_sym_ES512] = ACTIONS(309),
    [anon_sym_HS256] = ACTIONS(309),
    [anon_sym_HS384] = ACTIONS(309),
    [anon_sym_HS512] = ACTIONS(309),
    [anon_sym_PS256] = ACTIONS(309),
    [anon_sym_PS384] = ACTIONS(309),
    [anon_sym_PS512] = ACTIONS(309),
    [anon_sym_RS256] = ACTIONS(309),
    [anon_sym_RS384] = ACTIONS(309),
    [anon_sym_RS512] = ACTIONS(309),
    [aux_sym_function_token1] = ACTIONS(307),
    [aux_sym_function_token2] = ACTIONS(307),
    [anon_sym_count] = ACTIONS(309),
    [aux_sym_function_token3] = ACTIONS(307),
    [aux_sym_function_token4] = ACTIONS(307),
    [aux_sym_function_token5] = ACTIONS(307),
    [aux_sym_function_token6] = ACTIONS(307),
    [aux_sym_function_token7] = ACTIONS(307),
    [aux_sym_function_token8] = ACTIONS(307),
    [aux_sym_function_token9] = ACTIONS(307),
    [aux_sym_function_token10] = ACTIONS(309),
    [aux_sym_function_token11] = ACTIONS(307),
    [aux_sym_function_token12] = ACTIONS(309),
    [aux_sym_function_token13] = ACTIONS(307),
    [aux_sym_function_token14] = ACTIONS(307),
    [aux_sym_function_token15] = ACTIONS(307),
    [aux_sym_function_token16] = ACTIONS(309),
    [aux_sym_bool_token1] = ACTIONS(309),
    [aux_sym_bool_token2] = ACTIONS(309),
    [aux_sym_nothing_token1] = ACTIONS(309),
    [aux_sym_nothing_token2] = ACTIONS(309),
    [sym_variable] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(259),
    [aux_sym_future_token1] = ACTIONS(259),
    [aux_sym_casting_token1] = ACTIONS(259),
    [aux_sym_property_token1] = ACTIONS(261),
    [aux_sym_duration_token1] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(259),
    [aux_sym_number_token1] = ACTIONS(261),
    [aux_sym_record_token1] = ACTIONS(259),
    [aux_sym_record_token2] = ACTIONS(259),
    [sym_keyword] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [aux_sym_operator_token1] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [aux_sym_operator_token2] = ACTIONS(261),
    [anon_sym_QMARK_QMARK] = ACTIONS(259),
    [anon_sym_QMARK_COLON] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(261),
    [aux_sym_operator_token3] = ACTIONS(261),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_ISNOT] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_QMARK_EQ] = ACTIONS(259),
    [anon_sym_STAR_EQ] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_BANG_TILDE] = ACTIONS(259),
    [anon_sym_QMARK_TILDE] = ACTIONS(259),
    [anon_sym_STAR_TILDE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [aux_sym_operator_token4] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_u00f7] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [aux_sym_operator_token5] = ACTIONS(261),
    [aux_sym_operator_token6] = ACTIONS(261),
    [anon_sym_u220b] = ACTIONS(259),
    [aux_sym_operator_token7] = ACTIONS(261),
    [anon_sym_u220c] = ACTIONS(259),
    [aux_sym_operator_token8] = ACTIONS(261),
    [anon_sym_u2287] = ACTIONS(259),
    [aux_sym_operator_token9] = ACTIONS(261),
    [anon_sym_u2283] = ACTIONS(259),
    [aux_sym_operator_token10] = ACTIONS(261),
    [anon_sym_u2285] = ACTIONS(259),
    [aux_sym_operator_token11] = ACTIONS(261),
    [anon_sym_u2208] = ACTIONS(259),
    [aux_sym_operator_token12] = ACTIONS(261),
    [anon_sym_NOTIN] = ACTIONS(259),
    [anon_sym_u2209] = ACTIONS(259),
    [aux_sym_operator_token13] = ACTIONS(261),
    [anon_sym_u2286] = ACTIONS(259),
    [aux_sym_operator_token14] = ACTIONS(261),
    [anon_sym_u2282] = ACTIONS(259),
    [aux_sym_operator_token15] = ACTIONS(261),
    [anon_sym_u2284] = ACTIONS(259),
    [aux_sym_operator_token16] = ACTIONS(261),
    [aux_sym_operator_token17] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_LT_DASH] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_any] = ACTIONS(261),
    [anon_sym_array] = ACTIONS(261),
    [anon_sym_bool] = ACTIONS(261),
    [anon_sym_datetime] = ACTIONS(261),
    [anon_sym_decimal] = ACTIONS(261),
    [anon_sym_duration] = ACTIONS(261),
    [anon_sym_float] = ACTIONS(261),
    [anon_sym_int] = ACTIONS(261),
    [anon_sym_number] = ACTIONS(261),
    [anon_sym_object] = ACTIONS(261),
    [anon_sym_string] = ACTIONS(261),
    [anon_sym_record] = ACTIONS(261),
    [anon_sym_geometry] = ACTIONS(261),
    [anon_sym_EDDSA] = ACTIONS(261),
    [anon_sym_ES256] = ACTIONS(261),
    [anon_sym_ES384] = ACTIONS(261),
    [anon_sym_ES512] = ACTIONS(261),
    [anon_sym_HS256] = ACTIONS(261),
    [anon_sym_HS384] = ACTIONS(261),
    [anon_sym_HS512] = ACTIONS(261),
    [anon_sym_PS256] = ACTIONS(261),
    [anon_sym_PS384] = ACTIONS(261),
    [anon_sym_PS512] = ACTIONS(261),
    [anon_sym_RS256] = ACTIONS(261),
    [anon_sym_RS384] = ACTIONS(261),
    [anon_sym_RS512] = ACTIONS(261),
    [aux_sym_function_token1] = ACTIONS(259),
    [aux_sym_function_token2] = ACTIONS(259),
    [anon_sym_count] = ACTIONS(261),
    [aux_sym_function_token3] = ACTIONS(259),
    [aux_sym_function_token4] = ACTIONS(259),
    [aux_sym_function_token5] = ACTIONS(259),
    [aux_sym_function_token6] = ACTIONS(259),
    [aux_sym_function_token7] = ACTIONS(259),
    [aux_sym_function_token8] = ACTIONS(259),
    [aux_sym_function_token9] = ACTIONS(259),
    [aux_sym_function_token10] = ACTIONS(261),
    [aux_sym_function_token11] = ACTIONS(259),
    [aux_sym_function_token12] = ACTIONS(261),
    [aux_sym_function_token13] = ACTIONS(259),
    [aux_sym_function_token14] = ACTIONS(259),
    [aux_sym_function_token15] = ACTIONS(259),
    [aux_sym_function_token16] = ACTIONS(261),
    [aux_sym_bool_token1] = ACTIONS(261),
    [aux_sym_bool_token2] = ACTIONS(261),
    [aux_sym_nothing_token1] = ACTIONS(261),
    [aux_sym_nothing_token2] = ACTIONS(261),
    [sym_variable] = ACTIONS(259),
    [sym_comment] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
  },
  [34] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE_SEMI] = ACTIONS(255),
    [anon_sym_RBRACE_COMMA] = ACTIONS(255),
    [aux_sym_future_token1] = ACTIONS(255),
    [aux_sym_casting_token1] = ACTIONS(255),
    [aux_sym_property_token1] = ACTIONS(257),
    [aux_sym_duration_token1] = ACTIONS(257),
    [aux_sym_constant_token1] = ACTIONS(255),
    [aux_sym_number_token1] = ACTIONS(257),
    [aux_sym_record_token1] = ACTIONS(255),
    [aux_sym_record_token2] = ACTIONS(255),
    [sym_keyword] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(257),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [aux_sym_operator_token2] = ACTIONS(257),
    [anon_sym_QMARK_QMARK] = ACTIONS(255),
    [anon_sym_QMARK_COLON] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(257),
    [aux_sym_operator_token3] = ACTIONS(257),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_ISNOT] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_QMARK_EQ] = ACTIONS(255),
    [anon_sym_STAR_EQ] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_QMARK_TILDE] = ACTIONS(255),
    [anon_sym_STAR_TILDE] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [aux_sym_operator_token4] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_u00f7] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [aux_sym_operator_token5] = ACTIONS(257),
    [aux_sym_operator_token6] = ACTIONS(257),
    [anon_sym_u220b] = ACTIONS(255),
    [aux_sym_operator_token7] = ACTIONS(257),
    [anon_sym_u220c] = ACTIONS(255),
    [aux_sym_operator_token8] = ACTIONS(257),
    [anon_sym_u2287] = ACTIONS(255),
    [aux_sym_operator_token9] = ACTIONS(257),
    [anon_sym_u2283] = ACTIONS(255),
    [aux_sym_operator_token10] = ACTIONS(257),
    [anon_sym_u2285] = ACTIONS(255),
    [aux_sym_operator_token11] = ACTIONS(257),
    [anon_sym_u2208] = ACTIONS(255),
    [aux_sym_operator_token12] = ACTIONS(257),
    [anon_sym_NOTIN] = ACTIONS(255),
    [anon_sym_u2209] = ACTIONS(255),
    [aux_sym_operator_token13] = ACTIONS(257),
    [anon_sym_u2286] = ACTIONS(255),
    [aux_sym_operator_token14] = ACTIONS(257),
    [anon_sym_u2282] = ACTIONS(255),
    [aux_sym_operator_token15] = ACTIONS(257),
    [anon_sym_u2284] = ACTIONS(255),
    [aux_sym_operator_token16] = ACTIONS(257),
    [aux_sym_operator_token17] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_DASH_GT] = ACTIONS(255),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_any] = ACTIONS(257),
    [anon_sym_array] = ACTIONS(257),
    [anon_sym_bool] = ACTIONS(257),
    [anon_sym_datetime] = ACTIONS(257),
    [anon_sym_decimal] = ACTIONS(257),
    [anon_sym_duration] = ACTIONS(257),
    [anon_sym_float] = ACTIONS(257),
    [anon_sym_int] = ACTIONS(257),
    [anon_sym_number] = ACTIONS(257),
    [anon_sym_object] = ACTIONS(257),
    [anon_sym_string] = ACTIONS(257),
    [anon_sym_record] = ACTIONS(257),
    [anon_sym_geometry] = ACTIONS(257),
    [anon_sym_EDDSA] = ACTIONS(257),
    [anon_sym_ES256] = ACTIONS(257),
    [anon_sym_ES384] = ACTIONS(257),
    [anon_sym_ES512] = ACTIONS(257),
    [anon_sym_HS256] = ACTIONS(257),
    [anon_sym_HS384] = ACTIONS(257),
    [anon_sym_HS512] = ACTIONS(257),
    [anon_sym_PS256] = ACTIONS(257),
    [anon_sym_PS384] = ACTIONS(257),
    [anon_sym_PS512] = ACTIONS(257),
    [anon_sym_RS256] = ACTIONS(257),
    [anon_sym_RS384] = ACTIONS(257),
    [anon_sym_RS512] = ACTIONS(257),
    [aux_sym_function_token1] = ACTIONS(255),
    [aux_sym_function_token2] = ACTIONS(255),
    [anon_sym_count] = ACTIONS(257),
    [aux_sym_function_token3] = ACTIONS(255),
    [aux_sym_function_token4] = ACTIONS(255),
    [aux_sym_function_token5] = ACTIONS(255),
    [aux_sym_function_token6] = ACTIONS(255),
    [aux_sym_function_token7] = ACTIONS(255),
    [aux_sym_function_token8] = ACTIONS(255),
    [aux_sym_function_token9] = ACTIONS(255),
    [aux_sym_function_token10] = ACTIONS(257),
    [aux_sym_function_token11] = ACTIONS(255),
    [aux_sym_function_token12] = ACTIONS(257),
    [aux_sym_function_token13] = ACTIONS(255),
    [aux_sym_function_token14] = ACTIONS(255),
    [aux_sym_function_token15] = ACTIONS(255),
    [aux_sym_function_token16] = ACTIONS(257),
    [aux_sym_bool_token1] = ACTIONS(257),
    [aux_sym_bool_token2] = ACTIONS(257),
    [aux_sym_nothing_token1] = ACTIONS(257),
    [aux_sym_nothing_token2] = ACTIONS(257),
    [sym_variable] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(323),
    [aux_sym_future_token1] = ACTIONS(323),
    [aux_sym_casting_token1] = ACTIONS(323),
    [aux_sym_property_token1] = ACTIONS(325),
    [aux_sym_duration_token1] = ACTIONS(325),
    [aux_sym_constant_token1] = ACTIONS(323),
    [aux_sym_number_token1] = ACTIONS(325),
    [aux_sym_record_token1] = ACTIONS(323),
    [aux_sym_record_token2] = ACTIONS(323),
    [sym_keyword] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [aux_sym_operator_token1] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [aux_sym_operator_token2] = ACTIONS(325),
    [anon_sym_QMARK_QMARK] = ACTIONS(323),
    [anon_sym_QMARK_COLON] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(325),
    [aux_sym_operator_token3] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_ISNOT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_QMARK_EQ] = ACTIONS(323),
    [anon_sym_STAR_EQ] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_BANG_TILDE] = ACTIONS(323),
    [anon_sym_QMARK_TILDE] = ACTIONS(323),
    [anon_sym_STAR_TILDE] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(325),
    [aux_sym_operator_token4] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_u00f7] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(323),
    [aux_sym_operator_token5] = ACTIONS(325),
    [aux_sym_operator_token6] = ACTIONS(325),
    [anon_sym_u220b] = ACTIONS(323),
    [aux_sym_operator_token7] = ACTIONS(325),
    [anon_sym_u220c] = ACTIONS(323),
    [aux_sym_operator_token8] = ACTIONS(325),
    [anon_sym_u2287] = ACTIONS(323),
    [aux_sym_operator_token9] = ACTIONS(325),
    [anon_sym_u2283] = ACTIONS(323),
    [aux_sym_operator_token10] = ACTIONS(325),
    [anon_sym_u2285] = ACTIONS(323),
    [aux_sym_operator_token11] = ACTIONS(325),
    [anon_sym_u2208] = ACTIONS(323),
    [aux_sym_operator_token12] = ACTIONS(325),
    [anon_sym_NOTIN] = ACTIONS(323),
    [anon_sym_u2209] = ACTIONS(323),
    [aux_sym_operator_token13] = ACTIONS(325),
    [anon_sym_u2286] = ACTIONS(323),
    [aux_sym_operator_token14] = ACTIONS(325),
    [anon_sym_u2282] = ACTIONS(323),
    [aux_sym_operator_token15] = ACTIONS(325),
    [anon_sym_u2284] = ACTIONS(323),
    [aux_sym_operator_token16] = ACTIONS(325),
    [aux_sym_operator_token17] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_DASH_GT] = ACTIONS(323),
    [anon_sym_LT_DASH] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_any] = ACTIONS(325),
    [anon_sym_array] = ACTIONS(325),
    [anon_sym_bool] = ACTIONS(325),
    [anon_sym_datetime] = ACTIONS(325),
    [anon_sym_decimal] = ACTIONS(325),
    [anon_sym_duration] = ACTIONS(325),
    [anon_sym_float] = ACTIONS(325),
    [anon_sym_int] = ACTIONS(325),
    [anon_sym_number] = ACTIONS(325),
    [anon_sym_object] = ACTIONS(325),
    [anon_sym_string] = ACTIONS(325),
    [anon_sym_record] = ACTIONS(325),
    [anon_sym_geometry] = ACTIONS(325),
    [anon_sym_EDDSA] = ACTIONS(325),
    [anon_sym_ES256] = ACTIONS(325),
    [anon_sym_ES384] = ACTIONS(325),
    [anon_sym_ES512] = ACTIONS(325),
    [anon_sym_HS256] = ACTIONS(325),
    [anon_sym_HS384] = ACTIONS(325),
    [anon_sym_HS512] = ACTIONS(325),
    [anon_sym_PS256] = ACTIONS(325),
    [anon_sym_PS384] = ACTIONS(325),
    [anon_sym_PS512] = ACTIONS(325),
    [anon_sym_RS256] = ACTIONS(325),
    [anon_sym_RS384] = ACTIONS(325),
    [anon_sym_RS512] = ACTIONS(325),
    [aux_sym_function_token1] = ACTIONS(323),
    [aux_sym_function_token2] = ACTIONS(323),
    [anon_sym_count] = ACTIONS(325),
    [aux_sym_function_token3] = ACTIONS(323),
    [aux_sym_function_token4] = ACTIONS(323),
    [aux_sym_function_token5] = ACTIONS(323),
    [aux_sym_function_token6] = ACTIONS(323),
    [aux_sym_function_token7] = ACTIONS(323),
    [aux_sym_function_token8] = ACTIONS(323),
    [aux_sym_function_token9] = ACTIONS(323),
    [aux_sym_function_token10] = ACTIONS(325),
    [aux_sym_function_token11] = ACTIONS(323),
    [aux_sym_function_token12] = ACTIONS(325),
    [aux_sym_function_token13] = ACTIONS(323),
    [aux_sym_function_token14] = ACTIONS(323),
    [aux_sym_function_token15] = ACTIONS(323),
    [aux_sym_function_token16] = ACTIONS(325),
    [aux_sym_bool_token1] = ACTIONS(325),
    [aux_sym_bool_token2] = ACTIONS(325),
    [aux_sym_nothing_token1] = ACTIONS(325),
    [aux_sym_nothing_token2] = ACTIONS(325),
    [sym_variable] = ACTIONS(323),
    [sym_comment] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
  },
  [36] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE_SEMI] = ACTIONS(303),
    [anon_sym_RBRACE_COMMA] = ACTIONS(303),
    [aux_sym_future_token1] = ACTIONS(303),
    [aux_sym_casting_token1] = ACTIONS(303),
    [aux_sym_property_token1] = ACTIONS(305),
    [aux_sym_duration_token1] = ACTIONS(305),
    [aux_sym_constant_token1] = ACTIONS(303),
    [aux_sym_number_token1] = ACTIONS(305),
    [aux_sym_record_token1] = ACTIONS(303),
    [aux_sym_record_token2] = ACTIONS(303),
    [sym_keyword] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [aux_sym_operator_token1] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [aux_sym_operator_token2] = ACTIONS(305),
    [anon_sym_QMARK_QMARK] = ACTIONS(303),
    [anon_sym_QMARK_COLON] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [aux_sym_operator_token3] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_ISNOT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [anon_sym_QMARK_EQ] = ACTIONS(303),
    [anon_sym_STAR_EQ] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_BANG_TILDE] = ACTIONS(303),
    [anon_sym_QMARK_TILDE] = ACTIONS(303),
    [anon_sym_STAR_TILDE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [aux_sym_operator_token4] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_u00f7] = ACTIONS(303),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [aux_sym_operator_token5] = ACTIONS(305),
    [aux_sym_operator_token6] = ACTIONS(305),
    [anon_sym_u220b] = ACTIONS(303),
    [aux_sym_operator_token7] = ACTIONS(305),
    [anon_sym_u220c] = ACTIONS(303),
    [aux_sym_operator_token8] = ACTIONS(305),
    [anon_sym_u2287] = ACTIONS(303),
    [aux_sym_operator_token9] = ACTIONS(305),
    [anon_sym_u2283] = ACTIONS(303),
    [aux_sym_operator_token10] = ACTIONS(305),
    [anon_sym_u2285] = ACTIONS(303),
    [aux_sym_operator_token11] = ACTIONS(305),
    [anon_sym_u2208] = ACTIONS(303),
    [aux_sym_operator_token12] = ACTIONS(305),
    [anon_sym_NOTIN] = ACTIONS(303),
    [anon_sym_u2209] = ACTIONS(303),
    [aux_sym_operator_token13] = ACTIONS(305),
    [anon_sym_u2286] = ACTIONS(303),
    [aux_sym_operator_token14] = ACTIONS(305),
    [anon_sym_u2282] = ACTIONS(303),
    [aux_sym_operator_token15] = ACTIONS(305),
    [anon_sym_u2284] = ACTIONS(303),
    [aux_sym_operator_token16] = ACTIONS(305),
    [aux_sym_operator_token17] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_LT_DASH] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_any] = ACTIONS(305),
    [anon_sym_array] = ACTIONS(305),
    [anon_sym_bool] = ACTIONS(305),
    [anon_sym_datetime] = ACTIONS(305),
    [anon_sym_decimal] = ACTIONS(305),
    [anon_sym_duration] = ACTIONS(305),
    [anon_sym_float] = ACTIONS(305),
    [anon_sym_int] = ACTIONS(305),
    [anon_sym_number] = ACTIONS(305),
    [anon_sym_object] = ACTIONS(305),
    [anon_sym_string] = ACTIONS(305),
    [anon_sym_record] = ACTIONS(305),
    [anon_sym_geometry] = ACTIONS(305),
    [anon_sym_EDDSA] = ACTIONS(305),
    [anon_sym_ES256] = ACTIONS(305),
    [anon_sym_ES384] = ACTIONS(305),
    [anon_sym_ES512] = ACTIONS(305),
    [anon_sym_HS256] = ACTIONS(305),
    [anon_sym_HS384] = ACTIONS(305),
    [anon_sym_HS512] = ACTIONS(305),
    [anon_sym_PS256] = ACTIONS(305),
    [anon_sym_PS384] = ACTIONS(305),
    [anon_sym_PS512] = ACTIONS(305),
    [anon_sym_RS256] = ACTIONS(305),
    [anon_sym_RS384] = ACTIONS(305),
    [anon_sym_RS512] = ACTIONS(305),
    [aux_sym_function_token1] = ACTIONS(303),
    [aux_sym_function_token2] = ACTIONS(303),
    [anon_sym_count] = ACTIONS(305),
    [aux_sym_function_token3] = ACTIONS(303),
    [aux_sym_function_token4] = ACTIONS(303),
    [aux_sym_function_token5] = ACTIONS(303),
    [aux_sym_function_token6] = ACTIONS(303),
    [aux_sym_function_token7] = ACTIONS(303),
    [aux_sym_function_token8] = ACTIONS(303),
    [aux_sym_function_token9] = ACTIONS(303),
    [aux_sym_function_token10] = ACTIONS(305),
    [aux_sym_function_token11] = ACTIONS(303),
    [aux_sym_function_token12] = ACTIONS(305),
    [aux_sym_function_token13] = ACTIONS(303),
    [aux_sym_function_token14] = ACTIONS(303),
    [aux_sym_function_token15] = ACTIONS(303),
    [aux_sym_function_token16] = ACTIONS(305),
    [aux_sym_bool_token1] = ACTIONS(305),
    [aux_sym_bool_token2] = ACTIONS(305),
    [aux_sym_nothing_token1] = ACTIONS(305),
    [aux_sym_nothing_token2] = ACTIONS(305),
    [sym_variable] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
  },
  [37] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE_SEMI] = ACTIONS(299),
    [anon_sym_RBRACE_COMMA] = ACTIONS(299),
    [aux_sym_future_token1] = ACTIONS(299),
    [aux_sym_casting_token1] = ACTIONS(299),
    [aux_sym_property_token1] = ACTIONS(301),
    [aux_sym_duration_token1] = ACTIONS(301),
    [aux_sym_constant_token1] = ACTIONS(299),
    [aux_sym_number_token1] = ACTIONS(301),
    [aux_sym_record_token1] = ACTIONS(299),
    [aux_sym_record_token2] = ACTIONS(299),
    [sym_keyword] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [aux_sym_operator_token1] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [aux_sym_operator_token2] = ACTIONS(301),
    [anon_sym_QMARK_QMARK] = ACTIONS(299),
    [anon_sym_QMARK_COLON] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [aux_sym_operator_token3] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(299),
    [anon_sym_ISNOT] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_QMARK_EQ] = ACTIONS(299),
    [anon_sym_STAR_EQ] = ACTIONS(299),
    [anon_sym_TILDE] = ACTIONS(299),
    [anon_sym_BANG_TILDE] = ACTIONS(299),
    [anon_sym_QMARK_TILDE] = ACTIONS(299),
    [anon_sym_STAR_TILDE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [aux_sym_operator_token4] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(299),
    [anon_sym_u00f7] = ACTIONS(299),
    [anon_sym_STAR_STAR] = ACTIONS(299),
    [aux_sym_operator_token5] = ACTIONS(301),
    [aux_sym_operator_token6] = ACTIONS(301),
    [anon_sym_u220b] = ACTIONS(299),
    [aux_sym_operator_token7] = ACTIONS(301),
    [anon_sym_u220c] = ACTIONS(299),
    [aux_sym_operator_token8] = ACTIONS(301),
    [anon_sym_u2287] = ACTIONS(299),
    [aux_sym_operator_token9] = ACTIONS(301),
    [anon_sym_u2283] = ACTIONS(299),
    [aux_sym_operator_token10] = ACTIONS(301),
    [anon_sym_u2285] = ACTIONS(299),
    [aux_sym_operator_token11] = ACTIONS(301),
    [anon_sym_u2208] = ACTIONS(299),
    [aux_sym_operator_token12] = ACTIONS(301),
    [anon_sym_NOTIN] = ACTIONS(299),
    [anon_sym_u2209] = ACTIONS(299),
    [aux_sym_operator_token13] = ACTIONS(301),
    [anon_sym_u2286] = ACTIONS(299),
    [aux_sym_operator_token14] = ACTIONS(301),
    [anon_sym_u2282] = ACTIONS(299),
    [aux_sym_operator_token15] = ACTIONS(301),
    [anon_sym_u2284] = ACTIONS(299),
    [aux_sym_operator_token16] = ACTIONS(301),
    [aux_sym_operator_token17] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_DASH_GT] = ACTIONS(299),
    [anon_sym_LT_DASH] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_any] = ACTIONS(301),
    [anon_sym_array] = ACTIONS(301),
    [anon_sym_bool] = ACTIONS(301),
    [anon_sym_datetime] = ACTIONS(301),
    [anon_sym_decimal] = ACTIONS(301),
    [anon_sym_duration] = ACTIONS(301),
    [anon_sym_float] = ACTIONS(301),
    [anon_sym_int] = ACTIONS(301),
    [anon_sym_number] = ACTIONS(301),
    [anon_sym_object] = ACTIONS(301),
    [anon_sym_string] = ACTIONS(301),
    [anon_sym_record] = ACTIONS(301),
    [anon_sym_geometry] = ACTIONS(301),
    [anon_sym_EDDSA] = ACTIONS(301),
    [anon_sym_ES256] = ACTIONS(301),
    [anon_sym_ES384] = ACTIONS(301),
    [anon_sym_ES512] = ACTIONS(301),
    [anon_sym_HS256] = ACTIONS(301),
    [anon_sym_HS384] = ACTIONS(301),
    [anon_sym_HS512] = ACTIONS(301),
    [anon_sym_PS256] = ACTIONS(301),
    [anon_sym_PS384] = ACTIONS(301),
    [anon_sym_PS512] = ACTIONS(301),
    [anon_sym_RS256] = ACTIONS(301),
    [anon_sym_RS384] = ACTIONS(301),
    [anon_sym_RS512] = ACTIONS(301),
    [aux_sym_function_token1] = ACTIONS(299),
    [aux_sym_function_token2] = ACTIONS(299),
    [anon_sym_count] = ACTIONS(301),
    [aux_sym_function_token3] = ACTIONS(299),
    [aux_sym_function_token4] = ACTIONS(299),
    [aux_sym_function_token5] = ACTIONS(299),
    [aux_sym_function_token6] = ACTIONS(299),
    [aux_sym_function_token7] = ACTIONS(299),
    [aux_sym_function_token8] = ACTIONS(299),
    [aux_sym_function_token9] = ACTIONS(299),
    [aux_sym_function_token10] = ACTIONS(301),
    [aux_sym_function_token11] = ACTIONS(299),
    [aux_sym_function_token12] = ACTIONS(301),
    [aux_sym_function_token13] = ACTIONS(299),
    [aux_sym_function_token14] = ACTIONS(299),
    [aux_sym_function_token15] = ACTIONS(299),
    [aux_sym_function_token16] = ACTIONS(301),
    [aux_sym_bool_token1] = ACTIONS(301),
    [aux_sym_bool_token2] = ACTIONS(301),
    [aux_sym_nothing_token1] = ACTIONS(301),
    [aux_sym_nothing_token2] = ACTIONS(301),
    [sym_variable] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
  },
  [38] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE_SEMI] = ACTIONS(295),
    [anon_sym_RBRACE_COMMA] = ACTIONS(295),
    [aux_sym_future_token1] = ACTIONS(295),
    [aux_sym_casting_token1] = ACTIONS(295),
    [aux_sym_property_token1] = ACTIONS(297),
    [aux_sym_duration_token1] = ACTIONS(297),
    [aux_sym_constant_token1] = ACTIONS(295),
    [aux_sym_number_token1] = ACTIONS(297),
    [aux_sym_record_token1] = ACTIONS(295),
    [aux_sym_record_token2] = ACTIONS(295),
    [sym_keyword] = ACTIONS(297),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [aux_sym_operator_token1] = ACTIONS(297),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [aux_sym_operator_token2] = ACTIONS(297),
    [anon_sym_QMARK_QMARK] = ACTIONS(295),
    [anon_sym_QMARK_COLON] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [aux_sym_operator_token3] = ACTIONS(297),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_ISNOT] = ACTIONS(295),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_QMARK_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_BANG_TILDE] = ACTIONS(295),
    [anon_sym_QMARK_TILDE] = ACTIONS(295),
    [anon_sym_STAR_TILDE] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [aux_sym_operator_token4] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_u00f7] = ACTIONS(295),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [aux_sym_operator_token5] = ACTIONS(297),
    [aux_sym_operator_token6] = ACTIONS(297),
    [anon_sym_u220b] = ACTIONS(295),
    [aux_sym_operator_token7] = ACTIONS(297),
    [anon_sym_u220c] = ACTIONS(295),
    [aux_sym_operator_token8] = ACTIONS(297),
    [anon_sym_u2287] = ACTIONS(295),
    [aux_sym_operator_token9] = ACTIONS(297),
    [anon_sym_u2283] = ACTIONS(295),
    [aux_sym_operator_token10] = ACTIONS(297),
    [anon_sym_u2285] = ACTIONS(295),
    [aux_sym_operator_token11] = ACTIONS(297),
    [anon_sym_u2208] = ACTIONS(295),
    [aux_sym_operator_token12] = ACTIONS(297),
    [anon_sym_NOTIN] = ACTIONS(295),
    [anon_sym_u2209] = ACTIONS(295),
    [aux_sym_operator_token13] = ACTIONS(297),
    [anon_sym_u2286] = ACTIONS(295),
    [aux_sym_operator_token14] = ACTIONS(297),
    [anon_sym_u2282] = ACTIONS(295),
    [aux_sym_operator_token15] = ACTIONS(297),
    [anon_sym_u2284] = ACTIONS(295),
    [aux_sym_operator_token16] = ACTIONS(297),
    [aux_sym_operator_token17] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_LT_DASH] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_any] = ACTIONS(297),
    [anon_sym_array] = ACTIONS(297),
    [anon_sym_bool] = ACTIONS(297),
    [anon_sym_datetime] = ACTIONS(297),
    [anon_sym_decimal] = ACTIONS(297),
    [anon_sym_duration] = ACTIONS(297),
    [anon_sym_float] = ACTIONS(297),
    [anon_sym_int] = ACTIONS(297),
    [anon_sym_number] = ACTIONS(297),
    [anon_sym_object] = ACTIONS(297),
    [anon_sym_string] = ACTIONS(297),
    [anon_sym_record] = ACTIONS(297),
    [anon_sym_geometry] = ACTIONS(297),
    [anon_sym_EDDSA] = ACTIONS(297),
    [anon_sym_ES256] = ACTIONS(297),
    [anon_sym_ES384] = ACTIONS(297),
    [anon_sym_ES512] = ACTIONS(297),
    [anon_sym_HS256] = ACTIONS(297),
    [anon_sym_HS384] = ACTIONS(297),
    [anon_sym_HS512] = ACTIONS(297),
    [anon_sym_PS256] = ACTIONS(297),
    [anon_sym_PS384] = ACTIONS(297),
    [anon_sym_PS512] = ACTIONS(297),
    [anon_sym_RS256] = ACTIONS(297),
    [anon_sym_RS384] = ACTIONS(297),
    [anon_sym_RS512] = ACTIONS(297),
    [aux_sym_function_token1] = ACTIONS(295),
    [aux_sym_function_token2] = ACTIONS(295),
    [anon_sym_count] = ACTIONS(297),
    [aux_sym_function_token3] = ACTIONS(295),
    [aux_sym_function_token4] = ACTIONS(295),
    [aux_sym_function_token5] = ACTIONS(295),
    [aux_sym_function_token6] = ACTIONS(295),
    [aux_sym_function_token7] = ACTIONS(295),
    [aux_sym_function_token8] = ACTIONS(295),
    [aux_sym_function_token9] = ACTIONS(295),
    [aux_sym_function_token10] = ACTIONS(297),
    [aux_sym_function_token11] = ACTIONS(295),
    [aux_sym_function_token12] = ACTIONS(297),
    [aux_sym_function_token13] = ACTIONS(295),
    [aux_sym_function_token14] = ACTIONS(295),
    [aux_sym_function_token15] = ACTIONS(295),
    [aux_sym_function_token16] = ACTIONS(297),
    [aux_sym_bool_token1] = ACTIONS(297),
    [aux_sym_bool_token2] = ACTIONS(297),
    [aux_sym_nothing_token1] = ACTIONS(297),
    [aux_sym_nothing_token2] = ACTIONS(297),
    [sym_variable] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
  },
  [39] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE_SEMI] = ACTIONS(319),
    [anon_sym_RBRACE_COMMA] = ACTIONS(319),
    [aux_sym_future_token1] = ACTIONS(319),
    [aux_sym_casting_token1] = ACTIONS(319),
    [aux_sym_property_token1] = ACTIONS(321),
    [aux_sym_duration_token1] = ACTIONS(321),
    [aux_sym_constant_token1] = ACTIONS(319),
    [aux_sym_number_token1] = ACTIONS(321),
    [aux_sym_record_token1] = ACTIONS(319),
    [aux_sym_record_token2] = ACTIONS(319),
    [sym_keyword] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [aux_sym_operator_token1] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(319),
    [aux_sym_operator_token2] = ACTIONS(321),
    [anon_sym_QMARK_QMARK] = ACTIONS(319),
    [anon_sym_QMARK_COLON] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(321),
    [aux_sym_operator_token3] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_ISNOT] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [anon_sym_QMARK_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_BANG_TILDE] = ACTIONS(319),
    [anon_sym_QMARK_TILDE] = ACTIONS(319),
    [anon_sym_STAR_TILDE] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_STAR] = ACTIONS(321),
    [aux_sym_operator_token4] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_u00f7] = ACTIONS(319),
    [anon_sym_STAR_STAR] = ACTIONS(319),
    [aux_sym_operator_token5] = ACTIONS(321),
    [aux_sym_operator_token6] = ACTIONS(321),
    [anon_sym_u220b] = ACTIONS(319),
    [aux_sym_operator_token7] = ACTIONS(321),
    [anon_sym_u220c] = ACTIONS(319),
    [aux_sym_operator_token8] = ACTIONS(321),
    [anon_sym_u2287] = ACTIONS(319),
    [aux_sym_operator_token9] = ACTIONS(321),
    [anon_sym_u2283] = ACTIONS(319),
    [aux_sym_operator_token10] = ACTIONS(321),
    [anon_sym_u2285] = ACTIONS(319),
    [aux_sym_operator_token11] = ACTIONS(321),
    [anon_sym_u2208] = ACTIONS(319),
    [aux_sym_operator_token12] = ACTIONS(321),
    [anon_sym_NOTIN] = ACTIONS(319),
    [anon_sym_u2209] = ACTIONS(319),
    [aux_sym_operator_token13] = ACTIONS(321),
    [anon_sym_u2286] = ACTIONS(319),
    [aux_sym_operator_token14] = ACTIONS(321),
    [anon_sym_u2282] = ACTIONS(319),
    [aux_sym_operator_token15] = ACTIONS(321),
    [anon_sym_u2284] = ACTIONS(319),
    [aux_sym_operator_token16] = ACTIONS(321),
    [aux_sym_operator_token17] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_DASH_GT] = ACTIONS(319),
    [anon_sym_LT_DASH] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_any] = ACTIONS(321),
    [anon_sym_array] = ACTIONS(321),
    [anon_sym_bool] = ACTIONS(321),
    [anon_sym_datetime] = ACTIONS(321),
    [anon_sym_decimal] = ACTIONS(321),
    [anon_sym_duration] = ACTIONS(321),
    [anon_sym_float] = ACTIONS(321),
    [anon_sym_int] = ACTIONS(321),
    [anon_sym_number] = ACTIONS(321),
    [anon_sym_object] = ACTIONS(321),
    [anon_sym_string] = ACTIONS(321),
    [anon_sym_record] = ACTIONS(321),
    [anon_sym_geometry] = ACTIONS(321),
    [anon_sym_EDDSA] = ACTIONS(321),
    [anon_sym_ES256] = ACTIONS(321),
    [anon_sym_ES384] = ACTIONS(321),
    [anon_sym_ES512] = ACTIONS(321),
    [anon_sym_HS256] = ACTIONS(321),
    [anon_sym_HS384] = ACTIONS(321),
    [anon_sym_HS512] = ACTIONS(321),
    [anon_sym_PS256] = ACTIONS(321),
    [anon_sym_PS384] = ACTIONS(321),
    [anon_sym_PS512] = ACTIONS(321),
    [anon_sym_RS256] = ACTIONS(321),
    [anon_sym_RS384] = ACTIONS(321),
    [anon_sym_RS512] = ACTIONS(321),
    [aux_sym_function_token1] = ACTIONS(319),
    [aux_sym_function_token2] = ACTIONS(319),
    [anon_sym_count] = ACTIONS(321),
    [aux_sym_function_token3] = ACTIONS(319),
    [aux_sym_function_token4] = ACTIONS(319),
    [aux_sym_function_token5] = ACTIONS(319),
    [aux_sym_function_token6] = ACTIONS(319),
    [aux_sym_function_token7] = ACTIONS(319),
    [aux_sym_function_token8] = ACTIONS(319),
    [aux_sym_function_token9] = ACTIONS(319),
    [aux_sym_function_token10] = ACTIONS(321),
    [aux_sym_function_token11] = ACTIONS(319),
    [aux_sym_function_token12] = ACTIONS(321),
    [aux_sym_function_token13] = ACTIONS(319),
    [aux_sym_function_token14] = ACTIONS(319),
    [aux_sym_function_token15] = ACTIONS(319),
    [aux_sym_function_token16] = ACTIONS(321),
    [aux_sym_bool_token1] = ACTIONS(321),
    [aux_sym_bool_token2] = ACTIONS(321),
    [aux_sym_nothing_token1] = ACTIONS(321),
    [aux_sym_nothing_token2] = ACTIONS(321),
    [sym_variable] = ACTIONS(319),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
  },
  [40] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE_SEMI] = ACTIONS(315),
    [anon_sym_RBRACE_COMMA] = ACTIONS(315),
    [aux_sym_future_token1] = ACTIONS(315),
    [aux_sym_casting_token1] = ACTIONS(315),
    [aux_sym_property_token1] = ACTIONS(317),
    [aux_sym_duration_token1] = ACTIONS(317),
    [aux_sym_constant_token1] = ACTIONS(315),
    [aux_sym_number_token1] = ACTIONS(317),
    [aux_sym_record_token1] = ACTIONS(315),
    [aux_sym_record_token2] = ACTIONS(315),
    [sym_keyword] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [aux_sym_operator_token1] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [aux_sym_operator_token2] = ACTIONS(317),
    [anon_sym_QMARK_QMARK] = ACTIONS(315),
    [anon_sym_QMARK_COLON] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(317),
    [aux_sym_operator_token3] = ACTIONS(317),
    [anon_sym_BANG_EQ] = ACTIONS(315),
    [anon_sym_ISNOT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(315),
    [anon_sym_QMARK_EQ] = ACTIONS(315),
    [anon_sym_STAR_EQ] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BANG_TILDE] = ACTIONS(315),
    [anon_sym_QMARK_TILDE] = ACTIONS(315),
    [anon_sym_STAR_TILDE] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_LT_EQ] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_EQ] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [aux_sym_operator_token4] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_u00f7] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(315),
    [aux_sym_operator_token5] = ACTIONS(317),
    [aux_sym_operator_token6] = ACTIONS(317),
    [anon_sym_u220b] = ACTIONS(315),
    [aux_sym_operator_token7] = ACTIONS(317),
    [anon_sym_u220c] = ACTIONS(315),
    [aux_sym_operator_token8] = ACTIONS(317),
    [anon_sym_u2287] = ACTIONS(315),
    [aux_sym_operator_token9] = ACTIONS(317),
    [anon_sym_u2283] = ACTIONS(315),
    [aux_sym_operator_token10] = ACTIONS(317),
    [anon_sym_u2285] = ACTIONS(315),
    [aux_sym_operator_token11] = ACTIONS(317),
    [anon_sym_u2208] = ACTIONS(315),
    [aux_sym_operator_token12] = ACTIONS(317),
    [anon_sym_NOTIN] = ACTIONS(315),
    [anon_sym_u2209] = ACTIONS(315),
    [aux_sym_operator_token13] = ACTIONS(317),
    [anon_sym_u2286] = ACTIONS(315),
    [aux_sym_operator_token14] = ACTIONS(317),
    [anon_sym_u2282] = ACTIONS(315),
    [aux_sym_operator_token15] = ACTIONS(317),
    [anon_sym_u2284] = ACTIONS(315),
    [aux_sym_operator_token16] = ACTIONS(317),
    [aux_sym_operator_token17] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(315),
    [anon_sym_LT_DASH] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_any] = ACTIONS(317),
    [anon_sym_array] = ACTIONS(317),
    [anon_sym_bool] = ACTIONS(317),
    [anon_sym_datetime] = ACTIONS(317),
    [anon_sym_decimal] = ACTIONS(317),
    [anon_sym_duration] = ACTIONS(317),
    [anon_sym_float] = ACTIONS(317),
    [anon_sym_int] = ACTIONS(317),
    [anon_sym_number] = ACTIONS(317),
    [anon_sym_object] = ACTIONS(317),
    [anon_sym_string] = ACTIONS(317),
    [anon_sym_record] = ACTIONS(317),
    [anon_sym_geometry] = ACTIONS(317),
    [anon_sym_EDDSA] = ACTIONS(317),
    [anon_sym_ES256] = ACTIONS(317),
    [anon_sym_ES384] = ACTIONS(317),
    [anon_sym_ES512] = ACTIONS(317),
    [anon_sym_HS256] = ACTIONS(317),
    [anon_sym_HS384] = ACTIONS(317),
    [anon_sym_HS512] = ACTIONS(317),
    [anon_sym_PS256] = ACTIONS(317),
    [anon_sym_PS384] = ACTIONS(317),
    [anon_sym_PS512] = ACTIONS(317),
    [anon_sym_RS256] = ACTIONS(317),
    [anon_sym_RS384] = ACTIONS(317),
    [anon_sym_RS512] = ACTIONS(317),
    [aux_sym_function_token1] = ACTIONS(315),
    [aux_sym_function_token2] = ACTIONS(315),
    [anon_sym_count] = ACTIONS(317),
    [aux_sym_function_token3] = ACTIONS(315),
    [aux_sym_function_token4] = ACTIONS(315),
    [aux_sym_function_token5] = ACTIONS(315),
    [aux_sym_function_token6] = ACTIONS(315),
    [aux_sym_function_token7] = ACTIONS(315),
    [aux_sym_function_token8] = ACTIONS(315),
    [aux_sym_function_token9] = ACTIONS(315),
    [aux_sym_function_token10] = ACTIONS(317),
    [aux_sym_function_token11] = ACTIONS(315),
    [aux_sym_function_token12] = ACTIONS(317),
    [aux_sym_function_token13] = ACTIONS(315),
    [aux_sym_function_token14] = ACTIONS(315),
    [aux_sym_function_token15] = ACTIONS(315),
    [aux_sym_function_token16] = ACTIONS(317),
    [aux_sym_bool_token1] = ACTIONS(317),
    [aux_sym_bool_token2] = ACTIONS(317),
    [aux_sym_nothing_token1] = ACTIONS(317),
    [aux_sym_nothing_token2] = ACTIONS(317),
    [sym_variable] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
  },
  [41] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE_SEMI] = ACTIONS(263),
    [anon_sym_RBRACE_COMMA] = ACTIONS(263),
    [aux_sym_future_token1] = ACTIONS(263),
    [aux_sym_casting_token1] = ACTIONS(263),
    [aux_sym_property_token1] = ACTIONS(265),
    [aux_sym_duration_token1] = ACTIONS(265),
    [aux_sym_constant_token1] = ACTIONS(263),
    [aux_sym_number_token1] = ACTIONS(265),
    [aux_sym_record_token1] = ACTIONS(263),
    [aux_sym_record_token2] = ACTIONS(263),
    [sym_keyword] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [aux_sym_operator_token1] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [aux_sym_operator_token2] = ACTIONS(265),
    [anon_sym_QMARK_QMARK] = ACTIONS(263),
    [anon_sym_QMARK_COLON] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(265),
    [aux_sym_operator_token3] = ACTIONS(265),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_ISNOT] = ACTIONS(263),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_QMARK_EQ] = ACTIONS(263),
    [anon_sym_STAR_EQ] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_BANG_TILDE] = ACTIONS(263),
    [anon_sym_QMARK_TILDE] = ACTIONS(263),
    [anon_sym_STAR_TILDE] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [aux_sym_operator_token4] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_u00f7] = ACTIONS(263),
    [anon_sym_STAR_STAR] = ACTIONS(263),
    [aux_sym_operator_token5] = ACTIONS(265),
    [aux_sym_operator_token6] = ACTIONS(265),
    [anon_sym_u220b] = ACTIONS(263),
    [aux_sym_operator_token7] = ACTIONS(265),
    [anon_sym_u220c] = ACTIONS(263),
    [aux_sym_operator_token8] = ACTIONS(265),
    [anon_sym_u2287] = ACTIONS(263),
    [aux_sym_operator_token9] = ACTIONS(265),
    [anon_sym_u2283] = ACTIONS(263),
    [aux_sym_operator_token10] = ACTIONS(265),
    [anon_sym_u2285] = ACTIONS(263),
    [aux_sym_operator_token11] = ACTIONS(265),
    [anon_sym_u2208] = ACTIONS(263),
    [aux_sym_operator_token12] = ACTIONS(265),
    [anon_sym_NOTIN] = ACTIONS(263),
    [anon_sym_u2209] = ACTIONS(263),
    [aux_sym_operator_token13] = ACTIONS(265),
    [anon_sym_u2286] = ACTIONS(263),
    [aux_sym_operator_token14] = ACTIONS(265),
    [anon_sym_u2282] = ACTIONS(263),
    [aux_sym_operator_token15] = ACTIONS(265),
    [anon_sym_u2284] = ACTIONS(263),
    [aux_sym_operator_token16] = ACTIONS(265),
    [aux_sym_operator_token17] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(263),
    [anon_sym_LT_DASH] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_any] = ACTIONS(265),
    [anon_sym_array] = ACTIONS(265),
    [anon_sym_bool] = ACTIONS(265),
    [anon_sym_datetime] = ACTIONS(265),
    [anon_sym_decimal] = ACTIONS(265),
    [anon_sym_duration] = ACTIONS(265),
    [anon_sym_float] = ACTIONS(265),
    [anon_sym_int] = ACTIONS(265),
    [anon_sym_number] = ACTIONS(265),
    [anon_sym_object] = ACTIONS(265),
    [anon_sym_string] = ACTIONS(265),
    [anon_sym_record] = ACTIONS(265),
    [anon_sym_geometry] = ACTIONS(265),
    [anon_sym_EDDSA] = ACTIONS(265),
    [anon_sym_ES256] = ACTIONS(265),
    [anon_sym_ES384] = ACTIONS(265),
    [anon_sym_ES512] = ACTIONS(265),
    [anon_sym_HS256] = ACTIONS(265),
    [anon_sym_HS384] = ACTIONS(265),
    [anon_sym_HS512] = ACTIONS(265),
    [anon_sym_PS256] = ACTIONS(265),
    [anon_sym_PS384] = ACTIONS(265),
    [anon_sym_PS512] = ACTIONS(265),
    [anon_sym_RS256] = ACTIONS(265),
    [anon_sym_RS384] = ACTIONS(265),
    [anon_sym_RS512] = ACTIONS(265),
    [aux_sym_function_token1] = ACTIONS(263),
    [aux_sym_function_token2] = ACTIONS(263),
    [anon_sym_count] = ACTIONS(265),
    [aux_sym_function_token3] = ACTIONS(263),
    [aux_sym_function_token4] = ACTIONS(263),
    [aux_sym_function_token5] = ACTIONS(263),
    [aux_sym_function_token6] = ACTIONS(263),
    [aux_sym_function_token7] = ACTIONS(263),
    [aux_sym_function_token8] = ACTIONS(263),
    [aux_sym_function_token9] = ACTIONS(263),
    [aux_sym_function_token10] = ACTIONS(265),
    [aux_sym_function_token11] = ACTIONS(263),
    [aux_sym_function_token12] = ACTIONS(265),
    [aux_sym_function_token13] = ACTIONS(263),
    [aux_sym_function_token14] = ACTIONS(263),
    [aux_sym_function_token15] = ACTIONS(263),
    [aux_sym_function_token16] = ACTIONS(265),
    [aux_sym_bool_token1] = ACTIONS(265),
    [aux_sym_bool_token2] = ACTIONS(265),
    [aux_sym_nothing_token1] = ACTIONS(265),
    [aux_sym_nothing_token2] = ACTIONS(265),
    [sym_variable] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
  },
  [42] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE_SEMI] = ACTIONS(267),
    [anon_sym_RBRACE_COMMA] = ACTIONS(267),
    [aux_sym_future_token1] = ACTIONS(267),
    [aux_sym_casting_token1] = ACTIONS(267),
    [aux_sym_property_token1] = ACTIONS(269),
    [aux_sym_duration_token1] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(267),
    [aux_sym_number_token1] = ACTIONS(269),
    [aux_sym_record_token1] = ACTIONS(267),
    [aux_sym_record_token2] = ACTIONS(267),
    [sym_keyword] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(267),
    [aux_sym_operator_token1] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(267),
    [aux_sym_operator_token2] = ACTIONS(269),
    [anon_sym_QMARK_QMARK] = ACTIONS(267),
    [anon_sym_QMARK_COLON] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(269),
    [aux_sym_operator_token3] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(267),
    [anon_sym_ISNOT] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(267),
    [anon_sym_QMARK_EQ] = ACTIONS(267),
    [anon_sym_STAR_EQ] = ACTIONS(267),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_BANG_TILDE] = ACTIONS(267),
    [anon_sym_QMARK_TILDE] = ACTIONS(267),
    [anon_sym_STAR_TILDE] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_LT_EQ] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_GT_EQ] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [aux_sym_operator_token4] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(267),
    [anon_sym_u00f7] = ACTIONS(267),
    [anon_sym_STAR_STAR] = ACTIONS(267),
    [aux_sym_operator_token5] = ACTIONS(269),
    [aux_sym_operator_token6] = ACTIONS(269),
    [anon_sym_u220b] = ACTIONS(267),
    [aux_sym_operator_token7] = ACTIONS(269),
    [anon_sym_u220c] = ACTIONS(267),
    [aux_sym_operator_token8] = ACTIONS(269),
    [anon_sym_u2287] = ACTIONS(267),
    [aux_sym_operator_token9] = ACTIONS(269),
    [anon_sym_u2283] = ACTIONS(267),
    [aux_sym_operator_token10] = ACTIONS(269),
    [anon_sym_u2285] = ACTIONS(267),
    [aux_sym_operator_token11] = ACTIONS(269),
    [anon_sym_u2208] = ACTIONS(267),
    [aux_sym_operator_token12] = ACTIONS(269),
    [anon_sym_NOTIN] = ACTIONS(267),
    [anon_sym_u2209] = ACTIONS(267),
    [aux_sym_operator_token13] = ACTIONS(269),
    [anon_sym_u2286] = ACTIONS(267),
    [aux_sym_operator_token14] = ACTIONS(269),
    [anon_sym_u2282] = ACTIONS(267),
    [aux_sym_operator_token15] = ACTIONS(269),
    [anon_sym_u2284] = ACTIONS(267),
    [aux_sym_operator_token16] = ACTIONS(269),
    [aux_sym_operator_token17] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [anon_sym_LT_DASH] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_any] = ACTIONS(269),
    [anon_sym_array] = ACTIONS(269),
    [anon_sym_bool] = ACTIONS(269),
    [anon_sym_datetime] = ACTIONS(269),
    [anon_sym_decimal] = ACTIONS(269),
    [anon_sym_duration] = ACTIONS(269),
    [anon_sym_float] = ACTIONS(269),
    [anon_sym_int] = ACTIONS(269),
    [anon_sym_number] = ACTIONS(269),
    [anon_sym_object] = ACTIONS(269),
    [anon_sym_string] = ACTIONS(269),
    [anon_sym_record] = ACTIONS(269),
    [anon_sym_geometry] = ACTIONS(269),
    [anon_sym_EDDSA] = ACTIONS(269),
    [anon_sym_ES256] = ACTIONS(269),
    [anon_sym_ES384] = ACTIONS(269),
    [anon_sym_ES512] = ACTIONS(269),
    [anon_sym_HS256] = ACTIONS(269),
    [anon_sym_HS384] = ACTIONS(269),
    [anon_sym_HS512] = ACTIONS(269),
    [anon_sym_PS256] = ACTIONS(269),
    [anon_sym_PS384] = ACTIONS(269),
    [anon_sym_PS512] = ACTIONS(269),
    [anon_sym_RS256] = ACTIONS(269),
    [anon_sym_RS384] = ACTIONS(269),
    [anon_sym_RS512] = ACTIONS(269),
    [aux_sym_function_token1] = ACTIONS(267),
    [aux_sym_function_token2] = ACTIONS(267),
    [anon_sym_count] = ACTIONS(269),
    [aux_sym_function_token3] = ACTIONS(267),
    [aux_sym_function_token4] = ACTIONS(267),
    [aux_sym_function_token5] = ACTIONS(267),
    [aux_sym_function_token6] = ACTIONS(267),
    [aux_sym_function_token7] = ACTIONS(267),
    [aux_sym_function_token8] = ACTIONS(267),
    [aux_sym_function_token9] = ACTIONS(267),
    [aux_sym_function_token10] = ACTIONS(269),
    [aux_sym_function_token11] = ACTIONS(267),
    [aux_sym_function_token12] = ACTIONS(269),
    [aux_sym_function_token13] = ACTIONS(267),
    [aux_sym_function_token14] = ACTIONS(267),
    [aux_sym_function_token15] = ACTIONS(267),
    [aux_sym_function_token16] = ACTIONS(269),
    [aux_sym_bool_token1] = ACTIONS(269),
    [aux_sym_bool_token2] = ACTIONS(269),
    [aux_sym_nothing_token1] = ACTIONS(269),
    [aux_sym_nothing_token2] = ACTIONS(269),
    [sym_variable] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
  },
  [43] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE_SEMI] = ACTIONS(271),
    [anon_sym_RBRACE_COMMA] = ACTIONS(271),
    [aux_sym_future_token1] = ACTIONS(271),
    [aux_sym_casting_token1] = ACTIONS(271),
    [aux_sym_property_token1] = ACTIONS(273),
    [aux_sym_duration_token1] = ACTIONS(273),
    [aux_sym_constant_token1] = ACTIONS(271),
    [aux_sym_number_token1] = ACTIONS(273),
    [aux_sym_record_token1] = ACTIONS(271),
    [aux_sym_record_token2] = ACTIONS(271),
    [sym_keyword] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [aux_sym_operator_token1] = ACTIONS(273),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [aux_sym_operator_token2] = ACTIONS(273),
    [anon_sym_QMARK_QMARK] = ACTIONS(271),
    [anon_sym_QMARK_COLON] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(273),
    [aux_sym_operator_token3] = ACTIONS(273),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_ISNOT] = ACTIONS(271),
    [anon_sym_EQ_EQ] = ACTIONS(271),
    [anon_sym_QMARK_EQ] = ACTIONS(271),
    [anon_sym_STAR_EQ] = ACTIONS(271),
    [anon_sym_TILDE] = ACTIONS(271),
    [anon_sym_BANG_TILDE] = ACTIONS(271),
    [anon_sym_QMARK_TILDE] = ACTIONS(271),
    [anon_sym_STAR_TILDE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [aux_sym_operator_token4] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(271),
    [anon_sym_u00f7] = ACTIONS(271),
    [anon_sym_STAR_STAR] = ACTIONS(271),
    [aux_sym_operator_token5] = ACTIONS(273),
    [aux_sym_operator_token6] = ACTIONS(273),
    [anon_sym_u220b] = ACTIONS(271),
    [aux_sym_operator_token7] = ACTIONS(273),
    [anon_sym_u220c] = ACTIONS(271),
    [aux_sym_operator_token8] = ACTIONS(273),
    [anon_sym_u2287] = ACTIONS(271),
    [aux_sym_operator_token9] = ACTIONS(273),
    [anon_sym_u2283] = ACTIONS(271),
    [aux_sym_operator_token10] = ACTIONS(273),
    [anon_sym_u2285] = ACTIONS(271),
    [aux_sym_operator_token11] = ACTIONS(273),
    [anon_sym_u2208] = ACTIONS(271),
    [aux_sym_operator_token12] = ACTIONS(273),
    [anon_sym_NOTIN] = ACTIONS(271),
    [anon_sym_u2209] = ACTIONS(271),
    [aux_sym_operator_token13] = ACTIONS(273),
    [anon_sym_u2286] = ACTIONS(271),
    [aux_sym_operator_token14] = ACTIONS(273),
    [anon_sym_u2282] = ACTIONS(271),
    [aux_sym_operator_token15] = ACTIONS(273),
    [anon_sym_u2284] = ACTIONS(271),
    [aux_sym_operator_token16] = ACTIONS(273),
    [aux_sym_operator_token17] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_any] = ACTIONS(273),
    [anon_sym_array] = ACTIONS(273),
    [anon_sym_bool] = ACTIONS(273),
    [anon_sym_datetime] = ACTIONS(273),
    [anon_sym_decimal] = ACTIONS(273),
    [anon_sym_duration] = ACTIONS(273),
    [anon_sym_float] = ACTIONS(273),
    [anon_sym_int] = ACTIONS(273),
    [anon_sym_number] = ACTIONS(273),
    [anon_sym_object] = ACTIONS(273),
    [anon_sym_string] = ACTIONS(273),
    [anon_sym_record] = ACTIONS(273),
    [anon_sym_geometry] = ACTIONS(273),
    [anon_sym_EDDSA] = ACTIONS(273),
    [anon_sym_ES256] = ACTIONS(273),
    [anon_sym_ES384] = ACTIONS(273),
    [anon_sym_ES512] = ACTIONS(273),
    [anon_sym_HS256] = ACTIONS(273),
    [anon_sym_HS384] = ACTIONS(273),
    [anon_sym_HS512] = ACTIONS(273),
    [anon_sym_PS256] = ACTIONS(273),
    [anon_sym_PS384] = ACTIONS(273),
    [anon_sym_PS512] = ACTIONS(273),
    [anon_sym_RS256] = ACTIONS(273),
    [anon_sym_RS384] = ACTIONS(273),
    [anon_sym_RS512] = ACTIONS(273),
    [aux_sym_function_token1] = ACTIONS(271),
    [aux_sym_function_token2] = ACTIONS(271),
    [anon_sym_count] = ACTIONS(273),
    [aux_sym_function_token3] = ACTIONS(271),
    [aux_sym_function_token4] = ACTIONS(271),
    [aux_sym_function_token5] = ACTIONS(271),
    [aux_sym_function_token6] = ACTIONS(271),
    [aux_sym_function_token7] = ACTIONS(271),
    [aux_sym_function_token8] = ACTIONS(271),
    [aux_sym_function_token9] = ACTIONS(271),
    [aux_sym_function_token10] = ACTIONS(273),
    [aux_sym_function_token11] = ACTIONS(271),
    [aux_sym_function_token12] = ACTIONS(273),
    [aux_sym_function_token13] = ACTIONS(271),
    [aux_sym_function_token14] = ACTIONS(271),
    [aux_sym_function_token15] = ACTIONS(271),
    [aux_sym_function_token16] = ACTIONS(273),
    [aux_sym_bool_token1] = ACTIONS(273),
    [aux_sym_bool_token2] = ACTIONS(273),
    [aux_sym_nothing_token1] = ACTIONS(273),
    [aux_sym_nothing_token2] = ACTIONS(273),
    [sym_variable] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
  },
  [44] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE_SEMI] = ACTIONS(275),
    [anon_sym_RBRACE_COMMA] = ACTIONS(275),
    [aux_sym_future_token1] = ACTIONS(275),
    [aux_sym_casting_token1] = ACTIONS(275),
    [aux_sym_property_token1] = ACTIONS(277),
    [aux_sym_duration_token1] = ACTIONS(277),
    [aux_sym_constant_token1] = ACTIONS(275),
    [aux_sym_number_token1] = ACTIONS(277),
    [aux_sym_record_token1] = ACTIONS(275),
    [aux_sym_record_token2] = ACTIONS(275),
    [sym_keyword] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [aux_sym_operator_token1] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_operator_token2] = ACTIONS(277),
    [anon_sym_QMARK_QMARK] = ACTIONS(275),
    [anon_sym_QMARK_COLON] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(277),
    [aux_sym_operator_token3] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_ISNOT] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_QMARK_EQ] = ACTIONS(275),
    [anon_sym_STAR_EQ] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_BANG_TILDE] = ACTIONS(275),
    [anon_sym_QMARK_TILDE] = ACTIONS(275),
    [anon_sym_STAR_TILDE] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [aux_sym_operator_token4] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_u00f7] = ACTIONS(275),
    [anon_sym_STAR_STAR] = ACTIONS(275),
    [aux_sym_operator_token5] = ACTIONS(277),
    [aux_sym_operator_token6] = ACTIONS(277),
    [anon_sym_u220b] = ACTIONS(275),
    [aux_sym_operator_token7] = ACTIONS(277),
    [anon_sym_u220c] = ACTIONS(275),
    [aux_sym_operator_token8] = ACTIONS(277),
    [anon_sym_u2287] = ACTIONS(275),
    [aux_sym_operator_token9] = ACTIONS(277),
    [anon_sym_u2283] = ACTIONS(275),
    [aux_sym_operator_token10] = ACTIONS(277),
    [anon_sym_u2285] = ACTIONS(275),
    [aux_sym_operator_token11] = ACTIONS(277),
    [anon_sym_u2208] = ACTIONS(275),
    [aux_sym_operator_token12] = ACTIONS(277),
    [anon_sym_NOTIN] = ACTIONS(275),
    [anon_sym_u2209] = ACTIONS(275),
    [aux_sym_operator_token13] = ACTIONS(277),
    [anon_sym_u2286] = ACTIONS(275),
    [aux_sym_operator_token14] = ACTIONS(277),
    [anon_sym_u2282] = ACTIONS(275),
    [aux_sym_operator_token15] = ACTIONS(277),
    [anon_sym_u2284] = ACTIONS(275),
    [aux_sym_operator_token16] = ACTIONS(277),
    [aux_sym_operator_token17] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_DASH_GT] = ACTIONS(275),
    [anon_sym_LT_DASH] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_any] = ACTIONS(277),
    [anon_sym_array] = ACTIONS(277),
    [anon_sym_bool] = ACTIONS(277),
    [anon_sym_datetime] = ACTIONS(277),
    [anon_sym_decimal] = ACTIONS(277),
    [anon_sym_duration] = ACTIONS(277),
    [anon_sym_float] = ACTIONS(277),
    [anon_sym_int] = ACTIONS(277),
    [anon_sym_number] = ACTIONS(277),
    [anon_sym_object] = ACTIONS(277),
    [anon_sym_string] = ACTIONS(277),
    [anon_sym_record] = ACTIONS(277),
    [anon_sym_geometry] = ACTIONS(277),
    [anon_sym_EDDSA] = ACTIONS(277),
    [anon_sym_ES256] = ACTIONS(277),
    [anon_sym_ES384] = ACTIONS(277),
    [anon_sym_ES512] = ACTIONS(277),
    [anon_sym_HS256] = ACTIONS(277),
    [anon_sym_HS384] = ACTIONS(277),
    [anon_sym_HS512] = ACTIONS(277),
    [anon_sym_PS256] = ACTIONS(277),
    [anon_sym_PS384] = ACTIONS(277),
    [anon_sym_PS512] = ACTIONS(277),
    [anon_sym_RS256] = ACTIONS(277),
    [anon_sym_RS384] = ACTIONS(277),
    [anon_sym_RS512] = ACTIONS(277),
    [aux_sym_function_token1] = ACTIONS(275),
    [aux_sym_function_token2] = ACTIONS(275),
    [anon_sym_count] = ACTIONS(277),
    [aux_sym_function_token3] = ACTIONS(275),
    [aux_sym_function_token4] = ACTIONS(275),
    [aux_sym_function_token5] = ACTIONS(275),
    [aux_sym_function_token6] = ACTIONS(275),
    [aux_sym_function_token7] = ACTIONS(275),
    [aux_sym_function_token8] = ACTIONS(275),
    [aux_sym_function_token9] = ACTIONS(275),
    [aux_sym_function_token10] = ACTIONS(277),
    [aux_sym_function_token11] = ACTIONS(275),
    [aux_sym_function_token12] = ACTIONS(277),
    [aux_sym_function_token13] = ACTIONS(275),
    [aux_sym_function_token14] = ACTIONS(275),
    [aux_sym_function_token15] = ACTIONS(275),
    [aux_sym_function_token16] = ACTIONS(277),
    [aux_sym_bool_token1] = ACTIONS(277),
    [aux_sym_bool_token2] = ACTIONS(277),
    [aux_sym_nothing_token1] = ACTIONS(277),
    [aux_sym_nothing_token2] = ACTIONS(277),
    [sym_variable] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
  },
  [45] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE_SEMI] = ACTIONS(279),
    [anon_sym_RBRACE_COMMA] = ACTIONS(279),
    [aux_sym_future_token1] = ACTIONS(279),
    [aux_sym_casting_token1] = ACTIONS(279),
    [aux_sym_property_token1] = ACTIONS(281),
    [aux_sym_duration_token1] = ACTIONS(281),
    [aux_sym_constant_token1] = ACTIONS(279),
    [aux_sym_number_token1] = ACTIONS(281),
    [aux_sym_record_token1] = ACTIONS(279),
    [aux_sym_record_token2] = ACTIONS(279),
    [sym_keyword] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [aux_sym_operator_token1] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [aux_sym_operator_token2] = ACTIONS(281),
    [anon_sym_QMARK_QMARK] = ACTIONS(279),
    [anon_sym_QMARK_COLON] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(281),
    [aux_sym_operator_token3] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_ISNOT] = ACTIONS(279),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_QMARK_EQ] = ACTIONS(279),
    [anon_sym_STAR_EQ] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_BANG_TILDE] = ACTIONS(279),
    [anon_sym_QMARK_TILDE] = ACTIONS(279),
    [anon_sym_STAR_TILDE] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(279),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(281),
    [aux_sym_operator_token4] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_u00f7] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(279),
    [aux_sym_operator_token5] = ACTIONS(281),
    [aux_sym_operator_token6] = ACTIONS(281),
    [anon_sym_u220b] = ACTIONS(279),
    [aux_sym_operator_token7] = ACTIONS(281),
    [anon_sym_u220c] = ACTIONS(279),
    [aux_sym_operator_token8] = ACTIONS(281),
    [anon_sym_u2287] = ACTIONS(279),
    [aux_sym_operator_token9] = ACTIONS(281),
    [anon_sym_u2283] = ACTIONS(279),
    [aux_sym_operator_token10] = ACTIONS(281),
    [anon_sym_u2285] = ACTIONS(279),
    [aux_sym_operator_token11] = ACTIONS(281),
    [anon_sym_u2208] = ACTIONS(279),
    [aux_sym_operator_token12] = ACTIONS(281),
    [anon_sym_NOTIN] = ACTIONS(279),
    [anon_sym_u2209] = ACTIONS(279),
    [aux_sym_operator_token13] = ACTIONS(281),
    [anon_sym_u2286] = ACTIONS(279),
    [aux_sym_operator_token14] = ACTIONS(281),
    [anon_sym_u2282] = ACTIONS(279),
    [aux_sym_operator_token15] = ACTIONS(281),
    [anon_sym_u2284] = ACTIONS(279),
    [aux_sym_operator_token16] = ACTIONS(281),
    [aux_sym_operator_token17] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_DASH_GT] = ACTIONS(279),
    [anon_sym_LT_DASH] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_any] = ACTIONS(281),
    [anon_sym_array] = ACTIONS(281),
    [anon_sym_bool] = ACTIONS(281),
    [anon_sym_datetime] = ACTIONS(281),
    [anon_sym_decimal] = ACTIONS(281),
    [anon_sym_duration] = ACTIONS(281),
    [anon_sym_float] = ACTIONS(281),
    [anon_sym_int] = ACTIONS(281),
    [anon_sym_number] = ACTIONS(281),
    [anon_sym_object] = ACTIONS(281),
    [anon_sym_string] = ACTIONS(281),
    [anon_sym_record] = ACTIONS(281),
    [anon_sym_geometry] = ACTIONS(281),
    [anon_sym_EDDSA] = ACTIONS(281),
    [anon_sym_ES256] = ACTIONS(281),
    [anon_sym_ES384] = ACTIONS(281),
    [anon_sym_ES512] = ACTIONS(281),
    [anon_sym_HS256] = ACTIONS(281),
    [anon_sym_HS384] = ACTIONS(281),
    [anon_sym_HS512] = ACTIONS(281),
    [anon_sym_PS256] = ACTIONS(281),
    [anon_sym_PS384] = ACTIONS(281),
    [anon_sym_PS512] = ACTIONS(281),
    [anon_sym_RS256] = ACTIONS(281),
    [anon_sym_RS384] = ACTIONS(281),
    [anon_sym_RS512] = ACTIONS(281),
    [aux_sym_function_token1] = ACTIONS(279),
    [aux_sym_function_token2] = ACTIONS(279),
    [anon_sym_count] = ACTIONS(281),
    [aux_sym_function_token3] = ACTIONS(279),
    [aux_sym_function_token4] = ACTIONS(279),
    [aux_sym_function_token5] = ACTIONS(279),
    [aux_sym_function_token6] = ACTIONS(279),
    [aux_sym_function_token7] = ACTIONS(279),
    [aux_sym_function_token8] = ACTIONS(279),
    [aux_sym_function_token9] = ACTIONS(279),
    [aux_sym_function_token10] = ACTIONS(281),
    [aux_sym_function_token11] = ACTIONS(279),
    [aux_sym_function_token12] = ACTIONS(281),
    [aux_sym_function_token13] = ACTIONS(279),
    [aux_sym_function_token14] = ACTIONS(279),
    [aux_sym_function_token15] = ACTIONS(279),
    [aux_sym_function_token16] = ACTIONS(281),
    [aux_sym_bool_token1] = ACTIONS(281),
    [aux_sym_bool_token2] = ACTIONS(281),
    [aux_sym_nothing_token1] = ACTIONS(281),
    [aux_sym_nothing_token2] = ACTIONS(281),
    [sym_variable] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
  },
  [46] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE_SEMI] = ACTIONS(283),
    [anon_sym_RBRACE_COMMA] = ACTIONS(283),
    [aux_sym_future_token1] = ACTIONS(283),
    [aux_sym_casting_token1] = ACTIONS(283),
    [aux_sym_property_token1] = ACTIONS(285),
    [aux_sym_duration_token1] = ACTIONS(285),
    [aux_sym_constant_token1] = ACTIONS(283),
    [aux_sym_number_token1] = ACTIONS(285),
    [aux_sym_record_token1] = ACTIONS(283),
    [aux_sym_record_token2] = ACTIONS(283),
    [sym_keyword] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(283),
    [aux_sym_operator_token1] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(283),
    [aux_sym_operator_token2] = ACTIONS(285),
    [anon_sym_QMARK_QMARK] = ACTIONS(283),
    [anon_sym_QMARK_COLON] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(285),
    [aux_sym_operator_token3] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(283),
    [anon_sym_ISNOT] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(283),
    [anon_sym_QMARK_EQ] = ACTIONS(283),
    [anon_sym_STAR_EQ] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_BANG_TILDE] = ACTIONS(283),
    [anon_sym_QMARK_TILDE] = ACTIONS(283),
    [anon_sym_STAR_TILDE] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(283),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [aux_sym_operator_token4] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(283),
    [anon_sym_u00f7] = ACTIONS(283),
    [anon_sym_STAR_STAR] = ACTIONS(283),
    [aux_sym_operator_token5] = ACTIONS(285),
    [aux_sym_operator_token6] = ACTIONS(285),
    [anon_sym_u220b] = ACTIONS(283),
    [aux_sym_operator_token7] = ACTIONS(285),
    [anon_sym_u220c] = ACTIONS(283),
    [aux_sym_operator_token8] = ACTIONS(285),
    [anon_sym_u2287] = ACTIONS(283),
    [aux_sym_operator_token9] = ACTIONS(285),
    [anon_sym_u2283] = ACTIONS(283),
    [aux_sym_operator_token10] = ACTIONS(285),
    [anon_sym_u2285] = ACTIONS(283),
    [aux_sym_operator_token11] = ACTIONS(285),
    [anon_sym_u2208] = ACTIONS(283),
    [aux_sym_operator_token12] = ACTIONS(285),
    [anon_sym_NOTIN] = ACTIONS(283),
    [anon_sym_u2209] = ACTIONS(283),
    [aux_sym_operator_token13] = ACTIONS(285),
    [anon_sym_u2286] = ACTIONS(283),
    [aux_sym_operator_token14] = ACTIONS(285),
    [anon_sym_u2282] = ACTIONS(283),
    [aux_sym_operator_token15] = ACTIONS(285),
    [anon_sym_u2284] = ACTIONS(283),
    [aux_sym_operator_token16] = ACTIONS(285),
    [aux_sym_operator_token17] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_LT_DASH] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_any] = ACTIONS(285),
    [anon_sym_array] = ACTIONS(285),
    [anon_sym_bool] = ACTIONS(285),
    [anon_sym_datetime] = ACTIONS(285),
    [anon_sym_decimal] = ACTIONS(285),
    [anon_sym_duration] = ACTIONS(285),
    [anon_sym_float] = ACTIONS(285),
    [anon_sym_int] = ACTIONS(285),
    [anon_sym_number] = ACTIONS(285),
    [anon_sym_object] = ACTIONS(285),
    [anon_sym_string] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_geometry] = ACTIONS(285),
    [anon_sym_EDDSA] = ACTIONS(285),
    [anon_sym_ES256] = ACTIONS(285),
    [anon_sym_ES384] = ACTIONS(285),
    [anon_sym_ES512] = ACTIONS(285),
    [anon_sym_HS256] = ACTIONS(285),
    [anon_sym_HS384] = ACTIONS(285),
    [anon_sym_HS512] = ACTIONS(285),
    [anon_sym_PS256] = ACTIONS(285),
    [anon_sym_PS384] = ACTIONS(285),
    [anon_sym_PS512] = ACTIONS(285),
    [anon_sym_RS256] = ACTIONS(285),
    [anon_sym_RS384] = ACTIONS(285),
    [anon_sym_RS512] = ACTIONS(285),
    [aux_sym_function_token1] = ACTIONS(283),
    [aux_sym_function_token2] = ACTIONS(283),
    [anon_sym_count] = ACTIONS(285),
    [aux_sym_function_token3] = ACTIONS(283),
    [aux_sym_function_token4] = ACTIONS(283),
    [aux_sym_function_token5] = ACTIONS(283),
    [aux_sym_function_token6] = ACTIONS(283),
    [aux_sym_function_token7] = ACTIONS(283),
    [aux_sym_function_token8] = ACTIONS(283),
    [aux_sym_function_token9] = ACTIONS(283),
    [aux_sym_function_token10] = ACTIONS(285),
    [aux_sym_function_token11] = ACTIONS(283),
    [aux_sym_function_token12] = ACTIONS(285),
    [aux_sym_function_token13] = ACTIONS(283),
    [aux_sym_function_token14] = ACTIONS(283),
    [aux_sym_function_token15] = ACTIONS(283),
    [aux_sym_function_token16] = ACTIONS(285),
    [aux_sym_bool_token1] = ACTIONS(285),
    [aux_sym_bool_token2] = ACTIONS(285),
    [aux_sym_nothing_token1] = ACTIONS(285),
    [aux_sym_nothing_token2] = ACTIONS(285),
    [sym_variable] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
  },
  [47] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE_SEMI] = ACTIONS(287),
    [anon_sym_RBRACE_COMMA] = ACTIONS(287),
    [aux_sym_future_token1] = ACTIONS(287),
    [aux_sym_casting_token1] = ACTIONS(287),
    [aux_sym_property_token1] = ACTIONS(289),
    [aux_sym_duration_token1] = ACTIONS(289),
    [aux_sym_constant_token1] = ACTIONS(287),
    [aux_sym_number_token1] = ACTIONS(289),
    [aux_sym_record_token1] = ACTIONS(287),
    [aux_sym_record_token2] = ACTIONS(287),
    [sym_keyword] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [aux_sym_operator_token1] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [aux_sym_operator_token2] = ACTIONS(289),
    [anon_sym_QMARK_QMARK] = ACTIONS(287),
    [anon_sym_QMARK_COLON] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(289),
    [aux_sym_operator_token3] = ACTIONS(289),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_ISNOT] = ACTIONS(287),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_QMARK_EQ] = ACTIONS(287),
    [anon_sym_STAR_EQ] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_BANG_TILDE] = ACTIONS(287),
    [anon_sym_QMARK_TILDE] = ACTIONS(287),
    [anon_sym_STAR_TILDE] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [aux_sym_operator_token4] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_u00f7] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [aux_sym_operator_token5] = ACTIONS(289),
    [aux_sym_operator_token6] = ACTIONS(289),
    [anon_sym_u220b] = ACTIONS(287),
    [aux_sym_operator_token7] = ACTIONS(289),
    [anon_sym_u220c] = ACTIONS(287),
    [aux_sym_operator_token8] = ACTIONS(289),
    [anon_sym_u2287] = ACTIONS(287),
    [aux_sym_operator_token9] = ACTIONS(289),
    [anon_sym_u2283] = ACTIONS(287),
    [aux_sym_operator_token10] = ACTIONS(289),
    [anon_sym_u2285] = ACTIONS(287),
    [aux_sym_operator_token11] = ACTIONS(289),
    [anon_sym_u2208] = ACTIONS(287),
    [aux_sym_operator_token12] = ACTIONS(289),
    [anon_sym_NOTIN] = ACTIONS(287),
    [anon_sym_u2209] = ACTIONS(287),
    [aux_sym_operator_token13] = ACTIONS(289),
    [anon_sym_u2286] = ACTIONS(287),
    [aux_sym_operator_token14] = ACTIONS(289),
    [anon_sym_u2282] = ACTIONS(287),
    [aux_sym_operator_token15] = ACTIONS(289),
    [anon_sym_u2284] = ACTIONS(287),
    [aux_sym_operator_token16] = ACTIONS(289),
    [aux_sym_operator_token17] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [anon_sym_LT_DASH] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_any] = ACTIONS(289),
    [anon_sym_array] = ACTIONS(289),
    [anon_sym_bool] = ACTIONS(289),
    [anon_sym_datetime] = ACTIONS(289),
    [anon_sym_decimal] = ACTIONS(289),
    [anon_sym_duration] = ACTIONS(289),
    [anon_sym_float] = ACTIONS(289),
    [anon_sym_int] = ACTIONS(289),
    [anon_sym_number] = ACTIONS(289),
    [anon_sym_object] = ACTIONS(289),
    [anon_sym_string] = ACTIONS(289),
    [anon_sym_record] = ACTIONS(289),
    [anon_sym_geometry] = ACTIONS(289),
    [anon_sym_EDDSA] = ACTIONS(289),
    [anon_sym_ES256] = ACTIONS(289),
    [anon_sym_ES384] = ACTIONS(289),
    [anon_sym_ES512] = ACTIONS(289),
    [anon_sym_HS256] = ACTIONS(289),
    [anon_sym_HS384] = ACTIONS(289),
    [anon_sym_HS512] = ACTIONS(289),
    [anon_sym_PS256] = ACTIONS(289),
    [anon_sym_PS384] = ACTIONS(289),
    [anon_sym_PS512] = ACTIONS(289),
    [anon_sym_RS256] = ACTIONS(289),
    [anon_sym_RS384] = ACTIONS(289),
    [anon_sym_RS512] = ACTIONS(289),
    [aux_sym_function_token1] = ACTIONS(287),
    [aux_sym_function_token2] = ACTIONS(287),
    [anon_sym_count] = ACTIONS(289),
    [aux_sym_function_token3] = ACTIONS(287),
    [aux_sym_function_token4] = ACTIONS(287),
    [aux_sym_function_token5] = ACTIONS(287),
    [aux_sym_function_token6] = ACTIONS(287),
    [aux_sym_function_token7] = ACTIONS(287),
    [aux_sym_function_token8] = ACTIONS(287),
    [aux_sym_function_token9] = ACTIONS(287),
    [aux_sym_function_token10] = ACTIONS(289),
    [aux_sym_function_token11] = ACTIONS(287),
    [aux_sym_function_token12] = ACTIONS(289),
    [aux_sym_function_token13] = ACTIONS(287),
    [aux_sym_function_token14] = ACTIONS(287),
    [aux_sym_function_token15] = ACTIONS(287),
    [aux_sym_function_token16] = ACTIONS(289),
    [aux_sym_bool_token1] = ACTIONS(289),
    [aux_sym_bool_token2] = ACTIONS(289),
    [aux_sym_nothing_token1] = ACTIONS(289),
    [aux_sym_nothing_token2] = ACTIONS(289),
    [sym_variable] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [13] = 4,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      aux_sym_string_token3,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [26] = 4,
    ACTIONS(345), 1,
      anon_sym_BSLASH,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      aux_sym_string_token3,
    STATE(50), 1,
      aux_sym_string_repeat2,
  [39] = 4,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [52] = 4,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      aux_sym_string_token3,
    STATE(50), 1,
      aux_sym_string_repeat2,
  [65] = 4,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [78] = 4,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
    ACTIONS(369), 1,
      aux_sym_string_token1,
    STATE(56), 1,
      aux_sym_string_repeat1,
  [91] = 4,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_string_token3,
    STATE(57), 1,
      aux_sym_string_repeat2,
  [104] = 4,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [117] = 4,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      aux_sym_string_token3,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_string_repeat2,
  [130] = 2,
    ACTIONS(375), 1,
      aux_sym_string_token3,
    ACTIONS(348), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [138] = 2,
    ACTIONS(377), 1,
      aux_sym_string_token1,
    ACTIONS(353), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
  [146] = 1,
    ACTIONS(379), 2,
      anon_sym_RBRACE_SEMI,
      anon_sym_RBRACE_COMMA,
  [151] = 1,
    ACTIONS(381), 2,
      anon_sym_RBRACE_SEMI,
      anon_sym_RBRACE_COMMA,
  [156] = 1,
    ACTIONS(383), 1,
      aux_sym_string_token2,
  [160] = 1,
    ACTIONS(385), 1,
      aux_sym_string_token2,
  [164] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(48)] = 0,
  [SMALL_STATE(49)] = 13,
  [SMALL_STATE(50)] = 26,
  [SMALL_STATE(51)] = 39,
  [SMALL_STATE(52)] = 52,
  [SMALL_STATE(53)] = 65,
  [SMALL_STATE(54)] = 78,
  [SMALL_STATE(55)] = 91,
  [SMALL_STATE(56)] = 104,
  [SMALL_STATE(57)] = 117,
  [SMALL_STATE(58)] = 130,
  [SMALL_STATE(59)] = 138,
  [SMALL_STATE(60)] = 146,
  [SMALL_STATE(61)] = 151,
  [SMALL_STATE(62)] = 156,
  [SMALL_STATE(63)] = 160,
  [SMALL_STATE(64)] = 164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_content, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_function, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting_function, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_algotype, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_algotype, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nothing, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nothing, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_casting, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_casting, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_future, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_future, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(62),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_surrealql(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
