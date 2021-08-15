#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym_method = 1,
  sym_url = 2,
  anon_sym_COLON = 3,
  sym_name = 4,
  sym_value = 5,
  sym_json_body_start = 6,
  sym_json_body_end = 7,
  sym_comment = 8,
  aux_sym__whitespace_token1 = 9,
  sym_source_file = 10,
  sym__definition = 11,
  sym_request = 12,
  sym_header = 13,
  sym_json_body = 14,
  aux_sym__whitespace = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [sym_url] = "url",
  [anon_sym_COLON] = ":",
  [sym_name] = "name",
  [sym_value] = "value",
  [sym_json_body_start] = "json_body_start",
  [sym_json_body_end] = "json_body_end",
  [sym_comment] = "comment",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_json_body] = "json_body",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_name] = sym_name,
  [sym_value] = sym_value,
  [sym_json_body_start] = sym_json_body_start,
  [sym_json_body_end] = sym_json_body_end,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_json_body] = sym_json_body,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body_start] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body_end] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_end = 1,
  field_method = 2,
  field_name = 3,
  field_start = 4,
  field_url = 5,
  field_value = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_end] = "end",
  [field_method] = "method",
  [field_name] = "name",
  [field_start] = "start",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_end, 1},
    {field_start, 0},
  [2] =
    {field_method, 0},
    {field_url, 2},
  [4] =
    {field_name, 0},
    {field_name, 1},
    {field_value, 3},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(38);
      if (lookahead == 'G') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(36);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ',' ||
          lookahead == ':') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 's') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'w') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'w') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(21);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_method);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(21);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'U') ADVANCE(45);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_json_body_start);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_json_body_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_json_body_start] = ACTIONS(1),
    [sym_json_body_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__whitespace_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__definition] = STATE(2),
    [sym_request] = STATE(2),
    [sym_header] = STATE(2),
    [sym_json_body] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_method] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [sym_json_body_start] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_request] = STATE(3),
    [sym_header] = STATE(3),
    [sym_json_body] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_method] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [sym_json_body_start] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_request] = STATE(3),
    [sym_header] = STATE(3),
    [sym_json_body] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_method] = ACTIONS(17),
    [sym_name] = ACTIONS(20),
    [sym_json_body_start] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym_json_body_start,
    ACTIONS(28), 2,
      sym_method,
      sym_name,
  [12] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_json_body_start,
    ACTIONS(32), 2,
      sym_method,
      sym_name,
  [24] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    ACTIONS(34), 2,
      sym_url,
      sym_value,
  [38] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_json_body_start,
    ACTIONS(41), 2,
      sym_method,
      sym_name,
  [50] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_url,
    ACTIONS(45), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
  [63] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym__whitespace_token1,
    ACTIONS(47), 1,
      sym_value,
    STATE(6), 1,
      aux_sym__whitespace,
  [76] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
  [86] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym__whitespace_token1,
    STATE(9), 1,
      aux_sym__whitespace,
  [96] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COLON,
  [103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_json_body_end,
  [110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 76,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 103,
  [SMALL_STATE(14)] = 110,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, .production_id = 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, .production_id = 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
