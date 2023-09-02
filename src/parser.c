#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 630
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 174
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
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
  sym_string_interpolation = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  sym_integer_literal = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_string_literal_token1 = 27,
  anon_sym_DQUOTE2 = 28,
  anon_sym_DASH = 29,
  anon_sym_PLUS = 30,
  anon_sym_STAR_STAR = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_STAR_EQ = 34,
  anon_sym_SLASH_EQ = 35,
  anon_sym_PERCENT = 36,
  anon_sym_PLUS_EQ = 37,
  anon_sym_DASH_EQ = 38,
  anon_sym_GT = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_LT = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_AMP_AMP = 45,
  anon_sym_PIPE_PIPE = 46,
  anon_sym_DOT_DOT = 47,
  anon_sym_fn = 48,
  anon_sym_LBRACK = 49,
  anon_sym_RBRACK = 50,
  aux_sym_accessor_token1 = 51,
  anon_sym_match = 52,
  anon_sym_EQ_GT = 53,
  anon_sym_if = 54,
  anon_sym_else = 55,
  anon_sym_break = 56,
  anon_sym_continue = 57,
  anon_sym_COLON_EQ = 58,
  anon_sym_var = 59,
  anon_sym_while = 60,
  anon_sym_return = 61,
  anon_sym_as = 62,
  anon_sym_PIPE = 63,
  anon_sym_DASH_GT = 64,
  sym_mutability = 65,
  sym_uppercase_identifier = 66,
  sym_colon_colon_uppercase_identifier = 67,
  sym_colon_colon_lowercase_identifier = 68,
  sym_identifier = 69,
  sym_dot_identifier = 70,
  sym_package_identifier = 71,
  sym_structure = 72,
  sym_structure_item = 73,
  sym_visibility = 74,
  sym_pub_attribute = 75,
  sym_type_defintion = 76,
  sym_struct_definition = 77,
  sym_struct_filed_declaration = 78,
  sym_enum_definition = 79,
  sym_enum_constructor = 80,
  sym_value_definition = 81,
  sym_function_definition = 82,
  sym_interface_definition = 83,
  sym_interface_method_declaration = 84,
  sym_expression = 85,
  sym_simple_expression = 86,
  sym_atomic_expression = 87,
  sym_literal = 88,
  sym_boolean_literal = 89,
  sym_string_literal = 90,
  sym_unary_expression = 91,
  sym_binary_expression = 92,
  sym_struct_expression = 93,
  sym_struct_field_expression = 94,
  sym_struct_filed_expression = 95,
  sym_labeled_expression = 96,
  sym_labeled_expression_pun = 97,
  sym_block_expression = 98,
  sym_nonempty_block_expression = 99,
  sym_anonymous_lambda_expression = 100,
  sym_constructor_expression = 101,
  sym_apply_expression = 102,
  sym_array_access_expression = 103,
  sym_dot_apply_expression = 104,
  sym_access_expression = 105,
  sym_accessor = 106,
  sym_method_expression = 107,
  sym_unit_expression = 108,
  sym_tuple_expression = 109,
  sym_constraint_expression = 110,
  sym_array_expression = 111,
  sym_match_expression = 112,
  sym_case_clause = 113,
  sym_if_expression = 114,
  sym_else_clause = 115,
  sym_statement_expression = 116,
  sym_let_expression = 117,
  sym_shorthand_let_expression = 118,
  sym_shorthand_let_pattern = 119,
  sym_var_expression = 120,
  sym_assign_expression = 121,
  sym_left_value = 122,
  sym_named_lambda_expression = 123,
  sym_while_expression = 124,
  sym_return_expression = 125,
  sym_pattern = 126,
  sym_as_pattern = 127,
  sym_or_pattern = 128,
  sym_simple_pattern = 129,
  sym_constructor_pattern = 130,
  sym_tuple_pattern = 131,
  sym_constraint_pattern = 132,
  sym_array_pattern = 133,
  sym_array_sub_pattern = 134,
  sym_dotdot_pattern = 135,
  sym_struct_pattern = 136,
  sym_struct_filed_pattern = 137,
  sym_filed_single_pattern = 138,
  sym_labeled_pattern = 139,
  sym_labeled_pattern_pun = 140,
  sym_type = 141,
  sym_tuple_type = 142,
  sym_function_type = 143,
  sym_apply_type = 144,
  sym_type_arguments = 145,
  sym_type_parameters = 146,
  sym_type_annotation = 147,
  sym_retuern_type = 148,
  sym_parameter = 149,
  sym_parameters = 150,
  sym_any = 151,
  sym_pub = 152,
  sym_qualified_identifier = 153,
  sym_qualified_type_identifier = 154,
  sym_function_identifier = 155,
  sym_type_identifier = 156,
  sym_constraints = 157,
  sym_constraint = 158,
  aux_sym_structure_repeat1 = 159,
  aux_sym_struct_definition_repeat1 = 160,
  aux_sym_enum_definition_repeat1 = 161,
  aux_sym_enum_constructor_repeat1 = 162,
  aux_sym_interface_definition_repeat1 = 163,
  aux_sym_string_literal_repeat1 = 164,
  aux_sym_struct_field_expression_repeat1 = 165,
  aux_sym_block_expression_repeat1 = 166,
  aux_sym_apply_expression_repeat1 = 167,
  aux_sym_match_expression_repeat1 = 168,
  aux_sym_constructor_pattern_repeat1 = 169,
  aux_sym_struct_filed_pattern_repeat1 = 170,
  aux_sym_type_parameters_repeat1 = 171,
  aux_sym_parameters_repeat1 = 172,
  aux_sym_constraints_repeat1 = 173,
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
  [sym_string_interpolation] = "string_interpolation",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
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
  [sym_identifier] = "identifier",
  [sym_dot_identifier] = "dot_identifier",
  [sym_package_identifier] = "package_identifier",
  [sym_structure] = "structure",
  [sym_structure_item] = "structure_item",
  [sym_visibility] = "visibility",
  [sym_pub_attribute] = "pub_attribute",
  [sym_type_defintion] = "type_defintion",
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
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
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
  [sym_retuern_type] = "retuern_type",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_any] = "any",
  [sym_pub] = "pub",
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
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
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
  [sym_string_interpolation] = sym_string_interpolation,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
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
  [sym_identifier] = sym_identifier,
  [sym_dot_identifier] = sym_dot_identifier,
  [sym_package_identifier] = sym_package_identifier,
  [sym_structure] = sym_structure,
  [sym_structure_item] = sym_structure_item,
  [sym_visibility] = sym_visibility,
  [sym_pub_attribute] = sym_pub_attribute,
  [sym_type_defintion] = sym_type_defintion,
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
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
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
  [sym_retuern_type] = sym_retuern_type,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_any] = sym_any,
  [sym_pub] = sym_pub,
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
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
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
  [sym_identifier] = {
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
  [sym_type_defintion] = {
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
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
  [sym_retuern_type] = {
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
  [aux_sym_string_literal_repeat1] = {
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
  [7] = 4,
  [8] = 8,
  [9] = 8,
  [10] = 5,
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
  [21] = 15,
  [22] = 19,
  [23] = 13,
  [24] = 17,
  [25] = 18,
  [26] = 20,
  [27] = 27,
  [28] = 16,
  [29] = 29,
  [30] = 30,
  [31] = 14,
  [32] = 12,
  [33] = 30,
  [34] = 29,
  [35] = 27,
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
  [46] = 41,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 43,
  [54] = 47,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 50,
  [59] = 48,
  [60] = 60,
  [61] = 55,
  [62] = 62,
  [63] = 39,
  [64] = 62,
  [65] = 65,
  [66] = 66,
  [67] = 37,
  [68] = 45,
  [69] = 57,
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
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
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
  [100] = 87,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 88,
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
  [136] = 78,
  [137] = 77,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 80,
  [147] = 79,
  [148] = 82,
  [149] = 149,
  [150] = 120,
  [151] = 109,
  [152] = 98,
  [153] = 126,
  [154] = 97,
  [155] = 96,
  [156] = 95,
  [157] = 125,
  [158] = 112,
  [159] = 94,
  [160] = 111,
  [161] = 115,
  [162] = 162,
  [163] = 124,
  [164] = 129,
  [165] = 123,
  [166] = 99,
  [167] = 72,
  [168] = 121,
  [169] = 106,
  [170] = 93,
  [171] = 105,
  [172] = 101,
  [173] = 71,
  [174] = 92,
  [175] = 175,
  [176] = 134,
  [177] = 132,
  [178] = 131,
  [179] = 130,
  [180] = 116,
  [181] = 84,
  [182] = 102,
  [183] = 118,
  [184] = 91,
  [185] = 185,
  [186] = 119,
  [187] = 86,
  [188] = 90,
  [189] = 73,
  [190] = 190,
  [191] = 191,
  [192] = 103,
  [193] = 104,
  [194] = 122,
  [195] = 195,
  [196] = 175,
  [197] = 74,
  [198] = 75,
  [199] = 108,
  [200] = 110,
  [201] = 201,
  [202] = 202,
  [203] = 76,
  [204] = 204,
  [205] = 113,
  [206] = 114,
  [207] = 127,
  [208] = 128,
  [209] = 85,
  [210] = 210,
  [211] = 211,
  [212] = 211,
  [213] = 213,
  [214] = 213,
  [215] = 215,
  [216] = 215,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 228,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 237,
  [238] = 237,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 245,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 246,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 252,
  [258] = 255,
  [259] = 259,
  [260] = 260,
  [261] = 250,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 263,
  [268] = 268,
  [269] = 269,
  [270] = 266,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 280,
  [287] = 268,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 285,
  [294] = 294,
  [295] = 295,
  [296] = 265,
  [297] = 297,
  [298] = 277,
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
  [340] = 334,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 320,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
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
  [376] = 325,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 324,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 328,
  [393] = 393,
  [394] = 394,
  [395] = 300,
  [396] = 302,
  [397] = 387,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 326,
  [405] = 405,
  [406] = 406,
  [407] = 400,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 413,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 403,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 445,
  [460] = 414,
  [461] = 457,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 463,
  [470] = 418,
  [471] = 421,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 410,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 422,
  [480] = 450,
  [481] = 333,
  [482] = 335,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 364,
  [493] = 493,
  [494] = 494,
  [495] = 366,
  [496] = 496,
  [497] = 344,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 360,
  [506] = 506,
  [507] = 507,
  [508] = 489,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 393,
  [516] = 348,
  [517] = 438,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 465,
  [522] = 522,
  [523] = 523,
  [524] = 351,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 491,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 357,
  [534] = 534,
  [535] = 535,
  [536] = 331,
  [537] = 537,
  [538] = 385,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 549,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 544,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 494,
  [570] = 555,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 574,
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
  [609] = 609,
  [610] = 579,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 609,
  [616] = 616,
  [617] = 581,
  [618] = 618,
  [619] = 619,
  [620] = 578,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 623,
  [627] = 627,
  [628] = 605,
  [629] = 629,
};

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
  return (c < 43646
    ? (c < 4238
      ? (c < 2741
        ? (c < 2042
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1765
              ? (c < 1519
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)))
                : (c <= 1522 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c < 1786
                    ? (c >= 1774 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2493
            ? (c < 2365
              ? (c < 2144
                ? (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || (c < 2112
                    ? c == 2088
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))
              : (c <= 2365 || (c < 2447
                ? (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
            : (c <= 2493 || (c < 2613
              ? (c < 2565
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3296
          ? (c < 2974
            ? (c < 2877
              ? (c < 2831
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || (c < 2821
                    ? c == 2809
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))
              : (c <= 2877 || (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))))
            : (c <= 2975 || (c < 3165
              ? (c < 3086
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3077
                    ? c == 3024
                    : c <= 3084)))
                : (c <= 3088 || (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3218
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3297 || (c < 3724
            ? (c < 3482
              ? (c < 3406
                ? (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))
              : (c <= 3505 || (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3634 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))))
            : (c <= 3747 || (c < 3913
              ? (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))
                : (c <= 3780 || (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))))
              : (c <= 3948 || (c < 4186
                ? (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))))))))))
      : (c <= 4238 || (c < 8182
        ? (c < 6480
          ? (c < 4992
            ? (c < 4746
              ? (c < 4682
                ? (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))
                : (c <= 4685 || (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))
              : (c <= 4749 || (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
            : (c <= 5007 || (c < 5984
              ? (c < 5792
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))
                : (c <= 5866 || (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6176
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))))))))
          : (c <= 6509 || (c < 7418
            ? (c < 7098
              ? (c < 6823
                ? (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)))
                : (c <= 6823 || (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))))
              : (c <= 7141 || (c < 7312
                ? (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))))))
            : (c <= 7418 || (c < 8031
              ? (c < 8008
                ? (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
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
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
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
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
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
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
  return (c < 110898
    ? (c < 73490
      ? (c < 73474
        ? (c >= 70207 && c <= 70208)
        : (c <= 73474 || (c >= 73476 && c <= 73488)))
      : (c <= 73523 || (c < 78913
        ? c == 78895
        : c <= 78918)))
    : (c <= 110898 || (c < 124112
      ? (c < 122661
        ? c == 110933
        : (c <= 122666 || (c >= 122928 && c <= 122989)))
      : (c <= 124139 || (c < 201552
        ? c == 177977
        : c <= 205743)))));
}

static inline bool sym_lowercase_identifier_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1749
              ? (c < 1488
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8144
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
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
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
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
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
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

static inline bool sym_lowercase_identifier_character_set_4(int32_t c) {
  return (c < 43646
    ? (c < 4213
      ? (c < 2738
        ? (c < 2036
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1749
              ? (c < 1488
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2610
              ? (c < 2556
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)))
                : (c <= 2556 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2674
                ? (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3293
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)))
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
            : (c <= 2972 || (c < 3160
              ? (c < 3077
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))))))
          : (c <= 3294 || (c < 3718
            ? (c < 3461
              ? (c < 3389
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)))
                : (c <= 3389 || (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))))
              : (c <= 3478 || (c < 3585
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3713
                  ? (c < 3648
                    ? c == 3634
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))))))
            : (c <= 3722 || (c < 3904
              ? (c < 3773
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || c == 3762))
                : (c <= 3773 || (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3911 || (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))))))))))
      : (c <= 4225 || (c < 8182
        ? (c < 6400
          ? (c < 4888
            ? (c < 4704
              ? (c < 4348
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))
                : (c <= 4680 || (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4800
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5952
              ? (c < 5761
                ? (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6108
                ? (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))))
          : (c <= 6430 || (c < 7413
            ? (c < 7086
              ? (c < 6688
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)))
                : (c <= 6740 || (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))))
              : (c <= 7087 || (c < 7296
                ? (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))))))
            : (c <= 7414 || (c < 8031
              ? (c < 8008
                ? (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
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
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
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
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
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
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_5(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
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

static inline bool sym_lowercase_identifier_character_set_6(int32_t c) {
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

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
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
      if (eof) ADVANCE(30);
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == '|') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 25:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(89);
      END_STATE();
    case 26:
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 27:
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(89);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(90);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(88);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(88);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(88);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(90);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_accessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(76);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_colon_colon_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_colon_colon_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_dot_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_package_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(92);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_mutability);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_priv);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_string_interpolation);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
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
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 4},
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
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 29},
  [241] = {.lex_state = 29},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 8},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 29},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 29},
  [307] = {.lex_state = 29},
  [308] = {.lex_state = 29},
  [309] = {.lex_state = 29},
  [310] = {.lex_state = 29},
  [311] = {.lex_state = 29},
  [312] = {.lex_state = 29},
  [313] = {.lex_state = 29},
  [314] = {.lex_state = 29},
  [315] = {.lex_state = 29},
  [316] = {.lex_state = 29},
  [317] = {.lex_state = 29},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 8},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 29},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 8},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 29},
  [330] = {.lex_state = 3},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 29},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 29},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 9},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 29},
  [340] = {.lex_state = 29},
  [341] = {.lex_state = 29},
  [342] = {.lex_state = 29},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 29},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 3},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 29},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 3},
  [359] = {.lex_state = 29},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 29},
  [363] = {.lex_state = 13},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 29},
  [370] = {.lex_state = 19},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 3},
  [373] = {.lex_state = 8},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 8},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 29},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 19},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 8},
  [386] = {.lex_state = 29},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 29},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 8},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 29},
  [400] = {.lex_state = 29},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 3},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 29},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 6},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 6},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 29},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 29},
  [426] = {.lex_state = 16},
  [427] = {.lex_state = 1},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 29},
  [430] = {.lex_state = 1},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 1},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 4},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 19},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 8},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 29},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 19},
  [466] = {.lex_state = 1},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 6},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 4},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 8},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 19},
  [481] = {.lex_state = 1},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 4},
  [487] = {.lex_state = 4},
  [488] = {.lex_state = 1},
  [489] = {.lex_state = 6},
  [490] = {.lex_state = 1},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 1},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 1},
  [496] = {.lex_state = 1},
  [497] = {.lex_state = 1},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 1},
  [501] = {.lex_state = 29},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 1},
  [504] = {.lex_state = 8},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 1},
  [507] = {.lex_state = 29},
  [508] = {.lex_state = 6},
  [509] = {.lex_state = 1},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 4},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 1},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 1},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 1},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 1},
  [521] = {.lex_state = 19},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 1},
  [525] = {.lex_state = 4},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 1},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 1},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 4},
  [536] = {.lex_state = 1},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 4},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 29},
  [543] = {.lex_state = 19},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 29},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 29},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 29},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 29},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 19},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 29},
  [560] = {.lex_state = 29},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 29},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 29},
  [566] = {.lex_state = 29},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 29},
  [569] = {.lex_state = 4},
  [570] = {.lex_state = 19},
  [571] = {.lex_state = 29},
  [572] = {.lex_state = 19},
  [573] = {.lex_state = 4},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 4},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 19},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 29},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 19},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 29},
  [585] = {.lex_state = 19},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 29},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 4},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 4},
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
  [606] = {.lex_state = 29},
  [607] = {.lex_state = 29},
  [608] = {.lex_state = 29},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 4},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 19},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 29},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 19},
  [625] = {.lex_state = 19},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 19},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
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
    [sym_string_interpolation] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
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
  },
  [1] = {
    [sym_structure] = STATE(616),
    [sym_structure_item] = STATE(419),
    [sym_visibility] = STATE(423),
    [sym_type_defintion] = STATE(424),
    [sym_struct_definition] = STATE(424),
    [sym_enum_definition] = STATE(424),
    [sym_value_definition] = STATE(424),
    [sym_function_definition] = STATE(424),
    [sym_interface_definition] = STATE(424),
    [sym_pub] = STATE(425),
    [aux_sym_structure_repeat1] = STATE(241),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_priv] = ACTIONS(5),
    [anon_sym_pub] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_interface] = ACTIONS(19),
  },
  [2] = {
    [sym_expression] = STATE(225),
    [sym_simple_expression] = STATE(148),
    [sym_atomic_expression] = STATE(208),
    [sym_literal] = STATE(207),
    [sym_boolean_literal] = STATE(198),
    [sym_string_literal] = STATE(198),
    [sym_unary_expression] = STATE(208),
    [sym_binary_expression] = STATE(208),
    [sym_struct_expression] = STATE(208),
    [sym_struct_field_expression] = STATE(581),
    [sym_labeled_expression] = STATE(556),
    [sym_labeled_expression_pun] = STATE(613),
    [sym_nonempty_block_expression] = STATE(208),
    [sym_anonymous_lambda_expression] = STATE(208),
    [sym_constructor_expression] = STATE(208),
    [sym_apply_expression] = STATE(208),
    [sym_array_access_expression] = STATE(144),
    [sym_dot_apply_expression] = STATE(208),
    [sym_access_expression] = STATE(208),
    [sym_method_expression] = STATE(208),
    [sym_unit_expression] = STATE(208),
    [sym_tuple_expression] = STATE(208),
    [sym_constraint_expression] = STATE(208),
    [sym_array_expression] = STATE(208),
    [sym_match_expression] = STATE(186),
    [sym_if_expression] = STATE(186),
    [sym_statement_expression] = STATE(498),
    [sym_let_expression] = STATE(500),
    [sym_shorthand_let_expression] = STATE(500),
    [sym_shorthand_let_pattern] = STATE(599),
    [sym_var_expression] = STATE(500),
    [sym_assign_expression] = STATE(500),
    [sym_left_value] = STATE(595),
    [sym_named_lambda_expression] = STATE(500),
    [sym_while_expression] = STATE(500),
    [sym_return_expression] = STATE(500),
    [sym_qualified_identifier] = STATE(144),
    [sym_qualified_type_identifier] = STATE(610),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym__] = ACTIONS(31),
    [sym_string_interpolation] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_match] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_break] = ACTIONS(53),
    [anon_sym_continue] = ACTIONS(53),
    [anon_sym_var] = ACTIONS(55),
    [anon_sym_while] = ACTIONS(57),
    [anon_sym_return] = ACTIONS(59),
    [sym_uppercase_identifier] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_package_identifier] = ACTIONS(65),
  },
  [3] = {
    [sym_expression] = STATE(225),
    [sym_simple_expression] = STATE(148),
    [sym_atomic_expression] = STATE(208),
    [sym_literal] = STATE(207),
    [sym_boolean_literal] = STATE(198),
    [sym_string_literal] = STATE(198),
    [sym_unary_expression] = STATE(208),
    [sym_binary_expression] = STATE(208),
    [sym_struct_expression] = STATE(208),
    [sym_struct_field_expression] = STATE(617),
    [sym_labeled_expression] = STATE(556),
    [sym_labeled_expression_pun] = STATE(613),
    [sym_nonempty_block_expression] = STATE(208),
    [sym_anonymous_lambda_expression] = STATE(208),
    [sym_constructor_expression] = STATE(208),
    [sym_apply_expression] = STATE(208),
    [sym_array_access_expression] = STATE(144),
    [sym_dot_apply_expression] = STATE(208),
    [sym_access_expression] = STATE(208),
    [sym_method_expression] = STATE(208),
    [sym_unit_expression] = STATE(208),
    [sym_tuple_expression] = STATE(208),
    [sym_constraint_expression] = STATE(208),
    [sym_array_expression] = STATE(208),
    [sym_match_expression] = STATE(186),
    [sym_if_expression] = STATE(186),
    [sym_statement_expression] = STATE(498),
    [sym_let_expression] = STATE(500),
    [sym_shorthand_let_expression] = STATE(500),
    [sym_shorthand_let_pattern] = STATE(599),
    [sym_var_expression] = STATE(500),
    [sym_assign_expression] = STATE(500),
    [sym_left_value] = STATE(595),
    [sym_named_lambda_expression] = STATE(500),
    [sym_while_expression] = STATE(500),
    [sym_return_expression] = STATE(500),
    [sym_qualified_identifier] = STATE(144),
    [sym_qualified_type_identifier] = STATE(610),
    [aux_sym_block_expression_repeat1] = STATE(9),
    [sym_lowercase_identifier] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym__] = ACTIONS(31),
    [sym_string_interpolation] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_match] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_break] = ACTIONS(53),
    [anon_sym_continue] = ACTIONS(53),
    [anon_sym_var] = ACTIONS(55),
    [anon_sym_while] = ACTIONS(57),
    [anon_sym_return] = ACTIONS(59),
    [sym_uppercase_identifier] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_package_identifier] = ACTIONS(65),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_fn,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(71), 1,
      sym_lowercase_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_expression_repeat1,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(225), 1,
      sym_expression,
    STATE(498), 1,
      sym_statement_expression,
    STATE(595), 1,
      sym_left_value,
    STATE(599), 1,
      sym_shorthand_let_pattern,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(53), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(144), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(500), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(208), 15,
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
  [132] = 35,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_fn,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(71), 1,
      sym_lowercase_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_block_expression_repeat1,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(225), 1,
      sym_expression,
    STATE(498), 1,
      sym_statement_expression,
    STATE(595), 1,
      sym_left_value,
    STATE(599), 1,
      sym_shorthand_let_pattern,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(53), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(144), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(500), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(208), 15,
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
  [264] = 35,
    ACTIONS(77), 1,
      sym_lowercase_identifier,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_let,
    ACTIONS(91), 1,
      anon_sym__,
    ACTIONS(94), 1,
      sym_string_interpolation,
    ACTIONS(100), 1,
      sym_integer_literal,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_fn,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_match,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_var,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_return,
    ACTIONS(133), 1,
      sym_uppercase_identifier,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_package_identifier,
    STATE(6), 1,
      aux_sym_block_expression_repeat1,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(225), 1,
      sym_expression,
    STATE(498), 1,
      sym_statement_expression,
    STATE(595), 1,
      sym_left_value,
    STATE(599), 1,
      sym_shorthand_let_pattern,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(144), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(500), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(208), 15,
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
  [396] = 35,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_fn,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(71), 1,
      sym_lowercase_identifier,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_expression_repeat1,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(225), 1,
      sym_expression,
    STATE(498), 1,
      sym_statement_expression,
    STATE(595), 1,
      sym_left_value,
    STATE(599), 1,
      sym_shorthand_let_pattern,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(53), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(144), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(500), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(208), 15,
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
  [528] = 35,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_fn,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(71), 1,
      sym_lowercase_identifier,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_expression_repeat1,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(225), 1,
      sym_expression,
    STATE(498), 1,
      sym_statement_expression,
    STATE(595), 1,
      sym_left_value,
    STATE(599), 1,
      sym_shorthand_let_pattern,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(53), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(144), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(500), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(208), 15,
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
  [660] = 35,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_fn,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(71), 1,
      sym_lowercase_identifier,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_expression_repeat1,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(225), 1,
      sym_expression,
    STATE(498), 1,
      sym_statement_expression,
    STATE(595), 1,
      sym_left_value,
    STATE(599), 1,
      sym_shorthand_let_pattern,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(53), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(144), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(500), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(208), 15,
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
  [792] = 35,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_fn,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(71), 1,
      sym_lowercase_identifier,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_block_expression_repeat1,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(225), 1,
      sym_expression,
    STATE(498), 1,
      sym_statement_expression,
    STATE(595), 1,
      sym_left_value,
    STATE(599), 1,
      sym_shorthand_let_pattern,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(53), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(144), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(500), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(208), 15,
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
  [924] = 25,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(162), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_fn,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      sym_uppercase_identifier,
    ACTIONS(174), 1,
      sym_package_identifier,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(220), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(166), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [1021] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(214), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1114] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1207] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1300] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(216), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1393] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1486] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1579] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1672] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1765] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1858] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(215), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [1951] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2044] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2137] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2230] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2323] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2416] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(230), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2509] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2602] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2695] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(222), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2788] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2881] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(213), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [2974] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(219), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [3067] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [3160] = 24,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(228), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [3253] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(227), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [3343] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(127), 1,
      sym_literal,
    STATE(196), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [3433] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(221), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [3523] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(237), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [3613] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(231), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [3703] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(235), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [3793] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(218), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [3883] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(152), 1,
      sym_expression,
    STATE(207), 1,
      sym_literal,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [3973] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(232), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [4063] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(127), 1,
      sym_literal,
    STATE(212), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [4153] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(236), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [4243] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(99), 1,
      sym_expression,
    STATE(127), 1,
      sym_literal,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [4333] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(106), 1,
      sym_expression,
    STATE(127), 1,
      sym_literal,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [4423] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(226), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [4513] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(101), 1,
      sym_expression,
    STATE(127), 1,
      sym_literal,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [4603] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(234), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [4693] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(233), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [4783] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(98), 1,
      sym_expression,
    STATE(127), 1,
      sym_literal,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [4873] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(166), 1,
      sym_expression,
    STATE(207), 1,
      sym_literal,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [4963] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(156), 1,
      sym_expression,
    STATE(207), 1,
      sym_literal,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [5053] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(127), 1,
      sym_literal,
    STATE(204), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [5143] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(154), 1,
      sym_expression,
    STATE(207), 1,
      sym_literal,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [5233] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(172), 1,
      sym_expression,
    STATE(207), 1,
      sym_literal,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [5323] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(169), 1,
      sym_expression,
    STATE(207), 1,
      sym_literal,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [5413] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(229), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [5503] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(95), 1,
      sym_expression,
    STATE(127), 1,
      sym_literal,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [5593] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(155), 1,
      sym_expression,
    STATE(207), 1,
      sym_literal,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [5683] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(127), 1,
      sym_literal,
    STATE(238), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [5773] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(96), 1,
      sym_expression,
    STATE(127), 1,
      sym_literal,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [5863] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(217), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [5953] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(223), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [6043] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(127), 1,
      sym_literal,
    STATE(175), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [6133] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(127), 1,
      sym_literal,
    STATE(211), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [6223] = 23,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym__,
    ACTIONS(186), 1,
      sym_string_interpolation,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_fn,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_match,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(206), 1,
      sym_package_identifier,
    STATE(82), 1,
      sym_simple_expression,
    STATE(97), 1,
      sym_expression,
    STATE(127), 1,
      sym_literal,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(119), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(128), 17,
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
  [6313] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_string_interpolation,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_match,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      sym_uppercase_identifier,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_package_identifier,
    ACTIONS(150), 1,
      sym_lowercase_identifier,
    ACTIONS(160), 1,
      anon_sym__,
    ACTIONS(168), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_literal,
    STATE(224), 1,
      sym_expression,
    STATE(610), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(186), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(208), 17,
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
  [6403] = 2,
    ACTIONS(256), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(254), 26,
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
  [6443] = 2,
    ACTIONS(260), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(258), 26,
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
  [6483] = 2,
    ACTIONS(264), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(262), 25,
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
  [6522] = 2,
    ACTIONS(268), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(266), 25,
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
  [6561] = 2,
    ACTIONS(272), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(270), 25,
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
  [6600] = 2,
    ACTIONS(276), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(274), 25,
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
  [6639] = 4,
    ACTIONS(282), 1,
      anon_sym_else,
    STATE(114), 1,
      sym_else_clause,
    ACTIONS(280), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 22,
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
  [6679] = 3,
    ACTIONS(288), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(286), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 22,
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
  [6716] = 2,
    ACTIONS(292), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(290), 23,
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
  [6751] = 2,
    ACTIONS(296), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(294), 23,
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
  [6786] = 20,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    STATE(149), 1,
      sym_dotdot_pattern,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(319), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    STATE(592), 1,
      sym_array_sub_pattern,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6857] = 6,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_accessor,
    ACTIONS(320), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(316), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 18,
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
  [6900] = 5,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(326), 1,
      anon_sym_COLON,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_COLON_EQ,
    ACTIONS(324), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [6941] = 2,
    ACTIONS(334), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 22,
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
  [6975] = 2,
    ACTIONS(338), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 22,
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
  [7009] = 2,
    ACTIONS(342), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 22,
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
  [7043] = 19,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_match_expression_repeat1,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(426), 1,
      sym_pattern,
    STATE(503), 1,
      sym_case_clause,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7111] = 19,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym_match_expression_repeat1,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(426), 1,
      sym_pattern,
    STATE(503), 1,
      sym_case_clause,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7179] = 19,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    STATE(611), 1,
      sym_dotdot_pattern,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7247] = 2,
    ACTIONS(352), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 22,
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
  [7281] = 2,
    ACTIONS(356), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 22,
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
  [7315] = 2,
    ACTIONS(360), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 22,
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
  [7349] = 2,
    ACTIONS(364), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 22,
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
  [7383] = 2,
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
  [7417] = 5,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(372), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 18,
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
  [7457] = 3,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(372), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 21,
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
  [7493] = 3,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(372), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 21,
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
  [7529] = 7,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(372), 3,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(370), 16,
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
  [7573] = 9,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(370), 12,
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
  [7621] = 19,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_match_expression_repeat1,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(426), 1,
      sym_pattern,
    STATE(503), 1,
      sym_case_clause,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7689] = 10,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(370), 11,
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
  [7739] = 2,
    ACTIONS(394), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 22,
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
  [7773] = 2,
    ACTIONS(398), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 22,
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
  [7807] = 2,
    ACTIONS(402), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 22,
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
  [7841] = 2,
    ACTIONS(406), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 22,
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
  [7875] = 3,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(410), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 21,
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
  [7911] = 19,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym_match_expression_repeat1,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(426), 1,
      sym_pattern,
    STATE(503), 1,
      sym_case_clause,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7979] = 2,
    ACTIONS(416), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 22,
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
  [8013] = 2,
    ACTIONS(420), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 22,
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
  [8047] = 2,
    ACTIONS(424), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 22,
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
  [8081] = 2,
    ACTIONS(428), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 22,
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
  [8115] = 2,
    ACTIONS(432), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 22,
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
  [8149] = 2,
    ACTIONS(436), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 22,
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
  [8183] = 2,
    ACTIONS(440), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 22,
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
  [8217] = 2,
    ACTIONS(444), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 22,
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
  [8251] = 2,
    ACTIONS(448), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 22,
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
  [8285] = 19,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(464), 1,
      sym_integer_literal,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      sym_uppercase_identifier,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(479), 1,
      sym_package_identifier,
    STATE(117), 1,
      aux_sym_match_expression_repeat1,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(426), 1,
      sym_pattern,
    STATE(503), 1,
      sym_case_clause,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(450), 2,
      anon_sym__,
      sym_lowercase_identifier,
    ACTIONS(461), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8353] = 2,
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
  [8387] = 2,
    ACTIONS(316), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 22,
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
  [8421] = 2,
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
  [8455] = 2,
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
  [8489] = 2,
    ACTIONS(324), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(322), 22,
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
  [8523] = 2,
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
  [8557] = 2,
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
  [8591] = 2,
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
  [8625] = 2,
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
  [8659] = 2,
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
  [8693] = 2,
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
  [8727] = 2,
    ACTIONS(520), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(518), 22,
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
  [8761] = 2,
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
  [8795] = 2,
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
  [8829] = 2,
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
  [8863] = 19,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    STATE(597), 1,
      sym_dotdot_pattern,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8931] = 2,
    ACTIONS(538), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(536), 22,
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
  [8965] = 3,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(330), 1,
      anon_sym_COLON_EQ,
    ACTIONS(324), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9000] = 3,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(540), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(286), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9035] = 4,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(542), 1,
      anon_sym_else,
    STATE(206), 1,
      sym_else_clause,
    ACTIONS(280), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9072] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9134] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9196] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9258] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9320] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9382] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9444] = 3,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(554), 1,
      anon_sym_EQ,
    ACTIONS(516), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9478] = 3,
    ACTIONS(330), 1,
      anon_sym_COLON_EQ,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9512] = 2,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9544] = 2,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9576] = 6,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
    STATE(188), 1,
      sym_accessor,
    ACTIONS(560), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(316), 21,
      anon_sym_SEMI,
      anon_sym_,
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
  [9616] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(367), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9678] = 2,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(488), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9710] = 2,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(420), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9741] = 5,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(372), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9778] = 2,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(508), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9809] = 3,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(372), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9842] = 3,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(372), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9875] = 4,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(372), 19,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9910] = 2,
    ACTIONS(502), 1,
      anon_sym_LF,
    ACTIONS(504), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9941] = 2,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(432), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [9972] = 2,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(368), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10003] = 2,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10034] = 2,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10065] = 16,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(327), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [10124] = 2,
    ACTIONS(498), 1,
      anon_sym_LF,
    ACTIONS(500), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10155] = 2,
    ACTIONS(518), 1,
      anon_sym_LF,
    ACTIONS(520), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10186] = 2,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(496), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10217] = 6,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(372), 9,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10256] = 2,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10287] = 2,
    ACTIONS(490), 1,
      anon_sym_LF,
    ACTIONS(492), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10318] = 3,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(410), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10351] = 2,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(364), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10382] = 2,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(406), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10413] = 7,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(372), 8,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10454] = 2,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10485] = 2,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(360), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_accessor,
    STATE(137), 1,
      sym_block_expression,
    ACTIONS(320), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(316), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 13,
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
  [10559] = 2,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(538), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10590] = 2,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10621] = 2,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10652] = 2,
    ACTIONS(522), 1,
      anon_sym_LF,
    ACTIONS(524), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10683] = 2,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(448), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10714] = 2,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(334), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10745] = 2,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(394), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10776] = 2,
    ACTIONS(482), 1,
      anon_sym_LF,
    ACTIONS(484), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10807] = 2,
    ACTIONS(354), 1,
      anon_sym_LF,
    ACTIONS(356), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10838] = 16,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(363), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [10897] = 2,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10928] = 2,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10959] = 2,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(352), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [10990] = 2,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11021] = 16,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(368), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [11080] = 16,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(299), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [11139] = 2,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(398), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11170] = 2,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(402), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11201] = 2,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(324), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11232] = 16,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(349), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [11291] = 8,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_block_expression,
    STATE(90), 1,
      sym_accessor,
    ACTIONS(320), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(316), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 13,
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
  [11334] = 2,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11365] = 2,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11396] = 2,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(416), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11427] = 2,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(424), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11458] = 16,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(336), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [11517] = 16,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer_literal,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_uppercase_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_package_identifier,
    STATE(256), 1,
      sym_constructor_expression,
    STATE(338), 1,
      sym_pattern,
    STATE(579), 1,
      sym_qualified_type_identifier,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(75), 2,
      sym_boolean_literal,
      sym_string_literal,
    STATE(288), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(294), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [11576] = 2,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11607] = 8,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_accessor,
    STATE(499), 1,
      sym_block_expression,
    ACTIONS(320), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(316), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 13,
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
  [11650] = 2,
    ACTIONS(434), 1,
      anon_sym_LF,
    ACTIONS(436), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11681] = 2,
    ACTIONS(438), 1,
      anon_sym_LF,
    ACTIONS(440), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11712] = 2,
    ACTIONS(510), 1,
      anon_sym_LF,
    ACTIONS(512), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11743] = 2,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11774] = 2,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(338), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
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
  [11805] = 2,
    ACTIONS(86), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
    ACTIONS(578), 15,
      anon_sym_let,
      anon_sym__,
      sym_string_interpolation,
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
      sym_identifier,
  [11835] = 7,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_accessor,
    ACTIONS(320), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(316), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 13,
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
  [11875] = 7,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_accessor,
    ACTIONS(320), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(316), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 13,
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
  [11915] = 15,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 1,
      anon_sym_COLON,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    STATE(460), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11970] = 15,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12025] = 14,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(417), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12077] = 14,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12129] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(612), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12173] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12217] = 14,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    STATE(459), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12269] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(630), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12313] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(634), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12357] = 14,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_RBRACK,
    STATE(445), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12409] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(640), 1,
      anon_sym_LF,
    ACTIONS(642), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12453] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(646), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12497] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12541] = 12,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(652), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12589] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12633] = 14,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(479), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12685] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(662), 1,
      anon_sym_LF,
    ACTIONS(664), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12729] = 14,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    STATE(422), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12781] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(672), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12825] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(676), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12869] = 10,
    ACTIONS(566), 1,
      anon_sym_STAR_STAR,
    ACTIONS(572), 1,
      anon_sym_AMP_AMP,
    ACTIONS(614), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(618), 1,
      sym_dot_identifier,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(564), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(568), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(570), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12913] = 12,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12960] = 13,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13009] = 13,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13058] = 12,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13104] = 12,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(694), 1,
      anon_sym_RBRACK,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13150] = 11,
    ACTIONS(374), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(594), 1,
      sym_dot_identifier,
    ACTIONS(376), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13193] = 14,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 1,
      anon_sym_priv,
    ACTIONS(701), 1,
      anon_sym_pub,
    ACTIONS(704), 1,
      anon_sym_type,
    ACTIONS(707), 1,
      anon_sym_struct,
    ACTIONS(710), 1,
      anon_sym_enum,
    ACTIONS(713), 1,
      anon_sym_let,
    ACTIONS(716), 1,
      anon_sym_func,
    ACTIONS(719), 1,
      anon_sym_interface,
    STATE(240), 1,
      aux_sym_structure_repeat1,
    STATE(419), 1,
      sym_structure_item,
    STATE(423), 1,
      sym_visibility,
    STATE(425), 1,
      sym_pub,
    STATE(424), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [13241] = 14,
    ACTIONS(5), 1,
      anon_sym_priv,
    ACTIONS(7), 1,
      anon_sym_pub,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_interface,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      aux_sym_structure_repeat1,
    STATE(419), 1,
      sym_structure_item,
    STATE(423), 1,
      sym_visibility,
    STATE(425), 1,
      sym_pub,
    STATE(424), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [13289] = 3,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(724), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(726), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [13311] = 2,
    ACTIONS(730), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(732), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [13330] = 2,
    ACTIONS(734), 5,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(459), 8,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [13348] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13376] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13404] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13432] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13460] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(447), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13488] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(421), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13516] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13544] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13572] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13600] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13628] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(760), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13656] = 3,
    ACTIONS(762), 1,
      anon_sym_LPAREN,
    ACTIONS(766), 1,
      anon_sym_EQ,
    ACTIONS(764), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [13674] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13702] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13730] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13758] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(519), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13786] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13814] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13842] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(457), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13867] = 2,
    ACTIONS(782), 1,
      anon_sym_EQ,
    ACTIONS(780), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [13882] = 7,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym__,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_package_identifier,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(494), 1,
      sym_type,
    STATE(482), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13907] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(605), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13932] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(461), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13957] = 7,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym__,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_package_identifier,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(533), 1,
      sym_type,
    STATE(482), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [13982] = 2,
    ACTIONS(794), 1,
      anon_sym_EQ,
    ACTIONS(792), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [13997] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(628), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14022] = 2,
    ACTIONS(798), 1,
      anon_sym_EQ,
    ACTIONS(796), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14037] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(493), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14062] = 2,
    ACTIONS(802), 1,
      anon_sym_EQ,
    ACTIONS(800), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14077] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14102] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(619), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14127] = 2,
    ACTIONS(806), 1,
      anon_sym_EQ,
    ACTIONS(804), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14142] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(360), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14167] = 2,
    ACTIONS(810), 1,
      anon_sym_EQ,
    ACTIONS(808), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14182] = 7,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym__,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_package_identifier,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(526), 1,
      sym_type,
    STATE(482), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14207] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(351), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14232] = 2,
    ACTIONS(814), 1,
      anon_sym_EQ,
    ACTIONS(812), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14247] = 7,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym__,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_package_identifier,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(534), 1,
      sym_type,
    STATE(482), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14272] = 2,
    ACTIONS(818), 1,
      anon_sym_EQ,
    ACTIONS(816), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14287] = 7,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym__,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_package_identifier,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(434), 1,
      sym_type,
    STATE(482), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14312] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(364), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14337] = 7,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym__,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_package_identifier,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(524), 1,
      sym_type,
    STATE(482), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14362] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(357), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14387] = 2,
    ACTIONS(822), 1,
      anon_sym_EQ,
    ACTIONS(820), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14402] = 2,
    ACTIONS(826), 1,
      anon_sym_EQ,
    ACTIONS(824), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14417] = 2,
    ACTIONS(830), 1,
      anon_sym_EQ,
    ACTIONS(828), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14432] = 2,
    ACTIONS(834), 1,
      anon_sym_EQ,
    ACTIONS(832), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14447] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(511), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14472] = 7,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym__,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_package_identifier,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(492), 1,
      sym_type,
    STATE(482), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14497] = 2,
    ACTIONS(838), 1,
      anon_sym_EQ,
    ACTIONS(836), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14512] = 2,
    ACTIONS(842), 1,
      anon_sym_EQ,
    ACTIONS(840), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14527] = 7,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    STATE(320), 1,
      sym_qualified_type_identifier,
    STATE(569), 1,
      sym_type,
    STATE(335), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14552] = 2,
    ACTIONS(846), 1,
      anon_sym_EQ,
    ACTIONS(844), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14567] = 7,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym__,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_package_identifier,
    STATE(347), 1,
      sym_qualified_type_identifier,
    STATE(505), 1,
      sym_type,
    STATE(482), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14592] = 3,
    ACTIONS(850), 1,
      anon_sym_EQ,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(848), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
  [14609] = 1,
    ACTIONS(854), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [14621] = 9,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      anon_sym_EQ,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    STATE(318), 1,
      sym_type_parameters,
    STATE(345), 1,
      sym_parameters,
    STATE(487), 1,
      sym_retuern_type,
    STATE(488), 1,
      sym_block_expression,
  [14649] = 1,
    ACTIONS(288), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [14661] = 1,
    ACTIONS(696), 9,
      ts_builtin_sym_end,
      anon_sym_priv,
      anon_sym_pub,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [14673] = 9,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    ACTIONS(864), 1,
      anon_sym_EQ,
    STATE(321), 1,
      sym_type_parameters,
    STATE(373), 1,
      sym_parameters,
    STATE(514), 1,
      sym_block_expression,
    STATE(525), 1,
      sym_retuern_type,
  [14701] = 8,
    ACTIONS(866), 1,
      sym_lowercase_identifier,
    ACTIONS(868), 1,
      anon_sym_priv,
    ACTIONS(870), 1,
      anon_sym_pub,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
    ACTIONS(874), 1,
      sym_mutability,
    STATE(315), 1,
      aux_sym_struct_definition_repeat1,
    STATE(523), 1,
      sym_struct_filed_declaration,
    STATE(546), 1,
      sym_visibility,
  [14726] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(876), 1,
      sym_lowercase_identifier,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_interface_definition_repeat1,
    STATE(462), 1,
      sym_function_identifier,
    STATE(484), 1,
      sym_interface_method_declaration,
    STATE(594), 1,
      sym_qualified_type_identifier,
  [14751] = 8,
    ACTIONS(866), 1,
      sym_lowercase_identifier,
    ACTIONS(868), 1,
      anon_sym_priv,
    ACTIONS(870), 1,
      anon_sym_pub,
    ACTIONS(874), 1,
      sym_mutability,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_struct_definition_repeat1,
    STATE(523), 1,
      sym_struct_filed_declaration,
    STATE(546), 1,
      sym_visibility,
  [14776] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(876), 1,
      sym_lowercase_identifier,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_interface_definition_repeat1,
    STATE(462), 1,
      sym_function_identifier,
    STATE(484), 1,
      sym_interface_method_declaration,
    STATE(594), 1,
      sym_qualified_type_identifier,
  [14801] = 8,
    ACTIONS(884), 1,
      sym_lowercase_identifier,
    ACTIONS(887), 1,
      anon_sym_priv,
    ACTIONS(890), 1,
      anon_sym_pub,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(895), 1,
      sym_mutability,
    STATE(309), 1,
      aux_sym_struct_definition_repeat1,
    STATE(523), 1,
      sym_struct_filed_declaration,
    STATE(546), 1,
      sym_visibility,
  [14826] = 4,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym_pub_attribute,
    ACTIONS(900), 3,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
    ACTIONS(902), 3,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [14843] = 8,
    ACTIONS(866), 1,
      sym_lowercase_identifier,
    ACTIONS(868), 1,
      anon_sym_priv,
    ACTIONS(870), 1,
      anon_sym_pub,
    ACTIONS(874), 1,
      sym_mutability,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      aux_sym_struct_definition_repeat1,
    STATE(523), 1,
      sym_struct_filed_declaration,
    STATE(546), 1,
      sym_visibility,
  [14868] = 8,
    ACTIONS(866), 1,
      sym_lowercase_identifier,
    ACTIONS(868), 1,
      anon_sym_priv,
    ACTIONS(870), 1,
      anon_sym_pub,
    ACTIONS(874), 1,
      sym_mutability,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      aux_sym_struct_definition_repeat1,
    STATE(523), 1,
      sym_struct_filed_declaration,
    STATE(546), 1,
      sym_visibility,
  [14893] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(876), 1,
      sym_lowercase_identifier,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      aux_sym_interface_definition_repeat1,
    STATE(462), 1,
      sym_function_identifier,
    STATE(484), 1,
      sym_interface_method_declaration,
    STATE(594), 1,
      sym_qualified_type_identifier,
  [14918] = 8,
    ACTIONS(910), 1,
      sym_lowercase_identifier,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    ACTIONS(915), 1,
      sym_identifier,
    ACTIONS(918), 1,
      sym_package_identifier,
    STATE(314), 1,
      aux_sym_interface_definition_repeat1,
    STATE(462), 1,
      sym_function_identifier,
    STATE(484), 1,
      sym_interface_method_declaration,
    STATE(594), 1,
      sym_qualified_type_identifier,
  [14943] = 8,
    ACTIONS(866), 1,
      sym_lowercase_identifier,
    ACTIONS(868), 1,
      anon_sym_priv,
    ACTIONS(870), 1,
      anon_sym_pub,
    ACTIONS(874), 1,
      sym_mutability,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_struct_definition_repeat1,
    STATE(523), 1,
      sym_struct_filed_declaration,
    STATE(546), 1,
      sym_visibility,
  [14968] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(876), 1,
      sym_lowercase_identifier,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_interface_definition_repeat1,
    STATE(462), 1,
      sym_function_identifier,
    STATE(484), 1,
      sym_interface_method_declaration,
    STATE(594), 1,
      sym_qualified_type_identifier,
  [14993] = 8,
    ACTIONS(866), 1,
      sym_lowercase_identifier,
    ACTIONS(868), 1,
      anon_sym_priv,
    ACTIONS(870), 1,
      anon_sym_pub,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
    ACTIONS(874), 1,
      sym_mutability,
    STATE(309), 1,
      aux_sym_struct_definition_repeat1,
    STATE(523), 1,
      sym_struct_filed_declaration,
    STATE(546), 1,
      sym_visibility,
  [15018] = 7,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    ACTIONS(921), 1,
      anon_sym_EQ,
    STATE(337), 1,
      sym_parameters,
    STATE(478), 1,
      sym_block_expression,
    STATE(486), 1,
      sym_retuern_type,
  [15040] = 7,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(925), 1,
      anon_sym_as,
    STATE(365), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(587), 1,
      sym_dotdot_pattern,
  [15062] = 3,
    ACTIONS(929), 1,
      anon_sym_LBRACK,
    STATE(344), 1,
      sym_type_arguments,
    ACTIONS(927), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15076] = 7,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      anon_sym_EQ,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    STATE(345), 1,
      sym_parameters,
    STATE(487), 1,
      sym_retuern_type,
    STATE(488), 1,
      sym_block_expression,
  [15098] = 6,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    STATE(420), 1,
      sym_filed_single_pattern,
    STATE(598), 1,
      sym_dotdot_pattern,
    STATE(454), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [15118] = 6,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    STATE(420), 1,
      sym_filed_single_pattern,
    STATE(614), 1,
      sym_dotdot_pattern,
    STATE(454), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [15138] = 2,
    ACTIONS(939), 1,
      anon_sym_DASH_GT,
    ACTIONS(937), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15149] = 2,
    ACTIONS(943), 1,
      anon_sym_DASH_GT,
    ACTIONS(941), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15160] = 2,
    ACTIONS(947), 1,
      anon_sym_DASH_GT,
    ACTIONS(945), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15171] = 3,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(925), 1,
      anon_sym_as,
    ACTIONS(949), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [15184] = 2,
    ACTIONS(953), 1,
      anon_sym_DASH_GT,
    ACTIONS(951), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15195] = 5,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      sym_filed_single_pattern,
    STATE(603), 1,
      sym_struct_filed_pattern,
    STATE(454), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [15212] = 4,
    ACTIONS(957), 1,
      anon_sym_LF,
    ACTIONS(961), 1,
      anon_sym_DASH_GT,
    STATE(453), 1,
      sym_retuern_type,
    ACTIONS(959), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15226] = 1,
    ACTIONS(963), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15234] = 5,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(876), 1,
      sym_lowercase_identifier,
    STATE(304), 1,
      sym_function_identifier,
    STATE(594), 1,
      sym_qualified_type_identifier,
  [15250] = 1,
    ACTIONS(965), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15258] = 5,
    ACTIONS(967), 1,
      sym_lowercase_identifier,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
    STATE(556), 1,
      sym_labeled_expression,
    STATE(609), 1,
      sym_struct_field_expression,
    STATE(613), 1,
      sym_labeled_expression_pun,
  [15274] = 1,
    ACTIONS(971), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15282] = 3,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(925), 1,
      anon_sym_as,
    ACTIONS(973), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [15294] = 5,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    ACTIONS(975), 1,
      anon_sym_EQ,
    STATE(509), 1,
      sym_block_expression,
    STATE(535), 1,
      sym_retuern_type,
  [15310] = 5,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(925), 1,
      anon_sym_as,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_constructor_pattern_repeat1,
  [15326] = 4,
    ACTIONS(967), 1,
      sym_lowercase_identifier,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
    STATE(510), 1,
      sym_struct_filed_expression,
    STATE(552), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [15340] = 5,
    ACTIONS(967), 1,
      sym_lowercase_identifier,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
    STATE(556), 1,
      sym_labeled_expression,
    STATE(613), 1,
      sym_labeled_expression_pun,
    STATE(615), 1,
      sym_struct_field_expression,
  [15356] = 1,
    ACTIONS(985), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [15364] = 1,
    ACTIONS(987), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [15372] = 4,
    ACTIONS(989), 1,
      anon_sym_LF,
    ACTIONS(993), 1,
      anon_sym_LBRACK,
    STATE(490), 1,
      sym_type_parameters,
    ACTIONS(991), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15386] = 1,
    ACTIONS(995), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15394] = 5,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    ACTIONS(921), 1,
      anon_sym_EQ,
    STATE(478), 1,
      sym_block_expression,
    STATE(486), 1,
      sym_retuern_type,
  [15410] = 4,
    ACTIONS(967), 1,
      sym_lowercase_identifier,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
    STATE(561), 1,
      sym_struct_filed_expression,
    STATE(552), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [15424] = 4,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    STATE(497), 1,
      sym_type_arguments,
    ACTIONS(999), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15438] = 1,
    ACTIONS(1003), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15446] = 5,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(925), 1,
      anon_sym_as,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
  [15462] = 1,
    ACTIONS(1011), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [15470] = 1,
    ACTIONS(1013), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15478] = 4,
    ACTIONS(961), 1,
      anon_sym_DASH_GT,
    ACTIONS(1015), 1,
      anon_sym_LF,
    STATE(477), 1,
      sym_retuern_type,
    ACTIONS(1017), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15492] = 4,
    ACTIONS(961), 1,
      anon_sym_DASH_GT,
    ACTIONS(1019), 1,
      anon_sym_LF,
    STATE(436), 1,
      sym_retuern_type,
    ACTIONS(1021), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15506] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_constructor_pattern_repeat1,
    ACTIONS(949), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [15518] = 5,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(583), 1,
      sym_dotdot_pattern,
  [15534] = 2,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(1030), 4,
      anon_sym_priv,
      anon_sym_pub,
      sym_mutability,
      sym_lowercase_identifier,
  [15544] = 1,
    ACTIONS(1032), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15552] = 4,
    ACTIONS(961), 1,
      anon_sym_DASH_GT,
    ACTIONS(1034), 1,
      anon_sym_LF,
    STATE(464), 1,
      sym_retuern_type,
    ACTIONS(1036), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15566] = 1,
    ACTIONS(1038), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [15574] = 1,
    ACTIONS(1040), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15582] = 5,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(614), 1,
      sym_dotdot_pattern,
  [15598] = 5,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(876), 1,
      sym_lowercase_identifier,
    STATE(301), 1,
      sym_function_identifier,
    STATE(594), 1,
      sym_qualified_type_identifier,
  [15614] = 5,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(925), 1,
      anon_sym_as,
    ACTIONS(1044), 1,
      anon_sym_COLON,
    ACTIONS(1046), 1,
      anon_sym_EQ,
    STATE(575), 1,
      sym_type_annotation,
  [15630] = 1,
    ACTIONS(1048), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15638] = 5,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(611), 1,
      sym_dotdot_pattern,
  [15654] = 1,
    ACTIONS(1052), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [15662] = 5,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(925), 1,
      anon_sym_as,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym_constructor_pattern_repeat1,
  [15678] = 5,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(925), 1,
      anon_sym_as,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    STATE(431), 1,
      aux_sym_constructor_pattern_repeat1,
  [15694] = 4,
    ACTIONS(967), 1,
      sym_lowercase_identifier,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    STATE(561), 1,
      sym_struct_filed_expression,
    STATE(552), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [15708] = 5,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(1062), 1,
      sym_identifier,
    STATE(405), 1,
      sym_constraint,
    STATE(513), 1,
      sym_qualified_type_identifier,
    STATE(551), 1,
      sym_constraints,
  [15724] = 4,
    ACTIONS(993), 1,
      anon_sym_LBRACK,
    ACTIONS(1064), 1,
      anon_sym_LF,
    STATE(466), 1,
      sym_type_parameters,
    ACTIONS(1066), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15738] = 4,
    ACTIONS(961), 1,
      anon_sym_DASH_GT,
    ACTIONS(1068), 1,
      anon_sym_LF,
    STATE(474), 1,
      sym_retuern_type,
    ACTIONS(1070), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15752] = 5,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(858), 1,
      anon_sym_EQ,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    STATE(487), 1,
      sym_retuern_type,
    STATE(488), 1,
      sym_block_expression,
  [15768] = 1,
    ACTIONS(1072), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [15776] = 3,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    STATE(388), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1074), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15787] = 3,
    ACTIONS(941), 1,
      anon_sym_LF,
    ACTIONS(1080), 1,
      anon_sym_DASH_GT,
    ACTIONS(1078), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15798] = 4,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
    ACTIONS(1084), 1,
      sym_uppercase_identifier,
    STATE(402), 1,
      aux_sym_enum_definition_repeat1,
    STATE(518), 1,
      sym_enum_constructor,
  [15811] = 4,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    STATE(468), 1,
      sym_block_expression,
    STATE(564), 1,
      sym_retuern_type,
  [15824] = 4,
    ACTIONS(1084), 1,
      sym_uppercase_identifier,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
    STATE(398), 1,
      aux_sym_enum_definition_repeat1,
    STATE(518), 1,
      sym_enum_constructor,
  [15837] = 3,
    ACTIONS(931), 1,
      sym_lowercase_identifier,
    STATE(420), 1,
      sym_filed_single_pattern,
    STATE(454), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [15848] = 3,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(652), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [15859] = 4,
    ACTIONS(310), 1,
      sym_package_identifier,
    ACTIONS(1062), 1,
      sym_identifier,
    STATE(437), 1,
      sym_constraint,
    STATE(513), 1,
      sym_qualified_type_identifier,
  [15872] = 4,
    ACTIONS(1084), 1,
      sym_uppercase_identifier,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    STATE(401), 1,
      aux_sym_enum_definition_repeat1,
    STATE(518), 1,
      sym_enum_constructor,
  [15885] = 3,
    ACTIONS(937), 1,
      anon_sym_LF,
    ACTIONS(1095), 1,
      anon_sym_DASH_GT,
    ACTIONS(1093), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15896] = 1,
    ACTIONS(1097), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [15903] = 3,
    ACTIONS(967), 1,
      sym_lowercase_identifier,
    STATE(561), 1,
      sym_struct_filed_expression,
    STATE(552), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [15914] = 4,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    STATE(93), 1,
      sym_block_expression,
    STATE(563), 1,
      sym_retuern_type,
  [15927] = 3,
    ACTIONS(1101), 1,
      anon_sym_PLUS,
    STATE(388), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1099), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15938] = 3,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym_pub_attribute,
    ACTIONS(985), 2,
      sym_mutability,
      sym_lowercase_identifier,
  [15949] = 3,
    ACTIONS(1104), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      anon_sym_LPAREN,
    ACTIONS(1106), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15960] = 3,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_enum_constructor_repeat1,
    ACTIONS(1110), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [15971] = 3,
    ACTIONS(951), 1,
      anon_sym_LF,
    ACTIONS(1117), 1,
      anon_sym_DASH_GT,
    ACTIONS(1115), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15982] = 1,
    ACTIONS(1119), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [15989] = 2,
    ACTIONS(1123), 1,
      anon_sym_COLON,
    ACTIONS(1121), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [15998] = 2,
    ACTIONS(854), 1,
      anon_sym_LF,
    ACTIONS(1125), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [16007] = 2,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(540), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [16016] = 4,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(862), 1,
      anon_sym_DASH_GT,
    STATE(170), 1,
      sym_block_expression,
    STATE(544), 1,
      sym_retuern_type,
  [16029] = 4,
    ACTIONS(1084), 1,
      sym_uppercase_identifier,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    STATE(402), 1,
      aux_sym_enum_definition_repeat1,
    STATE(518), 1,
      sym_enum_constructor,
  [16042] = 2,
    ACTIONS(1127), 1,
      sym_identifier,
    ACTIONS(913), 3,
      anon_sym_RBRACE,
      sym_lowercase_identifier,
      sym_package_identifier,
  [16051] = 3,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(1129), 1,
      anon_sym_if,
    STATE(179), 2,
      sym_block_expression,
      sym_if_expression,
  [16062] = 4,
    ACTIONS(1084), 1,
      sym_uppercase_identifier,
    ACTIONS(1131), 1,
      anon_sym_RBRACE,
    STATE(402), 1,
      aux_sym_enum_definition_repeat1,
    STATE(518), 1,
      sym_enum_constructor,
  [16075] = 4,
    ACTIONS(1133), 1,
      anon_sym_RBRACE,
    ACTIONS(1135), 1,
      sym_uppercase_identifier,
    STATE(402), 1,
      aux_sym_enum_definition_repeat1,
    STATE(518), 1,
      sym_enum_constructor,
  [16088] = 1,
    ACTIONS(1138), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16095] = 3,
    ACTIONS(945), 1,
      anon_sym_LF,
    ACTIONS(1142), 1,
      anon_sym_DASH_GT,
    ACTIONS(1140), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16106] = 3,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    STATE(375), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1144), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16117] = 4,
    ACTIONS(1084), 1,
      sym_uppercase_identifier,
    ACTIONS(1131), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      aux_sym_enum_definition_repeat1,
    STATE(518), 1,
      sym_enum_constructor,
  [16130] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(1146), 1,
      anon_sym_if,
    STATE(130), 2,
      sym_block_expression,
      sym_if_expression,
  [16141] = 3,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym_struct_filed_pattern_repeat1,
    ACTIONS(1148), 2,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [16152] = 3,
    ACTIONS(1044), 1,
      anon_sym_COLON,
    STATE(558), 1,
      sym_type_annotation,
    ACTIONS(1153), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16163] = 3,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_RBRACK,
    STATE(531), 1,
      aux_sym_type_parameters_repeat1,
  [16173] = 2,
    ACTIONS(1159), 1,
      anon_sym_LF,
    ACTIONS(1161), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16181] = 3,
    ACTIONS(1163), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1166), 1,
      anon_sym_DQUOTE2,
    STATE(412), 1,
      aux_sym_string_literal_repeat1,
  [16191] = 3,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
  [16201] = 3,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
  [16211] = 3,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_struct_field_expression_repeat1,
  [16221] = 1,
    ACTIONS(1174), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16227] = 3,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
  [16237] = 3,
    ACTIONS(1178), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE2,
    STATE(412), 1,
      aux_sym_string_literal_repeat1,
  [16247] = 2,
    ACTIONS(1182), 1,
      anon_sym_LF,
    ACTIONS(1184), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16255] = 1,
    ACTIONS(1148), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [16261] = 3,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym_enum_constructor_repeat1,
  [16271] = 3,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
  [16281] = 3,
    ACTIONS(1192), 1,
      anon_sym_type,
    ACTIONS(1194), 1,
      anon_sym_struct,
    ACTIONS(1196), 1,
      anon_sym_enum,
  [16291] = 2,
    ACTIONS(1198), 1,
      anon_sym_LF,
    ACTIONS(1200), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16299] = 3,
    ACTIONS(1202), 1,
      anon_sym_let,
    ACTIONS(1204), 1,
      anon_sym_func,
    ACTIONS(1206), 1,
      anon_sym_interface,
  [16309] = 3,
    ACTIONS(852), 1,
      anon_sym_PIPE,
    ACTIONS(925), 1,
      anon_sym_as,
    ACTIONS(1208), 1,
      anon_sym_EQ_GT,
  [16319] = 2,
    ACTIONS(1210), 1,
      anon_sym_LF,
    ACTIONS(1212), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16327] = 3,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_constructor_pattern_repeat1,
  [16337] = 3,
    ACTIONS(1216), 1,
      sym_lowercase_identifier,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      sym_parameter,
  [16347] = 2,
    ACTIONS(1220), 1,
      anon_sym_LF,
    ACTIONS(1222), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16355] = 3,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_constructor_pattern_repeat1,
  [16365] = 3,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_parameters_repeat1,
  [16375] = 2,
    ACTIONS(1231), 1,
      anon_sym_LF,
    ACTIONS(1233), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16383] = 2,
    ACTIONS(1235), 1,
      anon_sym_LF,
    ACTIONS(1237), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16391] = 2,
    ACTIONS(1239), 1,
      anon_sym_LF,
    ACTIONS(1241), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16399] = 2,
    ACTIONS(1034), 1,
      anon_sym_LF,
    ACTIONS(1036), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16407] = 1,
    ACTIONS(1099), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [16413] = 3,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_enum_constructor_repeat1,
  [16423] = 3,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(1245), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_enum_constructor_repeat1,
  [16433] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    STATE(601), 1,
      sym_type_parameters,
  [16443] = 2,
    ACTIONS(1249), 1,
      anon_sym_LF,
    ACTIONS(1251), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16451] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(1253), 1,
      anon_sym_LBRACE,
    STATE(600), 1,
      sym_type_parameters,
  [16461] = 2,
    ACTIONS(1255), 1,
      anon_sym_LF,
    ACTIONS(1257), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16469] = 2,
    ACTIONS(1259), 1,
      anon_sym_LF,
    ACTIONS(1261), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16477] = 3,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    ACTIONS(1263), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
  [16487] = 3,
    ACTIONS(1044), 1,
      anon_sym_COLON,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    STATE(612), 1,
      sym_type_annotation,
  [16497] = 3,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_enum_constructor_repeat1,
  [16507] = 3,
    ACTIONS(1269), 1,
      anon_sym_RBRACE,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_struct_field_expression_repeat1,
  [16517] = 2,
    ACTIONS(1138), 1,
      anon_sym_LF,
    ACTIONS(1274), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16525] = 3,
    ACTIONS(1157), 1,
      anon_sym_RBRACK,
    ACTIONS(1276), 1,
      sym_identifier,
    STATE(547), 1,
      sym_type_identifier,
  [16535] = 3,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_enum_constructor_repeat1,
  [16545] = 1,
    ACTIONS(1278), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16551] = 2,
    ACTIONS(1019), 1,
      anon_sym_LF,
    ACTIONS(1021), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16559] = 1,
    ACTIONS(1280), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [16565] = 2,
    ACTIONS(1282), 1,
      anon_sym_LF,
    ACTIONS(1284), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16573] = 3,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_constructor_pattern_repeat1,
  [16583] = 3,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_RBRACK,
    STATE(517), 1,
      aux_sym_enum_constructor_repeat1,
  [16593] = 3,
    ACTIONS(1216), 1,
      sym_lowercase_identifier,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      sym_parameter,
  [16603] = 3,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
  [16613] = 3,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
  [16623] = 3,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1300), 1,
      anon_sym_RBRACK,
    STATE(438), 1,
      aux_sym_enum_constructor_repeat1,
  [16633] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(1302), 1,
      anon_sym_LPAREN,
    STATE(602), 1,
      sym_type_parameters,
  [16643] = 3,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_enum_constructor_repeat1,
  [16653] = 2,
    ACTIONS(1068), 1,
      anon_sym_LF,
    ACTIONS(1070), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16661] = 3,
    ACTIONS(1276), 1,
      sym_identifier,
    ACTIONS(1306), 1,
      anon_sym_RBRACK,
    STATE(547), 1,
      sym_type_identifier,
  [16671] = 2,
    ACTIONS(1308), 1,
      anon_sym_LF,
    ACTIONS(1310), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16679] = 2,
    ACTIONS(1312), 1,
      anon_sym_LF,
    ACTIONS(1314), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16687] = 2,
    ACTIONS(1316), 1,
      anon_sym_LF,
    ACTIONS(1318), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16695] = 3,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    ACTIONS(1320), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_enum_constructor_repeat1,
  [16705] = 3,
    ACTIONS(1178), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE2,
    STATE(412), 1,
      aux_sym_string_literal_repeat1,
  [16715] = 3,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    ACTIONS(1326), 1,
      anon_sym_COMMA,
    STATE(463), 1,
      aux_sym_enum_constructor_repeat1,
  [16725] = 3,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    STATE(502), 1,
      aux_sym_parameters_repeat1,
  [16735] = 3,
    ACTIONS(1044), 1,
      anon_sym_COLON,
    ACTIONS(1332), 1,
      anon_sym_EQ,
    STATE(573), 1,
      sym_type_annotation,
  [16745] = 2,
    ACTIONS(1015), 1,
      anon_sym_LF,
    ACTIONS(1017), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16753] = 3,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    ACTIONS(1336), 1,
      anon_sym_RBRACK,
    STATE(531), 1,
      aux_sym_type_parameters_repeat1,
  [16763] = 1,
    ACTIONS(1338), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16769] = 2,
    ACTIONS(1340), 1,
      anon_sym_LF,
    ACTIONS(1342), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16777] = 2,
    ACTIONS(1344), 1,
      anon_sym_LF,
    ACTIONS(1346), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16785] = 3,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_apply_expression_repeat1,
  [16795] = 3,
    ACTIONS(1276), 1,
      sym_identifier,
    ACTIONS(1336), 1,
      anon_sym_RBRACK,
    STATE(547), 1,
      sym_type_identifier,
  [16805] = 2,
    ACTIONS(965), 1,
      anon_sym_LF,
    ACTIONS(1350), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16813] = 2,
    ACTIONS(971), 1,
      anon_sym_LF,
    ACTIONS(1352), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16821] = 2,
    ACTIONS(1354), 1,
      anon_sym_LF,
    ACTIONS(1356), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16829] = 2,
    ACTIONS(1358), 1,
      anon_sym_LF,
    ACTIONS(1360), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16837] = 2,
    ACTIONS(1362), 1,
      anon_sym_LF,
    ACTIONS(1364), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16845] = 3,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(975), 1,
      anon_sym_EQ,
    STATE(509), 1,
      sym_block_expression,
  [16855] = 3,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(921), 1,
      anon_sym_EQ,
    STATE(478), 1,
      sym_block_expression,
  [16865] = 2,
    ACTIONS(1366), 1,
      anon_sym_LF,
    ACTIONS(1368), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16873] = 3,
    ACTIONS(1370), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1372), 1,
      anon_sym_DQUOTE2,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
  [16883] = 2,
    ACTIONS(1064), 1,
      anon_sym_LF,
    ACTIONS(1066), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16891] = 3,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      aux_sym_type_parameters_repeat1,
  [16901] = 2,
    ACTIONS(1048), 1,
      anon_sym_LF,
    ACTIONS(1378), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16909] = 3,
    ACTIONS(1380), 1,
      anon_sym_RPAREN,
    ACTIONS(1382), 1,
      anon_sym_COMMA,
    STATE(528), 1,
      aux_sym_enum_constructor_repeat1,
  [16919] = 2,
    ACTIONS(1384), 1,
      anon_sym_LF,
    ACTIONS(1386), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16927] = 2,
    ACTIONS(1052), 1,
      anon_sym_LF,
    ACTIONS(1388), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16935] = 2,
    ACTIONS(1390), 1,
      anon_sym_LF,
    ACTIONS(1392), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16943] = 2,
    ACTIONS(995), 1,
      anon_sym_LF,
    ACTIONS(1394), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16951] = 2,
    ACTIONS(1396), 1,
      anon_sym_LF,
    ACTIONS(1398), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16959] = 2,
    ACTIONS(1400), 1,
      anon_sym_LF,
    ACTIONS(1402), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16967] = 2,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16975] = 3,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(1404), 1,
      sym_lowercase_identifier,
    STATE(397), 1,
      sym_parameters,
  [16985] = 3,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_parameters_repeat1,
  [16995] = 2,
    ACTIONS(1408), 1,
      anon_sym_LF,
    ACTIONS(1410), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17003] = 1,
    ACTIONS(1412), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17009] = 2,
    ACTIONS(1040), 1,
      anon_sym_LF,
    ACTIONS(1414), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17017] = 2,
    ACTIONS(1416), 1,
      anon_sym_LF,
    ACTIONS(1418), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17025] = 3,
    ACTIONS(1216), 1,
      sym_lowercase_identifier,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym_parameter,
  [17035] = 3,
    ACTIONS(1422), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1424), 1,
      anon_sym_DQUOTE2,
    STATE(418), 1,
      aux_sym_string_literal_repeat1,
  [17045] = 2,
    ACTIONS(1426), 1,
      anon_sym_LF,
    ACTIONS(1428), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17053] = 3,
    ACTIONS(1430), 1,
      anon_sym_RBRACE,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      aux_sym_struct_field_expression_repeat1,
  [17063] = 1,
    ACTIONS(1434), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [17069] = 2,
    ACTIONS(1438), 1,
      anon_sym_COLON,
    ACTIONS(1436), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [17077] = 1,
    ACTIONS(1440), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [17083] = 2,
    ACTIONS(1442), 1,
      anon_sym_LF,
    ACTIONS(1444), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17091] = 2,
    ACTIONS(1119), 1,
      anon_sym_LF,
    ACTIONS(1446), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17099] = 2,
    ACTIONS(1003), 1,
      anon_sym_LF,
    ACTIONS(1448), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17107] = 3,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    ACTIONS(1450), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_enum_constructor_repeat1,
  [17117] = 2,
    ACTIONS(1452), 1,
      anon_sym_LF,
    ACTIONS(1454), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17125] = 3,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(1456), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym_enum_constructor_repeat1,
  [17135] = 2,
    ACTIONS(1458), 1,
      anon_sym_LF,
    ACTIONS(1460), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17143] = 3,
    ACTIONS(1276), 1,
      sym_identifier,
    ACTIONS(1462), 1,
      anon_sym_RBRACK,
    STATE(547), 1,
      sym_type_identifier,
  [17153] = 1,
    ACTIONS(1110), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17159] = 2,
    ACTIONS(1464), 1,
      anon_sym_LF,
    ACTIONS(1466), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17167] = 2,
    ACTIONS(1013), 1,
      anon_sym_LF,
    ACTIONS(1468), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17175] = 3,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(858), 1,
      anon_sym_EQ,
    STATE(488), 1,
      sym_block_expression,
  [17185] = 2,
    ACTIONS(1470), 1,
      anon_sym_LF,
    ACTIONS(1472), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17193] = 2,
    ACTIONS(1474), 1,
      anon_sym_LF,
    ACTIONS(1476), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17201] = 3,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_enum_constructor_repeat1,
  [17211] = 3,
    ACTIONS(1480), 1,
      anon_sym_COMMA,
    ACTIONS(1482), 1,
      anon_sym_RBRACK,
    STATE(410), 1,
      aux_sym_type_parameters_repeat1,
  [17221] = 2,
    ACTIONS(1484), 1,
      anon_sym_COLON,
    ACTIONS(1486), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17229] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RBRACK,
    STATE(531), 1,
      aux_sym_type_parameters_repeat1,
  [17239] = 2,
    ACTIONS(1493), 1,
      anon_sym_LF,
    ACTIONS(1495), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17247] = 2,
    ACTIONS(1032), 1,
      anon_sym_LF,
    ACTIONS(1497), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17255] = 2,
    ACTIONS(1499), 1,
      anon_sym_LF,
    ACTIONS(1501), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17263] = 3,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(1503), 1,
      anon_sym_EQ,
    STATE(455), 1,
      sym_block_expression,
  [17273] = 2,
    ACTIONS(963), 1,
      anon_sym_LF,
    ACTIONS(1505), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17281] = 2,
    ACTIONS(1507), 1,
      anon_sym_LF,
    ACTIONS(1509), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17289] = 2,
    ACTIONS(1097), 1,
      anon_sym_LF,
    ACTIONS(1511), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17297] = 3,
    ACTIONS(1044), 1,
      anon_sym_COLON,
    ACTIONS(1513), 1,
      anon_sym_EQ,
    STATE(593), 1,
      sym_type_annotation,
  [17307] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(1515), 1,
      anon_sym_LBRACE,
    STATE(591), 1,
      sym_type_parameters,
  [17317] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(1517), 1,
      anon_sym_LBRACE,
    STATE(590), 1,
      sym_type_parameters,
  [17327] = 2,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(565), 1,
      sym_string_literal,
  [17334] = 2,
    ACTIONS(1276), 1,
      sym_identifier,
    STATE(547), 1,
      sym_type_identifier,
  [17341] = 2,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_block_expression,
  [17348] = 1,
    ACTIONS(1133), 2,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
  [17353] = 2,
    ACTIONS(1519), 1,
      sym_lowercase_identifier,
    ACTIONS(1521), 1,
      sym_mutability,
  [17360] = 1,
    ACTIONS(1491), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17365] = 2,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(562), 1,
      sym_string_literal,
  [17372] = 2,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      sym_parameters,
  [17379] = 2,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(455), 1,
      sym_string_literal,
  [17386] = 1,
    ACTIONS(1523), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17391] = 1,
    ACTIONS(1525), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [17396] = 2,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(568), 1,
      sym_string_literal,
  [17403] = 2,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    STATE(397), 1,
      sym_parameters,
  [17410] = 2,
    ACTIONS(1276), 1,
      sym_identifier,
    STATE(491), 1,
      sym_type_identifier,
  [17417] = 2,
    ACTIONS(1527), 1,
      anon_sym_RBRACE,
    ACTIONS(1529), 1,
      anon_sym_COMMA,
  [17424] = 1,
    ACTIONS(1226), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17429] = 1,
    ACTIONS(1531), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17434] = 2,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(467), 1,
      sym_string_literal,
  [17441] = 2,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(559), 1,
      sym_string_literal,
  [17448] = 1,
    ACTIONS(1269), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [17453] = 2,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(435), 1,
      sym_string_literal,
  [17460] = 2,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block_expression,
  [17467] = 2,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(433), 1,
      sym_block_expression,
  [17474] = 2,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(509), 1,
      sym_string_literal,
  [17481] = 2,
    ACTIONS(1216), 1,
      sym_lowercase_identifier,
    STATE(557), 1,
      sym_parameter,
  [17488] = 2,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    STATE(378), 1,
      sym_parameters,
  [17495] = 2,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(478), 1,
      sym_string_literal,
  [17502] = 1,
    ACTIONS(1384), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [17507] = 2,
    ACTIONS(1276), 1,
      sym_identifier,
    STATE(529), 1,
      sym_type_identifier,
  [17514] = 2,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(550), 1,
      sym_string_literal,
  [17521] = 1,
    ACTIONS(1533), 1,
      sym_identifier,
  [17525] = 1,
    ACTIONS(1535), 1,
      anon_sym_EQ,
  [17529] = 1,
    ACTIONS(1537), 1,
      sym_dot_identifier,
  [17533] = 1,
    ACTIONS(1539), 1,
      anon_sym_EQ,
  [17537] = 1,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
  [17541] = 1,
    ACTIONS(1543), 1,
      sym_identifier,
  [17545] = 1,
    ACTIONS(1545), 1,
      sym_dot_identifier,
  [17549] = 1,
    ACTIONS(1547), 1,
      sym_colon_colon_uppercase_identifier,
  [17553] = 1,
    ACTIONS(1549), 1,
      sym_lowercase_identifier,
  [17557] = 1,
    ACTIONS(1551), 1,
      anon_sym_RBRACE,
  [17561] = 1,
    ACTIONS(1553), 1,
      sym_identifier,
  [17565] = 1,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
  [17569] = 1,
    ACTIONS(1555), 1,
      sym_lowercase_identifier,
  [17573] = 1,
    ACTIONS(1557), 1,
      sym_identifier,
  [17577] = 1,
    ACTIONS(1559), 1,
      anon_sym_LBRACE,
  [17581] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
  [17585] = 1,
    ACTIONS(1561), 1,
      sym_lowercase_identifier,
  [17589] = 1,
    ACTIONS(1563), 1,
      anon_sym_LBRACE,
  [17593] = 1,
    ACTIONS(1565), 1,
      anon_sym_LBRACE,
  [17597] = 1,
    ACTIONS(1567), 1,
      anon_sym_LBRACE,
  [17601] = 1,
    ACTIONS(1569), 1,
      anon_sym_RBRACK,
  [17605] = 1,
    ACTIONS(1571), 1,
      anon_sym_EQ,
  [17609] = 1,
    ACTIONS(1573), 1,
      sym_colon_colon_lowercase_identifier,
  [17613] = 1,
    ACTIONS(1575), 1,
      anon_sym_EQ,
  [17617] = 1,
    ACTIONS(1577), 1,
      sym_dot_identifier,
  [17621] = 1,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
  [17625] = 1,
    ACTIONS(1579), 1,
      anon_sym_RBRACE,
  [17629] = 1,
    ACTIONS(1581), 1,
      anon_sym_COLON_EQ,
  [17633] = 1,
    ACTIONS(1515), 1,
      anon_sym_LBRACE,
  [17637] = 1,
    ACTIONS(1517), 1,
      anon_sym_LBRACE,
  [17641] = 1,
    ACTIONS(1583), 1,
      anon_sym_LPAREN,
  [17645] = 1,
    ACTIONS(1585), 1,
      anon_sym_RBRACE,
  [17649] = 1,
    ACTIONS(1587), 1,
      anon_sym_COLON,
  [17653] = 1,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
  [17657] = 1,
    ACTIONS(1591), 1,
      sym_lowercase_identifier,
  [17661] = 1,
    ACTIONS(1593), 1,
      sym_lowercase_identifier,
  [17665] = 1,
    ACTIONS(1595), 1,
      anon_sym_readonly,
  [17669] = 1,
    ACTIONS(1597), 1,
      anon_sym_RBRACE,
  [17673] = 1,
    ACTIONS(1599), 1,
      sym_colon_colon_uppercase_identifier,
  [17677] = 1,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
  [17681] = 1,
    ACTIONS(1513), 1,
      anon_sym_EQ,
  [17685] = 1,
    ACTIONS(1529), 1,
      anon_sym_COMMA,
  [17689] = 1,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
  [17693] = 1,
    ACTIONS(1601), 1,
      anon_sym_RBRACE,
  [17697] = 1,
    ACTIONS(1603), 1,
      ts_builtin_sym_end,
  [17701] = 1,
    ACTIONS(1605), 1,
      anon_sym_RBRACE,
  [17705] = 1,
    ACTIONS(1607), 1,
      sym_identifier,
  [17709] = 1,
    ACTIONS(1609), 1,
      anon_sym_RPAREN,
  [17713] = 1,
    ACTIONS(1611), 1,
      sym_dot_identifier,
  [17717] = 1,
    ACTIONS(1613), 1,
      anon_sym_COLON,
  [17721] = 1,
    ACTIONS(1615), 1,
      sym_lowercase_identifier,
  [17725] = 1,
    ACTIONS(1617), 1,
      anon_sym_LPAREN,
  [17729] = 1,
    ACTIONS(1619), 1,
      sym_identifier,
  [17733] = 1,
    ACTIONS(1621), 1,
      sym_identifier,
  [17737] = 1,
    ACTIONS(1623), 1,
      anon_sym_LPAREN,
  [17741] = 1,
    ACTIONS(1625), 1,
      sym_identifier,
  [17745] = 1,
    ACTIONS(1627), 1,
      anon_sym_RPAREN,
  [17749] = 1,
    ACTIONS(1629), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 396,
  [SMALL_STATE(8)] = 528,
  [SMALL_STATE(9)] = 660,
  [SMALL_STATE(10)] = 792,
  [SMALL_STATE(11)] = 924,
  [SMALL_STATE(12)] = 1021,
  [SMALL_STATE(13)] = 1114,
  [SMALL_STATE(14)] = 1207,
  [SMALL_STATE(15)] = 1300,
  [SMALL_STATE(16)] = 1393,
  [SMALL_STATE(17)] = 1486,
  [SMALL_STATE(18)] = 1579,
  [SMALL_STATE(19)] = 1672,
  [SMALL_STATE(20)] = 1765,
  [SMALL_STATE(21)] = 1858,
  [SMALL_STATE(22)] = 1951,
  [SMALL_STATE(23)] = 2044,
  [SMALL_STATE(24)] = 2137,
  [SMALL_STATE(25)] = 2230,
  [SMALL_STATE(26)] = 2323,
  [SMALL_STATE(27)] = 2416,
  [SMALL_STATE(28)] = 2509,
  [SMALL_STATE(29)] = 2602,
  [SMALL_STATE(30)] = 2695,
  [SMALL_STATE(31)] = 2788,
  [SMALL_STATE(32)] = 2881,
  [SMALL_STATE(33)] = 2974,
  [SMALL_STATE(34)] = 3067,
  [SMALL_STATE(35)] = 3160,
  [SMALL_STATE(36)] = 3253,
  [SMALL_STATE(37)] = 3343,
  [SMALL_STATE(38)] = 3433,
  [SMALL_STATE(39)] = 3523,
  [SMALL_STATE(40)] = 3613,
  [SMALL_STATE(41)] = 3703,
  [SMALL_STATE(42)] = 3793,
  [SMALL_STATE(43)] = 3883,
  [SMALL_STATE(44)] = 3973,
  [SMALL_STATE(45)] = 4063,
  [SMALL_STATE(46)] = 4153,
  [SMALL_STATE(47)] = 4243,
  [SMALL_STATE(48)] = 4333,
  [SMALL_STATE(49)] = 4423,
  [SMALL_STATE(50)] = 4513,
  [SMALL_STATE(51)] = 4603,
  [SMALL_STATE(52)] = 4693,
  [SMALL_STATE(53)] = 4783,
  [SMALL_STATE(54)] = 4873,
  [SMALL_STATE(55)] = 4963,
  [SMALL_STATE(56)] = 5053,
  [SMALL_STATE(57)] = 5143,
  [SMALL_STATE(58)] = 5233,
  [SMALL_STATE(59)] = 5323,
  [SMALL_STATE(60)] = 5413,
  [SMALL_STATE(61)] = 5503,
  [SMALL_STATE(62)] = 5593,
  [SMALL_STATE(63)] = 5683,
  [SMALL_STATE(64)] = 5773,
  [SMALL_STATE(65)] = 5863,
  [SMALL_STATE(66)] = 5953,
  [SMALL_STATE(67)] = 6043,
  [SMALL_STATE(68)] = 6133,
  [SMALL_STATE(69)] = 6223,
  [SMALL_STATE(70)] = 6313,
  [SMALL_STATE(71)] = 6403,
  [SMALL_STATE(72)] = 6443,
  [SMALL_STATE(73)] = 6483,
  [SMALL_STATE(74)] = 6522,
  [SMALL_STATE(75)] = 6561,
  [SMALL_STATE(76)] = 6600,
  [SMALL_STATE(77)] = 6639,
  [SMALL_STATE(78)] = 6679,
  [SMALL_STATE(79)] = 6716,
  [SMALL_STATE(80)] = 6751,
  [SMALL_STATE(81)] = 6786,
  [SMALL_STATE(82)] = 6857,
  [SMALL_STATE(83)] = 6900,
  [SMALL_STATE(84)] = 6941,
  [SMALL_STATE(85)] = 6975,
  [SMALL_STATE(86)] = 7009,
  [SMALL_STATE(87)] = 7043,
  [SMALL_STATE(88)] = 7111,
  [SMALL_STATE(89)] = 7179,
  [SMALL_STATE(90)] = 7247,
  [SMALL_STATE(91)] = 7281,
  [SMALL_STATE(92)] = 7315,
  [SMALL_STATE(93)] = 7349,
  [SMALL_STATE(94)] = 7383,
  [SMALL_STATE(95)] = 7417,
  [SMALL_STATE(96)] = 7457,
  [SMALL_STATE(97)] = 7493,
  [SMALL_STATE(98)] = 7529,
  [SMALL_STATE(99)] = 7573,
  [SMALL_STATE(100)] = 7621,
  [SMALL_STATE(101)] = 7689,
  [SMALL_STATE(102)] = 7739,
  [SMALL_STATE(103)] = 7773,
  [SMALL_STATE(104)] = 7807,
  [SMALL_STATE(105)] = 7841,
  [SMALL_STATE(106)] = 7875,
  [SMALL_STATE(107)] = 7911,
  [SMALL_STATE(108)] = 7979,
  [SMALL_STATE(109)] = 8013,
  [SMALL_STATE(110)] = 8047,
  [SMALL_STATE(111)] = 8081,
  [SMALL_STATE(112)] = 8115,
  [SMALL_STATE(113)] = 8149,
  [SMALL_STATE(114)] = 8183,
  [SMALL_STATE(115)] = 8217,
  [SMALL_STATE(116)] = 8251,
  [SMALL_STATE(117)] = 8285,
  [SMALL_STATE(118)] = 8353,
  [SMALL_STATE(119)] = 8387,
  [SMALL_STATE(120)] = 8421,
  [SMALL_STATE(121)] = 8455,
  [SMALL_STATE(122)] = 8489,
  [SMALL_STATE(123)] = 8523,
  [SMALL_STATE(124)] = 8557,
  [SMALL_STATE(125)] = 8591,
  [SMALL_STATE(126)] = 8625,
  [SMALL_STATE(127)] = 8659,
  [SMALL_STATE(128)] = 8693,
  [SMALL_STATE(129)] = 8727,
  [SMALL_STATE(130)] = 8761,
  [SMALL_STATE(131)] = 8795,
  [SMALL_STATE(132)] = 8829,
  [SMALL_STATE(133)] = 8863,
  [SMALL_STATE(134)] = 8931,
  [SMALL_STATE(135)] = 8965,
  [SMALL_STATE(136)] = 9000,
  [SMALL_STATE(137)] = 9035,
  [SMALL_STATE(138)] = 9072,
  [SMALL_STATE(139)] = 9134,
  [SMALL_STATE(140)] = 9196,
  [SMALL_STATE(141)] = 9258,
  [SMALL_STATE(142)] = 9320,
  [SMALL_STATE(143)] = 9382,
  [SMALL_STATE(144)] = 9444,
  [SMALL_STATE(145)] = 9478,
  [SMALL_STATE(146)] = 9512,
  [SMALL_STATE(147)] = 9544,
  [SMALL_STATE(148)] = 9576,
  [SMALL_STATE(149)] = 9616,
  [SMALL_STATE(150)] = 9678,
  [SMALL_STATE(151)] = 9710,
  [SMALL_STATE(152)] = 9741,
  [SMALL_STATE(153)] = 9778,
  [SMALL_STATE(154)] = 9809,
  [SMALL_STATE(155)] = 9842,
  [SMALL_STATE(156)] = 9875,
  [SMALL_STATE(157)] = 9910,
  [SMALL_STATE(158)] = 9941,
  [SMALL_STATE(159)] = 9972,
  [SMALL_STATE(160)] = 10003,
  [SMALL_STATE(161)] = 10034,
  [SMALL_STATE(162)] = 10065,
  [SMALL_STATE(163)] = 10124,
  [SMALL_STATE(164)] = 10155,
  [SMALL_STATE(165)] = 10186,
  [SMALL_STATE(166)] = 10217,
  [SMALL_STATE(167)] = 10256,
  [SMALL_STATE(168)] = 10287,
  [SMALL_STATE(169)] = 10318,
  [SMALL_STATE(170)] = 10351,
  [SMALL_STATE(171)] = 10382,
  [SMALL_STATE(172)] = 10413,
  [SMALL_STATE(173)] = 10454,
  [SMALL_STATE(174)] = 10485,
  [SMALL_STATE(175)] = 10516,
  [SMALL_STATE(176)] = 10559,
  [SMALL_STATE(177)] = 10590,
  [SMALL_STATE(178)] = 10621,
  [SMALL_STATE(179)] = 10652,
  [SMALL_STATE(180)] = 10683,
  [SMALL_STATE(181)] = 10714,
  [SMALL_STATE(182)] = 10745,
  [SMALL_STATE(183)] = 10776,
  [SMALL_STATE(184)] = 10807,
  [SMALL_STATE(185)] = 10838,
  [SMALL_STATE(186)] = 10897,
  [SMALL_STATE(187)] = 10928,
  [SMALL_STATE(188)] = 10959,
  [SMALL_STATE(189)] = 10990,
  [SMALL_STATE(190)] = 11021,
  [SMALL_STATE(191)] = 11080,
  [SMALL_STATE(192)] = 11139,
  [SMALL_STATE(193)] = 11170,
  [SMALL_STATE(194)] = 11201,
  [SMALL_STATE(195)] = 11232,
  [SMALL_STATE(196)] = 11291,
  [SMALL_STATE(197)] = 11334,
  [SMALL_STATE(198)] = 11365,
  [SMALL_STATE(199)] = 11396,
  [SMALL_STATE(200)] = 11427,
  [SMALL_STATE(201)] = 11458,
  [SMALL_STATE(202)] = 11517,
  [SMALL_STATE(203)] = 11576,
  [SMALL_STATE(204)] = 11607,
  [SMALL_STATE(205)] = 11650,
  [SMALL_STATE(206)] = 11681,
  [SMALL_STATE(207)] = 11712,
  [SMALL_STATE(208)] = 11743,
  [SMALL_STATE(209)] = 11774,
  [SMALL_STATE(210)] = 11805,
  [SMALL_STATE(211)] = 11835,
  [SMALL_STATE(212)] = 11875,
  [SMALL_STATE(213)] = 11915,
  [SMALL_STATE(214)] = 11970,
  [SMALL_STATE(215)] = 12025,
  [SMALL_STATE(216)] = 12077,
  [SMALL_STATE(217)] = 12129,
  [SMALL_STATE(218)] = 12173,
  [SMALL_STATE(219)] = 12217,
  [SMALL_STATE(220)] = 12269,
  [SMALL_STATE(221)] = 12313,
  [SMALL_STATE(222)] = 12357,
  [SMALL_STATE(223)] = 12409,
  [SMALL_STATE(224)] = 12453,
  [SMALL_STATE(225)] = 12497,
  [SMALL_STATE(226)] = 12541,
  [SMALL_STATE(227)] = 12589,
  [SMALL_STATE(228)] = 12633,
  [SMALL_STATE(229)] = 12685,
  [SMALL_STATE(230)] = 12729,
  [SMALL_STATE(231)] = 12781,
  [SMALL_STATE(232)] = 12825,
  [SMALL_STATE(233)] = 12869,
  [SMALL_STATE(234)] = 12913,
  [SMALL_STATE(235)] = 12960,
  [SMALL_STATE(236)] = 13009,
  [SMALL_STATE(237)] = 13058,
  [SMALL_STATE(238)] = 13104,
  [SMALL_STATE(239)] = 13150,
  [SMALL_STATE(240)] = 13193,
  [SMALL_STATE(241)] = 13241,
  [SMALL_STATE(242)] = 13289,
  [SMALL_STATE(243)] = 13311,
  [SMALL_STATE(244)] = 13330,
  [SMALL_STATE(245)] = 13348,
  [SMALL_STATE(246)] = 13376,
  [SMALL_STATE(247)] = 13404,
  [SMALL_STATE(248)] = 13432,
  [SMALL_STATE(249)] = 13460,
  [SMALL_STATE(250)] = 13488,
  [SMALL_STATE(251)] = 13516,
  [SMALL_STATE(252)] = 13544,
  [SMALL_STATE(253)] = 13572,
  [SMALL_STATE(254)] = 13600,
  [SMALL_STATE(255)] = 13628,
  [SMALL_STATE(256)] = 13656,
  [SMALL_STATE(257)] = 13674,
  [SMALL_STATE(258)] = 13702,
  [SMALL_STATE(259)] = 13730,
  [SMALL_STATE(260)] = 13758,
  [SMALL_STATE(261)] = 13786,
  [SMALL_STATE(262)] = 13814,
  [SMALL_STATE(263)] = 13842,
  [SMALL_STATE(264)] = 13867,
  [SMALL_STATE(265)] = 13882,
  [SMALL_STATE(266)] = 13907,
  [SMALL_STATE(267)] = 13932,
  [SMALL_STATE(268)] = 13957,
  [SMALL_STATE(269)] = 13982,
  [SMALL_STATE(270)] = 13997,
  [SMALL_STATE(271)] = 14022,
  [SMALL_STATE(272)] = 14037,
  [SMALL_STATE(273)] = 14062,
  [SMALL_STATE(274)] = 14077,
  [SMALL_STATE(275)] = 14102,
  [SMALL_STATE(276)] = 14127,
  [SMALL_STATE(277)] = 14142,
  [SMALL_STATE(278)] = 14167,
  [SMALL_STATE(279)] = 14182,
  [SMALL_STATE(280)] = 14207,
  [SMALL_STATE(281)] = 14232,
  [SMALL_STATE(282)] = 14247,
  [SMALL_STATE(283)] = 14272,
  [SMALL_STATE(284)] = 14287,
  [SMALL_STATE(285)] = 14312,
  [SMALL_STATE(286)] = 14337,
  [SMALL_STATE(287)] = 14362,
  [SMALL_STATE(288)] = 14387,
  [SMALL_STATE(289)] = 14402,
  [SMALL_STATE(290)] = 14417,
  [SMALL_STATE(291)] = 14432,
  [SMALL_STATE(292)] = 14447,
  [SMALL_STATE(293)] = 14472,
  [SMALL_STATE(294)] = 14497,
  [SMALL_STATE(295)] = 14512,
  [SMALL_STATE(296)] = 14527,
  [SMALL_STATE(297)] = 14552,
  [SMALL_STATE(298)] = 14567,
  [SMALL_STATE(299)] = 14592,
  [SMALL_STATE(300)] = 14609,
  [SMALL_STATE(301)] = 14621,
  [SMALL_STATE(302)] = 14649,
  [SMALL_STATE(303)] = 14661,
  [SMALL_STATE(304)] = 14673,
  [SMALL_STATE(305)] = 14701,
  [SMALL_STATE(306)] = 14726,
  [SMALL_STATE(307)] = 14751,
  [SMALL_STATE(308)] = 14776,
  [SMALL_STATE(309)] = 14801,
  [SMALL_STATE(310)] = 14826,
  [SMALL_STATE(311)] = 14843,
  [SMALL_STATE(312)] = 14868,
  [SMALL_STATE(313)] = 14893,
  [SMALL_STATE(314)] = 14918,
  [SMALL_STATE(315)] = 14943,
  [SMALL_STATE(316)] = 14968,
  [SMALL_STATE(317)] = 14993,
  [SMALL_STATE(318)] = 15018,
  [SMALL_STATE(319)] = 15040,
  [SMALL_STATE(320)] = 15062,
  [SMALL_STATE(321)] = 15076,
  [SMALL_STATE(322)] = 15098,
  [SMALL_STATE(323)] = 15118,
  [SMALL_STATE(324)] = 15138,
  [SMALL_STATE(325)] = 15149,
  [SMALL_STATE(326)] = 15160,
  [SMALL_STATE(327)] = 15171,
  [SMALL_STATE(328)] = 15184,
  [SMALL_STATE(329)] = 15195,
  [SMALL_STATE(330)] = 15212,
  [SMALL_STATE(331)] = 15226,
  [SMALL_STATE(332)] = 15234,
  [SMALL_STATE(333)] = 15250,
  [SMALL_STATE(334)] = 15258,
  [SMALL_STATE(335)] = 15274,
  [SMALL_STATE(336)] = 15282,
  [SMALL_STATE(337)] = 15294,
  [SMALL_STATE(338)] = 15310,
  [SMALL_STATE(339)] = 15326,
  [SMALL_STATE(340)] = 15340,
  [SMALL_STATE(341)] = 15356,
  [SMALL_STATE(342)] = 15364,
  [SMALL_STATE(343)] = 15372,
  [SMALL_STATE(344)] = 15386,
  [SMALL_STATE(345)] = 15394,
  [SMALL_STATE(346)] = 15410,
  [SMALL_STATE(347)] = 15424,
  [SMALL_STATE(348)] = 15438,
  [SMALL_STATE(349)] = 15446,
  [SMALL_STATE(350)] = 15462,
  [SMALL_STATE(351)] = 15470,
  [SMALL_STATE(352)] = 15478,
  [SMALL_STATE(353)] = 15492,
  [SMALL_STATE(354)] = 15506,
  [SMALL_STATE(355)] = 15518,
  [SMALL_STATE(356)] = 15534,
  [SMALL_STATE(357)] = 15544,
  [SMALL_STATE(358)] = 15552,
  [SMALL_STATE(359)] = 15566,
  [SMALL_STATE(360)] = 15574,
  [SMALL_STATE(361)] = 15582,
  [SMALL_STATE(362)] = 15598,
  [SMALL_STATE(363)] = 15614,
  [SMALL_STATE(364)] = 15630,
  [SMALL_STATE(365)] = 15638,
  [SMALL_STATE(366)] = 15654,
  [SMALL_STATE(367)] = 15662,
  [SMALL_STATE(368)] = 15678,
  [SMALL_STATE(369)] = 15694,
  [SMALL_STATE(370)] = 15708,
  [SMALL_STATE(371)] = 15724,
  [SMALL_STATE(372)] = 15738,
  [SMALL_STATE(373)] = 15752,
  [SMALL_STATE(374)] = 15768,
  [SMALL_STATE(375)] = 15776,
  [SMALL_STATE(376)] = 15787,
  [SMALL_STATE(377)] = 15798,
  [SMALL_STATE(378)] = 15811,
  [SMALL_STATE(379)] = 15824,
  [SMALL_STATE(380)] = 15837,
  [SMALL_STATE(381)] = 15848,
  [SMALL_STATE(382)] = 15859,
  [SMALL_STATE(383)] = 15872,
  [SMALL_STATE(384)] = 15885,
  [SMALL_STATE(385)] = 15896,
  [SMALL_STATE(386)] = 15903,
  [SMALL_STATE(387)] = 15914,
  [SMALL_STATE(388)] = 15927,
  [SMALL_STATE(389)] = 15938,
  [SMALL_STATE(390)] = 15949,
  [SMALL_STATE(391)] = 15960,
  [SMALL_STATE(392)] = 15971,
  [SMALL_STATE(393)] = 15982,
  [SMALL_STATE(394)] = 15989,
  [SMALL_STATE(395)] = 15998,
  [SMALL_STATE(396)] = 16007,
  [SMALL_STATE(397)] = 16016,
  [SMALL_STATE(398)] = 16029,
  [SMALL_STATE(399)] = 16042,
  [SMALL_STATE(400)] = 16051,
  [SMALL_STATE(401)] = 16062,
  [SMALL_STATE(402)] = 16075,
  [SMALL_STATE(403)] = 16088,
  [SMALL_STATE(404)] = 16095,
  [SMALL_STATE(405)] = 16106,
  [SMALL_STATE(406)] = 16117,
  [SMALL_STATE(407)] = 16130,
  [SMALL_STATE(408)] = 16141,
  [SMALL_STATE(409)] = 16152,
  [SMALL_STATE(410)] = 16163,
  [SMALL_STATE(411)] = 16173,
  [SMALL_STATE(412)] = 16181,
  [SMALL_STATE(413)] = 16191,
  [SMALL_STATE(414)] = 16201,
  [SMALL_STATE(415)] = 16211,
  [SMALL_STATE(416)] = 16221,
  [SMALL_STATE(417)] = 16227,
  [SMALL_STATE(418)] = 16237,
  [SMALL_STATE(419)] = 16247,
  [SMALL_STATE(420)] = 16255,
  [SMALL_STATE(421)] = 16261,
  [SMALL_STATE(422)] = 16271,
  [SMALL_STATE(423)] = 16281,
  [SMALL_STATE(424)] = 16291,
  [SMALL_STATE(425)] = 16299,
  [SMALL_STATE(426)] = 16309,
  [SMALL_STATE(427)] = 16319,
  [SMALL_STATE(428)] = 16327,
  [SMALL_STATE(429)] = 16337,
  [SMALL_STATE(430)] = 16347,
  [SMALL_STATE(431)] = 16355,
  [SMALL_STATE(432)] = 16365,
  [SMALL_STATE(433)] = 16375,
  [SMALL_STATE(434)] = 16383,
  [SMALL_STATE(435)] = 16391,
  [SMALL_STATE(436)] = 16399,
  [SMALL_STATE(437)] = 16407,
  [SMALL_STATE(438)] = 16413,
  [SMALL_STATE(439)] = 16423,
  [SMALL_STATE(440)] = 16433,
  [SMALL_STATE(441)] = 16443,
  [SMALL_STATE(442)] = 16451,
  [SMALL_STATE(443)] = 16461,
  [SMALL_STATE(444)] = 16469,
  [SMALL_STATE(445)] = 16477,
  [SMALL_STATE(446)] = 16487,
  [SMALL_STATE(447)] = 16497,
  [SMALL_STATE(448)] = 16507,
  [SMALL_STATE(449)] = 16517,
  [SMALL_STATE(450)] = 16525,
  [SMALL_STATE(451)] = 16535,
  [SMALL_STATE(452)] = 16545,
  [SMALL_STATE(453)] = 16551,
  [SMALL_STATE(454)] = 16559,
  [SMALL_STATE(455)] = 16565,
  [SMALL_STATE(456)] = 16573,
  [SMALL_STATE(457)] = 16583,
  [SMALL_STATE(458)] = 16593,
  [SMALL_STATE(459)] = 16603,
  [SMALL_STATE(460)] = 16613,
  [SMALL_STATE(461)] = 16623,
  [SMALL_STATE(462)] = 16633,
  [SMALL_STATE(463)] = 16643,
  [SMALL_STATE(464)] = 16653,
  [SMALL_STATE(465)] = 16661,
  [SMALL_STATE(466)] = 16671,
  [SMALL_STATE(467)] = 16679,
  [SMALL_STATE(468)] = 16687,
  [SMALL_STATE(469)] = 16695,
  [SMALL_STATE(470)] = 16705,
  [SMALL_STATE(471)] = 16715,
  [SMALL_STATE(472)] = 16725,
  [SMALL_STATE(473)] = 16735,
  [SMALL_STATE(474)] = 16745,
  [SMALL_STATE(475)] = 16753,
  [SMALL_STATE(476)] = 16763,
  [SMALL_STATE(477)] = 16769,
  [SMALL_STATE(478)] = 16777,
  [SMALL_STATE(479)] = 16785,
  [SMALL_STATE(480)] = 16795,
  [SMALL_STATE(481)] = 16805,
  [SMALL_STATE(482)] = 16813,
  [SMALL_STATE(483)] = 16821,
  [SMALL_STATE(484)] = 16829,
  [SMALL_STATE(485)] = 16837,
  [SMALL_STATE(486)] = 16845,
  [SMALL_STATE(487)] = 16855,
  [SMALL_STATE(488)] = 16865,
  [SMALL_STATE(489)] = 16873,
  [SMALL_STATE(490)] = 16883,
  [SMALL_STATE(491)] = 16891,
  [SMALL_STATE(492)] = 16901,
  [SMALL_STATE(493)] = 16909,
  [SMALL_STATE(494)] = 16919,
  [SMALL_STATE(495)] = 16927,
  [SMALL_STATE(496)] = 16935,
  [SMALL_STATE(497)] = 16943,
  [SMALL_STATE(498)] = 16951,
  [SMALL_STATE(499)] = 16959,
  [SMALL_STATE(500)] = 16967,
  [SMALL_STATE(501)] = 16975,
  [SMALL_STATE(502)] = 16985,
  [SMALL_STATE(503)] = 16995,
  [SMALL_STATE(504)] = 17003,
  [SMALL_STATE(505)] = 17009,
  [SMALL_STATE(506)] = 17017,
  [SMALL_STATE(507)] = 17025,
  [SMALL_STATE(508)] = 17035,
  [SMALL_STATE(509)] = 17045,
  [SMALL_STATE(510)] = 17053,
  [SMALL_STATE(511)] = 17063,
  [SMALL_STATE(512)] = 17069,
  [SMALL_STATE(513)] = 17077,
  [SMALL_STATE(514)] = 17083,
  [SMALL_STATE(515)] = 17091,
  [SMALL_STATE(516)] = 17099,
  [SMALL_STATE(517)] = 17107,
  [SMALL_STATE(518)] = 17117,
  [SMALL_STATE(519)] = 17125,
  [SMALL_STATE(520)] = 17135,
  [SMALL_STATE(521)] = 17143,
  [SMALL_STATE(522)] = 17153,
  [SMALL_STATE(523)] = 17159,
  [SMALL_STATE(524)] = 17167,
  [SMALL_STATE(525)] = 17175,
  [SMALL_STATE(526)] = 17185,
  [SMALL_STATE(527)] = 17193,
  [SMALL_STATE(528)] = 17201,
  [SMALL_STATE(529)] = 17211,
  [SMALL_STATE(530)] = 17221,
  [SMALL_STATE(531)] = 17229,
  [SMALL_STATE(532)] = 17239,
  [SMALL_STATE(533)] = 17247,
  [SMALL_STATE(534)] = 17255,
  [SMALL_STATE(535)] = 17263,
  [SMALL_STATE(536)] = 17273,
  [SMALL_STATE(537)] = 17281,
  [SMALL_STATE(538)] = 17289,
  [SMALL_STATE(539)] = 17297,
  [SMALL_STATE(540)] = 17307,
  [SMALL_STATE(541)] = 17317,
  [SMALL_STATE(542)] = 17327,
  [SMALL_STATE(543)] = 17334,
  [SMALL_STATE(544)] = 17341,
  [SMALL_STATE(545)] = 17348,
  [SMALL_STATE(546)] = 17353,
  [SMALL_STATE(547)] = 17360,
  [SMALL_STATE(548)] = 17365,
  [SMALL_STATE(549)] = 17372,
  [SMALL_STATE(550)] = 17379,
  [SMALL_STATE(551)] = 17386,
  [SMALL_STATE(552)] = 17391,
  [SMALL_STATE(553)] = 17396,
  [SMALL_STATE(554)] = 17403,
  [SMALL_STATE(555)] = 17410,
  [SMALL_STATE(556)] = 17417,
  [SMALL_STATE(557)] = 17424,
  [SMALL_STATE(558)] = 17429,
  [SMALL_STATE(559)] = 17434,
  [SMALL_STATE(560)] = 17441,
  [SMALL_STATE(561)] = 17448,
  [SMALL_STATE(562)] = 17453,
  [SMALL_STATE(563)] = 17460,
  [SMALL_STATE(564)] = 17467,
  [SMALL_STATE(565)] = 17474,
  [SMALL_STATE(566)] = 17481,
  [SMALL_STATE(567)] = 17488,
  [SMALL_STATE(568)] = 17495,
  [SMALL_STATE(569)] = 17502,
  [SMALL_STATE(570)] = 17507,
  [SMALL_STATE(571)] = 17514,
  [SMALL_STATE(572)] = 17521,
  [SMALL_STATE(573)] = 17525,
  [SMALL_STATE(574)] = 17529,
  [SMALL_STATE(575)] = 17533,
  [SMALL_STATE(576)] = 17537,
  [SMALL_STATE(577)] = 17541,
  [SMALL_STATE(578)] = 17545,
  [SMALL_STATE(579)] = 17549,
  [SMALL_STATE(580)] = 17553,
  [SMALL_STATE(581)] = 17557,
  [SMALL_STATE(582)] = 17561,
  [SMALL_STATE(583)] = 17565,
  [SMALL_STATE(584)] = 17569,
  [SMALL_STATE(585)] = 17573,
  [SMALL_STATE(586)] = 17577,
  [SMALL_STATE(587)] = 17581,
  [SMALL_STATE(588)] = 17585,
  [SMALL_STATE(589)] = 17589,
  [SMALL_STATE(590)] = 17593,
  [SMALL_STATE(591)] = 17597,
  [SMALL_STATE(592)] = 17601,
  [SMALL_STATE(593)] = 17605,
  [SMALL_STATE(594)] = 17609,
  [SMALL_STATE(595)] = 17613,
  [SMALL_STATE(596)] = 17617,
  [SMALL_STATE(597)] = 17621,
  [SMALL_STATE(598)] = 17625,
  [SMALL_STATE(599)] = 17629,
  [SMALL_STATE(600)] = 17633,
  [SMALL_STATE(601)] = 17637,
  [SMALL_STATE(602)] = 17641,
  [SMALL_STATE(603)] = 17645,
  [SMALL_STATE(604)] = 17649,
  [SMALL_STATE(605)] = 17653,
  [SMALL_STATE(606)] = 17657,
  [SMALL_STATE(607)] = 17661,
  [SMALL_STATE(608)] = 17665,
  [SMALL_STATE(609)] = 17669,
  [SMALL_STATE(610)] = 17673,
  [SMALL_STATE(611)] = 17677,
  [SMALL_STATE(612)] = 17681,
  [SMALL_STATE(613)] = 17685,
  [SMALL_STATE(614)] = 17689,
  [SMALL_STATE(615)] = 17693,
  [SMALL_STATE(616)] = 17697,
  [SMALL_STATE(617)] = 17701,
  [SMALL_STATE(618)] = 17705,
  [SMALL_STATE(619)] = 17709,
  [SMALL_STATE(620)] = 17713,
  [SMALL_STATE(621)] = 17717,
  [SMALL_STATE(622)] = 17721,
  [SMALL_STATE(623)] = 17725,
  [SMALL_STATE(624)] = 17729,
  [SMALL_STATE(625)] = 17733,
  [SMALL_STATE(626)] = 17737,
  [SMALL_STATE(627)] = 17741,
  [SMALL_STATE(628)] = 17745,
  [SMALL_STATE(629)] = 17749,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(135),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(185),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(145),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(207),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(203),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(198),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(508),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(59),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(501),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(30),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(68),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(67),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(500),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(607),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(56),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(197),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(300),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(620),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_expression_pun, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_pattern, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expression, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expression, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 7),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 7),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_expression, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_expression, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 6),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 6),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 4),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(294),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(195),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(329),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(76),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(75),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(489),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(81),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(74),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(300),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(596),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_expression, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_expression, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access_expression, 4),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access_expression, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_expression, 5),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_expression, 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 5),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 5),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_expression, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_expression, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 6),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 6),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 5),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 5),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 5),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_value, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 5),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 5),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_expression, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_expression, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 5),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 4),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 5),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 6),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 6),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(341),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(310),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(627),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(625),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(624),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(622),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(332),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(618),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 7),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 7),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 6),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 6),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 2),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 4),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 6),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 6),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_pattern, 5),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_pattern, 5),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 5),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 5),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 1),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_pattern, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 5),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 5),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_pattern, 3),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_pattern, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [884] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(629),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(341),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(389),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(588),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pub, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(350),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(300),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(596),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 1),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 3),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 3),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 2),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 2),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 2),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 4),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 1),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 7),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 7),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 4),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 4),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2), SHIFT_REPEAT(162),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 5),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 5),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pub_attribute, 3),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 5),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 3),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 3),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 6),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 6),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2), SHIFT_REPEAT(49),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(382),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 1),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 1),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2),
  [1112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2), SHIFT_REPEAT(274),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern_pun, 1),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 1),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(390),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2), SHIFT_REPEAT(380),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(412),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item, 1),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item, 1),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 5),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 5),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(566),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 5),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 5),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 5),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 5),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 6),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 6),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 7),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2),
  [1271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2), SHIFT_REPEAT(386),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filed_single_pattern, 1),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 4),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 4),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 4),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 4),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 8),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 8),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any, 1),
  [1352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 6),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retuern_type, 2),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retuern_type, 2),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 5),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [1392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [1428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 3),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression_pun, 1),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [1446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [1460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 3),
  [1472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 3),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [1476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [1488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(543),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 4),
  [1495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 4),
  [1497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 4),
  [1501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 4),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [1509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 6),
  [1511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_expression, 1),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 1),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 4),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1603] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
