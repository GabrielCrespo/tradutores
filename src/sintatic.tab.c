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
 int sintatic_errors = 0;

 symbol_table* table = NULL;
 tree_element* tree = NULL;


#line 95 "sintatic.tab.c"

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
  YYSYMBOL_OR = 4,                         /* OR  */
  YYSYMBOL_AND = 5,                        /* AND  */
  YYSYMBOL_NOT = 6,                        /* NOT  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_FLOAT = 8,                      /* FLOAT  */
  YYSYMBOL_LIST = 9,                       /* LIST  */
  YYSYMBOL_NIL = 10,                       /* NIL  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_WRITE = 16,                     /* WRITE  */
  YYSYMBOL_WRITELN = 17,                   /* WRITELN  */
  YYSYMBOL_SUM_OP = 18,                    /* SUM_OP  */
  YYSYMBOL_SUB_OP = 19,                    /* SUB_OP  */
  YYSYMBOL_MULT_OP = 20,                   /* MULT_OP  */
  YYSYMBOL_DIV_OP = 21,                    /* DIV_OP  */
  YYSYMBOL_LIST_HEADER = 22,               /* LIST_HEADER  */
  YYSYMBOL_LIST_CONSTRUCTOR = 23,          /* LIST_CONSTRUCTOR  */
  YYSYMBOL_LIST_TAIL = 24,                 /* LIST_TAIL  */
  YYSYMBOL_LIST_MAP = 25,                  /* LIST_MAP  */
  YYSYMBOL_LIST_FILTER = 26,               /* LIST_FILTER  */
  YYSYMBOL_EXC_OP = 27,                    /* EXC_OP  */
  YYSYMBOL_OR_OP = 28,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 29,                    /* AND_OP  */
  YYSYMBOL_EQUAL_OP = 30,                  /* EQUAL_OP  */
  YYSYMBOL_DIFF_OP = 31,                   /* DIFF_OP  */
  YYSYMBOL_LST_OP = 32,                    /* LST_OP  */
  YYSYMBOL_GRT_OP = 33,                    /* GRT_OP  */
  YYSYMBOL_LST_EQ_OP = 34,                 /* LST_EQ_OP  */
  YYSYMBOL_GRT_EQ_OP = 35,                 /* GRT_EQ_OP  */
  YYSYMBOL_ASSIGN_OP = 36,                 /* ASSIGN_OP  */
  YYSYMBOL_L_PAREN = 37,                   /* L_PAREN  */
  YYSYMBOL_R_PAREN = 38,                   /* R_PAREN  */
  YYSYMBOL_L_BRACK = 39,                   /* L_BRACK  */
  YYSYMBOL_R_BRACK = 40,                   /* R_BRACK  */
  YYSYMBOL_SEMI = 41,                      /* SEMI  */
  YYSYMBOL_COMMA = 42,                     /* COMMA  */
  YYSYMBOL_REFFER = 43,                    /* REFFER  */
  YYSYMBOL_ID = 44,                        /* ID  */
  YYSYMBOL_INT_CONST = 45,                 /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 46,               /* FLOAT_CONST  */
  YYSYMBOL_STRING = 47,                    /* STRING  */
  YYSYMBOL_CHAR = 48,                      /* CHAR  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_declarations = 51,              /* declarations  */
  YYSYMBOL_declaration = 52,               /* declaration  */
  YYSYMBOL_variable_declaration = 53,      /* variable_declaration  */
  YYSYMBOL_list_declaration = 54,          /* list_declaration  */
  YYSYMBOL_function_declaration = 55,      /* function_declaration  */
  YYSYMBOL_parameters = 56,                /* parameters  */
  YYSYMBOL_list_paremeters = 57,           /* list_paremeters  */
  YYSYMBOL_parameter = 58,                 /* parameter  */
  YYSYMBOL_variable_simple_declaration = 59, /* variable_simple_declaration  */
  YYSYMBOL_list_simple_declaration = 60,   /* list_simple_declaration  */
  YYSYMBOL_type_specifier = 61,            /* type_specifier  */
  YYSYMBOL_compound_statement = 62,        /* compound_statement  */
  YYSYMBOL_63_1 = 63,                      /* $@1  */
  YYSYMBOL_local_declarations = 64,        /* local_declarations  */
  YYSYMBOL_list_statements = 65,           /* list_statements  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_conditional_statement = 67,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 68,       /* iteration_statement  */
  YYSYMBOL_expression_statement = 69,      /* expression_statement  */
  YYSYMBOL_return_statement = 70,          /* return_statement  */
  YYSYMBOL_expression = 71,                /* expression  */
  YYSYMBOL_assign_expression = 72,         /* assign_expression  */
  YYSYMBOL_simple_expression = 73,         /* simple_expression  */
  YYSYMBOL_relational_expression = 74,     /* relational_expression  */
  YYSYMBOL_arithmetic_add_expression = 75, /* arithmetic_add_expression  */
  YYSYMBOL_arithmetic_mul_expression = 76, /* arithmetic_mul_expression  */
  YYSYMBOL_unary_sub_expression = 77,      /* unary_sub_expression  */
  YYSYMBOL_factor = 78,                    /* factor  */
  YYSYMBOL_relational_op = 79,             /* relational_op  */
  YYSYMBOL_arithmetic_add_op = 80,         /* arithmetic_add_op  */
  YYSYMBOL_arithmetic_mult_op = 81,        /* arithmetic_mult_op  */
  YYSYMBOL_binary_logic_op = 82,           /* binary_logic_op  */
  YYSYMBOL_list_expression = 83,           /* list_expression  */
  YYSYMBOL_constructor = 84,               /* constructor  */
  YYSYMBOL_header = 85,                    /* header  */
  YYSYMBOL_tail = 86,                      /* tail  */
  YYSYMBOL_map = 87,                       /* map  */
  YYSYMBOL_filter = 88,                    /* filter  */
  YYSYMBOL_list_comparation = 89,          /* list_comparation  */
  YYSYMBOL_in_out_expression = 90,         /* in_out_expression  */
  YYSYMBOL_read = 91,                      /* read  */
  YYSYMBOL_write = 92,                     /* write  */
  YYSYMBOL_function_call = 93,             /* function_call  */
  YYSYMBOL_arguments = 94,                 /* arguments  */
  YYSYMBOL_list_arguments = 95,            /* list_arguments  */
  YYSYMBOL_var = 96                        /* var  */
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
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  423

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   135,   135,   140,   144,   148,   150,   152,   154,   159,
     163,   168,   173,   178,   182,   187,   191,   194,   198,   200,
     204,   209,   214,   216,   222,   221,   230,   234,   237,   241,
     243,   245,   247,   249,   251,   253,   255,   259,   262,   268,
     275,   277,   281,   283,   287,   289,   291,   293,   297,   299,
     303,   306,   310,   315,   319,   323,   327,   331,   335,   339,
     343,   346,   350,   352,   354,   356,   358,   362,   364,   366,
     368,   370,   372,   376,   378,   382,   384,   388,   390,   394,
     396,   398,   400,   402,   404,   408,   412,   416,   420,   424,
     428,   430,   434,   436,   440,   444,   446,   450,   452,   456,
     460,   463,   467,   469,   471,   473
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
  "\"end of file\"", "error", "\"invalid token\"", "THEN", "OR", "AND",
  "NOT", "INT", "FLOAT", "LIST", "NIL", "IF", "ELSE", "FOR", "RETURN",
  "READ", "WRITE", "WRITELN", "SUM_OP", "SUB_OP", "MULT_OP", "DIV_OP",
  "LIST_HEADER", "LIST_CONSTRUCTOR", "LIST_TAIL", "LIST_MAP",
  "LIST_FILTER", "EXC_OP", "OR_OP", "AND_OP", "EQUAL_OP", "DIFF_OP",
  "LST_OP", "GRT_OP", "LST_EQ_OP", "GRT_EQ_OP", "ASSIGN_OP", "L_PAREN",
  "R_PAREN", "L_BRACK", "R_BRACK", "SEMI", "COMMA", "REFFER", "ID",
  "INT_CONST", "FLOAT_CONST", "STRING", "CHAR", "$accept", "program",
  "declarations", "declaration", "variable_declaration",
  "list_declaration", "function_declaration", "parameters",
  "list_paremeters", "parameter", "variable_simple_declaration",
  "list_simple_declaration", "type_specifier", "compound_statement", "$@1",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
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
     899,   904,     5,    17,    35,   966,   983,   992,  1037,  1087,
      42,    53,    23,  -265,  1089,  1098,  1165,    -1,   151,   447,
      39,    71,    13,     7,   451,   506,   536,   563,    31,    13,
      75,  1377,  1191,    13,   103,    94,   606,  1200,    13,  1545,
    1253,   659,   671,  1255,    82,    87,  3246,   115,   117,   120,
     804,   137,   139,    45,  3470,  2470,  3945,  1033,  1458,  2510,
    2550,  2590,   131,  2630,  2670,  2710,  2750,  2790,  2830,    21,
      43,   216,   745,  4183,  3993,  4012,  4031,   100,   145,   159,
     176,   185,   206,   212,  1630,   164,   172,  4050,  3470,  3262,
    2870,   232,   235,   178,  1415,  1415,  3969,  4069,   295,   298,
    4598,    16,   205,   224,   250,   264,   174,  3278,  1270,  2910,
     238,  2950,   102,   158,   187,    98,   313,   372,   487,   527,
     580,    45,   583,   620,    45,   650,   692,    45,  1670,  1710,
      58,  3310,  2990,   256,   258,   288,   193,   613,    74,   289,
     299,  4088,   324,   339,   356,   369,   408,   415,  4107,    50,
     308,   676,   416,    45,  4612,  4202,  4126,  4145,  3230,  3470,
     310,   315,   326,  4164,  3484,  4626,  1750,   128,   107,  1545,
    1545,  3030,  3070,  1377,   327,   329,    32,   332,   337,   814,
     346,   354,   703,  3470,  4221,  4263,  4284,   189,   655,   988,
    1203,  4305,  4326,  4347,   223,   246,   248,   268,   292,   458,
     472,   542,   363,   365,  4368,  3326,   418,  4242,   331,   384,
     391,   394,   393,   825,   423,   428,   716,  3470,  3559,  3609,
    3634,   138,   127,   926,  3902,  3659,  3684,  3709,   192,   198,
     214,   243,   275,   291,   322,   351,   442,   464,  3734,  3516,
     420,   297,   471,   358,   484,  3342,  1377,  1790,  1830,  1870,
     486,   509,  1910,  1950,  1990,  2030,  2070,   421,   463,   515,
     538,  1545,  3110,  3150,   524,   568,   511,   512,  1111,  4389,
     585,   617,  4892,   635,   562,   567,   604,   637,   688,  3358,
     703,   703,   703,   679,   683,  3390,   810,   623,   629,   685,
    3584,  3759,   404,   410,  1264,   704,   610,   626,   669,   670,
     864,  3406,   492,   716,   716,   716,   413,   427,  3530,   703,
    4905,   478,  3470,  3262,  2110,   517,  1545,  2150,  2190,  2230,
    1505,  1590,   648,   651,  4410,   732,   749,   775,   776,   778,
     779,  4431,   707,  4512,  4452,  4473,   666,   886,   682,   697,
     720,  3470,  4533,  4645,  4663,   723,    79,  4931,  4861,  4681,
    4699,  4717,   728,   731,   735,   744,   748,   765,   768,  4735,
    3784,   505,   507,   528,   565,   593,   611,  3809,   754,   716,
    4566,  3920,  3834,  3859,  4918,   798,  3310,  2270,   753,  3190,
    4494,  4553,  4753,   771,   787,  4944,   801,   767,   784,   812,
     821,  3438,   789,   550,   720,   720,   720,  3884,  4582,  3230,
    3470,  2310,  4771,   815,   819,   823,   842,  4789,   797,   844,
     720,  4957,  4879,  4807,  4825,  2350,   807,  4843,  4970,  3230,
    3230,  2390,  2430
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
    -265,  -265,  -265,   863,     4,     6,  -265,   852,  -265,   841,
       0,     2,    80,    -5,  -160,  -242,  -265,   -33,  -127,  -120,
     -71,  -116,   213,    11,   702,   359,   875,   769,   636,   281,
     245,  -174,  -162,   -59,   918,  1026,  1029,  1064,  1157,  1194,
    1196,   -38,   -36,     9,   503,  -264,  -265,   783
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
     109,   253,    17,    43,    26,    13,    27,   368,   254,   212,
      35,   264,   256,    19,   110,    33,     2,     3,    86,   -22,
     304,    92,    31,   177,   141,   178,   209,   209,   210,   210,
     159,   -23,   111,   305,    50,   187,   -44,    18,    92,   235,
     177,   236,    86,   242,   378,    36,   265,    22,     2,     3,
      12,   212,    54,    15,   -44,    12,   316,   255,  -101,    96,
      57,    58,  -101,    92,    16,   177,   158,   -46,   178,   187,
      28,    28,   -45,   211,   211,   208,   208,   112,   113,    29,
       2,     3,  -104,    38,    28,   178,   237,   -71,   221,    88,
     258,   -77,   259,   -46,    89,   166,   235,   408,   236,   -77,
     242,    84,    84,    85,    85,   -71,   171,   172,    42,   -77,
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
     144,   -46,   235,   235,   236,   236,   -81,   101,   143,   -79,
      86,   -80,   253,   132,   145,    92,   -47,   177,    84,   254,
      85,   -81,   152,   256,   -79,   -81,   -80,   393,   237,   187,
     221,   -81,   253,   253,   160,   211,  -102,   208,   -82,   254,
     254,   130,   206,   256,   256,   400,   -81,   136,   136,   237,
     237,   221,   221,   -82,   -83,   -82,   179,   -82,   -86,   147,
     149,   -87,   178,   187,   309,    86,  -103,   161,   255,   -83,
     -82,    97,   -72,   -83,   183,   193,   -86,   162,    92,   -87,
     177,   268,   185,   186,   240,   -84,   163,   -88,   255,   255,
     -72,   -94,   187,   235,   -44,   236,   -95,   -72,   -72,   -72,
     -84,   258,   -89,   259,   -84,   -88,   415,   -96,   262,   193,
     263,   257,   167,   266,   -47,   193,   193,   168,   267,   -90,
     -89,   258,   258,   259,   259,   178,   421,   422,   227,   -47,
     270,   -67,   -91,   -47,   252,   312,   273,   -90,   271,   250,
     237,   251,   221,   248,   283,   249,   284,   -47,   260,   -67,
     -91,   187,   100,   189,   252,   252,   -67,   -67,   -67,   250,
     250,   251,   251,   248,   248,   249,   249,   -86,   260,   260,
     295,   -49,   287,   -87,   280,   288,   -92,   289,   110,   -85,
     193,   110,   -86,   110,   110,   227,   -86,   189,   -87,   -49,
     -93,   -92,   -87,   189,   189,   -92,   -48,   -85,   315,   285,
     269,   308,   319,   193,   193,   -93,   223,   292,   303,   -93,
     -36,   -36,   293,   154,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -83,   -36,   306,    21,   -36,   -47,   -36,   -21,   -15,
     -36,   330,   149,    34,   291,   -84,   -83,   227,   193,   345,
     -36,   -85,   -36,   -36,   -36,   307,   -69,   -36,   -36,   -36,
     -84,   213,   165,   366,   149,   311,   -85,   280,   189,   369,
     -85,   313,   193,   223,   -69,   375,   206,   317,   -88,   217,
     -89,   -69,   -69,   -69,   -92,   -93,   290,   219,   220,   303,
     110,   272,   189,   -88,   -17,   -89,   -68,   -88,   -17,   -89,
     318,   -90,   -92,   -93,   386,   280,   320,   204,   377,   193,
     227,   193,   193,   193,   -68,   -47,   -90,   351,   323,   337,
     -90,   -68,   -68,   -68,   -18,   294,   189,   410,   -18,   321,
     -47,   227,   227,   227,   227,   227,   227,   341,   -91,   240,
     193,   204,   394,   193,   381,   343,   344,   204,   204,   -70,
     310,   -19,   -73,   -91,   149,   -19,   325,   -91,   -86,   -20,
     238,   326,   257,   416,   327,   303,   -49,   -70,   382,   280,
     -73,   351,   193,   -86,   -70,   -70,   -70,   -73,   -73,   -73,
     394,   -49,   257,   257,   242,   -49,   -45,   189,   223,   -74,
     -87,   112,   113,   303,   -20,   347,   -92,   328,   -20,   -48,
     227,  -105,   -93,   -48,   361,   -87,   394,   -74,   212,   223,
     223,   370,   204,   394,   -74,   -74,   -74,   238,   374,   -75,
     362,   189,   227,   324,   351,   351,   351,   351,   -45,   363,
     364,   193,   204,   112,   113,   204,   204,   -75,   379,   -49,
     192,   351,   -21,   -45,   -75,   -75,   -75,   -16,   329,   385,
     189,   -16,   -92,    47,    48,    49,   -93,   179,   -85,   -21,
     180,   -76,   181,   -21,   -99,   182,   238,   -92,   164,   238,
     204,   -93,   179,   -85,   192,   183,   383,   212,   398,   -76,
     192,   192,   184,   185,   186,   213,   -76,   -76,   -76,   337,
     183,   384,   360,   226,   204,   380,   392,   268,   185,   186,
     223,   -46,   411,   217,   -79,   -88,   188,   341,   -80,   189,
     290,   219,   220,   157,   381,   343,   344,   -81,   -53,   418,
     -88,   -82,   -89,   -53,   -53,   115,   116,   117,   118,   119,
     120,   204,   238,   204,   204,   204,   -53,   -89,   -83,   359,
     188,   -84,   397,   401,   -86,   192,   137,   137,   -90,   -91,
     226,   -49,   212,   238,   238,   238,   238,   238,   238,   222,
     -87,   403,   204,   -90,   -91,   204,   -49,   -48,   192,   192,
     336,   212,   405,   191,   212,    47,    48,    49,   404,   337,
     212,   406,   338,   409,   339,   417,   399,   340,   -88,   402,
     359,    54,   -89,   359,   204,   420,   -90,   341,    96,    57,
      58,   183,   226,   192,   342,   343,   344,   191,   268,   185,
     186,   188,   217,   191,   191,   -91,   222,   -85,    14,   290,
     219,   220,   238,    30,   365,    41,   225,   192,   140,    47,
      48,    49,     0,   213,     0,   188,   214,     0,   215,     0,
       0,   216,     0,   156,   238,     0,   359,   359,   359,   359,
       1,   217,     0,   204,    -8,    -8,     2,     3,   218,   219,
     220,    -8,    -8,   359,   192,   226,   192,   192,   335,   188,
       0,     0,   350,   341,     0,     0,     0,     0,   191,   190,
     381,   343,   344,   225,     0,     0,   226,   226,   226,   226,
     226,   373,     0,     0,     0,   192,     0,     0,   192,   -53,
       0,   191,   191,     0,   -53,   -53,   115,   116,   117,   118,
     119,   120,     0,   190,   -53,     0,    -2,     1,   -53,   190,
     190,     0,   194,     2,     3,     0,   350,   192,     0,     0,
     188,   222,   224,    -4,    -4,   225,   191,     0,   346,     0,
      -4,    -4,    -5,    -5,     0,     0,   155,     0,     0,    -5,
      -5,     0,   222,   222,     0,   226,   194,     0,     0,     0,
     191,   -53,   138,   138,   188,     0,   -53,   -53,   115,   116,
     117,   118,   119,   120,     0,   228,   -53,   226,     0,   350,
     350,   350,   414,     0,   190,     0,   192,    -6,    -6,   224,
       0,     0,     0,   188,    -6,    -6,   350,   191,   225,   191,
     334,   -65,   -65,   -65,   -65,   349,   -65,   190,   190,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   225,
     225,   225,   225,   372,   -65,     0,     0,   194,   191,     0,
     195,   191,   228,   196,     0,     0,     0,    -7,    -7,    -3,
      -3,   224,   190,   222,    -7,    -7,    -3,    -3,    -9,    -9,
       0,   194,   188,     0,     0,    -9,    -9,     0,     0,   349,
     191,     0,     0,     0,   195,     0,   190,   196,   197,     0,
     195,   195,     0,   196,   196,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   229,   -64,   194,   230,     0,   225,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   279,   -64,
       0,     0,   197,   190,   224,   333,     0,     0,   197,   197,
     225,   348,   349,   349,   413,   -10,   -10,     0,     0,   191,
       0,   231,   -10,   -10,     0,   224,   224,   224,   371,   349,
       0,     0,     0,     0,   190,   195,     0,   190,   196,     0,
     229,   -13,   -13,   230,     0,     0,   194,   228,   -13,   -13,
     -14,   -14,     0,     0,   352,     0,     0,   -14,   -14,   195,
       0,   198,   196,     0,     0,   348,   190,     0,   228,   228,
       0,   122,   123,   197,     0,     0,   -55,     0,   231,     0,
     194,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,
       0,   -55,     0,   195,   224,   198,   196,   197,   199,     0,
     200,   198,   198,   -11,   -11,   -12,   -12,     0,     0,   194,
     -11,   -11,   -12,   -12,   232,     0,   224,     0,   348,   412,
     -25,   -25,     0,     0,     0,   190,     0,   -25,   -25,     0,
       0,   197,   199,     0,   200,   348,     0,   -50,   199,   199,
     200,   200,   -50,   -50,   115,   116,   117,   118,   119,   120,
       0,   233,   -50,   234,   195,   229,   -50,   196,   230,   228,
       0,     0,   353,     0,     0,   354,   198,     0,   194,     0,
       0,   232,     0,     0,     0,     0,   229,   229,     0,   230,
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
      46,     5,    71,   173,     9,   279,   190,    22,    89,   261,
      20,    21,    20,    21,    29,    63,     9,    63,    33,   191,
      63,   158,     9,    38,    34,     0,    34,   301,   158,    23,
       9,     9,   158,    44,    23,    38,     7,     8,    39,    44,
     224,    89,    39,    89,    38,    46,    94,    95,    94,    95,
     131,    44,    41,   225,    19,    54,    23,    44,   106,   107,
     106,   107,    63,    23,   316,    44,    44,    38,     7,     8,
       0,    23,    37,    41,    41,     5,   246,   158,    38,    44,
      45,    46,    42,   131,    41,   131,    38,    23,    89,    88,
      20,    21,    23,    94,    95,    94,    95,    28,    29,    38,
       7,     8,    38,    38,    34,   106,   107,    19,   107,    37,
     158,    19,   158,    23,    37,   158,   164,   391,   164,    27,
      23,   169,   170,   169,   170,    37,   169,   170,    44,    37,
     131,    41,    44,    45,    46,    38,    44,    45,    46,    42,
      23,    23,    37,   158,    37,    28,    29,    37,   158,   333,
     158,    23,   158,   222,   158,    38,    38,   158,    23,    42,
     159,    40,   334,   164,   348,   164,    38,    19,   169,   170,
      42,    44,    23,    44,    10,    27,    41,   349,    37,    15,
      16,    17,    41,    19,   183,    37,    22,   371,    24,    23,
      41,    27,    44,    45,    46,    41,    19,   245,    23,   245,
     372,    37,    23,    41,    27,    23,    23,    41,    44,    45,
      46,    23,    44,   261,    37,   261,    41,    38,   217,    23,
      38,    44,    45,    46,    42,    23,    38,    23,   412,    23,
      42,   279,   313,   279,    28,    29,    23,    41,   286,    44,
     286,   413,    38,    41,   245,    23,    42,    41,    23,    46,
      10,    38,   300,   301,   300,   301,    23,    54,    44,    23,
     261,    23,   399,    41,    10,   313,    41,   313,   316,   399,
     316,    38,    44,   399,    38,    42,    38,   346,   279,   278,
     279,    23,   419,   420,    38,   286,    38,   286,    23,   419,
     420,    88,    89,   419,   420,   376,    38,    94,    95,   300,
     301,   300,   301,    38,    23,    23,    19,    42,    23,   106,
     107,    23,   313,   312,    27,   316,    38,    38,   399,    38,
      38,    50,    19,    42,    37,    54,    41,    38,   376,    41,
     376,    44,    45,    46,   131,    23,    38,    23,   419,   420,
      37,    41,   341,   391,    23,   391,    41,    44,    45,    46,
      38,   399,    23,   399,    42,    41,   399,    41,    41,    88,
      41,   158,   159,    41,    23,    94,    95,   164,    41,    23,
      41,   419,   420,   419,   420,   376,   419,   420,   107,    38,
      44,    19,    23,    42,   399,    37,   183,    41,    44,   399,
     391,   399,   391,   399,    41,   399,    41,    23,   399,    37,
      41,   400,    53,    54,   419,   420,    44,    45,    46,   419,
     420,   419,   420,   419,   420,   419,   420,    23,   419,   420,
     217,    23,    41,    23,   189,    41,    23,    44,    23,    23,
     159,    23,    38,    23,    23,   164,    42,    88,    38,    41,
      23,    38,    42,    94,    95,    42,    41,    41,   245,    41,
     179,    41,    41,   182,   183,    38,   107,    44,   223,    42,
       7,     8,    44,   114,    11,    12,    13,    14,    15,    16,
      17,    23,    19,    41,    37,    22,    23,    24,    41,    38,
      27,   278,   279,    42,   213,    23,    38,   216,   217,   286,
      37,    23,    39,    40,    41,    41,    19,    44,    45,    46,
      38,    19,   153,   300,   301,    44,    38,   272,   159,    27,
      42,    37,   241,   164,    37,   312,   313,    41,    23,    37,
      23,    44,    45,    46,    23,    23,    44,    45,    46,   294,
      23,   182,   183,    38,    38,    38,    19,    42,    42,    42,
      41,    23,    41,    41,   341,   310,    41,    54,    41,   278,
     279,   280,   281,   282,    37,    23,    38,   286,    44,    19,
      42,    44,    45,    46,    38,   216,   217,    27,    42,    41,
      38,   300,   301,   302,   303,   304,   305,    37,    23,   376,
     309,    88,   347,   312,    44,    45,    46,    94,    95,    19,
     241,    38,    19,    38,   391,    42,    44,    42,    23,    41,
     107,    44,   399,   400,    10,   370,    23,    37,   337,   374,
      37,   340,   341,    38,    44,    45,    46,    44,    45,    46,
     385,    38,   419,   420,    23,    42,    23,   278,   279,    19,
      23,    28,    29,   398,    38,   286,    23,    10,    42,    38,
     369,    38,    23,    42,    44,    38,   411,    37,    23,   300,
     301,   302,   159,   418,    44,    45,    46,   164,   309,    19,
      44,   312,   391,    38,   393,   394,   395,   396,    23,    10,
      10,   400,   179,    28,    29,   182,   183,    37,    40,    23,
      54,   410,    41,    38,    44,    45,    46,    38,    10,   340,
     341,    42,    23,    15,    16,    17,    23,    19,    23,    38,
      22,    19,    24,    42,    38,    27,   213,    38,    42,   216,
     217,    38,    19,    38,    88,    37,    44,    23,   369,    37,
      94,    95,    44,    45,    46,    19,    44,    45,    46,    19,
      37,    44,    38,   107,   241,    38,    23,    44,    45,    46,
     391,    23,   393,    37,    23,    23,    54,    37,    23,   400,
      44,    45,    46,   127,    44,    45,    46,    23,    23,   410,
      38,    23,    23,    28,    29,    30,    31,    32,    33,    34,
      35,   278,   279,   280,   281,   282,    41,    38,    23,   286,
      88,    23,    38,    40,    23,   159,    94,    95,    23,    23,
     164,    23,    23,   300,   301,   302,   303,   304,   305,   107,
      23,    44,   309,    38,    38,   312,    38,    38,   182,   183,
      10,    23,    10,    54,    23,    15,    16,    17,    44,    19,
      23,    10,    22,    44,    24,    38,    38,    27,    23,    38,
     337,    37,    23,   340,   341,    38,    23,    37,    44,    45,
      46,    37,   216,   217,    44,    45,    46,    88,    44,    45,
      46,   159,    37,    94,    95,    23,   164,    23,     5,    44,
      45,    46,   369,    21,    10,    34,   107,   241,    95,    15,
      16,    17,    -1,    19,    -1,   183,    22,    -1,    24,    -1,
      -1,    27,    -1,   124,   391,    -1,   393,   394,   395,   396,
       1,    37,    -1,   400,     0,     1,     7,     8,    44,    45,
      46,     7,     8,   410,   278,   279,   280,   281,   282,   217,
      -1,    -1,   286,    37,    -1,    -1,    -1,    -1,   159,    54,
      44,    45,    46,   164,    -1,    -1,   300,   301,   302,   303,
     304,   305,    -1,    -1,    -1,   309,    -1,    -1,   312,    23,
      -1,   182,   183,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    88,    38,    -1,     0,     1,    42,    94,
      95,    -1,    54,     7,     8,    -1,   340,   341,    -1,    -1,
     278,   279,   107,     0,     1,   216,   217,    -1,   286,    -1,
       7,     8,     0,     1,    -1,    -1,   121,    -1,    -1,     7,
       8,    -1,   300,   301,    -1,   369,    88,    -1,    -1,    -1,
     241,    23,    94,    95,   312,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   107,    38,   391,    -1,   393,
     394,   395,   396,    -1,   159,    -1,   400,     0,     1,   164,
      -1,    -1,    -1,   341,     7,     8,   410,   278,   279,   280,
     281,    18,    19,    20,    21,   286,    23,   182,   183,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,   300,
     301,   302,   303,   304,    41,    -1,    -1,   159,   309,    -1,
      54,   312,   164,    54,    -1,    -1,    -1,     0,     1,     0,
       1,   216,   217,   391,     7,     8,     7,     8,     0,     1,
      -1,   183,   400,    -1,    -1,     7,     8,    -1,    -1,   340,
     341,    -1,    -1,    -1,    88,    -1,   241,    88,    54,    -1,
      94,    95,    -1,    94,    95,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,   107,    23,   217,   107,    -1,   369,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    88,   278,   279,   280,    -1,    -1,    94,    95,
     391,   286,   393,   394,   395,     0,     1,    -1,    -1,   400,
      -1,   107,     7,     8,    -1,   300,   301,   302,   303,   410,
      -1,    -1,    -1,    -1,   309,   159,    -1,   312,   159,    -1,
     164,     0,     1,   164,    -1,    -1,   278,   279,     7,     8,
       0,     1,    -1,    -1,   286,    -1,    -1,     7,     8,   183,
      -1,    54,   183,    -1,    -1,   340,   341,    -1,   300,   301,
      -1,    18,    19,   159,    -1,    -1,    23,    -1,   164,    -1,
     312,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    -1,   217,   369,    88,   217,   183,    54,    -1,
      54,    94,    95,     0,     1,     0,     1,    -1,    -1,   341,
       7,     8,     7,     8,   107,    -1,   391,    -1,   393,   394,
       0,     1,    -1,    -1,    -1,   400,    -1,     7,     8,    -1,
      -1,   217,    88,    -1,    88,   410,    -1,    23,    94,    95,
      94,    95,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   107,    38,   107,   278,   279,    42,   278,   279,   391,
      -1,    -1,   286,    -1,    -1,   286,   159,    -1,   400,    -1,
      -1,   164,    -1,    -1,    -1,    -1,   300,   301,    -1,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
     183,   312,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,
     286,    -1,    -1,   159,    -1,   159,    -1,    -1,   164,    -1,
     164,    -1,    -1,    -1,   300,   301,    -1,   341,    -1,    -1,
     341,    -1,    -1,    -1,   217,    -1,   312,   183,    -1,   183,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    11,    -1,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    22,
      -1,    24,    -1,    -1,    27,   341,    -1,    -1,    -1,    -1,
      -1,   217,    -1,   217,    37,    -1,    39,   391,    41,    -1,
     391,    44,    45,    46,    -1,    -1,   400,    -1,    -1,   400,
      15,    16,    17,    -1,    19,   278,   279,    22,    -1,    24,
      -1,    -1,    27,   286,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,   391,    -1,   300,   301,    44,
      45,    46,    47,    48,   400,    -1,    -1,    -1,    -1,   312,
      -1,    -1,   278,   279,   278,   279,    18,    19,    20,    21,
     286,    23,   286,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,   300,   301,   300,   301,   341,    41,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,   312,    -1,
      -1,    -1,     7,     8,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    22,    23,    24,
      -1,    -1,    27,    -1,    -1,   341,    -1,   341,    -1,    -1,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,   391,    44,
      45,    46,     7,     8,    -1,    -1,    11,   400,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    22,    -1,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,   391,    41,   391,    -1,    44,
      45,    46,    -1,    -1,   400,    -1,   400,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    46,     7,     8,    -1,
      -1,    11,    -1,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    15,    16,    17,    -1,    19,    -1,    37,    22,    39,
      24,    41,    -1,    27,    44,    45,    46,    15,    16,    17,
      -1,    19,    -1,    37,    22,    -1,    24,    41,    -1,    27,
      44,    45,    46,    15,    16,    17,    -1,    19,    -1,    37,
      22,    -1,    24,    41,    -1,    27,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    15,    16,    17,    -1,    19,    -1,    37,    22,    -1,
      24,    41,    -1,    27,    44,    45,    46,    15,    16,    17,
      -1,    19,    -1,    37,    22,    -1,    24,    41,    -1,    27,
      44,    45,    46,    15,    16,    17,    -1,    19,    -1,    37,
      22,    -1,    24,    41,    -1,    27,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    15,    16,    17,    -1,    19,    -1,    37,    22,    -1,
      24,    41,    -1,    27,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    15,    16,    17,    -1,    19,    -1,    -1,
      22,    -1,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    15,
      16,    17,    -1,    19,    -1,    -1,    22,    37,    24,    -1,
      -1,    27,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    15,    16,    17,    -1,    19,    -1,    -1,    22,    -1,
      24,    -1,    -1,    27,    -1,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    37,    24,    -1,    -1,    27,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    18,    19,    20,
      21,    -1,    23,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    42,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      18,    19,    38,    -1,    -1,    23,    42,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    18,    19,
      38,    -1,    -1,    23,    42,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    18,    19,    20,    21,    -1,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    -1,    -1,    -1,
      41,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      18,    19,    20,    21,    41,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    18,
      19,    20,    21,    41,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    18,    19,
      20,    21,    41,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    18,    19,    20,
      21,    41,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    18,    19,    20,    21,
      41,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    18,    19,    20,    21,    41,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    18,    19,    20,    21,    41,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    18,    19,    20,    21,    41,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    18,    19,    20,    21,    41,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    18,    19,    -1,    -1,    41,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      18,    19,    -1,    -1,    41,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    18,
      19,    20,    21,    41,    23,    -1,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      18,    19,    20,    21,    -1,    23,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    38,    18,    19,    20,    21,    -1,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    38,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    18,    19,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    38,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    38,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    38,
      18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      18,    19,    38,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    18,    19,    20,    21,    -1,    23,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      37,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    38,    23,    -1,    -1,    42,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    23,    -1,    -1,    42,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    23,    -1,    -1,    -1,    41,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    23,
      -1,    -1,    -1,    41,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    18,    19,    20,    21,    41,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    18,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    18,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    -1,
      38,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    -1,    38,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    -1,    38,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,     8,    50,    51,    52,    53,    54,    55,
      59,    60,    61,     0,    52,    41,    41,     9,    44,    44,
      37,    37,    38,    56,    57,    58,    59,    60,    61,    38,
      56,    39,    62,    38,    42,     9,    44,    62,    38,    63,
      62,    58,    44,    62,    11,    13,    14,    15,    16,    17,
      19,    22,    24,    27,    37,    41,    44,    45,    46,    53,
      54,    62,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    37,    37,
      41,    71,    90,    37,    37,    37,    44,    78,    44,    44,
      74,    71,    25,    26,    30,    31,    36,    37,    40,    66,
      23,    41,    28,    29,    82,    30,    31,    32,    33,    34,
      35,    79,    18,    19,    80,    20,    21,    81,    41,    41,
      71,    69,    41,    44,    47,    48,    71,    73,    83,    96,
      96,    38,    44,    44,    10,    10,    10,    71,    38,    71,
      94,    95,    44,    27,    74,    75,    76,    77,    38,    69,
      38,    38,    38,    38,    42,    74,    66,    71,    71,    12,
      38,    66,    66,    39,    59,    60,    61,    91,    92,    19,
      22,    24,    27,    37,    44,    45,    46,    72,    73,    74,
      75,    76,    77,    78,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    41,    71,    44,    72,    90,
      91,    92,    23,    19,    22,    24,    27,    37,    44,    45,
      46,    72,    73,    74,    75,    76,    77,    78,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    41,
      71,    82,    23,    11,    13,    14,    39,    41,    53,    54,
      59,    60,    62,    67,    68,    69,    70,    71,    90,    91,
      92,    63,    41,    41,     9,    44,    41,    41,    44,    78,
      44,    44,    74,    71,    25,    26,    30,    31,    36,    37,
      79,    80,    81,    41,    41,    41,    36,    41,    41,    44,
      44,    78,    44,    44,    74,    71,    25,    26,    30,    31,
      36,    37,    82,    79,    80,    81,    41,    41,    41,    27,
      74,    44,    37,    37,    41,    71,    63,    41,    41,    41,
      41,    41,    64,    44,    38,    44,    44,    10,    10,    10,
      71,    38,    94,    75,    76,    77,    10,    19,    22,    24,
      27,    37,    44,    45,    46,    71,    73,    74,    75,    76,
      77,    78,    83,    84,    85,    86,    87,    88,    89,    93,
      38,    44,    44,    10,    10,    10,    71,    38,    94,    27,
      74,    75,    76,    77,    74,    71,    69,    41,    64,    40,
      38,    44,    78,    44,    44,    74,    71,    25,    26,    30,
      31,    37,    23,    82,    79,    80,    81,    38,    74,    38,
      69,    40,    38,    44,    44,    10,    10,    38,    94,    44,
      27,    74,    75,    76,    77,    66,    71,    38,    74,    12,
      38,    66,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    52,    53,
      54,    55,    55,    55,    55,    56,    57,    57,    58,    58,
      59,    60,    61,    61,    63,    62,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    68,
      69,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    83,    83,    83,    83,    84,    85,    86,    87,    88,
      89,    89,    90,    90,    91,    92,    92,    93,    93,    94,
      95,    95,    96,    96,    96,    96
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
#line 135 "src/sintatic.y"
                      {
 (yyval.element) = create_element(PROGRAM, NULL, NULL, NULL, (yyvsp[0].element));
 tree = (yyval.element);
}
#line 2736 "sintatic.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 140 "src/sintatic.y"
                                       {
  (yyval.element) = create_element(DECLARATIONS, NULL, NULL, NULL, (yyvsp[-1].element));
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);

}
#line 2746 "sintatic.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 144 "src/sintatic.y"
                {
  (yyval.element) = (yyvsp[0].element);
}
#line 2754 "sintatic.tab.c"
    break;

  case 5: /* declaration: variable_declaration  */
#line 148 "src/sintatic.y"
                                  {
  (yyval.element) = (yyvsp[0].element);
}
#line 2762 "sintatic.tab.c"
    break;

  case 6: /* declaration: list_declaration  */
#line 150 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 2770 "sintatic.tab.c"
    break;

  case 7: /* declaration: function_declaration  */
#line 152 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 2778 "sintatic.tab.c"
    break;

  case 8: /* declaration: error  */
#line 154 "src/sintatic.y"
          {
  yyerrok;
  (yyval.element) = NULL;
}
#line 2787 "sintatic.tab.c"
    break;

  case 9: /* variable_declaration: variable_simple_declaration SEMI  */
#line 159 "src/sintatic.y"
                                                       {
  (yyval.element) = (yyvsp[-1].element);
}
#line 2795 "sintatic.tab.c"
    break;

  case 10: /* list_declaration: list_simple_declaration SEMI  */
#line 163 "src/sintatic.y"
                                               {
  (yyval.element) = (yyvsp[-1].element);
}
#line 2803 "sintatic.tab.c"
    break;

  case 11: /* function_declaration: type_specifier ID L_PAREN parameters R_PAREN compound_statement  */
#line 168 "src/sintatic.y"
                                                                  {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-5].element)->type, (yyvsp[-4].name), NULL, (yyvsp[-2].element));
    (yyvsp[-2].element)->next_left = (yyvsp[0].element);
    insert_symbol(table, (yyvsp[-4].name), (yyvsp[-5].element)->type, "function", lineno);
}
#line 2813 "sintatic.tab.c"
    break;

  case 12: /* function_declaration: type_specifier LIST ID L_PAREN parameters R_PAREN compound_statement  */
#line 173 "src/sintatic.y"
                                                                       {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-5].name), (yyvsp[-4].name), NULL, (yyvsp[-2].element));
    (yyvsp[-2].element)->next_left = (yyvsp[0].element);
    insert_symbol(table, (yyvsp[-4].name), (yyvsp[-5].name), "function", lineno);
}
#line 2823 "sintatic.tab.c"
    break;

  case 13: /* function_declaration: type_specifier ID L_PAREN R_PAREN compound_statement  */
#line 178 "src/sintatic.y"
                                                       {
    (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-4].element)->type, (yyvsp[-3].name), NULL, NULL);
    insert_symbol(table, (yyvsp[-3].name), (yyvsp[-4].element)->type, "function", lineno);
}
#line 2832 "sintatic.tab.c"
    break;

  case 14: /* function_declaration: type_specifier LIST ID L_PAREN R_PAREN compound_statement  */
#line 182 "src/sintatic.y"
                                                            {
   (yyval.element) = create_element(FUNCTION_DECLARATION, (yyvsp[-4].name), (yyvsp[-3].name), NULL, NULL);
   insert_symbol(table, (yyvsp[-3].name), (yyvsp[-4].name), "function", lineno);
}
#line 2841 "sintatic.tab.c"
    break;

  case 15: /* parameters: list_paremeters  */
#line 187 "src/sintatic.y"
                            {
  (yyval.element) = (yyvsp[0].element);
}
#line 2849 "sintatic.tab.c"
    break;

  case 16: /* list_paremeters: list_paremeters COMMA parameter  */
#line 191 "src/sintatic.y"
                                                 {
  (yyval.element) = create_element(LIST_PARAMETERS, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_right = (yyvsp[0].element);
}
#line 2858 "sintatic.tab.c"
    break;

  case 17: /* list_paremeters: parameter  */
#line 194 "src/sintatic.y"
              {
  (yyval.element) = (yyvsp[0].element);
}
#line 2866 "sintatic.tab.c"
    break;

  case 18: /* parameter: variable_simple_declaration  */
#line 198 "src/sintatic.y"
                                       {
  (yyval.element) = (yyvsp[0].element);
}
#line 2874 "sintatic.tab.c"
    break;

  case 19: /* parameter: list_simple_declaration  */
#line 200 "src/sintatic.y"
                            {
  (yyval.element) = (yyvsp[0].element);
}
#line 2882 "sintatic.tab.c"
    break;

  case 20: /* variable_simple_declaration: type_specifier ID  */
#line 204 "src/sintatic.y"
                                               {
  (yyval.element) = create_element(VARIABLE_SIMPLE_DECLARATION, (yyvsp[-1].element)->type, (yyvsp[0].name), NULL, NULL);
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].element)->type, "variable", lineno);
}
#line 2891 "sintatic.tab.c"
    break;

  case 21: /* list_simple_declaration: type_specifier LIST ID  */
#line 209 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(LIST_SIMPLE_DECLARATION, (yyvsp[-1].name), (yyvsp[0].name), NULL, NULL);
  insert_symbol(table, (yyvsp[0].name), (yyvsp[-1].name), "variable", lineno);
}
#line 2900 "sintatic.tab.c"
    break;

  case 22: /* type_specifier: INT  */
#line 214 "src/sintatic.y"
                    {
  (yyval.element) = create_element(TYPE_SPECIFIER, (yyvsp[0].name), NULL, NULL, NULL);
}
#line 2908 "sintatic.tab.c"
    break;

  case 23: /* type_specifier: FLOAT  */
#line 216 "src/sintatic.y"
          {
  (yyval.element) = create_element(TYPE_SPECIFIER, (yyvsp[0].name), NULL, NULL, NULL);
}
#line 2916 "sintatic.tab.c"
    break;

  case 24: /* $@1: %empty  */
#line 222 "src/sintatic.y"
    {
     present_scope+=1;
    }
#line 2924 "sintatic.tab.c"
    break;

  case 25: /* compound_statement: L_BRACK $@1 local_declarations R_BRACK  */
#line 225 "src/sintatic.y"
                                 {
       (yyval.element) = create_element(COMPOUND_STATEMENT, NULL, NULL, NULL, (yyvsp[-1].element));
       present_scope--;
      }
#line 2933 "sintatic.tab.c"
    break;

  case 26: /* local_declarations: list_statements  */
#line 230 "src/sintatic.y"
                                    {
 (yyval.element) = (yyvsp[0].element);
}
#line 2941 "sintatic.tab.c"
    break;

  case 27: /* list_statements: list_statements statement  */
#line 234 "src/sintatic.y"
                                           {
 (yyval.element) = create_element(LIST_STATEMENTS, NULL, NULL, NULL, (yyvsp[-1].element));
 (yyvsp[-1].element)->next_left = (yyvsp[0].element); 
}
#line 2950 "sintatic.tab.c"
    break;

  case 28: /* list_statements: statement  */
#line 237 "src/sintatic.y"
              {
 (yyval.element) = (yyvsp[0].element);
}
#line 2958 "sintatic.tab.c"
    break;

  case 29: /* statement: expression_statement  */
#line 241 "src/sintatic.y"
                                {
  (yyval.element) = (yyvsp[0].element);
}
#line 2966 "sintatic.tab.c"
    break;

  case 30: /* statement: compound_statement  */
#line 243 "src/sintatic.y"
                       {
  (yyval.element) = (yyvsp[0].element);
}
#line 2974 "sintatic.tab.c"
    break;

  case 31: /* statement: conditional_statement  */
#line 245 "src/sintatic.y"
                          {
  (yyval.element) = (yyvsp[0].element);
}
#line 2982 "sintatic.tab.c"
    break;

  case 32: /* statement: iteration_statement  */
#line 247 "src/sintatic.y"
                        {
  (yyval.element) = (yyvsp[0].element);
}
#line 2990 "sintatic.tab.c"
    break;

  case 33: /* statement: return_statement  */
#line 249 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 2998 "sintatic.tab.c"
    break;

  case 34: /* statement: variable_declaration  */
#line 251 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 3006 "sintatic.tab.c"
    break;

  case 35: /* statement: list_declaration  */
#line 253 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 3014 "sintatic.tab.c"
    break;

  case 36: /* statement: in_out_expression  */
#line 255 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3022 "sintatic.tab.c"
    break;

  case 37: /* conditional_statement: IF L_PAREN expression R_PAREN statement  */
#line 259 "src/sintatic.y"
                                                                          {
  (yyval.element) = create_element(CONDITIONAL_STATEMENT, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3031 "sintatic.tab.c"
    break;

  case 38: /* conditional_statement: IF L_PAREN expression R_PAREN statement ELSE statement  */
#line 262 "src/sintatic.y"
                                                           {
  (yyval.element) = create_element(CONDITIONAL_STATEMENT, NULL, NULL, NULL, (yyvsp[-4].element));
  (yyvsp[-4].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3041 "sintatic.tab.c"
    break;

  case 39: /* iteration_statement: FOR L_PAREN expression_statement expression_statement expression R_PAREN statement  */
#line 268 "src/sintatic.y"
                                                                                                        {
  (yyval.element) = create_element(ITERATION_STATEMENT, NULL, NULL, NULL, (yyvsp[-4].element));
  (yyvsp[-4].element)->next_left = (yyvsp[-3].element);
  (yyvsp[-3].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[0].element);
}
#line 3052 "sintatic.tab.c"
    break;

  case 40: /* expression_statement: expression SEMI  */
#line 275 "src/sintatic.y"
                                      {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3060 "sintatic.tab.c"
    break;

  case 41: /* expression_statement: SEMI  */
#line 277 "src/sintatic.y"
         {
  (yyval.element) = NULL;
}
#line 3068 "sintatic.tab.c"
    break;

  case 42: /* return_statement: RETURN expression SEMI  */
#line 281 "src/sintatic.y"
                                         {
  (yyval.element) = create_element(RETURN_STATEMENT, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3076 "sintatic.tab.c"
    break;

  case 43: /* return_statement: RETURN SEMI  */
#line 283 "src/sintatic.y"
                {
  (yyval.element) = create_element(RETURN_STATEMENT, NULL, NULL, NULL, NULL);
}
#line 3084 "sintatic.tab.c"
    break;

  case 44: /* expression: assign_expression  */
#line 287 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3092 "sintatic.tab.c"
    break;

  case 45: /* expression: simple_expression  */
#line 289 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3100 "sintatic.tab.c"
    break;

  case 46: /* expression: list_expression  */
#line 291 "src/sintatic.y"
                    {
  (yyval.element) = (yyvsp[0].element);
}
#line 3108 "sintatic.tab.c"
    break;

  case 47: /* expression: in_out_expression  */
#line 293 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3116 "sintatic.tab.c"
    break;

  case 48: /* assign_expression: ID ASSIGN_OP expression  */
#line 297 "src/sintatic.y"
                                           {
  (yyval.element) = create_element(ASSIGN_EXPRESSION, NULL, (yyvsp[-1].name), NULL, (yyvsp[0].element));
}
#line 3124 "sintatic.tab.c"
    break;

  case 49: /* assign_expression: ID ASSIGN_OP NIL  */
#line 299 "src/sintatic.y"
                     {
  (yyval.element) = create_element(ASSIGN_EXPRESSION, NULL, (yyvsp[-1].name), NULL, NULL);
}
#line 3132 "sintatic.tab.c"
    break;

  case 50: /* simple_expression: EXC_OP relational_expression  */
#line 303 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].element));
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3141 "sintatic.tab.c"
    break;

  case 51: /* simple_expression: simple_expression binary_logic_op relational_expression  */
#line 306 "src/sintatic.y"
                                                            {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3151 "sintatic.tab.c"
    break;

  case 52: /* simple_expression: simple_expression binary_logic_op EXC_OP relational_expression  */
#line 310 "src/sintatic.y"
                                                                   {
  (yyval.element) = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].element));
  (yyvsp[-3].element)->next_left = (yyvsp[-2].element);
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[0].element)->next_left = (yyvsp[0].element);
}
#line 3162 "sintatic.tab.c"
    break;

  case 53: /* simple_expression: relational_expression  */
#line 315 "src/sintatic.y"
                          {
  (yyval.element) = (yyvsp[0].element);
}
#line 3170 "sintatic.tab.c"
    break;

  case 54: /* relational_expression: relational_expression relational_op arithmetic_add_expression  */
#line 319 "src/sintatic.y"
                                                                                     {
  (yyval.element) = create_element(RELATIONAL_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3180 "sintatic.tab.c"
    break;

  case 55: /* relational_expression: arithmetic_add_expression  */
#line 323 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3188 "sintatic.tab.c"
    break;

  case 56: /* arithmetic_add_expression: arithmetic_add_expression arithmetic_add_op arithmetic_mul_expression  */
#line 327 "src/sintatic.y"
                                                                                                 {
  (yyval.element) = create_element(ARITHMETIC_ADD_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3198 "sintatic.tab.c"
    break;

  case 57: /* arithmetic_add_expression: arithmetic_mul_expression  */
#line 331 "src/sintatic.y"
                              {
  (yyval.element) = (yyvsp[0].element);
}
#line 3206 "sintatic.tab.c"
    break;

  case 58: /* arithmetic_mul_expression: arithmetic_mul_expression arithmetic_mult_op unary_sub_expression  */
#line 335 "src/sintatic.y"
                                                                                             {
  (yyval.element) = create_element(ARITHMETIC_MUL_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element)->next_left = (yyvsp[-1].element);
  (yyvsp[-1].element)->next_left = (yyvsp[0].element);
}
#line 3216 "sintatic.tab.c"
    break;

  case 59: /* arithmetic_mul_expression: unary_sub_expression  */
#line 339 "src/sintatic.y"
                         {
  (yyval.element) = (yyvsp[0].element);
}
#line 3224 "sintatic.tab.c"
    break;

  case 60: /* unary_sub_expression: SUB_OP factor  */
#line 343 "src/sintatic.y"
                                    {
  (yyval.element) = (yyvsp[0].element);
  (yyval.element) = create_element(UNARY_SUB_EXPRESSION, NULL, (yyvsp[-1].name), NULL, (yyvsp[0].element));
}
#line 3233 "sintatic.tab.c"
    break;

  case 61: /* unary_sub_expression: factor  */
#line 346 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3241 "sintatic.tab.c"
    break;

  case 62: /* factor: L_PAREN expression R_PAREN  */
#line 350 "src/sintatic.y"
                                   {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3249 "sintatic.tab.c"
    break;

  case 63: /* factor: function_call  */
#line 352 "src/sintatic.y"
                {
  (yyval.element) = (yyvsp[0].element);
}
#line 3257 "sintatic.tab.c"
    break;

  case 64: /* factor: ID  */
#line 354 "src/sintatic.y"
       {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3265 "sintatic.tab.c"
    break;

  case 65: /* factor: INT_CONST  */
#line 356 "src/sintatic.y"
              {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3273 "sintatic.tab.c"
    break;

  case 66: /* factor: FLOAT_CONST  */
#line 358 "src/sintatic.y"
                {
  (yyval.element) = create_element(FACTOR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3281 "sintatic.tab.c"
    break;

  case 67: /* relational_op: LST_OP  */
#line 362 "src/sintatic.y"
                      {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3289 "sintatic.tab.c"
    break;

  case 68: /* relational_op: LST_EQ_OP  */
#line 364 "src/sintatic.y"
              {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3297 "sintatic.tab.c"
    break;

  case 69: /* relational_op: GRT_OP  */
#line 366 "src/sintatic.y"
           {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3305 "sintatic.tab.c"
    break;

  case 70: /* relational_op: GRT_EQ_OP  */
#line 368 "src/sintatic.y"
              {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3313 "sintatic.tab.c"
    break;

  case 71: /* relational_op: EQUAL_OP  */
#line 370 "src/sintatic.y"
             {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3321 "sintatic.tab.c"
    break;

  case 72: /* relational_op: DIFF_OP  */
#line 372 "src/sintatic.y"
            {
  (yyval.element) = create_element(RELATIONAL_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3329 "sintatic.tab.c"
    break;

  case 73: /* arithmetic_add_op: SUM_OP  */
#line 376 "src/sintatic.y"
                          {
  (yyval.element) = create_element(ARITHMETIC_ADD_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3337 "sintatic.tab.c"
    break;

  case 74: /* arithmetic_add_op: SUB_OP  */
#line 378 "src/sintatic.y"
           {
  (yyval.element) = create_element(ARITHMETIC_ADD_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3345 "sintatic.tab.c"
    break;

  case 75: /* arithmetic_mult_op: MULT_OP  */
#line 382 "src/sintatic.y"
                            {
  (yyval.element) = create_element(ARITHMETIC_MULT_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3353 "sintatic.tab.c"
    break;

  case 76: /* arithmetic_mult_op: DIV_OP  */
#line 384 "src/sintatic.y"
           {
  (yyval.element) = create_element(ARITHMETIC_MULT_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3361 "sintatic.tab.c"
    break;

  case 77: /* binary_logic_op: OR_OP  */
#line 388 "src/sintatic.y"
                       {
  (yyval.element) = create_element(BINARY_LOGIC_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3369 "sintatic.tab.c"
    break;

  case 78: /* binary_logic_op: AND_OP  */
#line 390 "src/sintatic.y"
           {
  (yyval.element) = create_element(BINARY_LOGIC_OP, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3377 "sintatic.tab.c"
    break;

  case 79: /* list_expression: constructor  */
#line 394 "src/sintatic.y"
                             {
  (yyval.element) = (yyvsp[0].element);
}
#line 3385 "sintatic.tab.c"
    break;

  case 80: /* list_expression: header  */
#line 396 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3393 "sintatic.tab.c"
    break;

  case 81: /* list_expression: tail  */
#line 398 "src/sintatic.y"
         {
  (yyval.element) = (yyvsp[0].element);
}
#line 3401 "sintatic.tab.c"
    break;

  case 82: /* list_expression: map  */
#line 400 "src/sintatic.y"
       {
  (yyval.element) = (yyvsp[0].element);
}
#line 3409 "sintatic.tab.c"
    break;

  case 83: /* list_expression: filter  */
#line 402 "src/sintatic.y"
           {
  (yyval.element) = (yyvsp[0].element);
}
#line 3417 "sintatic.tab.c"
    break;

  case 84: /* list_expression: list_comparation  */
#line 404 "src/sintatic.y"
                     {
  (yyval.element) = (yyvsp[0].element);
}
#line 3425 "sintatic.tab.c"
    break;

  case 85: /* constructor: expression LIST_CONSTRUCTOR ID  */
#line 408 "src/sintatic.y"
                                            {
  (yyval.element) = create_element(CONSTRUCTOR, (yyvsp[-1].name), (yyvsp[0].name), NULL, (yyvsp[-2].element));
}
#line 3433 "sintatic.tab.c"
    break;

  case 86: /* header: LIST_HEADER ID  */
#line 412 "src/sintatic.y"
                       {
  (yyval.element) = create_element(HEADER, (yyvsp[0].name), (yyvsp[-1].name), NULL, NULL);
}
#line 3441 "sintatic.tab.c"
    break;

  case 87: /* tail: LIST_TAIL ID  */
#line 416 "src/sintatic.y"
                   {
  (yyval.element) = create_element(TAIL, (yyvsp[0].name), (yyvsp[-1].name), NULL, NULL);
}
#line 3449 "sintatic.tab.c"
    break;

  case 88: /* map: ID LIST_MAP ID  */
#line 420 "src/sintatic.y"
                    {
  (yyval.element) = create_element(MAP, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3457 "sintatic.tab.c"
    break;

  case 89: /* filter: ID LIST_FILTER ID  */
#line 424 "src/sintatic.y"
                          {
  (yyval.element) = create_element(FILTER, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3465 "sintatic.tab.c"
    break;

  case 90: /* list_comparation: ID EQUAL_OP NIL  */
#line 428 "src/sintatic.y"
                                  {
  (yyval.element) = create_element(LIST_COMPARATION, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3473 "sintatic.tab.c"
    break;

  case 91: /* list_comparation: ID DIFF_OP NIL  */
#line 430 "src/sintatic.y"
                   {
  (yyval.element) = create_element(LIST_COMPARATION, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3481 "sintatic.tab.c"
    break;

  case 92: /* in_out_expression: read SEMI  */
#line 434 "src/sintatic.y"
                             {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3489 "sintatic.tab.c"
    break;

  case 93: /* in_out_expression: write SEMI  */
#line 436 "src/sintatic.y"
               {
  (yyval.element) = (yyvsp[-1].element);
}
#line 3497 "sintatic.tab.c"
    break;

  case 94: /* read: READ L_PAREN ID R_PAREN  */
#line 440 "src/sintatic.y"
                              {
  (yyval.element) = create_element(READ_EXP, NULL, NULL, NULL, NULL);
}
#line 3505 "sintatic.tab.c"
    break;

  case 95: /* write: WRITE L_PAREN var R_PAREN  */
#line 444 "src/sintatic.y"
                                 {
  (yyval.element) = create_element(WRITE_EXP, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3513 "sintatic.tab.c"
    break;

  case 96: /* write: WRITELN L_PAREN var R_PAREN  */
#line 446 "src/sintatic.y"
                                {
  (yyval.element) = create_element(WRITE_EXP, NULL, NULL, NULL, (yyvsp[-1].element));
}
#line 3521 "sintatic.tab.c"
    break;

  case 97: /* function_call: ID L_PAREN arguments R_PAREN  */
#line 450 "src/sintatic.y"
                                            {

}
#line 3529 "sintatic.tab.c"
    break;

  case 98: /* function_call: ID L_PAREN R_PAREN  */
#line 452 "src/sintatic.y"
                       {
  (yyval.element) = create_element(FUNCTION_CALL, (yyvsp[-1].name), (yyvsp[-2].name), NULL, NULL);
}
#line 3537 "sintatic.tab.c"
    break;

  case 99: /* arguments: list_arguments  */
#line 456 "src/sintatic.y"
                          {
 (yyval.element) = (yyvsp[0].element);
}
#line 3545 "sintatic.tab.c"
    break;

  case 100: /* list_arguments: list_arguments COMMA expression  */
#line 460 "src/sintatic.y"
                                                {
  (yyval.element) = create_element(FUNCTION_CALL, NULL, NULL, NULL, (yyvsp[-2].element));
  (yyvsp[-2].element) -> next_left = (yyvsp[0].element);
}
#line 3554 "sintatic.tab.c"
    break;

  case 101: /* list_arguments: expression  */
#line 463 "src/sintatic.y"
               {
  (yyval.element) = (yyvsp[0].element);
}
#line 3562 "sintatic.tab.c"
    break;

  case 102: /* var: STRING  */
#line 467 "src/sintatic.y"
            {
  (yyval.element) = create_element(VAR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3570 "sintatic.tab.c"
    break;

  case 103: /* var: CHAR  */
#line 469 "src/sintatic.y"
         {
  (yyval.element) = create_element(VAR, NULL, (yyvsp[0].name), NULL, NULL);
}
#line 3578 "sintatic.tab.c"
    break;

  case 104: /* var: list_expression  */
#line 471 "src/sintatic.y"
                    {
  (yyval.element) = (yyvsp[0].element);
}
#line 3586 "sintatic.tab.c"
    break;

  case 105: /* var: simple_expression  */
#line 473 "src/sintatic.y"
                      {
  (yyval.element) = (yyvsp[0].element);
}
#line 3594 "sintatic.tab.c"
    break;


#line 3598 "sintatic.tab.c"

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

#line 477 "src/sintatic.y"


extern void yyerror(const char *name) {
  printf("\nyyerror: %s em linha: %d coluna: %d.\n", name, lineno, column);
  sintatic_errors++;
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

  if(sintatic_errors == 0) {
     printf("\n\n\n==================ABSTRACT TREE==================\n\n");
     show_tree(tree, 0);

     show_symbol_table(table);

     free_tree(tree);
     free_symbol_table(table);
  }

  return 0;
}
