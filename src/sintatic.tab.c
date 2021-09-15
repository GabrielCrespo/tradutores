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
  YYSYMBOL_THEN = 3,                       /* THEN  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_LIST = 6,                       /* LIST  */
  YYSYMBOL_NIL = 7,                        /* NIL  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_READ = 12,                      /* READ  */
  YYSYMBOL_WRITE = 13,                     /* WRITE  */
  YYSYMBOL_WRITELN = 14,                   /* WRITELN  */
  YYSYMBOL_SUM_OP = 15,                    /* SUM_OP  */
  YYSYMBOL_SUB_OP = 16,                    /* SUB_OP  */
  YYSYMBOL_MULT_OP = 17,                   /* MULT_OP  */
  YYSYMBOL_DIV_OP = 18,                    /* DIV_OP  */
  YYSYMBOL_LIST_HEADER = 19,               /* LIST_HEADER  */
  YYSYMBOL_LIST_CONSTRUCTOR = 20,          /* LIST_CONSTRUCTOR  */
  YYSYMBOL_LIST_TAIL = 21,                 /* LIST_TAIL  */
  YYSYMBOL_LIST_MAP = 22,                  /* LIST_MAP  */
  YYSYMBOL_LIST_FILTER = 23,               /* LIST_FILTER  */
  YYSYMBOL_EXC_OP = 24,                    /* EXC_OP  */
  YYSYMBOL_OR_OP = 25,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 26,                    /* AND_OP  */
  YYSYMBOL_EQUAL_OP = 27,                  /* EQUAL_OP  */
  YYSYMBOL_DIFF_OP = 28,                   /* DIFF_OP  */
  YYSYMBOL_LST_OP = 29,                    /* LST_OP  */
  YYSYMBOL_GRT_OP = 30,                    /* GRT_OP  */
  YYSYMBOL_LST_EQ_OP = 31,                 /* LST_EQ_OP  */
  YYSYMBOL_GRT_EQ_OP = 32,                 /* GRT_EQ_OP  */
  YYSYMBOL_ASSIGN_OP = 33,                 /* ASSIGN_OP  */
  YYSYMBOL_L_PAREN = 34,                   /* L_PAREN  */
  YYSYMBOL_R_PAREN = 35,                   /* R_PAREN  */
  YYSYMBOL_L_BRACK = 36,                   /* L_BRACK  */
  YYSYMBOL_R_BRACK = 37,                   /* R_BRACK  */
  YYSYMBOL_SEMI = 38,                      /* SEMI  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_REFFER = 40,                    /* REFFER  */
  YYSYMBOL_ID = 41,                        /* ID  */
  YYSYMBOL_INT_CONST = 42,                 /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 43,               /* FLOAT_CONST  */
  YYSYMBOL_STRING = 44,                    /* STRING  */
  YYSYMBOL_CHAR = 45,                      /* CHAR  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_declarations = 48,              /* declarations  */
  YYSYMBOL_declaration = 49,               /* declaration  */
  YYSYMBOL_variable_declaration = 50,      /* variable_declaration  */
  YYSYMBOL_list_declaration = 51,          /* list_declaration  */
  YYSYMBOL_function_declaration = 52,      /* function_declaration  */
  YYSYMBOL_parameters = 53,                /* parameters  */
  YYSYMBOL_list_paremeters = 54,           /* list_paremeters  */
  YYSYMBOL_parameter = 55,                 /* parameter  */
  YYSYMBOL_variable_simple_declaration = 56, /* variable_simple_declaration  */
  YYSYMBOL_list_simple_declaration = 57,   /* list_simple_declaration  */
  YYSYMBOL_type_specifier = 58,            /* type_specifier  */
  YYSYMBOL_compound_statement = 59,        /* compound_statement  */
  YYSYMBOL_60_1 = 60,                      /* $@1  */
  YYSYMBOL_local_declarations = 61,        /* local_declarations  */
  YYSYMBOL_list_statements = 62,           /* list_statements  */
  YYSYMBOL_statement = 63,                 /* statement  */
  YYSYMBOL_conditional_statement = 64,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 65,       /* iteration_statement  */
  YYSYMBOL_expression_statement = 66,      /* expression_statement  */
  YYSYMBOL_return_statement = 67,          /* return_statement  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_assign_expression = 69,         /* assign_expression  */
  YYSYMBOL_simple_expression = 70,         /* simple_expression  */
  YYSYMBOL_relational_expression = 71,     /* relational_expression  */
  YYSYMBOL_arithmetic_add_expression = 72, /* arithmetic_add_expression  */
  YYSYMBOL_arithmetic_mul_expression = 73, /* arithmetic_mul_expression  */
  YYSYMBOL_unary_sub_expression = 74,      /* unary_sub_expression  */
  YYSYMBOL_factor = 75,                    /* factor  */
  YYSYMBOL_relational_op = 76,             /* relational_op  */
  YYSYMBOL_arithmetic_add_op = 77,         /* arithmetic_add_op  */
  YYSYMBOL_arithmetic_mult_op = 78,        /* arithmetic_mult_op  */
  YYSYMBOL_binary_logic_op = 79,           /* binary_logic_op  */
  YYSYMBOL_list_expression = 80,           /* list_expression  */
  YYSYMBOL_constructor = 81,               /* constructor  */
  YYSYMBOL_header = 82,                    /* header  */
  YYSYMBOL_tail = 83,                      /* tail  */
  YYSYMBOL_map = 84,                       /* map  */
  YYSYMBOL_filter = 85,                    /* filter  */
  YYSYMBOL_list_comparation = 86,          /* list_comparation  */
  YYSYMBOL_in_out_expression = 87,         /* in_out_expression  */
  YYSYMBOL_read = 88,                      /* read  */
  YYSYMBOL_write = 89,                     /* write  */
  YYSYMBOL_function_call = 90,             /* function_call  */
  YYSYMBOL_arguments = 91,                 /* arguments  */
  YYSYMBOL_list_arguments = 92,            /* list_arguments  */
  YYSYMBOL_var = 93                        /* var  */
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
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  423

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   130,   130,   135,   139,   143,   145,   147,   149,   154,
     158,   163,   168,   173,   177,   182,   186,   189,   193,   195,
     199,   204,   209,   211,   217,   216,   225,   229,   232,   236,
     238,   240,   242,   244,   246,   248,   250,   254,   257,   263,
     270,   272,   276,   278,   282,   284,   286,   288,   292,   294,
     298,   301,   305,   310,   314,   318,   322,   326,   330,   334,
     338,   341,   345,   347,   349,   351,   353,   357,   359,   361,
     363,   365,   367,   371,   373,   377,   379,   383,   385,   389,
     391,   393,   395,   397,   399,   403,   407,   411,   415,   419,
     423,   425,   429,   431,   435,   439,   441,   445,   447,   451,
     455,   458,   462,   464,   466,   468
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
  "\"end of file\"", "error", "\"invalid token\"", "THEN", "INT", "FLOAT",
  "LIST", "NIL", "IF", "ELSE", "FOR", "RETURN", "READ", "WRITE", "WRITELN",
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
     295,   296,   297,   298,   299,   300
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
     643,   920,     8,    20,    43,   942,   974,   989,  1037,  1084,
      -3,     7,    26,  -265,  1094,  1103,  1198,    72,   154,   450,
      42,    74,    16,    59,   454,   509,   539,   566,    34,    16,
      84,  1380,  1253,    16,   106,    83,   662,  1272,    16,  1548,
    1319,   674,   679,  1331,    49,   104,  3249,   118,   120,   123,
     807,   140,   142,    48,  3473,  2473,  3948,  1036,  1461,  2513,
    2553,  2593,   134,  2633,  2673,  2713,  2753,  2793,  2833,    24,
      46,   219,   748,  4186,  3996,  4015,  4034,   103,   148,   162,
     179,   188,   209,   215,  1633,   167,   175,  4053,  3473,  3265,
    2873,   235,   238,   181,  1418,  1418,  3972,  4072,   248,   298,
    4601,    19,   208,   230,   253,   267,   177,  3281,  1344,  2913,
     241,  2953,   105,   161,   190,   101,   316,   375,   490,   530,
     583,    48,   586,   623,    48,   653,   695,    48,  1673,  1713,
      61,  3313,  2993,   259,   261,   291,   196,   616,    77,   292,
     302,  4091,   301,   327,   342,   372,   411,   418,  4110,    53,
     311,   753,   419,    48,  4615,  4205,  4129,  4148,  3233,  3473,
     313,   318,   329,  4167,  3487,  4629,  1753,   131,   110,  1548,
    1548,  3033,  3073,  1380,   330,   332,    35,   335,   340,   817,
     338,   349,   705,  3473,  4224,  4266,  4287,   192,   658,   991,
    1206,  4308,  4329,  4350,   226,   249,   271,   295,   461,   475,
     545,   588,   357,   360,  4371,  3329,   421,  4245,   334,   377,
     366,   368,   391,   828,   394,   396,   719,  3473,  3562,  3612,
    3637,   141,   130,   929,  3905,  3662,  3687,  3712,   195,   201,
     217,   246,   278,   294,   325,   354,   369,   429,  3737,  3519,
     423,   300,   431,   449,   471,  3345,  1380,  1793,  1833,  1873,
     477,   483,  1913,  1953,  1993,  2033,  2073,   424,   466,   489,
     512,  1548,  3113,  3153,   527,   518,   514,   515,  1114,  4392,
     620,   638,  4895,   682,   538,   565,   602,   604,   691,  3361,
     705,   705,   705,   688,   706,  3393,   813,   594,   626,   707,
    3587,  3762,   407,   413,  1267,   729,   611,   613,   663,   672,
     867,  3409,   495,   719,   719,   719,   416,   430,  3533,   705,
    4908,   481,  3473,  3265,  2113,   520,  1548,  2153,  2193,  2233,
    1508,  1593,   651,   642,  4413,   735,   737,   767,   778,   779,
     781,  4434,   654,  4515,  4455,  4476,   686,   889,   681,   704,
     724,  3473,  4536,  4648,  4666,   731,    82,  4934,  4864,  4684,
    4702,  4720,   734,   751,   771,   773,   774,   790,   791,  4738,
    3787,   508,   510,   531,   568,   596,   614,  3812,   657,   719,
    4569,  3923,  3837,  3862,  4921,   801,  3313,  2273,   780,  3193,
    4497,  4556,  4756,   802,   808,  4947,   804,   792,   794,   824,
     831,  3441,   805,   553,   724,   724,   724,  3887,  4585,  3233,
    3473,  2313,  4774,   822,   845,   847,   848,  4792,   838,   855,
     724,  4960,  4882,  4810,  4828,  2353,   810,  4846,  4973,  3233,
    3233,  2393,  2433
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
    1196,   -38,   -36,     9,   503,  -264,  -265,   795
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
     177,     8,   114,   261,   -22,   332,   281,    32,   131,   322,
      26,    26,    27,    27,    37,    84,   -23,    85,    40,   282,
     109,   253,    17,    43,    26,    15,    27,   368,   254,   212,
      35,   264,   256,    13,   110,    16,     2,     3,    86,   -22,
     304,    92,    31,   177,   141,   178,   209,   209,   210,   210,
     159,   -23,   111,   305,    50,   187,   -44,    18,    92,   235,
     177,   236,    86,   242,   378,    36,   265,    22,     2,     3,
      12,   212,    54,    88,   -44,    12,   316,   255,  -101,    96,
      57,    58,  -101,    92,    33,   177,   158,   -46,   178,   187,
      28,    28,   -45,   211,   211,   208,   208,   112,   113,    29,
       2,     3,  -104,    19,    28,   178,   237,   -71,   221,    38,
     258,   -77,   259,   -46,    42,   166,   235,   408,   236,   -77,
     242,    84,    84,    85,    85,   -71,   171,   172,    89,   -77,
     178,   -46,   -71,   -71,   -71,  -100,   -77,   -77,   -77,  -100,
     -45,   212,    93,   252,    94,   112,   113,    95,   250,   281,
     251,   -44,   248,   302,   249,   -45,   170,   260,   -79,   -45,
     187,   108,   282,   237,   395,   221,   -44,   -78,    86,    86,
     -44,    98,   -80,    99,   146,   -78,   -79,   396,    20,    47,
      48,    49,   -20,    50,   187,   -78,    51,   304,    52,   -81,
     -80,    53,   -78,   -78,   -78,   128,    50,    92,   -82,   177,
     305,    54,   -44,   129,   153,   -46,   212,   -81,    56,    57,
      58,   -79,   133,    84,    54,    85,   -82,   -44,   187,   -83,
     -46,    96,    57,    58,   -46,   -84,   -79,   -80,   395,   -45,
     -79,   235,   376,   236,   112,   113,   -46,   -83,   209,   142,
     210,   396,   -80,   -84,   178,   110,   -80,   -45,   -47,    91,
     144,   -46,   235,   235,   236,   236,   -81,   101,   -86,   -79,
      86,   143,   253,   132,   145,    92,   -47,   177,    84,   254,
      85,   -81,   152,   256,   -79,   -81,   -86,   393,   237,   187,
     221,   -80,   253,   253,   160,   211,  -102,   208,   -82,   254,
     254,   130,   206,   256,   256,   400,   -80,   136,   136,   237,
     237,   221,   221,   -82,   -83,   -81,   179,   -82,   -87,   147,
     149,   -88,   178,   187,   309,    86,  -103,   161,   255,   -83,
     -81,    97,   -72,   -83,   183,   193,   -87,   162,    92,   -88,
     177,   268,   185,   186,   240,   -84,   163,   -89,   255,   255,
     -72,   -94,   187,   235,   -44,   236,   -95,   -72,   -72,   -72,
     -84,   258,   -90,   259,   -84,   -89,   415,   -96,   262,   193,
     263,   257,   167,   266,   -47,   193,   193,   168,   267,   270,
     -90,   258,   258,   259,   259,   178,   421,   422,   227,   -47,
     271,   -67,   -91,   -47,   252,   283,   273,   -47,   284,   250,
     237,   251,   221,   248,   287,   249,   288,   306,   260,   -67,
     -91,   187,   100,   189,   252,   252,   -67,   -67,   -67,   250,
     250,   251,   251,   248,   248,   249,   249,   -86,   260,   260,
     295,   -49,   289,   -87,   280,   292,   -92,   293,   110,   -85,
     193,   110,   -86,   110,   110,   227,   -86,   189,   -87,   -49,
     -93,   -92,   -87,   189,   189,   -92,   -48,   -85,   315,   285,
     269,   308,   319,   193,   193,   -93,   223,   307,   303,   -93,
     -36,   -36,   311,   154,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -82,   -36,   312,    21,   -36,   -47,   -36,   -21,   -15,
     -36,   330,   149,    34,   291,   -83,   -82,   227,   193,   345,
     -36,   -85,   -36,   -36,   -36,   313,   -69,   -36,   -36,   -36,
     -83,   213,   165,   366,   149,   317,   -85,   280,   189,   369,
     -85,   318,   193,   223,   -69,   375,   206,   320,   -88,   217,
     -89,   -69,   -69,   -69,   -92,   -93,   290,   219,   220,   303,
     110,   272,   189,   -88,   -17,   -89,   -68,   -88,   -17,   -89,
     321,   -90,   -92,   -93,   386,   280,   -20,   204,   377,   193,
     227,   193,   193,   193,   -68,   -84,   -90,   351,   323,   337,
     -90,   -68,   -68,   -68,   -18,   294,   189,   410,   -18,   325,
     -84,   227,   227,   227,   227,   227,   227,   341,   -91,   240,
     193,   204,   394,   193,   381,   343,   344,   204,   204,   -70,
     310,   -19,   -73,   -91,   149,   -19,   326,   -91,   -47,   327,
     238,   328,   257,   416,   -92,   303,   -49,   -70,   382,   280,
     -73,   351,   193,   -47,   -70,   -70,   -70,   -73,   -73,   -73,
     394,   -49,   257,   257,   242,   -49,   -45,   189,   223,   -74,
     -86,   112,   113,   303,     1,   347,   -93,     2,     3,   -48,
     227,  -105,   361,   -48,   362,   -86,   394,   -74,   -87,   223,
     223,   370,   204,   394,   -74,   -74,   -74,   238,   374,   -75,
     363,   189,   227,   -87,   351,   351,   351,   351,   -45,   364,
     -21,   193,   204,   112,   113,   204,   204,   -75,   379,   380,
     192,   351,   397,   -45,   -75,   -75,   -75,   -20,   329,   385,
     189,   -20,   212,    47,    48,    49,   -49,   179,   -92,   -16,
     180,   -76,   181,   -16,   -21,   182,   238,   324,   -21,   238,
     204,   179,   383,   -92,   192,   183,   -93,   -85,   398,   -76,
     192,   192,   184,   185,   186,   213,   -76,   -76,   -76,   183,
     337,   -93,   -85,   226,   204,   384,   268,   185,   186,   212,
     223,   392,   411,   217,   -46,   -88,   188,   -89,   341,   189,
     290,   219,   220,   157,   360,   381,   343,   344,   -53,   418,
     -88,   -79,   -89,   -53,   -53,   115,   116,   117,   118,   119,
     120,   204,   238,   204,   204,   204,   -53,   -90,   -99,   359,
     188,   -80,   164,   -81,   -82,   192,   137,   137,   -91,   -49,
     226,   212,   -90,   238,   238,   238,   238,   238,   238,   222,
     -83,   -84,   204,   -91,   -49,   204,   -48,   401,   192,   192,
     336,   212,   -86,   191,   212,    47,    48,    49,   -87,   337,
     212,   405,   338,   403,   339,   404,   399,   340,   406,   402,
     359,    54,   -88,   359,   204,   420,   409,   341,    96,    57,
      58,   183,   226,   192,   342,   343,   344,   191,   268,   185,
     186,   188,   217,   191,   191,   -89,   222,   -90,   -91,   290,
     219,   220,   238,   417,   365,   -85,   225,   192,    14,    47,
      48,    49,    30,   213,    41,   188,   214,     0,   215,     0,
     140,   216,     0,   156,   238,     0,   359,   359,   359,   359,
       0,   217,     0,   204,     0,     0,     0,     0,   218,   219,
     220,     0,     0,   359,   192,   226,   192,   192,   335,   188,
      -8,    -8,   350,   341,    -8,    -8,     0,     0,   191,   190,
     381,   343,   344,   225,     0,     0,   226,   226,   226,   226,
     226,   373,    -2,     1,     0,   192,     2,     3,   192,   -53,
       0,   191,   191,     0,   -53,   -53,   115,   116,   117,   118,
     119,   120,     0,   190,   -53,     0,     0,     0,   -53,   190,
     190,     0,   194,     0,    -4,    -4,   350,   192,    -4,    -4,
     188,   222,   224,     0,     0,   225,   191,     0,   346,    -5,
      -5,     0,     0,    -5,    -5,     0,   155,     0,     0,     0,
       0,     0,   222,   222,     0,   226,   194,     0,     0,     0,
     191,   -53,   138,   138,   188,     0,   -53,   -53,   115,   116,
     117,   118,   119,   120,     0,   228,   -53,   226,     0,   350,
     350,   350,   414,     0,   190,     0,   192,    -6,    -6,   224,
       0,    -6,    -6,   188,     0,     0,   350,   191,   225,   191,
     334,   -65,   -65,   -65,   -65,   349,   -65,   190,   190,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   225,
     225,   225,   225,   372,   -65,     0,     0,   194,   191,     0,
     195,   191,   228,   196,    -7,    -7,     0,     0,    -7,    -7,
       0,   224,   190,   222,    -3,    -3,     0,     0,    -3,    -3,
       0,   194,   188,    -9,    -9,     0,     0,    -9,    -9,   349,
     191,     0,     0,     0,   195,     0,   190,   196,   197,     0,
     195,   195,     0,   196,   196,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   229,   -64,   194,   230,     0,   225,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   279,   -64,
       0,     0,   197,   190,   224,   333,     0,     0,   197,   197,
     225,   348,   349,   349,   413,     0,     0,     0,     0,   191,
       0,   231,     0,     0,     0,   224,   224,   224,   371,   349,
       0,     0,     0,     0,   190,   195,     0,   190,   196,     0,
     229,     0,     0,   230,     0,     0,   194,   228,   -10,   -10,
       0,     0,   -10,   -10,   352,     0,     0,     0,     0,   195,
       0,   198,   196,     0,     0,   348,   190,     0,   228,   228,
       0,   122,   123,   197,     0,     0,   -55,     0,   231,     0,
     194,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,
       0,   -55,     0,   195,   224,   198,   196,   197,   199,     0,
     200,   198,   198,   -13,   -13,     0,     0,   -13,   -13,   194,
       0,     0,     0,     0,   232,     0,   224,     0,   348,   412,
       0,     0,   -14,   -14,     0,   190,   -14,   -14,     0,     0,
       0,   197,   199,     0,   200,   348,     0,   -50,   199,   199,
     200,   200,   -50,   -50,   115,   116,   117,   118,   119,   120,
       0,   233,   -50,   234,   195,   229,   -50,   196,   230,   228,
       0,     0,   353,     0,     0,   354,   198,     0,   194,   -11,
     -11,   232,     0,   -11,   -11,     0,   229,   229,     0,   230,
     230,   -12,   -12,     0,     0,   -12,   -12,     0,   195,     0,
     198,   196,   197,   231,   -25,   -25,     0,     0,   -25,   -25,
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
      46,     5,    71,   173,     6,   279,   190,    22,    89,   261,
      20,    21,    20,    21,    29,    63,     6,    63,    33,   191,
      63,   158,     6,    38,    34,    38,    34,   301,   158,    20,
       6,     6,   158,     0,    20,    38,     4,     5,    39,    41,
     224,    89,    36,    89,    35,    46,    94,    95,    94,    95,
     131,    41,    38,   225,    16,    54,    20,    41,   106,   107,
     106,   107,    63,    20,   316,    41,    41,    35,     4,     5,
       0,    20,    34,    34,    38,     5,   246,   158,    35,    41,
      42,    43,    39,   131,    35,   131,    35,    20,    89,    88,
      20,    21,    20,    94,    95,    94,    95,    25,    26,    35,
       4,     5,    35,    41,    34,   106,   107,    16,   107,    35,
     158,    16,   158,    20,    41,   158,   164,   391,   164,    24,
      20,   169,   170,   169,   170,    34,   169,   170,    34,    34,
     131,    38,    41,    42,    43,    35,    41,    42,    43,    39,
      20,    20,    34,   158,    34,    25,    26,    34,   158,   333,
     158,    20,   158,   222,   158,    35,    35,   158,    20,    39,
     159,    37,   334,   164,   348,   164,    35,    16,   169,   170,
      39,    41,    20,    41,     7,    24,    38,   349,    34,    12,
      13,    14,    38,    16,   183,    34,    19,   371,    21,    20,
      38,    24,    41,    42,    43,    38,    16,   245,    20,   245,
     372,    34,    20,    38,    24,    20,    20,    38,    41,    42,
      43,    20,    41,   261,    34,   261,    38,    35,   217,    20,
      35,    41,    42,    43,    39,    20,    35,    20,   412,    20,
      39,   279,   313,   279,    25,    26,    20,    38,   286,    41,
     286,   413,    35,    38,   245,    20,    39,    38,    20,    46,
       7,    35,   300,   301,   300,   301,    20,    54,    20,    20,
     261,    41,   399,    38,     7,   313,    38,   313,   316,   399,
     316,    35,    41,   399,    35,    39,    38,   346,   279,   278,
     279,    20,   419,   420,    35,   286,    35,   286,    20,   419,
     420,    88,    89,   419,   420,   376,    35,    94,    95,   300,
     301,   300,   301,    35,    20,    20,    16,    39,    20,   106,
     107,    20,   313,   312,    24,   316,    35,    35,   399,    35,
      35,    50,    16,    39,    34,    54,    38,    35,   376,    38,
     376,    41,    42,    43,   131,    20,    35,    20,   419,   420,
      34,    38,   341,   391,    20,   391,    38,    41,    42,    43,
      35,   399,    20,   399,    39,    38,   399,    38,    38,    88,
      38,   158,   159,    38,    20,    94,    95,   164,    38,    41,
      38,   419,   420,   419,   420,   376,   419,   420,   107,    35,
      41,    16,    20,    39,   399,    38,   183,    20,    38,   399,
     391,   399,   391,   399,    38,   399,    38,    38,   399,    34,
      38,   400,    53,    54,   419,   420,    41,    42,    43,   419,
     420,   419,   420,   419,   420,   419,   420,    20,   419,   420,
     217,    20,    41,    20,   189,    41,    20,    41,    20,    20,
     159,    20,    35,    20,    20,   164,    39,    88,    35,    38,
      20,    35,    39,    94,    95,    39,    38,    38,   245,    38,
     179,    38,    38,   182,   183,    35,   107,    38,   223,    39,
       4,     5,    41,   114,     8,     9,    10,    11,    12,    13,
      14,    20,    16,    34,    34,    19,    20,    21,    38,    35,
      24,   278,   279,    39,   213,    20,    35,   216,   217,   286,
      34,    20,    36,    37,    38,    34,    16,    41,    42,    43,
      35,    16,   153,   300,   301,    38,    35,   272,   159,    24,
      39,    38,   241,   164,    34,   312,   313,    38,    20,    34,
      20,    41,    42,    43,    20,    20,    41,    42,    43,   294,
      20,   182,   183,    35,    35,    35,    16,    39,    39,    39,
      38,    20,    38,    38,   341,   310,    38,    54,    38,   278,
     279,   280,   281,   282,    34,    20,    35,   286,    41,    16,
      39,    41,    42,    43,    35,   216,   217,    24,    39,    41,
      35,   300,   301,   302,   303,   304,   305,    34,    20,   376,
     309,    88,   347,   312,    41,    42,    43,    94,    95,    16,
     241,    35,    16,    35,   391,    39,    41,    39,    20,     7,
     107,     7,   399,   400,    20,   370,    20,    34,   337,   374,
      34,   340,   341,    35,    41,    42,    43,    41,    42,    43,
     385,    35,   419,   420,    20,    39,    20,   278,   279,    16,
      20,    25,    26,   398,     1,   286,    20,     4,     5,    35,
     369,    35,    41,    39,    41,    35,   411,    34,    20,   300,
     301,   302,   159,   418,    41,    42,    43,   164,   309,    16,
       7,   312,   391,    35,   393,   394,   395,   396,    20,     7,
      38,   400,   179,    25,    26,   182,   183,    34,    37,    35,
      54,   410,    35,    35,    41,    42,    43,    35,     7,   340,
     341,    39,    20,    12,    13,    14,    20,    16,    20,    35,
      19,    16,    21,    39,    35,    24,   213,    35,    39,   216,
     217,    16,    41,    35,    88,    34,    20,    20,   369,    34,
      94,    95,    41,    42,    43,    16,    41,    42,    43,    34,
      16,    35,    35,   107,   241,    41,    41,    42,    43,    20,
     391,    20,   393,    34,    20,    20,    54,    20,    34,   400,
      41,    42,    43,   127,    35,    41,    42,    43,    20,   410,
      35,    20,    35,    25,    26,    27,    28,    29,    30,    31,
      32,   278,   279,   280,   281,   282,    38,    20,    35,   286,
      88,    20,    39,    20,    20,   159,    94,    95,    20,    20,
     164,    20,    35,   300,   301,   302,   303,   304,   305,   107,
      20,    20,   309,    35,    35,   312,    35,    37,   182,   183,
       7,    20,    20,    54,    20,    12,    13,    14,    20,    16,
      20,     7,    19,    41,    21,    41,    35,    24,     7,    35,
     337,    34,    20,   340,   341,    35,    41,    34,    41,    42,
      43,    34,   216,   217,    41,    42,    43,    88,    41,    42,
      43,   159,    34,    94,    95,    20,   164,    20,    20,    41,
      42,    43,   369,    35,     7,    20,   107,   241,     5,    12,
      13,    14,    21,    16,    34,   183,    19,    -1,    21,    -1,
      95,    24,    -1,   124,   391,    -1,   393,   394,   395,   396,
      -1,    34,    -1,   400,    -1,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,   410,   278,   279,   280,   281,   282,   217,
       0,     1,   286,    34,     4,     5,    -1,    -1,   159,    54,
      41,    42,    43,   164,    -1,    -1,   300,   301,   302,   303,
     304,   305,     0,     1,    -1,   309,     4,     5,   312,    20,
      -1,   182,   183,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    88,    35,    -1,    -1,    -1,    39,    94,
      95,    -1,    54,    -1,     0,     1,   340,   341,     4,     5,
     278,   279,   107,    -1,    -1,   216,   217,    -1,   286,     0,
       1,    -1,    -1,     4,     5,    -1,   121,    -1,    -1,    -1,
      -1,    -1,   300,   301,    -1,   369,    88,    -1,    -1,    -1,
     241,    20,    94,    95,   312,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   107,    35,   391,    -1,   393,
     394,   395,   396,    -1,   159,    -1,   400,     0,     1,   164,
      -1,     4,     5,   341,    -1,    -1,   410,   278,   279,   280,
     281,    15,    16,    17,    18,   286,    20,   182,   183,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,   300,
     301,   302,   303,   304,    38,    -1,    -1,   159,   309,    -1,
      54,   312,   164,    54,     0,     1,    -1,    -1,     4,     5,
      -1,   216,   217,   391,     0,     1,    -1,    -1,     4,     5,
      -1,   183,   400,     0,     1,    -1,    -1,     4,     5,   340,
     341,    -1,    -1,    -1,    88,    -1,   241,    88,    54,    -1,
      94,    95,    -1,    94,    95,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,   107,    20,   217,   107,    -1,   369,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      -1,    -1,    88,   278,   279,   280,    -1,    -1,    94,    95,
     391,   286,   393,   394,   395,    -1,    -1,    -1,    -1,   400,
      -1,   107,    -1,    -1,    -1,   300,   301,   302,   303,   410,
      -1,    -1,    -1,    -1,   309,   159,    -1,   312,   159,    -1,
     164,    -1,    -1,   164,    -1,    -1,   278,   279,     0,     1,
      -1,    -1,     4,     5,   286,    -1,    -1,    -1,    -1,   183,
      -1,    54,   183,    -1,    -1,   340,   341,    -1,   300,   301,
      -1,    15,    16,   159,    -1,    -1,    20,    -1,   164,    -1,
     312,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,   217,   369,    88,   217,   183,    54,    -1,
      54,    94,    95,     0,     1,    -1,    -1,     4,     5,   341,
      -1,    -1,    -1,    -1,   107,    -1,   391,    -1,   393,   394,
      -1,    -1,     0,     1,    -1,   400,     4,     5,    -1,    -1,
      -1,   217,    88,    -1,    88,   410,    -1,    20,    94,    95,
      94,    95,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   107,    35,   107,   278,   279,    39,   278,   279,   391,
      -1,    -1,   286,    -1,    -1,   286,   159,    -1,   400,     0,
       1,   164,    -1,     4,     5,    -1,   300,   301,    -1,   300,
     301,     0,     1,    -1,    -1,     4,     5,    -1,   312,    -1,
     183,   312,   278,   279,     0,     1,    -1,    -1,     4,     5,
     286,    -1,    -1,   159,    -1,   159,    -1,    -1,   164,    -1,
     164,    -1,    -1,    -1,   300,   301,    -1,   341,    -1,    -1,
     341,    -1,    -1,    -1,   217,    -1,   312,   183,    -1,   183,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    16,    -1,    -1,    19,
      -1,    21,    -1,    -1,    24,   341,    -1,    -1,    -1,    -1,
      -1,   217,    -1,   217,    34,    -1,    36,   391,    38,    -1,
     391,    41,    42,    43,    -1,    -1,   400,    -1,    -1,   400,
      12,    13,    14,    -1,    16,   278,   279,    19,    -1,    21,
      -1,    -1,    24,   286,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,   391,    -1,   300,   301,    41,
      42,    43,    44,    45,   400,    -1,    -1,    -1,    -1,   312,
      -1,    -1,   278,   279,   278,   279,    15,    16,    17,    18,
     286,    20,   286,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,   300,   301,   300,   301,   341,    38,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,   312,    -1,
      -1,    -1,     4,     5,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,   341,    -1,   341,    -1,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    -1,   391,    41,
      42,    43,     4,     5,    -1,    -1,     8,   400,    10,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    19,    -1,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,   391,    38,   391,    -1,    41,
      42,    43,    -1,    -1,   400,    -1,   400,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    12,    13,    14,    -1,    16,    -1,    34,    19,    36,
      21,    38,    -1,    24,    41,    42,    43,    12,    13,    14,
      -1,    16,    -1,    34,    19,    -1,    21,    38,    -1,    24,
      41,    42,    43,    12,    13,    14,    -1,    16,    -1,    34,
      19,    -1,    21,    38,    -1,    24,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    12,    13,    14,    -1,    16,    -1,    34,    19,    -1,
      21,    38,    -1,    24,    41,    42,    43,    12,    13,    14,
      -1,    16,    -1,    34,    19,    -1,    21,    38,    -1,    24,
      41,    42,    43,    12,    13,    14,    -1,    16,    -1,    34,
      19,    -1,    21,    38,    -1,    24,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    12,    13,    14,    -1,    16,    -1,    34,    19,    -1,
      21,    38,    -1,    24,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    12,    13,    14,    -1,    16,    -1,    -1,
      19,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    12,
      13,    14,    -1,    16,    -1,    -1,    19,    34,    21,    -1,
      -1,    24,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    12,    13,    14,    -1,    16,    -1,    -1,    19,    -1,
      21,    -1,    -1,    24,    -1,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    34,    21,    -1,    -1,    24,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    39,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    -1,    -1,    -1,    39,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      15,    16,    35,    -1,    -1,    20,    39,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    15,    16,
      35,    -1,    -1,    20,    39,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    -1,
      -1,    -1,    39,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      38,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      15,    16,    17,    18,    38,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    15,
      16,    17,    18,    38,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    15,    16,
      17,    18,    38,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    15,    16,    17,
      18,    38,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    15,    16,    17,    18,
      38,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    15,    16,    17,    18,    38,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    15,    16,    17,    18,    38,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    15,    16,    17,    18,    38,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    15,    16,    17,    18,    38,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    15,    16,    -1,    -1,    38,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      15,    16,    -1,    -1,    38,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    15,
      16,    17,    18,    38,    20,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      15,    16,    35,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    20,
      34,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    20,    -1,    -1,    39,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    20,    -1,    -1,    39,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    20,    -1,    -1,    -1,    38,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    20,
      -1,    -1,    -1,    38,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    15,    16,    17,    18,    38,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    20,    -1,
      35,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    20,    -1,    35,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    20,    -1,    35,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,    47,    48,    49,    50,    51,    52,
      56,    57,    58,     0,    49,    38,    38,     6,    41,    41,
      34,    34,    35,    53,    54,    55,    56,    57,    58,    35,
      53,    36,    59,    35,    39,     6,    41,    59,    35,    60,
      59,    55,    41,    59,     8,    10,    11,    12,    13,    14,
      16,    19,    21,    24,    34,    38,    41,    42,    43,    50,
      51,    59,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    34,    34,
      38,    68,    87,    34,    34,    34,    41,    75,    41,    41,
      71,    68,    22,    23,    27,    28,    33,    34,    37,    63,
      20,    38,    25,    26,    79,    27,    28,    29,    30,    31,
      32,    76,    15,    16,    77,    17,    18,    78,    38,    38,
      68,    66,    38,    41,    44,    45,    68,    70,    80,    93,
      93,    35,    41,    41,     7,     7,     7,    68,    35,    68,
      91,    92,    41,    24,    71,    72,    73,    74,    35,    66,
      35,    35,    35,    35,    39,    71,    63,    68,    68,     9,
      35,    63,    63,    36,    56,    57,    58,    88,    89,    16,
      19,    21,    24,    34,    41,    42,    43,    69,    70,    71,
      72,    73,    74,    75,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    38,    68,    41,    69,    87,
      88,    89,    20,    16,    19,    21,    24,    34,    41,    42,
      43,    69,    70,    71,    72,    73,    74,    75,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    38,
      68,    79,    20,     8,    10,    11,    36,    38,    50,    51,
      56,    57,    59,    64,    65,    66,    67,    68,    87,    88,
      89,    60,    38,    38,     6,    41,    38,    38,    41,    75,
      41,    41,    71,    68,    22,    23,    27,    28,    33,    34,
      76,    77,    78,    38,    38,    38,    33,    38,    38,    41,
      41,    75,    41,    41,    71,    68,    22,    23,    27,    28,
      33,    34,    79,    76,    77,    78,    38,    38,    38,    24,
      71,    41,    34,    34,    38,    68,    60,    38,    38,    38,
      38,    38,    61,    41,    35,    41,    41,     7,     7,     7,
      68,    35,    91,    72,    73,    74,     7,    16,    19,    21,
      24,    34,    41,    42,    43,    68,    70,    71,    72,    73,
      74,    75,    80,    81,    82,    83,    84,    85,    86,    90,
      35,    41,    41,     7,     7,     7,    68,    35,    91,    24,
      71,    72,    73,    74,    71,    68,    66,    38,    61,    37,
      35,    41,    75,    41,    41,    71,    68,    22,    23,    27,
      28,    34,    20,    79,    76,    77,    78,    35,    71,    35,
      66,    37,    35,    41,    41,     7,     7,    35,    91,    41,
      24,    71,    72,    73,    74,    63,    68,    35,    71,     9,
      35,    63,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    49,    50,
      51,    52,    52,    52,    52,    53,    54,    54,    55,    55,
      56,    57,    58,    58,    60,    59,    61,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    69,    69,
      70,    70,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    81,    82,    83,    84,    85,
      86,    86,    87,    87,    88,    89,    89,    90,    90,    91,
      92,    92,    93,    93,    93,    93
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
#line 130 "src/sintatic.y"
                      {
 (yyval.element) = create_element(PROGRAM, NULL, NULL, NULL, (yyvsp[0].element));
 tree = (yyval.element);
}
#line 2731 "sintatic.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 135 "src/sintatic.y"
                                       {
  (yyval.element) = create_element(DECLARATIONS, NULL, NULL, NULL, (yyvsp[-1].element));
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);

}
#line 2741 "sintatic.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 139 "src/sintatic.y"
                {
  (yyval.element) = (yyvsp[0].element);
}
#line 2749 "sintatic.tab.c"
    break;

  case 5: /* declaration: variable_declaration  */
#line 143 "src/sintatic.y"
                                  {
  (yyval.element) = (yyvsp[0].element);
}
#line 2757 "sintatic.tab.c"
    break;

  case 6: /* declaration: list_declaration  */
#line 145 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 2765 "sintatic.tab.c"
    break;

  case 7: /* declaration: function_declaration  */
#line 147 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 2773 "sintatic.tab.c"
    break;

  case 8: /* declaration: error  */
#line 149 "src/sintatic.y"
          {
  yyerrok;
  (yyval.element) = NULL;
}
#line 2782 "sintatic.tab.c"
    break;

  case 9: /* variable_declaration: variable_simple_declaration SEMI  */
#line 154 "src/sintatic.y"
                                                       {
  (yyval.element) = (yyvsp[-1].element);
}
#line 2790 "sintatic.tab.c"
    break;

  case 10: /* list_declaration: list_simple_declaration SEMI  */
#line 158 "src/sintatic.y"
                                               {
  (yyval.element) = (yyvsp[-1].element);
}
#line 2798 "sintatic.tab.c"
    break;

  case 11: /* function_declaration: type_specifier ID L_PAREN parameters R_PAREN compound_statement  */
#line 163 "src/sintatic.y"
                                                                  {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-5].element)->type, (yyvsp[-4].name), NULL, (yyvsp[-2].element));
    (yyvsp[-2].element)->next_left = (yyvsp[0].element);
    insert_symbol(table, (yyvsp[-4].name), (yyvsp[-5].element)->type, "function", lineno);
}
#line 2808 "sintatic.tab.c"
    break;

  case 12: /* function_declaration: type_specifier LIST ID L_PAREN parameters R_PAREN compound_statement  */
#line 168 "src/sintatic.y"
                                                                       {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-5].name), (yyvsp[-4].name), NULL, (yyvsp[-2].element));
    (yyvsp[-2].element)->next_left = (yyvsp[0].element);
    insert_symbol(table, (yyvsp[-4].name), (yyvsp[-5].name), "function", lineno);
}
#line 2818 "sintatic.tab.c"
    break;

  case 13: /* function_declaration: type_specifier ID L_PAREN R_PAREN compound_statement  */
#line 173 "src/sintatic.y"
                                                       {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-4].element)->type, (yyvsp[-3].name), NULL, NULL);
    insert_symbol(table, (yyvsp[-3].name), (yyvsp[-4].element)->type, "function", lineno);
}
#line 2827 "sintatic.tab.c"
    break;

  case 14: /* function_declaration: type_specifier LIST ID L_PAREN R_PAREN compound_statement  */
#line 177 "src/sintatic.y"
                                                            {
   (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-4].name), (yyvsp[-3].name), NULL, NULL);
   insert_symbol(table, (yyvsp[-3].name), (yyvsp[-4].name), "function", lineno);
}
#line 2836 "sintatic.tab.c"
    break;

  case 15: /* parameters: list_paremeters  */
#line 182 "src/sintatic.y"
                            {
  (yyval.element) = (yyvsp[0].element);
}
#line 2844 "sintatic.tab.c"
    break;

  case 16: /* list_paremeters: list_paremeters COMMA parameter  */
#line 186 "src/sintatic.y"
                                                 {
  (yyval.element) = create_element(LIST_PARAMETERS, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_right = (yyvsp[0].element);
}
#line 2853 "sintatic.tab.c"
    break;

  case 17: /* list_paremeters: parameter  */
#line 189 "src/sintatic.y"
              {
  (yyval.element) = (yyvsp[0].element);
}
#line 2861 "sintatic.tab.c"
    break;

  case 18: /* parameter: variable_simple_declaration  */
#line 193 "src/sintatic.y"
                                       {
  (yyval.element) = (yyvsp[0].element);
}
#line 2869 "sintatic.tab.c"
    break;

  case 19: /* parameter: list_simple_declaration  */
#line 195 "src/sintatic.y"
                            {
  (yyval.element) = (yyvsp[0].element);
}
#line 2877 "sintatic.tab.c"
    break;

  case 20: /* variable_simple_declaration: type_specifier ID  */
#line 199 "src/sintatic.y"
                                               {
  (yyval.element) = create_element(VARIABLE_SIMPLE_DECLARATION, (yyvsp[-1].element)->type, (yyvsp[0].name), NULL, NULL);
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].element)->type, "variable", lineno);
}
#line 2886 "sintatic.tab.c"
    break;

  case 21: /* list_simple_declaration: type_specifier LIST ID  */
#line 204 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(LIST_SIMPLE_DECLARATION, (yyvsp[-1].name), (yyvsp[0].name), NULL, NULL);
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "variable", lineno);
}
#line 2895 "sintatic.tab.c"
    break;

  case 22: /* type_specifier: INT  */
#line 209 "src/sintatic.y"
                    {
  (yyval.element) = create_element(TYPE_SPECIFIER, (yyvsp[0].name), NULL, NULL, NULL);
}
#line 2903 "sintatic.tab.c"
    break;

  case 23: /* type_specifier: FLOAT  */
#line 211 "src/sintatic.y"
          {
  (yyval.element) = create_element(TYPE_SPECIFIER, (yyvsp[0].name), NULL, NULL, NULL);
}
#line 2911 "sintatic.tab.c"
    break;

  case 24: /* $@1: %empty  */
#line 217 "src/sintatic.y"
    {
     present_scope+=1;
    }
#line 2919 "sintatic.tab.c"
    break;

  case 25: /* compound_statement: L_BRACK $@1 local_declarations R_BRACK  */
#line 220 "src/sintatic.y"
                                 {
       (yyval.element) = create_element(COMPOUND_STATEMENT, NULL, NULL, NULL, (yyvsp[-1].element));
       present_scope--;
      }
#line 2928 "sintatic.tab.c"
    break;

  case 26: /* local_declarations: list_statements  */
#line 225 "src/sintatic.y"
                                    {
 (yyval.element) = (yyvsp[0].element);
}
#line 2936 "sintatic.tab.c"
    break;

  case 27: /* list_statements: list_statements statement  */
#line 229 "src/sintatic.y"
                                           {
 (yyval.element) = create_element(LIST_STATEMENTS, NULL, NULL, NULL, (yyvsp[-1].element));
 (yyvsp[-1].element)->next_left = (yyvsp[0].element); 
}
#line 2945 "sintatic.tab.c"
    break;

  case 28: /* list_statements: statement  */
#line 232 "src/sintatic.y"
              {
 (yyval.element) = (yyvsp[0].element);
}
#line 2953 "sintatic.tab.c"
    break;

  case 29: /* statement: expression_statement  */
#line 236 "src/sintatic.y"
                                {
  (yyval.element) = (yyvsp[0].element);
}
#line 2961 "sintatic.tab.c"
    break;

  case 30: /* statement: compound_statement  */
#line 238 "src/sintatic.y"
                       {
  (yyval.element) = (yyvsp[0].element);
}
#line 2969 "sintatic.tab.c"
    break;

  case 31: /* statement: conditional_statement  */
#line 240 "src/sintatic.y"
                          {
  (yyval.element) = (yyvsp[0].element);
}
#line 2977 "sintatic.tab.c"
    break;

  case 32: /* statement: iteration_statement  */
#line 242 "src/sintatic.y"
                        {
  (yyval.element) = (yyvsp[0].element);
}
#line 2985 "sintatic.tab.c"
    break;

  case 33: /* statement: return_statement  */
#line 244 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 2993 "sintatic.tab.c"
    break;

  case 34: /* statement: variable_declaration  */
#line 246 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 3001 "sintatic.tab.c"
    break;

  case 35: /* statement: list_declaration  */
#line 248 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 3009 "sintatic.tab.c"
    break;

  case 36: /* statement: in_out_expression  */
#line 250 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3017 "sintatic.tab.c"
    break;

  case 37: /* conditional_statement: IF L_PAREN expression R_PAREN statement  */
#line 254 "src/sintatic.y"
                                                                          {
  (yyval.element) = create_element(CONDITIONAL_STATEMENT, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3026 "sintatic.tab.c"
    break;

  case 38: /* conditional_statement: IF L_PAREN expression R_PAREN statement ELSE statement  */
#line 257 "src/sintatic.y"
                                                           {
  (yyval.element) = create_element(CONDITIONAL_STATEMENT, NULL, NULL, NULL, (yyvsp[-4].element));
  (yyvsp[-4].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3036 "sintatic.tab.c"
    break;

  case 39: /* iteration_statement: FOR L_PAREN expression_statement expression_statement expression R_PAREN statement  */
#line 263 "src/sintatic.y"
                                                                                                        {
  (yyval.element) = create_element(ITERATION_STATEMENT, NULL, NULL, NULL, (yyvsp[-4].element));
  (yyvsp[-4].element)->next_left = (yyvsp[-3].element);
  (yyvsp[-3].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3047 "sintatic.tab.c"
    break;

  case 40: /* expression_statement: expression SEMI  */
#line 270 "src/sintatic.y"
                                      {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3055 "sintatic.tab.c"
    break;

  case 41: /* expression_statement: SEMI  */
#line 272 "src/sintatic.y"
         {
  (yyval.element) = NULL;
}
#line 3063 "sintatic.tab.c"
    break;

  case 42: /* return_statement: RETURN expression SEMI  */
#line 276 "src/sintatic.y"
                                         {
  (yyval.element) = create_element(RETURN_STATEMENT, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3071 "sintatic.tab.c"
    break;

  case 43: /* return_statement: RETURN SEMI  */
#line 278 "src/sintatic.y"
                {
  (yyval.element) = create_element(RETURN_STATEMENT, NULL, NULL, NULL, NULL);
}
#line 3079 "sintatic.tab.c"
    break;

  case 44: /* expression: assign_expression  */
#line 282 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3087 "sintatic.tab.c"
    break;

  case 45: /* expression: simple_expression  */
#line 284 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3095 "sintatic.tab.c"
    break;

  case 46: /* expression: list_expression  */
#line 286 "src/sintatic.y"
                    {
  (yyval.element) = (yyvsp[0].element);
}
#line 3103 "sintatic.tab.c"
    break;

  case 47: /* expression: in_out_expression  */
#line 288 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3111 "sintatic.tab.c"
    break;

  case 48: /* assign_expression: ID ASSIGN_OP expression  */
#line 292 "src/sintatic.y"
                                           {
  (yyval.element) = create_element(ASSIGN_EXPRESSION, NULL, (yyvsp[-1].name), NULL, (yyvsp[0].element));
}
#line 3119 "sintatic.tab.c"
    break;

  case 49: /* assign_expression: ID ASSIGN_OP NIL  */
#line 294 "src/sintatic.y"
                     {
  (yyval.element) = create_element(ASSIGN_EXPRESSION, NULL, (yyvsp[-1].name), NULL, NULL);
}
#line 3127 "sintatic.tab.c"
    break;

  case 50: /* simple_expression: EXC_OP relational_expression  */
#line 298 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].element));
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3136 "sintatic.tab.c"
    break;

  case 51: /* simple_expression: simple_expression binary_logic_op relational_expression  */
#line 301 "src/sintatic.y"
                                                            {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3146 "sintatic.tab.c"
    break;

  case 52: /* simple_expression: simple_expression binary_logic_op EXC_OP relational_expression  */
#line 305 "src/sintatic.y"
                                                                   {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].element));
  (yyvsp[-3].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[0].element)->next_left = (yyvsp[0].element);
}
#line 3157 "sintatic.tab.c"
    break;

  case 53: /* simple_expression: relational_expression  */
#line 310 "src/sintatic.y"
                          {
  (yyval.element) = (yyvsp[0].element);
}
#line 3165 "sintatic.tab.c"
    break;

  case 54: /* relational_expression: relational_expression relational_op arithmetic_add_expression  */
#line 314 "src/sintatic.y"
                                                                                     {
  (yyval.element) = create_element(RELATIONAL_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3175 "sintatic.tab.c"
    break;

  case 55: /* relational_expression: arithmetic_add_expression  */
#line 318 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3183 "sintatic.tab.c"
    break;

  case 56: /* arithmetic_add_expression: arithmetic_add_expression arithmetic_add_op arithmetic_mul_expression  */
#line 322 "src/sintatic.y"
                                                                                                 {
  (yyval.element) = create_element(ARITHMETIC_ADD_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3193 "sintatic.tab.c"
    break;

  case 57: /* arithmetic_add_expression: arithmetic_mul_expression  */
#line 326 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3201 "sintatic.tab.c"
    break;

  case 58: /* arithmetic_mul_expression: arithmetic_mul_expression arithmetic_mult_op unary_sub_expression  */
#line 330 "src/sintatic.y"
                                                                                             {
  (yyval.element) = create_element(ARITHMETIC_MUL_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3211 "sintatic.tab.c"
    break;

  case 59: /* arithmetic_mul_expression: unary_sub_expression  */
#line 334 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 3219 "sintatic.tab.c"
    break;

  case 60: /* unary_sub_expression: SUB_OP factor  */
#line 338 "src/sintatic.y"
                                    {
  (yyval.element) = (yyvsp[0].element);
  (yyval.element) = create_element(UNARY_SUB_EXPRESSION, NULL, (yyvsp[-1].name), NULL, (yyvsp[0].element));
}
#line 3228 "sintatic.tab.c"
    break;

  case 61: /* unary_sub_expression: factor  */
#line 341 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3236 "sintatic.tab.c"
    break;

  case 62: /* factor: L_PAREN expression R_PAREN  */
#line 345 "src/sintatic.y"
                                   {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3244 "sintatic.tab.c"
    break;

  case 63: /* factor: function_call  */
#line 347 "src/sintatic.y"
                {
  (yyval.element) = (yyvsp[0].element);
}
#line 3252 "sintatic.tab.c"
    break;

  case 64: /* factor: ID  */
#line 349 "src/sintatic.y"
       {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3260 "sintatic.tab.c"
    break;

  case 65: /* factor: INT_CONST  */
#line 351 "src/sintatic.y"
              {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3268 "sintatic.tab.c"
    break;

  case 66: /* factor: FLOAT_CONST  */
#line 353 "src/sintatic.y"
                {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3276 "sintatic.tab.c"
    break;

  case 67: /* relational_op: LST_OP  */
#line 357 "src/sintatic.y"
                      {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3284 "sintatic.tab.c"
    break;

  case 68: /* relational_op: LST_EQ_OP  */
#line 359 "src/sintatic.y"
              {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3292 "sintatic.tab.c"
    break;

  case 69: /* relational_op: GRT_OP  */
#line 361 "src/sintatic.y"
           {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3300 "sintatic.tab.c"
    break;

  case 70: /* relational_op: GRT_EQ_OP  */
#line 363 "src/sintatic.y"
              {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3308 "sintatic.tab.c"
    break;

  case 71: /* relational_op: EQUAL_OP  */
#line 365 "src/sintatic.y"
             {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3316 "sintatic.tab.c"
    break;

  case 72: /* relational_op: DIFF_OP  */
#line 367 "src/sintatic.y"
            {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3324 "sintatic.tab.c"
    break;

  case 73: /* arithmetic_add_op: SUM_OP  */
#line 371 "src/sintatic.y"
                          {
  (yyval.element) = create_element(ARITHMETIC_ADD_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3332 "sintatic.tab.c"
    break;

  case 74: /* arithmetic_add_op: SUB_OP  */
#line 373 "src/sintatic.y"
           {
  (yyval.element) = create_element(ARITHMETIC_ADD_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3340 "sintatic.tab.c"
    break;

  case 75: /* arithmetic_mult_op: MULT_OP  */
#line 377 "src/sintatic.y"
                            {
  (yyval.element) = create_element(ARITHMETIC_MULT_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3348 "sintatic.tab.c"
    break;

  case 76: /* arithmetic_mult_op: DIV_OP  */
#line 379 "src/sintatic.y"
           {
  (yyval.element) = create_element(ARITHMETIC_MULT_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3356 "sintatic.tab.c"
    break;

  case 77: /* binary_logic_op: OR_OP  */
#line 383 "src/sintatic.y"
                       {
  (yyval.element) = create_element(BINARY_LOGIC_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3364 "sintatic.tab.c"
    break;

  case 78: /* binary_logic_op: AND_OP  */
#line 385 "src/sintatic.y"
           {
  (yyval.element) = create_element(BINARY_LOGIC_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3372 "sintatic.tab.c"
    break;

  case 79: /* list_expression: constructor  */
#line 389 "src/sintatic.y"
                             {
  (yyval.element) = (yyvsp[0].element);
}
#line 3380 "sintatic.tab.c"
    break;

  case 80: /* list_expression: header  */
#line 391 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3388 "sintatic.tab.c"
    break;

  case 81: /* list_expression: tail  */
#line 393 "src/sintatic.y"
         {
  (yyval.element) = (yyvsp[0].element);
}
#line 3396 "sintatic.tab.c"
    break;

  case 82: /* list_expression: map  */
#line 395 "src/sintatic.y"
       {
  (yyval.element) = (yyvsp[0].element);
}
#line 3404 "sintatic.tab.c"
    break;

  case 83: /* list_expression: filter  */
#line 397 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3412 "sintatic.tab.c"
    break;

  case 84: /* list_expression: list_comparation  */
#line 399 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 3420 "sintatic.tab.c"
    break;

  case 85: /* constructor: expression LIST_CONSTRUCTOR ID  */
#line 403 "src/sintatic.y"
                                            {
  (yyval.element) = create_element(CONSTRUCTOR, (yyvsp[-1].name), (yyvsp[0].name), NULL, (yyvsp[-2].element));
}
#line 3428 "sintatic.tab.c"
    break;

  case 86: /* header: LIST_HEADER ID  */
#line 407 "src/sintatic.y"
                       {
  (yyval.element) = create_element(HEADER, (yyvsp[0].name), (yyvsp[-1].name), NULL, NULL);
}
#line 3436 "sintatic.tab.c"
    break;

  case 87: /* tail: LIST_TAIL ID  */
#line 411 "src/sintatic.y"
                   {
  (yyval.element) = create_element(TAIL, (yyvsp[0].name), (yyvsp[-1].name), NULL, NULL);
}
#line 3444 "sintatic.tab.c"
    break;

  case 88: /* map: ID LIST_MAP ID  */
#line 415 "src/sintatic.y"
                    {
  (yyval.element) = create_element(MAP, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3452 "sintatic.tab.c"
    break;

  case 89: /* filter: ID LIST_FILTER ID  */
#line 419 "src/sintatic.y"
                          {
  (yyval.element) = create_element(FILTER, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3460 "sintatic.tab.c"
    break;

  case 90: /* list_comparation: ID EQUAL_OP NIL  */
#line 423 "src/sintatic.y"
                                  {
  (yyval.element) = create_element(LIST_COMPARATION, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3468 "sintatic.tab.c"
    break;

  case 91: /* list_comparation: ID DIFF_OP NIL  */
#line 425 "src/sintatic.y"
                   {
  (yyval.element) = create_element(LIST_COMPARATION, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3476 "sintatic.tab.c"
    break;

  case 92: /* in_out_expression: read SEMI  */
#line 429 "src/sintatic.y"
                             {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3484 "sintatic.tab.c"
    break;

  case 93: /* in_out_expression: write SEMI  */
#line 431 "src/sintatic.y"
               {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3492 "sintatic.tab.c"
    break;

  case 94: /* read: READ L_PAREN ID R_PAREN  */
#line 435 "src/sintatic.y"
                              {
  (yyval.element) = create_element(READ_EXP, NULL, NULL, NULL, NULL);
}
#line 3500 "sintatic.tab.c"
    break;

  case 95: /* write: WRITE L_PAREN var R_PAREN  */
#line 439 "src/sintatic.y"
                                 {
  (yyval.element) = create_element(WRITE_EXP, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3508 "sintatic.tab.c"
    break;

  case 96: /* write: WRITELN L_PAREN var R_PAREN  */
#line 441 "src/sintatic.y"
                                {
  (yyval.element) = create_element(WRITE_EXP, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3516 "sintatic.tab.c"
    break;

  case 97: /* function_call: ID L_PAREN arguments R_PAREN  */
#line 445 "src/sintatic.y"
                                            {

}
#line 3524 "sintatic.tab.c"
    break;

  case 98: /* function_call: ID L_PAREN R_PAREN  */
#line 447 "src/sintatic.y"
                       {
  (yyval.element) = create_element(FUNCTION_CALL, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3532 "sintatic.tab.c"
    break;

  case 99: /* arguments: list_arguments  */
#line 451 "src/sintatic.y"
                          {
 (yyval.element) = (yyvsp[0].element);
}
#line 3540 "sintatic.tab.c"
    break;

  case 100: /* list_arguments: list_arguments COMMA expression  */
#line 455 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(FUNCTION_CALL, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element) -> next_left = (yyvsp[0].element);
}
#line 3549 "sintatic.tab.c"
    break;

  case 101: /* list_arguments: expression  */
#line 458 "src/sintatic.y"
               {
  (yyval.element) = (yyvsp[0].element);
}
#line 3557 "sintatic.tab.c"
    break;

  case 102: /* var: STRING  */
#line 462 "src/sintatic.y"
            {
  (yyval.element) = create_element(VAR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3565 "sintatic.tab.c"
    break;

  case 103: /* var: CHAR  */
#line 464 "src/sintatic.y"
         {
  (yyval.element) = create_element(VAR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3573 "sintatic.tab.c"
    break;

  case 104: /* var: list_expression  */
#line 466 "src/sintatic.y"
                    {
  (yyval.element) = (yyvsp[0].element);
}
#line 3581 "sintatic.tab.c"
    break;

  case 105: /* var: simple_expression  */
#line 468 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3589 "sintatic.tab.c"
    break;


#line 3593 "sintatic.tab.c"

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

#line 472 "src/sintatic.y"


extern void yyerror(const char *name) {
  printf("\nyyerror: %s em linha: %d coluna: %d.\n", name, lineno, column);
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
