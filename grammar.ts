const TYPE_ALGORITHMS = [
  "EDDSA",
  "ES256",
  "ES384",
  "ES512",
  "HS256",
  "HS384",
  "HS512",
  "PS256",
  "PS384",
  "PS512",
  "RS256",
  "RS384",
  "RS512",
] as const;

const TYPES = [
  "any",
  "array",
  "bool",
  "datetime",
  "decimal",
  "duration",
  "float",
  "int",
  "number",
  "object",
  "string",
  "record",
  "geometry",
] as const;

const KEYWORDS = [
  "USE",
  "NS",
  "DB",
  "LET",
  "BEGIN",
  "TRANSACTION",
  "CANCEL",
  "COMMIT",
  "IF",
  "ELSE",
  "THEN",
  "END",
  "SELECT",
  "FROM",
  "WHERE",
  "SPLIT",
  "AT",
  "GROUP",
  "BY",
  "ORDER",
  "COLLATE",
  "NUMERIC",
  "ASC",
  "DESC",
  "LIMIT",
  "START",
  "FETCH",
  "TIMEOUT",
  "PARALLEL",
  "INSERT",
  "IGNORE",
  "INTO",
  "VALUES",
  "ON",
  "DUPLICATE",
  "KEY",
  "UPDATE",
  "CREATE",
  "CONTENT",
  "SET",
  "RETURN",
  "BEFORE",
  "AFTER",
  "DIFF",
  "MERGE",
  "PATCH",
  "RELATE",
  "DELETE",
  "DEFINE",
  "NAMESPACE",
  "DATABASE",
  "LOGIN",
  "PASSWORD",
  "PASSHASH",
  "TOKEN",
  "SCOPE",
  "TYPE",
  "VALUE",
  "SESSION",
  "SIGNUP",
  "SIGNIN",
  "TABLE",
  "DROP",
  "SCHEMAFULL",
  "SCHEMALESS",
  "AS",
  "PERMISSIONS",
  "FULL",
  "FOR",
  "EVENT",
  "WHEN",
  "ASSERT",
  "INDEX",
  "FIELD",
  "FIELDS",
  "COLUMNS",
  "UNIQUE",
  "REMOVE",
  "SLEEP",
  "INFO",
  "KV",
  "FUNCTION",
  "PARAM",
] as const;

const OPERATORS = [
  "&&",
  "AND",
  "||",
  "OR",
  "??",
  "?:",
  "=",
  "IS",
  "!=",
  "IS NOT",
  "==",
  "?=",
  "*=",
  "~",
  "!~",
  "?~",
  "*~",
  "<",
  "<=",
  ">",
  ">=",
  "+",
  "-",
  "*",
  "x",
  "/",
  "÷",
  "**",
  "IN",
  "CONTAINS",
  "∋",
  "CONTAINSNOT",
  "∌",
  "CONTAINSALL",
  "⊇",
  "CONTAINSANY",
  "⊃",
  "CONTAINSNONE",
  "⊅",
  "INSIDE",
  "∈",
  "NOTINSIDE",
  "NOT IN",
  "∉",
  "ALLINSIDE",
  "⊆",
  "ANYINSIDE",
  "⊂",
  "NONEINSIDE",
  "⊄",
  "OUTSIDE",
  "INTERSECTS",
] as const;

const PUNCTUATIONS = ["(", ")", "[", "]", "{", "}", "->", "<-"] as const;
const DELIMITERS = [",", ";", ":"] as const;
const PROPERTIES = [/[a-zA-Z0-9_]+:/];
const COMMENTS = [
  /\/\*.*\*\//,
  seq("--", /.*/),
  seq("/*", /.*/, repeat(seq("\n", /.*/)), "*/"),
  seq("#", /.*/),
  seq("//", /.*/),
];

const FUNCTIONS = [
  /fn::[a-zA-Z0-9_]+/,
  /array::[a-z]+((::)[a-z]+)?/,
  "count",
  /crypto::[a-z0-9]+((::)[a-z0-9]+)?/,
  /geo::[a-z]+((::)[a-z]+)?/,
  /http::[a-z]+/,
  /is::[a-z]+/,
  /math::[a-z]+/,
  /meta::[a-z]+/,
  /parse::[a-z]+::[a-z]+/,
  /rand(::[a-z]+(::[a-z0-9]+)?)?/,
  /session::[a-z]+/,
  /sleep/,
  /string::[a-zA-Z]+/,
  /time::[a-z]+/,
  /type::[a-z]+/,
  /function/,
];

const STRINGS = [
  seq("'", repeat(choice(/[^\\']/, seq("\\", /./))), "'"),
  seq('"', repeat(choice(/[^\\"]/, seq("\\", /./))), '"'),
];

const NOTHINGS = ["NONE", "NULL"] as const;
const BOOLS = ["TRUE", "FALSE"] as const;

const RECORDS = [
  /[a-zA-Z0-9_]+:[a-zA-Z0-9_]+/,
  /[a-zA-Z0-9_]+:(`|⟨)([a-zA-Z0-9_]|-)+(`|⟩)/,
];

const NUMBERS = [/\d+(\.\d+)?/];
const CONSTANTS = [/MATH::[A-Z_0-9]+/];
const FUTURES = [/<future>/];
const CASTINGS = [/<(bool|int|float|string|number|decimal|datetime|duration)>/];
const DURATIONS = [/\d+(y|w|d|h|m|s)+/];

const onlyLetters = new RegExp(/^[a-zA-Z]+$/);

// https://github.com/stadelmanma/tree-sitter-fortran/blob/f73d473e3530862dee7cbb38520f28824e7804f6/grammar.js#L1628
// https://github.com/tree-sitter/tree-sitter/issues/299
function lowerOrUppercase(str: string) {
  if (str.match(onlyLetters)) {
    const choices = `${str.toLocaleLowerCase()}|${str.toLocaleUpperCase()}`;
    return new RegExp(choices);
  }
  return str;
}

const surrealqGrammar = grammar({
  name: "surrealql",
  extras: ($) => ["s"],
  word: ($) => $.identifier,
  rules: {
    source_file: ($) => repeat(choice($.comment, $.tokens)),
    tokens: ($) =>
      seq(
        choice(
          $.operator,
          $.punctuation,
          $.delimiter,
          $.type,
          $.function,
          $.variable,
          $.string,
          $.bool,
          $.nothing,
          $.record,
          $.number,
          $.constant,
          $.future,
          $.casting,
          $.property,
          $.duration,
          $.keyword,
          $.scripting_function
        )
      ),

    scripting_function: ($) =>
      seq("function(){", prec(2, $.scripting_content), choice("};", "},")),
    scripting_content: ($) => repeat1($._scripting_statement),
    _scripting_statement: ($) => choice($.tokens),
    future: ($) => choice(...FUTURES),
    casting: ($) => choice(...CASTINGS),
    property: ($) => choice(...PROPERTIES),
    identifier: ($) => /[a-zA-Z_]+[a-zA-Z0-9_]*/,
    duration: ($) => choice(...DURATIONS),
    constant: ($) => choice(...CONSTANTS),
    number: ($) => choice(...NUMBERS),
    record: ($) => choice(...RECORDS),
    keyword: ($) => token.immediate(choice(...KEYWORDS.map(lowerOrUppercase))),
    operator: ($) => choice(...OPERATORS.map(lowerOrUppercase)),
    punctuation: ($) => choice(...PUNCTUATIONS),
    delimiter: ($) => choice(...DELIMITERS),
    type: ($) => choice($.datatype, $.algotype),
    datatype: ($) => choice(...TYPES),
    algotype: ($) => choice(...TYPE_ALGORITHMS),
    function: ($) => choice(...FUNCTIONS),
    bool: ($) => choice(...BOOLS.map(lowerOrUppercase)),
    nothing: ($) => choice(...NOTHINGS.map(lowerOrUppercase)),
    variable: ($) => /\$[a-zA-Z_]+[a-zA-Z0-9_]*(\.[a-zA-Z0-9_]+)*/,
    comment: ($) => token(choice(...COMMENTS)),

    string: ($) => choice(...STRINGS),
    any_char: ($) => /[^{}\n]/,
    new_line: ($) => "\n",
  },
});

module.exports = surrealqGrammar;
