#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 676
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  sym_lowercase_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_ = 4,
  anon_sym_priv = 5,
  anon_sym_pub = 6,
  anon_sym_LPAREN = 7,
  anon_sym_readonly = 8,
  anon_sym_RPAREN = 9,
  anon_sym_type = 10,
  anon_sym_struct = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_enum = 15,
  anon_sym_COMMA = 16,
  anon_sym_let = 17,
  anon_sym_EQ = 18,
  anon_sym_func = 19,
  anon_sym_interface = 20,
  anon_sym__ = 21,
  anon_sym_DQUOTE = 22,
  anon_sym_BSLASH_LPAREN = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_integer_literal = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_char_literal_token1 = 28,
  sym_unescaped_string_fragment = 29,
  sym_escape_seqence = 30,
  anon_sym_DASH = 31,
  anon_sym_PLUS = 32,
  anon_sym_STAR_STAR = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_STAR_EQ = 36,
  anon_sym_SLASH_EQ = 37,
  anon_sym_PERCENT = 38,
  anon_sym_PLUS_EQ = 39,
  anon_sym_DASH_EQ = 40,
  anon_sym_GT = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_LT_EQ = 43,
  anon_sym_LT = 44,
  anon_sym_EQ_EQ = 45,
  anon_sym_BANG_EQ = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_PIPE_PIPE = 48,
  anon_sym_DOT_DOT = 49,
  anon_sym_fn = 50,
  anon_sym_LBRACK = 51,
  anon_sym_RBRACK = 52,
  aux_sym_accessor_token1 = 53,
  anon_sym_match = 54,
  anon_sym_EQ_GT = 55,
  anon_sym_if = 56,
  anon_sym_else = 57,
  anon_sym_break = 58,
  anon_sym_continue = 59,
  anon_sym_COLON_EQ = 60,
  anon_sym_var = 61,
  anon_sym_while = 62,
  anon_sym_return = 63,
  anon_sym_as = 64,
  anon_sym_PIPE = 65,
  anon_sym_DASH_GT = 66,
  sym_mutability = 67,
  sym_uppercase_identifier = 68,
  sym_colon_colon_uppercase_identifier = 69,
  sym_colon_colon_lowercase_identifier = 70,
  sym_dot_identifier = 71,
  sym_package_identifier = 72,
  sym_comment = 73,
  sym_float_literal = 74,
  sym_structure = 75,
  sym_structure_item = 76,
  sym_visibility = 77,
  sym_pub_attribute = 78,
  sym_type_definition = 79,
  sym_struct_definition = 80,
  sym_struct_filed_declaration = 81,
  sym_enum_definition = 82,
  sym_enum_constructor = 83,
  sym_value_definition = 84,
  sym_function_definition = 85,
  sym_interface_definition = 86,
  sym_interface_method_declaration = 87,
  sym_expression = 88,
  sym_simple_expression = 89,
  sym_atomic_expression = 90,
  sym_string_interpolation = 91,
  sym_interpolator = 92,
  sym_literal = 93,
  sym_boolean_literal = 94,
  sym_char_literal = 95,
  sym_string_literal = 96,
  sym_string_fragement = 97,
  sym_unary_expression = 98,
  sym_binary_expression = 99,
  sym_struct_expression = 100,
  sym_struct_field_expression = 101,
  sym_struct_filed_expression = 102,
  sym_labeled_expression = 103,
  sym_labeled_expression_pun = 104,
  sym_block_expression = 105,
  sym_nonempty_block_expression = 106,
  sym_anonymous_lambda_expression = 107,
  sym_constructor_expression = 108,
  sym_apply_expression = 109,
  sym_array_access_expression = 110,
  sym_dot_apply_expression = 111,
  sym_access_expression = 112,
  sym_accessor = 113,
  sym_method_expression = 114,
  sym_unit_expression = 115,
  sym_tuple_expression = 116,
  sym_constraint_expression = 117,
  sym_array_expression = 118,
  sym_match_expression = 119,
  sym_case_clause = 120,
  sym_if_expression = 121,
  sym_else_clause = 122,
  sym_statement_expression = 123,
  sym_let_expression = 124,
  sym_shorthand_let_expression = 125,
  sym_shorthand_let_pattern = 126,
  sym_var_expression = 127,
  sym_assign_expression = 128,
  sym_left_value = 129,
  sym_named_lambda_expression = 130,
  sym_while_expression = 131,
  sym_return_expression = 132,
  sym_pattern = 133,
  sym_as_pattern = 134,
  sym_or_pattern = 135,
  sym_simple_pattern = 136,
  sym_constructor_pattern = 137,
  sym_tuple_pattern = 138,
  sym_constraint_pattern = 139,
  sym_array_pattern = 140,
  sym_array_sub_pattern = 141,
  sym_dotdot_pattern = 142,
  sym_struct_pattern = 143,
  sym_struct_filed_pattern = 144,
  sym_filed_single_pattern = 145,
  sym_labeled_pattern = 146,
  sym_labeled_pattern_pun = 147,
  sym_type = 148,
  sym_tuple_type = 149,
  sym_function_type = 150,
  sym_apply_type = 151,
  sym_type_arguments = 152,
  sym_type_parameters = 153,
  sym_type_annotation = 154,
  sym_return_type = 155,
  sym_parameter = 156,
  sym_parameters = 157,
  sym_any = 158,
  sym_pub = 159,
  sym_identifier = 160,
  sym_qualified_identifier = 161,
  sym_qualified_type_identifier = 162,
  sym_function_identifier = 163,
  sym_type_identifier = 164,
  sym_constraints = 165,
  sym_constraint = 166,
  aux_sym_structure_repeat1 = 167,
  aux_sym_struct_definition_repeat1 = 168,
  aux_sym_enum_definition_repeat1 = 169,
  aux_sym_enum_constructor_repeat1 = 170,
  aux_sym_interface_definition_repeat1 = 171,
  aux_sym_string_interpolation_repeat1 = 172,
  aux_sym_string_interpolation_repeat2 = 173,
  aux_sym_struct_field_expression_repeat1 = 174,
  aux_sym_block_expression_repeat1 = 175,
  aux_sym_apply_expression_repeat1 = 176,
  aux_sym_match_expression_repeat1 = 177,
  aux_sym_constructor_pattern_repeat1 = 178,
  aux_sym_struct_filed_pattern_repeat1 = 179,
  aux_sym_type_parameters_repeat1 = 180,
  aux_sym_parameters_repeat1 = 181,
  aux_sym_constraints_repeat1 = 182,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_lowercase_identifier] = "lowercase_identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [anon_sym_priv] = "priv",
  [anon_sym_pub] = "pub",
  [anon_sym_LPAREN] = "(",
  [anon_sym_readonly] = "readonly",
  [anon_sym_RPAREN] = ")",
  [anon_sym_type] = "type",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_func] = "func",
  [anon_sym_interface] = "interface",
  [anon_sym__] = "_",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_LPAREN] = "\\(",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [sym_unescaped_string_fragment] = "unescaped_string_fragment",
  [sym_escape_seqence] = "escape_seqence",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_accessor_token1] = "accessor_token1",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_var] = "var",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [anon_sym_as] = "as",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [sym_mutability] = "mutability",
  [sym_uppercase_identifier] = "uppercase_identifier",
  [sym_colon_colon_uppercase_identifier] = "colon_colon_uppercase_identifier",
  [sym_colon_colon_lowercase_identifier] = "colon_colon_lowercase_identifier",
  [sym_dot_identifier] = "dot_identifier",
  [sym_package_identifier] = "package_identifier",
  [sym_comment] = "comment",
  [sym_float_literal] = "float_literal",
  [sym_structure] = "structure",
  [sym_structure_item] = "structure_item",
  [sym_visibility] = "visibility",
  [sym_pub_attribute] = "pub_attribute",
  [sym_type_definition] = "type_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_filed_declaration] = "struct_filed_declaration",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_constructor] = "enum_constructor",
  [sym_value_definition] = "value_definition",
  [sym_function_definition] = "function_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_interface_method_declaration] = "interface_method_declaration",
  [sym_expression] = "expression",
  [sym_simple_expression] = "simple_expression",
  [sym_atomic_expression] = "atomic_expression",
  [sym_string_interpolation] = "string_interpolation",
  [sym_interpolator] = "interpolator",
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_fragement] = "string_fragement",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_struct_expression] = "struct_expression",
  [sym_struct_field_expression] = "struct_field_expression",
  [sym_struct_filed_expression] = "struct_filed_expression",
  [sym_labeled_expression] = "labeled_expression",
  [sym_labeled_expression_pun] = "labeled_expression_pun",
  [sym_block_expression] = "block_expression",
  [sym_nonempty_block_expression] = "nonempty_block_expression",
  [sym_anonymous_lambda_expression] = "anonymous_lambda_expression",
  [sym_constructor_expression] = "constructor_expression",
  [sym_apply_expression] = "apply_expression",
  [sym_array_access_expression] = "array_access_expression",
  [sym_dot_apply_expression] = "dot_apply_expression",
  [sym_access_expression] = "access_expression",
  [sym_accessor] = "accessor",
  [sym_method_expression] = "method_expression",
  [sym_unit_expression] = "unit_expression",
  [sym_tuple_expression] = "tuple_expression",
  [sym_constraint_expression] = "constraint_expression",
  [sym_array_expression] = "array_expression",
  [sym_match_expression] = "match_expression",
  [sym_case_clause] = "case_clause",
  [sym_if_expression] = "if_expression",
  [sym_else_clause] = "else_clause",
  [sym_statement_expression] = "statement_expression",
  [sym_let_expression] = "let_expression",
  [sym_shorthand_let_expression] = "shorthand_let_expression",
  [sym_shorthand_let_pattern] = "shorthand_let_pattern",
  [sym_var_expression] = "var_expression",
  [sym_assign_expression] = "assign_expression",
  [sym_left_value] = "left_value",
  [sym_named_lambda_expression] = "named_lambda_expression",
  [sym_while_expression] = "while_expression",
  [sym_return_expression] = "return_expression",
  [sym_pattern] = "pattern",
  [sym_as_pattern] = "as_pattern",
  [sym_or_pattern] = "or_pattern",
  [sym_simple_pattern] = "simple_pattern",
  [sym_constructor_pattern] = "constructor_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym_constraint_pattern] = "constraint_pattern",
  [sym_array_pattern] = "array_pattern",
  [sym_array_sub_pattern] = "array_sub_pattern",
  [sym_dotdot_pattern] = "dotdot_pattern",
  [sym_struct_pattern] = "struct_pattern",
  [sym_struct_filed_pattern] = "struct_filed_pattern",
  [sym_filed_single_pattern] = "filed_single_pattern",
  [sym_labeled_pattern] = "labeled_pattern",
  [sym_labeled_pattern_pun] = "labeled_pattern_pun",
  [sym_type] = "type",
  [sym_tuple_type] = "tuple_type",
  [sym_function_type] = "function_type",
  [sym_apply_type] = "apply_type",
  [sym_type_arguments] = "type_arguments",
  [sym_type_parameters] = "type_parameters",
  [sym_type_annotation] = "type_annotation",
  [sym_return_type] = "return_type",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_any] = "any",
  [sym_pub] = "pub",
  [sym_identifier] = "identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_qualified_type_identifier] = "qualified_type_identifier",
  [sym_function_identifier] = "function_identifier",
  [sym_type_identifier] = "type_identifier",
  [sym_constraints] = "constraints",
  [sym_constraint] = "constraint",
  [aux_sym_structure_repeat1] = "structure_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_enum_constructor_repeat1] = "enum_constructor_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_string_interpolation_repeat1] = "string_interpolation_repeat1",
  [aux_sym_string_interpolation_repeat2] = "string_interpolation_repeat2",
  [aux_sym_struct_field_expression_repeat1] = "struct_field_expression_repeat1",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
  [aux_sym_apply_expression_repeat1] = "apply_expression_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
  [aux_sym_constructor_pattern_repeat1] = "constructor_pattern_repeat1",
  [aux_sym_struct_filed_pattern_repeat1] = "struct_filed_pattern_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_lowercase_identifier] = sym_lowercase_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_] = anon_sym_,
  [anon_sym_priv] = anon_sym_priv,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym__] = anon_sym__,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_LPAREN] = anon_sym_BSLASH_LPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [sym_unescaped_string_fragment] = sym_unescaped_string_fragment,
  [sym_escape_seqence] = sym_escape_seqence,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_accessor_token1] = aux_sym_accessor_token1,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_mutability] = sym_mutability,
  [sym_uppercase_identifier] = sym_uppercase_identifier,
  [sym_colon_colon_uppercase_identifier] = sym_colon_colon_uppercase_identifier,
  [sym_colon_colon_lowercase_identifier] = sym_colon_colon_lowercase_identifier,
  [sym_dot_identifier] = sym_dot_identifier,
  [sym_package_identifier] = sym_package_identifier,
  [sym_comment] = sym_comment,
  [sym_float_literal] = sym_float_literal,
  [sym_structure] = sym_structure,
  [sym_structure_item] = sym_structure_item,
  [sym_visibility] = sym_visibility,
  [sym_pub_attribute] = sym_pub_attribute,
  [sym_type_definition] = sym_type_definition,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_filed_declaration] = sym_struct_filed_declaration,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_constructor] = sym_enum_constructor,
  [sym_value_definition] = sym_value_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_interface_method_declaration] = sym_interface_method_declaration,
  [sym_expression] = sym_expression,
  [sym_simple_expression] = sym_simple_expression,
  [sym_atomic_expression] = sym_atomic_expression,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_interpolator] = sym_interpolator,
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_fragement] = sym_string_fragement,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_struct_expression] = sym_struct_expression,
  [sym_struct_field_expression] = sym_struct_field_expression,
  [sym_struct_filed_expression] = sym_struct_filed_expression,
  [sym_labeled_expression] = sym_labeled_expression,
  [sym_labeled_expression_pun] = sym_labeled_expression_pun,
  [sym_block_expression] = sym_block_expression,
  [sym_nonempty_block_expression] = sym_nonempty_block_expression,
  [sym_anonymous_lambda_expression] = sym_anonymous_lambda_expression,
  [sym_constructor_expression] = sym_constructor_expression,
  [sym_apply_expression] = sym_apply_expression,
  [sym_array_access_expression] = sym_array_access_expression,
  [sym_dot_apply_expression] = sym_dot_apply_expression,
  [sym_access_expression] = sym_access_expression,
  [sym_accessor] = sym_accessor,
  [sym_method_expression] = sym_method_expression,
  [sym_unit_expression] = sym_unit_expression,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_constraint_expression] = sym_constraint_expression,
  [sym_array_expression] = sym_array_expression,
  [sym_match_expression] = sym_match_expression,
  [sym_case_clause] = sym_case_clause,
  [sym_if_expression] = sym_if_expression,
  [sym_else_clause] = sym_else_clause,
  [sym_statement_expression] = sym_statement_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_shorthand_let_expression] = sym_shorthand_let_expression,
  [sym_shorthand_let_pattern] = sym_shorthand_let_pattern,
  [sym_var_expression] = sym_var_expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym_left_value] = sym_left_value,
  [sym_named_lambda_expression] = sym_named_lambda_expression,
  [sym_while_expression] = sym_while_expression,
  [sym_return_expression] = sym_return_expression,
  [sym_pattern] = sym_pattern,
  [sym_as_pattern] = sym_as_pattern,
  [sym_or_pattern] = sym_or_pattern,
  [sym_simple_pattern] = sym_simple_pattern,
  [sym_constructor_pattern] = sym_constructor_pattern,
  [sym_tuple_pattern] = sym_tuple_pattern,
  [sym_constraint_pattern] = sym_constraint_pattern,
  [sym_array_pattern] = sym_array_pattern,
  [sym_array_sub_pattern] = sym_array_sub_pattern,
  [sym_dotdot_pattern] = sym_dotdot_pattern,
  [sym_struct_pattern] = sym_struct_pattern,
  [sym_struct_filed_pattern] = sym_struct_filed_pattern,
  [sym_filed_single_pattern] = sym_filed_single_pattern,
  [sym_labeled_pattern] = sym_labeled_pattern,
  [sym_labeled_pattern_pun] = sym_labeled_pattern_pun,
  [sym_type] = sym_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_function_type] = sym_function_type,
  [sym_apply_type] = sym_apply_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_annotation] = sym_type_annotation,
  [sym_return_type] = sym_return_type,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_any] = sym_any,
  [sym_pub] = sym_pub,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_qualified_type_identifier] = sym_qualified_type_identifier,
  [sym_function_identifier] = sym_function_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [sym_constraints] = sym_constraints,
  [sym_constraint] = sym_constraint,
  [aux_sym_structure_repeat1] = aux_sym_structure_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_enum_constructor_repeat1] = aux_sym_enum_constructor_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_string_interpolation_repeat1] = aux_sym_string_interpolation_repeat1,
  [aux_sym_string_interpolation_repeat2] = aux_sym_string_interpolation_repeat2,
  [aux_sym_struct_field_expression_repeat1] = aux_sym_struct_field_expression_repeat1,
  [aux_sym_block_expression_repeat1] = aux_sym_block_expression_repeat1,
  [aux_sym_apply_expression_repeat1] = aux_sym_apply_expression_repeat1,
  [aux_sym_match_expression_repeat1] = aux_sym_match_expression_repeat1,
  [aux_sym_constructor_pattern_repeat1] = aux_sym_constructor_pattern_repeat1,
  [aux_sym_struct_filed_pattern_repeat1] = aux_sym_struct_filed_pattern_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LPAREN] = {
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
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unescaped_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_seqence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
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
  [aux_sym_accessor_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_mutability] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_item] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_pub_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragement] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nonempty_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_method_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_var_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_left_value] = {
    .visible = true,
    .named = true,
  },
  [sym_named_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_or_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_sub_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_dotdot_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_filed_single_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [sym_pub] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_structure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_filed_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraints_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 5,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 12,
  [20] = 20,
  [21] = 21,
  [22] = 15,
  [23] = 18,
  [24] = 24,
  [25] = 13,
  [26] = 26,
  [27] = 16,
  [28] = 24,
  [29] = 29,
  [30] = 26,
  [31] = 29,
  [32] = 14,
  [33] = 20,
  [34] = 17,
  [35] = 21,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 46,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 37,
  [60] = 41,
  [61] = 48,
  [62] = 45,
  [63] = 58,
  [64] = 43,
  [65] = 65,
  [66] = 42,
  [67] = 67,
  [68] = 52,
  [69] = 69,
  [70] = 40,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 81,
  [86] = 86,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
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
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 88,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 89,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 97,
  [161] = 95,
  [162] = 162,
  [163] = 91,
  [164] = 164,
  [165] = 122,
  [166] = 94,
  [167] = 96,
  [168] = 73,
  [169] = 133,
  [170] = 123,
  [171] = 158,
  [172] = 119,
  [173] = 120,
  [174] = 103,
  [175] = 151,
  [176] = 159,
  [177] = 72,
  [178] = 76,
  [179] = 156,
  [180] = 155,
  [181] = 148,
  [182] = 124,
  [183] = 154,
  [184] = 157,
  [185] = 130,
  [186] = 137,
  [187] = 139,
  [188] = 77,
  [189] = 115,
  [190] = 135,
  [191] = 75,
  [192] = 138,
  [193] = 153,
  [194] = 105,
  [195] = 149,
  [196] = 147,
  [197] = 113,
  [198] = 109,
  [199] = 74,
  [200] = 132,
  [201] = 131,
  [202] = 129,
  [203] = 128,
  [204] = 127,
  [205] = 141,
  [206] = 126,
  [207] = 125,
  [208] = 112,
  [209] = 121,
  [210] = 145,
  [211] = 78,
  [212] = 152,
  [213] = 106,
  [214] = 144,
  [215] = 143,
  [216] = 117,
  [217] = 114,
  [218] = 118,
  [219] = 146,
  [220] = 107,
  [221] = 108,
  [222] = 222,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 226,
  [227] = 226,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 230,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 240,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 245,
  [248] = 244,
  [249] = 249,
  [250] = 250,
  [251] = 250,
  [252] = 252,
  [253] = 253,
  [254] = 252,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 268,
  [271] = 263,
  [272] = 266,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 264,
  [277] = 275,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 279,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 285,
  [287] = 287,
  [288] = 288,
  [289] = 281,
  [290] = 284,
  [291] = 287,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 293,
  [297] = 294,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 336,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 339,
  [348] = 348,
  [349] = 338,
  [350] = 350,
  [351] = 343,
  [352] = 348,
  [353] = 346,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 379,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 344,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 378,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 370,
  [408] = 373,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 374,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 324,
  [420] = 420,
  [421] = 418,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 416,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 423,
  [435] = 435,
  [436] = 428,
  [437] = 366,
  [438] = 364,
  [439] = 420,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 425,
  [445] = 365,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 322,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 356,
  [462] = 424,
  [463] = 463,
  [464] = 464,
  [465] = 318,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 440,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 402,
  [514] = 398,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 474,
  [526] = 526,
  [527] = 410,
  [528] = 448,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 511,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 516,
  [545] = 545,
  [546] = 546,
  [547] = 517,
  [548] = 548,
  [549] = 518,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 460,
  [561] = 258,
  [562] = 562,
  [563] = 563,
  [564] = 399,
  [565] = 565,
  [566] = 498,
  [567] = 386,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 551,
  [576] = 559,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 387,
  [581] = 581,
  [582] = 504,
  [583] = 411,
  [584] = 584,
  [585] = 585,
  [586] = 571,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 367,
  [593] = 406,
  [594] = 594,
  [595] = 409,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 606,
  [610] = 610,
  [611] = 260,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 526,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 610,
  [621] = 621,
  [622] = 605,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 633,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 635,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 628,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 638,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 654,
  [673] = 673,
  [674] = 636,
  [675] = 649,
};

static inline bool sym_uppercase_identifier_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 520
          ? (c < 478
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 452 || c == 455))))
              : (c <= 458 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 473
                  ? c == 471
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym_uppercase_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
  return (c < 43705
    ? (c < 4186
      ? (c < 2741
        ? (c < 2084
          ? (c < 1376
            ? (c < 748
              ? (c < 186
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 710
                  ? (c < 248
                    ? (c >= 223 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 912
                ? (c < 887
                  ? (c < 881
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 912 || (c < 1163
                  ? (c < 1016
                    ? (c >= 940 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || c == 1369))))))
            : (c <= 1416 || (c < 1791
              ? (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))
              : (c <= 1791 || (c < 1994
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || c == 2074))))))))
          : (c <= 2084 || (c < 2524
            ? (c < 2392
              ? (c < 2185
                ? (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))))
              : (c <= 2401 || (c < 2474
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2575
                ? (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2703
                ? (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3253
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))))
            : (c <= 2972 || (c < 3133
              ? (c < 3024
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8319
        ? (c < 6314
          ? (c < 4824
            ? (c < 4696
              ? (c < 4238
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5888
              ? (c < 5121
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c >= 6272 && c <= 6312)))))))))
          : (c <= 6314 || (c < 7406
            ? (c < 6917
              ? (c < 6528
                ? (c < 6480
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7401 && c <= 7404)))))))
            : (c <= 7411 || (c < 8126
              ? (c < 7968
                ? (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7681 && c <= 7957)))
                : (c <= 8005 || (c < 8064
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))
              : (c <= 8126 || (c < 8160
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8151)))
                : (c <= 8167 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))))))))))
        : (c <= 8319 || (c < 19968
          ? (c < 11696
            ? (c < 11500
              ? (c < 8508
                ? (c < 8472
                  ? (c < 8458
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8467)
                  : (c <= 8472 || (c >= 8494 && c <= 8505)))
                : (c <= 8509 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8518 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11312 && c <= 11492)))))
              : (c <= 11502 || (c < 11568
                ? (c < 11559
                  ? (c < 11520
                    ? c == 11507
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))
            : (c <= 11702 || (c < 12353
              ? (c < 11736
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))))))
          : (c <= 42124 || (c < 43250
            ? (c < 42892
              ? (c < 42561
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42787 && c <= 42888)))))
              : (c <= 42954 || (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? c == 42961
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))))
            : (c <= 43255 || (c < 43514
              ? (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))
              : (c <= 43518 || (c < 43642
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c >= 43616 && c <= 43638)))
                : (c <= 43642 || (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))))))))))))))
    : (c <= 43709 || (c < 71236
      ? (c < 67584
        ? (c < 65151
          ? (c < 64275
            ? (c < 43816
              ? (c < 43762
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 55216
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44002 || (c >= 44032 && c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))))
            : (c <= 64279 || (c < 64612
              ? (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))
              : (c <= 64829 || (c < 65139
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || c == 65137))
                : (c <= 65139 || (c < 65147
                  ? (c < 65145
                    ? c == 65143
                    : c <= 65145)
                  : (c <= 65147 || c == 65149))))))))
          : (c <= 65276 || (c < 66384
            ? (c < 65576
              ? (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))))
            : (c <= 66421 || (c < 66979
              ? (c < 66600
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67424
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))))))))
        : (c <= 67589 || (c < 69745
          ? (c < 68288
            ? (c < 67840
              ? (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))
              : (c <= 67861 || (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))))
            : (c <= 68295 || (c < 69248
              ? (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))
              : (c <= 69289 || (c < 69488
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c >= 69424 && c <= 69445)))
                : (c <= 69505 || (c < 69600
                  ? (c >= 69552 && c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))))))
          : (c <= 69746 || (c < 70320
            ? (c < 70081
              ? (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))))
            : (c <= 70366 || (c < 70656
              ? (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))
              : (c <= 70708 || (c < 70855
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c >= 70852 && c <= 70853)))
                : (c <= 70855 || (c < 71128
                  ? (c >= 71040 && c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119977
        ? (c < 73728
          ? (c < 72250
            ? (c < 71957
              ? (c < 71680
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))
                : (c <= 71723 || (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))))
              : (c <= 71958 || (c < 72106
                ? (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))
                : (c <= 72144 || (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))))))
            : (c <= 72250 || (c < 72968
              ? (c < 72704
                ? (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))
                : (c <= 72712 || (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))))
              : (c <= 72969 || (c < 73066
                ? (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))
                : (c <= 73097 || (c < 73440
                  ? c == 73112
                  : (c <= 73458 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 113664
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))))
              : (c <= 113770 || (c < 119894
                ? (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))
                : (c <= 119964 || (c < 119970
                  ? (c >= 119966 && c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 126469
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c >= 120005 && c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123584
              ? (c < 122624
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c >= 120772 && c <= 120779)))
                : (c <= 122654 || (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123536 && c <= 123565)))))
              : (c <= 123627 || (c < 124928
                ? (c < 124909
                  ? (c < 124904
                    ? (c >= 124896 && c <= 124902)
                    : c <= 124907)
                  : (c <= 124910 || (c >= 124912 && c <= 124926)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177976 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
  return (c < 7917
    ? (c < 2074
      ? (c < 591
        ? (c < 402
          ? (c < 316
            ? (c < 279
              ? (c < 261
                ? (c < 186
                  ? (c < 170
                    ? (c < 'a'
                      ? c == '_'
                      : c <= 'z')
                    : (c <= 170 || c == 181))
                  : (c <= 186 || (c < 257
                    ? (c < 248
                      ? (c >= 223 && c <= 246)
                      : c <= 255)
                    : (c <= 257 || c == 259))))
                : (c <= 261 || (c < 271
                  ? (c < 267
                    ? (c < 265
                      ? c == 263
                      : c <= 265)
                    : (c <= 267 || c == 269))
                  : (c <= 271 || (c < 275
                    ? c == 273
                    : (c <= 275 || c == 277))))))
              : (c <= 279 || (c < 297
                ? (c < 289
                  ? (c < 285
                    ? (c < 283
                      ? c == 281
                      : c <= 283)
                    : (c <= 285 || c == 287))
                  : (c <= 289 || (c < 293
                    ? c == 291
                    : (c <= 293 || c == 295))))
                : (c <= 297 || (c < 307
                  ? (c < 303
                    ? (c < 301
                      ? c == 299
                      : c <= 301)
                    : (c <= 303 || c == 305))
                  : (c <= 307 || (c < 311
                    ? c == 309
                    : (c <= 312 || c == 314))))))))
            : (c <= 316 || (c < 355
              ? (c < 337
                ? (c < 326
                  ? (c < 322
                    ? (c < 320
                      ? c == 318
                      : c <= 320)
                    : (c <= 322 || c == 324))
                  : (c <= 326 || (c < 333
                    ? (c < 331
                      ? (c >= 328 && c <= 329)
                      : c <= 331)
                    : (c <= 333 || c == 335))))
                : (c <= 337 || (c < 347
                  ? (c < 343
                    ? (c < 341
                      ? c == 339
                      : c <= 341)
                    : (c <= 343 || c == 345))
                  : (c <= 347 || (c < 351
                    ? c == 349
                    : (c <= 351 || c == 353))))))
              : (c <= 355 || (c < 373
                ? (c < 365
                  ? (c < 361
                    ? (c < 359
                      ? c == 357
                      : c <= 359)
                    : (c <= 361 || c == 363))
                  : (c <= 365 || (c < 369
                    ? c == 367
                    : (c <= 369 || c == 371))))
                : (c <= 373 || (c < 387
                  ? (c < 380
                    ? (c < 378
                      ? c == 375
                      : c <= 378)
                    : (c <= 380 || (c >= 382 && c <= 384)))
                  : (c <= 387 || (c < 392
                    ? c == 389
                    : (c <= 392 || (c >= 396 && c <= 397)))))))))))
          : (c <= 402 || (c < 505
            ? (c < 464
              ? (c < 432
                ? (c < 419
                  ? (c < 414
                    ? (c < 409
                      ? c == 405
                      : c <= 411)
                    : (c <= 414 || c == 417))
                  : (c <= 419 || (c < 426
                    ? (c < 424
                      ? c == 421
                      : c <= 424)
                    : (c <= 427 || c == 429))))
                : (c <= 432 || (c < 453
                  ? (c < 441
                    ? (c < 438
                      ? c == 436
                      : c <= 438)
                    : (c <= 443 || (c >= 445 && c <= 451)))
                  : (c <= 454 || (c < 459
                    ? (c >= 456 && c <= 457)
                    : (c <= 460 || c == 462))))))
              : (c <= 464 || (c < 483
                ? (c < 474
                  ? (c < 470
                    ? (c < 468
                      ? c == 466
                      : c <= 468)
                    : (c <= 470 || c == 472))
                  : (c <= 474 || (c < 479
                    ? (c >= 476 && c <= 477)
                    : (c <= 479 || c == 481))))
                : (c <= 483 || (c < 493
                  ? (c < 489
                    ? (c < 487
                      ? c == 485
                      : c <= 487)
                    : (c <= 489 || c == 491))
                  : (c <= 493 || (c < 498
                    ? (c >= 495 && c <= 496)
                    : (c <= 499 || c == 501))))))))
            : (c <= 505 || (c < 543
              ? (c < 525
                ? (c < 515
                  ? (c < 511
                    ? (c < 509
                      ? c == 507
                      : c <= 509)
                    : (c <= 511 || c == 513))
                  : (c <= 515 || (c < 521
                    ? (c < 519
                      ? c == 517
                      : c <= 519)
                    : (c <= 521 || c == 523))))
                : (c <= 525 || (c < 535
                  ? (c < 531
                    ? (c < 529
                      ? c == 527
                      : c <= 529)
                    : (c <= 531 || c == 533))
                  : (c <= 535 || (c < 539
                    ? c == 537
                    : (c <= 539 || c == 541))))))
              : (c <= 543 || (c < 561
                ? (c < 553
                  ? (c < 549
                    ? (c < 547
                      ? c == 545
                      : c <= 547)
                    : (c <= 549 || c == 551))
                  : (c <= 553 || (c < 557
                    ? c == 555
                    : (c <= 557 || c == 559))))
                : (c <= 561 || (c < 583
                  ? (c < 575
                    ? (c < 572
                      ? (c >= 563 && c <= 569)
                      : c <= 572)
                    : (c <= 576 || c == 578))
                  : (c <= 583 || (c < 587
                    ? c == 585
                    : (c <= 587 || c == 589))))))))))))
        : (c <= 705 || (c < 1220
          ? (c < 1137
            ? (c < 997
              ? (c < 940
                ? (c < 881
                  ? (c < 748
                    ? (c < 736
                      ? (c >= 710 && c <= 721)
                      : c <= 740)
                    : (c <= 748 || c == 750))
                  : (c <= 881 || (c < 891
                    ? (c < 887
                      ? (c >= 883 && c <= 884)
                      : c <= 887)
                    : (c <= 893 || c == 912))))
                : (c <= 974 || (c < 989
                  ? (c < 985
                    ? (c < 981
                      ? (c >= 976 && c <= 977)
                      : c <= 983)
                    : (c <= 985 || c == 987))
                  : (c <= 989 || (c < 993
                    ? c == 991
                    : (c <= 993 || c == 995))))))
              : (c <= 997 || (c < 1072
                ? (c < 1007
                  ? (c < 1003
                    ? (c < 1001
                      ? c == 999
                      : c <= 1001)
                    : (c <= 1003 || c == 1005))
                  : (c <= 1011 || (c < 1016
                    ? c == 1013
                    : (c <= 1016 || (c >= 1019 && c <= 1020)))))
                : (c <= 1119 || (c < 1129
                  ? (c < 1125
                    ? (c < 1123
                      ? c == 1121
                      : c <= 1123)
                    : (c <= 1125 || c == 1127))
                  : (c <= 1129 || (c < 1133
                    ? c == 1131
                    : (c <= 1133 || c == 1135))))))))
            : (c <= 1137 || (c < 1183
              ? (c < 1165
                ? (c < 1147
                  ? (c < 1143
                    ? (c < 1141
                      ? c == 1139
                      : c <= 1141)
                    : (c <= 1143 || c == 1145))
                  : (c <= 1147 || (c < 1153
                    ? (c < 1151
                      ? c == 1149
                      : c <= 1151)
                    : (c <= 1153 || c == 1163))))
                : (c <= 1165 || (c < 1175
                  ? (c < 1171
                    ? (c < 1169
                      ? c == 1167
                      : c <= 1169)
                    : (c <= 1171 || c == 1173))
                  : (c <= 1175 || (c < 1179
                    ? c == 1177
                    : (c <= 1179 || c == 1181))))))
              : (c <= 1183 || (c < 1201
                ? (c < 1193
                  ? (c < 1189
                    ? (c < 1187
                      ? c == 1185
                      : c <= 1187)
                    : (c <= 1189 || c == 1191))
                  : (c <= 1193 || (c < 1197
                    ? c == 1195
                    : (c <= 1197 || c == 1199))))
                : (c <= 1201 || (c < 1211
                  ? (c < 1207
                    ? (c < 1205
                      ? c == 1203
                      : c <= 1205)
                    : (c <= 1207 || c == 1209))
                  : (c <= 1211 || (c < 1215
                    ? c == 1213
                    : (c <= 1215 || c == 1218))))))))))
          : (c <= 1220 || (c < 1295
            ? (c < 1259
              ? (c < 1241
                ? (c < 1230
                  ? (c < 1226
                    ? (c < 1224
                      ? c == 1222
                      : c <= 1224)
                    : (c <= 1226 || c == 1228))
                  : (c <= 1231 || (c < 1237
                    ? (c < 1235
                      ? c == 1233
                      : c <= 1235)
                    : (c <= 1237 || c == 1239))))
                : (c <= 1241 || (c < 1251
                  ? (c < 1247
                    ? (c < 1245
                      ? c == 1243
                      : c <= 1245)
                    : (c <= 1247 || c == 1249))
                  : (c <= 1251 || (c < 1255
                    ? c == 1253
                    : (c <= 1255 || c == 1257))))))
              : (c <= 1259 || (c < 1277
                ? (c < 1269
                  ? (c < 1265
                    ? (c < 1263
                      ? c == 1261
                      : c <= 1263)
                    : (c <= 1265 || c == 1267))
                  : (c <= 1269 || (c < 1273
                    ? c == 1271
                    : (c <= 1273 || c == 1275))))
                : (c <= 1277 || (c < 1287
                  ? (c < 1283
                    ? (c < 1281
                      ? c == 1279
                      : c <= 1281)
                    : (c <= 1283 || c == 1285))
                  : (c <= 1287 || (c < 1291
                    ? c == 1289
                    : (c <= 1291 || c == 1293))))))))
            : (c <= 1295 || (c < 1488
              ? (c < 1315
                ? (c < 1305
                  ? (c < 1301
                    ? (c < 1299
                      ? c == 1297
                      : c <= 1299)
                    : (c <= 1301 || c == 1303))
                  : (c <= 1305 || (c < 1311
                    ? (c < 1309
                      ? c == 1307
                      : c <= 1309)
                    : (c <= 1311 || c == 1313))))
                : (c <= 1315 || (c < 1325
                  ? (c < 1321
                    ? (c < 1319
                      ? c == 1317
                      : c <= 1319)
                    : (c <= 1321 || c == 1323))
                  : (c <= 1325 || (c < 1369
                    ? c == 1327
                    : (c <= 1369 || (c >= 1376 && c <= 1416)))))))
              : (c <= 1514 || (c < 1791
                ? (c < 1749
                  ? (c < 1646
                    ? (c < 1568
                      ? (c >= 1519 && c <= 1522)
                      : c <= 1610)
                    : (c <= 1647 || (c >= 1649 && c <= 1747)))
                  : (c <= 1749 || (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : (c <= 1775 || (c >= 1786 && c <= 1788)))))
                : (c <= 1791 || (c < 1994
                  ? (c < 1869
                    ? (c < 1810
                      ? c == 1808
                      : c <= 1839)
                    : (c <= 1957 || c == 1969))
                  : (c <= 2026 || (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : (c <= 2042 || (c >= 2048 && c <= 2069)))))))))))))))
      : (c <= 2074 || (c < 5888
        ? (c < 3200
          ? (c < 2707
            ? (c < 2493
              ? (c < 2384
                ? (c < 2160
                  ? (c < 2112
                    ? (c < 2088
                      ? c == 2084
                      : c <= 2088)
                    : (c <= 2136 || (c >= 2144 && c <= 2154)))
                  : (c <= 2183 || (c < 2308
                    ? (c < 2208
                      ? (c >= 2185 && c <= 2190)
                      : c <= 2249)
                    : (c <= 2361 || c == 2365))))
                : (c <= 2384 || (c < 2451
                  ? (c < 2437
                    ? (c < 2417
                      ? (c >= 2392 && c <= 2401)
                      : c <= 2432)
                    : (c <= 2444 || (c >= 2447 && c <= 2448)))
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
              : (c <= 2493 || (c < 2602
                ? (c < 2556
                  ? (c < 2527
                    ? (c < 2524
                      ? c == 2510
                      : c <= 2525)
                    : (c <= 2529 || (c >= 2544 && c <= 2545)))
                  : (c <= 2556 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : (c <= 2576 || (c >= 2579 && c <= 2600)))))
                : (c <= 2608 || (c < 2654
                  ? (c < 2616
                    ? (c < 2613
                      ? (c >= 2610 && c <= 2611)
                      : c <= 2614)
                    : (c <= 2617 || (c >= 2649 && c <= 2652)))
                  : (c <= 2654 || (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))
            : (c <= 2728 || (c < 2949
              ? (c < 2835
                ? (c < 2768
                  ? (c < 2741
                    ? (c < 2738
                      ? (c >= 2730 && c <= 2736)
                      : c <= 2739)
                    : (c <= 2745 || c == 2749))
                  : (c <= 2768 || (c < 2821
                    ? (c < 2809
                      ? (c >= 2784 && c <= 2785)
                      : c <= 2809)
                    : (c <= 2828 || (c >= 2831 && c <= 2832)))))
                : (c <= 2856 || (c < 2908
                  ? (c < 2869
                    ? (c < 2866
                      ? (c >= 2858 && c <= 2864)
                      : c <= 2867)
                    : (c <= 2873 || c == 2877))
                  : (c <= 2909 || (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : (c <= 2929 || c == 2947))))))
              : (c <= 2954 || (c < 3024
                ? (c < 2974
                  ? (c < 2969
                    ? (c < 2962
                      ? (c >= 2958 && c <= 2960)
                      : c <= 2965)
                    : (c <= 2970 || c == 2972))
                  : (c <= 2975 || (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : (c <= 2986 || (c >= 2990 && c <= 3001)))))
                : (c <= 3024 || (c < 3133
                  ? (c < 3090
                    ? (c < 3086
                      ? (c >= 3077 && c <= 3084)
                      : c <= 3088)
                    : (c <= 3112 || (c >= 3114 && c <= 3129)))
                  : (c <= 3133 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))))
          : (c <= 3200 || (c < 3840
            ? (c < 3482
              ? (c < 3332
                ? (c < 3253
                  ? (c < 3218
                    ? (c < 3214
                      ? (c >= 3205 && c <= 3212)
                      : c <= 3216)
                    : (c <= 3240 || (c >= 3242 && c <= 3251)))
                  : (c <= 3257 || (c < 3296
                    ? (c < 3293
                      ? c == 3261
                      : c <= 3294)
                    : (c <= 3297 || (c >= 3313 && c <= 3314)))))
                : (c <= 3340 || (c < 3412
                  ? (c < 3389
                    ? (c < 3346
                      ? (c >= 3342 && c <= 3344)
                      : c <= 3386)
                    : (c <= 3389 || c == 3406))
                  : (c <= 3414 || (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : (c <= 3455 || (c >= 3461 && c <= 3478)))))))
              : (c <= 3505 || (c < 3718
                ? (c < 3634
                  ? (c < 3520
                    ? (c < 3517
                      ? (c >= 3507 && c <= 3515)
                      : c <= 3517)
                    : (c <= 3526 || (c >= 3585 && c <= 3632)))
                  : (c <= 3634 || (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : (c <= 3714 || c == 3716))))
                : (c <= 3722 || (c < 3773
                  ? (c < 3751
                    ? (c < 3749
                      ? (c >= 3724 && c <= 3747)
                      : c <= 3749)
                    : (c <= 3760 || c == 3762))
                  : (c <= 3773 || (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : (c <= 3782 || (c >= 3804 && c <= 3807)))))))))
            : (c <= 3840 || (c < 4704
              ? (c < 4206
                ? (c < 4159
                  ? (c < 3976
                    ? (c < 3913
                      ? (c >= 3904 && c <= 3911)
                      : c <= 3948)
                    : (c <= 3980 || (c >= 4096 && c <= 4138)))
                  : (c <= 4159 || (c < 4193
                    ? (c < 4186
                      ? (c >= 4176 && c <= 4181)
                      : c <= 4189)
                    : (c <= 4193 || (c >= 4197 && c <= 4198)))))
                : (c <= 4208 || (c < 4682
                  ? (c < 4304
                    ? (c < 4238
                      ? (c >= 4213 && c <= 4225)
                      : c <= 4238)
                    : (c <= 4346 || (c >= 4348 && c <= 4680)))
                  : (c <= 4685 || (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : (c <= 4696 || (c >= 4698 && c <= 4701)))))))
              : (c <= 4744 || (c < 4882
                ? (c < 4800
                  ? (c < 4786
                    ? (c < 4752
                      ? (c >= 4746 && c <= 4749)
                      : c <= 4784)
                    : (c <= 4789 || (c >= 4792 && c <= 4798)))
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : (c <= 4822 || (c >= 4824 && c <= 4880)))))
                : (c <= 4885 || (c < 5743
                  ? (c < 5112
                    ? (c < 4992
                      ? (c >= 4888 && c <= 4954)
                      : c <= 5007)
                    : (c <= 5117 || (c >= 5121 && c <= 5740)))
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : (c <= 5866 || (c >= 5870 && c <= 5880)))))))))))))
        : (c <= 5905 || (c < 7761
          ? (c < 7687
            ? (c < 6823
              ? (c < 6314
                ? (c < 6016
                  ? (c < 5984
                    ? (c < 5952
                      ? (c >= 5919 && c <= 5937)
                      : c <= 5969)
                    : (c <= 5996 || (c >= 5998 && c <= 6000)))
                  : (c <= 6067 || (c < 6176
                    ? (c < 6108
                      ? c == 6103
                      : c <= 6108)
                    : (c <= 6264 || (c >= 6272 && c <= 6312)))))
                : (c <= 6314 || (c < 6528
                  ? (c < 6480
                    ? (c < 6400
                      ? (c >= 6320 && c <= 6389)
                      : c <= 6430)
                    : (c <= 6509 || (c >= 6512 && c <= 6516)))
                  : (c <= 6571 || (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : (c <= 6678 || (c >= 6688 && c <= 6740)))))))
              : (c <= 6823 || (c < 7296
                ? (c < 7098
                  ? (c < 7043
                    ? (c < 6981
                      ? (c >= 6917 && c <= 6963)
                      : c <= 6988)
                    : (c <= 7072 || (c >= 7086 && c <= 7087)))
                  : (c <= 7141 || (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : (c <= 7247 || (c >= 7258 && c <= 7293)))))
                : (c <= 7304 || (c < 7424
                  ? (c < 7413
                    ? (c < 7406
                      ? (c >= 7401 && c <= 7404)
                      : c <= 7411)
                    : (c <= 7414 || c == 7418))
                  : (c <= 7615 || (c < 7683
                    ? c == 7681
                    : (c <= 7683 || c == 7685))))))))
            : (c <= 7687 || (c < 7725
              ? (c < 7707
                ? (c < 7697
                  ? (c < 7693
                    ? (c < 7691
                      ? c == 7689
                      : c <= 7691)
                    : (c <= 7693 || c == 7695))
                  : (c <= 7697 || (c < 7703
                    ? (c < 7701
                      ? c == 7699
                      : c <= 7701)
                    : (c <= 7703 || c == 7705))))
                : (c <= 7707 || (c < 7717
                  ? (c < 7713
                    ? (c < 7711
                      ? c == 7709
                      : c <= 7711)
                    : (c <= 7713 || c == 7715))
                  : (c <= 7717 || (c < 7721
                    ? c == 7719
                    : (c <= 7721 || c == 7723))))))
              : (c <= 7725 || (c < 7743
                ? (c < 7735
                  ? (c < 7731
                    ? (c < 7729
                      ? c == 7727
                      : c <= 7729)
                    : (c <= 7731 || c == 7733))
                  : (c <= 7735 || (c < 7739
                    ? c == 7737
                    : (c <= 7739 || c == 7741))))
                : (c <= 7743 || (c < 7753
                  ? (c < 7749
                    ? (c < 7747
                      ? c == 7745
                      : c <= 7747)
                    : (c <= 7749 || c == 7751))
                  : (c <= 7753 || (c < 7757
                    ? c == 7755
                    : (c <= 7757 || c == 7759))))))))))
          : (c <= 7761 || (c < 7843
            ? (c < 7799
              ? (c < 7781
                ? (c < 7771
                  ? (c < 7767
                    ? (c < 7765
                      ? c == 7763
                      : c <= 7765)
                    : (c <= 7767 || c == 7769))
                  : (c <= 7771 || (c < 7777
                    ? (c < 7775
                      ? c == 7773
                      : c <= 7775)
                    : (c <= 7777 || c == 7779))))
                : (c <= 7781 || (c < 7791
                  ? (c < 7787
                    ? (c < 7785
                      ? c == 7783
                      : c <= 7785)
                    : (c <= 7787 || c == 7789))
                  : (c <= 7791 || (c < 7795
                    ? c == 7793
                    : (c <= 7795 || c == 7797))))))
              : (c <= 7799 || (c < 7817
                ? (c < 7809
                  ? (c < 7805
                    ? (c < 7803
                      ? c == 7801
                      : c <= 7803)
                    : (c <= 7805 || c == 7807))
                  : (c <= 7809 || (c < 7813
                    ? c == 7811
                    : (c <= 7813 || c == 7815))))
                : (c <= 7817 || (c < 7827
                  ? (c < 7823
                    ? (c < 7821
                      ? c == 7819
                      : c <= 7821)
                    : (c <= 7823 || c == 7825))
                  : (c <= 7827 || (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : (c <= 7839 || c == 7841))))))))
            : (c <= 7843 || (c < 7881
              ? (c < 7863
                ? (c < 7853
                  ? (c < 7849
                    ? (c < 7847
                      ? c == 7845
                      : c <= 7847)
                    : (c <= 7849 || c == 7851))
                  : (c <= 7853 || (c < 7859
                    ? (c < 7857
                      ? c == 7855
                      : c <= 7857)
                    : (c <= 7859 || c == 7861))))
                : (c <= 7863 || (c < 7873
                  ? (c < 7869
                    ? (c < 7867
                      ? c == 7865
                      : c <= 7867)
                    : (c <= 7869 || c == 7871))
                  : (c <= 7873 || (c < 7877
                    ? c == 7875
                    : (c <= 7877 || c == 7879))))))
              : (c <= 7881 || (c < 7899
                ? (c < 7891
                  ? (c < 7887
                    ? (c < 7885
                      ? c == 7883
                      : c <= 7885)
                    : (c <= 7887 || c == 7889))
                  : (c <= 7891 || (c < 7895
                    ? c == 7893
                    : (c <= 7895 || c == 7897))))
                : (c <= 7899 || (c < 7909
                  ? (c < 7905
                    ? (c < 7903
                      ? c == 7901
                      : c <= 7903)
                    : (c <= 7905 || c == 7907))
                  : (c <= 7909 || (c < 7913
                    ? c == 7911
                    : (c <= 7913 || c == 7915))))))))))))))))
    : (c <= 7917 || (c < 63744
      ? (c < 42581
        ? (c < 11435
          ? (c < 8494
            ? (c < 8124
              ? (c < 7952
                ? (c < 7927
                  ? (c < 7923
                    ? (c < 7921
                      ? c == 7919
                      : c <= 7921)
                    : (c <= 7923 || c == 7925))
                  : (c <= 7927 || (c < 7933
                    ? (c < 7931
                      ? c == 7929
                      : c <= 7931)
                    : (c <= 7933 || (c >= 7935 && c <= 7943)))))
                : (c <= 7957 || (c < 8032
                  ? (c < 8000
                    ? (c < 7984
                      ? (c >= 7968 && c <= 7975)
                      : c <= 7991)
                    : (c <= 8005 || (c >= 8016 && c <= 8023)))
                  : (c <= 8039 || (c < 8064
                    ? (c >= 8048 && c <= 8061)
                    : (c <= 8116 || (c >= 8118 && c <= 8119)))))))
              : (c <= 8124 || (c < 8182
                ? (c < 8144
                  ? (c < 8134
                    ? (c < 8130
                      ? c == 8126
                      : c <= 8132)
                    : (c <= 8135 || c == 8140))
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8151)
                    : (c <= 8167 || (c >= 8178 && c <= 8180)))))
                : (c <= 8183 || (c < 8458
                  ? (c < 8319
                    ? (c < 8305
                      ? c == 8188
                      : c <= 8305)
                    : (c <= 8319 || (c >= 8336 && c <= 8348)))
                  : (c <= 8458 || (c < 8467
                    ? (c >= 8462 && c <= 8463)
                    : (c <= 8467 || c == 8472))))))))
            : (c <= 8495 || (c < 11399
              ? (c < 11368
                ? (c < 8544
                  ? (c < 8518
                    ? (c < 8508
                      ? (c >= 8500 && c <= 8505)
                      : c <= 8509)
                    : (c <= 8521 || c == 8526))
                  : (c <= 8578 || (c < 11361
                    ? (c < 11312
                      ? (c >= 8580 && c <= 8584)
                      : c <= 11359)
                    : (c <= 11361 || (c >= 11365 && c <= 11366)))))
                : (c <= 11368 || (c < 11382
                  ? (c < 11377
                    ? (c < 11372
                      ? c == 11370
                      : c <= 11372)
                    : (c <= 11377 || (c >= 11379 && c <= 11380)))
                  : (c <= 11389 || (c < 11395
                    ? c == 11393
                    : (c <= 11395 || c == 11397))))))
              : (c <= 11399 || (c < 11417
                ? (c < 11409
                  ? (c < 11405
                    ? (c < 11403
                      ? c == 11401
                      : c <= 11403)
                    : (c <= 11405 || c == 11407))
                  : (c <= 11409 || (c < 11413
                    ? c == 11411
                    : (c <= 11413 || c == 11415))))
                : (c <= 11417 || (c < 11427
                  ? (c < 11423
                    ? (c < 11421
                      ? c == 11419
                      : c <= 11421)
                    : (c <= 11423 || c == 11425))
                  : (c <= 11427 || (c < 11431
                    ? c == 11429
                    : (c <= 11431 || c == 11433))))))))))
          : (c <= 11435 || (c < 11648
            ? (c < 11473
              ? (c < 11455
                ? (c < 11445
                  ? (c < 11441
                    ? (c < 11439
                      ? c == 11437
                      : c <= 11439)
                    : (c <= 11441 || c == 11443))
                  : (c <= 11445 || (c < 11451
                    ? (c < 11449
                      ? c == 11447
                      : c <= 11449)
                    : (c <= 11451 || c == 11453))))
                : (c <= 11455 || (c < 11465
                  ? (c < 11461
                    ? (c < 11459
                      ? c == 11457
                      : c <= 11459)
                    : (c <= 11461 || c == 11463))
                  : (c <= 11465 || (c < 11469
                    ? c == 11467
                    : (c <= 11469 || c == 11471))))))
              : (c <= 11473 || (c < 11491
                ? (c < 11483
                  ? (c < 11479
                    ? (c < 11477
                      ? c == 11475
                      : c <= 11477)
                    : (c <= 11479 || c == 11481))
                  : (c <= 11483 || (c < 11487
                    ? c == 11485
                    : (c <= 11487 || c == 11489))))
                : (c <= 11492 || (c < 11559
                  ? (c < 11507
                    ? (c < 11502
                      ? c == 11500
                      : c <= 11502)
                    : (c <= 11507 || (c >= 11520 && c <= 11557)))
                  : (c <= 11559 || (c < 11568
                    ? c == 11565
                    : (c <= 11623 || c == 11631))))))))
            : (c <= 11670 || (c < 12704
              ? (c < 12321
                ? (c < 11712
                  ? (c < 11696
                    ? (c < 11688
                      ? (c >= 11680 && c <= 11686)
                      : c <= 11694)
                    : (c <= 11702 || (c >= 11704 && c <= 11710)))
                  : (c <= 11718 || (c < 11736
                    ? (c < 11728
                      ? (c >= 11720 && c <= 11726)
                      : c <= 11734)
                    : (c <= 11742 || (c >= 12293 && c <= 12295)))))
                : (c <= 12329 || (c < 12449
                  ? (c < 12353
                    ? (c < 12344
                      ? (c >= 12337 && c <= 12341)
                      : c <= 12348)
                    : (c <= 12438 || (c >= 12445 && c <= 12447)))
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
              : (c <= 12735 || (c < 42563
                ? (c < 42240
                  ? (c < 19968
                    ? (c < 13312
                      ? (c >= 12784 && c <= 12799)
                      : c <= 19903)
                    : (c <= 42124 || (c >= 42192 && c <= 42237)))
                  : (c <= 42508 || (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : (c <= 42539 || c == 42561))))
                : (c <= 42563 || (c < 42573
                  ? (c < 42569
                    ? (c < 42567
                      ? c == 42565
                      : c <= 42567)
                    : (c <= 42569 || c == 42571))
                  : (c <= 42573 || (c < 42577
                    ? c == 42575
                    : (c <= 42577 || c == 42579))))))))))))
        : (c <= 42581 || (c < 42887
          ? (c < 42803
            ? (c < 42635
              ? (c < 42601
                ? (c < 42591
                  ? (c < 42587
                    ? (c < 42585
                      ? c == 42583
                      : c <= 42585)
                    : (c <= 42587 || c == 42589))
                  : (c <= 42591 || (c < 42597
                    ? (c < 42595
                      ? c == 42593
                      : c <= 42595)
                    : (c <= 42597 || c == 42599))))
                : (c <= 42601 || (c < 42627
                  ? (c < 42623
                    ? (c < 42605
                      ? c == 42603
                      : c <= 42606)
                    : (c <= 42623 || c == 42625))
                  : (c <= 42627 || (c < 42631
                    ? c == 42629
                    : (c <= 42631 || c == 42633))))))
              : (c <= 42635 || (c < 42656
                ? (c < 42645
                  ? (c < 42641
                    ? (c < 42639
                      ? c == 42637
                      : c <= 42639)
                    : (c <= 42641 || c == 42643))
                  : (c <= 42645 || (c < 42649
                    ? c == 42647
                    : (c <= 42649 || (c >= 42651 && c <= 42653)))))
                : (c <= 42735 || (c < 42793
                  ? (c < 42789
                    ? (c < 42787
                      ? (c >= 42775 && c <= 42783)
                      : c <= 42787)
                    : (c <= 42789 || c == 42791))
                  : (c <= 42793 || (c < 42797
                    ? c == 42795
                    : (c <= 42797 || (c >= 42799 && c <= 42801)))))))))
            : (c <= 42803 || (c < 42841
              ? (c < 42823
                ? (c < 42813
                  ? (c < 42809
                    ? (c < 42807
                      ? c == 42805
                      : c <= 42807)
                    : (c <= 42809 || c == 42811))
                  : (c <= 42813 || (c < 42819
                    ? (c < 42817
                      ? c == 42815
                      : c <= 42817)
                    : (c <= 42819 || c == 42821))))
                : (c <= 42823 || (c < 42833
                  ? (c < 42829
                    ? (c < 42827
                      ? c == 42825
                      : c <= 42827)
                    : (c <= 42829 || c == 42831))
                  : (c <= 42833 || (c < 42837
                    ? c == 42835
                    : (c <= 42837 || c == 42839))))))
              : (c <= 42841 || (c < 42859
                ? (c < 42851
                  ? (c < 42847
                    ? (c < 42845
                      ? c == 42843
                      : c <= 42845)
                    : (c <= 42847 || c == 42849))
                  : (c <= 42851 || (c < 42855
                    ? c == 42853
                    : (c <= 42855 || c == 42857))))
                : (c <= 42859 || (c < 42879
                  ? (c < 42874
                    ? (c < 42863
                      ? c == 42861
                      : c <= 42872)
                    : (c <= 42874 || c == 42876))
                  : (c <= 42879 || (c < 42883
                    ? c == 42881
                    : (c <= 42883 || c == 42885))))))))))
          : (c <= 42888 || (c < 43138
            ? (c < 42939
              ? (c < 42913
                ? (c < 42903
                  ? (c < 42897
                    ? (c < 42894
                      ? c == 42892
                      : c <= 42895)
                    : (c <= 42897 || (c >= 42899 && c <= 42901)))
                  : (c <= 42903 || (c < 42909
                    ? (c < 42907
                      ? c == 42905
                      : c <= 42907)
                    : (c <= 42909 || c == 42911))))
                : (c <= 42913 || (c < 42927
                  ? (c < 42919
                    ? (c < 42917
                      ? c == 42915
                      : c <= 42917)
                    : (c <= 42919 || c == 42921))
                  : (c <= 42927 || (c < 42935
                    ? c == 42933
                    : (c <= 42935 || c == 42937))))))
              : (c <= 42939 || (c < 42965
                ? (c < 42952
                  ? (c < 42945
                    ? (c < 42943
                      ? c == 42941
                      : c <= 42943)
                    : (c <= 42945 || c == 42947))
                  : (c <= 42952 || (c < 42961
                    ? c == 42954
                    : (c <= 42961 || c == 42963))))
                : (c <= 42965 || (c < 43011
                  ? (c < 42994
                    ? (c < 42969
                      ? c == 42967
                      : c <= 42969)
                    : (c <= 42996 || (c >= 42998 && c <= 43009)))
                  : (c <= 43013 || (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : (c <= 43042 || (c >= 43072 && c <= 43123)))))))))
            : (c <= 43187 || (c < 43701
              ? (c < 43494
                ? (c < 43312
                  ? (c < 43261
                    ? (c < 43259
                      ? (c >= 43250 && c <= 43255)
                      : c <= 43259)
                    : (c <= 43262 || (c >= 43274 && c <= 43301)))
                  : (c <= 43334 || (c < 43471
                    ? (c < 43396
                      ? (c >= 43360 && c <= 43388)
                      : c <= 43442)
                    : (c <= 43471 || (c >= 43488 && c <= 43492)))))
                : (c <= 43503 || (c < 43616
                  ? (c < 43584
                    ? (c < 43520
                      ? (c >= 43514 && c <= 43518)
                      : c <= 43560)
                    : (c <= 43586 || (c >= 43588 && c <= 43595)))
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : (c <= 43695 || c == 43697))))))
              : (c <= 43702 || (c < 43793
                ? (c < 43744
                  ? (c < 43714
                    ? (c < 43712
                      ? (c >= 43705 && c <= 43709)
                      : c <= 43712)
                    : (c <= 43714 || (c >= 43739 && c <= 43741)))
                  : (c <= 43754 || (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : (c <= 43782 || (c >= 43785 && c <= 43790)))))
                : (c <= 43798 || (c < 43888
                  ? (c < 43824
                    ? (c < 43816
                      ? (c >= 43808 && c <= 43814)
                      : c <= 43822)
                    : (c <= 43866 || (c >= 43868 && c <= 43881)))
                  : (c <= 44002 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))))))))
      : (c <= 64109 || (c < 71945
        ? (c < 67968
          ? (c < 65664
            ? (c < 65143
              ? (c < 64323
                ? (c < 64287
                  ? (c < 64275
                    ? (c < 64256
                      ? (c >= 64112 && c <= 64217)
                      : c <= 64262)
                    : (c <= 64279 || c == 64285))
                  : (c <= 64296 || (c < 64318
                    ? (c < 64312
                      ? (c >= 64298 && c <= 64310)
                      : c <= 64316)
                    : (c <= 64318 || (c >= 64320 && c <= 64321)))))
                : (c <= 64324 || (c < 64914
                  ? (c < 64612
                    ? (c < 64467
                      ? (c >= 64326 && c <= 64433)
                      : c <= 64605)
                    : (c <= 64829 || (c >= 64848 && c <= 64911)))
                  : (c <= 64967 || (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : (c <= 65137 || c == 65139))))))
              : (c <= 65143 || (c < 65482
                ? (c < 65345
                  ? (c < 65149
                    ? (c < 65147
                      ? c == 65145
                      : c <= 65147)
                    : (c <= 65149 || (c >= 65151 && c <= 65276)))
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : (c <= 65470 || (c >= 65474 && c <= 65479)))))
                : (c <= 65487 || (c < 65576
                  ? (c < 65536
                    ? (c < 65498
                      ? (c >= 65490 && c <= 65495)
                      : c <= 65500)
                    : (c <= 65547 || (c >= 65549 && c <= 65574)))
                  : (c <= 65594 || (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : (c <= 65613 || (c >= 65616 && c <= 65629)))))))))
            : (c <= 65786 || (c < 67072
              ? (c < 66513
                ? (c < 66349
                  ? (c < 66208
                    ? (c < 66176
                      ? (c >= 65856 && c <= 65908)
                      : c <= 66204)
                    : (c <= 66256 || (c >= 66304 && c <= 66335)))
                  : (c <= 66378 || (c < 66464
                    ? (c < 66432
                      ? (c >= 66384 && c <= 66421)
                      : c <= 66461)
                    : (c <= 66499 || (c >= 66504 && c <= 66511)))))
                : (c <= 66517 || (c < 66967
                  ? (c < 66816
                    ? (c < 66776
                      ? (c >= 66600 && c <= 66717)
                      : c <= 66811)
                    : (c <= 66855 || (c >= 66864 && c <= 66915)))
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : (c <= 67001 || (c >= 67003 && c <= 67004)))))))
              : (c <= 67382 || (c < 67639
                ? (c < 67506
                  ? (c < 67456
                    ? (c < 67424
                      ? (c >= 67392 && c <= 67413)
                      : c <= 67431)
                    : (c <= 67461 || (c >= 67463 && c <= 67504)))
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : (c <= 67592 || (c >= 67594 && c <= 67637)))))
                : (c <= 67640 || (c < 67808
                  ? (c < 67680
                    ? (c < 67647
                      ? c == 67644
                      : c <= 67669)
                    : (c <= 67702 || (c >= 67712 && c <= 67742)))
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : (c <= 67861 || (c >= 67872 && c <= 67897)))))))))))
          : (c <= 68023 || (c < 70081
            ? (c < 69296
              ? (c < 68352
                ? (c < 68121
                  ? (c < 68112
                    ? (c < 68096
                      ? (c >= 68030 && c <= 68031)
                      : c <= 68096)
                    : (c <= 68115 || (c >= 68117 && c <= 68119)))
                  : (c <= 68149 || (c < 68288
                    ? (c < 68224
                      ? (c >= 68192 && c <= 68220)
                      : c <= 68252)
                    : (c <= 68295 || (c >= 68297 && c <= 68324)))))
                : (c <= 68405 || (c < 68736
                  ? (c < 68480
                    ? (c < 68448
                      ? (c >= 68416 && c <= 68437)
                      : c <= 68466)
                    : (c <= 68497 || (c >= 68608 && c <= 68680)))
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : (c <= 68899 || (c >= 69248 && c <= 69289)))))))
              : (c <= 69297 || (c < 69749
                ? (c < 69552
                  ? (c < 69424
                    ? (c < 69415
                      ? (c >= 69376 && c <= 69404)
                      : c <= 69415)
                    : (c <= 69445 || (c >= 69488 && c <= 69505)))
                  : (c <= 69572 || (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : (c <= 69687 || (c >= 69745 && c <= 69746)))))
                : (c <= 69749 || (c < 69959
                  ? (c < 69891
                    ? (c < 69840
                      ? (c >= 69763 && c <= 69807)
                      : c <= 69864)
                    : (c <= 69926 || c == 69956))
                  : (c <= 69959 || (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : (c <= 70006 || (c >= 70019 && c <= 70066)))))))))
            : (c <= 70084 || (c < 70493
              ? (c < 70320
                ? (c < 70272
                  ? (c < 70144
                    ? (c < 70108
                      ? c == 70106
                      : c <= 70108)
                    : (c <= 70161 || (c >= 70163 && c <= 70187)))
                  : (c <= 70278 || (c < 70287
                    ? (c < 70282
                      ? c == 70280
                      : c <= 70285)
                    : (c <= 70301 || (c >= 70303 && c <= 70312)))))
                : (c <= 70366 || (c < 70450
                  ? (c < 70419
                    ? (c < 70415
                      ? (c >= 70405 && c <= 70412)
                      : c <= 70416)
                    : (c <= 70440 || (c >= 70442 && c <= 70448)))
                  : (c <= 70451 || (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : (c <= 70461 || c == 70480))))))
              : (c <= 70497 || (c < 71168
                ? (c < 70852
                  ? (c < 70751
                    ? (c < 70727
                      ? (c >= 70656 && c <= 70708)
                      : c <= 70730)
                    : (c <= 70753 || (c >= 70784 && c <= 70831)))
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : (c <= 71086 || (c >= 71128 && c <= 71131)))))
                : (c <= 71215 || (c < 71488
                  ? (c < 71352
                    ? (c < 71296
                      ? c == 71236
                      : c <= 71338)
                    : (c <= 71352 || (c >= 71424 && c <= 71450)))
                  : (c <= 71494 || (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : (c <= 71903 || (c >= 71935 && c <= 71942)))))))))))))
        : (c <= 71945 || (c < 120005
          ? (c < 92160
            ? (c < 72768
              ? (c < 72192
                ? (c < 72001
                  ? (c < 71960
                    ? (c < 71957
                      ? (c >= 71948 && c <= 71955)
                      : c <= 71958)
                    : (c <= 71983 || c == 71999))
                  : (c <= 72001 || (c < 72161
                    ? (c < 72106
                      ? (c >= 72096 && c <= 72103)
                      : c <= 72144)
                    : (c <= 72161 || c == 72163))))
                : (c <= 72192 || (c < 72349
                  ? (c < 72272
                    ? (c < 72250
                      ? (c >= 72203 && c <= 72242)
                      : c <= 72250)
                    : (c <= 72272 || (c >= 72284 && c <= 72329)))
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : (c <= 72712 || (c >= 72714 && c <= 72750)))))))
              : (c <= 72768 || (c < 73112
                ? (c < 73030
                  ? (c < 72968
                    ? (c < 72960
                      ? (c >= 72818 && c <= 72847)
                      : c <= 72966)
                    : (c <= 72969 || (c >= 72971 && c <= 73008)))
                  : (c <= 73030 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : (c <= 73064 || (c >= 73066 && c <= 73097)))))
                : (c <= 73112 || (c < 74880
                  ? (c < 73728
                    ? (c < 73648
                      ? (c >= 73440 && c <= 73458)
                      : c <= 73648)
                    : (c <= 74649 || (c >= 74752 && c <= 74862)))
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : (c <= 78894 || (c >= 82944 && c <= 83526)))))))))
            : (c <= 92728 || (c < 110589
              ? (c < 94032
                ? (c < 92992
                  ? (c < 92880
                    ? (c < 92784
                      ? (c >= 92736 && c <= 92766)
                      : c <= 92862)
                    : (c <= 92909 || (c >= 92928 && c <= 92975)))
                  : (c <= 92995 || (c < 93760
                    ? (c < 93053
                      ? (c >= 93027 && c <= 93047)
                      : c <= 93071)
                    : (c <= 93823 || (c >= 93952 && c <= 94026)))))
                : (c <= 94032 || (c < 100352
                  ? (c < 94179
                    ? (c < 94176
                      ? (c >= 94099 && c <= 94111)
                      : c <= 94177)
                    : (c <= 94179 || (c >= 94208 && c <= 100343)))
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : (c <= 110579 || (c >= 110581 && c <= 110587)))))))
              : (c <= 110590 || (c < 119808
                ? (c < 113664
                  ? (c < 110948
                    ? (c < 110928
                      ? (c >= 110592 && c <= 110882)
                      : c <= 110930)
                    : (c <= 110951 || (c >= 110960 && c <= 111355)))
                  : (c <= 113770 || (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : (c <= 113800 || (c >= 113808 && c <= 113817)))))
                : (c <= 119892 || (c < 119977
                  ? (c < 119970
                    ? (c < 119966
                      ? (c >= 119894 && c <= 119964)
                      : c <= 119967)
                    : (c <= 119970 || (c >= 119973 && c <= 119974)))
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : (c <= 119995 || (c >= 119997 && c <= 120003)))))))))))
          : (c <= 120069 || (c < 126500
            ? (c < 120746
              ? (c < 120488
                ? (c < 120123
                  ? (c < 120086
                    ? (c < 120077
                      ? (c >= 120071 && c <= 120074)
                      : c <= 120084)
                    : (c <= 120092 || (c >= 120094 && c <= 120121)))
                  : (c <= 120126 || (c < 120138
                    ? (c < 120134
                      ? (c >= 120128 && c <= 120132)
                      : c <= 120134)
                    : (c <= 120144 || (c >= 120146 && c <= 120485)))))
                : (c <= 120512 || (c < 120630
                  ? (c < 120572
                    ? (c < 120540
                      ? (c >= 120514 && c <= 120538)
                      : c <= 120570)
                    : (c <= 120596 || (c >= 120598 && c <= 120628)))
                  : (c <= 120654 || (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : (c <= 120712 || (c >= 120714 && c <= 120744)))))))
              : (c <= 120770 || (c < 124904
                ? (c < 123214
                  ? (c < 123136
                    ? (c < 122624
                      ? (c >= 120772 && c <= 120779)
                      : c <= 122654)
                    : (c <= 123180 || (c >= 123191 && c <= 123197)))
                  : (c <= 123214 || (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : (c <= 123627 || (c >= 124896 && c <= 124902)))))
                : (c <= 124907 || (c < 125259
                  ? (c < 124928
                    ? (c < 124912
                      ? (c >= 124909 && c <= 124910)
                      : c <= 124926)
                    : (c <= 125124 || (c >= 125184 && c <= 125251)))
                  : (c <= 125259 || (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : (c <= 126495 || (c >= 126497 && c <= 126498)))))))))
            : (c <= 126500 || (c < 126564
              ? (c < 126541
                ? (c < 126523
                  ? (c < 126516
                    ? (c < 126505
                      ? c == 126503
                      : c <= 126514)
                    : (c <= 126519 || c == 126521))
                  : (c <= 126523 || (c < 126537
                    ? (c < 126535
                      ? c == 126530
                      : c <= 126535)
                    : (c <= 126537 || c == 126539))))
                : (c <= 126543 || (c < 126555
                  ? (c < 126551
                    ? (c < 126548
                      ? (c >= 126545 && c <= 126546)
                      : c <= 126548)
                    : (c <= 126551 || c == 126553))
                  : (c <= 126555 || (c < 126559
                    ? c == 126557
                    : (c <= 126559 || (c >= 126561 && c <= 126562)))))))
              : (c <= 126564 || (c < 126629
                ? (c < 126590
                  ? (c < 126580
                    ? (c < 126572
                      ? (c >= 126567 && c <= 126570)
                      : c <= 126578)
                    : (c <= 126583 || (c >= 126585 && c <= 126588)))
                  : (c <= 126590 || (c < 126603
                    ? (c >= 126592 && c <= 126601)
                    : (c <= 126619 || (c >= 126625 && c <= 126627)))))
                : (c <= 126633 || (c < 178208
                  ? (c < 173824
                    ? (c < 131072
                      ? (c >= 126635 && c <= 126651)
                      : c <= 173791)
                    : (c <= 177976 || (c >= 177984 && c <= 178205)))
                  : (c <= 183969 || (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))))));
}

static inline bool sym_dot_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == '|') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 24:
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 25:
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(89);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 26:
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(91);
      END_STATE();
    case 27:
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == 0) ADVANCE(32);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_seqence);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_accessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(78);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_colon_colon_uppercase_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_colon_colon_lowercase_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_dot_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_package_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
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
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_mutability);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_priv);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3, .external_lex_state = 1},
  [3] = {.lex_state = 3, .external_lex_state = 1},
  [4] = {.lex_state = 3, .external_lex_state = 1},
  [5] = {.lex_state = 3, .external_lex_state = 1},
  [6] = {.lex_state = 3, .external_lex_state = 1},
  [7] = {.lex_state = 3, .external_lex_state = 1},
  [8] = {.lex_state = 3, .external_lex_state = 1},
  [9] = {.lex_state = 3, .external_lex_state = 1},
  [10] = {.lex_state = 3, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 3, .external_lex_state = 1},
  [13] = {.lex_state = 3, .external_lex_state = 1},
  [14] = {.lex_state = 3, .external_lex_state = 1},
  [15] = {.lex_state = 3, .external_lex_state = 1},
  [16] = {.lex_state = 3, .external_lex_state = 1},
  [17] = {.lex_state = 3, .external_lex_state = 1},
  [18] = {.lex_state = 3, .external_lex_state = 1},
  [19] = {.lex_state = 3, .external_lex_state = 1},
  [20] = {.lex_state = 3, .external_lex_state = 1},
  [21] = {.lex_state = 3, .external_lex_state = 1},
  [22] = {.lex_state = 3, .external_lex_state = 1},
  [23] = {.lex_state = 3, .external_lex_state = 1},
  [24] = {.lex_state = 3, .external_lex_state = 1},
  [25] = {.lex_state = 3, .external_lex_state = 1},
  [26] = {.lex_state = 3, .external_lex_state = 1},
  [27] = {.lex_state = 3, .external_lex_state = 1},
  [28] = {.lex_state = 3, .external_lex_state = 1},
  [29] = {.lex_state = 3, .external_lex_state = 1},
  [30] = {.lex_state = 3, .external_lex_state = 1},
  [31] = {.lex_state = 3, .external_lex_state = 1},
  [32] = {.lex_state = 3, .external_lex_state = 1},
  [33] = {.lex_state = 3, .external_lex_state = 1},
  [34] = {.lex_state = 3, .external_lex_state = 1},
  [35] = {.lex_state = 3, .external_lex_state = 1},
  [36] = {.lex_state = 3, .external_lex_state = 1},
  [37] = {.lex_state = 3, .external_lex_state = 1},
  [38] = {.lex_state = 3, .external_lex_state = 1},
  [39] = {.lex_state = 3, .external_lex_state = 1},
  [40] = {.lex_state = 3, .external_lex_state = 1},
  [41] = {.lex_state = 3, .external_lex_state = 1},
  [42] = {.lex_state = 3, .external_lex_state = 1},
  [43] = {.lex_state = 3, .external_lex_state = 1},
  [44] = {.lex_state = 3, .external_lex_state = 1},
  [45] = {.lex_state = 3, .external_lex_state = 1},
  [46] = {.lex_state = 3, .external_lex_state = 1},
  [47] = {.lex_state = 3, .external_lex_state = 1},
  [48] = {.lex_state = 3, .external_lex_state = 1},
  [49] = {.lex_state = 3, .external_lex_state = 1},
  [50] = {.lex_state = 3, .external_lex_state = 1},
  [51] = {.lex_state = 3, .external_lex_state = 1},
  [52] = {.lex_state = 3, .external_lex_state = 1},
  [53] = {.lex_state = 3, .external_lex_state = 1},
  [54] = {.lex_state = 3, .external_lex_state = 1},
  [55] = {.lex_state = 3, .external_lex_state = 1},
  [56] = {.lex_state = 3, .external_lex_state = 1},
  [57] = {.lex_state = 3, .external_lex_state = 1},
  [58] = {.lex_state = 3, .external_lex_state = 1},
  [59] = {.lex_state = 3, .external_lex_state = 1},
  [60] = {.lex_state = 3, .external_lex_state = 1},
  [61] = {.lex_state = 3, .external_lex_state = 1},
  [62] = {.lex_state = 3, .external_lex_state = 1},
  [63] = {.lex_state = 3, .external_lex_state = 1},
  [64] = {.lex_state = 3, .external_lex_state = 1},
  [65] = {.lex_state = 3, .external_lex_state = 1},
  [66] = {.lex_state = 3, .external_lex_state = 1},
  [67] = {.lex_state = 3, .external_lex_state = 1},
  [68] = {.lex_state = 3, .external_lex_state = 1},
  [69] = {.lex_state = 3, .external_lex_state = 1},
  [70] = {.lex_state = 3, .external_lex_state = 1},
  [71] = {.lex_state = 3, .external_lex_state = 1},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 3, .external_lex_state = 1},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 0, .external_lex_state = 1},
  [259] = {.lex_state = 0, .external_lex_state = 1},
  [260] = {.lex_state = 0, .external_lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 5},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 5},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 5},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 5},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 5},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 7},
  [370] = {.lex_state = 5},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 7},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 5},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 8},
  [383] = {.lex_state = 7},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 4},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 2},
  [391] = {.lex_state = 7},
  [392] = {.lex_state = 7},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 8},
  [395] = {.lex_state = 8},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 4},
  [400] = {.lex_state = 5},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 4},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 4},
  [407] = {.lex_state = 5},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 4},
  [410] = {.lex_state = 4},
  [411] = {.lex_state = 4},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 2},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 7},
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 1},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 1},
  [437] = {.lex_state = 2},
  [438] = {.lex_state = 2},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 8},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 5},
  [444] = {.lex_state = 7},
  [445] = {.lex_state = 2},
  [446] = {.lex_state = 5},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 8},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 7},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 8},
  [461] = {.lex_state = 2},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 1},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 4},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 1},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 1},
  [496] = {.lex_state = 1},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 1},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 1},
  [508] = {.lex_state = 4},
  [509] = {.lex_state = 8},
  [510] = {.lex_state = 1},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 1},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 1},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 1},
  [528] = {.lex_state = 1},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 1},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 4},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 1},
  [537] = {.lex_state = 4},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 8},
  [542] = {.lex_state = 1},
  [543] = {.lex_state = 1},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 1},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 1},
  [553] = {.lex_state = 14},
  [554] = {.lex_state = 1},
  [555] = {.lex_state = 4},
  [556] = {.lex_state = 1},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 1},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 4},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 1},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 1},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 1},
  [573] = {.lex_state = 4},
  [574] = {.lex_state = 1},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 1},
  [579] = {.lex_state = 1},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 1},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 8},
  [585] = {.lex_state = 1},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 1},
  [590] = {.lex_state = 8},
  [591] = {.lex_state = 1},
  [592] = {.lex_state = 1},
  [593] = {.lex_state = 1},
  [594] = {.lex_state = 4},
  [595] = {.lex_state = 1},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 15},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 15},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 4},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 4},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 4},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 4},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 4},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 4},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
};

enum {
  ts_external_token_float_literal = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_float_literal] = sym_float_literal,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_float_literal] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_lowercase_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_priv] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_seqence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_accessor_token1] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_mutability] = ACTIONS(1),
    [sym_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_lowercase_identifier] = ACTIONS(1),
    [sym_dot_identifier] = ACTIONS(1),
    [sym_package_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_structure] = STATE(671),
    [sym_structure_item] = STATE(491),
    [sym_visibility] = STATE(492),
    [sym_type_definition] = STATE(495),
    [sym_struct_definition] = STATE(495),
    [sym_enum_definition] = STATE(495),
    [sym_value_definition] = STATE(495),
    [sym_function_definition] = STATE(495),
    [sym_interface_definition] = STATE(495),
    [sym_pub] = STATE(497),
    [aux_sym_structure_repeat1] = STATE(256),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_priv] = ACTIONS(7),
    [anon_sym_pub] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_func] = ACTIONS(19),
    [anon_sym_interface] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(163),
    [sym_atomic_expression] = STATE(194),
    [sym_string_interpolation] = STATE(208),
    [sym_literal] = STATE(208),
    [sym_boolean_literal] = STATE(191),
    [sym_char_literal] = STATE(191),
    [sym_string_literal] = STATE(191),
    [sym_unary_expression] = STATE(194),
    [sym_binary_expression] = STATE(194),
    [sym_struct_expression] = STATE(194),
    [sym_struct_field_expression] = STATE(633),
    [sym_labeled_expression] = STATE(597),
    [sym_labeled_expression_pun] = STATE(627),
    [sym_nonempty_block_expression] = STATE(194),
    [sym_anonymous_lambda_expression] = STATE(194),
    [sym_constructor_expression] = STATE(194),
    [sym_apply_expression] = STATE(194),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(194),
    [sym_access_expression] = STATE(194),
    [sym_method_expression] = STATE(194),
    [sym_unit_expression] = STATE(194),
    [sym_tuple_expression] = STATE(194),
    [sym_constraint_expression] = STATE(194),
    [sym_array_expression] = STATE(194),
    [sym_match_expression] = STATE(189),
    [sym_if_expression] = STATE(189),
    [sym_statement_expression] = STATE(416),
    [sym_let_expression] = STATE(435),
    [sym_shorthand_let_expression] = STATE(435),
    [sym_shorthand_let_pattern] = STATE(667),
    [sym_var_expression] = STATE(435),
    [sym_assign_expression] = STATE(435),
    [sym_left_value] = STATE(648),
    [sym_named_lambda_expression] = STATE(435),
    [sym_while_expression] = STATE(435),
    [sym_return_expression] = STATE(435),
    [sym_identifier] = STATE(318),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(674),
    [aux_sym_block_expression_repeat1] = STATE(9),
    [sym_lowercase_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DOT_DOT] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_package_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [3] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(163),
    [sym_atomic_expression] = STATE(194),
    [sym_string_interpolation] = STATE(208),
    [sym_literal] = STATE(208),
    [sym_boolean_literal] = STATE(191),
    [sym_char_literal] = STATE(191),
    [sym_string_literal] = STATE(191),
    [sym_unary_expression] = STATE(194),
    [sym_binary_expression] = STATE(194),
    [sym_struct_expression] = STATE(194),
    [sym_struct_field_expression] = STATE(643),
    [sym_labeled_expression] = STATE(597),
    [sym_labeled_expression_pun] = STATE(627),
    [sym_nonempty_block_expression] = STATE(194),
    [sym_anonymous_lambda_expression] = STATE(194),
    [sym_constructor_expression] = STATE(194),
    [sym_apply_expression] = STATE(194),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(194),
    [sym_access_expression] = STATE(194),
    [sym_method_expression] = STATE(194),
    [sym_unit_expression] = STATE(194),
    [sym_tuple_expression] = STATE(194),
    [sym_constraint_expression] = STATE(194),
    [sym_array_expression] = STATE(194),
    [sym_match_expression] = STATE(189),
    [sym_if_expression] = STATE(189),
    [sym_statement_expression] = STATE(426),
    [sym_let_expression] = STATE(435),
    [sym_shorthand_let_expression] = STATE(435),
    [sym_shorthand_let_pattern] = STATE(667),
    [sym_var_expression] = STATE(435),
    [sym_assign_expression] = STATE(435),
    [sym_left_value] = STATE(648),
    [sym_named_lambda_expression] = STATE(435),
    [sym_while_expression] = STATE(435),
    [sym_return_expression] = STATE(435),
    [sym_identifier] = STATE(318),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(674),
    [aux_sym_block_expression_repeat1] = STATE(10),
    [sym_lowercase_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DOT_DOT] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_package_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [4] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(163),
    [sym_atomic_expression] = STATE(194),
    [sym_string_interpolation] = STATE(208),
    [sym_literal] = STATE(208),
    [sym_boolean_literal] = STATE(191),
    [sym_char_literal] = STATE(191),
    [sym_string_literal] = STATE(191),
    [sym_unary_expression] = STATE(194),
    [sym_binary_expression] = STATE(194),
    [sym_struct_expression] = STATE(194),
    [sym_nonempty_block_expression] = STATE(194),
    [sym_anonymous_lambda_expression] = STATE(194),
    [sym_constructor_expression] = STATE(194),
    [sym_apply_expression] = STATE(194),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(194),
    [sym_access_expression] = STATE(194),
    [sym_method_expression] = STATE(194),
    [sym_unit_expression] = STATE(194),
    [sym_tuple_expression] = STATE(194),
    [sym_constraint_expression] = STATE(194),
    [sym_array_expression] = STATE(194),
    [sym_match_expression] = STATE(189),
    [sym_if_expression] = STATE(189),
    [sym_statement_expression] = STATE(494),
    [sym_let_expression] = STATE(435),
    [sym_shorthand_let_expression] = STATE(435),
    [sym_shorthand_let_pattern] = STATE(667),
    [sym_var_expression] = STATE(435),
    [sym_assign_expression] = STATE(435),
    [sym_left_value] = STATE(648),
    [sym_named_lambda_expression] = STATE(435),
    [sym_while_expression] = STATE(435),
    [sym_return_expression] = STATE(435),
    [sym_identifier] = STATE(318),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(674),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(82),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_integer_literal] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_match] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(112),
    [anon_sym_break] = ACTIONS(115),
    [anon_sym_continue] = ACTIONS(115),
    [anon_sym_var] = ACTIONS(118),
    [anon_sym_while] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(124),
    [sym_uppercase_identifier] = ACTIONS(127),
    [sym_package_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(94),
  },
  [5] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(163),
    [sym_atomic_expression] = STATE(194),
    [sym_string_interpolation] = STATE(208),
    [sym_literal] = STATE(208),
    [sym_boolean_literal] = STATE(191),
    [sym_char_literal] = STATE(191),
    [sym_string_literal] = STATE(191),
    [sym_unary_expression] = STATE(194),
    [sym_binary_expression] = STATE(194),
    [sym_struct_expression] = STATE(194),
    [sym_nonempty_block_expression] = STATE(194),
    [sym_anonymous_lambda_expression] = STATE(194),
    [sym_constructor_expression] = STATE(194),
    [sym_apply_expression] = STATE(194),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(194),
    [sym_access_expression] = STATE(194),
    [sym_method_expression] = STATE(194),
    [sym_unit_expression] = STATE(194),
    [sym_tuple_expression] = STATE(194),
    [sym_constraint_expression] = STATE(194),
    [sym_array_expression] = STATE(194),
    [sym_match_expression] = STATE(189),
    [sym_if_expression] = STATE(189),
    [sym_statement_expression] = STATE(436),
    [sym_let_expression] = STATE(435),
    [sym_shorthand_let_expression] = STATE(435),
    [sym_shorthand_let_pattern] = STATE(667),
    [sym_var_expression] = STATE(435),
    [sym_assign_expression] = STATE(435),
    [sym_left_value] = STATE(648),
    [sym_named_lambda_expression] = STATE(435),
    [sym_while_expression] = STATE(435),
    [sym_return_expression] = STATE(435),
    [sym_identifier] = STATE(318),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(674),
    [aux_sym_block_expression_repeat1] = STATE(7),
    [sym_lowercase_identifier] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_package_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [6] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(163),
    [sym_atomic_expression] = STATE(194),
    [sym_string_interpolation] = STATE(208),
    [sym_literal] = STATE(208),
    [sym_boolean_literal] = STATE(191),
    [sym_char_literal] = STATE(191),
    [sym_string_literal] = STATE(191),
    [sym_unary_expression] = STATE(194),
    [sym_binary_expression] = STATE(194),
    [sym_struct_expression] = STATE(194),
    [sym_nonempty_block_expression] = STATE(194),
    [sym_anonymous_lambda_expression] = STATE(194),
    [sym_constructor_expression] = STATE(194),
    [sym_apply_expression] = STATE(194),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(194),
    [sym_access_expression] = STATE(194),
    [sym_method_expression] = STATE(194),
    [sym_unit_expression] = STATE(194),
    [sym_tuple_expression] = STATE(194),
    [sym_constraint_expression] = STATE(194),
    [sym_array_expression] = STATE(194),
    [sym_match_expression] = STATE(189),
    [sym_if_expression] = STATE(189),
    [sym_statement_expression] = STATE(424),
    [sym_let_expression] = STATE(435),
    [sym_shorthand_let_expression] = STATE(435),
    [sym_shorthand_let_pattern] = STATE(667),
    [sym_var_expression] = STATE(435),
    [sym_assign_expression] = STATE(435),
    [sym_left_value] = STATE(648),
    [sym_named_lambda_expression] = STATE(435),
    [sym_while_expression] = STATE(435),
    [sym_return_expression] = STATE(435),
    [sym_identifier] = STATE(318),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(674),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_package_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [7] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(163),
    [sym_atomic_expression] = STATE(194),
    [sym_string_interpolation] = STATE(208),
    [sym_literal] = STATE(208),
    [sym_boolean_literal] = STATE(191),
    [sym_char_literal] = STATE(191),
    [sym_string_literal] = STATE(191),
    [sym_unary_expression] = STATE(194),
    [sym_binary_expression] = STATE(194),
    [sym_struct_expression] = STATE(194),
    [sym_nonempty_block_expression] = STATE(194),
    [sym_anonymous_lambda_expression] = STATE(194),
    [sym_constructor_expression] = STATE(194),
    [sym_apply_expression] = STATE(194),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(194),
    [sym_access_expression] = STATE(194),
    [sym_method_expression] = STATE(194),
    [sym_unit_expression] = STATE(194),
    [sym_tuple_expression] = STATE(194),
    [sym_constraint_expression] = STATE(194),
    [sym_array_expression] = STATE(194),
    [sym_match_expression] = STATE(189),
    [sym_if_expression] = STATE(189),
    [sym_statement_expression] = STATE(462),
    [sym_let_expression] = STATE(435),
    [sym_shorthand_let_expression] = STATE(435),
    [sym_shorthand_let_pattern] = STATE(667),
    [sym_var_expression] = STATE(435),
    [sym_assign_expression] = STATE(435),
    [sym_left_value] = STATE(648),
    [sym_named_lambda_expression] = STATE(435),
    [sym_while_expression] = STATE(435),
    [sym_return_expression] = STATE(435),
    [sym_identifier] = STATE(318),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(674),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_package_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
  [8] = {
    [sym_expression] = STATE(236),
    [sym_simple_expression] = STATE(163),
    [sym_atomic_expression] = STATE(194),
    [sym_string_interpolation] = STATE(208),
    [sym_literal] = STATE(208),
    [sym_boolean_literal] = STATE(191),
    [sym_char_literal] = STATE(191),
    [sym_string_literal] = STATE(191),
    [sym_unary_expression] = STATE(194),
    [sym_binary_expression] = STATE(194),
    [sym_struct_expression] = STATE(194),
    [sym_nonempty_block_expression] = STATE(194),
    [sym_anonymous_lambda_expression] = STATE(194),
    [sym_constructor_expression] = STATE(194),
    [sym_apply_expression] = STATE(194),
    [sym_array_access_expression] = STATE(164),
    [sym_dot_apply_expression] = STATE(194),
    [sym_access_expression] = STATE(194),
    [sym_method_expression] = STATE(194),
    [sym_unit_expression] = STATE(194),
    [sym_tuple_expression] = STATE(194),
    [sym_constraint_expression] = STATE(194),
    [sym_array_expression] = STATE(194),
    [sym_match_expression] = STATE(189),
    [sym_if_expression] = STATE(189),
    [sym_statement_expression] = STATE(428),
    [sym_let_expression] = STATE(435),
    [sym_shorthand_let_expression] = STATE(435),
    [sym_shorthand_let_pattern] = STATE(667),
    [sym_var_expression] = STATE(435),
    [sym_assign_expression] = STATE(435),
    [sym_left_value] = STATE(648),
    [sym_named_lambda_expression] = STATE(435),
    [sym_while_expression] = STATE(435),
    [sym_return_expression] = STATE(435),
    [sym_identifier] = STATE(318),
    [sym_qualified_identifier] = STATE(164),
    [sym_qualified_type_identifier] = STATE(674),
    [aux_sym_block_expression_repeat1] = STATE(6),
    [sym_lowercase_identifier] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_package_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(133), 1,
      sym_lowercase_identifier,
    STATE(4), 1,
      aux_sym_block_expression_repeat1,
    STATE(163), 1,
      sym_simple_expression,
    STATE(236), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(434), 1,
      sym_statement_expression,
    STATE(648), 1,
      sym_left_value,
    STATE(667), 1,
      sym_shorthand_let_pattern,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(164), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(435), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(194), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [135] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(133), 1,
      sym_lowercase_identifier,
    STATE(4), 1,
      aux_sym_block_expression_repeat1,
    STATE(163), 1,
      sym_simple_expression,
    STATE(236), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(423), 1,
      sym_statement_expression,
    STATE(648), 1,
      sym_left_value,
    STATE(667), 1,
      sym_shorthand_let_pattern,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(164), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(435), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(194), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [270] = 27,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_integer_literal,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_fn,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_uppercase_identifier,
    ACTIONS(169), 1,
      sym_package_identifier,
    ACTIONS(171), 1,
      sym_comment,
    STATE(163), 1,
      sym_simple_expression,
    STATE(234), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    ACTIONS(147), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [376] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(240), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [475] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(245), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [574] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [673] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [772] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [871] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [970] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(230), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1069] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1168] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(244), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1267] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1366] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1465] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(235), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1564] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1663] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1762] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1861] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1960] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2059] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2158] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2257] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2356] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2455] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(248), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2554] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2653] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2752] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(229), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2848] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(252), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2944] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3040] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3136] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(153), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3232] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(149), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3328] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(147), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3424] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(145), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3520] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(222), 1,
      sym_simple_expression,
    STATE(257), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3616] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(144), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3712] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(226), 1,
      sym_simple_expression,
    STATE(257), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3808] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3904] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(143), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4000] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(231), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4096] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(228), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4192] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4288] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(224), 1,
      sym_simple_expression,
    STATE(257), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4384] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(227), 1,
      sym_simple_expression,
    STATE(257), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4480] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(241), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4576] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(232), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4672] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(172), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4768] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(119), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4864] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(250), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4960] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(254), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5056] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(195), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5152] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(215), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5248] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(214), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5344] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(251), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5440] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(210), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5536] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(238), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5632] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(196), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5728] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(237), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5824] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(223), 1,
      sym_simple_expression,
    STATE(257), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5920] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_lowercase_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_fn,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(203), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_simple_expression,
    STATE(253), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(115), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(105), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6016] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(193), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6112] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(143), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(163), 1,
      anon_sym_fn,
    STATE(163), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(674), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(189), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(208), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(191), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(194), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(251), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(257), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(255), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(261), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(265), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(269), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(273), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(277), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6507] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_DOT_DOT,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(93), 1,
      sym_dotdot_pattern,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(341), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    STATE(658), 1,
      sym_array_sub_pattern,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6588] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_match_expression_repeat1,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(552), 1,
      sym_case_clause,
    STATE(553), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6666] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_match_expression_repeat1,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(552), 1,
      sym_case_clause,
    STATE(553), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6744] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_match_expression_repeat1,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(552), 1,
      sym_case_clause,
    STATE(553), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6822] = 7,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_COLON_EQ,
    ACTIONS(315), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(307), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6870] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    STATE(665), 1,
      sym_dotdot_pattern,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6948] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_match_expression_repeat1,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(552), 1,
      sym_case_clause,
    STATE(553), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7026] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    STATE(647), 1,
      sym_dotdot_pattern,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7104] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_lowercase_identifier,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      anon_sym__,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_uppercase_identifier,
    ACTIONS(357), 1,
      sym_package_identifier,
    STATE(87), 1,
      aux_sym_match_expression_repeat1,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(552), 1,
      sym_case_clause,
    STATE(553), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(342), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(345), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_else,
    STATE(126), 1,
      sym_else_clause,
    ACTIONS(362), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(368), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7265] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7337] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      aux_sym_accessor_token1,
    ACTIONS(384), 1,
      sym_dot_identifier,
    STATE(139), 1,
      sym_accessor,
    ACTIONS(378), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 18,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      sym_colon_colon_lowercase_identifier,
  [7385] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7457] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(391), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(307), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7683] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7755] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      anon_sym_COLON_EQ,
    ACTIONS(315), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(307), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7797] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7869] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7941] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8050] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(392), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8304] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(375), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8373] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(395), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8590] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(369), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(454), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(452), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(474), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(486), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(490), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(494), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(498), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(502), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(506), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(510), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9290] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(383), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(514), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9396] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(518), 1,
      anon_sym_else,
    STATE(206), 1,
      sym_else_clause,
    ACTIONS(362), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(498), 21,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(522), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(526), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9550] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(318), 1,
      sym_identifier,
    STATE(359), 1,
      sym_pattern,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(530), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9656] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_uppercase_identifier,
    ACTIONS(281), 1,
      sym_lowercase_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(299), 1,
      sym_constructor_expression,
    STATE(306), 1,
      sym_pattern,
    STATE(318), 1,
      sym_identifier,
    STATE(636), 1,
      sym_qualified_type_identifier,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(75), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(313), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(314), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9725] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(536), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(534), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9778] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(536), 1,
      anon_sym_COLON,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(534), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9829] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(536), 3,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(534), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(552), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(536), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(534), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(556), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(536), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(534), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10028] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(560), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(368), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(562), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(566), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(536), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(534), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(570), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(574), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(578), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(582), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(586), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(590), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10406] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(398), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10442] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(394), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10478] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COLON_EQ,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(414), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10516] = 8,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      aux_sym_accessor_token1,
    ACTIONS(600), 1,
      sym_dot_identifier,
    STATE(187), 1,
      sym_accessor,
    ACTIONS(378), 22,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [10562] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      anon_sym_EQ,
    ACTIONS(414), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10600] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LF,
    ACTIONS(468), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10636] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 27,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10672] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(307), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10710] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(257), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10748] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LF,
    ACTIONS(512), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10783] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(472), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10818] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10853] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(454), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10890] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LF,
    ACTIONS(460), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10925] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10960] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(564), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10995] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LF,
    ACTIONS(592), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11030] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11065] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11100] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11135] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LF,
    ACTIONS(576), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11170] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11205] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LF,
    ACTIONS(476), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11240] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_LF,
    ACTIONS(572), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11275] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11310] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LF,
    ACTIONS(500), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11345] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LF,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11382] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11417] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11452] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(378), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11487] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11522] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11557] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_LF,
    ACTIONS(524), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11592] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(536), 20,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11631] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(414), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11666] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(536), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11703] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(536), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11740] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(438), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11775] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(430), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11810] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(263), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11845] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(508), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11880] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LF,
    ACTIONS(504), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11915] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(496), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11950] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_LF,
    ACTIONS(492), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11985] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(488), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12020] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12055] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LF,
    ACTIONS(484), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12090] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LF,
    ACTIONS(480), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12125] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(434), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12160] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(464), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12195] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(536), 16,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12236] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12271] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LF,
    ACTIONS(568), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12306] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(418), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12341] = 7,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(536), 10,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12384] = 8,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(536), 9,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12429] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LF,
    ACTIONS(446), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12464] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LF,
    ACTIONS(442), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12499] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(450), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12534] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(554), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12569] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(422), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12604] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LF,
    ACTIONS(426), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12639] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      aux_sym_accessor_token1,
    ACTIONS(384), 1,
      sym_dot_identifier,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_accessor,
    STATE(449), 1,
      sym_block_expression,
    ACTIONS(378), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12687] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      aux_sym_accessor_token1,
    ACTIONS(384), 1,
      sym_dot_identifier,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block_expression,
    STATE(139), 1,
      sym_accessor,
    ACTIONS(378), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12735] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      aux_sym_accessor_token1,
    ACTIONS(384), 1,
      sym_dot_identifier,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block_expression,
    STATE(139), 1,
      sym_accessor,
    ACTIONS(378), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 12,
      sym_float_literal,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
    ACTIONS(620), 13,
      anon_sym_let,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      anon_sym_fn,
      anon_sym_match,
      anon_sym_if,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_var,
      anon_sym_while,
      anon_sym_return,
      sym_lowercase_identifier,
  [12816] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      aux_sym_accessor_token1,
    ACTIONS(384), 1,
      sym_dot_identifier,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_accessor,
    ACTIONS(378), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12861] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      aux_sym_accessor_token1,
    ACTIONS(384), 1,
      sym_dot_identifier,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_accessor,
    ACTIONS(378), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12906] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(628), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12951] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(636), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12996] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      anon_sym_COLON,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    STATE(544), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13051] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13096] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(652), 1,
      anon_sym_LF,
    ACTIONS(654), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13141] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(656), 1,
      anon_sym_LF,
    ACTIONS(658), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13186] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(662), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13231] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13286] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(672), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13331] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(676), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13376] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13420] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13464] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    STATE(535), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13516] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13560] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_RBRACK,
    STATE(511), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13612] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(698), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13660] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(566), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13712] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(582), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13764] = 10,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_STAR_STAR,
    ACTIONS(614), 1,
      anon_sym_AMP_AMP,
    ACTIONS(630), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(710), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(610), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(608), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(612), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13808] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13860] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13912] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(720), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13959] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14008] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14057] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(730), 1,
      anon_sym_RBRACK,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14103] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14149] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14195] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      ts_builtin_sym_end,
    ACTIONS(738), 1,
      anon_sym_priv,
    ACTIONS(741), 1,
      anon_sym_pub,
    ACTIONS(744), 1,
      anon_sym_type,
    ACTIONS(747), 1,
      anon_sym_struct,
    ACTIONS(750), 1,
      anon_sym_enum,
    ACTIONS(753), 1,
      anon_sym_let,
    ACTIONS(756), 1,
      anon_sym_func,
    ACTIONS(759), 1,
      anon_sym_interface,
    STATE(255), 1,
      aux_sym_structure_repeat1,
    STATE(491), 1,
      sym_structure_item,
    STATE(492), 1,
      sym_visibility,
    STATE(497), 1,
      sym_pub,
    STATE(495), 6,
      sym_type_definition,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [14246] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_priv,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_struct,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_func,
    ACTIONS(21), 1,
      anon_sym_interface,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    STATE(255), 1,
      aux_sym_structure_repeat1,
    STATE(491), 1,
      sym_structure_item,
    STATE(492), 1,
      sym_visibility,
    STATE(497), 1,
      sym_pub,
    STATE(495), 6,
      sym_type_definition,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [14297] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_STAR_STAR,
    ACTIONS(550), 1,
      anon_sym_AMP_AMP,
    ACTIONS(644), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(646), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(538), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(544), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(546), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(542), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(548), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    ACTIONS(764), 4,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
    ACTIONS(766), 10,
      sym_float_literal,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 4,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
    ACTIONS(334), 10,
      sym_float_literal,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 4,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
    ACTIONS(774), 10,
      sym_float_literal,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14409] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14446] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(490), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14483] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14520] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14557] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14594] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14631] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14668] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(798), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14705] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14742] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14779] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14816] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14853] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14890] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(557), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14927] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(551), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14964] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15001] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(575), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15038] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_lowercase_identifier,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym__,
    ACTIONS(824), 1,
      sym_uppercase_identifier,
    ACTIONS(826), 1,
      sym_package_identifier,
    STATE(396), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_identifier,
    STATE(484), 1,
      sym_type,
    STATE(514), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15072] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_lowercase_identifier,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym__,
    ACTIONS(824), 1,
      sym_uppercase_identifier,
    ACTIONS(826), 1,
      sym_package_identifier,
    STATE(396), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_identifier,
    STATE(526), 1,
      sym_type,
    STATE(514), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15106] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(594), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15140] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_lowercase_identifier,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym__,
    ACTIONS(824), 1,
      sym_uppercase_identifier,
    ACTIONS(826), 1,
      sym_package_identifier,
    STATE(396), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_identifier,
    STATE(593), 1,
      sym_type,
    STATE(514), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15174] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(615), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15208] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(476), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15242] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(517), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15276] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(399), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15310] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_lowercase_identifier,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym__,
    ACTIONS(824), 1,
      sym_uppercase_identifier,
    ACTIONS(826), 1,
      sym_package_identifier,
    STATE(396), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_identifier,
    STATE(564), 1,
      sym_type,
    STATE(514), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15344] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_lowercase_identifier,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym__,
    ACTIONS(824), 1,
      sym_uppercase_identifier,
    ACTIONS(826), 1,
      sym_package_identifier,
    STATE(396), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_identifier,
    STATE(592), 1,
      sym_type,
    STATE(514), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15378] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_lowercase_identifier,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym__,
    ACTIONS(824), 1,
      sym_uppercase_identifier,
    ACTIONS(826), 1,
      sym_package_identifier,
    STATE(396), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_identifier,
    STATE(523), 1,
      sym_type,
    STATE(514), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15412] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(406), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15446] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(547), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15480] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(367), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15514] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_lowercase_identifier,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym__,
    ACTIONS(824), 1,
      sym_uppercase_identifier,
    ACTIONS(826), 1,
      sym_package_identifier,
    STATE(396), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_identifier,
    STATE(542), 1,
      sym_type,
    STATE(514), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15548] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(675), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15582] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(387), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15616] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(629), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15650] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(649), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15684] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_lowercase_identifier,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym__,
    ACTIONS(824), 1,
      sym_uppercase_identifier,
    ACTIONS(826), 1,
      sym_package_identifier,
    STATE(396), 1,
      sym_qualified_type_identifier,
    STATE(465), 1,
      sym_identifier,
    STATE(580), 1,
      sym_type,
    STATE(514), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15718] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(776), 1,
      sym_lowercase_identifier,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 1,
      anon_sym__,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(344), 1,
      sym_qualified_type_identifier,
    STATE(520), 1,
      sym_type,
    STATE(398), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(832), 1,
      anon_sym_EQ,
    ACTIONS(830), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(836), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(834), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_EQ,
    ACTIONS(838), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_EQ,
    ACTIONS(842), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_EQ,
    ACTIONS(846), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_EQ,
    ACTIONS(850), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_EQ,
    ACTIONS(854), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_EQ,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(858), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
  [15904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_EQ,
    ACTIONS(864), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_EQ,
    ACTIONS(868), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_EQ,
    ACTIONS(872), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_EQ,
    ACTIONS(876), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_EQ,
    ACTIONS(880), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(884), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [16012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_EQ,
    ACTIONS(888), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [16030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_EQ,
    ACTIONS(834), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [16048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_EQ,
    ACTIONS(892), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [16066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_EQ,
    ACTIONS(896), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [16084] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      anon_sym_EQ,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    STATE(340), 1,
      sym_type_parameters,
    STATE(394), 1,
      sym_parameters,
    STATE(573), 1,
      sym_return_type,
    STATE(574), 1,
      sym_block_expression,
  [16115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [16130] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(910), 1,
      sym_lowercase_identifier,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_identifier,
    STATE(320), 1,
      aux_sym_interface_definition_repeat1,
    STATE(548), 1,
      sym_interface_method_declaration,
    STATE(570), 1,
      sym_function_identifier,
    STATE(653), 1,
      sym_qualified_type_identifier,
  [16161] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_lowercase_identifier,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(919), 1,
      sym_uppercase_identifier,
    ACTIONS(922), 1,
      sym_package_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(320), 1,
      aux_sym_interface_definition_repeat1,
    STATE(548), 1,
      sym_interface_method_declaration,
    STATE(570), 1,
      sym_function_identifier,
    STATE(653), 1,
      sym_qualified_type_identifier,
  [16192] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(910), 1,
      sym_lowercase_identifier,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_identifier,
    STATE(320), 1,
      aux_sym_interface_definition_repeat1,
    STATE(548), 1,
      sym_interface_method_declaration,
    STATE(570), 1,
      sym_function_identifier,
    STATE(653), 1,
      sym_qualified_type_identifier,
  [16223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [16238] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(910), 1,
      sym_lowercase_identifier,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_identifier,
    STATE(321), 1,
      aux_sym_interface_definition_repeat1,
    STATE(548), 1,
      sym_interface_method_declaration,
    STATE(570), 1,
      sym_function_identifier,
    STATE(653), 1,
      sym_qualified_type_identifier,
  [16269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(259), 8,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_lowercase_identifier,
  [16286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 9,
      ts_builtin_sym_end,
      anon_sym_priv,
      anon_sym_pub,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [16301] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    ACTIONS(927), 1,
      anon_sym_EQ,
    STATE(350), 1,
      sym_type_parameters,
    STATE(382), 1,
      sym_parameters,
    STATE(550), 1,
      sym_block_expression,
    STATE(555), 1,
      sym_return_type,
  [16332] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(910), 1,
      sym_lowercase_identifier,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_identifier,
    STATE(319), 1,
      aux_sym_interface_definition_repeat1,
    STATE(548), 1,
      sym_interface_method_declaration,
    STATE(570), 1,
      sym_function_identifier,
    STATE(653), 1,
      sym_qualified_type_identifier,
  [16363] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(933), 1,
      anon_sym_priv,
    ACTIONS(935), 1,
      anon_sym_pub,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    ACTIONS(939), 1,
      sym_mutability,
    STATE(330), 1,
      aux_sym_struct_definition_repeat1,
    STATE(581), 1,
      sym_struct_filed_declaration,
    STATE(607), 1,
      sym_visibility,
  [16391] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(933), 1,
      anon_sym_priv,
    ACTIONS(935), 1,
      anon_sym_pub,
    ACTIONS(939), 1,
      sym_mutability,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      aux_sym_struct_definition_repeat1,
    STATE(581), 1,
      sym_struct_filed_declaration,
    STATE(607), 1,
      sym_visibility,
  [16419] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(933), 1,
      anon_sym_priv,
    ACTIONS(935), 1,
      anon_sym_pub,
    ACTIONS(939), 1,
      sym_mutability,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      aux_sym_struct_definition_repeat1,
    STATE(581), 1,
      sym_struct_filed_declaration,
    STATE(607), 1,
      sym_visibility,
  [16447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_pub_attribute,
    ACTIONS(947), 3,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
    ACTIONS(949), 3,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [16467] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_lowercase_identifier,
    ACTIONS(954), 1,
      anon_sym_priv,
    ACTIONS(957), 1,
      anon_sym_pub,
    ACTIONS(960), 1,
      anon_sym_RBRACE,
    ACTIONS(962), 1,
      sym_mutability,
    STATE(332), 1,
      aux_sym_struct_definition_repeat1,
    STATE(581), 1,
      sym_struct_filed_declaration,
    STATE(607), 1,
      sym_visibility,
  [16495] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(933), 1,
      anon_sym_priv,
    ACTIONS(935), 1,
      anon_sym_pub,
    ACTIONS(939), 1,
      sym_mutability,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      aux_sym_struct_definition_repeat1,
    STATE(581), 1,
      sym_struct_filed_declaration,
    STATE(607), 1,
      sym_visibility,
  [16523] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(933), 1,
      anon_sym_priv,
    ACTIONS(935), 1,
      anon_sym_pub,
    ACTIONS(939), 1,
      sym_mutability,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      aux_sym_struct_definition_repeat1,
    STATE(581), 1,
      sym_struct_filed_declaration,
    STATE(607), 1,
      sym_visibility,
  [16551] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(933), 1,
      anon_sym_priv,
    ACTIONS(935), 1,
      anon_sym_pub,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    ACTIONS(939), 1,
      sym_mutability,
    STATE(332), 1,
      aux_sym_struct_definition_repeat1,
    STATE(581), 1,
      sym_struct_filed_declaration,
    STATE(607), 1,
      sym_visibility,
  [16579] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_DQUOTE,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    STATE(354), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16600] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(455), 1,
      sym_constraint,
    STATE(530), 1,
      sym_qualified_type_identifier,
    STATE(613), 1,
      sym_constraints,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [16623] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
    STATE(343), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16644] = 7,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(977), 1,
      anon_sym_DQUOTE,
    STATE(338), 1,
      sym_interpolator,
    STATE(360), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16667] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    ACTIONS(979), 1,
      anon_sym_EQ,
    STATE(414), 1,
      sym_parameters,
    STATE(533), 1,
      sym_return_type,
    STATE(536), 1,
      sym_block_expression,
  [16692] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      anon_sym_as,
    STATE(389), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(661), 1,
      sym_dotdot_pattern,
  [16717] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
    STATE(354), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16738] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    STATE(354), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    STATE(410), 1,
      sym_type_arguments,
    ACTIONS(987), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16776] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(991), 1,
      sym_lowercase_identifier,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
    STATE(545), 1,
      sym_filed_single_pattern,
    STATE(634), 1,
      sym_dotdot_pattern,
    STATE(503), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16799] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(995), 1,
      anon_sym_DQUOTE,
    STATE(342), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16820] = 7,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(997), 1,
      anon_sym_DQUOTE,
    STATE(349), 1,
      sym_interpolator,
    STATE(360), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16843] = 7,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(346), 1,
      sym_interpolator,
    STATE(339), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16866] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_DQUOTE,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    STATE(351), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16887] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      anon_sym_EQ,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    STATE(394), 1,
      sym_parameters,
    STATE(573), 1,
      sym_return_type,
    STATE(574), 1,
      sym_block_expression,
  [16912] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    STATE(354), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16933] = 7,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(1003), 1,
      anon_sym_DQUOTE,
    STATE(353), 1,
      sym_interpolator,
    STATE(347), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16956] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(1005), 1,
      anon_sym_DQUOTE,
    STATE(336), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16977] = 6,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_DQUOTE,
    ACTIONS(1009), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1012), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1015), 1,
      sym_escape_seqence,
    STATE(354), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16998] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(991), 1,
      sym_lowercase_identifier,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
    STATE(545), 1,
      sym_filed_single_pattern,
    STATE(668), 1,
      sym_dotdot_pattern,
    STATE(503), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [17021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_DASH_GT,
    ACTIONS(1020), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17035] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(910), 1,
      sym_lowercase_identifier,
    STATE(317), 1,
      sym_function_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(653), 1,
      sym_qualified_type_identifier,
  [17057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_lowercase_identifier,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
    STATE(388), 1,
      sym_filed_single_pattern,
    STATE(657), 1,
      sym_struct_filed_pattern,
    STATE(503), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [17077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(983), 1,
      anon_sym_as,
    ACTIONS(1026), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [17093] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1033), 1,
      sym_escape_seqence,
    ACTIONS(1028), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    STATE(360), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17111] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    ACTIONS(784), 1,
      sym_uppercase_identifier,
    ACTIONS(910), 1,
      sym_lowercase_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(326), 1,
      sym_function_identifier,
    STATE(653), 1,
      sym_qualified_type_identifier,
  [17133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(1036), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [17147] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_package_identifier,
    STATE(318), 1,
      sym_identifier,
    STATE(512), 1,
      sym_constraint,
    STATE(530), 1,
      sym_qualified_type_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [17167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_DASH_GT,
    ACTIONS(1038), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_DASH_GT,
    ACTIONS(1042), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_DASH_GT,
    ACTIONS(1046), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [17231] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(983), 1,
      anon_sym_as,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_constructor_pattern_repeat1,
  [17250] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(400), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [17278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [17289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_RBRACK,
    STATE(565), 1,
      sym_identifier,
    STATE(612), 1,
      sym_type_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [17306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RBRACK,
    STATE(565), 1,
      sym_identifier,
    STATE(612), 1,
      sym_type_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [17323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(983), 1,
      anon_sym_as,
    ACTIONS(1066), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_RBRACE,
    ACTIONS(1068), 4,
      anon_sym_priv,
      anon_sym_pub,
      sym_mutability,
      sym_lowercase_identifier,
  [17351] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LF,
    ACTIONS(1074), 1,
      anon_sym_DASH_GT,
    STATE(510), 1,
      sym_return_type,
    ACTIONS(1072), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17368] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(997), 1,
      anon_sym_DQUOTE,
    STATE(360), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_lowercase_identifier,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    STATE(597), 1,
      sym_labeled_expression,
    STATE(627), 1,
      sym_labeled_expression_pun,
    STATE(628), 1,
      sym_struct_field_expression,
  [17404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_lowercase_identifier,
    ACTIONS(1080), 1,
      anon_sym_RBRACE,
    STATE(597), 1,
      sym_labeled_expression,
    STATE(627), 1,
      sym_labeled_expression_pun,
    STATE(660), 1,
      sym_struct_field_expression,
  [17423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_constructor_pattern_repeat1,
    ACTIONS(1026), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [17438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(902), 1,
      anon_sym_EQ,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    STATE(573), 1,
      sym_return_type,
    STATE(574), 1,
      sym_block_expression,
  [17457] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(983), 1,
      anon_sym_as,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    ACTIONS(1087), 1,
      anon_sym_COLON,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
  [17476] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_LF,
    ACTIONS(1095), 1,
      anon_sym_LBRACK,
    STATE(569), 1,
      sym_type_parameters,
    ACTIONS(1093), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(634), 1,
      sym_dotdot_pattern,
  [17512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1103), 1,
      anon_sym_RBRACE,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(670), 1,
      sym_dotdot_pattern,
  [17553] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(647), 1,
      sym_dotdot_pattern,
  [17572] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_DASH_GT,
    ACTIONS(1109), 1,
      anon_sym_LF,
    STATE(507), 1,
      sym_return_type,
    ACTIONS(1111), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(983), 1,
      anon_sym_as,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_constructor_pattern_repeat1,
  [17608] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(983), 1,
      anon_sym_as,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_constructor_pattern_repeat1,
  [17627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_lowercase_identifier,
    ACTIONS(1119), 1,
      anon_sym_RBRACE,
    STATE(470), 1,
      sym_struct_filed_expression,
    STATE(608), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17644] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    ACTIONS(979), 1,
      anon_sym_EQ,
    STATE(533), 1,
      sym_return_type,
    STATE(536), 1,
      sym_block_expression,
  [17663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(983), 1,
      anon_sym_as,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    ACTIONS(1123), 1,
      anon_sym_EQ,
    STATE(663), 1,
      sym_type_annotation,
  [17682] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_LF,
    ACTIONS(1127), 1,
      anon_sym_LBRACK,
    STATE(527), 1,
      sym_type_arguments,
    ACTIONS(1125), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17699] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_LBRACK,
    ACTIONS(1129), 1,
      anon_sym_LF,
    STATE(534), 1,
      sym_type_parameters,
    ACTIONS(1131), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17738] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(977), 1,
      anon_sym_DQUOTE,
    STATE(360), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [17766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_lowercase_identifier,
    ACTIONS(1141), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      sym_struct_filed_expression,
    STATE(608), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17794] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_DASH_GT,
    ACTIONS(1143), 1,
      anon_sym_LF,
    STATE(478), 1,
      sym_return_type,
    ACTIONS(1145), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17811] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_DASH_GT,
    ACTIONS(1147), 1,
      anon_sym_LF,
    STATE(499), 1,
      sym_return_type,
    ACTIONS(1149), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17839] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_unescaped_string_fragment,
    ACTIONS(973), 1,
      sym_escape_seqence,
    ACTIONS(1003), 1,
      anon_sym_DQUOTE,
    STATE(378), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_RBRACK,
    STATE(565), 1,
      sym_identifier,
    STATE(612), 1,
      sym_type_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [17873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_lowercase_identifier,
    ACTIONS(1161), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      sym_struct_filed_expression,
    STATE(608), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_RBRACK,
    STATE(565), 1,
      sym_identifier,
    STATE(612), 1,
      sym_type_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [17940] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    STATE(489), 1,
      sym_return_type,
    STATE(493), 1,
      sym_block_expression,
  [17959] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_DASH_GT,
    ACTIONS(1167), 1,
      anon_sym_LF,
    STATE(579), 1,
      sym_return_type,
    ACTIONS(1169), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17976] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1175), 1,
      anon_sym_RBRACE,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(565), 1,
      sym_identifier,
    STATE(612), 1,
      sym_type_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [18004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(565), 1,
      sym_identifier,
    STATE(586), 1,
      sym_type_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [18018] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(315), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [18030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(1177), 1,
      anon_sym_if,
    STATE(106), 2,
      sym_block_expression,
      sym_if_expression,
  [18044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(565), 1,
      sym_identifier,
    STATE(571), 1,
      sym_type_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [18058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    ACTIONS(1181), 1,
      sym_uppercase_identifier,
    STATE(430), 1,
      aux_sym_enum_definition_repeat1,
    STATE(589), 1,
      sym_enum_constructor,
  [18074] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18088] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    STATE(156), 1,
      sym_block_expression,
    STATE(620), 1,
      sym_return_type,
  [18118] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_pub_attribute,
    ACTIONS(1060), 2,
      sym_mutability,
      sym_lowercase_identifier,
  [18146] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18160] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_LF,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    ACTIONS(1193), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_uppercase_identifier,
    ACTIONS(1197), 1,
      anon_sym_RBRACE,
    STATE(441), 1,
      aux_sym_enum_definition_repeat1,
    STATE(589), 1,
      sym_enum_constructor,
  [18190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_uppercase_identifier,
    ACTIONS(1197), 1,
      anon_sym_RBRACE,
    STATE(442), 1,
      aux_sym_enum_definition_repeat1,
    STATE(589), 1,
      sym_enum_constructor,
  [18206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    STATE(624), 1,
      sym_type_annotation,
    ACTIONS(1199), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18220] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_LF,
    ACTIONS(1203), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
  [18232] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1205), 1,
      anon_sym_RBRACE,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18246] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(672), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
  [18258] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1207), 1,
      anon_sym_RBRACE,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18272] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_LF,
    ACTIONS(1211), 1,
      anon_sym_DASH_GT,
    ACTIONS(1209), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18286] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_LF,
    ACTIONS(1215), 1,
      anon_sym_DASH_GT,
    ACTIONS(1213), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(1217), 1,
      anon_sym_if,
    STATE(213), 2,
      sym_block_expression,
      sym_if_expression,
  [18314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
    ACTIONS(1223), 1,
      sym_uppercase_identifier,
    STATE(441), 1,
      aux_sym_enum_definition_repeat1,
    STATE(589), 1,
      sym_enum_constructor,
  [18340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_uppercase_identifier,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    STATE(441), 1,
      aux_sym_enum_definition_repeat1,
    STATE(589), 1,
      sym_enum_constructor,
  [18356] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1230), 1,
      sym_escape_seqence,
    ACTIONS(1228), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_unescaped_string_fragment,
  [18368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    STATE(179), 1,
      sym_block_expression,
    STATE(610), 1,
      sym_return_type,
  [18384] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_LF,
    ACTIONS(1234), 1,
      anon_sym_DASH_GT,
    ACTIONS(1232), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18398] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1238), 1,
      sym_escape_seqence,
    ACTIONS(1236), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_unescaped_string_fragment,
  [18410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      aux_sym_struct_filed_pattern_repeat1,
    ACTIONS(1240), 2,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [18424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18434] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_LF,
    ACTIONS(1249), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
  [18446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_PLUS,
    STATE(464), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18460] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(560), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [18472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(698), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [18486] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
    STATE(433), 1,
      sym_block_expression,
    STATE(598), 1,
      sym_return_type,
  [18502] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_uppercase_identifier,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      aux_sym_enum_definition_repeat1,
    STATE(589), 1,
      sym_enum_constructor,
  [18518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_PLUS,
    STATE(450), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18532] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_uppercase_identifier,
    ACTIONS(1260), 1,
      anon_sym_RBRACE,
    STATE(441), 1,
      aux_sym_enum_definition_repeat1,
    STATE(589), 1,
      sym_enum_constructor,
  [18548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
    ACTIONS(1262), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [18562] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_LF,
    ACTIONS(1269), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
  [18574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 4,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_package_identifier,
  [18584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18594] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_LF,
    ACTIONS(1275), 1,
      anon_sym_DASH_GT,
    ACTIONS(1273), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18608] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1277), 1,
      anon_sym_RBRACE,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_lowercase_identifier,
    STATE(600), 1,
      sym_struct_filed_expression,
    STATE(608), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [18636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_PLUS,
    STATE(464), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1279), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18650] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LF,
    ACTIONS(1284), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [18662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_lowercase_identifier,
    STATE(545), 1,
      sym_filed_single_pattern,
    STATE(503), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [18676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_COLON,
    ACTIONS(1286), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [18688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_constructor_pattern_repeat1,
  [18701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(397), 1,
      sym_identifier,
    ACTIONS(824), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [18712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(577), 1,
      aux_sym_struct_field_expression_repeat1,
  [18725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_COLON,
    ACTIONS(1296), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [18736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_constructor_pattern_repeat1,
  [18749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(500), 1,
      sym_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [18760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACK,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
  [18773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_constructor_pattern_repeat1,
  [18786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18795] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_LF,
    ACTIONS(1308), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18806] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_LF,
    ACTIONS(1149), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
  [18830] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_LF,
    ACTIONS(1314), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    ACTIONS(1316), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
  [18854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(501), 1,
      sym_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [18865] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_LF,
    ACTIONS(1320), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18876] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_LF,
    ACTIONS(1324), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18887] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LF,
    ACTIONS(1326), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(652), 1,
      sym_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [18909] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_LF,
    ACTIONS(1330), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_RBRACE,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_struct_field_expression_repeat1,
  [18933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(1337), 1,
      anon_sym_EQ,
    STATE(591), 1,
      sym_block_expression,
  [18946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    STATE(568), 1,
      aux_sym_enum_constructor_repeat1,
  [18959] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_LF,
    ACTIONS(1343), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      anon_sym_type,
    ACTIONS(1347), 1,
      anon_sym_struct,
    ACTIONS(1349), 1,
      anon_sym_enum,
  [18983] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_LF,
    ACTIONS(1353), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18994] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LF,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19005] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_LF,
    ACTIONS(1357), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19016] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_LF,
    ACTIONS(1361), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_let,
    ACTIONS(1365), 1,
      anon_sym_func,
    ACTIONS(1367), 1,
      anon_sym_interface,
  [19040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
  [19053] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_LF,
    ACTIONS(1111), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
    ACTIONS(1371), 1,
      anon_sym_LBRACE,
    STATE(640), 1,
      sym_type_parameters,
  [19077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
    ACTIONS(1373), 1,
      anon_sym_LBRACE,
    STATE(637), 1,
      sym_type_parameters,
  [19090] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_LF,
    ACTIONS(1377), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [19110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
  [19123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_parameters_repeat1,
  [19136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      sym_lowercase_identifier,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      sym_parameter,
  [19149] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LF,
    ACTIONS(1072), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    ACTIONS(1392), 1,
      anon_sym_EQ,
    STATE(656), 1,
      sym_type_annotation,
  [19173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [19182] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_LF,
    ACTIONS(1398), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(1400), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
  [19206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [19215] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_LF,
    ACTIONS(1402), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19226] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_LF,
    ACTIONS(1404), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(384), 1,
      sym_identifier,
    ACTIONS(824), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [19248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
  [19261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_RBRACK,
    STATE(474), 1,
      aux_sym_enum_constructor_repeat1,
  [19274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
  [19287] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_LF,
    ACTIONS(1416), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    ACTIONS(1420), 1,
      anon_sym_COMMA,
    STATE(479), 1,
      aux_sym_enum_constructor_repeat1,
  [19311] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1422), 1,
      anon_sym_LF,
    ACTIONS(1424), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(558), 1,
      sym_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [19333] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_LF,
    ACTIONS(1428), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    ACTIONS(1433), 1,
      anon_sym_RBRACK,
    STATE(524), 1,
      aux_sym_type_parameters_repeat1,
  [19357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
  [19370] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    ACTIONS(1439), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19381] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_LF,
    ACTIONS(1441), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19392] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_LF,
    ACTIONS(1443), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(562), 1,
      sym_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [19414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [19423] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_LF,
    ACTIONS(1449), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(639), 1,
      sym_identifier,
    ACTIONS(784), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [19445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    STATE(493), 1,
      sym_block_expression,
  [19458] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_LF,
    ACTIONS(1093), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
  [19482] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_LF,
    ACTIONS(1455), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    ACTIONS(1457), 1,
      anon_sym_EQ,
    STATE(626), 1,
      sym_type_annotation,
  [19506] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_LF,
    ACTIONS(1461), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    ACTIONS(1465), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_parameters_repeat1,
  [19530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      sym_lowercase_identifier,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      sym_parameter,
  [19543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [19552] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_LF,
    ACTIONS(1471), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19563] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_LF,
    ACTIONS(1475), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(1477), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
  [19587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [19596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      sym_lowercase_identifier,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      sym_parameter,
  [19609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RBRACK,
    STATE(525), 1,
      aux_sym_enum_constructor_repeat1,
  [19622] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_LF,
    ACTIONS(1487), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    ACTIONS(1489), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
  [19646] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_LF,
    ACTIONS(1493), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    ACTIONS(1497), 1,
      anon_sym_COMMA,
    STATE(518), 1,
      aux_sym_enum_constructor_repeat1,
  [19670] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_LF,
    ACTIONS(1501), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(983), 1,
      anon_sym_as,
    ACTIONS(1503), 1,
      anon_sym_EQ_GT,
  [19694] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_LF,
    ACTIONS(1507), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(902), 1,
      anon_sym_EQ,
    STATE(574), 1,
      sym_block_expression,
  [19718] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1509), 1,
      anon_sym_LF,
    ACTIONS(1511), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym_enum_constructor_repeat1,
  [19742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
    ACTIONS(1515), 1,
      anon_sym_LBRACE,
    STATE(642), 1,
      sym_type_parameters,
  [19755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RBRACK,
    ACTIONS(1517), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym_type_parameters_repeat1,
  [19768] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LF,
    ACTIONS(1519), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      anon_sym_COMMA,
    ACTIONS(766), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [19790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
    ACTIONS(1523), 1,
      anon_sym_LBRACE,
    STATE(641), 1,
      sym_type_parameters,
  [19803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    ACTIONS(1525), 1,
      anon_sym_EQ,
    STATE(630), 1,
      sym_type_annotation,
  [19816] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LF,
    ACTIONS(1527), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_COLON,
    ACTIONS(1531), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(1533), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
  [19851] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_LF,
    ACTIONS(1535), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
  [19875] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1537), 1,
      anon_sym_LF,
    ACTIONS(1539), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
    ACTIONS(1541), 1,
      anon_sym_LPAREN,
    STATE(645), 1,
      sym_type_parameters,
  [19899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_COMMA,
    ACTIONS(1545), 1,
      anon_sym_RBRACK,
    STATE(559), 1,
      aux_sym_type_parameters_repeat1,
  [19912] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1547), 1,
      anon_sym_LF,
    ACTIONS(1549), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_EQ,
    STATE(536), 1,
      sym_block_expression,
  [19936] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_LF,
    ACTIONS(1553), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
    ACTIONS(1557), 1,
      anon_sym_COMMA,
    STATE(549), 1,
      aux_sym_enum_constructor_repeat1,
  [19960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_RBRACK,
    ACTIONS(1559), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym_type_parameters_repeat1,
  [19973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_RBRACE,
    ACTIONS(1561), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_struct_field_expression_repeat1,
  [19986] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1563), 1,
      anon_sym_LF,
    ACTIONS(1565), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19997] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_LF,
    ACTIONS(1145), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20008] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_LF,
    ACTIONS(1567), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20019] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1569), 1,
      anon_sym_LF,
    ACTIONS(1571), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(1573), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym_apply_expression_repeat1,
  [20043] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LF,
    ACTIONS(1575), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [20063] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1579), 1,
      anon_sym_LF,
    ACTIONS(1581), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_COMMA,
    ACTIONS(1585), 1,
      anon_sym_RBRACK,
    STATE(576), 1,
      aux_sym_type_parameters_repeat1,
  [20087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(1587), 1,
      sym_lowercase_identifier,
    STATE(444), 1,
      sym_parameters,
  [20100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
    ACTIONS(1591), 1,
      anon_sym_COMMA,
    STATE(539), 1,
      aux_sym_parameters_repeat1,
  [20113] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1593), 1,
      anon_sym_LF,
    ACTIONS(1595), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [20133] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_LF,
    ACTIONS(1601), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20144] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_LF,
    ACTIONS(1603), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20155] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_LF,
    ACTIONS(1605), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [20175] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_LF,
    ACTIONS(1609), 2,
      anon_sym_SEMI,
      anon_sym_,
  [20186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 1,
      anon_sym_RBRACE,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
  [20204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(458), 1,
      sym_block_expression,
  [20214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_DQUOTE,
    STATE(502), 1,
      sym_string_literal,
  [20224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [20232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(604), 1,
      sym_string_literal,
  [20242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_DQUOTE,
    STATE(591), 1,
      sym_string_literal,
  [20252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      sym_lowercase_identifier,
    STATE(596), 1,
      sym_parameter,
  [20262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_DQUOTE,
    STATE(477), 1,
      sym_string_literal,
  [20272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    STATE(425), 1,
      sym_parameters,
  [20282] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1617), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1619), 1,
      sym_escape_seqence,
  [20292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1621), 1,
      sym_lowercase_identifier,
    ACTIONS(1623), 1,
      sym_mutability,
  [20302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1625), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [20310] = 3,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(1627), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1629), 1,
      sym_escape_seqence,
  [20320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_block_expression,
  [20330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [20338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1631), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_DQUOTE,
    STATE(536), 1,
      sym_string_literal,
  [20364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [20372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(619), 1,
      sym_string_literal,
  [20382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(599), 1,
      sym_string_literal,
  [20392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(602), 1,
      sym_string_literal,
  [20402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_DQUOTE,
    STATE(493), 1,
      sym_string_literal,
  [20412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block_expression,
  [20422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    STATE(453), 1,
      sym_parameters,
  [20432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    STATE(444), 1,
      sym_parameters,
  [20442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 2,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
  [20450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1633), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(614), 1,
      sym_string_literal,
  [20468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1635), 1,
      anon_sym_EQ,
  [20475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
  [20482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1637), 1,
      anon_sym_RBRACE,
  [20489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1639), 1,
      anon_sym_RPAREN,
  [20496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1641), 1,
      anon_sym_EQ,
  [20503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      anon_sym_COLON,
  [20510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 1,
      sym_lowercase_identifier,
  [20517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      anon_sym_RBRACE,
  [20524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
  [20531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      anon_sym_SQUOTE,
  [20538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 1,
      sym_colon_colon_uppercase_identifier,
  [20545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      anon_sym_LBRACE,
  [20552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      sym_dot_identifier,
  [20559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_LBRACE,
  [20566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_LBRACE,
  [20573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      anon_sym_LBRACE,
  [20580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      anon_sym_LBRACE,
  [20587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_RBRACE,
  [20594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
  [20601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_LPAREN,
  [20608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym_lowercase_identifier,
  [20615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
  [20622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      anon_sym_EQ,
  [20629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1671), 1,
      anon_sym_RPAREN,
  [20636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      anon_sym_COLON,
  [20643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_SQUOTE,
  [20650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 1,
      anon_sym_LBRACE,
  [20657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      sym_colon_colon_lowercase_identifier,
  [20664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1681), 1,
      sym_dot_identifier,
  [20671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      sym_lowercase_identifier,
  [20678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_EQ,
  [20685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_RBRACE,
  [20692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1687), 1,
      anon_sym_RBRACK,
  [20699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1689), 1,
      sym_lowercase_identifier,
  [20706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1691), 1,
      anon_sym_RBRACE,
  [20713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
  [20720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1693), 1,
      anon_sym_readonly,
  [20727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1695), 1,
      anon_sym_EQ,
  [20734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      sym_dot_identifier,
  [20741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
  [20748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      anon_sym_COLON,
  [20755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_COLON_EQ,
  [20762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      anon_sym_RBRACE,
  [20769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      sym_lowercase_identifier,
  [20776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
  [20783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      ts_builtin_sym_end,
  [20790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      sym_dot_identifier,
  [20797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      sym_lowercase_identifier,
  [20804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      sym_colon_colon_uppercase_identifier,
  [20811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 475,
  [SMALL_STATE(14)] = 574,
  [SMALL_STATE(15)] = 673,
  [SMALL_STATE(16)] = 772,
  [SMALL_STATE(17)] = 871,
  [SMALL_STATE(18)] = 970,
  [SMALL_STATE(19)] = 1069,
  [SMALL_STATE(20)] = 1168,
  [SMALL_STATE(21)] = 1267,
  [SMALL_STATE(22)] = 1366,
  [SMALL_STATE(23)] = 1465,
  [SMALL_STATE(24)] = 1564,
  [SMALL_STATE(25)] = 1663,
  [SMALL_STATE(26)] = 1762,
  [SMALL_STATE(27)] = 1861,
  [SMALL_STATE(28)] = 1960,
  [SMALL_STATE(29)] = 2059,
  [SMALL_STATE(30)] = 2158,
  [SMALL_STATE(31)] = 2257,
  [SMALL_STATE(32)] = 2356,
  [SMALL_STATE(33)] = 2455,
  [SMALL_STATE(34)] = 2554,
  [SMALL_STATE(35)] = 2653,
  [SMALL_STATE(36)] = 2752,
  [SMALL_STATE(37)] = 2848,
  [SMALL_STATE(38)] = 2944,
  [SMALL_STATE(39)] = 3040,
  [SMALL_STATE(40)] = 3136,
  [SMALL_STATE(41)] = 3232,
  [SMALL_STATE(42)] = 3328,
  [SMALL_STATE(43)] = 3424,
  [SMALL_STATE(44)] = 3520,
  [SMALL_STATE(45)] = 3616,
  [SMALL_STATE(46)] = 3712,
  [SMALL_STATE(47)] = 3808,
  [SMALL_STATE(48)] = 3904,
  [SMALL_STATE(49)] = 4000,
  [SMALL_STATE(50)] = 4096,
  [SMALL_STATE(51)] = 4192,
  [SMALL_STATE(52)] = 4288,
  [SMALL_STATE(53)] = 4384,
  [SMALL_STATE(54)] = 4480,
  [SMALL_STATE(55)] = 4576,
  [SMALL_STATE(56)] = 4672,
  [SMALL_STATE(57)] = 4768,
  [SMALL_STATE(58)] = 4864,
  [SMALL_STATE(59)] = 4960,
  [SMALL_STATE(60)] = 5056,
  [SMALL_STATE(61)] = 5152,
  [SMALL_STATE(62)] = 5248,
  [SMALL_STATE(63)] = 5344,
  [SMALL_STATE(64)] = 5440,
  [SMALL_STATE(65)] = 5536,
  [SMALL_STATE(66)] = 5632,
  [SMALL_STATE(67)] = 5728,
  [SMALL_STATE(68)] = 5824,
  [SMALL_STATE(69)] = 5920,
  [SMALL_STATE(70)] = 6016,
  [SMALL_STATE(71)] = 6112,
  [SMALL_STATE(72)] = 6208,
  [SMALL_STATE(73)] = 6251,
  [SMALL_STATE(74)] = 6296,
  [SMALL_STATE(75)] = 6339,
  [SMALL_STATE(76)] = 6381,
  [SMALL_STATE(77)] = 6423,
  [SMALL_STATE(78)] = 6465,
  [SMALL_STATE(79)] = 6507,
  [SMALL_STATE(80)] = 6588,
  [SMALL_STATE(81)] = 6666,
  [SMALL_STATE(82)] = 6744,
  [SMALL_STATE(83)] = 6822,
  [SMALL_STATE(84)] = 6870,
  [SMALL_STATE(85)] = 6948,
  [SMALL_STATE(86)] = 7026,
  [SMALL_STATE(87)] = 7104,
  [SMALL_STATE(88)] = 7182,
  [SMALL_STATE(89)] = 7225,
  [SMALL_STATE(90)] = 7265,
  [SMALL_STATE(91)] = 7337,
  [SMALL_STATE(92)] = 7385,
  [SMALL_STATE(93)] = 7457,
  [SMALL_STATE(94)] = 7529,
  [SMALL_STATE(95)] = 7567,
  [SMALL_STATE(96)] = 7605,
  [SMALL_STATE(97)] = 7645,
  [SMALL_STATE(98)] = 7683,
  [SMALL_STATE(99)] = 7755,
  [SMALL_STATE(100)] = 7797,
  [SMALL_STATE(101)] = 7869,
  [SMALL_STATE(102)] = 7941,
  [SMALL_STATE(103)] = 8013,
  [SMALL_STATE(104)] = 8050,
  [SMALL_STATE(105)] = 8119,
  [SMALL_STATE(106)] = 8156,
  [SMALL_STATE(107)] = 8193,
  [SMALL_STATE(108)] = 8230,
  [SMALL_STATE(109)] = 8267,
  [SMALL_STATE(110)] = 8304,
  [SMALL_STATE(111)] = 8373,
  [SMALL_STATE(112)] = 8442,
  [SMALL_STATE(113)] = 8479,
  [SMALL_STATE(114)] = 8516,
  [SMALL_STATE(115)] = 8553,
  [SMALL_STATE(116)] = 8590,
  [SMALL_STATE(117)] = 8659,
  [SMALL_STATE(118)] = 8696,
  [SMALL_STATE(119)] = 8733,
  [SMALL_STATE(120)] = 8772,
  [SMALL_STATE(121)] = 8809,
  [SMALL_STATE(122)] = 8846,
  [SMALL_STATE(123)] = 8883,
  [SMALL_STATE(124)] = 8920,
  [SMALL_STATE(125)] = 8957,
  [SMALL_STATE(126)] = 8994,
  [SMALL_STATE(127)] = 9031,
  [SMALL_STATE(128)] = 9068,
  [SMALL_STATE(129)] = 9105,
  [SMALL_STATE(130)] = 9142,
  [SMALL_STATE(131)] = 9179,
  [SMALL_STATE(132)] = 9216,
  [SMALL_STATE(133)] = 9253,
  [SMALL_STATE(134)] = 9290,
  [SMALL_STATE(135)] = 9359,
  [SMALL_STATE(136)] = 9396,
  [SMALL_STATE(137)] = 9437,
  [SMALL_STATE(138)] = 9476,
  [SMALL_STATE(139)] = 9513,
  [SMALL_STATE(140)] = 9550,
  [SMALL_STATE(141)] = 9619,
  [SMALL_STATE(142)] = 9656,
  [SMALL_STATE(143)] = 9725,
  [SMALL_STATE(144)] = 9778,
  [SMALL_STATE(145)] = 9829,
  [SMALL_STATE(146)] = 9876,
  [SMALL_STATE(147)] = 9913,
  [SMALL_STATE(148)] = 9952,
  [SMALL_STATE(149)] = 9989,
  [SMALL_STATE(150)] = 10028,
  [SMALL_STATE(151)] = 10067,
  [SMALL_STATE(152)] = 10104,
  [SMALL_STATE(153)] = 10141,
  [SMALL_STATE(154)] = 10184,
  [SMALL_STATE(155)] = 10221,
  [SMALL_STATE(156)] = 10258,
  [SMALL_STATE(157)] = 10295,
  [SMALL_STATE(158)] = 10332,
  [SMALL_STATE(159)] = 10369,
  [SMALL_STATE(160)] = 10406,
  [SMALL_STATE(161)] = 10442,
  [SMALL_STATE(162)] = 10478,
  [SMALL_STATE(163)] = 10516,
  [SMALL_STATE(164)] = 10562,
  [SMALL_STATE(165)] = 10600,
  [SMALL_STATE(166)] = 10636,
  [SMALL_STATE(167)] = 10672,
  [SMALL_STATE(168)] = 10710,
  [SMALL_STATE(169)] = 10748,
  [SMALL_STATE(170)] = 10783,
  [SMALL_STATE(171)] = 10818,
  [SMALL_STATE(172)] = 10853,
  [SMALL_STATE(173)] = 10890,
  [SMALL_STATE(174)] = 10925,
  [SMALL_STATE(175)] = 10960,
  [SMALL_STATE(176)] = 10995,
  [SMALL_STATE(177)] = 11030,
  [SMALL_STATE(178)] = 11065,
  [SMALL_STATE(179)] = 11100,
  [SMALL_STATE(180)] = 11135,
  [SMALL_STATE(181)] = 11170,
  [SMALL_STATE(182)] = 11205,
  [SMALL_STATE(183)] = 11240,
  [SMALL_STATE(184)] = 11275,
  [SMALL_STATE(185)] = 11310,
  [SMALL_STATE(186)] = 11345,
  [SMALL_STATE(187)] = 11382,
  [SMALL_STATE(188)] = 11417,
  [SMALL_STATE(189)] = 11452,
  [SMALL_STATE(190)] = 11487,
  [SMALL_STATE(191)] = 11522,
  [SMALL_STATE(192)] = 11557,
  [SMALL_STATE(193)] = 11592,
  [SMALL_STATE(194)] = 11631,
  [SMALL_STATE(195)] = 11666,
  [SMALL_STATE(196)] = 11703,
  [SMALL_STATE(197)] = 11740,
  [SMALL_STATE(198)] = 11775,
  [SMALL_STATE(199)] = 11810,
  [SMALL_STATE(200)] = 11845,
  [SMALL_STATE(201)] = 11880,
  [SMALL_STATE(202)] = 11915,
  [SMALL_STATE(203)] = 11950,
  [SMALL_STATE(204)] = 11985,
  [SMALL_STATE(205)] = 12020,
  [SMALL_STATE(206)] = 12055,
  [SMALL_STATE(207)] = 12090,
  [SMALL_STATE(208)] = 12125,
  [SMALL_STATE(209)] = 12160,
  [SMALL_STATE(210)] = 12195,
  [SMALL_STATE(211)] = 12236,
  [SMALL_STATE(212)] = 12271,
  [SMALL_STATE(213)] = 12306,
  [SMALL_STATE(214)] = 12341,
  [SMALL_STATE(215)] = 12384,
  [SMALL_STATE(216)] = 12429,
  [SMALL_STATE(217)] = 12464,
  [SMALL_STATE(218)] = 12499,
  [SMALL_STATE(219)] = 12534,
  [SMALL_STATE(220)] = 12569,
  [SMALL_STATE(221)] = 12604,
  [SMALL_STATE(222)] = 12639,
  [SMALL_STATE(223)] = 12687,
  [SMALL_STATE(224)] = 12735,
  [SMALL_STATE(225)] = 12783,
  [SMALL_STATE(226)] = 12816,
  [SMALL_STATE(227)] = 12861,
  [SMALL_STATE(228)] = 12906,
  [SMALL_STATE(229)] = 12951,
  [SMALL_STATE(230)] = 12996,
  [SMALL_STATE(231)] = 13051,
  [SMALL_STATE(232)] = 13096,
  [SMALL_STATE(233)] = 13141,
  [SMALL_STATE(234)] = 13186,
  [SMALL_STATE(235)] = 13231,
  [SMALL_STATE(236)] = 13286,
  [SMALL_STATE(237)] = 13331,
  [SMALL_STATE(238)] = 13376,
  [SMALL_STATE(239)] = 13420,
  [SMALL_STATE(240)] = 13464,
  [SMALL_STATE(241)] = 13516,
  [SMALL_STATE(242)] = 13560,
  [SMALL_STATE(243)] = 13612,
  [SMALL_STATE(244)] = 13660,
  [SMALL_STATE(245)] = 13712,
  [SMALL_STATE(246)] = 13764,
  [SMALL_STATE(247)] = 13808,
  [SMALL_STATE(248)] = 13860,
  [SMALL_STATE(249)] = 13912,
  [SMALL_STATE(250)] = 13959,
  [SMALL_STATE(251)] = 14008,
  [SMALL_STATE(252)] = 14057,
  [SMALL_STATE(253)] = 14103,
  [SMALL_STATE(254)] = 14149,
  [SMALL_STATE(255)] = 14195,
  [SMALL_STATE(256)] = 14246,
  [SMALL_STATE(257)] = 14297,
  [SMALL_STATE(258)] = 14340,
  [SMALL_STATE(259)] = 14365,
  [SMALL_STATE(260)] = 14387,
  [SMALL_STATE(261)] = 14409,
  [SMALL_STATE(262)] = 14446,
  [SMALL_STATE(263)] = 14483,
  [SMALL_STATE(264)] = 14520,
  [SMALL_STATE(265)] = 14557,
  [SMALL_STATE(266)] = 14594,
  [SMALL_STATE(267)] = 14631,
  [SMALL_STATE(268)] = 14668,
  [SMALL_STATE(269)] = 14705,
  [SMALL_STATE(270)] = 14742,
  [SMALL_STATE(271)] = 14779,
  [SMALL_STATE(272)] = 14816,
  [SMALL_STATE(273)] = 14853,
  [SMALL_STATE(274)] = 14890,
  [SMALL_STATE(275)] = 14927,
  [SMALL_STATE(276)] = 14964,
  [SMALL_STATE(277)] = 15001,
  [SMALL_STATE(278)] = 15038,
  [SMALL_STATE(279)] = 15072,
  [SMALL_STATE(280)] = 15106,
  [SMALL_STATE(281)] = 15140,
  [SMALL_STATE(282)] = 15174,
  [SMALL_STATE(283)] = 15208,
  [SMALL_STATE(284)] = 15242,
  [SMALL_STATE(285)] = 15276,
  [SMALL_STATE(286)] = 15310,
  [SMALL_STATE(287)] = 15344,
  [SMALL_STATE(288)] = 15378,
  [SMALL_STATE(289)] = 15412,
  [SMALL_STATE(290)] = 15446,
  [SMALL_STATE(291)] = 15480,
  [SMALL_STATE(292)] = 15514,
  [SMALL_STATE(293)] = 15548,
  [SMALL_STATE(294)] = 15582,
  [SMALL_STATE(295)] = 15616,
  [SMALL_STATE(296)] = 15650,
  [SMALL_STATE(297)] = 15684,
  [SMALL_STATE(298)] = 15718,
  [SMALL_STATE(299)] = 15752,
  [SMALL_STATE(300)] = 15773,
  [SMALL_STATE(301)] = 15794,
  [SMALL_STATE(302)] = 15812,
  [SMALL_STATE(303)] = 15830,
  [SMALL_STATE(304)] = 15848,
  [SMALL_STATE(305)] = 15866,
  [SMALL_STATE(306)] = 15884,
  [SMALL_STATE(307)] = 15904,
  [SMALL_STATE(308)] = 15922,
  [SMALL_STATE(309)] = 15940,
  [SMALL_STATE(310)] = 15958,
  [SMALL_STATE(311)] = 15976,
  [SMALL_STATE(312)] = 15994,
  [SMALL_STATE(313)] = 16012,
  [SMALL_STATE(314)] = 16030,
  [SMALL_STATE(315)] = 16048,
  [SMALL_STATE(316)] = 16066,
  [SMALL_STATE(317)] = 16084,
  [SMALL_STATE(318)] = 16115,
  [SMALL_STATE(319)] = 16130,
  [SMALL_STATE(320)] = 16161,
  [SMALL_STATE(321)] = 16192,
  [SMALL_STATE(322)] = 16223,
  [SMALL_STATE(323)] = 16238,
  [SMALL_STATE(324)] = 16269,
  [SMALL_STATE(325)] = 16286,
  [SMALL_STATE(326)] = 16301,
  [SMALL_STATE(327)] = 16332,
  [SMALL_STATE(328)] = 16363,
  [SMALL_STATE(329)] = 16391,
  [SMALL_STATE(330)] = 16419,
  [SMALL_STATE(331)] = 16447,
  [SMALL_STATE(332)] = 16467,
  [SMALL_STATE(333)] = 16495,
  [SMALL_STATE(334)] = 16523,
  [SMALL_STATE(335)] = 16551,
  [SMALL_STATE(336)] = 16579,
  [SMALL_STATE(337)] = 16600,
  [SMALL_STATE(338)] = 16623,
  [SMALL_STATE(339)] = 16644,
  [SMALL_STATE(340)] = 16667,
  [SMALL_STATE(341)] = 16692,
  [SMALL_STATE(342)] = 16717,
  [SMALL_STATE(343)] = 16738,
  [SMALL_STATE(344)] = 16759,
  [SMALL_STATE(345)] = 16776,
  [SMALL_STATE(346)] = 16799,
  [SMALL_STATE(347)] = 16820,
  [SMALL_STATE(348)] = 16843,
  [SMALL_STATE(349)] = 16866,
  [SMALL_STATE(350)] = 16887,
  [SMALL_STATE(351)] = 16912,
  [SMALL_STATE(352)] = 16933,
  [SMALL_STATE(353)] = 16956,
  [SMALL_STATE(354)] = 16977,
  [SMALL_STATE(355)] = 16998,
  [SMALL_STATE(356)] = 17021,
  [SMALL_STATE(357)] = 17035,
  [SMALL_STATE(358)] = 17057,
  [SMALL_STATE(359)] = 17077,
  [SMALL_STATE(360)] = 17093,
  [SMALL_STATE(361)] = 17111,
  [SMALL_STATE(362)] = 17133,
  [SMALL_STATE(363)] = 17147,
  [SMALL_STATE(364)] = 17167,
  [SMALL_STATE(365)] = 17181,
  [SMALL_STATE(366)] = 17195,
  [SMALL_STATE(367)] = 17209,
  [SMALL_STATE(368)] = 17220,
  [SMALL_STATE(369)] = 17231,
  [SMALL_STATE(370)] = 17250,
  [SMALL_STATE(371)] = 17267,
  [SMALL_STATE(372)] = 17278,
  [SMALL_STATE(373)] = 17289,
  [SMALL_STATE(374)] = 17306,
  [SMALL_STATE(375)] = 17323,
  [SMALL_STATE(376)] = 17338,
  [SMALL_STATE(377)] = 17351,
  [SMALL_STATE(378)] = 17368,
  [SMALL_STATE(379)] = 17385,
  [SMALL_STATE(380)] = 17404,
  [SMALL_STATE(381)] = 17423,
  [SMALL_STATE(382)] = 17438,
  [SMALL_STATE(383)] = 17457,
  [SMALL_STATE(384)] = 17476,
  [SMALL_STATE(385)] = 17493,
  [SMALL_STATE(386)] = 17512,
  [SMALL_STATE(387)] = 17523,
  [SMALL_STATE(388)] = 17534,
  [SMALL_STATE(389)] = 17553,
  [SMALL_STATE(390)] = 17572,
  [SMALL_STATE(391)] = 17589,
  [SMALL_STATE(392)] = 17608,
  [SMALL_STATE(393)] = 17627,
  [SMALL_STATE(394)] = 17644,
  [SMALL_STATE(395)] = 17663,
  [SMALL_STATE(396)] = 17682,
  [SMALL_STATE(397)] = 17699,
  [SMALL_STATE(398)] = 17716,
  [SMALL_STATE(399)] = 17727,
  [SMALL_STATE(400)] = 17738,
  [SMALL_STATE(401)] = 17755,
  [SMALL_STATE(402)] = 17766,
  [SMALL_STATE(403)] = 17777,
  [SMALL_STATE(404)] = 17794,
  [SMALL_STATE(405)] = 17811,
  [SMALL_STATE(406)] = 17828,
  [SMALL_STATE(407)] = 17839,
  [SMALL_STATE(408)] = 17856,
  [SMALL_STATE(409)] = 17873,
  [SMALL_STATE(410)] = 17884,
  [SMALL_STATE(411)] = 17895,
  [SMALL_STATE(412)] = 17906,
  [SMALL_STATE(413)] = 17923,
  [SMALL_STATE(414)] = 17940,
  [SMALL_STATE(415)] = 17959,
  [SMALL_STATE(416)] = 17976,
  [SMALL_STATE(417)] = 17990,
  [SMALL_STATE(418)] = 18004,
  [SMALL_STATE(419)] = 18018,
  [SMALL_STATE(420)] = 18030,
  [SMALL_STATE(421)] = 18044,
  [SMALL_STATE(422)] = 18058,
  [SMALL_STATE(423)] = 18074,
  [SMALL_STATE(424)] = 18088,
  [SMALL_STATE(425)] = 18102,
  [SMALL_STATE(426)] = 18118,
  [SMALL_STATE(427)] = 18132,
  [SMALL_STATE(428)] = 18146,
  [SMALL_STATE(429)] = 18160,
  [SMALL_STATE(430)] = 18174,
  [SMALL_STATE(431)] = 18190,
  [SMALL_STATE(432)] = 18206,
  [SMALL_STATE(433)] = 18220,
  [SMALL_STATE(434)] = 18232,
  [SMALL_STATE(435)] = 18246,
  [SMALL_STATE(436)] = 18258,
  [SMALL_STATE(437)] = 18272,
  [SMALL_STATE(438)] = 18286,
  [SMALL_STATE(439)] = 18300,
  [SMALL_STATE(440)] = 18314,
  [SMALL_STATE(441)] = 18324,
  [SMALL_STATE(442)] = 18340,
  [SMALL_STATE(443)] = 18356,
  [SMALL_STATE(444)] = 18368,
  [SMALL_STATE(445)] = 18384,
  [SMALL_STATE(446)] = 18398,
  [SMALL_STATE(447)] = 18410,
  [SMALL_STATE(448)] = 18424,
  [SMALL_STATE(449)] = 18434,
  [SMALL_STATE(450)] = 18446,
  [SMALL_STATE(451)] = 18460,
  [SMALL_STATE(452)] = 18472,
  [SMALL_STATE(453)] = 18486,
  [SMALL_STATE(454)] = 18502,
  [SMALL_STATE(455)] = 18518,
  [SMALL_STATE(456)] = 18532,
  [SMALL_STATE(457)] = 18548,
  [SMALL_STATE(458)] = 18562,
  [SMALL_STATE(459)] = 18574,
  [SMALL_STATE(460)] = 18584,
  [SMALL_STATE(461)] = 18594,
  [SMALL_STATE(462)] = 18608,
  [SMALL_STATE(463)] = 18622,
  [SMALL_STATE(464)] = 18636,
  [SMALL_STATE(465)] = 18650,
  [SMALL_STATE(466)] = 18662,
  [SMALL_STATE(467)] = 18676,
  [SMALL_STATE(468)] = 18688,
  [SMALL_STATE(469)] = 18701,
  [SMALL_STATE(470)] = 18712,
  [SMALL_STATE(471)] = 18725,
  [SMALL_STATE(472)] = 18736,
  [SMALL_STATE(473)] = 18749,
  [SMALL_STATE(474)] = 18760,
  [SMALL_STATE(475)] = 18773,
  [SMALL_STATE(476)] = 18786,
  [SMALL_STATE(477)] = 18795,
  [SMALL_STATE(478)] = 18806,
  [SMALL_STATE(479)] = 18817,
  [SMALL_STATE(480)] = 18830,
  [SMALL_STATE(481)] = 18841,
  [SMALL_STATE(482)] = 18854,
  [SMALL_STATE(483)] = 18865,
  [SMALL_STATE(484)] = 18876,
  [SMALL_STATE(485)] = 18887,
  [SMALL_STATE(486)] = 18898,
  [SMALL_STATE(487)] = 18909,
  [SMALL_STATE(488)] = 18920,
  [SMALL_STATE(489)] = 18933,
  [SMALL_STATE(490)] = 18946,
  [SMALL_STATE(491)] = 18959,
  [SMALL_STATE(492)] = 18970,
  [SMALL_STATE(493)] = 18983,
  [SMALL_STATE(494)] = 18994,
  [SMALL_STATE(495)] = 19005,
  [SMALL_STATE(496)] = 19016,
  [SMALL_STATE(497)] = 19027,
  [SMALL_STATE(498)] = 19040,
  [SMALL_STATE(499)] = 19053,
  [SMALL_STATE(500)] = 19064,
  [SMALL_STATE(501)] = 19077,
  [SMALL_STATE(502)] = 19090,
  [SMALL_STATE(503)] = 19101,
  [SMALL_STATE(504)] = 19110,
  [SMALL_STATE(505)] = 19123,
  [SMALL_STATE(506)] = 19136,
  [SMALL_STATE(507)] = 19149,
  [SMALL_STATE(508)] = 19160,
  [SMALL_STATE(509)] = 19173,
  [SMALL_STATE(510)] = 19182,
  [SMALL_STATE(511)] = 19193,
  [SMALL_STATE(512)] = 19206,
  [SMALL_STATE(513)] = 19215,
  [SMALL_STATE(514)] = 19226,
  [SMALL_STATE(515)] = 19237,
  [SMALL_STATE(516)] = 19248,
  [SMALL_STATE(517)] = 19261,
  [SMALL_STATE(518)] = 19274,
  [SMALL_STATE(519)] = 19287,
  [SMALL_STATE(520)] = 19298,
  [SMALL_STATE(521)] = 19311,
  [SMALL_STATE(522)] = 19322,
  [SMALL_STATE(523)] = 19333,
  [SMALL_STATE(524)] = 19344,
  [SMALL_STATE(525)] = 19357,
  [SMALL_STATE(526)] = 19370,
  [SMALL_STATE(527)] = 19381,
  [SMALL_STATE(528)] = 19392,
  [SMALL_STATE(529)] = 19403,
  [SMALL_STATE(530)] = 19414,
  [SMALL_STATE(531)] = 19423,
  [SMALL_STATE(532)] = 19434,
  [SMALL_STATE(533)] = 19445,
  [SMALL_STATE(534)] = 19458,
  [SMALL_STATE(535)] = 19469,
  [SMALL_STATE(536)] = 19482,
  [SMALL_STATE(537)] = 19493,
  [SMALL_STATE(538)] = 19506,
  [SMALL_STATE(539)] = 19517,
  [SMALL_STATE(540)] = 19530,
  [SMALL_STATE(541)] = 19543,
  [SMALL_STATE(542)] = 19552,
  [SMALL_STATE(543)] = 19563,
  [SMALL_STATE(544)] = 19574,
  [SMALL_STATE(545)] = 19587,
  [SMALL_STATE(546)] = 19596,
  [SMALL_STATE(547)] = 19609,
  [SMALL_STATE(548)] = 19622,
  [SMALL_STATE(549)] = 19633,
  [SMALL_STATE(550)] = 19646,
  [SMALL_STATE(551)] = 19657,
  [SMALL_STATE(552)] = 19670,
  [SMALL_STATE(553)] = 19681,
  [SMALL_STATE(554)] = 19694,
  [SMALL_STATE(555)] = 19705,
  [SMALL_STATE(556)] = 19718,
  [SMALL_STATE(557)] = 19729,
  [SMALL_STATE(558)] = 19742,
  [SMALL_STATE(559)] = 19755,
  [SMALL_STATE(560)] = 19768,
  [SMALL_STATE(561)] = 19779,
  [SMALL_STATE(562)] = 19790,
  [SMALL_STATE(563)] = 19803,
  [SMALL_STATE(564)] = 19816,
  [SMALL_STATE(565)] = 19827,
  [SMALL_STATE(566)] = 19838,
  [SMALL_STATE(567)] = 19851,
  [SMALL_STATE(568)] = 19862,
  [SMALL_STATE(569)] = 19875,
  [SMALL_STATE(570)] = 19886,
  [SMALL_STATE(571)] = 19899,
  [SMALL_STATE(572)] = 19912,
  [SMALL_STATE(573)] = 19923,
  [SMALL_STATE(574)] = 19936,
  [SMALL_STATE(575)] = 19947,
  [SMALL_STATE(576)] = 19960,
  [SMALL_STATE(577)] = 19973,
  [SMALL_STATE(578)] = 19986,
  [SMALL_STATE(579)] = 19997,
  [SMALL_STATE(580)] = 20008,
  [SMALL_STATE(581)] = 20019,
  [SMALL_STATE(582)] = 20030,
  [SMALL_STATE(583)] = 20043,
  [SMALL_STATE(584)] = 20054,
  [SMALL_STATE(585)] = 20063,
  [SMALL_STATE(586)] = 20074,
  [SMALL_STATE(587)] = 20087,
  [SMALL_STATE(588)] = 20100,
  [SMALL_STATE(589)] = 20113,
  [SMALL_STATE(590)] = 20124,
  [SMALL_STATE(591)] = 20133,
  [SMALL_STATE(592)] = 20144,
  [SMALL_STATE(593)] = 20155,
  [SMALL_STATE(594)] = 20166,
  [SMALL_STATE(595)] = 20175,
  [SMALL_STATE(596)] = 20186,
  [SMALL_STATE(597)] = 20194,
  [SMALL_STATE(598)] = 20204,
  [SMALL_STATE(599)] = 20214,
  [SMALL_STATE(600)] = 20224,
  [SMALL_STATE(601)] = 20232,
  [SMALL_STATE(602)] = 20242,
  [SMALL_STATE(603)] = 20252,
  [SMALL_STATE(604)] = 20262,
  [SMALL_STATE(605)] = 20272,
  [SMALL_STATE(606)] = 20282,
  [SMALL_STATE(607)] = 20292,
  [SMALL_STATE(608)] = 20302,
  [SMALL_STATE(609)] = 20310,
  [SMALL_STATE(610)] = 20320,
  [SMALL_STATE(611)] = 20330,
  [SMALL_STATE(612)] = 20338,
  [SMALL_STATE(613)] = 20346,
  [SMALL_STATE(614)] = 20354,
  [SMALL_STATE(615)] = 20364,
  [SMALL_STATE(616)] = 20372,
  [SMALL_STATE(617)] = 20382,
  [SMALL_STATE(618)] = 20392,
  [SMALL_STATE(619)] = 20402,
  [SMALL_STATE(620)] = 20412,
  [SMALL_STATE(621)] = 20422,
  [SMALL_STATE(622)] = 20432,
  [SMALL_STATE(623)] = 20442,
  [SMALL_STATE(624)] = 20450,
  [SMALL_STATE(625)] = 20458,
  [SMALL_STATE(626)] = 20468,
  [SMALL_STATE(627)] = 20475,
  [SMALL_STATE(628)] = 20482,
  [SMALL_STATE(629)] = 20489,
  [SMALL_STATE(630)] = 20496,
  [SMALL_STATE(631)] = 20503,
  [SMALL_STATE(632)] = 20510,
  [SMALL_STATE(633)] = 20517,
  [SMALL_STATE(634)] = 20524,
  [SMALL_STATE(635)] = 20531,
  [SMALL_STATE(636)] = 20538,
  [SMALL_STATE(637)] = 20545,
  [SMALL_STATE(638)] = 20552,
  [SMALL_STATE(639)] = 20559,
  [SMALL_STATE(640)] = 20566,
  [SMALL_STATE(641)] = 20573,
  [SMALL_STATE(642)] = 20580,
  [SMALL_STATE(643)] = 20587,
  [SMALL_STATE(644)] = 20594,
  [SMALL_STATE(645)] = 20601,
  [SMALL_STATE(646)] = 20608,
  [SMALL_STATE(647)] = 20615,
  [SMALL_STATE(648)] = 20622,
  [SMALL_STATE(649)] = 20629,
  [SMALL_STATE(650)] = 20636,
  [SMALL_STATE(651)] = 20643,
  [SMALL_STATE(652)] = 20650,
  [SMALL_STATE(653)] = 20657,
  [SMALL_STATE(654)] = 20664,
  [SMALL_STATE(655)] = 20671,
  [SMALL_STATE(656)] = 20678,
  [SMALL_STATE(657)] = 20685,
  [SMALL_STATE(658)] = 20692,
  [SMALL_STATE(659)] = 20699,
  [SMALL_STATE(660)] = 20706,
  [SMALL_STATE(661)] = 20713,
  [SMALL_STATE(662)] = 20720,
  [SMALL_STATE(663)] = 20727,
  [SMALL_STATE(664)] = 20734,
  [SMALL_STATE(665)] = 20741,
  [SMALL_STATE(666)] = 20748,
  [SMALL_STATE(667)] = 20755,
  [SMALL_STATE(668)] = 20762,
  [SMALL_STATE(669)] = 20769,
  [SMALL_STATE(670)] = 20776,
  [SMALL_STATE(671)] = 20783,
  [SMALL_STATE(672)] = 20790,
  [SMALL_STATE(673)] = 20797,
  [SMALL_STATE(674)] = 20804,
  [SMALL_STATE(675)] = 20811,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(99),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(23),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(111),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(162),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(352),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(211),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(191),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(609),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(56),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(587),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(19),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(53),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(52),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(435),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(669),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(44),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(168),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(638),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_expression_pun, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_pattern, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(300),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(134),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(358),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(314),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(370),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(78),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(75),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(606),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(79),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(73),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(654),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 5),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_expression, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_expression, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_expression, 5),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_expression, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_expression, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_expression, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 4),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access_expression, 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access_expression, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 5),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_expression, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_expression, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 4),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 4),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expression, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expression, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 5),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 7),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 7),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 6),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 6),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 6),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 6),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 3),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_value, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_expression, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_expression, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 5),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 5),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 5),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 5),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 6),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 6),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 5),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 5),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 4),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(372),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(331),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(469),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(473),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(482),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(673),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(361),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(486),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 2),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 1),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 3),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 3),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_pattern, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_pattern, 3),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_pattern, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 2),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 4),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 4),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 5),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 5),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 6),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 6),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 6),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 6),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 7),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 7),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 5),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 5),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_pattern, 5),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_pattern, 5),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(362),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(324),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(654),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pub, 1),
  [951] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(666),
  [954] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(372),
  [957] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(427),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(655),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 2),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(69),
  [1012] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(443),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(443),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(443),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(443),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pub_attribute, 3),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern, 3),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 7),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 7),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2), SHIFT_REPEAT(140),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 1),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 6),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 6),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 2),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 1),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 2),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 2),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 4),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 4),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 4),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 5),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 5),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 2),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 5),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 3),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 3),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 1),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 1),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 4),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 4),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(429),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_fragement, 1),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_fragement, 1),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolator, 3),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolator, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2),
  [1242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2), SHIFT_REPEAT(466),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2), SHIFT_REPEAT(51),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2), SHIFT_REPEAT(283),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 5),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 5),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(363),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 1),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern_pun, 1),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 3),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression_pun, 1),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 4),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 4),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 6),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 6),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 4),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 4),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 6),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2),
  [1334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2), SHIFT_REPEAT(463),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [1353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item, 1),
  [1357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item, 1),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 5),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 5),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [1377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filed_single_pattern, 1),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(603),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 8),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 8),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any, 1),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [1416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 6),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [1424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 3),
  [1428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 3),
  [1430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(417),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_type, 2),
  [1441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 2),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [1449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 7),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 5),
  [1471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 5),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [1475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [1493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [1507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [1511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [1539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 4),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4),
  [1549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [1553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [1565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [1567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [1581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [1603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [1605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [1609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 5),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 1),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_expression, 1),
  [1627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 4),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1707] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_moonbit_external_scanner_create(void);
void tree_sitter_moonbit_external_scanner_destroy(void *);
bool tree_sitter_moonbit_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_moonbit_external_scanner_serialize(void *, char *);
void tree_sitter_moonbit_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_moonbit(void) {
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
    .keyword_capture_token = sym_lowercase_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_moonbit_external_scanner_create,
      tree_sitter_moonbit_external_scanner_destroy,
      tree_sitter_moonbit_external_scanner_scan,
      tree_sitter_moonbit_external_scanner_serialize,
      tree_sitter_moonbit_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
