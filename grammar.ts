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
];

const NUMBERS = [/\d+(\.\d+)?/];
const CONSTANTS = [/MATH::[A-Z_0-9]+/];
const FUTURES = [/<future>/];
const CASTINGS = [/<(bool|int|float|string|number|decimal|datetime|duration)>/];
const DURATIONS = [/\d+(y|w|d|h|m|s)+/];

// https://github.com/stadelmanma/tree-sitter-fortran/blob/f73d473e3530862dee7cbb38520f28824e7804f6/grammar.js#L1628
// function insensitive(str: string) {
//   let reg = str
//     .split("")
//     .map((l) => `[${l.toLocaleLowerCase()}${l.toLocaleUpperCase()}]`)
//     .join("");
//   let result = new RegExp(reg);
//   // return token(result, { word: true }));
//   return token(result);
// }

export default grammar({
  name: "surrealql",
  // extras: ($) => ["s"],
  rules: {
    source_file: ($) => "hello",
    identifier: ($) => /[a-z_]+/,
    // identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    keyword: ($) => token.immediate(choice(...KEYWORDS)),
    // keyword: ($) => token.immediate(choice(...KEYWORDS.map(insensitive))),
  },
  // word: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  word: ($) => $.identifier,
  // word: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
});
