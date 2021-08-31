/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTATIC_TAB_H_INCLUDED
# define YY_YY_SINTATIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    LIST = 260,                    /* LIST  */
    NIL = 261,                     /* NIL  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    FOR = 264,                     /* FOR  */
    RETURN = 265,                  /* RETURN  */
    READ = 266,                    /* READ  */
    WRITE = 267,                   /* WRITE  */
    WRITELN = 268,                 /* WRITELN  */
    SUM_OP = 269,                  /* SUM_OP  */
    SUB_OP = 270,                  /* SUB_OP  */
    MULT_OP = 271,                 /* MULT_OP  */
    DIV_OP = 272,                  /* DIV_OP  */
    LIST_HEADER = 273,             /* LIST_HEADER  */
    LIST_CONSTRUCTOR = 274,        /* LIST_CONSTRUCTOR  */
    LIST_TAIL = 275,               /* LIST_TAIL  */
    LIST_MAP = 276,                /* LIST_MAP  */
    LIST_FILTER = 277,             /* LIST_FILTER  */
    EXC_OP = 278,                  /* EXC_OP  */
    OR_OP = 279,                   /* OR_OP  */
    AND_OP = 280,                  /* AND_OP  */
    EQUAL_OP = 281,                /* EQUAL_OP  */
    DIFF_OP = 282,                 /* DIFF_OP  */
    LST_OP = 283,                  /* LST_OP  */
    GRT_OP = 284,                  /* GRT_OP  */
    LST_EQ_OP = 285,               /* LST_EQ_OP  */
    GRT_EQ_OP = 286,               /* GRT_EQ_OP  */
    ASSIGN_OP = 287,               /* ASSIGN_OP  */
    L_PAREN = 288,                 /* L_PAREN  */
    R_PAREN = 289,                 /* R_PAREN  */
    L_BRACE = 290,                 /* L_BRACE  */
    R_BRACE = 291,                 /* R_BRACE  */
    SEMI = 292,                    /* SEMI  */
    COMMA = 293,                   /* COMMA  */
    REFFER = 294,                  /* REFFER  */
    ID = 295,                      /* ID  */
    INT_CONST = 296,               /* INT_CONST  */
    FLOAT_CONST = 297,             /* FLOAT_CONST  */
    STRING = 298,                  /* STRING  */
    CHAR = 299                     /* CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 29 "src/sintatic.y"
union token
{
#line 29 "src/sintatic.y"

 char name[100];
 struct tree_element* element;

#line 114 "sintatic.tab.h"

};
#line 29 "src/sintatic.y"
typedef union token YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATIC_TAB_H_INCLUDED  */
