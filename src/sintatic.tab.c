/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "src/sintatic.y"

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "lib/symboltable.h"
 #include "lib/ast.h"

 extern int yylex();
 extern int yylex_destroy();

 extern FILE *yyin;

 extern void yyerror(const char *tt_name);

 extern int lineno; 
 extern int column;

 int present_scope = 0;
 char result[30];

 symbol_table* table = NULL;


#line 94 "sintatic.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 197 "sintatic.tab.c"

};
#line 29 "src/sintatic.y"
typedef union token YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATIC_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  427

#define YYUNDEFTOK  2
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    89,    89,    89,    91,    91,    91,    93,
      97,   101,   101,   103,   103,   105,   107,   107,   109,   109,
     111,   115,   119,   121,   125,   127,   127,   129,   129,   129,
     129,   129,   129,   129,   131,   131,   133,   135,   137,   137,
     139,   139,   141,   143,   143,   145,   145,   145,   145,   147,
     149,   149,   151,   151,   153,   153,   155,   155,   157,   157,
     159,   159,   161,   161,   163,   163,   163,   163,   165,   165,
     165,   165,   165,   165,   167,   167,   169,   169,   171,   171,
     173,   173,   173,   173,   173,   175,   177,   179,   181,   183,
     185,   185,   187,   187,   187,   189,   189,   191,   193,   193,
     195,   195,   195,   195
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "LIST", "NIL", "IF",
  "ELSE", "FOR", "RETURN", "READ", "WRITE", "WRITELN", "SUM_OP", "SUB_OP",
  "MULT_OP", "DIV_OP", "LIST_HEADER", "LIST_CONSTRUCTOR", "LIST_TAIL",
  "LIST_MAP", "LIST_FILTER", "EXC_OP", "OR_OP", "AND_OP", "EQUAL_OP",
  "DIFF_OP", "LST_OP", "GRT_OP", "LST_EQ_OP", "GRT_EQ_OP", "ASSIGN_OP",
  "L_PAREN", "R_PAREN", "L_BRACE", "R_BRACE", "SEMI", "COMMA", "REFFER",
  "ID", "INT_CONST", "FLOAT_CONST", "STRING", "CHAR", "$accept", "program",
  "declarations", "declaration", "variable_declaration",
  "list_declaration", "function_declaration", "type_specifier",
  "parameters", "list_paremeters", "parameter",
  "variable_simple_declaration", "list_simple_declaration",
  "function_simple_declaration", "compound_statement", "list_statements",
  "statement", "conditional_statement", "iteration_statement",
  "expression_statement", "return_statement", "in_out_statement", "read",
  "write", "expression", "assign_expression", "simple_expression",
  "binary_logic_operation", "unary_logic_operation",
  "relational_expression", "arithmetic_add_expression",
  "arithmetic_mul_expression", "unary_sub_expression", "factor",
  "relational_op", "arithmetic_add_op", "arithmetic_mult_op",
  "binary_logic_op", "list_expression", "constructor", "header", "tail",
  "map", "filter", "const_expression", "function_call", "arguments",
  "list_arguments", "var", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF (-191)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-104)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     279,   172,    16,    41,    17,   899,   940,   999,  1020,  1079,
      45,   -18,   -11,    -2,  -191,  1092,    -3,    61,  1117,  1129,
      35,   491,     7,    25,    36,   728,   752,   770,  3252,  1215,
     771,     7,    85,  4047,    51,    58,    72,    63,    70,    75,
      77,   102,   422,   226,   892,  4076,  4105,  2412,  2452,  2492,
    2532,  2572,  2612,  2652,  2692,  2732,    94,   113,     6,    10,
     150,   281,   701,  6113,  1377,  4134,  4163,  4192,   166,   196,
     242,   177,   244,   303,  4221,  3380,  1244,   806,   226,    82,
    2772,   371,   112,   148,   148,   392,   329,  4250,   832,  4279,
    4308,   125,   188,   572,  1254,  2812,  2852,  2892,   122,  2932,
     489,   588,   329,    18,   438,   700,  1074,  1125,  1478,  1569,
    1704,  1723,  4337,  1569,  1960,  1998,  1569,   194,   139,   144,
     164,   169,   170,  2972,   175,   186,   205,   231,    14,    67,
     219,   240,  4366,   439,  3409,   235,   256,   812,   446,  1002,
    5874,   123,  4395,  4424,   499,   514,  3292,  1058,   280,   290,
     293,   535,  3438,   825,   946,   300,   400,  3252,   276,  3012,
     313,  3252,  3052,   310,   318,  3252,   320,   316,  1752,   226,
     226,  4975,  5004,  5033,   363,   632,  1161,  5961,  5062,  5091,
    5120,  5149,  5178,  4453,   340,   222,   755,   226,  3583,  4482,
    4511,   362,   760,   805,  6127,  5903,  4540,  4569,  4598,   111,
     217,   253,   218,   291,  4627,  3467,   682,   645,   343,   115,
      34,   226,  3496,  3612,  3641,   414,   447,   472,   679,  1179,
    5207,  3670,  3699,  3728,   455,   475,   508,   159,   581,   603,
    3757,  1016,   547,   188,   354,   367,  2036,   377,   385,   795,
    3252,  1220,   395,  1676,  1809,  1852,  1892,  1932,  1972,   406,
     409,   546,  5236,  1058,   226,  5265,  5294,  5323,   745,   782,
    2173,  5990,  5352,  5381,  5410,  5439,  5468,   425,  3092,   451,
    3132,   876,   393,   855,   226,  2040,  5497,  2040,  2040,   304,
    1273,  4656,  1036,  4685,  4714,   456,   188,   972,  1273,  2078,
    4743,  2078,  2078,   390,   462,   471,  4772,   480,   620,  1337,
    3786,   830,  3815,  3844,   510,   188,  1136,  1337,  2116,  3873,
    2116,  2116,   598,   509,   529,  2036,   566,   526,   663,   956,
     226,  1131,  1253,  1317,  1332,  1465,  1508,  1549,  1628,  1707,
     226,    82,  2012,   605,  3172,  2052,  2092,  2132,  2172,   801,
     540,  1421,  1058,  2120,  5526,  2120,  2120,   188,  3212,  5555,
    5584,   542,   903,  6019,  1660,  5613,  5642,  6064,  4801,   628,
    3525,   543,  1043,  5932,  1876,  4830,  4859,   567,   574,  4888,
    6089,  3902,   672,  3322,   545,   991,  5671,  1916,  3931,  3960,
     709,   717,  1793,   579,   548,  6093,  2387,   575,   586,  2212,
    2252,  5700,  5729,   591,   847,  6048,  1956,  5758,  5787,   675,
    5816,  4917,   599,   621,  3554,  3989,   611,   720,  3351,  2427,
    2467,   616,  3292,  1058,  5845,   619,  4946,  4018,  2507,  2292,
     618,  3292,   276,  2332,   646,  3292,  2372
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,  -191,   676,     1,  -191,  -191,   128,  -191,  -191,
     664,     0,  -191,  -191,   -20,  -161,   -46,  -136,  -101,   -66,
     -47,   -36,   -26,   -19,   -21,   -71,   -29,  1484,   606,  1454,
    1010,  1158,  1306,   798,  -167,   -34,  -155,  -156,   -49,    90,
     211,   214,   250,   261,   162,   457,  -190,  -191,   623
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    47,     8,     9,   166,    24,    25,
      26,   167,    12,    13,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   135,    59,    60,    61,    62,    63,
      64,    65,    66,    67,   109,   236,   116,   102,    68,    69,
      70,    71,    72,    73,    74,    75,   136,   137,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,     7,    29,    95,   268,    11,     7,    58,   122,   275,
     244,    76,   191,   191,    91,    81,   297,    14,   274,    18,
      27,   -13,   215,   278,   -72,    98,    19,   289,    58,   -45,
     113,    20,    27,   -46,   129,   129,   288,    21,   163,   164,
     207,   292,    28,    99,   224,   245,   -14,   -45,  -103,   120,
      16,   -72,   308,   -91,   128,   128,   -13,   299,   -72,   -72,
     -72,   307,   127,   127,   216,    30,   311,   211,   -91,    22,
      31,   133,   -91,   -19,   300,   213,   214,   315,    33,   334,
     246,   -14,   215,   351,    78,    17,   -47,   160,   163,   164,
      40,    79,    41,   343,   -22,    42,    82,   361,   -20,   247,
     154,  -102,   342,    83,   224,    43,   113,   346,    84,    80,
     248,   159,    44,    45,    46,   162,   374,    85,   155,   -19,
     249,   -90,   121,   -19,   216,   251,   243,   250,    10,    33,
     -80,    96,   156,    10,   -90,   215,    58,   110,   111,   -90,
      58,   272,   -90,   277,    58,   -80,   242,   241,    23,   -90,
      97,   393,   124,   -90,   183,   -90,    43,   224,   285,   132,
      23,   291,   138,    87,    45,    46,   184,   402,   185,   -46,
     315,   186,    -5,   199,   199,    -5,    -5,   216,   -82,   144,
     406,   187,   304,   225,   145,   -47,   310,   -46,   188,   189,
     190,   125,   126,   -82,    33,   411,   -82,   -82,   146,   312,
     278,   233,   215,   -47,    89,   181,    40,   147,    41,   148,
     292,    42,   316,   -87,   -82,   -80,   215,   117,   333,    58,
    -100,    43,    95,   311,   224,   340,    89,   345,    44,    45,
      46,   -87,   168,   -80,   -87,   215,   -81,   -83,   224,  -101,
     181,   -90,   346,   225,   216,   204,   204,    58,    89,   169,
     234,   -81,   -83,   149,   235,   230,   -90,   224,   216,   170,
     388,   -81,   -90,   -83,    89,   359,   171,   172,   173,   -99,
     215,    89,   -82,   -99,   150,    89,   244,   216,    89,   -81,
       1,   -83,     2,     3,   372,   244,   215,   -82,    95,   244,
     152,   384,   224,   293,   200,   200,   225,   201,   201,   215,
     -51,   387,    89,    89,   226,   100,   101,   227,   224,   265,
     -84,   245,   216,    58,   215,   230,   267,   -42,   -51,   277,
     245,   224,   -84,   -86,   245,   -84,   399,   -43,   216,   291,
     -44,   181,   181,   202,   202,    33,   224,   158,   -86,   181,
     -84,   216,   310,   228,   203,   203,   246,   161,   283,   181,
     -13,   424,    86,   270,   229,   246,   216,   283,   -14,   246,
     269,   345,    43,   225,   226,   247,   419,   227,   230,    87,
      45,    46,   302,   181,   247,   423,   248,   225,   247,   426,
     279,   -45,   302,   298,   420,   248,   249,   100,   101,   248,
      98,   251,   243,   250,   317,   249,   225,   -51,   328,   249,
     251,   243,   250,   228,   251,   243,   250,   318,   123,   -87,
     330,   -86,   242,   241,   229,   265,   181,   226,   331,   235,
     227,   242,   241,   265,   -87,   242,   241,   349,    33,   -86,
     -87,   225,   335,   -45,   -98,   230,   181,   181,   -98,   181,
     181,   -91,   283,   336,   -73,    86,   337,   225,   -45,   230,
     283,   283,   -45,   283,   283,    43,   228,   347,    98,   -91,
     225,   302,    87,    45,    46,   -85,   -46,   229,   230,   302,
     302,   -73,   302,   302,   -47,   225,   151,   328,   -73,   -73,
     -73,   -46,   181,   -85,   226,   -46,   328,   227,   -20,   -47,
     358,   -51,   181,   -47,   -80,   -78,   100,   101,   226,    90,
     182,   227,   367,   230,   265,   265,   -51,   265,   265,   -80,
     -51,   368,   -78,   -80,   369,   181,   181,   226,   -88,   230,
     227,    90,   -78,   228,   -23,   283,   283,   -81,   -21,   -78,
     -78,   -78,   230,   -89,   229,   182,   -88,   228,   302,   302,
     205,   205,   -81,    90,   371,   -85,   -81,   230,   229,   380,
     231,   -89,   226,   -59,   -49,   227,   228,   265,   265,    90,
     -85,   -59,   -59,   114,   115,    98,    90,   229,   226,   381,
      90,   227,   -49,    90,   391,   265,   400,   404,   207,   408,
     -59,   226,   409,   338,   227,    98,   -88,   -59,   -59,   -59,
     208,   228,   209,   -89,   -79,   210,   226,    90,    90,   227,
     -83,   -88,   229,   383,   266,   211,   134,   228,   -89,   412,
     231,   -79,   212,   213,   214,   -83,   -49,   -87,   229,   -83,
     228,   -79,   -84,   413,    98,   414,   182,   182,   -79,   -79,
     -79,   229,   -87,   416,   182,   228,   -87,   -84,   -87,   -86,
     -49,   -84,   389,   284,   182,   417,   229,    98,    88,   175,
     418,   -94,   284,   -49,   -86,   422,   -53,   -53,   -86,   -94,
     -94,   -94,   -94,   231,   -94,   403,   -50,   303,   182,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   303,   -94,   -94,
     425,    15,   -85,   -94,   175,   -94,   -94,   -94,   207,   193,
     193,    98,    88,   329,    98,     0,    77,   -85,   -50,   218,
     208,   -85,   209,   -53,   -53,   210,   -68,   131,   139,   407,
     266,   182,   415,   -50,     0,   211,   296,   -50,   266,     0,
     -50,     0,   212,   213,   214,   -53,   -53,     0,   -88,     0,
     231,   182,   182,   -68,   182,   182,   -89,   284,   -50,   -49,
     -68,   -68,   -68,   -88,   231,   284,   284,   -88,   284,   284,
       0,   -89,     0,   259,   -49,   -89,   303,     0,   -49,   218,
       0,   183,   -15,   231,   303,   303,    32,   303,   303,   100,
     101,     0,   329,     0,   -91,   271,   175,   182,   280,   -51,
       0,   329,   -51,     0,   100,   101,   -17,   182,   187,   -91,
     -17,     0,   282,   175,   -51,   281,   189,   190,   231,   266,
     266,    33,   266,   266,   -18,   -20,   -53,   -53,   -18,   -20,
     182,   182,   218,    40,   231,    41,   301,   175,    42,   -50,
     284,   284,     0,     0,   -50,   -54,   -54,   231,    43,   -53,
     -53,   207,   332,   303,   303,    44,    45,    46,   -54,   -50,
     -16,   180,   231,   208,   -16,   209,   -97,     0,   210,   -54,
     153,   -54,   266,   266,   -54,   -54,   -54,   -54,   211,   339,
     175,   207,   112,     0,   -54,   212,   213,   214,   -54,   -54,
     266,   -52,   -52,   208,     0,   209,   180,     0,   210,   218,
     352,   198,   198,     0,   -52,     0,   282,     0,   211,   350,
       0,   223,     0,   218,   362,   212,   213,   214,   -66,    -2,
     -54,   -54,     2,     3,     0,   301,   -66,   -66,   -66,   -66,
     -54,   -66,   218,   375,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,    92,    93,   175,   -52,   -52,   -66,
       0,     0,   -66,   -66,   -66,     0,   175,   -52,   112,   112,
      -4,     0,     0,    -4,    -4,   264,     0,   218,   394,   -34,
     -34,   223,   -34,   -34,   157,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -94,   218,   -34,     0,   -34,   180,   180,   -34,
     -94,   -94,   -94,   -94,     0,   276,   218,     0,   207,   -34,
       0,   -34,   -34,     0,   198,   180,   -34,   -34,   -34,   -94,
     208,   218,   209,   290,     0,   210,   -94,   -94,   -94,    -6,
       0,     0,    -6,    -6,   223,   211,   360,     0,   223,   180,
     -52,     0,   212,   213,   214,   -52,   -52,     0,   309,   259,
      -7,   -52,   -65,    -7,    -7,   -52,   -52,   -52,     0,   -52,
     -65,   -65,   -65,   -65,   327,   -65,     0,   313,   314,   -52,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   264,   180,   177,   -65,   -54,   -65,   -65,   -65,   344,
     -54,   -54,   -52,     0,   252,     0,     0,   -52,   -52,     0,
     -54,   223,   180,   180,     0,   180,   180,   -52,   198,    -8,
     -70,   253,    -8,    -8,     0,   223,   198,   198,   177,   198,
     198,   254,    -3,   195,   195,    -3,    -3,   223,   255,   256,
     257,     0,     0,   220,   223,   223,   223,   -70,   223,   223,
       0,     0,     0,   327,   -70,   -70,   -70,    -9,   180,   140,
      -9,    -9,   386,   141,     0,     0,   141,     0,   180,   -10,
       0,   -69,   -10,   -10,     0,     0,     0,   -66,     0,   223,
     264,   264,   207,   264,   264,   -66,   -66,   -66,   -66,     0,
       0,   276,   276,     0,   208,   223,   209,   261,   -69,   210,
       0,   290,   290,   220,   385,   -69,   -69,   -69,   223,   211,
     373,   -66,   -66,   -66,   309,   309,   212,   213,   214,   177,
     177,     0,     0,   223,     0,   -55,   -55,   103,   104,   105,
     106,   107,   108,   344,   344,   -55,   195,   177,   -55,     0,
       0,   178,     0,   -55,   -55,   103,   104,   105,   106,   107,
     108,   264,     0,   -55,     0,   -12,   220,   -55,   -12,   -12,
     220,   177,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   178,     0,   -33,     0,
     -33,   196,   196,   -33,   -11,     0,   324,   -11,   -11,     0,
       0,   221,     0,   -33,   -24,   -33,   -33,   -24,   -24,   -92,
     -33,   -33,   -33,   261,   177,     0,     0,   -92,   -92,   -92,
     -92,   142,     0,     0,   232,     0,     0,     0,     0,   183,
       0,     0,     0,   220,   177,   353,   -92,   354,   354,     0,
     195,     0,     0,   -92,   -92,   -92,   280,   220,   195,   363,
       0,   364,   364,     0,     0,   262,   187,     0,     0,   220,
       0,   221,     0,   281,   189,   190,   220,   220,   376,     0,
     377,   377,     0,   -93,     0,   324,     0,   178,   178,     0,
     177,   -93,   -93,   -93,   -93,     0,     0,     0,   319,     0,
     177,     0,     0,   207,   196,   178,   110,   111,     0,   179,
     -93,   220,   261,   395,     0,   396,   396,   -93,   -93,   -93,
     299,     0,     0,     0,   221,   320,     0,   220,   221,   178,
     211,     0,   321,   322,   323,     0,     0,   300,   213,   214,
     220,     0,     0,    33,   179,     0,     0,     0,     0,   197,
     197,   110,   111,     0,   325,   220,   -57,     0,     0,   222,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
      43,   262,   178,     0,   -57,     0,     0,    87,    45,    46,
       0,     0,   143,   261,     0,     0,     0,   207,     0,     0,
       0,   221,   178,   178,     0,   355,   232,     0,   196,   208,
       0,   209,     0,     0,   210,   221,   196,   196,     0,   365,
     232,     0,     0,   263,   211,   392,     0,   221,     0,   222,
       0,   212,   213,   214,   221,   221,   221,     0,   378,   232,
       0,   -58,     0,   232,     0,   179,   179,     0,   178,   -58,
     -58,   114,   115,     0,   -71,     0,     0,     0,   178,     0,
       0,     0,   197,   179,     0,     0,     0,   176,   -58,   221,
     262,   262,     0,   397,   232,   -58,   -58,   -58,     0,     0,
       0,   -71,   222,     0,   -61,   221,   222,   179,   -71,   -71,
     -71,     0,   -61,   -61,   -61,   -61,     0,   174,   221,     0,
       0,     0,   176,     0,     0,     0,     0,   194,   194,     0,
       0,   -61,   326,   221,     0,     0,     0,   219,   -61,   -61,
     -61,     0,     0,     0,     0,   -63,     0,     0,     0,   263,
     179,     0,   174,   -63,   -63,   -63,   -63,   192,   192,     0,
       0,   262,     0,     0,     0,    33,     0,   217,     0,   222,
     179,   179,   -63,   179,   356,     0,   197,     0,     0,   -63,
     -63,   -63,     0,   222,   197,   197,     0,   197,   366,     0,
       0,   260,    43,     0,     0,   222,     0,   219,     0,    87,
      45,    46,   222,   222,   222,     0,   222,   379,     0,     0,
       0,   382,     0,   176,   176,     0,   179,     0,     0,     0,
       0,   258,     0,     0,   -67,     0,   179,   217,     0,     0,
     194,   176,   -67,   -67,   -67,   -67,     0,   222,   263,   263,
       0,   263,   398,     0,   174,     0,     0,     0,     0,     0,
     219,   -67,     0,   222,   219,   176,   168,     0,   -67,   -67,
     -67,   174,     0,     0,   110,   111,   222,     0,     0,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     217,   222,     0,   170,   -27,   174,   -27,     0,     0,   -27,
     171,   172,   173,     0,     0,     0,     0,   260,   176,   -27,
     -74,   -27,   -27,   -65,     0,     0,   -27,   -27,   -27,   263,
       0,   -65,   -65,   -65,   -65,     0,     0,   219,   176,   -75,
       0,     0,     0,     0,   194,     0,     0,   -74,   174,     0,
     -65,   219,   194,     0,   -74,   -74,   -74,   -65,   -65,   -65,
       0,     0,     0,   219,     0,     0,   -75,   217,   -94,     0,
     219,   219,     0,   -75,   -75,   -75,   -94,   -94,   -94,   -94,
       0,   217,     0,     0,   176,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   176,   -94,   -94,     0,     0,     0,
     217,     0,   -94,   -94,   -94,   219,   260,     0,     0,   -60,
       0,     0,     0,     0,   174,     0,     0,   -60,   -60,   -60,
     -60,   219,   -28,   -28,   174,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   219,   217,   -60,   -28,     0,   -28,
       0,     0,   -28,   -60,   -60,   -60,     0,     0,     0,   219,
       0,   217,   -28,     0,   -28,   -28,     0,     0,     0,   -28,
     -28,   -28,     0,     0,   217,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   260,     0,   217,
     -29,     0,   -29,     0,     0,   -29,     0,     0,     0,     0,
       0,     0,   183,     0,     0,   -29,     0,   -29,   -29,     0,
     110,   111,   -29,   -29,   -29,   -30,   -30,   258,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,   187,
     -30,     0,   -30,     0,     0,   -30,   281,   189,   190,     0,
       0,     0,   207,     0,     0,   -30,     0,   -30,   -30,     0,
     110,   111,   -30,   -30,   -30,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,   211,
     -31,     0,   -31,     0,     0,   -31,   300,   213,   214,     0,
       0,     0,   252,     0,     0,   -31,   -76,   -31,   -31,     0,
     110,   111,   -31,   -31,   -31,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,   254,
     -32,     0,   -32,   -76,     0,   -32,   255,   256,   257,     0,
     -76,   -76,   -76,     0,   -77,   -32,     0,   -32,   -32,     0,
       0,     0,   -32,   -32,   -32,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,   -77,   -39,     0,     0,   -39,     0,     0,   -77,   -77,
     -77,     0,   319,     0,     0,   -39,   168,   -39,   -39,     0,
       0,     0,   -39,   -39,   -39,    -9,    -9,     0,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,     0,     0,     0,   320,
      -9,     0,    -9,   170,     0,    -9,   321,   322,   323,     0,
     171,   172,   173,     0,   183,    -9,     0,    -9,    -9,     0,
       0,     0,    -9,    -9,    -9,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
     -40,   187,   -40,     0,     0,   -40,     0,     0,   281,   189,
     190,     0,   207,     0,     0,   -40,   252,   -40,   -40,     0,
       0,     0,   -40,   -40,   -40,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,   211,
     -41,     0,   -41,   254,     0,   -41,   300,   213,   214,     0,
     255,   256,   257,     0,     0,   -41,     0,   -41,   -41,     0,
       0,     0,   -41,   -41,   -41,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
     -37,     0,   -37,     0,     0,   -37,     0,   -55,   -55,   103,
     104,   105,   106,   107,   108,   -37,     0,   -37,   -37,     0,
     -55,     0,   -37,   -37,   -37,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,     0,   -38,     0,     0,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,     0,   -38,   -38,     0,
       0,     0,   -38,   -38,   -38,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,     0,   -24,     0,     0,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,     0,   -24,   -24,     0,
       0,     0,   -24,   -24,   -24,   -34,   -34,     0,   -34,   -34,
     421,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
     -34,     0,   -34,     0,     0,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,     0,   -34,   -34,     0,
       0,     0,   -34,   -34,   -34,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
     -35,     0,   -35,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,     0,   -35,   -35,     0,
       0,     0,   -35,   -35,   -35,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,     0,   -36,   -62,     0,   -36,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -36,     0,   -36,   -36,     0,
       0,     0,   -36,   -36,   -36,   -33,   -33,     0,   -33,   -33,
     -62,   -33,   -33,   -33,   -33,   -33,     0,   -62,   -62,   -62,
     -33,     0,   -33,   -64,     0,   -33,     0,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -33,     0,   -33,   -33,     0,
       0,     0,   -33,   -33,   -33,   -27,   -27,     0,   -27,   -27,
     -64,   -27,   -27,   -27,   -27,   -27,     0,   -64,   -64,   -64,
     -27,     0,   -27,   -96,     0,   -27,     0,     0,     0,     0,
       0,   -96,   -96,   -96,   -96,   -27,     0,   -27,   -27,     0,
       0,     0,   -27,   -27,   -27,   163,   164,     0,    33,    34,
     -96,    35,    36,    37,    38,    39,     0,   -96,   -96,   -96,
      40,     0,    41,   -95,     0,    42,     0,     0,     0,     0,
       0,   -95,   -95,   -95,   -95,    43,     0,   165,    94,     0,
       0,     0,    44,    45,    46,   -26,   -26,     0,   -26,   -26,
     -95,   -26,   -26,   -26,   -26,   -26,     0,   -95,   -95,   -95,
     -26,     0,   -26,     0,     0,   -26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,     0,   -26,   -26,     0,
       0,     0,   -26,   -26,   -26,   -28,   -28,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,     0,   -28,     0,     0,   -28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -28,     0,   -28,   -28,     0,
       0,     0,   -28,   -28,   -28,   -29,   -29,     0,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,     0,   -29,     0,     0,   -29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,     0,   -29,   -29,     0,
       0,     0,   -29,   -29,   -29,   -30,   -30,     0,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,     0,   -30,     0,     0,   -30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,     0,   -30,   -30,     0,
       0,     0,   -30,   -30,   -30,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,     0,   -31,     0,     0,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,     0,   -31,   -31,     0,
       0,     0,   -31,   -31,   -31,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,     0,   -32,     0,     0,   -32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,     0,   -32,   -32,     0,
       0,     0,   -32,   -32,   -32,   -39,   -39,     0,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,     0,   -39,     0,     0,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,     0,   -39,   -39,     0,
       0,     0,   -39,   -39,   -39,   -25,   -25,     0,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
     -25,     0,   -25,     0,     0,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,     0,   -25,   -25,     0,
       0,     0,   -25,   -25,   -25,   -40,   -40,     0,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
     -40,     0,   -40,     0,     0,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,     0,   -40,   -40,     0,
       0,     0,   -40,   -40,   -40,   -41,   -41,     0,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
     -41,     0,   -41,     0,     0,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,     0,   -41,   -41,     0,
       0,     0,   -41,   -41,   -41,   -37,   -37,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
     -37,     0,   -37,     0,     0,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,     0,   -37,   -37,     0,
       0,     0,   -37,   -37,   -37,   -38,   -38,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,     0,   -38,     0,     0,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,     0,   -38,   -38,     0,
       0,     0,   -38,   -38,   -38,   -35,   -35,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
     -35,     0,   -35,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,     0,   -35,   -35,     0,
       0,     0,   -35,   -35,   -35,   -36,   -36,     0,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,     0,   -36,     0,     0,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,     0,   -36,   -36,     0,
       0,     0,   -36,   -36,   -36,   163,   164,     0,    33,    34,
       0,    35,    36,    37,    38,    39,     0,     0,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,   165,   348,     0,
       0,     0,    44,    45,    46,    -9,    -9,     0,    -9,    -9,
       0,    -9,    -9,    -9,    -9,    -9,     0,     0,     0,     0,
      -9,     0,    -9,     0,     0,    -9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -9,     0,    -9,    -9,     0,
       0,     0,    -9,    -9,    -9,   163,   164,     0,    33,    34,
       0,    35,    36,    37,    38,    39,     0,     0,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,   165,   390,     0,
       0,     0,    44,    45,    46,   -24,   -24,     0,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,     0,   -24,     0,     0,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,     0,   -24,   -24,     0,
       0,     0,   -24,   -24,   -24,   163,   164,     0,    33,    34,
       0,    35,    36,    37,    38,    39,     0,     0,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,   165,     0,     0,
       0,     0,    44,    45,    46,   163,   164,     0,    33,   237,
       0,   238,   239,    37,    38,    39,     0,     0,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,   240,   -96,     0,
       0,     0,    44,    45,    46,     0,   -96,   -96,   -96,   -96,
       0,   -96,     0,   -96,   -96,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   -96,   -96,   -95,     0,     0,
     -96,     0,   -96,   -96,   -96,   -95,   -95,   -95,   -95,     0,
     -95,     0,   -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,     0,   -95,   -95,   -65,     0,     0,   -95,
       0,   -95,   -95,   -95,   -65,   -65,   -65,   -65,     0,   -65,
       0,   118,   119,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -65,     0,   -96,     0,   -65,     0,     0,
     -65,   -65,   -65,   -96,   -96,   -96,   -96,     0,   -96,     0,
     -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,     0,   -96,     0,   -95,     0,   -96,     0,     0,   -96,
     -96,   -96,   -95,   -95,   -95,   -95,     0,   -95,     0,   -95,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,   -95,     0,   -65,     0,   -95,     0,     0,   -95,   -95,
     -95,   -65,   -65,   -65,   -65,     0,   -65,     0,   294,   295,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -66,     0,     0,     0,     0,   -65,   -65,   -65,
     -66,   -66,   -66,   -66,     0,   -66,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   305,   306,
     -66,   -96,     0,     0,   -66,     0,   -66,   -66,   -66,   -96,
     -96,   -96,   -96,     0,   -96,     0,   -96,   -96,     0,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,
     -95,     0,     0,     0,     0,   -96,   -96,   -96,   -95,   -95,
     -95,   -95,     0,   -95,     0,   -95,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -66,
       0,     0,     0,     0,   -95,   -95,   -95,   -66,   -66,   -66,
     -66,     0,   -66,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   286,   287,   -66,   -92,     0,
       0,     0,     0,   -66,   -66,   -66,   -92,   -92,   -92,   -92,
       0,   -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,   -92,   -93,     0,     0,
     -92,     0,   -92,   -92,   -92,   -93,   -93,   -93,   -93,     0,
     -93,     0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,   -93,   -59,     0,     0,   -93,
       0,   -93,   -93,   -93,   -59,   -59,   114,   115,     0,   -59,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,   -59,   -59,   -61,     0,     0,   -59,     0,
     -59,   -59,   -59,   -61,   -61,   -61,   -61,     0,   -61,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   -61,   -61,   -63,     0,     0,   -61,     0,   -61,
     -61,   -61,   -63,   -63,   -63,   -63,     0,   -63,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -67,     0,     0,   -63,     0,   -63,   -63,
     -63,   -67,   -67,   -67,   -67,     0,   -48,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -48,   -66,     0,     0,   -48,     0,   -67,   -67,   -67,
     -66,   -66,   -66,   -66,     0,   -66,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   370,
     -66,   -67,     0,     0,   -66,     0,   -66,   -66,   -66,   -67,
     -67,   -67,   -67,     0,   -67,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -65,     0,     0,   -67,     0,   -67,   -67,   -67,   -65,   -65,
     -65,   -65,     0,   -65,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -62,
       0,     0,   -65,     0,   -65,   -65,   -65,   -62,   -62,   -62,
     -62,     0,   -62,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -64,     0,
       0,   -62,     0,   -62,   -62,   -62,   -64,   -64,   -64,   -64,
       0,   -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,   -64,   -64,   -58,     0,     0,
     -64,     0,   -64,   -64,   -64,   -58,   -58,   114,   115,     0,
     -58,     0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -58,   -58,   -60,     0,     0,   -58,
       0,   -58,   -58,   -58,   -60,   -60,   -60,   -60,     0,   -60,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   -60,   -60,   -96,     0,     0,   -60,     0,
     -60,   -60,   -60,   -96,   -96,   -96,   -96,     0,   -96,     0,
       0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,     0,   -96,   -96,   -95,     0,     0,   -96,     0,   -96,
     -96,   -96,   -95,   -95,   -95,   -95,     0,   -95,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,   -95,   -95,   -94,     0,     0,   -95,     0,   -95,   -95,
     -95,   -94,   -94,   -94,   -94,     0,   -94,     0,     0,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,
     -94,     0,   -92,     0,   -94,     0,     0,   -94,   -94,   -94,
     -92,   -92,   -92,   -92,     0,   -92,     0,     0,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,
       0,   -93,     0,   -92,     0,     0,   -92,   -92,   -92,   -93,
     -93,   -93,   -93,     0,   -93,     0,     0,     0,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,     0,
     -59,     0,   -93,     0,     0,   -93,   -93,   -93,   -59,   -59,
     114,   115,     0,   -59,     0,     0,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,     0,   -61,
       0,   -59,     0,     0,   -59,   -59,   -59,   -61,   -61,   -61,
     -61,     0,   -61,     0,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   -61,     0,   -63,     0,
     -61,     0,     0,   -61,   -61,   -61,   -63,   -63,   -63,   -63,
       0,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,     0,   -67,     0,   -63,
       0,     0,   -63,   -63,   -63,   -67,   -67,   -67,   -67,     0,
     -48,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -67,     0,   -66,     0,   -48,     0,
       0,   -67,   -67,   -67,   -66,   -66,   -66,   -66,     0,   -66,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   206,     0,   -67,     0,   -66,     0,     0,
     -66,   -66,   -66,   -67,   -67,   -67,   -67,     0,   -67,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,     0,   -65,     0,   -67,     0,     0,   -67,
     -67,   -67,   -65,   -65,   -65,   -65,     0,   -65,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,     0,   -62,     0,   -65,     0,     0,   -65,   -65,
     -65,   -62,   -62,   -62,   -62,     0,   -62,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
     -62,     0,   -64,     0,   -62,     0,     0,   -62,   -62,   -62,
     -64,   -64,   -64,   -64,     0,   -64,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,
       0,   -58,     0,   -64,     0,     0,   -64,   -64,   -64,   -58,
     -58,   114,   115,     0,   -58,     0,     0,     0,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,     0,
     -60,     0,   -58,     0,     0,   -58,   -58,   -58,   -60,   -60,
     -60,   -60,     0,   -60,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,     0,   -94,
       0,   -60,     0,     0,   -60,   -60,   -60,   -94,   -94,   -94,
     -94,     0,   -94,     0,     0,     0,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -92,     0,
       0,     0,     0,   -94,   -94,   -94,   -92,   -92,   -92,   -92,
       0,   -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,   -92,   -93,     0,     0,
       0,     0,   -92,   -92,   -92,   -93,   -93,   -93,   -93,     0,
     -93,     0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,   -93,   -59,     0,     0,     0,
       0,   -93,   -93,   -93,   -59,   -59,   114,   115,     0,   -59,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,   -59,   -59,   -61,     0,     0,     0,     0,
     -59,   -59,   -59,   -61,   -61,   -61,   -61,     0,   -61,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   -61,   -61,   -63,     0,     0,     0,     0,   -61,
     -61,   -61,   -63,   -63,   -63,   -63,     0,   -63,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -67,     0,     0,     0,     0,   -63,   -63,
     -63,   -67,   -67,   -67,   -67,     0,   -48,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -66,     0,     0,     0,     0,   -67,   -67,   -67,
     -66,   -66,   -66,   -66,     0,   -66,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   357,
     -66,   -67,     0,     0,     0,     0,   -66,   -66,   -66,   -67,
     -67,   -67,   -67,     0,   -67,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -65,     0,     0,     0,     0,   -67,   -67,   -67,   -65,   -65,
     -65,   -65,     0,   -65,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -62,
       0,     0,     0,     0,   -65,   -65,   -65,   -62,   -62,   -62,
     -62,     0,   -62,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -96,     0,
       0,     0,     0,   -62,   -62,   -62,   -96,   -96,   -96,   -96,
       0,   -96,     0,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   -96,     0,   -64,     0,   -96,
       0,     0,   -96,   -96,   -96,   -64,   -64,   -64,   -64,     0,
     -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,   -64,   -64,   -58,     0,     0,     0,
       0,   -64,   -64,   -64,   -58,   -58,   114,   115,     0,   -58,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -58,   -58,   -60,     0,     0,     0,     0,
     -58,   -58,   -58,   -60,   -60,   -60,   -60,     0,   -60,     0,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,     0,   -60,   -60,   -95,     0,     0,     0,     0,   -60,
     -60,   -60,   -95,   -95,   -95,   -95,     0,   -95,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,   -95,     0,   -96,     0,   -95,     0,     0,   -95,   -95,
     -95,   -96,   -96,   -96,   -96,     0,   -96,     0,     0,     0,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,
     -96,   -96,   -95,     0,     0,     0,     0,   -96,   -96,   -96,
     -95,   -95,   -95,   -95,     0,   -95,     0,     0,     0,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -95,   -66,     0,     0,     0,     0,   -95,   -95,   -95,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   273,   -66,
     -92,     0,     0,     0,     0,   -66,   -66,   -66,   -92,   -92,
     -92,   -92,     0,     0,     0,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -93,
       0,     0,     0,     0,   -92,   -92,   -92,   -93,   -93,   -93,
     -93,     0,     0,     0,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -59,     0,
       0,     0,     0,   -93,   -93,   -93,   -59,   -59,   114,   115,
       0,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,   -61,     0,     0,
       0,     0,   -59,   -59,   -59,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -61,   -61,   -63,     0,     0,     0,
       0,   -61,   -61,   -61,   -63,   -63,   -63,   -63,     0,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -63,   -63,   -67,     0,     0,     0,     0,
     -63,   -63,   -63,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -65,     0,     0,     0,     0,   -67,
     -67,   -67,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   207,     0,     0,     0,     0,   -65,   -65,
     -65,   110,   111,     0,     0,     0,   -57,     0,     0,     0,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     211,   -57,   -94,     0,     0,   -57,     0,   300,   213,   214,
     -94,   -94,   -94,   -94,     0,     0,     0,     0,     0,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,
       0,   -66,     0,   -94,     0,     0,   -94,   -94,   -94,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   341,     0,
     -92,     0,   -66,     0,     0,   -66,   -66,   -66,   -92,   -92,
     -92,   -92,     0,     0,     0,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,     0,   -93,
       0,   -92,     0,     0,   -92,   -92,   -92,   -93,   -93,   -93,
     -93,     0,     0,     0,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,     0,   -59,     0,
     -93,     0,     0,   -93,   -93,   -93,   -59,   -59,   114,   115,
       0,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,     0,   -61,     0,   -59,
       0,     0,   -59,   -59,   -59,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -61,     0,   -63,     0,   -61,     0,
       0,   -61,   -61,   -61,   -63,   -63,   -63,   -63,     0,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -63,     0,   -67,     0,   -63,     0,     0,
     -63,   -63,   -63,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,     0,   -65,     0,   -67,     0,     0,   -67,
     -67,   -67,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,     0,   -62,     0,   -65,     0,     0,   -65,   -65,
     -65,   -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
     -62,   -62,   -62,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,
       0,   -64,     0,   -62,     0,     0,   -62,   -62,   -62,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,   -64,
     -96,     0,     0,     0,     0,   -64,   -64,   -64,   -96,   -96,
     -96,   -96,     0,     0,     0,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,   -58,
       0,     0,     0,     0,   -96,   -96,   -96,   -58,   -58,   114,
     115,     0,     0,     0,     0,     0,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -60,     0,
       0,     0,     0,   -58,   -58,   -58,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,   -60,   -60,   207,     0,     0,
       0,     0,   -60,   -60,   -60,   110,   111,     0,     0,     0,
     -56,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,     0,   211,   -56,   -64,     0,     0,   -56,
       0,   300,   213,   214,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,   -64,     0,   -96,     0,   -64,     0,     0,
     -64,   -64,   -64,   -96,   -96,   -96,   -96,     0,     0,     0,
       0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,     0,   -96,     0,   -58,     0,   -96,     0,     0,   -96,
     -96,   -96,   -58,   -58,   114,   115,     0,     0,     0,     0,
       0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
       0,   -58,     0,   -60,     0,   -58,     0,     0,   -58,   -58,
     -58,   -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
     -60,     0,   -95,     0,   -60,     0,     0,   -60,   -60,   -60,
     -95,   -95,   -95,   -95,     0,     0,     0,     0,     0,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,     0,     0,     0,     0,     0,     0,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,     0,
      33,     0,   -95,     0,     0,   -95,   -95,   -95,   110,   111,
       0,     0,     0,   -56,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,    43,     0,   183,
       0,   -56,     0,     0,    87,    45,    46,   110,   111,     0,
       0,     0,   -57,     0,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   187,   -57,   183,     0,
       0,     0,     0,   281,   189,   190,   110,   111,     0,     0,
       0,   -56,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,     0,   187,   -56,   168,     0,     0,
       0,     0,   281,   189,   190,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,   170,   -57,   252,     0,     0,     0,
       0,   171,   172,   173,   110,   111,     0,     0,     0,     0,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,     0,   254,     0,   168,     0,   -57,     0,     0,
     255,   256,   257,   110,   111,     0,     0,     0,     0,     0,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,     0,   170,   -56,   252,     0,     0,     0,     0,   171,
     172,   173,   110,   111,     0,     0,     0,     0,     0,     0,
     207,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,   254,   208,     0,   209,   -56,     0,   210,   255,   256,
     257,     0,     0,     0,     0,   207,     0,   211,   401,   207,
       0,     0,     0,     0,   212,   213,   214,   208,     0,   209,
       0,   208,   210,   209,     0,     0,   210,     0,     0,     0,
       0,     0,   211,   405,     0,     0,   211,   410,     0,   212,
     213,   214,   -55,   212,   213,   214,     0,   -55,   -55,   103,
     104,   105,   106,   107,   108,     0,   -55,     0,     0,     0,
     -55,   -55,   -55,   103,   104,   105,   106,   107,   108,     0,
       0,   -55
};

static const yytype_int16 yycheck[] =
{
       0,     0,    22,    49,   165,     5,     5,    28,    79,   176,
     146,    31,    83,    84,    43,    36,   206,     0,   174,    37,
      20,     5,    93,   178,     6,    19,    37,   194,    49,    19,
      64,    33,    32,    19,    83,    84,   192,    40,     3,     4,
       6,   196,    35,    37,    93,   146,     5,    37,    34,    78,
       5,    33,   219,    19,    83,    84,    40,    23,    40,    41,
      42,   217,    83,    84,    93,    40,   221,    33,    34,    34,
      34,    92,    38,    38,    40,    41,    42,   232,     6,   240,
     146,    40,   153,   273,    33,    40,    19,   158,     3,     4,
      18,    33,    20,   260,    33,    23,    33,   287,    37,   146,
     146,    34,   258,    33,   153,    33,   140,   262,    33,    37,
     146,   157,    40,    41,    42,   161,   306,    40,   147,    34,
     146,    19,    40,    38,   153,   146,   146,   146,     0,     6,
      19,    37,   153,     5,    19,   206,   157,    14,    15,    37,
     161,   170,    40,   177,   165,    34,   146,   146,    20,    34,
      37,   341,    40,    38,     6,    40,    33,   206,   187,    34,
      32,   195,    40,    40,    41,    42,    18,   357,    20,    19,
     325,    23,     0,    83,    84,     3,     4,   206,    19,    40,
     370,    33,   211,    93,    40,    19,   220,    37,    40,    41,
      42,    43,    44,    34,     6,   385,    19,    38,    34,    40,
     355,    32,   273,    37,    42,    43,    18,    37,    20,    34,
     365,    23,   233,    19,    37,    19,   287,    40,   239,   240,
      34,    33,   268,   378,   273,   254,    64,   261,    40,    41,
      42,    37,     6,    37,    40,   306,    19,    19,   287,    34,
      78,    19,   397,   153,   273,    83,    84,   268,    86,    23,
      19,    34,    34,    34,    19,    93,    34,   306,   287,    33,
     331,    19,    40,    19,   102,   286,    40,    41,    42,    34,
     341,   109,    19,    38,    34,   113,   412,   306,   116,    37,
       1,    37,     3,     4,   305,   421,   357,    34,   334,   425,
      34,   320,   341,    40,    83,    84,   206,    83,    84,   370,
      19,   330,   140,   141,    93,    24,    25,    93,   357,   147,
      19,   412,   341,   334,   385,   153,    40,    37,    37,   353,
     421,   370,    19,    19,   425,    34,   347,    37,   357,   363,
      37,   169,   170,    83,    84,     6,   385,    37,    34,   177,
      37,   370,   376,    93,    83,    84,   412,    34,   186,   187,
      40,   422,    23,    37,    93,   421,   385,   195,    40,   425,
      40,   395,    33,   273,   153,   412,   412,   153,   206,    40,
      41,    42,   210,   211,   421,   421,   412,   287,   425,   425,
      40,    19,   220,    40,   413,   421,   412,    24,    25,   425,
      19,   412,   412,   412,    40,   421,   306,    34,   236,   425,
     421,   421,   421,   153,   425,   425,   425,    40,    37,    19,
      33,    19,   412,   412,   153,   253,   254,   206,    33,    19,
     206,   421,   421,   261,    34,   425,   425,    34,     6,    37,
      40,   341,    37,    19,    34,   273,   274,   275,    38,   277,
     278,    19,   280,    37,     6,    23,    37,   357,    34,   287,
     288,   289,    38,   291,   292,    33,   206,    32,    19,    37,
     370,   299,    40,    41,    42,    19,    19,   206,   306,   307,
     308,    33,   310,   311,    19,   385,    37,   315,    40,    41,
      42,    34,   320,    37,   273,    38,   324,   273,    37,    34,
      34,    19,   330,    38,    19,     6,    24,    25,   287,    42,
      43,   287,    40,   341,   342,   343,    34,   345,   346,    34,
      38,    40,    23,    38,    34,   353,   354,   306,    19,   357,
     306,    64,    33,   273,    33,   363,   364,    19,    37,    40,
      41,    42,   370,    19,   273,    78,    37,   287,   376,   377,
      83,    84,    34,    86,    34,    19,    38,   385,   287,    40,
      93,    37,   341,     6,    19,   341,   306,   395,   396,   102,
      34,    14,    15,    16,    17,    19,   109,   306,   357,    40,
     113,   357,    37,   116,    34,   413,    34,    34,     6,    34,
      33,   370,    34,    37,   370,    19,    19,    40,    41,    42,
      18,   341,    20,    19,     6,    23,   385,   140,   141,   385,
      19,    34,   341,    37,   147,    33,    34,   357,    34,    34,
     153,    23,    40,    41,    42,    34,    37,    19,   357,    38,
     370,    33,    19,    37,    19,    34,   169,   170,    40,    41,
      42,   370,    34,    34,   177,   385,    38,    34,    40,    19,
      19,    38,    37,   186,   187,    34,   385,    19,    42,    43,
      34,     6,   195,    34,    34,    37,    24,    25,    38,    14,
      15,    16,    17,   206,    19,    37,    34,   210,   211,    24,
      25,    26,    27,    28,    29,    30,    31,   220,    33,    34,
      34,     5,    19,    38,    78,    40,    41,    42,     6,    83,
      84,    19,    86,   236,    19,    -1,    32,    34,    19,    93,
      18,    38,    20,    24,    25,    23,     6,    84,   102,    37,
     253,   254,    37,    34,    -1,    33,    34,    38,   261,    -1,
      19,    -1,    40,    41,    42,    24,    25,    -1,    19,    -1,
     273,   274,   275,    33,   277,   278,    19,   280,    37,    19,
      40,    41,    42,    34,   287,   288,   289,    38,   291,   292,
      -1,    34,    -1,   147,    34,    38,   299,    -1,    38,   153,
      -1,     6,    34,   306,   307,   308,    38,   310,   311,    24,
      25,    -1,   315,    -1,    19,   169,   170,   320,    23,    19,
      -1,   324,    37,    -1,    24,    25,    34,   330,    33,    34,
      38,    -1,   186,   187,    34,    40,    41,    42,   341,   342,
     343,     6,   345,   346,    34,    34,    24,    25,    38,    38,
     353,   354,   206,    18,   357,    20,   210,   211,    23,    37,
     363,   364,    -1,    -1,    19,    24,    25,   370,    33,    24,
      25,     6,    37,   376,   377,    40,    41,    42,    37,    34,
      34,    43,   385,    18,    38,    20,    34,    -1,    23,    19,
      38,    19,   395,   396,    24,    25,    24,    25,    33,   253,
     254,     6,    64,    -1,    34,    40,    41,    42,    38,    37,
     413,    24,    25,    18,    -1,    20,    78,    -1,    23,   273,
     274,    83,    84,    -1,    37,    -1,   280,    -1,    33,    34,
      -1,    93,    -1,   287,   288,    40,    41,    42,     6,     0,
      24,    25,     3,     4,    -1,   299,    14,    15,    16,    17,
      34,    19,   306,   307,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,   320,    24,    25,    37,
      -1,    -1,    40,    41,    42,    -1,   330,    34,   140,   141,
       0,    -1,    -1,     3,     4,   147,    -1,   341,   342,     3,
       4,   153,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,     6,   357,    18,    -1,    20,   169,   170,    23,
      14,    15,    16,    17,    -1,   177,   370,    -1,     6,    33,
      -1,    35,    36,    -1,   186,   187,    40,    41,    42,    33,
      18,   385,    20,   195,    -1,    23,    40,    41,    42,     0,
      -1,    -1,     3,     4,   206,    33,    34,    -1,   210,   211,
      19,    -1,    40,    41,    42,    24,    25,    -1,   220,   413,
       0,    19,     6,     3,     4,    34,    24,    25,    -1,    38,
      14,    15,    16,    17,   236,    19,    -1,    21,    22,    37,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,   253,   254,    43,    38,    19,    40,    41,    42,   261,
      24,    25,    19,    -1,     6,    -1,    -1,    24,    25,    -1,
      34,   273,   274,   275,    -1,   277,   278,    34,   280,     0,
       6,    23,     3,     4,    -1,   287,   288,   289,    78,   291,
     292,    33,     0,    83,    84,     3,     4,   299,    40,    41,
      42,    -1,    -1,    93,   306,   307,   308,    33,   310,   311,
      -1,    -1,    -1,   315,    40,    41,    42,     0,   320,   109,
       3,     4,   324,   113,    -1,    -1,   116,    -1,   330,     0,
      -1,     6,     3,     4,    -1,    -1,    -1,     6,    -1,   341,
     342,   343,     6,   345,   346,    14,    15,    16,    17,    -1,
      -1,   353,   354,    -1,    18,   357,    20,   147,    33,    23,
      -1,   363,   364,   153,    33,    40,    41,    42,   370,    33,
      34,    40,    41,    42,   376,   377,    40,    41,    42,   169,
     170,    -1,    -1,   385,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,   395,   396,    34,   186,   187,    19,    -1,
      -1,    43,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,   413,    -1,    34,    -1,     0,   206,    38,     3,     4,
     210,   211,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    78,    -1,    18,    -1,
      20,    83,    84,    23,     0,    -1,   236,     3,     4,    -1,
      -1,    93,    -1,    33,     0,    35,    36,     3,     4,     6,
      40,    41,    42,   253,   254,    -1,    -1,    14,    15,    16,
      17,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,   273,   274,   275,    33,   277,   278,    -1,
     280,    -1,    -1,    40,    41,    42,    23,   287,   288,   289,
      -1,   291,   292,    -1,    -1,   147,    33,    -1,    -1,   299,
      -1,   153,    -1,    40,    41,    42,   306,   307,   308,    -1,
     310,   311,    -1,     6,    -1,   315,    -1,   169,   170,    -1,
     320,    14,    15,    16,    17,    -1,    -1,    -1,     6,    -1,
     330,    -1,    -1,     6,   186,   187,    14,    15,    -1,    43,
      33,   341,   342,   343,    -1,   345,   346,    40,    41,    42,
      23,    -1,    -1,    -1,   206,    33,    -1,   357,   210,   211,
      33,    -1,    40,    41,    42,    -1,    -1,    40,    41,    42,
     370,    -1,    -1,     6,    78,    -1,    -1,    -1,    -1,    83,
      84,    14,    15,    -1,   236,   385,    19,    -1,    -1,    93,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,   253,   254,    -1,    37,    -1,    -1,    40,    41,    42,
      -1,    -1,   116,   413,    -1,    -1,    -1,     6,    -1,    -1,
      -1,   273,   274,   275,    -1,   277,   278,    -1,   280,    18,
      -1,    20,    -1,    -1,    23,   287,   288,   289,    -1,   291,
     292,    -1,    -1,   147,    33,    34,    -1,   299,    -1,   153,
      -1,    40,    41,    42,   306,   307,   308,    -1,   310,   311,
      -1,     6,    -1,   315,    -1,   169,   170,    -1,   320,    14,
      15,    16,    17,    -1,     6,    -1,    -1,    -1,   330,    -1,
      -1,    -1,   186,   187,    -1,    -1,    -1,    43,    33,   341,
     342,   343,    -1,   345,   346,    40,    41,    42,    -1,    -1,
      -1,    33,   206,    -1,     6,   357,   210,   211,    40,    41,
      42,    -1,    14,    15,    16,    17,    -1,    43,   370,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,    33,   236,   385,    -1,    -1,    -1,    93,    40,    41,
      42,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,   253,
     254,    -1,    78,    14,    15,    16,    17,    83,    84,    -1,
      -1,   413,    -1,    -1,    -1,     6,    -1,    93,    -1,   273,
     274,   275,    33,   277,   278,    -1,   280,    -1,    -1,    40,
      41,    42,    -1,   287,   288,   289,    -1,   291,   292,    -1,
      -1,   147,    33,    -1,    -1,   299,    -1,   153,    -1,    40,
      41,    42,   306,   307,   308,    -1,   310,   311,    -1,    -1,
      -1,   315,    -1,   169,   170,    -1,   320,    -1,    -1,    -1,
      -1,   147,    -1,    -1,     6,    -1,   330,   153,    -1,    -1,
     186,   187,    14,    15,    16,    17,    -1,   341,   342,   343,
      -1,   345,   346,    -1,   170,    -1,    -1,    -1,    -1,    -1,
     206,    33,    -1,   357,   210,   211,     6,    -1,    40,    41,
      42,   187,    -1,    -1,    14,    15,   370,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
     206,   385,    -1,    33,    18,   211,    20,    -1,    -1,    23,
      40,    41,    42,    -1,    -1,    -1,    -1,   253,   254,    33,
       6,    35,    36,     6,    -1,    -1,    40,    41,    42,   413,
      -1,    14,    15,    16,    17,    -1,    -1,   273,   274,     6,
      -1,    -1,    -1,    -1,   280,    -1,    -1,    33,   254,    -1,
      33,   287,   288,    -1,    40,    41,    42,    40,    41,    42,
      -1,    -1,    -1,   299,    -1,    -1,    33,   273,     6,    -1,
     306,   307,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,   287,    -1,    -1,   320,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,   330,    33,    34,    -1,    -1,    -1,
     306,    -1,    40,    41,    42,   341,   342,    -1,    -1,     6,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    14,    15,    16,
      17,   357,     3,     4,   330,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,   370,   341,    33,    18,    -1,    20,
      -1,    -1,    23,    40,    41,    42,    -1,    -1,    -1,   385,
      -1,   357,    33,    -1,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,   370,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,   413,    -1,   385,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    33,    -1,    35,    36,    -1,
      14,    15,    40,    41,    42,     3,     4,   413,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    33,
      18,    -1,    20,    -1,    -1,    23,    40,    41,    42,    -1,
      -1,    -1,     6,    -1,    -1,    33,    -1,    35,    36,    -1,
      14,    15,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    33,
      18,    -1,    20,    -1,    -1,    23,    40,    41,    42,    -1,
      -1,    -1,     6,    -1,    -1,    33,     6,    35,    36,    -1,
      14,    15,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    33,
      18,    -1,    20,    33,    -1,    23,    40,    41,    42,    -1,
      40,    41,    42,    -1,     6,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    33,    20,    -1,    -1,    23,    -1,    -1,    40,    41,
      42,    -1,     6,    -1,    -1,    33,     6,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    33,
      18,    -1,    20,    33,    -1,    23,    40,    41,    42,    -1,
      40,    41,    42,    -1,     6,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    33,    20,    -1,    -1,    23,    -1,    -1,    40,    41,
      42,    -1,     6,    -1,    -1,    33,     6,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    33,
      18,    -1,    20,    33,    -1,    23,    40,    41,    42,    -1,
      40,    41,    42,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    33,    -1,    35,    36,    -1,
      37,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,     6,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      33,     9,    10,    11,    12,    13,    -1,    40,    41,    42,
      18,    -1,    20,     6,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      33,     9,    10,    11,    12,    13,    -1,    40,    41,    42,
      18,    -1,    20,     6,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      33,     9,    10,    11,    12,    13,    -1,    40,    41,    42,
      18,    -1,    20,     6,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      33,     9,    10,    11,    12,    13,    -1,    40,    41,    42,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,     6,    -1,
      -1,    -1,    40,    41,    42,    -1,    14,    15,    16,    17,
      -1,    19,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,     6,    -1,    -1,
      38,    -1,    40,    41,    42,    14,    15,    16,    17,    -1,
      19,    -1,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,     6,    -1,    -1,    38,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    19,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    19,    -1,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    19,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,    41,
      42,    14,    15,    16,    17,    -1,    19,    -1,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,     6,    -1,    -1,    -1,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     6,    -1,    -1,    38,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    19,    -1,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
       6,    -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    19,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,     6,
      -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     6,    -1,
      -1,    -1,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,     6,    -1,    -1,
      38,    -1,    40,    41,    42,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,     6,    -1,    -1,    38,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,     6,    -1,    -1,    38,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,     6,    -1,    -1,    38,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,     6,    -1,    -1,    38,    -1,    40,    41,
      42,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,     6,    -1,    -1,    38,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,     6,    -1,    -1,    38,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
       6,    -1,    -1,    38,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,     6,
      -1,    -1,    38,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,     6,    -1,
      -1,    38,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,     6,    -1,    -1,
      38,    -1,    40,    41,    42,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,     6,    -1,    -1,    38,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,     6,    -1,    -1,    38,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,     6,    -1,    -1,    38,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,     6,    -1,    -1,    38,    -1,    40,    41,
      42,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    -1,     6,    -1,    37,    -1,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,     6,    -1,    37,    -1,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    -1,
       6,    -1,    37,    -1,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    -1,     6,
      -1,    37,    -1,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    -1,     6,    -1,
      37,    -1,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    -1,     6,    -1,    37,
      -1,    -1,    40,    41,    42,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    -1,     6,    -1,    37,    -1,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,    41,
      42,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    -1,     6,    -1,    37,    -1,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,     6,    -1,    37,    -1,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    -1,
       6,    -1,    37,    -1,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    -1,     6,
      -1,    37,    -1,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,     6,    -1,
      -1,    -1,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,     6,    -1,    -1,
      -1,    -1,    40,    41,    42,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,     6,    -1,    -1,    -1,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,     6,    -1,    -1,    -1,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,     6,    -1,    -1,    -1,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,     6,    -1,    -1,    -1,    -1,    40,    41,
      42,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,     6,    -1,    -1,    -1,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,     6,    -1,    -1,    -1,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
       6,    -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,     6,
      -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,     6,    -1,
      -1,    -1,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    -1,     6,    -1,    37,
      -1,    -1,    40,    41,    42,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,     6,    -1,    -1,    -1,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,     6,    -1,    -1,    -1,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,     6,    -1,    -1,    -1,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,    41,
      42,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,     6,    -1,    -1,    -1,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,     6,    -1,    -1,    -1,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
       6,    -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,     6,
      -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,     6,    -1,
      -1,    -1,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,     6,    -1,    -1,
      -1,    -1,    40,    41,    42,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,     6,    -1,    -1,    -1,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,     6,    -1,    -1,    -1,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,     6,    -1,    -1,    -1,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,     6,    -1,    -1,    -1,    -1,    40,    41,
      42,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,     6,    -1,    -1,    38,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,     6,    -1,    37,    -1,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    -1,
       6,    -1,    37,    -1,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    -1,     6,
      -1,    37,    -1,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    -1,     6,    -1,
      37,    -1,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    -1,     6,    -1,    37,
      -1,    -1,    40,    41,    42,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    -1,     6,    -1,    37,    -1,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,    41,
      42,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,     6,    -1,    -1,    -1,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,     6,    -1,    37,    -1,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
       6,    -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,     6,
      -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,     6,    -1,
      -1,    -1,    -1,    40,    41,    42,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,     6,    -1,    -1,
      -1,    -1,    40,    41,    42,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,     6,    -1,    -1,    38,
      -1,    40,    41,    42,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,
      40,    41,    42,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    -1,     6,    -1,    37,    -1,    -1,    40,    41,
      42,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    -1,     6,    -1,    37,    -1,    -1,    40,    41,    42,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,     6,    -1,    -1,    -1,    -1,    40,    41,    42,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    -1,
       6,    -1,    37,    -1,    -1,    40,    41,    42,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    -1,     6,
      -1,    37,    -1,    -1,    40,    41,    42,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,     6,    -1,
      -1,    -1,    -1,    40,    41,    42,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,     6,    -1,    -1,
      -1,    -1,    40,    41,    42,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,     6,    -1,    -1,    -1,
      -1,    40,    41,    42,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    -1,     6,    -1,    37,    -1,    -1,
      40,    41,    42,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,     6,    -1,    -1,    -1,    -1,    40,
      41,    42,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    18,    -1,    20,    37,    -1,    23,    40,    41,
      42,    -1,    -1,    -1,    -1,     6,    -1,    33,    34,     6,
      -1,    -1,    -1,    -1,    40,    41,    42,    18,    -1,    20,
      -1,    18,    23,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    33,    34,    -1,    40,
      41,    42,    19,    40,    41,    42,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    19,    -1,    -1,    -1,
      37,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,    46,    47,    48,    49,    50,    51,
      52,    56,    57,    58,     0,    48,     5,    40,    37,    37,
      33,    40,    34,    52,    53,    54,    55,    56,    35,    59,
      40,    34,    38,     6,     7,     9,    10,    11,    12,    13,
      18,    20,    23,    33,    40,    41,    42,    49,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    83,    84,
      85,    86,    87,    88,    89,    90,    59,    55,    33,    33,
      37,    69,    33,    33,    33,    40,    23,    40,    73,    89,
      90,    71,    32,    33,    36,    61,    37,    37,    19,    37,
      24,    25,    82,    26,    27,    28,    29,    30,    31,    79,
      14,    15,    78,    80,    16,    17,    81,    40,    21,    22,
      71,    40,    70,    37,    40,    43,    44,    69,    71,    83,
      93,    93,    34,    69,    34,    69,    91,    92,    40,    73,
      75,    75,    76,    77,    40,    40,    34,    37,    34,    34,
      34,    37,    34,    38,    61,    71,    69,     8,    37,    61,
      70,    34,    61,     3,     4,    35,    52,    56,     6,    23,
      33,    40,    41,    42,    72,    73,    74,    75,    76,    77,
      78,    89,    90,     6,    18,    20,    23,    33,    40,    41,
      42,    70,    72,    73,    74,    75,    76,    77,    78,    84,
      85,    86,    87,    88,    89,    90,    33,     6,    18,    20,
      23,    33,    40,    41,    42,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    83,    84,    85,    86,    87,    88,
      89,    90,    76,    32,    19,    19,    80,     7,     9,    10,
      35,    49,    56,    59,    62,    63,    64,    65,    66,    67,
      68,    69,     6,    23,    33,    40,    41,    42,    72,    73,
      74,    75,    76,    77,    78,    89,    90,    40,    60,    40,
      37,    73,    71,    33,    82,    79,    78,    80,    81,    40,
      23,    40,    73,    89,    90,    71,    32,    33,    82,    79,
      78,    80,    81,    40,    21,    22,    34,    91,    40,    23,
      40,    73,    89,    90,    71,    32,    33,    82,    79,    78,
      80,    81,    40,    21,    22,    81,    69,    40,    40,     6,
      33,    40,    41,    42,    75,    76,    77,    78,    89,    90,
      33,    33,    37,    69,    60,    37,    37,    37,    37,    73,
      71,    33,    82,    79,    78,    80,    81,    32,    36,    34,
      34,    91,    73,    75,    75,    76,    77,    33,    34,    69,
      34,    91,    73,    75,    75,    76,    77,    40,    40,    34,
      33,    34,    69,    34,    91,    73,    75,    75,    76,    77,
      40,    40,    77,    37,    71,    33,    78,    71,    70,    37,
      36,    34,    34,    91,    73,    75,    75,    76,    77,    69,
      34,    34,    91,    37,    34,    34,    91,    37,    34,    34,
      34,    91,    34,    37,    34,    37,    34,    34,    34,    61,
      71,     8,    37,    61,    70,    34,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    48,    49,
      50,    51,    51,    52,    52,    53,    54,    54,    55,    55,
      56,    57,    58,    58,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    64,    65,    65,
      66,    66,    67,    68,    68,    69,    69,    69,    69,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    84,    85,    86,    87,    88,
      86,    86,    89,    89,    89,    90,    90,    91,    92,    92,
      93,    93,    93,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     5,     4,     1,     1,     1,     3,     1,     1,     0,
       2,     3,     2,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     7,     9,     2,     3,     2,
       2,     2,     4,     4,     4,     1,     1,     1,     1,     4,
       1,     1,     3,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     4,     3,     1,     3,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 9:
#line 93 "src/sintatic.y"
                                                       {
   //$$ = $1;
}
#line 2786 "sintatic.tab.c"
    break;

  case 10:
#line 97 "src/sintatic.y"
                                               {
  //$$ = $1;
}
#line 2794 "sintatic.tab.c"
    break;

  case 20:
#line 111 "src/sintatic.y"
                                               {
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "variable", lineno);
}
#line 2802 "sintatic.tab.c"
    break;

  case 21:
#line 115 "src/sintatic.y"
                                                {
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "variable", lineno);
}
#line 2810 "sintatic.tab.c"
    break;

  case 22:
#line 119 "src/sintatic.y"
                                               {
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "function", lineno);
}
#line 2818 "sintatic.tab.c"
    break;

  case 23:
#line 121 "src/sintatic.y"
                           {
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "function", lineno);
}
#line 2826 "sintatic.tab.c"
    break;


#line 2830 "sintatic.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 197 "src/sintatic.y"


extern void yyerror(const char *tt_name) {
  printf("yyerror: %s em linha: %d coluna: %d.\n", tt_name, lineno, column);
}

int main(int argc, char *argv[]){
  yyin = fopen(argv[1], "r");

  table = create_symbol_table();

  yyparse();
  fclose(yyin);
  yylex_destroy();

  show_symbol_table(table);
  free_symbol_table(table);

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

  // printf("\n\n\n________________| ABSTRACT TREE |________________\n\n");
  // print_tree(abstract_tree, 0);
  // print_symbol_table();

  // free_ast(abstract_tree);
  // free_symbol_table();

  return 0;
}
