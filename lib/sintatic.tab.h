/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SINTATIC_TAB_H_INCLUDED
# define YY_YY_SINTATIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    LIST = 260,
    NIL = 261,
    IF = 262,
    ELSE = 263,
    FOR = 264,
    RETURN = 265,
    READ = 266,
    WRITE = 267,
    WRITELN = 268,
    SUM_OP = 269,
    SUB_OP = 270,
    MULT_OP = 271,
    DIV_OP = 272,
    LIST_HEADER = 273,
    LIST_CONSTRUCTOR = 274,
    LIST_TAIL = 275,
    LIST_MAP = 276,
    LIST_FILTER = 277,
    EXC_OP = 278,
    OR_OP = 279,
    AND_OP = 280,
    EQUAL_OP = 281,
    DIFF_OP = 282,
    LST_OP = 283,
    GRT_OP = 284,
    LST_EQ_OP = 285,
    GRT_EQ_OP = 286,
    ASSIGN_OP = 287,
    L_PAREN = 288,
    R_PAREN = 289,
    L_BRACE = 290,
    R_BRACE = 291,
    SEMI = 292,
    COMMA = 293,
    REFFER = 294,
    ID = 295,
    INT_CONST = 296,
    FLOAT_CONST = 297,
    STRING = 298,
    CHAR = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 29 "src/sintatic.y"
union token
{
#line 29 "src/sintatic.y"

 char name[100];
 char tipo[100];

#line 108 "sintatic.tab.h"

};
#line 29 "src/sintatic.y"
typedef union token YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATIC_TAB_H_INCLUDED  */
