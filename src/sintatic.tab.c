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
#define YYLAST   4993

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  422

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
static const yytype_int16 yyrline[] =
{
       0,   128,   128,   133,   137,   141,   143,   145,   147,   152,
     156,   161,   166,   171,   175,   180,   184,   187,   191,   193,
     197,   202,   215,   217,   223,   222,   231,   235,   238,   242,
     242,   242,   242,   242,   242,   242,   242,   244,   244,   246,
     248,   248,   250,   250,   252,   252,   252,   252,   254,   254,
     256,   256,   256,   256,   258,   258,   260,   260,   262,   262,
     264,   264,   266,   266,   266,   266,   266,   268,   268,   268,
     268,   268,   268,   270,   270,   272,   272,   274,   274,   276,
     276,   276,   276,   276,   276,   278,   280,   282,   284,   286,
     288,   288,   290,   290,   292,   294,   294,   296,   296,   298,
     300,   300,   302,   302,   302,   302
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
     285,   286,   287,    40,    41,   123,   125,   288,   289,   290,
     291,   292,   293,   294,   295
};
#endif

#define YYPACT_NINF (-281)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-106)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     128,   875,    25,    34,    33,   903,   918,   925,  1018,  1039,
      62,    65,    36,  -281,  1050,  1057,  1086,    70,   169,   257,
      57,    80,   106,    71,    51,   316,   514,   539,    38,   106,
     117,  3292,  1098,   106,   245,   152,   791,  1176,   106,  3332,
    1183,   871,   874,  1196,   168,   181,   660,   209,   223,   264,
     615,   155,   195,   130,  1295,  2532,  3911,  3959,  3978,  2572,
    2612,  2652,   262,  2692,  2732,  2772,  2812,  2852,  2892,    50,
      89,   240,  4581,  1131,  3997,  4016,  4035,    99,   101,   111,
     124,   147,   149,   162,  1692,   280,   282,  4054,  1295,   958,
    2932,   174,   178,   287,   797,   797,  3935,  4073,   204,   215,
    4595,    75,   309,   312,   368,   373,   167,  1424,  1213,  2972,
     340,  3012,    83,   134,   197,   269,   325,   345,   410,   460,
     480,   130,   538,   611,   130,   681,   732,   130,  1732,  1772,
     120,  1475,  3052,   347,   366,   367,   384,   445,   236,   380,
     394,  4092,   235,   239,   268,   288,   299,   307,  4111,    16,
     411,   886,   310,   130,  4609,  4187,  4130,  4149,  3372,  1295,
     369,   416,   453,  4168,  1376,  4623,  1812,   392,    28,  3332,
    3332,  3092,  3132,  3292,   466,   486,    39,   495,   498,   844,
     407,   441,   751,  1295,  4206,  4248,  4269,   414,   473,  4871,
     500,  4290,  4311,  4332,   444,   520,   562,   563,   591,   635,
     640,   648,   505,   506,  4353,  1512,   322,   848,   470,   509,
     803,  1295,  4500,  4642,  4660,   541,  4923,  1448,  4678,  4696,
    4714,   542,   555,   567,   571,   587,   588,   589,   578,   595,
    4732,   584,   860,   618,   625,   827,  1295,  3543,  3593,  3618,
      29,   179,   977,   928,  3643,  3668,  3693,    69,    77,   108,
     202,   228,   274,   296,   350,   631,   639,  3718,  3500,   327,
     666,   238,   667,   646,   683,  1551,  3292,  1852,  1892,  1932,
     672,   680,  1972,  2012,  2052,  2092,  2132,   372,   721,   682,
     698,  3332,  3172,  3212,   697,   705,   397,   421,  4227,  4374,
     658,   676,  4884,   686,   703,   724,   739,   753,   426,  3388,
     291,   751,   751,   751,   692,   693,  3420,  4520,  4750,   757,
     758,  4936,   719,   743,   754,   795,   796,   476,  3436,   803,
     803,   803,   794,   805,   761,  3568,  3743,   393,   423,  4533,
     762,   787,   806,   845,   850,   552,  3468,   330,   827,   827,
     827,   549,   550,  3514,   835,   803,  4949,   557,  1295,   958,
    2172,   437,  3332,  2212,  2252,  2292,  1611,  1652,   823,   824,
    4395,   771,   780,   785,   792,   828,   829,  4416,   838,   751,
    4897,  1092,  4437,  4458,  4768,   855,   861,   863,   872,   904,
     384,    21,   911,  4786,   906,  4858,  4804,  4822,  3768,   579,
     593,   609,   626,   647,   670,  3793,   912,   827,  4549,  3886,
    3818,  3843,  4962,   831,  1475,  2332,   901,  3252,  4479,  4910,
    4840,  3868,  4565,  3372,  1295,  2372,  2412,   839,  3372,  3372,
    2452,  2492
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -281,  -281,  -281,   940,     4,    11,  -281,   927,  -281,   916,
       0,     2,    52,   -21,  -147,  -252,  -281,   -57,  -144,  -130,
     -76,  -127,   137,   450,   535,   452,   984,   873,   728,   301,
    -152,  -175,  -167,   -53,   929,  1042,  1075,  1186,  1202,  1260,
    1269,   -36,   -14,    58,   596,  -280,  -281,   856
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,     6,    59,    60,     9,    23,    24,    25,
     174,   175,   176,    61,    39,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     121,   124,   127,   261,    77,    78,    79,    80,    81,    82,
      83,   201,   202,   203,    87,   150,   151,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    32,    11,    84,     7,    10,   109,    11,    37,     7,
      92,     8,    40,   131,   273,   302,     8,    43,   114,   368,
      26,    26,    27,    27,   303,    85,   281,    84,   274,   358,
     -22,   276,   177,    13,    26,   262,    27,   301,   384,   -23,
     -45,    17,   320,    35,   284,   112,   113,   262,   -44,    85,
    -101,   321,    12,    92,  -101,   159,   396,    12,   227,   227,
       2,     3,  -100,   -44,   319,   -22,  -100,   -44,   339,   110,
      92,   254,    28,    28,   -23,   177,    18,   340,    36,   285,
     228,   228,   275,     2,     3,   -15,    28,   111,   -46,    34,
     338,    22,   177,   255,   231,    92,   -79,    86,   -77,    15,
     406,   166,    16,   -46,   178,    33,   -77,   -46,   -44,   141,
      19,   -79,   171,   172,    29,   -79,   -77,   177,   -46,   352,
     -79,    86,   278,   -77,   -77,   -77,   -44,   -80,   254,     1,
     -80,     2,     3,    84,    84,   300,   -46,   272,   -79,   231,
     301,    31,   -80,   -81,   279,    50,   -80,   178,   -80,   -78,
     255,    38,   229,   229,   158,    85,    85,   -78,   270,   319,
     271,   -81,   268,    54,   178,   256,   -82,   -78,   -83,   269,
      96,    57,    58,   146,   -78,   -78,   -78,   338,    47,    48,
      49,   -84,    50,    91,   -82,    51,   -83,    52,   337,   178,
      53,   101,    42,   110,   319,    98,   302,   -47,   -45,   -84,
      54,    88,    20,   112,   113,   303,   -20,    56,    57,    58,
     320,   132,    50,   -45,    89,   -47,   280,   -45,   301,   321,
     153,   -81,   256,   -86,   339,   130,   206,    86,    86,    92,
      54,   136,   136,   340,   -87,    99,   -81,    96,    57,    58,
     -81,   -86,    93,   147,   149,    84,   338,   -82,     2,     3,
     319,   177,   -87,   207,   -88,   -46,    94,   301,   -89,   -45,
     338,   345,   -82,   254,   112,   113,   -82,    85,   259,   273,
    -104,   211,   -88,   404,   273,   273,   -89,   -45,   307,   213,
     214,   227,   254,   274,   -71,   255,   276,   -90,   274,   274,
      21,   276,   276,   -83,   -21,   277,   167,    95,   108,   254,
     254,   168,   -71,   228,   255,   -90,   179,   -91,   -83,   -71,
     -71,   -71,   -83,    92,   369,   -84,    84,   128,   -49,   129,
     293,   255,   255,   178,   183,   -91,   110,   133,   414,   -85,
     -84,   288,   185,   186,   -84,   177,   -49,   275,    85,    86,
     -72,   110,   275,   275,   -48,   232,   110,   -85,   312,   142,
     -17,    97,   143,   397,   -17,   193,   416,   256,   -72,   306,
     -67,   420,   421,   236,   343,   -72,   -72,   -72,    92,   -47,
     325,   238,   239,   330,   144,   229,   256,   278,   -67,   145,
     152,   160,   278,   278,   -47,   -67,   -67,   -67,   -47,   193,
     177,   110,   272,   256,   256,   220,   220,   272,   272,   279,
    -102,  -103,   351,   260,   279,   279,   -94,   178,   246,   355,
      86,   231,   -86,   270,   161,   271,   -92,   268,   270,   270,
     271,   271,   268,   268,   269,   -69,   170,   -86,   162,   269,
     269,   -86,   365,   -44,   -92,   366,   149,    47,    48,    49,
     -93,   179,   -87,   -69,   180,   163,   181,   290,   -44,   182,
     -69,   -69,   -69,   -95,   380,   149,   110,   -87,   -93,   183,
     193,   -87,   178,   -46,   -45,   246,   184,   185,   186,   112,
     113,   280,   394,   149,   405,   -68,   280,   280,   -46,  -105,
     289,   291,   379,   193,   193,   403,   206,    47,    48,    49,
     -96,   207,   -45,   -68,   208,   -70,   209,   112,   113,   210,
     -68,   -68,   -68,   282,   187,   100,   189,   -45,   308,   211,
     309,   220,   193,   -70,   122,   123,   212,   213,   214,   -55,
     -70,   -70,   -70,   283,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   286,   326,   -55,   287,   246,   193,   187,   -79,
     189,   259,   304,   305,   215,   215,   216,   216,   -18,   310,
     277,   417,   -18,   -73,   -79,   277,   277,   240,   393,   242,
     -44,   -79,   220,    47,    48,    49,   154,   232,   -92,   -93,
     233,   -73,   234,   -19,   -80,   235,   -85,   -19,   -73,   -73,
     -73,   -80,   -81,   -92,   -93,   236,   -81,   -92,   -93,   188,
     -82,   -85,   237,   238,   239,   -85,   -80,   -81,   -88,   193,
     246,   193,   193,   193,   193,   165,   -83,   -84,   -47,   187,
     -82,   189,   -89,   -88,   240,   322,   242,   -88,   220,   246,
     220,   220,   220,   188,   324,   -82,   -74,   -89,   -90,   137,
     137,   -89,   323,   187,   292,   189,   246,   246,   246,   246,
     246,   246,   241,   -90,   -74,   -91,   220,   -90,    54,   193,
     204,   -74,   -74,   -74,   -83,    96,    57,    58,   327,   -84,
     -91,   187,   311,   189,   -91,   328,   -49,   -47,   341,   -83,
     193,    47,    48,    49,   -84,    50,   342,   -86,    51,   348,
      52,   -49,   -47,    53,   204,   -49,   187,   329,   189,   262,
     230,   230,   -86,    54,   188,   -87,   -75,    90,   246,   241,
      56,    57,    58,   257,   -48,   231,   344,   347,   -48,   353,
     -87,   -92,   -93,   346,   -75,   193,   349,   354,   188,   356,
     360,   -75,   -75,   -75,   -36,   -36,   -92,   -93,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   357,   -36,   359,   231,   -36,
     -47,   -36,   -20,   361,   -36,   363,   188,   -76,   187,   240,
     189,   242,   370,   374,   -36,   204,   -36,   -36,   -36,   364,
     257,   -36,   -36,   -36,   362,   -76,   179,   215,   240,   216,
     242,   188,   -76,   -76,   -76,   204,   -86,   -87,   204,   204,
     -85,   231,   192,   375,   183,   240,   240,   242,   242,   398,
     -88,   288,   185,   186,   376,   -85,   388,   402,   187,   -89,
     189,   377,   378,   230,   -90,   -88,   230,   204,    47,    48,
      49,   -91,   207,   -92,   -89,   208,   192,   209,   207,   -90,
     210,   409,   219,   219,   -93,   -20,   -91,   389,   257,   -20,
     211,   257,   204,   188,   241,   245,   211,   212,   213,   214,
     134,   135,   232,   307,   213,   214,   390,   -49,   231,   412,
     231,   391,   381,   241,   -85,   157,   392,   230,   231,   407,
     236,   -21,   -49,   -48,   187,   413,   189,   325,   238,   239,
     241,   241,   408,   419,   -88,    -8,    -8,   183,    -8,    -8,
     -89,   211,   -90,   188,   288,   185,   186,   192,   307,   213,
     214,   -91,   245,   236,   204,   257,   204,   204,   204,   204,
     325,   238,   239,    -2,     1,   -16,     2,     3,   -21,   -16,
     192,   192,   -21,   230,   257,   230,   230,   230,    -4,    -4,
     -99,    -4,    -4,   -49,   164,    -5,    -5,   191,    -5,    -5,
     -46,   257,   257,   257,   257,   257,   257,   415,   219,   192,
     410,   230,   122,   123,   204,    14,   411,   -55,    30,   188,
      41,   140,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,   191,   -55,   245,   192,   204,   -55,   218,   218,    47,
      48,    49,     0,    50,     0,     0,    51,     0,    52,     0,
     244,    53,     0,   194,     0,     0,     0,     0,     0,   219,
       0,    54,     0,   257,     0,   205,   -53,   156,    56,    57,
      58,   -53,   -53,   115,   116,   117,   118,   119,   120,     0,
     204,   -53,     0,     0,     0,   -53,     0,   194,    -6,    -6,
       0,    -6,    -6,   138,   138,     0,   192,   245,   192,   192,
     192,   373,   191,     0,     0,     0,   247,   244,   190,    -7,
      -7,     0,    -7,    -7,     0,   219,   245,   219,   219,   387,
      -3,    -3,     0,    -3,    -3,   191,   191,    -9,    -9,     0,
      -9,    -9,     0,   245,   245,   245,   245,   245,   401,     0,
       0,     0,   190,   219,     0,     0,   192,     0,   217,   217,
       0,     0,     0,   218,   191,     0,   -10,   -10,   194,   -10,
     -10,   243,     0,   247,     0,     0,   195,   192,   -13,   -13,
       0,   -13,   -13,     0,     0,   155,   122,   123,   244,   191,
       0,   -54,   194,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,     0,   245,   -54,     0,     0,   196,
     195,     0,     0,     0,   218,     0,   221,   221,     0,     0,
     194,     0,   192,   190,     0,   122,   123,     0,   243,   248,
     -55,     0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   196,     0,   194,   190,   190,   -55,   222,
     222,   191,   244,   191,   191,   372,   -14,   -14,     0,   -14,
     -14,     0,   249,   -11,   -11,     0,   -11,   -11,     0,     0,
     218,   244,   218,   386,   217,   190,   -12,   -12,     0,   -12,
     -12,   195,     0,     0,     0,     0,   248,     0,   244,   244,
     244,   244,   400,   -25,   -25,     0,   -25,   -25,   218,   243,
     190,   191,     0,     0,     0,   195,     0,   194,   247,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,   249,
     197,     0,   191,     0,     0,   217,   382,   247,     0,     0,
       0,     0,     0,   195,     0,     0,   198,     0,   196,     0,
       0,     0,     0,     0,   247,   247,     0,     0,     0,     0,
     244,     0,     0,     0,   197,     0,     0,   194,   195,     0,
     223,   223,   190,   243,   190,   371,   196,   191,     0,     0,
     198,     0,     0,   250,     0,     0,   224,   224,     0,     0,
       0,   217,   243,   385,     0,     0,    47,    48,    49,   251,
     179,   196,     0,   180,   199,   181,     0,     0,   182,   243,
     243,   243,   399,   200,     0,     0,     0,     0,   183,   217,
       0,     0,   190,     0,     0,   184,   185,   186,     0,     0,
     195,   248,     0,   194,     0,   197,     0,     0,   199,     0,
     250,     0,     0,   190,   225,   225,     0,   200,     0,   221,
     248,   198,     0,   226,   226,     0,   251,   252,     0,   197,
       0,     0,     0,   196,   249,     0,   253,   248,   248,     0,
       0,   243,     0,     0,     0,   198,     0,    47,    48,    49,
     195,   232,   222,   249,   233,     0,   234,   197,   190,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
     249,   249,     0,   198,     0,     0,   237,   238,   239,   199,
       0,     0,   197,   196,   252,     0,     0,     0,   200,     0,
       0,     0,     0,   253,     0,    47,    48,    49,   198,   232,
       0,     0,   233,   199,   234,     0,     0,   235,     0,     0,
       0,     0,   200,     0,     0,     0,   195,   236,   148,     0,
       0,     0,   122,   123,   237,   238,   239,   -55,     0,     0,
       0,   199,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     200,     0,     0,     0,   197,   250,    47,    48,    49,   196,
      50,     0,     0,    51,     0,    52,   199,     0,    53,     0,
     198,   251,     0,   223,   250,   200,     0,     0,    54,     0,
       0,     0,   258,     0,     0,    56,    57,    58,     0,   224,
     251,   250,   250,   -41,   -41,   -41,     0,   -41,     0,     0,
     -41,     0,   -41,     0,   197,   -41,     0,   251,   251,     0,
       0,     0,     0,     0,     0,   -41,     0,     0,     0,   -41,
     198,     0,   -41,   -41,   -41,     0,     0,     0,   199,   252,
       0,     0,    47,    48,    49,     0,    50,   200,   253,    51,
       0,    52,     0,     0,    53,     0,     0,   225,   252,     0,
       0,     0,     0,     0,    54,     0,   226,   253,   350,     0,
       0,    56,    57,    58,     0,   252,   252,     0,     0,     0,
     197,     0,     0,     0,   253,   253,     0,     0,   199,     0,
       0,     0,     0,     0,   -92,   -92,   198,   200,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,     0,     0,   -92,
     -92,   -92,     0,     0,   -92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -92,     0,   -92,   -92,   -92,     0,
       0,   -92,   -92,   -92,     0,   -93,   -93,     0,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,     0,     0,
     -93,   -93,   -93,     0,   199,   -93,     0,     0,     0,     0,
       0,     0,     0,   200,     0,   -93,     0,   -93,   -93,   -93,
       0,     0,   -93,   -93,   -93,   -36,   -36,     0,     0,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,     0,
     -36,   -47,   -36,     0,     0,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,     0,   -36,   -36,   -36,
       0,     0,   -36,   -36,   -36,   -92,   -92,     0,     0,   -92,
       0,   -92,   -92,   -92,   -92,   -92,     0,   -92,     0,     0,
     -92,   -92,   -92,     0,     0,   -92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -92,     0,   -92,   -92,   -92,
       0,     0,   -92,   -92,   -92,   -93,   -93,     0,     0,   -93,
       0,   -93,   -93,   -93,   -93,   -93,     0,   -93,     0,     0,
     -93,   -93,   -93,     0,     0,   -93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -93,     0,   -93,   -93,   -93,
       0,     0,   -93,   -93,   -93,   -37,   -37,     0,     0,   -37,
     169,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,     0,
     -37,     0,   -37,     0,     0,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -41,   -41,     0,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,     0,     0,
     -41,     0,   -41,     0,     0,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,     0,   -41,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -34,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,     0,
     -34,     0,   -34,     0,     0,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,     0,   -34,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,     0,
     -35,     0,   -35,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,     0,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,     0,     0,
     -30,     0,   -30,     0,     0,   -30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,     0,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,     0,
     -31,     0,   -31,     0,     0,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,     0,   -31,   -31,   -31,
       0,     0,   -31,   -31,   -31,   -32,   -32,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,
     -32,     0,   -32,     0,     0,   -32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,     0,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,     0,
     -29,     0,   -29,     0,     0,   -29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,     0,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,
     -33,     0,   -33,     0,     0,   -33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,     0,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -43,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,     0,
     -43,     0,   -43,     0,     0,   -43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -43,     0,   -43,   -43,   -43,
       0,     0,   -43,   -43,   -43,    -9,    -9,     0,     0,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,     0,     0,
      -9,     0,    -9,     0,     0,    -9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -9,     0,    -9,    -9,    -9,
       0,     0,    -9,    -9,    -9,   -10,   -10,     0,     0,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,     0,     0,
     -10,     0,   -10,     0,     0,   -10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -10,     0,   -10,   -10,   -10,
       0,     0,   -10,   -10,   -10,   -40,   -40,     0,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,     0,
     -40,     0,   -40,     0,     0,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,     0,   -40,   -40,   -40,
       0,     0,   -40,   -40,   -40,   -42,   -42,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,     0,
     -42,     0,   -42,     0,     0,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,     0,   -42,   -42,   -42,
       0,     0,   -42,   -42,   -42,   -25,   -25,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,
     -25,     0,   -25,     0,     0,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,     0,   -25,   -25,   -25,
       0,     0,   -25,   -25,   -25,   -37,   -37,     0,     0,   -37,
     418,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,     0,
     -37,     0,   -37,     0,     0,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -38,   -38,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,     0,
     -38,     0,   -38,     0,     0,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,     0,   -38,   -38,   -38,
       0,     0,   -38,   -38,   -38,   -39,   -39,     0,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,     0,
     -39,     0,   -39,     0,     0,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,     0,   -39,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -41,   -41,     0,     0,   -41,
       0,   -41,   -41,   -41,   -41,   -41,     0,   -41,     0,     0,
     -41,     0,   -41,     0,     0,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,     0,   -41,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -34,   -34,     0,     0,   -34,
       0,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,     0,
     -34,     0,   -34,     0,     0,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,     0,   -34,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -35,   -35,     0,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,     0,
     -35,     0,   -35,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,     0,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -30,   -30,     0,     0,   -30,
       0,   -30,   -30,   -30,   -30,   -30,     0,   -30,     0,     0,
     -30,     0,   -30,     0,     0,   -30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,     0,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,     2,     3,     0,     0,    44,
       0,    45,    46,    47,    48,    49,     0,    50,     0,     0,
      51,     0,    52,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,   173,   -26,    55,
       0,     0,    56,    57,    58,   -28,   -28,     0,     0,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,     0,
     -28,     0,   -28,     0,     0,   -28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -28,     0,   -28,   -28,   -28,
       0,     0,   -28,   -28,   -28,   -31,   -31,     0,     0,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,     0,
     -31,     0,   -31,     0,     0,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,     0,   -31,   -31,   -31,
       0,     0,   -31,   -31,   -31,   -32,   -32,     0,     0,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,
     -32,     0,   -32,     0,     0,   -32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,     0,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,   -29,   -29,     0,     0,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,     0,
     -29,     0,   -29,     0,     0,   -29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,     0,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -33,   -33,     0,     0,   -33,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,
     -33,     0,   -33,     0,     0,   -33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,     0,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -43,   -43,     0,     0,   -43,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,     0,
     -43,     0,   -43,     0,     0,   -43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -43,     0,   -43,   -43,   -43,
       0,     0,   -43,   -43,   -43,   -27,   -27,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,     0,
     -27,     0,   -27,     0,     0,   -27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,     0,   -27,   -27,   -27,
       0,     0,   -27,   -27,   -27,   -40,   -40,     0,     0,   -40,
       0,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,     0,
     -40,     0,   -40,     0,     0,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,     0,   -40,   -40,   -40,
       0,     0,   -40,   -40,   -40,   -42,   -42,     0,     0,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,     0,
     -42,     0,   -42,     0,     0,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,     0,   -42,   -42,   -42,
       0,     0,   -42,   -42,   -42,   -38,   -38,     0,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,     0,
     -38,     0,   -38,     0,     0,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,     0,   -38,   -38,   -38,
       0,     0,   -38,   -38,   -38,   -39,   -39,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,     0,
     -39,     0,   -39,     0,     0,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,     0,   -39,   -39,   -39,
       0,     0,   -39,   -39,   -39,    -9,    -9,     0,     0,    -9,
       0,    -9,    -9,    -9,    -9,    -9,     0,    -9,     0,     0,
      -9,     0,    -9,     0,     0,    -9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -9,     0,    -9,    -9,    -9,
       0,     0,    -9,    -9,    -9,   -10,   -10,     0,     0,   -10,
       0,   -10,   -10,   -10,   -10,   -10,     0,   -10,     0,     0,
     -10,     0,   -10,     0,     0,   -10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -10,     0,   -10,   -10,   -10,
       0,     0,   -10,   -10,   -10,   -25,   -25,     0,     0,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,
     -25,     0,   -25,     0,     0,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,     0,   -25,   -25,   -25,
       0,     0,   -25,   -25,   -25,   -24,   -24,     0,     0,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,
     -24,     0,   -24,     0,     0,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,     0,   -24,     0,   -24,
       0,     0,   -24,   -24,   -24,     2,     3,     0,     0,    44,
       0,    45,    46,    47,    48,    49,     0,    50,     0,     0,
      51,     0,    52,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,   173,     0,    55,
       0,     0,    56,    57,    58,     2,     3,     0,     0,   263,
       0,   264,   265,    47,    48,    49,     0,    50,     0,     0,
      51,     0,    52,     0,     0,    53,     0,     0,     0,    47,
      48,    49,     0,   232,     0,    54,   233,   266,   234,   267,
       0,   235,    56,    57,    58,     0,     0,     0,     0,     0,
       0,   236,   367,     0,     0,     0,     0,     0,   237,   238,
     239,   -40,   -40,   -40,     0,   -40,     0,     0,   -40,     0,
     -40,     0,     0,   -40,     0,     0,     0,    47,    48,    49,
       0,   232,     0,   -40,   233,     0,   234,   -40,     0,   235,
     -40,   -40,   -40,     0,     0,     0,     0,     0,     0,   236,
     383,     0,     0,     0,     0,     0,   237,   238,   239,    47,
      48,    49,     0,   232,     0,     0,   233,     0,   234,     0,
       0,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,   395,     0,     0,     0,     0,     0,   237,   238,
     239,   -41,   -41,   -41,     0,   -41,     0,     0,   -41,     0,
     -41,     0,     0,   -41,     0,   -40,   -40,   -40,     0,   -40,
       0,     0,   -40,   -41,   -40,     0,     0,   -40,     0,     0,
     -41,   -41,   -41,     0,     0,     0,     0,   -40,     0,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -64,   -64,   -64,
     -64,     0,   -64,     0,   331,   332,     0,   -64,   -64,   333,
     334,   -64,   -64,   -64,   -64,   335,   336,   -64,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,     0,   -64,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   336,   -64,     0,     0,     0,   -64,   -65,   -65,   -65,
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
     122,   123,   -97,     0,     0,   -54,   -97,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,
     -54,     0,     0,     0,   -54,   -64,   -64,   -64,   -64,     0,
     -64,     0,   102,   103,     0,   -64,   -64,   104,   105,   -64,
     -64,   -64,   -64,   106,   107,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,     0,   -64,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   107,     0,
       0,     0,   -64,   -65,   -65,   -65,   -65,     0,   -65,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -66,   -66,   -66,   -66,   -65,   -66,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -57,   -57,   125,   126,   -66,   -57,     0,     0,     0,
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
       0,   122,   123,     0,     0,   -97,   -54,     0,     0,     0,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,
     -64,   -64,   -64,   -64,   -54,   -64,     0,   294,   295,     0,
     -64,   -64,   296,   297,   -64,   -64,   -64,   -64,   298,   299,
     -64,   -64,   -64,   -64,   -64,     0,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     299,   -64,   -65,   -65,   -65,   -65,     0,   -65,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,   -65,   -66,   -66,   -66,   -66,     0,   -66,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -66,   -57,   -57,   125,   126,     0,   -57,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,     0,     0,   -57,   -59,   -59,   -59,   -59,     0,
     -59,     0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,   -59,   -61,   -61,   -61,   -61,
       0,   -61,     0,     0,     0,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,   -61,   -63,   -63,   -63,
     -63,     0,   -63,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,   -63,   -60,   -60,
     -60,   -60,     0,   -60,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,     0,   -60,   -62,
     -62,   -62,   -62,     0,   -62,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,
     -98,   -98,   -98,   -98,     0,   -98,     0,     0,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,     0,     0,
     -98,   -56,   -56,   125,   126,     0,   -56,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
       0,   -56,   -58,   -58,   -58,   -58,     0,   -58,     0,     0,
       0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
       0,     0,   -58,   -97,   -97,   -97,   -97,     0,   -97,     0,
       0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,     0,     0,   -97,   -64,   -64,   -64,   -64,     0,   -64,
       0,   313,   314,     0,   -64,   -64,   315,   316,   -64,   -64,
     -64,   -64,   317,   318,   -64,   -64,   -64,   -64,     0,   -64,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -50,   318,     0,     0,     0,   -50,   -50,   115,
     116,   117,   118,   119,   120,     0,     0,   -50,   -51,     0,
       0,   -50,     0,   -51,   -51,   115,   116,   117,   118,   119,
     120,     0,     0,   -51,   -52,     0,     0,   -51,     0,   -52,
     -52,   115,   116,   117,   118,   119,   120,     0,     0,   -52,
     -53,     0,     0,   -52,     0,   -53,   -53,   115,   116,   117,
     118,   119,   120,     0,   -50,     0,     0,     0,   -53,   -50,
     -50,   115,   116,   117,   118,   119,   120,     0,   -51,     0,
       0,     0,   -50,   -51,   -51,   115,   116,   117,   118,   119,
     120,     0,   -52,     0,     0,     0,   -51,   -52,   -52,   115,
     116,   117,   118,   119,   120,     0,   -65,   -65,   -65,   -65,
     -52,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,     0,   -66,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -57,   -57,   125,   126,     0,   -57,     0,     0,
       0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -59,   -59,   -59,   -59,     0,   -59,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -61,   -61,
     -61,   -61,     0,   -61,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -63,   -63,   -63,   -63,
       0,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -60,   -60,   -60,   -60,     0,   -60,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -62,   -62,   -62,   -62,     0,   -62,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -98,   -98,   -98,   -98,     0,   -98,     0,     0,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -56,   -56,
     125,   126,     0,   -56,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -58,   -58,   -58,   -58,
       0,   -58,     0,     0,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -97,   -97,   -97,   -97,     0,   -97,
       0,     0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   122,   123,     0,     0,     0,   -54,     0,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -53,     0,     0,     0,     0,   -53,   -53,   115,   116,   117,
     118,   119,   120,   -50,     0,   -53,     0,     0,   -50,   -50,
     115,   116,   117,   118,   119,   120,   -51,     0,   -50,     0,
       0,   -51,   -51,   115,   116,   117,   118,   119,   120,   -52,
       0,   -51,     0,     0,   -52,   -52,   115,   116,   117,   118,
     119,   120,   -53,     0,   -52,     0,     0,   -53,   -53,   115,
     116,   117,   118,   119,   120,   -50,     0,     0,     0,     0,
     -50,   -50,   115,   116,   117,   118,   119,   120,   -51,     0,
       0,     0,     0,   -51,   -51,   115,   116,   117,   118,   119,
     120,   -52,     0,     0,     0,     0,   -52,   -52,   115,   116,
     117,   118,   119,   120
};

static const yytype_int16 yycheck[] =
{
       0,    22,     0,    39,     0,     5,    63,     5,    29,     5,
      46,     0,    33,    89,   158,   190,     5,    38,    71,   299,
      20,    21,    20,    21,   191,    39,   173,    63,   158,   281,
       5,   158,    46,     0,    34,    19,    34,   189,   318,     5,
      19,     5,   217,     5,     5,    24,    25,    19,    19,    63,
      34,   218,     0,    89,    38,   131,   336,     5,    94,    95,
       3,     4,    34,    34,   216,    40,    38,    38,   243,    19,
     106,   107,    20,    21,    40,    89,    40,   244,    40,    40,
      94,    95,   158,     3,     4,    34,    34,    37,    19,    38,
     242,    34,   106,   107,    19,   131,    19,    39,    15,    37,
     352,   158,    37,    34,    46,    34,    23,    38,    19,    34,
      40,    34,   169,   170,    34,    38,    33,   131,    19,   266,
      19,    63,   158,    40,    41,    42,    37,    19,   164,     1,
      19,     3,     4,   169,   170,   188,    37,   158,    37,    19,
     292,    35,    34,    19,   158,    15,    38,    89,    37,    15,
     164,    34,    94,    95,    34,   169,   170,    23,   158,   311,
     158,    37,   158,    33,   106,   107,    19,    33,    19,   158,
      40,    41,    42,     6,    40,    41,    42,   329,    11,    12,
      13,    19,    15,    46,    37,    18,    37,    20,   241,   131,
      23,    54,    40,    19,   346,    40,   371,    19,    19,    37,
      33,    33,    33,    24,    25,   372,    37,    40,    41,    42,
     385,    37,    15,    34,    33,    37,   158,    38,   370,   386,
      23,    19,   164,    19,   399,    88,    89,   169,   170,   265,
      33,    94,    95,   400,    19,    40,    34,    40,    41,    42,
      38,    37,    33,   106,   107,   281,   398,    19,     3,     4,
     402,   265,    37,    15,    19,    19,    33,   409,    19,    19,
     412,    23,    34,   299,    24,    25,    38,   281,   131,   413,
      34,    33,    37,   349,   418,   419,    37,    37,    40,    41,
      42,   317,   318,   413,    15,   299,   413,    19,   418,   419,
      33,   418,   419,    19,    37,   158,   159,    33,    36,   335,
     336,   164,    33,   317,   318,    37,    15,    19,    34,    40,
      41,    42,    38,   349,    23,    19,   352,    37,    19,    37,
     183,   335,   336,   265,    33,    37,    19,    40,   404,    19,
      34,    40,    41,    42,    38,   349,    37,   413,   352,   281,
      15,    19,   418,   419,    37,    15,    19,    37,   211,    40,
      34,    50,    40,    23,    38,    54,   413,   299,    33,    37,
      15,   418,   419,    33,    37,    40,    41,    42,   404,    19,
      40,    41,    42,   236,     6,   317,   318,   413,    33,     6,
      40,    34,   418,   419,    34,    40,    41,    42,    38,    88,
     404,    19,   413,   335,   336,    94,    95,   418,   419,   413,
      34,    34,   265,    19,   418,   419,    37,   349,   107,    37,
     352,    19,    19,   413,    34,   413,    19,   413,   418,   419,
     418,   419,   418,   419,   413,    15,    34,    34,    34,   418,
     419,    38,     6,    19,    37,   298,   299,    11,    12,    13,
      19,    15,    19,    33,    18,    34,    20,    40,    34,    23,
      40,    41,    42,    37,   317,   318,    19,    34,    37,    33,
     159,    38,   404,    19,    19,   164,    40,    41,    42,    24,
      25,   413,   335,   336,    37,    15,   418,   419,    34,    34,
     179,    40,     6,   182,   183,   348,   349,    11,    12,    13,
      37,    15,    19,    33,    18,    15,    20,    24,    25,    23,
      40,    41,    42,    37,    54,    53,    54,    34,   207,    33,
      40,   210,   211,    33,    14,    15,    40,    41,    42,    19,
      40,    41,    42,    37,    24,    25,    26,    27,    28,    29,
      30,    31,    37,   232,    34,    37,   235,   236,    88,    19,
      88,   404,    37,    37,    94,    95,    94,    95,    34,    40,
     413,   414,    38,    15,    34,   418,   419,   107,     6,   107,
      19,    19,   261,    11,    12,    13,   114,    15,    19,    19,
      18,    33,    20,    34,    19,    23,    19,    38,    40,    41,
      42,    19,    19,    34,    34,    33,    19,    38,    38,    54,
      19,    34,    40,    41,    42,    38,    34,    34,    19,   298,
     299,   300,   301,   302,   303,   153,    19,    19,    19,   159,
      19,   159,    19,    34,   164,    37,   164,    38,   317,   318,
     319,   320,   321,    88,    40,    34,    15,    34,    19,    94,
      95,    38,    37,   183,   182,   183,   335,   336,   337,   338,
     339,   340,   107,    34,    33,    19,   345,    38,    33,   348,
      54,    40,    41,    42,    19,    40,    41,    42,    40,    19,
      34,   211,   210,   211,    38,    40,    19,    19,    37,    34,
     369,    11,    12,    13,    34,    15,    37,    19,    18,    33,
      20,    34,    34,    23,    88,    38,   236,   235,   236,    19,
      94,    95,    34,    33,   159,    19,    15,    37,   397,   164,
      40,    41,    42,   107,    34,    19,    40,    40,    38,    37,
      34,    19,    19,   261,    33,   414,    33,    37,   183,    37,
      34,    40,    41,    42,     3,     4,    34,    34,     7,     8,
       9,    10,    11,    12,    13,    37,    15,    40,    19,    18,
      19,    20,    37,    40,    23,     6,   211,    15,   298,   299,
     298,   299,   300,    34,    33,   159,    35,    36,    37,     6,
     164,    40,    41,    42,    40,    33,    15,   317,   318,   317,
     318,   236,    40,    41,    42,   179,    19,    19,   182,   183,
      19,    19,    54,    40,    33,   335,   336,   335,   336,   337,
      19,    40,    41,    42,    40,    34,    34,   345,   348,    19,
     348,     6,     6,   207,    19,    34,   210,   211,    11,    12,
      13,    19,    15,    19,    34,    18,    88,    20,    15,    34,
      23,   369,    94,    95,    19,    34,    34,    40,   232,    38,
      33,   235,   236,   298,   299,   107,    33,    40,    41,    42,
      43,    44,    15,    40,    41,    42,    40,    19,    19,   397,
      19,     6,   317,   318,    19,   127,     6,   261,    19,    36,
      33,    37,    34,    34,   414,    34,   414,    40,    41,    42,
     335,   336,    34,    34,    19,     0,     1,    33,     3,     4,
      19,    33,    19,   348,    40,    41,    42,   159,    40,    41,
      42,    19,   164,    33,   298,   299,   300,   301,   302,   303,
      40,    41,    42,     0,     1,    34,     3,     4,    34,    38,
     182,   183,    38,   317,   318,   319,   320,   321,     0,     1,
      34,     3,     4,    19,    38,     0,     1,    54,     3,     4,
      19,   335,   336,   337,   338,   339,   340,    36,   210,   211,
      34,   345,    14,    15,   348,     5,    34,    19,    21,   414,
      34,    95,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    88,    34,   235,   236,   369,    38,    94,    95,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,
     107,    23,    -1,    54,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    33,    -1,   397,    -1,    37,    19,   124,    40,    41,
      42,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
     414,    34,    -1,    -1,    -1,    38,    -1,    88,     0,     1,
      -1,     3,     4,    94,    95,    -1,   298,   299,   300,   301,
     302,   303,   159,    -1,    -1,    -1,   107,   164,    54,     0,
       1,    -1,     3,     4,    -1,   317,   318,   319,   320,   321,
       0,     1,    -1,     3,     4,   182,   183,     0,     1,    -1,
       3,     4,    -1,   335,   336,   337,   338,   339,   340,    -1,
      -1,    -1,    88,   345,    -1,    -1,   348,    -1,    94,    95,
      -1,    -1,    -1,   210,   211,    -1,     0,     1,   159,     3,
       4,   107,    -1,   164,    -1,    -1,    54,   369,     0,     1,
      -1,     3,     4,    -1,    -1,   121,    14,    15,   235,   236,
      -1,    19,   183,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   397,    34,    -1,    -1,    54,
      88,    -1,    -1,    -1,   261,    -1,    94,    95,    -1,    -1,
     211,    -1,   414,   159,    -1,    14,    15,    -1,   164,   107,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    88,    -1,   236,   182,   183,    37,    94,
      95,   298,   299,   300,   301,   302,     0,     1,    -1,     3,
       4,    -1,   107,     0,     1,    -1,     3,     4,    -1,    -1,
     317,   318,   319,   320,   210,   211,     0,     1,    -1,     3,
       4,   159,    -1,    -1,    -1,    -1,   164,    -1,   335,   336,
     337,   338,   339,     0,     1,    -1,     3,     4,   345,   235,
     236,   348,    -1,    -1,    -1,   183,    -1,   298,   299,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,   164,
      54,    -1,   369,    -1,    -1,   261,   317,   318,    -1,    -1,
      -1,    -1,    -1,   211,    -1,    -1,    54,    -1,   183,    -1,
      -1,    -1,    -1,    -1,   335,   336,    -1,    -1,    -1,    -1,
     397,    -1,    -1,    -1,    88,    -1,    -1,   348,   236,    -1,
      94,    95,   298,   299,   300,   301,   211,   414,    -1,    -1,
      88,    -1,    -1,   107,    -1,    -1,    94,    95,    -1,    -1,
      -1,   317,   318,   319,    -1,    -1,    11,    12,    13,   107,
      15,   236,    -1,    18,    54,    20,    -1,    -1,    23,   335,
     336,   337,   338,    54,    -1,    -1,    -1,    -1,    33,   345,
      -1,    -1,   348,    -1,    -1,    40,    41,    42,    -1,    -1,
     298,   299,    -1,   414,    -1,   159,    -1,    -1,    88,    -1,
     164,    -1,    -1,   369,    94,    95,    -1,    88,    -1,   317,
     318,   159,    -1,    94,    95,    -1,   164,   107,    -1,   183,
      -1,    -1,    -1,   298,   299,    -1,   107,   335,   336,    -1,
      -1,   397,    -1,    -1,    -1,   183,    -1,    11,    12,    13,
     348,    15,   317,   318,    18,    -1,    20,   211,   414,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
     335,   336,    -1,   211,    -1,    -1,    40,    41,    42,   159,
      -1,    -1,   236,   348,   164,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    -1,   164,    -1,    11,    12,    13,   236,    15,
      -1,    -1,    18,   183,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    -1,   414,    33,    34,    -1,
      -1,    -1,    14,    15,    40,    41,    42,    19,    -1,    -1,
      -1,   211,    24,    25,    26,    27,    28,    29,    30,    31,
     211,    -1,    -1,    -1,   298,   299,    11,    12,    13,   414,
      15,    -1,    -1,    18,    -1,    20,   236,    -1,    23,    -1,
     298,   299,    -1,   317,   318,   236,    -1,    -1,    33,    -1,
      -1,    -1,    37,    -1,    -1,    40,    41,    42,    -1,   317,
     318,   335,   336,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,   348,    23,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,
     348,    -1,    40,    41,    42,    -1,    -1,    -1,   298,   299,
      -1,    -1,    11,    12,    13,    -1,    15,   298,   299,    18,
      -1,    20,    -1,    -1,    23,    -1,    -1,   317,   318,    -1,
      -1,    -1,    -1,    -1,    33,    -1,   317,   318,    37,    -1,
      -1,    40,    41,    42,    -1,   335,   336,    -1,    -1,    -1,
     414,    -1,    -1,    -1,   335,   336,    -1,    -1,   348,    -1,
      -1,    -1,    -1,    -1,     3,     4,   414,   348,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    -1,
      -1,    40,    41,    42,    -1,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    20,    -1,   414,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   414,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    37,
      -1,    -1,    40,    41,    42,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    11,
      12,    13,    -1,    15,    -1,    33,    18,    35,    20,    37,
      -1,    23,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    11,    12,    13,    -1,    15,    -1,    -1,    18,    -1,
      20,    -1,    -1,    23,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    -1,    33,    18,    -1,    20,    37,    -1,    23,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    -1,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    41,
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
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    14,    15,    16,    17,    -1,
      19,    -1,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    37,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    37,    14,    15,    16,    17,    -1,    19,    -1,
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
      14,    15,    16,    17,    37,    19,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    14,    15,    16,    17,    -1,    19,    -1,    -1,
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
      -1,    -1,    34,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    14,    15,    16,    17,    -1,    19,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    19,    33,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    19,    -1,
      -1,    38,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    19,    -1,    -1,    38,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      19,    -1,    -1,    38,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    19,    -1,    -1,    -1,    37,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    19,    -1,
      -1,    -1,    37,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    19,    -1,    -1,    -1,    37,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    14,    15,    16,    17,
      37,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    19,    -1,    34,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    -1,    34,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    19,
      -1,    34,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    19,    -1,    34,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31
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
      85,    86,    87,    88,    89,    37,    67,    15,    18,    20,
      23,    33,    40,    41,    42,    68,    70,    71,    72,    73,
      74,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    19,    15,    18,    20,    23,    33,    40,    41,    42,
      68,    69,    70,    71,    72,    73,    74,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    37,    67,
      19,    78,    19,     7,     9,    10,    35,    37,    49,    50,
      55,    56,    58,    63,    64,    65,    66,    67,    86,    87,
      88,    59,    37,    37,     5,    40,    37,    37,    40,    74,
      40,    40,    70,    67,    21,    22,    26,    27,    32,    33,
      78,    75,    76,    77,    37,    37,    37,    40,    74,    40,
      40,    70,    67,    21,    22,    26,    27,    32,    33,    75,
      76,    77,    37,    37,    40,    40,    74,    40,    40,    70,
      67,    21,    22,    26,    27,    32,    33,    78,    75,    76,
      77,    37,    37,    37,    40,    23,    70,    40,    33,    33,
      37,    67,    59,    37,    37,    37,    37,    37,    60,    40,
      34,    40,    40,     6,     6,     6,    67,    34,    90,    23,
      70,    71,    72,    73,    34,    40,    40,     6,     6,     6,
      67,    69,    79,    34,    90,    71,    72,    73,    34,    40,
      40,     6,     6,     6,    67,    34,    90,    23,    70,    71,
      72,    73,    70,    67,    65,    37,    60,    36,    34,    70,
      34,    34,    70,    34,    65,    36,    62,    67,     8,    34,
      62,    62
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
#line 2727 "sintatic.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 133 "src/sintatic.y"
                                       {
  (yyval.element) = create_element(DECLARATIONS, NULL, NULL, NULL, (yyvsp[-1].element));
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);

}
#line 2737 "sintatic.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 137 "src/sintatic.y"
                {
  (yyval.element) = (yyvsp[0].element);
}
#line 2745 "sintatic.tab.c"
    break;

  case 5: /* declaration: variable_declaration  */
#line 141 "src/sintatic.y"
                                  {
  (yyval.element) = (yyvsp[0].element);
}
#line 2753 "sintatic.tab.c"
    break;

  case 6: /* declaration: list_declaration  */
#line 143 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 2761 "sintatic.tab.c"
    break;

  case 7: /* declaration: function_declaration  */
#line 145 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 2769 "sintatic.tab.c"
    break;

  case 8: /* declaration: error  */
#line 147 "src/sintatic.y"
          {
  yyerrok;
  (yyval.element) = NULL;
}
#line 2778 "sintatic.tab.c"
    break;

  case 9: /* variable_declaration: variable_simple_declaration SEMI  */
#line 152 "src/sintatic.y"
                                                       {
  (yyval.element) = (yyvsp[-1].element);
}
#line 2786 "sintatic.tab.c"
    break;

  case 10: /* list_declaration: list_simple_declaration SEMI  */
#line 156 "src/sintatic.y"
                                               {
  (yyval.element) = (yyvsp[-1].element);
}
#line 2794 "sintatic.tab.c"
    break;

  case 11: /* function_declaration: type_specifier ID '(' parameters ')' compound_statement  */
#line 161 "src/sintatic.y"
                                                          {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-5].element)->type, (yyvsp[-4].name), NULL, (yyvsp[-2].element));
    (yyvsp[-2].element)->next_left = (yyvsp[0].element);
    insert_symbol(table, (yyvsp[-4].name), (yyvsp[-5].element)->type, "function", lineno);
}
#line 2804 "sintatic.tab.c"
    break;

  case 12: /* function_declaration: type_specifier LIST ID '(' parameters ')' compound_statement  */
#line 166 "src/sintatic.y"
                                                               {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-5].name), (yyvsp[-4].name), NULL, (yyvsp[-2].element));
    (yyvsp[-2].element)->next_left = (yyvsp[0].element);
    insert_symbol(table, (yyvsp[-4].name), (yyvsp[-5].name), "function", lineno);
}
#line 2814 "sintatic.tab.c"
    break;

  case 13: /* function_declaration: type_specifier ID '(' ')' compound_statement  */
#line 171 "src/sintatic.y"
                                               {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-4].element)->type, (yyvsp[-3].name), NULL, NULL);
    insert_symbol(table, (yyvsp[-2].name), (yyvsp[-4].element)->type, "function", lineno);
}
#line 2823 "sintatic.tab.c"
    break;

  case 14: /* function_declaration: type_specifier LIST ID '(' ')' compound_statement  */
#line 175 "src/sintatic.y"
                                                    {
   (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-4].name), (yyvsp[-3].name), NULL, NULL);
   insert_symbol(table, (yyvsp[-3].name), (yyvsp[-4].name), "function", lineno);
}
#line 2832 "sintatic.tab.c"
    break;

  case 15: /* parameters: list_paremeters  */
#line 180 "src/sintatic.y"
                            {
  (yyval.element) = (yyvsp[0].element);
}
#line 2840 "sintatic.tab.c"
    break;

  case 16: /* list_paremeters: list_paremeters COMMA parameter  */
#line 184 "src/sintatic.y"
                                                 {
  (yyval.element) = create_element(LIST_PARAMETERS, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_right = (yyvsp[0].element);
}
#line 2849 "sintatic.tab.c"
    break;

  case 17: /* list_paremeters: parameter  */
#line 187 "src/sintatic.y"
              {
  (yyval.element) = (yyvsp[0].element);
}
#line 2857 "sintatic.tab.c"
    break;

  case 18: /* parameter: variable_simple_declaration  */
#line 191 "src/sintatic.y"
                                       {
  (yyval.element) = (yyvsp[0].element);
}
#line 2865 "sintatic.tab.c"
    break;

  case 19: /* parameter: list_simple_declaration  */
#line 193 "src/sintatic.y"
                            {
  (yyval.element) = (yyvsp[0].element);
}
#line 2873 "sintatic.tab.c"
    break;

  case 20: /* variable_simple_declaration: type_specifier ID  */
#line 197 "src/sintatic.y"
                                               {
  (yyval.element) = create_element(VARIABLE_SIMPLE_DECLARATION, (yyvsp[-1].element)->type, (yyvsp[0].name), NULL, NULL);
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].element)->type, "variable", lineno);
}
#line 2882 "sintatic.tab.c"
    break;

  case 21: /* list_simple_declaration: type_specifier LIST ID  */
#line 202 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(LIST_SIMPLE_DECLARATION, (yyvsp[-1].name), (yyvsp[0].name), NULL, NULL);
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "variable", lineno);
}
#line 2891 "sintatic.tab.c"
    break;

  case 22: /* type_specifier: INT  */
#line 215 "src/sintatic.y"
                    {
  (yyval.element) = create_element(TYPE_SPECIFIER, (yyvsp[0].name), NULL, NULL, NULL);
}
#line 2899 "sintatic.tab.c"
    break;

  case 23: /* type_specifier: FLOAT  */
#line 217 "src/sintatic.y"
          {
  (yyval.element) = create_element(TYPE_SPECIFIER, (yyvsp[0].name), NULL, NULL, NULL);
}
#line 2907 "sintatic.tab.c"
    break;

  case 24: /* $@1: %empty  */
#line 223 "src/sintatic.y"
    { 
     present_scope+=1;
    }
#line 2915 "sintatic.tab.c"
    break;

  case 25: /* compound_statement: '{' $@1 local_declarations '}'  */
#line 226 "src/sintatic.y"
                             {
       (yyval.element) = create_element(COMPOUND_STATEMENT, NULL, NULL, NULL, (yyvsp[-1].element));
       //present_scope--;
      }
#line 2924 "sintatic.tab.c"
    break;

  case 26: /* local_declarations: list_statements  */
#line 231 "src/sintatic.y"
                                    {
 (yyval.element) = (yyvsp[0].element);
}
#line 2932 "sintatic.tab.c"
    break;

  case 27: /* list_statements: list_statements statement  */
#line 235 "src/sintatic.y"
                                           {
 (yyval.element) = create_element(LIST_STATEMENTS, NULL, NULL, NULL, (yyvsp[-1].element));
 (yyvsp[-1].element)->next_left = (yyvsp[0].element); 
}
#line 2941 "sintatic.tab.c"
    break;

  case 28: /* list_statements: statement  */
#line 238 "src/sintatic.y"
              {
 (yyval.element) = (yyvsp[0].element);
}
#line 2949 "sintatic.tab.c"
    break;


#line 2953 "sintatic.tab.c"

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

#line 304 "src/sintatic.y"


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
