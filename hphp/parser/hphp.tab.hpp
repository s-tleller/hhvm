/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
#ifndef YYTOKEN_MAP
#define YYTOKEN_MAP enum yytokentype
#define YYTOKEN(num, name) name = num,
#endif
   YYTOKEN_MAP {
     YYTOKEN(258, T_REQUIRE_ONCE)
     YYTOKEN(259, T_REQUIRE)
     YYTOKEN(260, T_EVAL)
     YYTOKEN(261, T_INCLUDE_ONCE)
     YYTOKEN(262, T_INCLUDE)
     YYTOKEN(263, T_LAMBDA_ARROW)
     YYTOKEN(264, T_LOGICAL_OR)
     YYTOKEN(265, T_LOGICAL_XOR)
     YYTOKEN(266, T_LOGICAL_AND)
     YYTOKEN(267, T_PRINT)
     YYTOKEN(268, T_SR_EQUAL)
     YYTOKEN(269, T_SL_EQUAL)
     YYTOKEN(270, T_XOR_EQUAL)
     YYTOKEN(271, T_OR_EQUAL)
     YYTOKEN(272, T_AND_EQUAL)
     YYTOKEN(273, T_MOD_EQUAL)
     YYTOKEN(274, T_CONCAT_EQUAL)
     YYTOKEN(275, T_DIV_EQUAL)
     YYTOKEN(276, T_MUL_EQUAL)
     YYTOKEN(277, T_MINUS_EQUAL)
     YYTOKEN(278, T_PLUS_EQUAL)
     YYTOKEN(279, T_BOOLEAN_OR)
     YYTOKEN(280, T_BOOLEAN_AND)
     YYTOKEN(281, T_IS_NOT_IDENTICAL)
     YYTOKEN(282, T_IS_IDENTICAL)
     YYTOKEN(283, T_IS_NOT_EQUAL)
     YYTOKEN(284, T_IS_EQUAL)
     YYTOKEN(285, T_IS_GREATER_OR_EQUAL)
     YYTOKEN(286, T_IS_SMALLER_OR_EQUAL)
     YYTOKEN(287, T_SR)
     YYTOKEN(288, T_SL)
     YYTOKEN(289, T_INSTANCEOF)
     YYTOKEN(290, T_UNSET_CAST)
     YYTOKEN(291, T_BOOL_CAST)
     YYTOKEN(292, T_OBJECT_CAST)
     YYTOKEN(293, T_ARRAY_CAST)
     YYTOKEN(294, T_STRING_CAST)
     YYTOKEN(295, T_DOUBLE_CAST)
     YYTOKEN(296, T_INT_CAST)
     YYTOKEN(297, T_DEC)
     YYTOKEN(298, T_INC)
     YYTOKEN(299, T_CLONE)
     YYTOKEN(300, T_NEW)
     YYTOKEN(301, T_EXIT)
     YYTOKEN(302, T_IF)
     YYTOKEN(303, T_ELSEIF)
     YYTOKEN(304, T_ELSE)
     YYTOKEN(305, T_ENDIF)
     YYTOKEN(306, T_LNUMBER)
     YYTOKEN(307, T_DNUMBER)
     YYTOKEN(308, T_STRING)
     YYTOKEN(309, T_STRING_VARNAME)
     YYTOKEN(310, T_VARIABLE)
     YYTOKEN(311, T_NUM_STRING)
     YYTOKEN(312, T_INLINE_HTML)
     YYTOKEN(313, T_CHARACTER)
     YYTOKEN(314, T_BAD_CHARACTER)
     YYTOKEN(315, T_ENCAPSED_AND_WHITESPACE)
     YYTOKEN(316, T_CONSTANT_ENCAPSED_STRING)
     YYTOKEN(317, T_ECHO)
     YYTOKEN(318, T_DO)
     YYTOKEN(319, T_WHILE)
     YYTOKEN(320, T_ENDWHILE)
     YYTOKEN(321, T_FOR)
     YYTOKEN(322, T_ENDFOR)
     YYTOKEN(323, T_FOREACH)
     YYTOKEN(324, T_ENDFOREACH)
     YYTOKEN(325, T_DECLARE)
     YYTOKEN(326, T_ENDDECLARE)
     YYTOKEN(327, T_AS)
     YYTOKEN(328, T_SWITCH)
     YYTOKEN(329, T_ENDSWITCH)
     YYTOKEN(330, T_CASE)
     YYTOKEN(331, T_DEFAULT)
     YYTOKEN(332, T_BREAK)
     YYTOKEN(333, T_GOTO)
     YYTOKEN(334, T_CONTINUE)
     YYTOKEN(335, T_FUNCTION)
     YYTOKEN(336, T_CONST)
     YYTOKEN(337, T_RETURN)
     YYTOKEN(338, T_TRY)
     YYTOKEN(339, T_CATCH)
     YYTOKEN(340, T_THROW)
     YYTOKEN(341, T_USE)
     YYTOKEN(342, T_GLOBAL)
     YYTOKEN(343, T_PUBLIC)
     YYTOKEN(344, T_PROTECTED)
     YYTOKEN(345, T_PRIVATE)
     YYTOKEN(346, T_FINAL)
     YYTOKEN(347, T_ABSTRACT)
     YYTOKEN(348, T_STATIC)
     YYTOKEN(349, T_VAR)
     YYTOKEN(350, T_UNSET)
     YYTOKEN(351, T_ISSET)
     YYTOKEN(352, T_EMPTY)
     YYTOKEN(353, T_HALT_COMPILER)
     YYTOKEN(354, T_CLASS)
     YYTOKEN(355, T_INTERFACE)
     YYTOKEN(356, T_EXTENDS)
     YYTOKEN(357, T_IMPLEMENTS)
     YYTOKEN(358, T_OBJECT_OPERATOR)
     YYTOKEN(359, T_DOUBLE_ARROW)
     YYTOKEN(360, T_LIST)
     YYTOKEN(361, T_ARRAY)
     YYTOKEN(362, T_CALLABLE)
     YYTOKEN(363, T_CLASS_C)
     YYTOKEN(364, T_METHOD_C)
     YYTOKEN(365, T_FUNC_C)
     YYTOKEN(366, T_LINE)
     YYTOKEN(367, T_FILE)
     YYTOKEN(368, T_COMMENT)
     YYTOKEN(369, T_DOC_COMMENT)
     YYTOKEN(370, T_OPEN_TAG)
     YYTOKEN(371, T_OPEN_TAG_WITH_ECHO)
     YYTOKEN(372, T_CLOSE_TAG)
     YYTOKEN(373, T_WHITESPACE)
     YYTOKEN(374, T_START_HEREDOC)
     YYTOKEN(375, T_END_HEREDOC)
     YYTOKEN(376, T_DOLLAR_OPEN_CURLY_BRACES)
     YYTOKEN(377, T_CURLY_OPEN)
     YYTOKEN(378, T_DOUBLE_COLON)
     YYTOKEN(379, T_NAMESPACE)
     YYTOKEN(380, T_NS_C)
     YYTOKEN(381, T_DIR)
     YYTOKEN(382, T_NS_SEPARATOR)
     YYTOKEN(383, T_YIELD)
     YYTOKEN(384, T_XHP_LABEL)
     YYTOKEN(385, T_XHP_TEXT)
     YYTOKEN(386, T_XHP_ATTRIBUTE)
     YYTOKEN(387, T_XHP_CATEGORY)
     YYTOKEN(388, T_XHP_CATEGORY_LABEL)
     YYTOKEN(389, T_XHP_CHILDREN)
     YYTOKEN(390, T_XHP_ENUM)
     YYTOKEN(391, T_XHP_REQUIRED)
     YYTOKEN(392, T_TRAIT)
     YYTOKEN(393, T_INSTEADOF)
     YYTOKEN(394, T_TRAIT_C)
     YYTOKEN(395, T_VARARG)
     YYTOKEN(396, T_HH_ERROR)
     YYTOKEN(397, T_FINALLY)
     YYTOKEN(398, T_XHP_TAG_LT)
     YYTOKEN(399, T_XHP_TAG_GT)
     YYTOKEN(400, T_TYPELIST_LT)
     YYTOKEN(401, T_TYPELIST_GT)
     YYTOKEN(402, T_UNRESOLVED_LT)
     YYTOKEN(403, T_COLLECTION)
     YYTOKEN(404, T_SHAPE)
     YYTOKEN(405, T_TYPE)
     YYTOKEN(406, T_UNRESOLVED_TYPE)
     YYTOKEN(407, T_NEWTYPE)
     YYTOKEN(408, T_UNRESOLVED_NEWTYPE)
     YYTOKEN(409, T_COMPILER_HALT_OFFSET)
     YYTOKEN(410, T_AWAIT)
     YYTOKEN(411, T_ASYNC)
     YYTOKEN(412, T_TUPLE)
     YYTOKEN(413, T_FROM)
     YYTOKEN(414, T_WHERE)
     YYTOKEN(415, T_JOIN)
     YYTOKEN(416, T_IN)
     YYTOKEN(417, T_ON)
     YYTOKEN(418, T_EQUALS)
     YYTOKEN(419, T_INTO)
     YYTOKEN(420, T_LET)
     YYTOKEN(421, T_ORDERBY)
     YYTOKEN(422, T_ASCENDING)
     YYTOKEN(423, T_DESCENDING)
     YYTOKEN(424, T_SELECT)
     YYTOKEN(425, T_GROUP)
     YYTOKEN(426, T_BY)
     YYTOKEN(427, T_LAMBDA_OP)
     YYTOKEN(428, T_LAMBDA_CP)
     YYTOKEN(429, T_UNRESOLVED_OP)
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



#ifndef YYTOKEN_MIN
#define YYTOKEN_MIN 258
#endif
#ifndef YYTOKEN_MAX
#define YYTOKEN_MAX 429
#endif
