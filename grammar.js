/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "surrealql",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
