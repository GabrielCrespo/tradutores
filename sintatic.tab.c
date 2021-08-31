/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

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

 int present_scope = 0;

 symbol_table* table;
 tree_element* tree;


#line 92 "sintatic.tab.c"

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

#include "sintatic.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_LIST = 5,                       /* LIST  */
  YYSYMBOL_NIL = 6,                        /* NIL  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_READ = 11,                      /* READ  */
  YYSYMBOL_WRITE = 12,                     /* WRITE  */
  YYSYMBOL_WRITELN = 13,                   /* WRITELN  */
  YYSYMBOL_SUM_OP = 14,                    /* SUM_OP  */
  YYSYMBOL_SUB_OP = 15,                    /* SUB_OP  */
  YYSYMBOL_MULT_OP = 16,                   /* MULT_OP  */
  YYSYMBOL_DIV_OP = 17,                    /* DIV_OP  */
  YYSYMBOL_LIST_HEADER = 18,               /* LIST_HEADER  */
  YYSYMBOL_LIST_CONSTRUCTOR = 19,          /* LIST_CONSTRUCTOR  */
  YYSYMBOL_LIST_TAIL = 20,                 /* LIST_TAIL  */
  YYSYMBOL_LIST_MAP = 21,                  /* LIST_MAP  */
  YYSYMBOL_LIST_FILTER = 22,               /* LIST_FILTER  */
  YYSYMBOL_EXC_OP = 23,                    /* EXC_OP  */
  YYSYMBOL_OR_OP = 24,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 25,                    /* AND_OP  */
  YYSYMBOL_EQUAL_OP = 26,                  /* EQUAL_OP  */
  YYSYMBOL_DIFF_OP = 27,                   /* DIFF_OP  */
  YYSYMBOL_LST_OP = 28,                    /* LST_OP  */
  YYSYMBOL_GRT_OP = 29,                    /* GRT_OP  */
  YYSYMBOL_LST_EQ_OP = 30,                 /* LST_EQ_OP  */
  YYSYMBOL_GRT_EQ_OP = 31,                 /* GRT_EQ_OP  */
  YYSYMBOL_ASSIGN_OP = 32,                 /* ASSIGN_OP  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_SEMI = 37,                      /* SEMI  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_REFFER = 39,                    /* REFFER  */
  YYSYMBOL_ID = 40,                        /* ID  */
  YYSYMBOL_INT_CONST = 41,                 /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 42,               /* FLOAT_CONST  */
  YYSYMBOL_STRING = 43,                    /* STRING  */
  YYSYMBOL_CHAR = 44,                      /* CHAR  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_declarations = 47,              /* declarations  */
  YYSYMBOL_declaration = 48,               /* declaration  */
  YYSYMBOL_variable_declaration = 49,      /* variable_declaration  */
  YYSYMBOL_list_declaration = 50,          /* list_declaration  */
  YYSYMBOL_function_declaration = 51,      /* function_declaration  */
  YYSYMBOL_type_specifier = 52,            /* type_specifier  */
  YYSYMBOL_parameters = 53,                /* parameters  */
  YYSYMBOL_list_paremeters = 54,           /* list_paremeters  */
  YYSYMBOL_parameter = 55,                 /* parameter  */
  YYSYMBOL_variable_simple_declaration = 56, /* variable_simple_declaration  */
  YYSYMBOL_list_simple_declaration = 57,   /* list_simple_declaration  */
  YYSYMBOL_function_simple_declaration = 58, /* function_simple_declaration  */
  YYSYMBOL_compound_statement = 59,        /* compound_statement  */
  YYSYMBOL_local_declarations = 60,        /* local_declarations  */
  YYSYMBOL_list_statements = 61,           /* list_statements  */
  YYSYMBOL_statement = 62,                 /* statement  */
  YYSYMBOL_conditional_statement = 63,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 64,       /* iteration_statement  */
  YYSYMBOL_expression_statement = 65,      /* expression_statement  */
  YYSYMBOL_return_statement = 66,          /* return_statement  */
  YYSYMBOL_expression = 67,                /* expression  */
  YYSYMBOL_assign_expression = 68,         /* assign_expression  */
  YYSYMBOL_simple_expression = 69,         /* simple_expression  */
  YYSYMBOL_relational_expression = 70,     /* relational_expression  */
  YYSYMBOL_arithmetic_add_expression = 71, /* arithmetic_add_expression  */
  YYSYMBOL_arithmetic_mul_expression = 72, /* arithmetic_mul_expression  */
  YYSYMBOL_unary_sub_expression = 73,      /* unary_sub_expression  */
  YYSYMBOL_factor = 74,                    /* factor  */
  YYSYMBOL_relational_op = 75,             /* relational_op  */
  YYSYMBOL_arithmetic_add_op = 76,         /* arithmetic_add_op  */
  YYSYMBOL_arithmetic_mult_op = 77,        /* arithmetic_mult_op  */
  YYSYMBOL_binary_logic_op = 78,           /* binary_logic_op  */
  YYSYMBOL_list_expression = 79,           /* list_expression  */
  YYSYMBOL_constructor = 80,               /* constructor  */
  YYSYMBOL_header = 81,                    /* header  */
  YYSYMBOL_tail = 82,                      /* tail  */
  YYSYMBOL_map = 83,                       /* map  */
  YYSYMBOL_filter = 84,                    /* filter  */
  YYSYMBOL_list_comparation = 85,          /* list_comparation  */
  YYSYMBOL_in_out_expression = 86,         /* in_out_expression  */
  YYSYMBOL_read = 87,                      /* read  */
  YYSYMBOL_write = 88,                     /* write  */
  YYSYMBOL_function_call = 89,             /* function_call  */
  YYSYMBOL_arguments = 90,                 /* arguments  */
  YYSYMBOL_list_arguments = 91,            /* list_arguments  */
  YYSYMBOL_var = 92                        /* var  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if 1

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
#endif /* 1 */

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
#define YYLAST   5028

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  415

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    37,    38,
      39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   125,   125,   127,   127,   129,   129,   129,   129,   131,
     135,   139,   139,   141,   141,   143,   145,   145,   147,   147,
     149,   153,   157,   159,   163,   165,   167,   167,   169,   169,
     169,   169,   169,   169,   169,   169,   171,   171,   173,   175,
     175,   177,   177,   179,   179,   179,   179,   181,   181,   183,
     183,   183,   183,   185,   185,   187,   187,   189,   189,   191,
     191,   193,   193,   193,   193,   193,   195,   195,   195,   195,
     195,   195,   197,   197,   199,   199,   201,   201,   203,   203,
     203,   203,   203,   203,   205,   207,   209,   211,   213,   215,
     215,   217,   217,   219,   221,   221,   223,   223,   225,   227,
     227,   229,   229,   229,   229
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "LIST",
  "NIL", "IF", "ELSE", "FOR", "RETURN", "READ", "WRITE", "WRITELN",
  "SUM_OP", "SUB_OP", "MULT_OP", "DIV_OP", "LIST_HEADER",
  "LIST_CONSTRUCTOR", "LIST_TAIL", "LIST_MAP", "LIST_FILTER", "EXC_OP",
  "OR_OP", "AND_OP", "EQUAL_OP", "DIFF_OP", "LST_OP", "GRT_OP",
  "LST_EQ_OP", "GRT_EQ_OP", "ASSIGN_OP", "'('", "')'", "'{'", "'}'",
  "SEMI", "COMMA", "REFFER", "ID", "INT_CONST", "FLOAT_CONST", "STRING",
  "CHAR", "$accept", "program", "declarations", "declaration",
  "variable_declaration", "list_declaration", "function_declaration",
  "type_specifier", "parameters", "list_paremeters", "parameter",
  "variable_simple_declaration", "list_simple_declaration",
  "function_simple_declaration", "compound_statement",
  "local_declarations", "list_statements", "statement",
  "conditional_statement", "iteration_statement", "expression_statement",
  "return_statement", "expression", "assign_expression",
  "simple_expression", "relational_expression",
  "arithmetic_add_expression", "arithmetic_mul_expression",
  "unary_sub_expression", "factor", "relational_op", "arithmetic_add_op",
  "arithmetic_mult_op", "binary_logic_op", "list_expression",
  "constructor", "header", "tail", "map", "filter", "list_comparation",
  "in_out_expression", "read", "write", "function_call", "arguments",
  "list_arguments", "var", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    40,    41,   123,   125,   288,   289,   290,
     291,   292,   293,   294,   295
};
#endif

#define YYPACT_NINF (-244)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-105)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     189,   838,    18,    19,     3,   871,   891,   962,   976,   991,
      24,   -23,   -11,    -5,  -244,   996,    14,    10,  1001,  1050,
      38,    47,    16,    26,     1,   115,   221,   262,   308,  3237,
    1058,    42,   554,    16,    12,    50,    60,  1023,    90,   122,
     129,   783,    78,    99,    88,  3485,  2477,  3935,  3983,  4002,
    2517,  2557,  2597,    13,  2637,  2677,  2717,  2757,  2797,  2837,
      37,    68,    20,   918,  4211,  4021,  4040,  4059,    71,    85,
      95,    98,   106,   162,   194,  1637,   145,   172,  4078,   559,
    1087,   616,  3485,  1483,  2877,   196,   235,   166,   970,   970,
    3959,  4097,   248,   257,  1212,    51,   226,   229,   265,   284,
     488,  3293,  1134,  2917,   261,  2957,   156,   179,   201,   104,
     195,   223,   367,   442,   476,    88,   507,   530,    88,   629,
     662,    88,  1677,  1717,   131,  3325,  2997,   268,   275,   287,
     210,   615,   132,   289,   301,  4116,   260,   291,   292,   325,
     326,   368,  4135,    57,   309,   617,   391,    88,  4626,  4230,
    4154,  4173,  3277,  3485,   315,   319,   328,  4192,  3499,  4640,
    1757,   211,   149,  3237,  3237,  3037,  3077,  3237,    27,   349,
     360,   362,   369,   811,   364,   390,   693,  3485,  4249,  1568,
    4312,   453,   622,  4906,   770,  4333,  4354,  4375,   461,   516,
     639,   645,   659,   663,   665,   666,   396,   402,  4396,  3341,
     412,  4270,   428,   434,   423,   424,   404,   848,   433,   436,
     717,  3485,  3574,  1333,  3624,   167,    82,  1084,  3892,  3649,
    3674,  3699,   169,   206,   249,   293,   300,   338,   350,   351,
     426,   448,  3724,  3531,   504,   307,   439,   460,   469,  3357,
    3237,  1797,  1837,  1877,   467,   470,  1917,  1957,  1997,  2037,
    2077,   547,  1450,   473,   475,   477,   486,   478,  3117,  3157,
     567,   570,  4291,  4417,   671,   675,  4919,   682,   494,   496,
     531,   536,   588,  3373,   693,   693,   693,   687,   712,  3405,
     707,   525,   539,   736,  3599,  3749,   400,   407,  1373,   742,
     524,   540,   561,   581,   843,  3421,   318,   717,   717,   717,
     408,   416,  3545,   693,  4932,   440,  3485,  1483,  2117,   606,
     560,  2157,  2197,  2237,  1539,  1597,  3197,   582,  4438,   743,
     744,   749,   768,   771,   784,  4459,   592,  4540,  4480,  4501,
     613,   860,   605,   608,   739,  3485,  4561,  4659,  4677,   640,
      54,  4958,  4875,  4695,  4713,  4731,   642,   669,   670,   677,
     679,   709,   710,  4749,  3774,   458,   505,   527,   564,   586,
     593,  3799,   678,   717,  4594,  3910,  3824,  3849,  4945,   800,
    3325,  2277,  2317,  4522,  4581,  4767,   718,   719,  4971,   801,
     699,   702,   745,   759,  3453,   727,   425,   739,   739,   739,
    3874,  4610,  3277,  3485,  4785,   752,   772,   773,   794,  4803,
     788,   807,   739,  4984,  4893,  4821,  4839,  2357,   802,  4857,
    4997,  3277,  3277,  2397,  2437
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -244,   812,     4,     6,  -244,    55,  -244,  -244,
     793,     0,     2,  -244,   -21,  -154,  -244,   -37,  -134,  -131,
     -75,  -119,   225,   -20,   480,   380,   872,   798,   635,   279,
    -164,  -157,  -148,   -52,   997,  1035,  1039,  1071,  1144,  1235,
    1238,     9,    11,    59,   534,  -243,  -244,   758
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    50,    51,     9,   168,    24,    25,
      26,   169,   170,    13,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     115,   118,   121,   235,    68,    69,    70,    71,    72,    73,
      74,   195,   196,   197,    78,   144,   145,   133
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    30,    12,    14,     7,    11,     8,    12,   125,     7,
     108,     8,    80,   255,    18,     2,     3,   103,   247,   274,
      27,   248,    28,   -13,   -14,   181,    19,   275,    20,    16,
     326,    31,   256,   250,    27,    33,    28,   276,    75,   -44,
      76,     2,     3,   -22,   106,   107,    86,   -20,   171,   102,
     153,    29,   362,   297,    21,    10,   104,   -44,   -13,   -14,
      10,   298,   181,    75,    17,    76,    32,   257,   202,   202,
     206,   299,    22,   -44,   105,    23,   236,   249,   106,   107,
     -23,   215,    79,    82,   -21,   135,   310,   -43,    77,    23,
     -45,  -100,    86,    83,   171,  -100,   172,   203,   203,   204,
     204,   -44,   274,    41,   -78,   -43,   106,   107,   -45,    86,
     229,   171,   230,    77,   -79,   160,   -44,   -80,    92,   -70,
     -44,    45,   -78,    87,   297,   -81,   165,   166,    90,    48,
      49,   246,   -79,   181,    86,   -80,   171,   -70,   215,    93,
     274,   400,   172,   -81,   -70,   -70,   -70,   205,   205,   -15,
     206,   -45,   244,    34,   245,    88,   242,   181,   243,   172,
     231,   252,    89,   253,   296,   152,  -103,   229,   236,   230,
     275,   -76,    75,    75,    76,    76,    75,   387,    76,   -76,
     276,   -82,   122,   -99,   172,   388,   -43,   -99,   -45,   -76,
       1,   181,     2,     3,   -77,   389,   -76,   -76,   -76,   -82,
     297,   -43,   -77,   -45,   274,   -43,   127,   -45,   298,   123,
     -71,   254,   -77,   -83,   387,   104,    41,   231,   299,   -77,
     -77,   -77,    77,    77,   147,   -78,    77,   297,   -71,   206,
     206,   -83,   370,   126,    45,   -71,   -71,   -71,   -66,   387,
     -78,    90,    48,    49,   -78,   164,   387,   388,    86,    75,
     171,    76,   181,   215,   -46,   -17,   -66,   389,   247,   -17,
     202,   248,    85,   -66,   -66,   -66,   136,   -85,   -79,   137,
      95,   138,   -46,   250,   215,   215,   -86,   247,   247,   -87,
     248,   248,   229,   -79,   230,   -85,   181,   -79,   386,   203,
     139,   204,   250,   250,   -86,   393,   -18,   -87,   172,    77,
     -18,   146,   154,   229,   229,   230,   230,   124,   200,  -101,
     -88,   -89,   -80,   130,   130,   181,    86,   249,   171,   -81,
      91,  -102,   173,   155,   187,   141,   143,   -80,   -88,   -89,
     303,   -80,   231,   207,   -81,   156,   249,   249,   -81,   205,
     177,   363,   -19,   157,   -90,   -48,   -19,   262,   179,   180,
     234,   211,   -93,   231,   231,   407,   -94,   -82,   284,   213,
     214,   187,   -90,   -48,   215,   -95,   172,   187,   187,   -83,
     -46,   246,   -82,   181,   413,   414,   -82,   251,   161,    86,
     221,   171,   -68,   162,   -83,   -46,   258,   104,   -83,   -46,
     246,   246,   244,   229,   245,   230,   242,   259,   243,   260,
     -68,   252,   267,   253,   264,   -47,   261,   -68,   -68,   -68,
     -84,   244,   244,   245,   245,   242,   242,   243,   243,   -85,
     252,   252,   253,   253,    94,   183,   -86,   -91,   -84,   172,
     265,   104,   187,   277,   -85,   -92,   289,   221,   -85,   278,
     331,   -86,   -91,   231,   283,   -86,   -91,   -43,   402,   279,
     -92,   254,   263,   -46,   -92,   187,   187,   -67,   335,   -84,
     281,   282,   183,   300,   309,   374,   337,   338,   183,   183,
     254,   254,   -43,   286,   -84,   -67,   287,   -87,   -84,   305,
     -45,   217,   -67,   -67,   -67,   301,   285,   -43,   148,   221,
     187,   -69,   -87,   306,   140,   -45,   -87,   324,   143,    38,
      39,    40,   307,    41,   311,   339,    42,   312,    43,   -69,
     314,    44,   315,   316,   187,   -20,   -69,   -69,   -69,   360,
     143,    45,   -72,   104,   -88,   182,   317,   159,    47,    48,
      49,   369,   200,   183,   319,   -78,   320,   321,   217,   -88,
     -72,   302,   322,   -88,   -91,   -73,   -89,   -72,   -72,   -72,
     -78,   187,   221,   187,   187,   187,   266,   183,   -92,   345,
     379,   -89,   182,   -73,   355,   -89,   104,   357,   131,   131,
     -73,   -73,   -73,   221,   221,   221,   221,   221,   221,   198,
     356,   216,   187,   -90,   313,   187,   -91,   358,   -20,   -92,
     288,   183,   -20,   -21,   323,   234,   372,   -21,   -90,    38,
      39,    40,   -90,   173,   -91,   -48,   174,   -92,   175,   143,
     375,   176,   236,   345,   187,   304,   198,   251,   408,   -21,
     -48,   177,   198,   198,   -48,   104,   373,   -47,   178,   179,
     180,   -47,   -48,   182,   -44,   232,   251,   251,   216,   106,
     107,   -44,   221,   371,   -74,   376,   106,   107,   377,  -104,
     -16,   -98,   183,   217,   -16,   158,   -44,   182,   -79,   385,
     341,   -45,   -74,   221,   -80,   345,   345,   345,   345,   -74,
     -74,   -74,   187,   -79,   217,   217,   364,   -75,   -81,   -80,
     186,   345,   -82,   368,   -83,   -46,   183,   198,   -78,   -79,
     -85,   182,   232,   -81,   -86,   -75,   -80,   -82,   -81,   -83,
     -46,   206,   -75,   -75,   -75,   -85,   -91,   198,   173,   -86,
     198,   198,   390,   330,   378,   183,   318,   186,    38,    39,
      40,   -91,   331,   186,   186,   332,   177,   333,   -82,   -83,
     334,   -92,   207,   262,   179,   180,   220,   -85,   -86,   395,
     335,   232,   396,   391,   232,   198,   -92,   336,   337,   338,
     211,   397,   182,   216,   331,   -84,   151,   284,   213,   214,
     340,   206,   -87,   -88,   217,   398,   403,   401,   -89,   198,
     -84,   -87,   335,   183,   216,   216,   354,   -87,   -88,   374,
     337,   338,   410,   -89,   116,   117,   182,   -90,   186,   -54,
     -48,   -88,   -89,   220,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -90,   206,   -54,   -48,   198,   232,   198,   198,
     198,   186,   186,   -90,   353,   182,    45,    15,   -47,   206,
     206,   206,   409,    90,    48,    49,   -84,    81,   232,   232,
     232,   232,   232,   232,   392,   394,   412,   198,    -8,    -8,
     198,    -8,    -8,   185,   177,   220,   186,   134,     0,   359,
       0,   262,   179,   180,    38,    39,    40,     0,   207,     0,
       0,   208,     0,   209,   216,   353,   210,     0,   353,   198,
     186,    -2,     1,   182,     2,     3,   211,     0,     0,     0,
     185,   211,     0,   212,   213,   214,   185,   185,   284,   213,
     214,    -4,    -4,   335,    -4,    -4,     0,   232,     0,   219,
     374,   337,   338,     0,     0,     0,     0,   186,   220,   186,
     186,   329,     0,     0,     0,   344,   150,   184,   232,     0,
     353,   353,   353,   353,     0,     0,     0,   198,     0,   220,
     220,   220,   220,   220,   367,     0,   353,   -52,   186,     0,
       0,   186,   -52,   -52,   109,   110,   111,   112,   113,   114,
       0,   185,     0,     0,   184,   -52,   219,     0,     0,     0,
     184,   184,    -5,    -5,     0,    -5,    -5,     0,     0,   344,
     186,     0,     0,   218,   185,   185,    -6,    -6,     0,    -6,
      -6,    38,    39,    40,     0,   173,     0,   149,   174,     0,
     175,    -7,    -7,   176,    -7,    -7,    -3,    -3,   220,    -3,
      -3,    -9,    -9,   177,    -9,    -9,     0,     0,   219,   185,
     201,   179,   180,   128,   129,     0,     0,     0,     0,   220,
       0,   344,   344,   344,   406,   184,     0,     0,   186,     0,
     218,     0,     0,   185,    38,    39,    40,   344,    41,     0,
       0,    42,   188,    43,     0,     0,    44,     0,   184,   184,
     -10,   -10,     0,   -10,   -10,     0,    45,     0,   -12,   -12,
      84,   -12,   -12,    47,    48,    49,     0,     0,     0,     0,
     185,   219,   185,   328,     0,     0,     0,     0,   343,   188,
     189,     0,   218,   184,   190,   132,   132,   -11,   -11,     0,
     -11,   -11,   219,   219,   219,   219,   366,     0,   222,     0,
       0,   185,     0,   -52,   185,     0,     0,   184,   -52,   -52,
     109,   110,   111,   112,   113,   114,   191,   189,   -52,     0,
       0,   190,   -52,   189,   189,     0,     0,   190,   190,     0,
       0,     0,   343,   185,   -24,   -24,   223,   -24,   -24,     0,
     224,     0,     0,     0,   184,   218,   327,     0,     0,     0,
     188,     0,   342,   191,     0,   222,     0,     0,     0,   191,
     191,   219,     0,     0,     0,     0,   218,   218,   218,   365,
       0,     0,   225,     0,   188,   184,     0,     0,   184,     0,
       0,     0,   219,     0,   343,   343,   405,     0,   189,   192,
       0,   185,   190,   223,     0,     0,     0,   224,     0,     0,
     343,     0,     0,     0,     0,     0,   342,   184,   188,     0,
       0,     0,   189,     0,     0,     0,   190,     0,     0,     0,
       0,     0,     0,     0,   191,     0,   192,     0,     0,   225,
       0,   -49,   192,   192,     0,   218,   -49,   -49,   109,   110,
     111,   112,   113,   114,     0,   226,   189,     0,   191,   -49,
     190,     0,     0,     0,     0,     0,   218,     0,   342,   404,
       0,     0,     0,     0,     0,   184,     0,     0,     0,   188,
     222,     0,     0,     0,   342,     0,     0,   346,     0,     0,
     193,     0,   191,   194,     0,     0,     0,     0,     0,     0,
       0,   222,   222,     0,     0,     0,     0,   192,     0,     0,
       0,     0,   226,   188,     0,     0,     0,   189,   223,     0,
       0,   190,   224,     0,     0,   347,     0,   193,     0,   348,
     194,   192,     0,   193,   193,     0,   194,   194,     0,   223,
     223,     0,   188,   224,   224,     0,   227,     0,     0,   228,
       0,   189,     0,   191,   225,   190,     0,   -64,   -64,   -64,
     -64,   349,   -64,     0,     0,   192,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   225,   225,   -64,     0,     0,
     189,   -64,     0,     0,   190,     0,     0,   191,     0,     0,
       0,   222,     0,     0,     0,     0,     0,     0,   193,     0,
     188,   194,   -49,   227,     0,     0,   228,   -49,   -49,   109,
     110,   111,   112,   113,   114,     0,   191,   -49,     0,     0,
       0,   -49,   193,     0,     0,   194,   192,   226,     0,   223,
       0,     0,     0,   224,   350,     0,     0,     0,   189,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   226,   226,
       0,     0,     0,     0,     0,     0,   193,     0,     0,   194,
     192,     0,     0,   -35,   -35,   225,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   191,   -35,     0,     0,   -35,   -46,
     -35,     0,     0,   -35,     0,     0,     0,     0,     0,   192,
       0,     0,     0,   -35,     0,   -35,   -35,   -35,     0,     0,
     -35,   -35,   -35,     0,    38,    39,    40,     0,    41,     0,
       0,    42,     0,    43,     0,     0,    44,   193,   227,     0,
     194,   228,     0,     0,     0,   351,    45,     0,   352,     0,
     199,     0,     0,    47,    48,    49,     0,     0,   226,   227,
     227,     0,   228,   228,     0,     0,     0,   192,     0,     0,
       0,   193,   -91,   -91,   194,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,     0,     0,   -91,   -91,   -91,
       0,     0,   -91,     0,     0,     0,     0,     0,     0,     0,
     193,     0,   -91,   194,   -91,   -91,   -91,     0,     0,   -91,
     -91,   -91,   -64,   -64,   -64,   -64,     0,   -64,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -92,   -92,   -64,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,   -92,     0,     0,   -92,   -92,   -92,     0,   227,
     -92,     0,   228,     0,     0,     0,     0,     0,   193,     0,
     -92,   194,   -92,   -92,   -92,     0,     0,   -92,   -92,   -92,
     -35,   -35,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,     0,   -35,   -46,   -35,     0,     0,
     -35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,     0,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -91,   -91,     0,     0,   -91,     0,   -91,   -91,   -91,   -91,
     -91,     0,   -91,     0,     0,   -91,   -91,   -91,     0,     0,
     -91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -91,     0,   -91,   -91,   -91,     0,     0,   -91,   -91,   -91,
     -92,   -92,     0,     0,   -92,     0,   -92,   -92,   -92,   -92,
     -92,     0,   -92,     0,     0,   -92,   -92,   -92,     0,     0,
     -92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -92,     0,   -92,   -92,   -92,     0,     0,   -92,   -92,   -92,
     -36,   -36,     0,     0,   -36,   163,   -36,   -36,   -36,   -36,
     -36,     0,   -36,     0,     0,   -36,     0,   -36,     0,     0,
     -36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,     0,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     0,   -40,     0,     0,   -40,     0,   -40,     0,     0,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,     0,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,     0,   -33,     0,   -33,     0,     0,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,     0,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,     0,     0,   -34,     0,   -34,     0,     0,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,     0,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,     0,     0,   -29,     0,   -29,     0,     0,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,     0,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,     0,     0,   -30,     0,   -30,     0,     0,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,     0,   -30,   -30,   -30,     0,     0,   -30,   -30,   -30,
     -31,   -31,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,     0,   -31,     0,   -31,     0,     0,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,     0,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,     0,   -28,     0,   -28,     0,     0,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,     0,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,     0,   -32,     0,   -32,     0,     0,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,     0,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
     -42,   -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,     0,     0,   -42,     0,   -42,     0,     0,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -42,     0,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,
      -9,    -9,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,     0,    -9,     0,     0,    -9,     0,    -9,     0,     0,
      -9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -9,     0,    -9,    -9,    -9,     0,     0,    -9,    -9,    -9,
     -10,   -10,     0,     0,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,     0,   -10,     0,     0,   -10,     0,   -10,     0,     0,
     -10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -10,     0,   -10,   -10,   -10,     0,     0,   -10,   -10,   -10,
     -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,   -39,     0,     0,   -39,     0,   -39,     0,     0,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,     0,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,     0,     0,   -41,     0,   -41,     0,     0,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,     0,   -41,   -41,   -41,     0,     0,   -41,   -41,   -41,
     -24,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,     0,     0,   -24,     0,   -24,     0,     0,
     -24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -24,     0,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -36,   -36,     0,     0,   -36,   411,   -36,   -36,   -36,   -36,
     -36,     0,   -36,     0,     0,   -36,     0,   -36,     0,     0,
     -36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,     0,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -37,   -37,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,     0,     0,   -37,     0,   -37,     0,     0,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,     0,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,
     -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,     0,   -38,     0,   -38,     0,     0,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,     0,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,
     -40,   -40,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,
     -40,     0,   -40,     0,     0,   -40,     0,   -40,     0,     0,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,     0,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -33,   -33,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,     0,   -33,     0,   -33,     0,     0,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,     0,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -34,   -34,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,   -34,     0,     0,   -34,     0,   -34,     0,     0,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,     0,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,
     -29,   -29,     0,     0,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,     0,     0,   -29,     0,   -29,     0,     0,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,     0,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
       2,     3,     0,     0,    35,     0,    36,    37,    38,    39,
      40,     0,    41,     0,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,   167,   -25,    46,     0,     0,    47,    48,    49,
     -27,   -27,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,
     -27,     0,   -27,     0,     0,   -27,     0,   -27,     0,     0,
     -27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,     0,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,
     -30,   -30,     0,     0,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,     0,     0,   -30,     0,   -30,     0,     0,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,     0,   -30,   -30,   -30,     0,     0,   -30,   -30,   -30,
     -31,   -31,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,     0,   -31,     0,   -31,     0,     0,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,     0,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,
     -28,   -28,     0,     0,   -28,     0,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,     0,   -28,     0,   -28,     0,     0,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,     0,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -32,   -32,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,     0,   -32,     0,   -32,     0,     0,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,     0,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
     -42,   -42,     0,     0,   -42,     0,   -42,   -42,   -42,   -42,
     -42,     0,   -42,     0,     0,   -42,     0,   -42,     0,     0,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -42,     0,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,
     -26,   -26,     0,     0,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,     0,     0,   -26,     0,   -26,     0,     0,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -26,     0,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,
     -39,   -39,     0,     0,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,   -39,     0,     0,   -39,     0,   -39,     0,     0,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,     0,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,
     -41,   -41,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,     0,     0,   -41,     0,   -41,     0,     0,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,     0,   -41,   -41,   -41,     0,     0,   -41,   -41,   -41,
     -37,   -37,     0,     0,   -37,     0,   -37,   -37,   -37,   -37,
     -37,     0,   -37,     0,     0,   -37,     0,   -37,     0,     0,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,     0,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,
     -38,   -38,     0,     0,   -38,     0,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,     0,   -38,     0,   -38,     0,     0,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,     0,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,
      -9,    -9,     0,     0,    -9,     0,    -9,    -9,    -9,    -9,
      -9,     0,    -9,     0,     0,    -9,     0,    -9,     0,     0,
      -9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -9,     0,    -9,    -9,    -9,     0,     0,    -9,    -9,    -9,
     -10,   -10,     0,     0,   -10,     0,   -10,   -10,   -10,   -10,
     -10,     0,   -10,     0,     0,   -10,     0,   -10,     0,     0,
     -10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -10,     0,   -10,   -10,   -10,     0,     0,   -10,   -10,   -10,
     -24,   -24,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,     0,     0,   -24,     0,   -24,     0,     0,
     -24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -24,     0,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,
       2,     3,     0,     0,    35,     0,    36,    37,    38,    39,
      40,     0,    41,     0,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,   167,     0,    46,     0,     0,    47,    48,    49,
       2,     3,     0,     0,   237,     0,   238,   239,    38,    39,
      40,     0,    41,     0,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    38,    39,    40,     0,   207,     0,
      45,   208,   240,   209,   241,     0,   210,    47,    48,    49,
       0,     0,     0,     0,     0,     0,   211,   142,     0,     0,
       0,     0,     0,   212,   213,   214,    38,    39,    40,     0,
      41,     0,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,   -40,   -40,   -40,     0,   -40,     0,    45,   -40,
       0,   -40,   233,     0,   -40,    47,    48,    49,    38,    39,
      40,     0,    41,     0,   -40,    42,     0,    43,   -40,     0,
      44,   -40,   -40,   -40,    38,    39,    40,     0,   207,     0,
      45,   208,     0,   209,   308,     0,   210,    47,    48,    49,
       0,     0,     0,     0,     0,     0,   211,   325,     0,     0,
       0,     0,     0,   212,   213,   214,   -39,   -39,   -39,     0,
     -39,     0,     0,   -39,     0,   -39,     0,     0,   -39,     0,
       0,     0,    38,    39,    40,     0,   207,     0,   -39,   208,
       0,   209,   -39,     0,   210,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,   211,   361,     0,     0,     0,     0,
       0,   212,   213,   214,    38,    39,    40,     0,   207,     0,
       0,   208,     0,   209,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   399,     0,     0,
       0,     0,     0,   212,   213,   214,    38,    39,    40,     0,
     173,     0,     0,   174,     0,   175,     0,     0,   176,     0,
      38,    39,    40,     0,   207,     0,     0,   208,   177,   209,
       0,     0,   210,     0,     0,   178,   179,   180,     0,     0,
       0,     0,   211,     0,     0,     0,     0,     0,     0,   212,
     213,   214,   -40,   -40,   -40,     0,   -40,     0,     0,   -40,
       0,   -40,     0,     0,   -40,     0,   -39,   -39,   -39,     0,
     -39,     0,     0,   -39,   -40,   -39,     0,     0,   -39,     0,
       0,   -40,   -40,   -40,     0,     0,     0,     0,   -39,     0,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -63,   -63,
     -63,   -63,     0,   -63,     0,   290,   291,     0,   -63,   -63,
     292,   293,   -63,   -63,   -63,   -63,   294,   295,   -63,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,     0,   -63,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   295,   -63,     0,     0,     0,   -63,   -65,   -65,
     -65,   -65,     0,   -65,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,     0,
       0,     0,   -65,   -56,   -56,   119,   120,     0,   -56,     0,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,     0,     0,   -56,     0,     0,     0,   -56,   -58,   -58,
     -58,   -58,     0,   -58,     0,     0,     0,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,     0,     0,   -58,     0,
       0,     0,   -58,   -60,   -60,   -60,   -60,     0,   -60,     0,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,   -60,     0,     0,     0,   -60,   -62,   -62,
     -62,   -62,     0,   -62,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,     0,
       0,     0,   -62,   -59,   -59,   -59,   -59,     0,   -59,     0,
       0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,   -59,     0,     0,     0,   -59,   -61,   -61,
     -61,   -61,     0,   -61,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,   -61,     0,
       0,     0,   -61,   -97,   -97,   -97,   -97,     0,   -97,     0,
       0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,     0,     0,   -97,     0,     0,     0,   -97,   -55,   -55,
     119,   120,     0,   -55,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,     0,   -55,     0,
       0,     0,   -55,   -57,   -57,   -57,   -57,     0,   -57,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,   -57,     0,     0,     0,   -57,   -96,   -96,
     -96,   -96,     0,   -96,     0,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   116,   117,   -96,     0,
       0,   -54,   -96,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   116,   117,   -54,     0,     0,   -53,
     -54,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,   -53,     0,     0,     0,   -53,   -63,
     -63,   -63,   -63,     0,   -63,     0,    96,    97,     0,   -63,
     -63,    98,    99,   -63,   -63,   -63,   -63,   100,   101,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,     0,   -63,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   101,     0,     0,     0,   -63,   -64,   -64,   -64,
     -64,     0,   -64,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   -65,   -65,   -65,   -65,
     -64,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -56,   -56,   119,   120,   -65,
     -56,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,     0,   -58,   -58,   -58,   -58,   -56,   -58,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -60,   -60,   -60,   -60,   -58,   -60,     0,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,     0,   -62,   -62,   -62,   -62,   -60,   -62,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -59,   -59,   -59,   -59,   -62,   -59,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
     -61,   -61,   -61,   -61,   -59,   -61,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -97,
     -97,   -97,   -97,   -61,   -97,     0,     0,     0,     0,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -55,   -55,
     119,   120,   -97,   -55,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,   -57,   -57,   -57,
     -57,   -55,   -57,     0,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   -96,   -96,   -96,   -96,
     -57,   -96,     0,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   116,   117,     0,     0,   -96,
     -54,     0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,   116,   117,     0,     0,   -54,   -53,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,   -63,   -63,   -63,   -63,   -53,   -63,     0,
     268,   269,     0,   -63,   -63,   270,   271,   -63,   -63,   -63,
     -63,   272,   273,   -63,   -63,   -63,   -63,   -63,     0,   -63,
       0,   268,   269,     0,   -63,   -63,   270,   271,   -63,   -63,
     -63,   -63,   280,   273,   -63,   -63,   -63,   -63,   -63,     0,
     -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   273,   -63,   -65,   -65,   -65,   -65,
       0,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -65,   -56,   -56,   119,
     120,     0,   -56,     0,     0,     0,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,     0,     0,   -56,   -58,   -58,
     -58,   -58,     0,   -58,     0,     0,     0,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,     0,     0,   -58,   -60,
     -60,   -60,   -60,     0,   -60,     0,     0,     0,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,   -60,
     -62,   -62,   -62,   -62,     0,   -62,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -62,   -59,   -59,   -59,   -59,     0,   -59,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,   -59,   -61,   -61,   -61,   -61,     0,   -61,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -61,   -97,   -97,   -97,   -97,     0,   -97,     0,
       0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,     0,     0,   -97,   -55,   -55,   119,   120,     0,   -55,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,   -55,   -57,   -57,   -57,   -57,     0,
     -57,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,   -57,   -96,   -96,   -96,   -96,
       0,   -96,     0,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   116,   117,   -96,     0,     0,   -53,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,   -53,   -63,   -63,   -63,   -63,     0,
     -63,     0,   380,   381,     0,   -63,   -63,   382,   383,   -63,
     -63,   -63,   -63,   280,   384,   -63,   -63,   -63,   -63,     0,
     -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -50,   384,     0,     0,     0,   -50,   -50,
     109,   110,   111,   112,   113,   114,     0,     0,   -50,   -51,
       0,     0,   -50,     0,   -51,   -51,   109,   110,   111,   112,
     113,   114,     0,     0,   -51,   -50,     0,     0,   -51,     0,
     -50,   -50,   109,   110,   111,   112,   113,   114,     0,   -51,
       0,     0,     0,   -50,   -51,   -51,   109,   110,   111,   112,
     113,   114,     0,   -64,   -64,   -64,   -64,   -51,   -64,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -65,   -65,   -65,   -65,     0,   -65,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -56,
     -56,   119,   120,     0,   -56,     0,     0,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -58,   -58,   -58,
     -58,     0,   -58,     0,     0,     0,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -60,   -60,   -60,   -60,     0,
     -60,     0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -62,   -62,   -62,   -62,     0,   -62,     0,
       0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -59,   -59,   -59,   -59,     0,   -59,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -61,
     -61,   -61,   -61,     0,   -61,     0,     0,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -97,   -97,   -97,
     -97,     0,   -97,     0,     0,     0,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -55,   -55,   119,   120,     0,
     -55,     0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -57,   -57,   -57,   -57,     0,   -57,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -96,   -96,   -96,   -96,     0,   -96,     0,     0,     0,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   116,
     117,     0,     0,     0,   -54,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   116,   117,     0,
       0,     0,   -53,     0,     0,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -52,     0,     0,     0,     0,
     -52,   -52,   109,   110,   111,   112,   113,   114,   -49,     0,
     -52,     0,     0,   -49,   -49,   109,   110,   111,   112,   113,
     114,   -50,     0,   -49,     0,     0,   -50,   -50,   109,   110,
     111,   112,   113,   114,   -51,     0,   -50,     0,     0,   -51,
     -51,   109,   110,   111,   112,   113,   114,   -52,     0,   -51,
       0,     0,   -52,   -52,   109,   110,   111,   112,   113,   114,
     -49,     0,     0,     0,     0,   -49,   -49,   109,   110,   111,
     112,   113,   114,   -50,     0,     0,     0,     0,   -50,   -50,
     109,   110,   111,   112,   113,   114,   -51,     0,     0,     0,
       0,   -51,   -51,   109,   110,   111,   112,   113,   114
};

static const yytype_int16 yycheck[] =
{
       0,    22,     0,     0,     0,     5,     0,     5,    83,     5,
      62,     5,    33,   167,    37,     3,     4,    54,   152,   183,
      20,   152,    20,     5,     5,    45,    37,   184,    33,     5,
     273,     5,     5,   152,    34,    34,    34,   185,    29,    19,
      29,     3,     4,    33,    24,    25,    37,    37,    37,    36,
     125,    35,   295,   217,    40,     0,    19,    37,    40,    40,
       5,   218,    82,    54,    40,    54,    40,    40,    88,    89,
      19,   219,    34,    19,    37,    20,    19,   152,    24,    25,
      33,   101,    40,    33,    37,    34,   240,    19,    29,    34,
      19,    34,    83,    33,    83,    38,    37,    88,    89,    88,
      89,    19,   266,    15,    19,    37,    24,    25,    37,   100,
     101,   100,   101,    54,    19,   152,    34,    19,    40,    15,
      38,    33,    37,    33,   288,    19,   163,   164,    40,    41,
      42,   152,    37,   153,   125,    37,   125,    33,   158,    40,
     304,   384,    83,    37,    40,    41,    42,    88,    89,    34,
      19,    19,   152,    38,   152,    33,   152,   177,   152,   100,
     101,   152,    33,   152,   216,    34,    34,   158,    19,   158,
     327,    15,   163,   164,   163,   164,   167,   341,   167,    23,
     328,    19,    37,    34,   125,   342,    19,    38,    19,    33,
       1,   211,     3,     4,    15,   343,    40,    41,    42,    37,
     364,    34,    23,    34,   368,    38,    40,    38,   365,    37,
      15,   152,    33,    19,   378,    19,    15,   158,   366,    40,
      41,    42,   163,   164,    23,    19,   167,   391,    33,    19,
      19,    37,   307,    37,    33,    40,    41,    42,    15,   403,
      34,    40,    41,    42,    38,    34,   410,   404,   239,   240,
     239,   240,   272,   273,    19,    34,    33,   405,   392,    38,
     280,   392,    37,    40,    41,    42,    40,    19,    19,    40,
      45,     6,    37,   392,   294,   295,    19,   411,   412,    19,
     411,   412,   273,    34,   273,    37,   306,    38,   340,   280,
       6,   280,   411,   412,    37,   370,    34,    37,   239,   240,
      38,    40,    34,   294,   295,   294,   295,    82,    83,    34,
      19,    19,    19,    88,    89,   335,   307,   392,   307,    19,
      41,    34,    15,    34,    45,   100,   101,    34,    37,    37,
      23,    38,   273,    15,    34,    34,   411,   412,    38,   280,
      33,    23,    34,    34,    19,    19,    38,    40,    41,    42,
     125,    33,    37,   294,   295,   392,    37,    19,    40,    41,
      42,    82,    37,    37,   384,    37,   307,    88,    89,    19,
      19,   392,    34,   393,   411,   412,    38,   152,   153,   370,
     101,   370,    15,   158,    34,    34,    37,    19,    38,    38,
     411,   412,   392,   384,   392,   384,   392,    37,   392,    37,
      33,   392,   177,   392,    40,    37,    37,    40,    41,    42,
      19,   411,   412,   411,   412,   411,   412,   411,   412,    19,
     411,   412,   411,   412,    44,    45,    19,    19,    37,   370,
      40,    19,   153,    37,    34,    19,   211,   158,    38,    37,
      15,    34,    34,   384,    40,    38,    38,    19,    23,    37,
      34,   392,   173,    19,    38,   176,   177,    15,    33,    19,
      37,    37,    82,    37,   239,    40,    41,    42,    88,    89,
     411,   412,    19,    40,    34,    33,    40,    19,    38,    40,
      19,   101,    40,    41,    42,    37,   207,    34,   108,   210,
     211,    15,    34,    33,     6,    34,    38,   272,   273,    11,
      12,    13,    33,    15,    37,   280,    18,    37,    20,    33,
      37,    23,    37,    36,   235,    37,    40,    41,    42,   294,
     295,    33,    15,    19,    19,    45,    40,   147,    40,    41,
      42,   306,   307,   153,    40,    19,    40,     6,   158,    34,
      33,    37,     6,    38,    19,    15,    19,    40,    41,    42,
      34,   272,   273,   274,   275,   276,   176,   177,    19,   280,
     335,    34,    82,    33,    40,    38,    19,     6,    88,    89,
      40,    41,    42,   294,   295,   296,   297,   298,   299,    45,
      40,   101,   303,    19,    37,   306,    19,     6,    34,    19,
     210,   211,    38,    34,     6,   370,    36,    38,    34,    11,
      12,    13,    38,    15,    37,    19,    18,    37,    20,   384,
     331,    23,    19,   334,   335,   235,    82,   392,   393,    37,
      34,    33,    88,    89,    38,    19,    34,    34,    40,    41,
      42,    38,    19,   153,    19,   101,   411,   412,   158,    24,
      25,    19,   363,    37,    15,    40,    24,    25,    40,    34,
      34,    34,   272,   273,    38,    38,    34,   177,    19,    19,
     280,    19,    33,   384,    19,   386,   387,   388,   389,    40,
      41,    42,   393,    34,   294,   295,   296,    15,    19,    34,
      45,   402,    19,   303,    19,    19,   306,   153,    19,    19,
      19,   211,   158,    34,    19,    33,    19,    34,    19,    34,
      34,    19,    40,    41,    42,    34,    19,   173,    15,    34,
     176,   177,    34,     6,   334,   335,    34,    82,    11,    12,
      13,    34,    15,    88,    89,    18,    33,    20,    19,    19,
      23,    19,    15,    40,    41,    42,   101,    19,    19,    40,
      33,   207,    40,   363,   210,   211,    34,    40,    41,    42,
      33,     6,   272,   273,    15,    19,   121,    40,    41,    42,
     280,    19,    19,    19,   384,     6,   386,    40,    19,   235,
      34,    19,    33,   393,   294,   295,    34,    34,    34,    40,
      41,    42,   402,    34,    14,    15,   306,    19,   153,    19,
      19,    19,    19,   158,    24,    25,    26,    27,    28,    29,
      30,    31,    34,    19,    34,    34,   272,   273,   274,   275,
     276,   176,   177,    19,   280,   335,    33,     5,    34,    19,
      19,    19,    34,    40,    41,    42,    19,    34,   294,   295,
     296,   297,   298,   299,    34,    34,    34,   303,     0,     1,
     306,     3,     4,    45,    33,   210,   211,    89,    -1,     6,
      -1,    40,    41,    42,    11,    12,    13,    -1,    15,    -1,
      -1,    18,    -1,    20,   384,   331,    23,    -1,   334,   335,
     235,     0,     1,   393,     3,     4,    33,    -1,    -1,    -1,
      82,    33,    -1,    40,    41,    42,    88,    89,    40,    41,
      42,     0,     1,    33,     3,     4,    -1,   363,    -1,   101,
      40,    41,    42,    -1,    -1,    -1,    -1,   272,   273,   274,
     275,   276,    -1,    -1,    -1,   280,   118,    45,   384,    -1,
     386,   387,   388,   389,    -1,    -1,    -1,   393,    -1,   294,
     295,   296,   297,   298,   299,    -1,   402,    19,   303,    -1,
      -1,   306,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,   153,    -1,    -1,    82,    37,   158,    -1,    -1,    -1,
      88,    89,     0,     1,    -1,     3,     4,    -1,    -1,   334,
     335,    -1,    -1,   101,   176,   177,     0,     1,    -1,     3,
       4,    11,    12,    13,    -1,    15,    -1,   115,    18,    -1,
      20,     0,     1,    23,     3,     4,     0,     1,   363,     3,
       4,     0,     1,    33,     3,     4,    -1,    -1,   210,   211,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,   384,
      -1,   386,   387,   388,   389,   153,    -1,    -1,   393,    -1,
     158,    -1,    -1,   235,    11,    12,    13,   402,    15,    -1,
      -1,    18,    45,    20,    -1,    -1,    23,    -1,   176,   177,
       0,     1,    -1,     3,     4,    -1,    33,    -1,     0,     1,
      37,     3,     4,    40,    41,    42,    -1,    -1,    -1,    -1,
     272,   273,   274,   275,    -1,    -1,    -1,    -1,   280,    82,
      45,    -1,   210,   211,    45,    88,    89,     0,     1,    -1,
       3,     4,   294,   295,   296,   297,   298,    -1,   101,    -1,
      -1,   303,    -1,    19,   306,    -1,    -1,   235,    24,    25,
      26,    27,    28,    29,    30,    31,    45,    82,    34,    -1,
      -1,    82,    38,    88,    89,    -1,    -1,    88,    89,    -1,
      -1,    -1,   334,   335,     0,     1,   101,     3,     4,    -1,
     101,    -1,    -1,    -1,   272,   273,   274,    -1,    -1,    -1,
     153,    -1,   280,    82,    -1,   158,    -1,    -1,    -1,    88,
      89,   363,    -1,    -1,    -1,    -1,   294,   295,   296,   297,
      -1,    -1,   101,    -1,   177,   303,    -1,    -1,   306,    -1,
      -1,    -1,   384,    -1,   386,   387,   388,    -1,   153,    45,
      -1,   393,   153,   158,    -1,    -1,    -1,   158,    -1,    -1,
     402,    -1,    -1,    -1,    -1,    -1,   334,   335,   211,    -1,
      -1,    -1,   177,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    82,    -1,    -1,   158,
      -1,    19,    88,    89,    -1,   363,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   101,   211,    -1,   177,    37,
     211,    -1,    -1,    -1,    -1,    -1,   384,    -1,   386,   387,
      -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,   272,
     273,    -1,    -1,    -1,   402,    -1,    -1,   280,    -1,    -1,
      45,    -1,   211,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,   295,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   306,    -1,    -1,    -1,   272,   273,    -1,
      -1,   272,   273,    -1,    -1,   280,    -1,    82,    -1,   280,
      82,   177,    -1,    88,    89,    -1,    88,    89,    -1,   294,
     295,    -1,   335,   294,   295,    -1,   101,    -1,    -1,   101,
      -1,   306,    -1,   272,   273,   306,    -1,    14,    15,    16,
      17,   280,    19,    -1,    -1,   211,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,   294,   295,    34,    -1,    -1,
     335,    38,    -1,    -1,   335,    -1,    -1,   306,    -1,    -1,
      -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
     393,   153,    19,   158,    -1,    -1,   158,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,   335,    34,    -1,    -1,
      -1,    38,   177,    -1,    -1,   177,   272,   273,    -1,   384,
      -1,    -1,    -1,   384,   280,    -1,    -1,    -1,   393,    -1,
      -1,    -1,   393,    -1,    -1,    -1,    -1,    -1,   294,   295,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,   211,
     306,    -1,    -1,     3,     4,   384,    -1,     7,     8,     9,
      10,    11,    12,    13,   393,    15,    -1,    -1,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,   335,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    -1,    -1,
      40,    41,    42,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    18,    -1,    20,    -1,    -1,    23,   272,   273,    -1,
     272,   273,    -1,    -1,    -1,   280,    33,    -1,   280,    -1,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,   384,   294,
     295,    -1,   294,   295,    -1,    -1,    -1,   393,    -1,    -1,
      -1,   306,     3,     4,   306,    -1,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    -1,    -1,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     335,    -1,    33,   335,    35,    36,    37,    -1,    -1,    40,
      41,    42,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
       3,     4,    34,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,   384,
      23,    -1,   384,    -1,    -1,    -1,    -1,    -1,   393,    -1,
      33,   393,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    37,    -1,    -1,    40,    41,    42,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,
      33,    18,    35,    20,    37,    -1,    23,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    11,    12,    13,    -1,
      15,    -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    33,    18,
      -1,    20,    37,    -1,    23,    40,    41,    42,    11,    12,
      13,    -1,    15,    -1,    33,    18,    -1,    20,    37,    -1,
      23,    40,    41,    42,    11,    12,    13,    -1,    15,    -1,
      33,    18,    -1,    20,    37,    -1,    23,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    11,    12,    13,    -1,
      15,    -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    33,    18,
      -1,    20,    37,    -1,    23,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    11,    12,    13,    -1,    15,    -1,
      -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    11,    12,    13,    -1,
      15,    -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,
      11,    12,    13,    -1,    15,    -1,    -1,    18,    33,    20,
      -1,    -1,    23,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      -1,    20,    -1,    -1,    23,    -1,    11,    12,    13,    -1,
      15,    -1,    -1,    18,    33,    20,    -1,    -1,    23,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,
      16,    17,    -1,    19,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    -1,    -1,    -1,    38,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    14,    15,    34,    -1,
      -1,    19,    38,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    14,    15,    34,    -1,    -1,    19,
      38,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    14,
      15,    16,    17,    -1,    19,    -1,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    37,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    37,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    14,    15,    16,    17,
      37,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    14,    15,    16,    17,    37,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    14,    15,    16,    17,    37,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    14,    15,    16,    17,    37,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    14,    15,    16,    17,    37,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    14,    15,    16,    17,    37,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      14,    15,    16,    17,    37,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    14,
      15,    16,    17,    37,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    14,    15,
      16,    17,    37,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    14,    15,    16,
      17,    37,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    14,    15,    16,    17,
      37,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    14,    15,    -1,    -1,    37,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    14,    15,    -1,    -1,    37,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    14,    15,    16,    17,    37,    19,    -1,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    14,    15,    16,    17,    -1,    19,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    14,    15,    34,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    14,    15,    16,    17,    -1,
      19,    -1,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    19,    33,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    19,
      -1,    -1,    38,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    19,    -1,    -1,    38,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    19,
      -1,    -1,    -1,    37,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    14,    15,    16,    17,    37,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    19,    -1,
      34,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    19,    -1,    34,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    19,    -1,    34,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    19,    -1,    34,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,    46,    47,    48,    49,    50,    51,
      52,    56,    57,    58,     0,    48,     5,    40,    37,    37,
      33,    40,    34,    52,    53,    54,    55,    56,    57,    35,
      59,     5,    40,    34,    38,     7,     9,    10,    11,    12,
      13,    15,    18,    20,    23,    33,    37,    40,    41,    42,
      49,    50,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    40,
      59,    55,    33,    33,    37,    67,    86,    33,    33,    33,
      40,    74,    40,    40,    70,    67,    21,    22,    26,    27,
      32,    33,    36,    62,    19,    37,    24,    25,    78,    26,
      27,    28,    29,    30,    31,    75,    14,    15,    76,    16,
      17,    77,    37,    37,    67,    65,    37,    40,    43,    44,
      67,    69,    79,    92,    92,    34,    40,    40,     6,     6,
       6,    67,    34,    67,    90,    91,    40,    23,    70,    71,
      72,    73,    34,    65,    34,    34,    34,    34,    38,    70,
      62,    67,    67,     8,    34,    62,    62,    35,    52,    56,
      57,    87,    88,    15,    18,    20,    23,    33,    40,    41,
      42,    68,    69,    70,    71,    72,    73,    74,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    37,
      67,    40,    68,    86,    87,    88,    19,    15,    18,    20,
      23,    33,    40,    41,    42,    68,    69,    70,    71,    72,
      73,    74,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    37,    67,    78,    19,     7,     9,    10,
      35,    37,    49,    50,    56,    57,    59,    63,    64,    65,
      66,    67,    86,    87,    88,    60,     5,    40,    37,    37,
      37,    37,    40,    74,    40,    40,    70,    67,    21,    22,
      26,    27,    32,    33,    75,    76,    77,    37,    37,    37,
      32,    37,    37,    40,    40,    74,    40,    40,    70,    67,
      21,    22,    26,    27,    32,    33,    78,    75,    76,    77,
      37,    37,    37,    23,    70,    40,    33,    33,    37,    67,
      60,    37,    37,    37,    37,    37,    36,    40,    34,    40,
      40,     6,     6,     6,    67,    34,    90,    71,    72,    73,
       6,    15,    18,    20,    23,    33,    40,    41,    42,    67,
      69,    70,    71,    72,    73,    74,    79,    80,    81,    82,
      83,    84,    85,    89,    34,    40,    40,     6,     6,     6,
      67,    34,    90,    23,    70,    71,    72,    73,    70,    67,
      65,    37,    36,    34,    40,    74,    40,    40,    70,    67,
      21,    22,    26,    27,    33,    19,    78,    75,    76,    77,
      34,    70,    34,    65,    34,    40,    40,     6,     6,    34,
      90,    40,    23,    70,    71,    72,    73,    62,    67,    34,
      70,     8,    34,    62,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    49,
      50,    51,    51,    52,    52,    53,    54,    54,    55,    55,
      56,    57,    58,    58,    59,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    63,    64,    65,
      65,    66,    66,    67,    67,    67,    67,    68,    68,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    80,    81,    82,    83,    84,    85,
      85,    86,    86,    87,    88,    88,    89,    89,    90,    91,
      91,    92,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     5,     4,     1,     1,     1,     3,     1,     1,     1,
       2,     3,     2,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     7,     2,
       1,     3,     2,     1,     1,     1,     1,     3,     3,     2,
       3,     4,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
       3,     2,     2,     4,     4,     4,     4,     3,     1,     3,
       1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 9: /* variable_declaration: variable_simple_declaration SEMI  */
#line 131 "src/sintatic.y"
                                                       {
   //$$ = $1;
}
#line 2629 "sintatic.tab.c"
    break;

  case 10: /* list_declaration: list_simple_declaration SEMI  */
#line 135 "src/sintatic.y"
                                               {
  //$$ = $1;
}
#line 2637 "sintatic.tab.c"
    break;

  case 20: /* variable_simple_declaration: type_specifier ID  */
#line 149 "src/sintatic.y"
                                               {
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].element), "variable", lineno);
}
#line 2645 "sintatic.tab.c"
    break;

  case 21: /* list_simple_declaration: type_specifier LIST ID  */
#line 153 "src/sintatic.y"
                                                {
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "variable", lineno);
}
#line 2653 "sintatic.tab.c"
    break;

  case 22: /* function_simple_declaration: type_specifier ID  */
#line 157 "src/sintatic.y"
                                               {
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].element), "function", lineno);
}
#line 2661 "sintatic.tab.c"
    break;

  case 23: /* function_simple_declaration: type_specifier LIST ID  */
#line 159 "src/sintatic.y"
                           {
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "function", lineno);
}
#line 2669 "sintatic.tab.c"
    break;


#line 2673 "sintatic.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 231 "src/sintatic.y"


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
