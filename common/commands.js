/// <reference types="tree-sitter-cli/dsl" />

exports.command = {
  comment: $ =>
    choice(
      seq("'", /[^\r\n]*\r?\n/),
      seq("/'", /[^']*\'+([^/'][^']*\'+)*/, '/'),
    ),
  scale: $ => seq('scale', /\d+/, /\r?\n/),
};
