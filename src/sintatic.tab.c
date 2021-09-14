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
#line 6 "src/sintatic.y"

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

 symbol_table* table = NULL;
 tree_element* tree = NULL;


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
  YYSYMBOL_L_PAREN = 33,                   /* L_PAREN  */
  YYSYMBOL_R_PAREN = 34,                   /* R_PAREN  */
  YYSYMBOL_L_BRACK = 35,                   /* L_BRACK  */
  YYSYMBOL_R_BRACK = 36,                   /* R_BRACK  */
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
  YYSYMBOL_parameters = 52,                /* parameters  */
  YYSYMBOL_list_paremeters = 53,           /* list_paremeters  */
  YYSYMBOL_parameter = 54,                 /* parameter  */
  YYSYMBOL_variable_simple_declaration = 55, /* variable_simple_declaration  */
  YYSYMBOL_list_simple_declaration = 56,   /* list_simple_declaration  */
  YYSYMBOL_type_specifier = 57,            /* type_specifier  */
  YYSYMBOL_compound_statement = 58,        /* compound_statement  */
  YYSYMBOL_59_1 = 59,                      /* $@1  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5005

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  423

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
static const yytype_int16 yyrline[] =
{
       0,   128,   128,   133,   137,   141,   143,   145,   147,   152,
     156,   161,   166,   171,   175,   180,   184,   187,   191,   193,
     197,   202,   207,   209,   215,   214,   223,   227,   230,   234,
     236,   238,   240,   242,   244,   246,   248,   252,   255,   261,
     268,   270,   274,   276,   280,   282,   284,   286,   290,   292,
     296,   299,   303,   308,   312,   316,   320,   324,   328,   332,
     336,   339,   343,   345,   347,   349,   351,   355,   357,   359,
     361,   363,   365,   369,   371,   375,   377,   381,   383,   387,
     389,   391,   393,   395,   397,   401,   405,   409,   413,   417,
     421,   423,   427,   429,   433,   437,   439,   443,   445,   449,
     453,   456,   460,   462,   464,   466
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
  "LST_EQ_OP", "GRT_EQ_OP", "ASSIGN_OP", "L_PAREN", "R_PAREN", "L_BRACK",
  "R_BRACK", "SEMI", "COMMA", "REFFER", "ID", "INT_CONST", "FLOAT_CONST",
  "STRING", "CHAR", "$accept", "program", "declarations", "declaration",
  "variable_declaration", "list_declaration", "function_declaration",
  "parameters", "list_paremeters", "parameter",
  "variable_simple_declaration", "list_simple_declaration",
  "type_specifier", "compound_statement", "$@1", "local_declarations",
  "list_statements", "statement", "conditional_statement",
  "iteration_statement", "expression_statement", "return_statement",
  "expression", "assign_expression", "simple_expression",
  "relational_expression", "arithmetic_add_expression",
  "arithmetic_mul_expression", "unary_sub_expression", "factor",
  "relational_op", "arithmetic_add_op", "arithmetic_mult_op",
  "binary_logic_op", "list_expression", "constructor", "header", "tail",
  "map", "filter", "list_comparation", "in_out_expression", "read",
  "write", "function_call", "arguments", "list_arguments", "var", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-265)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-106)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,   943,    21,    27,    14,   989,   994,  1041,  1084,  1094,
      -2,    15,    35,  -265,  1103,  1191,  1198,    26,    12,   155,
      43,    78,    53,    79,   506,   567,   606,   608,    36,    53,
      85,  1381,  1253,    53,   323,    84,   614,  1270,    53,  1549,
    1276,   663,   684,  1310,   105,   119,  3250,   121,   124,   138,
     808,   141,   143,   102,  3474,  2474,  3949,  1037,  1462,  2514,
    2554,  2594,   169,  2634,  2674,  2714,  2754,  2794,  2834,    25,
      54,   220,   749,  4187,  3997,  4016,  4035,    70,    71,   104,
     149,   163,   180,   189,  1634,   176,   179,  4054,  3474,  3266,
    2874,   210,   216,   182,  1419,  1419,  3973,  4073,   236,   239,
    4602,    20,   209,   231,   254,   268,   178,  3282,  1319,  2914,
     242,  2954,    69,   106,   162,   317,   376,   491,   531,   537,
     554,   102,   584,   587,   102,   624,   654,   102,  1674,  1714,
     132,  3314,  2994,   260,   262,   303,   327,   659,   193,   320,
     322,  4092,   249,   299,   302,   328,   343,   360,  4111,    45,
     333,   733,   373,   102,  4616,  4206,  4130,  4149,  3234,  3474,
     314,   331,   336,  4168,  3488,  4630,  1754,   227,   111,  1549,
    1549,  3034,  3074,  1381,   341,   353,    38,   358,   361,   818,
     330,   364,   696,  3474,  4225,  4267,  4288,   250,   689,   992,
    1207,  4309,  4330,  4351,   272,   296,   462,   476,   516,   532,
     534,   546,   369,   370,  4372,  3330,   412,  4246,   413,   416,
     400,   430,   432,   829,   444,   453,   706,  3474,  3563,  3613,
    3638,   142,   131,   930,  3906,  3663,  3688,  3713,   196,   202,
     218,   247,   279,   295,   326,   355,   468,   478,  3738,  3520,
     419,   191,   481,   494,   501,  3346,  1381,  1794,  1834,  1874,
     519,   521,  1914,  1954,  1994,  2034,  2074,   420,   467,   572,
     574,  1549,  3114,  3154,   508,   577,   422,   424,  1115,  4393,
     589,   639,  4896,   683,   566,   601,   568,   641,   692,  3362,
     696,   696,   696,   707,   708,  3394,   814,   635,   651,   721,
    3588,  3763,   408,   414,  1268,   730,   640,   648,   673,   686,
     868,  3410,   301,   706,   706,   706,   417,   431,  3534,   696,
    4909,   482,  3474,  3266,  2114,   425,  1549,  2154,  2194,  2234,
    1509,  1594,   653,   669,  4414,   732,   738,   768,   779,   780,
     782,  4435,   675,  4516,  4456,  4477,   726,   890,   714,   718,
     720,  3474,  4537,  4649,  4667,   746,   464,  4935,  4865,  4685,
    4703,  4721,   751,   772,   773,   774,   775,   791,   792,  4739,
    3788,   509,   511,   569,   597,   615,   617,  3813,   754,   706,
    4570,  3924,  3838,  3863,  4922,   802,  3314,  2274,   781,  3194,
    4498,  4557,  4757,   803,   809,  4948,   805,   793,   795,   825,
     832,  3442,   806,   496,   720,   720,   720,  3888,  4586,  3234,
    3474,  2314,  4775,   823,   846,   848,   849,  4793,   839,   856,
     720,  4961,  4883,  4811,  4829,  2354,   811,  4847,  4974,  3234,
    3234,  2394,  2434
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -265,  -265,  -265,   873,     4,     6,  -265,   861,  -265,   850,
       0,     2,    80,    -5,  -160,  -242,  -265,   -33,  -127,  -120,
     -71,  -116,   213,    11,   702,   359,   875,   769,   636,   281,
     245,  -174,  -162,   -59,   918,  1026,  1029,  1064,  1157,  1194,
    1196,   -38,   -36,     9,   503,  -264,  -265,   794
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    59,    60,     9,    23,    24,    25,
     174,   175,   176,    61,    39,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     121,   124,   127,   241,    77,    78,    79,    80,    81,    82,
      83,   201,   202,   203,    87,   150,   151,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    84,    11,    85,     7,    10,     8,    11,    92,     7,
     177,     8,   114,   261,    13,   332,   281,    32,   131,   322,
      26,    26,    27,    27,    37,    84,   -22,    85,    40,   282,
     109,   253,   -23,    43,    26,    15,    27,   368,   254,   212,
      17,    35,   256,   264,   110,    20,     2,     3,    86,   -20,
     304,    92,    16,   177,   141,   178,   209,   209,   210,   210,
     159,   -22,   111,   305,   242,   187,    19,   -23,    92,   235,
     177,   236,    86,   -44,   378,    18,    36,    22,   265,  -101,
      12,     2,     3,  -101,   -77,    12,   316,   255,    31,   -46,
     -79,   -44,   -77,    92,     1,   177,     2,     3,   178,   187,
      28,    28,   -77,   211,   211,   208,   208,   -46,   -79,   -77,
     -77,   -77,    29,    33,    28,   178,   237,    50,   221,    38,
     258,   -78,   259,   -80,    42,   166,   235,   408,   236,   -78,
     242,    84,    84,    85,    85,    54,   171,   172,    88,   -78,
     178,   -80,    96,    57,    58,  -100,   -78,   -78,   -78,  -100,
     -45,   212,    89,   252,    93,   112,   113,    94,   250,   281,
     251,   -44,   248,   302,   249,   -45,   158,   260,   -81,   -45,
     187,    95,   282,   237,   395,   221,   -44,    50,    86,    86,
     -44,    98,   -82,    99,   146,   153,   -81,   396,    21,    47,
      48,    49,   -21,    50,   187,    54,    51,   304,    52,   -83,
     -82,    53,    96,    57,    58,   108,   179,    92,   -84,   177,
     305,    54,   -46,   128,   309,   -46,   129,   -83,    56,    57,
      58,   -79,   133,    84,   183,    85,   -84,  -104,   187,   110,
     -46,   268,   185,   186,   -46,   -47,   -79,   -80,   395,   -45,
     -79,   235,   376,   236,   112,   113,   212,   132,   209,   142,
     210,   396,   -80,   -47,   178,   -86,   -80,   -45,   -87,    91,
     144,   170,   235,   235,   236,   236,   -81,   101,   -88,   -44,
      86,   143,   253,   -86,   145,    92,   -87,   177,    84,   254,
      85,   -81,   152,   256,   -44,   -81,   -88,   393,   237,   187,
     221,   -46,   253,   253,   160,   211,  -102,   208,   -82,   254,
     254,   130,   206,   256,   256,   400,   -46,   136,   136,   237,
     237,   221,   221,   -82,   -83,   -79,   213,   -82,   -89,   147,
     149,   -90,   178,   187,   369,    86,     2,     3,   255,   -83,
     -79,    97,   -71,   -83,   217,   193,   -89,  -103,    92,   -90,
     177,   290,   219,   220,   240,   -84,   212,   -91,   255,   255,
     -71,   -94,   187,   235,   161,   236,   162,   -71,   -71,   -71,
     -84,   258,   -49,   259,   -84,   -91,   415,   163,   -95,   193,
     270,   257,   167,   -96,   -47,   193,   193,   168,   262,   110,
     -49,   258,   258,   259,   259,   178,   421,   422,   227,   -47,
     263,   -72,   -85,   -47,   252,   266,   273,   -48,   267,   250,
     237,   251,   221,   248,   271,   249,   283,   284,   260,   -72,
     -85,   187,   100,   189,   252,   252,   -72,   -72,   -72,   250,
     250,   251,   251,   248,   248,   249,   249,   -86,   260,   260,
     295,   110,   -44,   -87,   280,   -47,   -92,   287,   110,   110,
     193,   -92,   -86,   -93,   110,   227,   -86,   189,   -87,   285,
     -93,   -92,   -87,   189,   189,   -92,   308,   319,   315,   -92,
     269,   -93,   377,   193,   193,   -93,   223,   288,   303,   -93,
     -36,   -36,   289,   154,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -80,   -36,   -45,   292,   -36,   -47,   -36,   112,   113,
     -36,   330,   149,   293,   291,   -81,   -80,   227,   193,   345,
     -36,   -85,   -36,   -36,   -36,   306,   -67,   -36,   -36,   -36,
     -81,   337,   165,   366,   149,   307,   -85,   280,   189,   410,
     -85,   311,   193,   223,   -67,   375,   206,   312,   -88,   341,
     -89,   -67,   -67,   -67,   313,   -82,   381,   343,   344,   303,
     -15,   272,   189,   -88,    34,   -89,   -69,   -88,   323,   -89,
     -82,   -83,   -68,   -84,   386,   280,   317,   204,   318,   193,
     227,   193,   193,   193,   -69,   -47,   -83,   351,   -84,   -70,
     -68,   -69,   -69,   -69,   327,   294,   189,   -68,   -68,   -68,
     -47,   227,   227,   227,   227,   227,   227,   -70,   -90,   240,
     193,   204,   394,   193,   -70,   -70,   -70,   204,   204,   -73,
     310,   -17,   -74,   -90,   149,   -17,   325,   -90,   -86,   320,
     238,   321,   257,   416,   -20,   303,   -91,   -73,   382,   280,
     -74,   351,   193,   -86,   -73,   -73,   -73,   -74,   -74,   -74,
     394,   -91,   257,   257,   -49,   -91,   242,   189,   223,   -75,
     -18,   326,   -19,   303,   -18,   347,   -19,   328,   -20,   -49,
     227,   -48,   -20,   -49,   -92,   -48,   394,   -75,   -87,   223,
     223,   370,   204,   394,   -75,   -75,   -75,   238,   374,   -76,
     -93,   189,   227,   -87,   351,   351,   351,   351,   -45,   363,
     361,   193,   204,   112,   113,   204,   204,   -76,   362,   379,
     192,   351,   364,  -105,   -76,   -76,   -76,   -16,   329,   385,
     189,   -16,   212,    47,    48,    49,   -21,   179,   -45,   380,
     180,   179,   181,   112,   113,   182,   238,   324,   -21,   238,
     204,   213,   -21,   -45,   192,   183,   -92,   -93,   398,   183,
     192,   192,   184,   185,   186,   337,   268,   185,   186,   217,
     -85,   -92,   -93,   226,   204,   -49,   290,   219,   220,   212,
     223,   -88,   411,   341,   383,   -85,   188,   -89,   384,   189,
     381,   343,   344,   157,   360,   392,   -88,   -99,   -53,   418,
     -46,   164,   -89,   -53,   -53,   115,   116,   117,   118,   119,
     120,   204,   238,   204,   204,   204,   -53,   -90,   397,   359,
     188,   -79,   -80,   -81,   -82,   192,   137,   137,   -91,   -49,
     226,   212,   -90,   238,   238,   238,   238,   238,   238,   222,
     -83,   -84,   204,   -91,   -49,   204,   -48,   401,   192,   192,
     336,   212,   -86,   191,   212,    47,    48,    49,   -87,   337,
     212,   405,   338,   403,   339,   404,   399,   340,   406,   402,
     359,    54,   -88,   359,   204,   420,   409,   341,    96,    57,
      58,   183,   226,   192,   342,   343,   344,   191,   268,   185,
     186,   188,   217,   191,   191,   -89,   222,   -90,   -91,   290,
     219,   220,   238,   417,   365,   -85,   225,   192,    14,    47,
      48,    49,    30,   213,    41,   188,   214,     0,   215,   140,
       0,   216,     0,   156,   238,     0,   359,   359,   359,   359,
       0,   217,     0,   204,     0,     0,     0,     0,   218,   219,
     220,     0,     0,   359,   192,   226,   192,   192,   335,   188,
       0,     0,   350,   341,     0,     0,     0,     0,   191,   190,
     381,   343,   344,   225,     0,     0,   226,   226,   226,   226,
     226,   373,     0,    -8,    -8,   192,    -8,    -8,   192,   -53,
       0,   191,   191,     0,   -53,   -53,   115,   116,   117,   118,
     119,   120,     0,   190,   -53,     0,     0,     0,   -53,   190,
     190,     0,   194,     0,     0,     0,   350,   192,     0,     0,
     188,   222,   224,     0,     0,   225,   191,     0,   346,    -2,
       1,     0,     2,     3,    -4,    -4,   155,    -4,    -4,     0,
       0,     0,   222,   222,     0,   226,   194,     0,     0,     0,
     191,   -53,   138,   138,   188,     0,   -53,   -53,   115,   116,
     117,   118,   119,   120,     0,   228,   -53,   226,     0,   350,
     350,   350,   414,     0,   190,     0,   192,     0,     0,   224,
       0,    -5,    -5,   188,    -5,    -5,   350,   191,   225,   191,
     334,   -65,   -65,   -65,   -65,   349,   -65,   190,   190,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   225,
     225,   225,   225,   372,   -65,     0,     0,   194,   191,     0,
     195,   191,   228,   196,    -6,    -6,     0,    -6,    -6,     0,
       0,   224,   190,   222,    -7,    -7,     0,    -7,    -7,     0,
       0,   194,   188,    -3,    -3,     0,    -3,    -3,     0,   349,
     191,     0,     0,     0,   195,     0,   190,   196,   197,     0,
     195,   195,     0,   196,   196,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   229,   -64,   194,   230,     0,   225,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   279,   -64,
       0,     0,   197,   190,   224,   333,     0,     0,   197,   197,
     225,   348,   349,   349,   413,     0,     0,     0,     0,   191,
       0,   231,     0,     0,     0,   224,   224,   224,   371,   349,
       0,     0,     0,     0,   190,   195,     0,   190,   196,     0,
     229,    -9,    -9,   230,    -9,    -9,   194,   228,   -10,   -10,
       0,   -10,   -10,     0,   352,     0,     0,     0,     0,   195,
       0,   198,   196,     0,     0,   348,   190,     0,   228,   228,
       0,   122,   123,   197,     0,     0,   -55,     0,   231,     0,
     194,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,
       0,   -55,     0,   195,   224,   198,   196,   197,   199,     0,
     200,   198,   198,   -13,   -13,     0,   -13,   -13,     0,   194,
       0,     0,     0,     0,   232,     0,   224,     0,   348,   412,
     -14,   -14,     0,   -14,   -14,   190,   -11,   -11,     0,   -11,
     -11,   197,   199,     0,   200,   348,     0,   -50,   199,   199,
     200,   200,   -50,   -50,   115,   116,   117,   118,   119,   120,
       0,   233,   -50,   234,   195,   229,   -50,   196,   230,   228,
     -12,   -12,   353,   -12,   -12,   354,   198,     0,   194,   -25,
     -25,   232,   -25,   -25,     0,     0,   229,   229,     0,   230,
     230,     0,     0,     0,     0,     0,     0,     0,   195,     0,
     198,   196,   197,   231,     0,     0,     0,     0,     0,     0,
     355,     0,     0,   199,     0,   200,     0,     0,   233,     0,
     234,     0,     0,     0,   231,   231,     0,   195,     0,     0,
     196,     0,     0,     0,   198,     0,   197,   199,     0,   200,
       0,     0,     0,     0,   -24,   -24,     0,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,   -24,
       0,   -24,     0,     0,   -24,   197,     0,     0,     0,     0,
       0,   199,     0,   200,   -24,     0,   -24,   229,   -24,     0,
     230,   -24,   -24,   -24,     0,     0,   195,     0,     0,   196,
      47,    48,    49,     0,   179,   198,   232,   180,     0,   181,
       0,     0,   182,   356,     0,     0,     0,     0,     0,     0,
       0,     0,   183,     0,     0,   231,     0,   232,   232,   207,
     185,   186,   134,   135,   197,     0,     0,     0,     0,   198,
       0,     0,   199,   233,   200,   234,   -66,   -66,   -66,   -66,
     357,   -66,   358,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   233,   233,   234,   234,   198,   -66,
       0,     0,     0,     0,     0,     0,   199,     0,   200,     0,
       0,     0,   -92,   -92,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,     0,     0,   -92,   -92,   -92,
       0,     0,   -92,     0,     0,   199,     0,   200,     0,     0,
       0,     0,   -92,     0,   -92,   -92,   -92,     0,   232,   -92,
     -92,   -92,     2,     3,     0,     0,    44,   198,    45,    46,
      47,    48,    49,     0,    50,     0,     0,    51,     0,    52,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,   173,   233,    55,   234,     0,    56,
      57,    58,     0,     0,   199,     0,   200,   -93,   -93,     0,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,
       0,     0,   -93,   -93,   -93,     0,     0,   -93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -93,     0,   -93,
     -93,   -93,     0,     0,   -93,   -93,   -93,   -36,   -36,     0,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,     0,   -36,   -47,   -36,     0,     0,   -36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,     0,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -92,   -92,     0,
       0,   -92,     0,   -92,   -92,   -92,   -92,   -92,     0,   -92,
       0,     0,   -92,   -92,   -92,     0,     0,   -92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -92,     0,   -92,
     -92,   -92,     0,     0,   -92,   -92,   -92,   -93,   -93,     0,
       0,   -93,     0,   -93,   -93,   -93,   -93,   -93,     0,   -93,
       0,     0,   -93,   -93,   -93,     0,     0,   -93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -93,     0,   -93,
     -93,   -93,     0,     0,   -93,   -93,   -93,   -37,   -37,     0,
       0,   -37,   169,   -37,   -37,   -37,   -37,   -37,     0,   -37,
       0,     0,   -37,     0,   -37,     0,     0,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,     0,   -37,
     -37,   -37,     0,     0,   -37,   -37,   -37,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,
       0,     0,   -41,     0,   -41,     0,     0,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -41,     0,   -41,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,     0,   -34,     0,   -34,     0,     0,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,     0,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
       0,     0,   -35,     0,   -35,     0,     0,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,     0,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -30,   -30,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
       0,     0,   -30,     0,   -30,     0,     0,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,     0,   -30,
     -30,   -30,     0,     0,   -30,   -30,   -30,   -31,   -31,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
       0,     0,   -31,     0,   -31,     0,     0,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,     0,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,     0,   -32,     0,   -32,     0,     0,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,     0,   -32,
     -32,   -32,     0,     0,   -32,   -32,   -32,   -29,   -29,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,     0,   -29,     0,   -29,     0,     0,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,     0,   -29,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,     0,   -33,     0,   -33,     0,     0,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,     0,   -33,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -43,   -43,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
       0,     0,   -43,     0,   -43,     0,     0,   -43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,     0,   -43,
     -43,   -43,     0,     0,   -43,   -43,   -43,    -9,    -9,     0,
       0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,
       0,     0,    -9,     0,    -9,     0,     0,    -9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -9,     0,    -9,
      -9,    -9,     0,     0,    -9,    -9,    -9,   -10,   -10,     0,
       0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,
       0,     0,   -10,     0,   -10,     0,     0,   -10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -10,     0,   -10,
     -10,   -10,     0,     0,   -10,   -10,   -10,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
       0,     0,   -40,     0,   -40,     0,     0,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -40,     0,   -40,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -42,   -42,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
       0,     0,   -42,     0,   -42,     0,     0,   -42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,     0,   -42,
     -42,   -42,     0,     0,   -42,   -42,   -42,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,     0,   -25,     0,   -25,     0,     0,   -25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -25,     0,   -25,
     -25,   -25,     0,     0,   -25,   -25,   -25,   -37,   -37,     0,
       0,   -37,   419,   -37,   -37,   -37,   -37,   -37,     0,   -37,
       0,     0,   -37,     0,   -37,     0,     0,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,     0,   -37,
     -37,   -37,     0,     0,   -37,   -37,   -37,   -38,   -38,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
       0,     0,   -38,     0,   -38,     0,     0,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,     0,   -38,
     -38,   -38,     0,     0,   -38,   -38,   -38,   -39,   -39,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
       0,     0,   -39,     0,   -39,     0,     0,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -39,     0,   -39,
     -39,   -39,     0,     0,   -39,   -39,   -39,   -41,   -41,     0,
       0,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
       0,     0,   -41,     0,   -41,     0,     0,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -41,     0,   -41,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -34,   -34,     0,
       0,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,     0,   -34,     0,   -34,     0,     0,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,     0,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -35,   -35,     0,
       0,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,
       0,     0,   -35,     0,   -35,     0,     0,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,     0,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -30,   -30,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,
       0,     0,   -30,     0,   -30,     0,     0,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,     0,   -30,
     -30,   -30,     0,     0,   -30,   -30,   -30,     2,     3,     0,
       0,    44,     0,    45,    46,    47,    48,    49,     0,    50,
       0,     0,    51,     0,    52,     0,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,   173,
     -26,    55,     0,     0,    56,    57,    58,   -28,   -28,     0,
       0,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,
       0,     0,   -28,     0,   -28,     0,     0,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -28,     0,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -31,   -31,     0,
       0,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,
       0,     0,   -31,     0,   -31,     0,     0,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,     0,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,   -32,   -32,     0,
       0,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,     0,   -32,     0,   -32,     0,     0,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,     0,   -32,
     -32,   -32,     0,     0,   -32,   -32,   -32,   -29,   -29,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,     0,   -29,     0,   -29,     0,     0,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,     0,   -29,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -33,   -33,     0,
       0,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,     0,   -33,     0,   -33,     0,     0,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,     0,   -33,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -43,   -43,     0,
       0,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
       0,     0,   -43,     0,   -43,     0,     0,   -43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,     0,   -43,
     -43,   -43,     0,     0,   -43,   -43,   -43,   -27,   -27,     0,
       0,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,
       0,     0,   -27,     0,   -27,     0,     0,   -27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -27,     0,   -27,
     -27,   -27,     0,     0,   -27,   -27,   -27,   -40,   -40,     0,
       0,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,
       0,     0,   -40,     0,   -40,     0,     0,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -40,     0,   -40,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -42,   -42,     0,
       0,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,
       0,     0,   -42,     0,   -42,     0,     0,   -42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,     0,   -42,
     -42,   -42,     0,     0,   -42,   -42,   -42,   -38,   -38,     0,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,
       0,     0,   -38,     0,   -38,     0,     0,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,     0,   -38,
     -38,   -38,     0,     0,   -38,   -38,   -38,   -39,   -39,     0,
       0,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,
       0,     0,   -39,     0,   -39,     0,     0,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -39,     0,   -39,
     -39,   -39,     0,     0,   -39,   -39,   -39,    -9,    -9,     0,
       0,    -9,     0,    -9,    -9,    -9,    -9,    -9,     0,    -9,
       0,     0,    -9,     0,    -9,     0,     0,    -9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -9,     0,    -9,
      -9,    -9,     0,     0,    -9,    -9,    -9,   -10,   -10,     0,
       0,   -10,     0,   -10,   -10,   -10,   -10,   -10,     0,   -10,
       0,     0,   -10,     0,   -10,     0,     0,   -10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -10,     0,   -10,
     -10,   -10,     0,     0,   -10,   -10,   -10,   -25,   -25,     0,
       0,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,     0,   -25,     0,   -25,     0,     0,   -25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -25,     0,   -25,
     -25,   -25,     0,     0,   -25,   -25,   -25,     2,     3,     0,
       0,   243,     0,   244,   245,    47,    48,    49,     0,    50,
       0,     0,    51,     0,    52,     0,     0,    53,     0,     0,
       0,    47,    48,    49,     0,    50,     0,    54,    51,   246,
      52,   247,     0,    53,    56,    57,    58,    47,    48,    49,
       0,    50,     0,    54,    51,     0,    52,    90,     0,    53,
      56,    57,    58,    47,    48,    49,     0,   213,     0,    54,
     214,     0,   215,   205,     0,   216,    56,    57,    58,     0,
       0,     0,     0,     0,     0,   217,   148,     0,     0,     0,
       0,     0,   218,   219,   220,    47,    48,    49,     0,    50,
       0,     0,    51,     0,    52,     0,     0,    53,     0,     0,
       0,   -41,   -41,   -41,     0,   -41,     0,    54,   -41,     0,
     -41,   239,     0,   -41,    56,    57,    58,    47,    48,    49,
       0,    50,     0,   -41,    51,     0,    52,   -41,     0,    53,
     -41,   -41,   -41,    47,    48,    49,     0,   213,     0,    54,
     214,     0,   215,   314,     0,   216,    56,    57,    58,     0,
       0,     0,     0,     0,     0,   217,   331,     0,     0,     0,
       0,     0,   218,   219,   220,   -40,   -40,   -40,     0,   -40,
       0,     0,   -40,     0,   -40,     0,     0,   -40,     0,     0,
       0,    47,    48,    49,     0,   213,     0,   -40,   214,     0,
     215,   -40,     0,   216,   -40,   -40,   -40,     0,     0,     0,
       0,     0,     0,   217,   367,     0,     0,     0,     0,     0,
     218,   219,   220,    47,    48,    49,     0,   213,     0,     0,
     214,     0,   215,     0,     0,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217,   407,     0,     0,     0,
       0,     0,   218,   219,   220,    47,    48,    49,     0,   179,
       0,     0,   180,     0,   181,     0,     0,   182,     0,    47,
      48,    49,     0,   213,     0,     0,   214,   183,   215,     0,
       0,   216,     0,     0,   184,   185,   186,     0,     0,     0,
       0,   217,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   -41,   -41,   -41,     0,   -41,     0,     0,   -41,     0,
     -41,     0,     0,   -41,     0,   -40,   -40,   -40,     0,   -40,
       0,     0,   -40,   -41,   -40,     0,     0,   -40,     0,     0,
     -41,   -41,   -41,     0,     0,     0,     0,   -40,     0,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -64,   -64,   -64,
     -64,     0,   -64,     0,   296,   297,     0,   -64,   -64,   298,
     299,   -64,   -64,   -64,   -64,   300,   301,   -64,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,     0,   -64,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   301,   -64,     0,     0,     0,   -64,   -65,   -65,   -65,
     -65,     0,   -65,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -65,     0,     0,
       0,   -65,   -66,   -66,   -66,   -66,     0,   -66,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -66,     0,     0,     0,   -66,   -57,   -57,   125,
     126,     0,   -57,     0,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,     0,   -57,     0,     0,
       0,   -57,   -59,   -59,   -59,   -59,     0,   -59,     0,     0,
       0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
       0,     0,   -59,     0,     0,     0,   -59,   -61,   -61,   -61,
     -61,     0,   -61,     0,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,   -61,     0,     0,
       0,   -61,   -63,   -63,   -63,   -63,     0,   -63,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,   -63,     0,     0,     0,   -63,   -60,   -60,   -60,
     -60,     0,   -60,     0,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,   -60,     0,     0,
       0,   -60,   -62,   -62,   -62,   -62,     0,   -62,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,   -62,     0,     0,     0,   -62,   -98,   -98,   -98,
     -98,     0,   -98,     0,     0,     0,     0,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,     0,     0,   -98,     0,     0,
       0,   -98,   -56,   -56,   125,   126,     0,   -56,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,   -56,     0,     0,     0,   -56,   -58,   -58,   -58,
     -58,     0,   -58,     0,     0,     0,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,     0,     0,   -58,     0,     0,
       0,   -58,   -97,   -97,   -97,   -97,     0,   -97,     0,     0,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     122,   123,   -97,     0,     0,   -55,   -97,     0,     0,     0,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   122,   123,
     -55,     0,     0,   -54,   -55,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,     0,     0,   -54,     0,
       0,     0,   -54,   -64,   -64,   -64,   -64,     0,   -64,     0,
     102,   103,     0,   -64,   -64,   104,   105,   -64,   -64,   -64,
     -64,   106,   107,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,     0,   -64,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   107,     0,     0,     0,
     -64,   -57,   -57,   125,   126,     0,   -57,     0,     0,     0,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -59,   -59,   -59,   -59,   -57,   -59,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -61,
     -61,   -61,   -61,   -59,   -61,     0,     0,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -63,   -63,
     -63,   -63,   -61,   -63,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,   -60,   -60,   -60,
     -60,   -63,   -60,     0,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,   -62,   -62,   -62,   -62,
     -60,   -62,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,   -98,   -98,   -98,   -98,   -62,
     -98,     0,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,     0,   -56,   -56,   125,   126,   -98,   -56,
       0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,     0,   -58,   -58,   -58,   -58,   -56,   -58,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,     0,   -97,   -97,   -97,   -97,   -58,   -97,     0,     0,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
       0,   122,   123,     0,     0,   -97,   -55,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,
     122,   123,     0,     0,   -55,   -54,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -64,
     -64,   -64,   -64,   -54,   -64,     0,   274,   275,     0,   -64,
     -64,   276,   277,   -64,   -64,   -64,   -64,   278,   279,   -64,
     -64,   -64,   -64,   -64,     0,   -64,     0,   274,   275,     0,
     -64,   -64,   276,   277,   -64,   -64,   -64,   -64,   286,   279,
     -64,   -65,   -65,   -65,   -65,     0,   -65,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,   -65,   -66,   -66,   -66,   -66,     0,   -66,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -66,   -57,   -57,   125,   126,     0,   -57,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,   -57,   -59,   -59,   -59,   -59,     0,   -59,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,   -59,   -61,   -61,   -61,   -61,     0,
     -61,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,   -61,   -63,   -63,   -63,   -63,
       0,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,   -63,   -60,   -60,   -60,
     -60,     0,   -60,     0,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,   -60,   -62,   -62,
     -62,   -62,     0,   -62,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,   -98,
     -98,   -98,   -98,     0,   -98,     0,     0,     0,     0,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,     0,     0,   -98,
     -56,   -56,   125,   126,     0,   -56,     0,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,     0,
     -56,   -58,   -58,   -58,   -58,     0,   -58,     0,     0,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,   -58,   -97,   -97,   -97,   -97,     0,   -97,     0,     0,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     122,   123,   -97,     0,     0,   -54,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,
     -54,   -64,   -64,   -64,   -64,     0,   -64,     0,   387,   388,
       0,   -64,   -64,   389,   390,   -64,   -64,   -64,   -64,   286,
     391,   -64,   -64,   -64,   -64,     0,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -51,
     391,     0,     0,     0,   -51,   -51,   115,   116,   117,   118,
     119,   120,     0,     0,   -51,   -52,     0,     0,   -51,     0,
     -52,   -52,   115,   116,   117,   118,   119,   120,     0,     0,
     -52,   -50,     0,     0,   -52,     0,   -50,   -50,   115,   116,
     117,   118,   119,   120,     0,   -51,     0,     0,     0,   -50,
     -51,   -51,   115,   116,   117,   118,   119,   120,     0,   -52,
       0,     0,     0,   -51,   -52,   -52,   115,   116,   117,   118,
     119,   120,     0,   -65,   -65,   -65,   -65,   -52,   -65,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -66,   -66,   -66,   -66,     0,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -57,
     -57,   125,   126,     0,   -57,     0,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -59,   -59,   -59,
     -59,     0,   -59,     0,     0,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -61,   -61,   -61,   -61,     0,
     -61,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -63,   -63,   -63,   -63,     0,   -63,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -60,   -60,   -60,   -60,     0,   -60,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -62,
     -62,   -62,   -62,     0,   -62,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -98,   -98,   -98,
     -98,     0,   -98,     0,     0,     0,     0,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -56,   -56,   125,   126,     0,
     -56,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -58,   -58,   -58,   -58,     0,   -58,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -97,   -97,   -97,   -97,     0,   -97,     0,     0,     0,
       0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   122,
     123,     0,     0,     0,   -55,     0,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   122,   123,     0,
       0,     0,   -54,     0,     0,     0,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -50,     0,     0,     0,     0,
     -50,   -50,   115,   116,   117,   118,   119,   120,   -51,     0,
     -50,     0,     0,   -51,   -51,   115,   116,   117,   118,   119,
     120,   -52,     0,   -51,     0,     0,   -52,   -52,   115,   116,
     117,   118,   119,   120,   -53,     0,   -52,     0,     0,   -53,
     -53,   115,   116,   117,   118,   119,   120,   -50,     0,     0,
       0,     0,   -50,   -50,   115,   116,   117,   118,   119,   120,
     -51,     0,     0,     0,     0,   -51,   -51,   115,   116,   117,
     118,   119,   120,   -52,     0,     0,     0,     0,   -52,   -52,
     115,   116,   117,   118,   119,   120
};

static const yytype_int16 yycheck[] =
{
       0,    39,     0,    39,     0,     5,     0,     5,    46,     5,
      46,     5,    71,   173,     0,   279,   190,    22,    89,   261,
      20,    21,    20,    21,    29,    63,     5,    63,    33,   191,
      63,   158,     5,    38,    34,    37,    34,   301,   158,    19,
       5,     5,   158,     5,    19,    33,     3,     4,    39,    37,
     224,    89,    37,    89,    34,    46,    94,    95,    94,    95,
     131,    40,    37,   225,    19,    54,    40,    40,   106,   107,
     106,   107,    63,    19,   316,    40,    40,    34,    40,    34,
       0,     3,     4,    38,    15,     5,   246,   158,    35,    19,
      19,    37,    23,   131,     1,   131,     3,     4,    89,    88,
      20,    21,    33,    94,    95,    94,    95,    37,    37,    40,
      41,    42,    34,    34,    34,   106,   107,    15,   107,    34,
     158,    15,   158,    19,    40,   158,   164,   391,   164,    23,
      19,   169,   170,   169,   170,    33,   169,   170,    33,    33,
     131,    37,    40,    41,    42,    34,    40,    41,    42,    38,
      19,    19,    33,   158,    33,    24,    25,    33,   158,   333,
     158,    19,   158,   222,   158,    34,    34,   158,    19,    38,
     159,    33,   334,   164,   348,   164,    34,    15,   169,   170,
      38,    40,    19,    40,     6,    23,    37,   349,    33,    11,
      12,    13,    37,    15,   183,    33,    18,   371,    20,    19,
      37,    23,    40,    41,    42,    36,    15,   245,    19,   245,
     372,    33,    19,    37,    23,    19,    37,    37,    40,    41,
      42,    19,    40,   261,    33,   261,    37,    34,   217,    19,
      34,    40,    41,    42,    38,    19,    34,    19,   412,    19,
      38,   279,   313,   279,    24,    25,    19,    37,   286,    40,
     286,   413,    34,    37,   245,    19,    38,    37,    19,    46,
       6,    34,   300,   301,   300,   301,    19,    54,    19,    19,
     261,    40,   399,    37,     6,   313,    37,   313,   316,   399,
     316,    34,    40,   399,    34,    38,    37,   346,   279,   278,
     279,    19,   419,   420,    34,   286,    34,   286,    19,   419,
     420,    88,    89,   419,   420,   376,    34,    94,    95,   300,
     301,   300,   301,    34,    19,    19,    15,    38,    19,   106,
     107,    19,   313,   312,    23,   316,     3,     4,   399,    34,
      34,    50,    15,    38,    33,    54,    37,    34,   376,    37,
     376,    40,    41,    42,   131,    19,    19,    19,   419,   420,
      33,    37,   341,   391,    34,   391,    34,    40,    41,    42,
      34,   399,    19,   399,    38,    37,   399,    34,    37,    88,
      40,   158,   159,    37,    19,    94,    95,   164,    37,    19,
      37,   419,   420,   419,   420,   376,   419,   420,   107,    34,
      37,    15,    19,    38,   399,    37,   183,    37,    37,   399,
     391,   399,   391,   399,    40,   399,    37,    37,   399,    33,
      37,   400,    53,    54,   419,   420,    40,    41,    42,   419,
     420,   419,   420,   419,   420,   419,   420,    19,   419,   420,
     217,    19,    19,    19,   189,    19,    19,    37,    19,    19,
     159,    19,    34,    19,    19,   164,    38,    88,    34,    37,
      19,    34,    38,    94,    95,    38,    37,    37,   245,    37,
     179,    37,    37,   182,   183,    34,   107,    37,   223,    38,
       3,     4,    40,   114,     7,     8,     9,    10,    11,    12,
      13,    19,    15,    19,    40,    18,    19,    20,    24,    25,
      23,   278,   279,    40,   213,    19,    34,   216,   217,   286,
      33,    19,    35,    36,    37,    37,    15,    40,    41,    42,
      34,    15,   153,   300,   301,    37,    34,   272,   159,    23,
      38,    40,   241,   164,    33,   312,   313,    33,    19,    33,
      19,    40,    41,    42,    33,    19,    40,    41,    42,   294,
      34,   182,   183,    34,    38,    34,    15,    38,    40,    38,
      34,    19,    15,    19,   341,   310,    37,    54,    37,   278,
     279,   280,   281,   282,    33,    19,    34,   286,    34,    15,
      33,    40,    41,    42,     6,   216,   217,    40,    41,    42,
      34,   300,   301,   302,   303,   304,   305,    33,    19,   376,
     309,    88,   347,   312,    40,    41,    42,    94,    95,    15,
     241,    34,    15,    34,   391,    38,    40,    38,    19,    37,
     107,    37,   399,   400,    37,   370,    19,    33,   337,   374,
      33,   340,   341,    34,    40,    41,    42,    40,    41,    42,
     385,    34,   419,   420,    19,    38,    19,   278,   279,    15,
      34,    40,    34,   398,    38,   286,    38,     6,    34,    34,
     369,    34,    38,    38,    19,    38,   411,    33,    19,   300,
     301,   302,   159,   418,    40,    41,    42,   164,   309,    15,
      19,   312,   391,    34,   393,   394,   395,   396,    19,     6,
      40,   400,   179,    24,    25,   182,   183,    33,    40,    36,
      54,   410,     6,    34,    40,    41,    42,    34,     6,   340,
     341,    38,    19,    11,    12,    13,    37,    15,    19,    34,
      18,    15,    20,    24,    25,    23,   213,    34,    34,   216,
     217,    15,    38,    34,    88,    33,    19,    19,   369,    33,
      94,    95,    40,    41,    42,    15,    40,    41,    42,    33,
      19,    34,    34,   107,   241,    19,    40,    41,    42,    19,
     391,    19,   393,    33,    40,    34,    54,    19,    40,   400,
      40,    41,    42,   127,    34,    19,    34,    34,    19,   410,
      19,    38,    34,    24,    25,    26,    27,    28,    29,    30,
      31,   278,   279,   280,   281,   282,    37,    19,    34,   286,
      88,    19,    19,    19,    19,   159,    94,    95,    19,    19,
     164,    19,    34,   300,   301,   302,   303,   304,   305,   107,
      19,    19,   309,    34,    34,   312,    34,    36,   182,   183,
       6,    19,    19,    54,    19,    11,    12,    13,    19,    15,
      19,     6,    18,    40,    20,    40,    34,    23,     6,    34,
     337,    33,    19,   340,   341,    34,    40,    33,    40,    41,
      42,    33,   216,   217,    40,    41,    42,    88,    40,    41,
      42,   159,    33,    94,    95,    19,   164,    19,    19,    40,
      41,    42,   369,    34,     6,    19,   107,   241,     5,    11,
      12,    13,    21,    15,    34,   183,    18,    -1,    20,    95,
      -1,    23,    -1,   124,   391,    -1,   393,   394,   395,   396,
      -1,    33,    -1,   400,    -1,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,   410,   278,   279,   280,   281,   282,   217,
      -1,    -1,   286,    33,    -1,    -1,    -1,    -1,   159,    54,
      40,    41,    42,   164,    -1,    -1,   300,   301,   302,   303,
     304,   305,    -1,     0,     1,   309,     3,     4,   312,    19,
      -1,   182,   183,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    88,    34,    -1,    -1,    -1,    38,    94,
      95,    -1,    54,    -1,    -1,    -1,   340,   341,    -1,    -1,
     278,   279,   107,    -1,    -1,   216,   217,    -1,   286,     0,
       1,    -1,     3,     4,     0,     1,   121,     3,     4,    -1,
      -1,    -1,   300,   301,    -1,   369,    88,    -1,    -1,    -1,
     241,    19,    94,    95,   312,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   107,    34,   391,    -1,   393,
     394,   395,   396,    -1,   159,    -1,   400,    -1,    -1,   164,
      -1,     0,     1,   341,     3,     4,   410,   278,   279,   280,
     281,    14,    15,    16,    17,   286,    19,   182,   183,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,   300,
     301,   302,   303,   304,    37,    -1,    -1,   159,   309,    -1,
      54,   312,   164,    54,     0,     1,    -1,     3,     4,    -1,
      -1,   216,   217,   391,     0,     1,    -1,     3,     4,    -1,
      -1,   183,   400,     0,     1,    -1,     3,     4,    -1,   340,
     341,    -1,    -1,    -1,    88,    -1,   241,    88,    54,    -1,
      94,    95,    -1,    94,    95,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,   107,    19,   217,   107,    -1,   369,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      -1,    -1,    88,   278,   279,   280,    -1,    -1,    94,    95,
     391,   286,   393,   394,   395,    -1,    -1,    -1,    -1,   400,
      -1,   107,    -1,    -1,    -1,   300,   301,   302,   303,   410,
      -1,    -1,    -1,    -1,   309,   159,    -1,   312,   159,    -1,
     164,     0,     1,   164,     3,     4,   278,   279,     0,     1,
      -1,     3,     4,    -1,   286,    -1,    -1,    -1,    -1,   183,
      -1,    54,   183,    -1,    -1,   340,   341,    -1,   300,   301,
      -1,    14,    15,   159,    -1,    -1,    19,    -1,   164,    -1,
     312,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34,    -1,   217,   369,    88,   217,   183,    54,    -1,
      54,    94,    95,     0,     1,    -1,     3,     4,    -1,   341,
      -1,    -1,    -1,    -1,   107,    -1,   391,    -1,   393,   394,
       0,     1,    -1,     3,     4,   400,     0,     1,    -1,     3,
       4,   217,    88,    -1,    88,   410,    -1,    19,    94,    95,
      94,    95,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,   107,    34,   107,   278,   279,    38,   278,   279,   391,
       0,     1,   286,     3,     4,   286,   159,    -1,   400,     0,
       1,   164,     3,     4,    -1,    -1,   300,   301,    -1,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
     183,   312,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,
     286,    -1,    -1,   159,    -1,   159,    -1,    -1,   164,    -1,
     164,    -1,    -1,    -1,   300,   301,    -1,   341,    -1,    -1,
     341,    -1,    -1,    -1,   217,    -1,   312,   183,    -1,   183,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,
       9,    10,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      -1,    20,    -1,    -1,    23,   341,    -1,    -1,    -1,    -1,
      -1,   217,    -1,   217,    33,    -1,    35,   391,    37,    -1,
     391,    40,    41,    42,    -1,    -1,   400,    -1,    -1,   400,
      11,    12,    13,    -1,    15,   278,   279,    18,    -1,    20,
      -1,    -1,    23,   286,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,   391,    -1,   300,   301,    40,
      41,    42,    43,    44,   400,    -1,    -1,    -1,    -1,   312,
      -1,    -1,   278,   279,   278,   279,    14,    15,    16,    17,
     286,    19,   286,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,   300,   301,   300,   301,   341,    37,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,   312,    -1,
      -1,    -1,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    -1,    -1,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,   341,    -1,   341,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    -1,   391,    40,
      41,    42,     3,     4,    -1,    -1,     7,   400,     9,    10,
      11,    12,    13,    -1,    15,    -1,    -1,    18,    -1,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,   391,    37,   391,    -1,    40,
      41,    42,    -1,    -1,   400,    -1,   400,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    -1,    33,    18,    35,
      20,    37,    -1,    23,    40,    41,    42,    11,    12,    13,
      -1,    15,    -1,    33,    18,    -1,    20,    37,    -1,    23,
      40,    41,    42,    11,    12,    13,    -1,    15,    -1,    33,
      18,    -1,    20,    37,    -1,    23,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    -1,    33,    18,    -1,
      20,    37,    -1,    23,    40,    41,    42,    11,    12,    13,
      -1,    15,    -1,    33,    18,    -1,    20,    37,    -1,    23,
      40,    41,    42,    11,    12,    13,    -1,    15,    -1,    33,
      18,    -1,    20,    37,    -1,    23,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    -1,    33,    18,    -1,
      20,    37,    -1,    23,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    33,    20,    -1,
      -1,    23,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    11,    12,    13,    -1,    15,    -1,    -1,    18,    -1,
      20,    -1,    -1,    23,    -1,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    33,    20,    -1,    -1,    23,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    14,    15,    16,
      17,    -1,    19,    -1,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    38,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    -1,    -1,    -1,    38,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      14,    15,    34,    -1,    -1,    19,    38,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    14,    15,
      34,    -1,    -1,    19,    38,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    -1,    19,    -1,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      37,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
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
      28,    29,    30,    31,    -1,    14,    15,    16,    17,    37,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    14,    15,    16,    17,    37,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    14,    15,    16,    17,    37,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    14,    15,    16,    17,    37,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    14,    15,    -1,    -1,    37,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      14,    15,    -1,    -1,    37,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    14,
      15,    16,    17,    37,    19,    -1,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      14,    15,    16,    17,    -1,    19,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
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
      14,    15,    34,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    14,    15,    16,    17,    -1,    19,    -1,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    19,
      33,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    19,    -1,    -1,    38,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    19,    -1,    -1,    38,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    19,    -1,    -1,    -1,    37,
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
      25,    26,    27,    28,    29,    30,    31,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,    46,    47,    48,    49,    50,    51,
      55,    56,    57,     0,    48,    37,    37,     5,    40,    40,
      33,    33,    34,    52,    53,    54,    55,    56,    57,    34,
      52,    35,    58,    34,    38,     5,    40,    58,    34,    59,
      58,    54,    40,    58,     7,     9,    10,    11,    12,    13,
      15,    18,    20,    23,    33,    37,    40,    41,    42,    49,
      50,    58,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    33,    33,
      37,    67,    86,    33,    33,    33,    40,    74,    40,    40,
      70,    67,    21,    22,    26,    27,    32,    33,    36,    62,
      19,    37,    24,    25,    78,    26,    27,    28,    29,    30,
      31,    75,    14,    15,    76,    16,    17,    77,    37,    37,
      67,    65,    37,    40,    43,    44,    67,    69,    79,    92,
      92,    34,    40,    40,     6,     6,     6,    67,    34,    67,
      90,    91,    40,    23,    70,    71,    72,    73,    34,    65,
      34,    34,    34,    34,    38,    70,    62,    67,    67,     8,
      34,    62,    62,    35,    55,    56,    57,    87,    88,    15,
      18,    20,    23,    33,    40,    41,    42,    68,    69,    70,
      71,    72,    73,    74,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    37,    67,    40,    68,    86,
      87,    88,    19,    15,    18,    20,    23,    33,    40,    41,
      42,    68,    69,    70,    71,    72,    73,    74,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    37,
      67,    78,    19,     7,     9,    10,    35,    37,    49,    50,
      55,    56,    58,    63,    64,    65,    66,    67,    86,    87,
      88,    59,    37,    37,     5,    40,    37,    37,    40,    74,
      40,    40,    70,    67,    21,    22,    26,    27,    32,    33,
      75,    76,    77,    37,    37,    37,    32,    37,    37,    40,
      40,    74,    40,    40,    70,    67,    21,    22,    26,    27,
      32,    33,    78,    75,    76,    77,    37,    37,    37,    23,
      70,    40,    33,    33,    37,    67,    59,    37,    37,    37,
      37,    37,    60,    40,    34,    40,    40,     6,     6,     6,
      67,    34,    90,    71,    72,    73,     6,    15,    18,    20,
      23,    33,    40,    41,    42,    67,    69,    70,    71,    72,
      73,    74,    79,    80,    81,    82,    83,    84,    85,    89,
      34,    40,    40,     6,     6,     6,    67,    34,    90,    23,
      70,    71,    72,    73,    70,    67,    65,    37,    60,    36,
      34,    40,    74,    40,    40,    70,    67,    21,    22,    26,
      27,    33,    19,    78,    75,    76,    77,    34,    70,    34,
      65,    36,    34,    40,    40,     6,     6,    34,    90,    40,
      23,    70,    71,    72,    73,    62,    67,    34,    70,     8,
      34,    62,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    49,
      50,    51,    51,    51,    51,    52,    53,    53,    54,    54,
      55,    56,    57,    57,    59,    58,    60,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    69,    70,    70,    71,    71,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    80,    81,    82,    83,    84,
      85,    85,    86,    86,    87,    88,    88,    89,    89,    90,
      91,    91,    92,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     6,     7,     5,     6,     1,     3,     1,     1,     1,
       2,     3,     1,     1,     0,     4,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     7,
       2,     1,     3,     2,     1,     1,     1,     1,     3,     3,
       2,     3,     4,     1,     3,     1,     3,     1,     3,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     3,     3,
       3,     3,     2,     2,     4,     4,     4,     4,     3,     1,
       3,     1,     1,     1,     1,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
  YYLTYPE *yylloc;
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declarations  */
#line 128 "src/sintatic.y"
                      {
 (yyval.element) = create_element(PROGRAM, NULL, NULL, NULL, (yyvsp[0].element));
 tree = (yyval.element);
}
#line 2729 "sintatic.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 133 "src/sintatic.y"
                                       {
  (yyval.element) = create_element(DECLARATIONS, NULL, NULL, NULL, (yyvsp[-1].element));
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);

}
#line 2739 "sintatic.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 137 "src/sintatic.y"
                {
  (yyval.element) = (yyvsp[0].element);
}
#line 2747 "sintatic.tab.c"
    break;

  case 5: /* declaration: variable_declaration  */
#line 141 "src/sintatic.y"
                                  {
  (yyval.element) = (yyvsp[0].element);
}
#line 2755 "sintatic.tab.c"
    break;

  case 6: /* declaration: list_declaration  */
#line 143 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 2763 "sintatic.tab.c"
    break;

  case 7: /* declaration: function_declaration  */
#line 145 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 2771 "sintatic.tab.c"
    break;

  case 8: /* declaration: error  */
#line 147 "src/sintatic.y"
          {
  yyerrok;
  (yyval.element) = NULL;
}
#line 2780 "sintatic.tab.c"
    break;

  case 9: /* variable_declaration: variable_simple_declaration SEMI  */
#line 152 "src/sintatic.y"
                                                       {
  (yyval.element) = (yyvsp[-1].element);
}
#line 2788 "sintatic.tab.c"
    break;

  case 10: /* list_declaration: list_simple_declaration SEMI  */
#line 156 "src/sintatic.y"
                                               {
  (yyval.element) = (yyvsp[-1].element);
}
#line 2796 "sintatic.tab.c"
    break;

  case 11: /* function_declaration: type_specifier ID L_PAREN parameters R_PAREN compound_statement  */
#line 161 "src/sintatic.y"
                                                                  {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-5].element)->type, (yyvsp[-4].name), NULL, (yyvsp[-2].element));
    (yyvsp[-2].element)->next_left = (yyvsp[0].element);
    insert_symbol(table, (yyvsp[-4].name), (yyvsp[-5].element)->type, "function", lineno);
}
#line 2806 "sintatic.tab.c"
    break;

  case 12: /* function_declaration: type_specifier LIST ID L_PAREN parameters R_PAREN compound_statement  */
#line 166 "src/sintatic.y"
                                                                       {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-5].name), (yyvsp[-4].name), NULL, (yyvsp[-2].element));
    (yyvsp[-2].element)->next_left = (yyvsp[0].element);
    insert_symbol(table, (yyvsp[-4].name), (yyvsp[-5].name), "function", lineno);
}
#line 2816 "sintatic.tab.c"
    break;

  case 13: /* function_declaration: type_specifier ID L_PAREN R_PAREN compound_statement  */
#line 171 "src/sintatic.y"
                                                       {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-4].element)->type, (yyvsp[-3].name), NULL, NULL);
    insert_symbol(table, (yyvsp[-2].name), (yyvsp[-4].element)->type, "function", lineno);
}
#line 2825 "sintatic.tab.c"
    break;

  case 14: /* function_declaration: type_specifier LIST ID L_PAREN R_PAREN compound_statement  */
#line 175 "src/sintatic.y"
                                                            {
   (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-4].name), (yyvsp[-3].name), NULL, NULL);
   insert_symbol(table, (yyvsp[-3].name), (yyvsp[-4].name), "function", lineno);
}
#line 2834 "sintatic.tab.c"
    break;

  case 15: /* parameters: list_paremeters  */
#line 180 "src/sintatic.y"
                            {
  (yyval.element) = (yyvsp[0].element);
}
#line 2842 "sintatic.tab.c"
    break;

  case 16: /* list_paremeters: list_paremeters COMMA parameter  */
#line 184 "src/sintatic.y"
                                                 {
  (yyval.element) = create_element(LIST_PARAMETERS, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_right = (yyvsp[0].element);
}
#line 2851 "sintatic.tab.c"
    break;

  case 17: /* list_paremeters: parameter  */
#line 187 "src/sintatic.y"
              {
  (yyval.element) = (yyvsp[0].element);
}
#line 2859 "sintatic.tab.c"
    break;

  case 18: /* parameter: variable_simple_declaration  */
#line 191 "src/sintatic.y"
                                       {
  (yyval.element) = (yyvsp[0].element);
}
#line 2867 "sintatic.tab.c"
    break;

  case 19: /* parameter: list_simple_declaration  */
#line 193 "src/sintatic.y"
                            {
  (yyval.element) = (yyvsp[0].element);
}
#line 2875 "sintatic.tab.c"
    break;

  case 20: /* variable_simple_declaration: type_specifier ID  */
#line 197 "src/sintatic.y"
                                               {
  (yyval.element) = create_element(VARIABLE_SIMPLE_DECLARATION, (yyvsp[-1].element)->type, (yyvsp[0].name), NULL, NULL);
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].element)->type, "variable", lineno);
}
#line 2884 "sintatic.tab.c"
    break;

  case 21: /* list_simple_declaration: type_specifier LIST ID  */
#line 202 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(LIST_SIMPLE_DECLARATION, (yyvsp[-1].name), (yyvsp[0].name), NULL, NULL);
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "variable", lineno);
}
#line 2893 "sintatic.tab.c"
    break;

  case 22: /* type_specifier: INT  */
#line 207 "src/sintatic.y"
                    {
  (yyval.element) = create_element(TYPE_SPECIFIER, (yyvsp[0].name), NULL, NULL, NULL);
}
#line 2901 "sintatic.tab.c"
    break;

  case 23: /* type_specifier: FLOAT  */
#line 209 "src/sintatic.y"
          {
  (yyval.element) = create_element(TYPE_SPECIFIER, (yyvsp[0].name), NULL, NULL, NULL);
}
#line 2909 "sintatic.tab.c"
    break;

  case 24: /* $@1: %empty  */
#line 215 "src/sintatic.y"
    {
     present_scope+=1;
    }
#line 2917 "sintatic.tab.c"
    break;

  case 25: /* compound_statement: L_BRACK $@1 local_declarations R_BRACK  */
#line 218 "src/sintatic.y"
                                 {
       (yyval.element) = create_element(COMPOUND_STATEMENT, NULL, NULL, NULL, (yyvsp[-1].element));
       present_scope--;
      }
#line 2926 "sintatic.tab.c"
    break;

  case 26: /* local_declarations: list_statements  */
#line 223 "src/sintatic.y"
                                    {
 (yyval.element) = (yyvsp[0].element);
}
#line 2934 "sintatic.tab.c"
    break;

  case 27: /* list_statements: list_statements statement  */
#line 227 "src/sintatic.y"
                                           {
 (yyval.element) = create_element(LIST_STATEMENTS, NULL, NULL, NULL, (yyvsp[-1].element));
 (yyvsp[-1].element)->next_left = (yyvsp[0].element); 
}
#line 2943 "sintatic.tab.c"
    break;

  case 28: /* list_statements: statement  */
#line 230 "src/sintatic.y"
              {
 (yyval.element) = (yyvsp[0].element);
}
#line 2951 "sintatic.tab.c"
    break;

  case 29: /* statement: expression_statement  */
#line 234 "src/sintatic.y"
                                {
  (yyval.element) = (yyvsp[0].element);
}
#line 2959 "sintatic.tab.c"
    break;

  case 30: /* statement: compound_statement  */
#line 236 "src/sintatic.y"
                       {
  (yyval.element) = (yyvsp[0].element);
}
#line 2967 "sintatic.tab.c"
    break;

  case 31: /* statement: conditional_statement  */
#line 238 "src/sintatic.y"
                          {
  (yyval.element) = (yyvsp[0].element);
}
#line 2975 "sintatic.tab.c"
    break;

  case 32: /* statement: iteration_statement  */
#line 240 "src/sintatic.y"
                        {
  (yyval.element) = (yyvsp[0].element);
}
#line 2983 "sintatic.tab.c"
    break;

  case 33: /* statement: return_statement  */
#line 242 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 2991 "sintatic.tab.c"
    break;

  case 34: /* statement: variable_declaration  */
#line 244 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 2999 "sintatic.tab.c"
    break;

  case 35: /* statement: list_declaration  */
#line 246 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 3007 "sintatic.tab.c"
    break;

  case 36: /* statement: in_out_expression  */
#line 248 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3015 "sintatic.tab.c"
    break;

  case 37: /* conditional_statement: IF L_PAREN expression R_PAREN statement  */
#line 252 "src/sintatic.y"
                                                               {
  (yyval.element) = create_element(CONDITIONAL_STATEMENT, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3024 "sintatic.tab.c"
    break;

  case 38: /* conditional_statement: IF L_PAREN expression R_PAREN statement ELSE statement  */
#line 255 "src/sintatic.y"
                                                           {
  (yyval.element) = create_element(CONDITIONAL_STATEMENT, NULL, NULL, NULL, (yyvsp[-4].element));
  (yyvsp[-4].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3034 "sintatic.tab.c"
    break;

  case 39: /* iteration_statement: FOR L_PAREN expression_statement expression_statement expression R_PAREN statement  */
#line 261 "src/sintatic.y"
                                                                                                        {
  (yyval.element) = create_element(ITERATION_STATEMENT, NULL, NULL, NULL, (yyvsp[-4].element));
  (yyvsp[-4].element)->next_left = (yyvsp[-3].element);
  (yyvsp[-3].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3045 "sintatic.tab.c"
    break;

  case 40: /* expression_statement: expression SEMI  */
#line 268 "src/sintatic.y"
                                      {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3053 "sintatic.tab.c"
    break;

  case 41: /* expression_statement: SEMI  */
#line 270 "src/sintatic.y"
         {
  (yyval.element) = NULL;
}
#line 3061 "sintatic.tab.c"
    break;

  case 42: /* return_statement: RETURN expression SEMI  */
#line 274 "src/sintatic.y"
                                         {
  (yyval.element) = create_element(RETURN_STATEMENT, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3069 "sintatic.tab.c"
    break;

  case 43: /* return_statement: RETURN SEMI  */
#line 276 "src/sintatic.y"
                {
  (yyval.element) = create_element(RETURN_STATEMENT, NULL, NULL, NULL, NULL);
}
#line 3077 "sintatic.tab.c"
    break;

  case 44: /* expression: assign_expression  */
#line 280 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3085 "sintatic.tab.c"
    break;

  case 45: /* expression: simple_expression  */
#line 282 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3093 "sintatic.tab.c"
    break;

  case 46: /* expression: list_expression  */
#line 284 "src/sintatic.y"
                    {
  (yyval.element) = (yyvsp[0].element);
}
#line 3101 "sintatic.tab.c"
    break;

  case 47: /* expression: in_out_expression  */
#line 286 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3109 "sintatic.tab.c"
    break;

  case 48: /* assign_expression: ID ASSIGN_OP expression  */
#line 290 "src/sintatic.y"
                                           {
  (yyval.element) = create_element(ASSIGN_EXPRESSION, NULL, (yyvsp[-1].name), NULL, (yyvsp[0].element));
}
#line 3117 "sintatic.tab.c"
    break;

  case 49: /* assign_expression: ID ASSIGN_OP NIL  */
#line 292 "src/sintatic.y"
                     {
  (yyval.element) = create_element(ASSIGN_EXPRESSION, NULL, (yyvsp[-1].name), NULL, NULL);
}
#line 3125 "sintatic.tab.c"
    break;

  case 50: /* simple_expression: EXC_OP relational_expression  */
#line 296 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].element));
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3134 "sintatic.tab.c"
    break;

  case 51: /* simple_expression: simple_expression binary_logic_op relational_expression  */
#line 299 "src/sintatic.y"
                                                            {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3144 "sintatic.tab.c"
    break;

  case 52: /* simple_expression: simple_expression binary_logic_op EXC_OP relational_expression  */
#line 303 "src/sintatic.y"
                                                                   {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].element));
  (yyvsp[-3].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[0].element)->next_left = (yyvsp[0].element);
}
#line 3155 "sintatic.tab.c"
    break;

  case 53: /* simple_expression: relational_expression  */
#line 308 "src/sintatic.y"
                          {
  (yyval.element) = (yyvsp[0].element);
}
#line 3163 "sintatic.tab.c"
    break;

  case 54: /* relational_expression: relational_expression relational_op arithmetic_add_expression  */
#line 312 "src/sintatic.y"
                                                                                     {
  (yyval.element) = create_element(RELATIONAL_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3173 "sintatic.tab.c"
    break;

  case 55: /* relational_expression: arithmetic_add_expression  */
#line 316 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3181 "sintatic.tab.c"
    break;

  case 56: /* arithmetic_add_expression: arithmetic_add_expression arithmetic_add_op arithmetic_mul_expression  */
#line 320 "src/sintatic.y"
                                                                                                 {
  (yyval.element) = create_element(ARITHMETIC_ADD_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3191 "sintatic.tab.c"
    break;

  case 57: /* arithmetic_add_expression: arithmetic_mul_expression  */
#line 324 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3199 "sintatic.tab.c"
    break;

  case 58: /* arithmetic_mul_expression: arithmetic_mul_expression arithmetic_mult_op unary_sub_expression  */
#line 328 "src/sintatic.y"
                                                                                             {
  (yyval.element) = create_element(ARITHMETIC_MUL_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3209 "sintatic.tab.c"
    break;

  case 59: /* arithmetic_mul_expression: unary_sub_expression  */
#line 332 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 3217 "sintatic.tab.c"
    break;

  case 60: /* unary_sub_expression: SUB_OP factor  */
#line 336 "src/sintatic.y"
                                    {
  (yyval.element) = (yyvsp[0].element);
  (yyval.element) = create_element(UNARY_SUB_EXPRESSION, NULL, (yyvsp[-1].name), NULL, (yyvsp[0].element));
}
#line 3226 "sintatic.tab.c"
    break;

  case 61: /* unary_sub_expression: factor  */
#line 339 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3234 "sintatic.tab.c"
    break;

  case 62: /* factor: L_PAREN expression R_PAREN  */
#line 343 "src/sintatic.y"
                                   {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3242 "sintatic.tab.c"
    break;

  case 63: /* factor: function_call  */
#line 345 "src/sintatic.y"
                {
  (yyval.element) = (yyvsp[0].element);
}
#line 3250 "sintatic.tab.c"
    break;

  case 64: /* factor: ID  */
#line 347 "src/sintatic.y"
       {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3258 "sintatic.tab.c"
    break;

  case 65: /* factor: INT_CONST  */
#line 349 "src/sintatic.y"
              {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3266 "sintatic.tab.c"
    break;

  case 66: /* factor: FLOAT_CONST  */
#line 351 "src/sintatic.y"
                {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3274 "sintatic.tab.c"
    break;

  case 67: /* relational_op: LST_OP  */
#line 355 "src/sintatic.y"
                      {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3282 "sintatic.tab.c"
    break;

  case 68: /* relational_op: LST_EQ_OP  */
#line 357 "src/sintatic.y"
              {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3290 "sintatic.tab.c"
    break;

  case 69: /* relational_op: GRT_OP  */
#line 359 "src/sintatic.y"
           {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3298 "sintatic.tab.c"
    break;

  case 70: /* relational_op: GRT_EQ_OP  */
#line 361 "src/sintatic.y"
              {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3306 "sintatic.tab.c"
    break;

  case 71: /* relational_op: EQUAL_OP  */
#line 363 "src/sintatic.y"
             {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3314 "sintatic.tab.c"
    break;

  case 72: /* relational_op: DIFF_OP  */
#line 365 "src/sintatic.y"
            {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3322 "sintatic.tab.c"
    break;

  case 73: /* arithmetic_add_op: SUM_OP  */
#line 369 "src/sintatic.y"
                          {
  (yyval.element) = create_element(ARITHMETIC_ADD_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3330 "sintatic.tab.c"
    break;

  case 74: /* arithmetic_add_op: SUB_OP  */
#line 371 "src/sintatic.y"
           {
  (yyval.element) = create_element(ARITHMETIC_ADD_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3338 "sintatic.tab.c"
    break;

  case 75: /* arithmetic_mult_op: MULT_OP  */
#line 375 "src/sintatic.y"
                            {
  (yyval.element) = create_element(ARITHMETIC_MULT_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3346 "sintatic.tab.c"
    break;

  case 76: /* arithmetic_mult_op: DIV_OP  */
#line 377 "src/sintatic.y"
           {
  (yyval.element) = create_element(ARITHMETIC_MULT_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3354 "sintatic.tab.c"
    break;

  case 77: /* binary_logic_op: OR_OP  */
#line 381 "src/sintatic.y"
                       {
  (yyval.element) = create_element(BINARY_LOGIC_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3362 "sintatic.tab.c"
    break;

  case 78: /* binary_logic_op: AND_OP  */
#line 383 "src/sintatic.y"
           {
  (yyval.element) = create_element(BINARY_LOGIC_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3370 "sintatic.tab.c"
    break;

  case 79: /* list_expression: constructor  */
#line 387 "src/sintatic.y"
                             {
  (yyval.element) = (yyvsp[0].element);
}
#line 3378 "sintatic.tab.c"
    break;

  case 80: /* list_expression: header  */
#line 389 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3386 "sintatic.tab.c"
    break;

  case 81: /* list_expression: tail  */
#line 391 "src/sintatic.y"
         {
  (yyval.element) = (yyvsp[0].element);
}
#line 3394 "sintatic.tab.c"
    break;

  case 82: /* list_expression: map  */
#line 393 "src/sintatic.y"
       {
  (yyval.element) = (yyvsp[0].element);
}
#line 3402 "sintatic.tab.c"
    break;

  case 83: /* list_expression: filter  */
#line 395 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3410 "sintatic.tab.c"
    break;

  case 84: /* list_expression: list_comparation  */
#line 397 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 3418 "sintatic.tab.c"
    break;

  case 85: /* constructor: expression LIST_CONSTRUCTOR ID  */
#line 401 "src/sintatic.y"
                                            {
  (yyval.element) = create_element(CONSTRUCTOR, (yyvsp[-1].name), (yyvsp[0].name), NULL, (yyvsp[-2].element));
}
#line 3426 "sintatic.tab.c"
    break;

  case 86: /* header: LIST_HEADER ID  */
#line 405 "src/sintatic.y"
                       {
  (yyval.element) = create_element(HEADER, (yyvsp[0].name), (yyvsp[-1].name), NULL, NULL);
}
#line 3434 "sintatic.tab.c"
    break;

  case 87: /* tail: LIST_TAIL ID  */
#line 409 "src/sintatic.y"
                   {
  (yyval.element) = create_element(TAIL, (yyvsp[0].name), (yyvsp[-1].name), NULL, NULL);
}
#line 3442 "sintatic.tab.c"
    break;

  case 88: /* map: ID LIST_MAP ID  */
#line 413 "src/sintatic.y"
                    {
  (yyval.element) = create_element(MAP, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3450 "sintatic.tab.c"
    break;

  case 89: /* filter: ID LIST_FILTER ID  */
#line 417 "src/sintatic.y"
                          {
  (yyval.element) = create_element(FILTER, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3458 "sintatic.tab.c"
    break;

  case 90: /* list_comparation: ID EQUAL_OP NIL  */
#line 421 "src/sintatic.y"
                                  {
  (yyval.element) = create_element(LIST_COMPARATION, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3466 "sintatic.tab.c"
    break;

  case 91: /* list_comparation: ID DIFF_OP NIL  */
#line 423 "src/sintatic.y"
                   {
  (yyval.element) = create_element(LIST_COMPARATION, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3474 "sintatic.tab.c"
    break;

  case 92: /* in_out_expression: read SEMI  */
#line 427 "src/sintatic.y"
                             {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3482 "sintatic.tab.c"
    break;

  case 93: /* in_out_expression: write SEMI  */
#line 429 "src/sintatic.y"
               {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3490 "sintatic.tab.c"
    break;

  case 94: /* read: READ L_PAREN ID R_PAREN  */
#line 433 "src/sintatic.y"
                              {
  (yyval.element) = create_element(READ_EXP, NULL, NULL, NULL, NULL);
}
#line 3498 "sintatic.tab.c"
    break;

  case 95: /* write: WRITE L_PAREN var R_PAREN  */
#line 437 "src/sintatic.y"
                                 {
  (yyval.element) = create_element(WRITE_EXP, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3506 "sintatic.tab.c"
    break;

  case 96: /* write: WRITELN L_PAREN var R_PAREN  */
#line 439 "src/sintatic.y"
                                {
  (yyval.element) = create_element(WRITE_EXP, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3514 "sintatic.tab.c"
    break;

  case 97: /* function_call: ID L_PAREN arguments R_PAREN  */
#line 443 "src/sintatic.y"
                                            {

}
#line 3522 "sintatic.tab.c"
    break;

  case 98: /* function_call: ID L_PAREN R_PAREN  */
#line 445 "src/sintatic.y"
                       {
  (yyval.element) = create_element(FUNCTION_CALL, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3530 "sintatic.tab.c"
    break;

  case 99: /* arguments: list_arguments  */
#line 449 "src/sintatic.y"
                          {
 (yyval.element) = (yyvsp[0].element);
}
#line 3538 "sintatic.tab.c"
    break;

  case 100: /* list_arguments: list_arguments COMMA expression  */
#line 453 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(FUNCTION_CALL, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element) -> next_left = (yyvsp[0].element);
}
#line 3547 "sintatic.tab.c"
    break;

  case 101: /* list_arguments: expression  */
#line 456 "src/sintatic.y"
               {
  (yyval.element) = (yyvsp[0].element);
}
#line 3555 "sintatic.tab.c"
    break;

  case 102: /* var: STRING  */
#line 460 "src/sintatic.y"
            {
  (yyval.element) = create_element(VAR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3563 "sintatic.tab.c"
    break;

  case 103: /* var: CHAR  */
#line 462 "src/sintatic.y"
         {
  (yyval.element) = create_element(VAR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3571 "sintatic.tab.c"
    break;

  case 104: /* var: list_expression  */
#line 464 "src/sintatic.y"
                    {
  (yyval.element) = (yyvsp[0].element);
}
#line 3579 "sintatic.tab.c"
    break;

  case 105: /* var: simple_expression  */
#line 466 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3587 "sintatic.tab.c"
    break;


#line 3591 "sintatic.tab.c"

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
  *++yylsp = yyloc;

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
          = {yyssp, yytoken, &yylloc};
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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
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

#line 470 "src/sintatic.y"


extern void yyerror(const char *tt_name) {
  //printf("\nyyerror: %s em linha: %d coluna: %d.\n", tt_name, yylval.lex.lineno, yylval.lex.column);
}

int main(int argc, char *argv[]){

  // #ifdef YYDEBUG
  //   yydebug = 1;
  // #endif

  yyin = fopen(argv[1], "r");

  table = create_symbol_table();

  yyparse();
  fclose(yyin);
  yylex_destroy();


  printf("\n\n\n==================ABSTRACT TREE==================\n\n");
  show_tree(tree, 0);

  show_symbol_table(table);

  free_tree(tree);
  free_symbol_table(table);

  return 0;
}
