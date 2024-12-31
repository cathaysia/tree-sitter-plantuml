/**
 * @file Plantuml grammar for tree-sitter
 * @author loongtao.zhang <loongtao.zhang@outlook.com>
 * @license Apache 2.0
 */
const command = import('./common/commands.js');

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'plantuml',

  extras: $ => [/\s/, command.comment],
  externals: $ => [$._eof, $.sequence_diagram_header],
  rules: {
    expression: $ => choice($.sequence_diagram),
    sequence_diagram: $ => seq($.sequence_diagram_header, repeat(/./), $._eof),
    command: $ => choice(command.scale),
  },
});
