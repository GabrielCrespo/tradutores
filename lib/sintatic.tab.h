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
    THEN = 258,                    /* THEN  */
    OR = 259,                      /* OR  */
    AND = 260,                     /* AND  */
    NOT = 261,                     /* NOT  */
    INT = 262,                     /* INT  */
    FLOAT = 263,                   /* FLOAT  */
    LIST = 264,                    /* LIST  */
    NIL = 265,                     /* NIL  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    FOR = 268,                     /* FOR  */
    RETURN = 269,                  /* RETURN  */
    READ = 270,                    /* READ  */
    WRITE = 271,                   /* WRITE  */
    WRITELN = 272,                 /* WRITELN  */
    SUM_OP = 273,                  /* SUM_OP  */
    SUB_OP = 274,                  /* SUB_OP  */
    MULT_OP = 275,                 /* MULT_OP  */
    DIV_OP = 276,                  /* DIV_OP  */
    LIST_HEADER = 277,             /* LIST_HEADER  */
    LIST_CONSTRUCTOR = 278,        /* LIST_CONSTRUCTOR  */
    LIST_TAIL = 279,               /* LIST_TAIL  */
    LIST_MAP = 280,                /* LIST_MAP  */
    LIST_FILTER = 281,             /* LIST_FILTER  */
    EXC_OP = 282,                  /* EXC_OP  */
    OR_OP = 283,                   /* OR_OP  */
    AND_OP = 284,                  /* AND_OP  */
    EQUAL_OP = 285,                /* EQUAL_OP  */
    DIFF_OP = 286,                 /* DIFF_OP  */
    LST_OP = 287,                  /* LST_OP  */
    GRT_OP = 288,                  /* GRT_OP  */
    LST_EQ_OP = 289,               /* LST_EQ_OP  */
    GRT_EQ_OP = 290,               /* GRT_EQ_OP  */
    ASSIGN_OP = 291,               /* ASSIGN_OP  */
    L_PAREN = 292,                 /* L_PAREN  */
    R_PAREN = 293,                 /* R_PAREN  */
    L_BRACK = 294,                 /* L_BRACK  */
    R_BRACK = 295,                 /* R_BRACK  */
    SEMI = 296,                    /* SEMI  */
    COMMA = 297,                   /* COMMA  */
    REFFER = 298,                  /* REFFER  */
    ID = 299,                      /* ID  */
    INT_CONST = 300,               /* INT_CONST  */
    FLOAT_CONST = 301,             /* FLOAT_CONST  */
    STRING = 302,                  /* STRING  */
    CHAR = 303                     /* CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 30 "src/sintatic.y"
union token
{
#line 30 "src/sintatic.y"

  char* name;
  struct tree_element* element;

#line 118 "sintatic.tab.h"

};
#line 30 "src/sintatic.y"
typedef union token YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SINTATIC_TAB_H_INCLUDED  */
