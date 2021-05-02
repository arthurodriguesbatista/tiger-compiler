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
#line 1 "src/tiger.y"

#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "symbol.h" 
#include "errormsg.h"
#include "absyn.h"
int yylex(void); /* function prototype */
A_exp absyn_root;

void yyerror(char *s)
{
 EM_error(EM_tokPos, "%s", s);
}

#line 87 "src/y.tab.c"

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

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_COMMA = 6,                      /* COMMA  */
  YYSYMBOL_COLON = 7,                      /* COLON  */
  YYSYMBOL_SEMICOLON = 8,                  /* SEMICOLON  */
  YYSYMBOL_LPAREN = 9,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 10,                    /* RPAREN  */
  YYSYMBOL_LBRACK = 11,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 12,                    /* RBRACK  */
  YYSYMBOL_LBRACE = 13,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 14,                    /* RBRACE  */
  YYSYMBOL_DOT = 15,                       /* DOT  */
  YYSYMBOL_PLUS = 16,                      /* PLUS  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_TIMES = 18,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 19,                    /* DIVIDE  */
  YYSYMBOL_EQ = 20,                        /* EQ  */
  YYSYMBOL_NEQ = 21,                       /* NEQ  */
  YYSYMBOL_LT = 22,                        /* LT  */
  YYSYMBOL_LE = 23,                        /* LE  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_ARRAY = 29,                     /* ARRAY  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_THEN = 31,                      /* THEN  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_WHILE = 33,                     /* WHILE  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_TO = 35,                        /* TO  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_LET = 37,                       /* LET  */
  YYSYMBOL_IN = 38,                        /* IN  */
  YYSYMBOL_END = 39,                       /* END  */
  YYSYMBOL_OF = 40,                        /* OF  */
  YYSYMBOL_BREAK = 41,                     /* BREAK  */
  YYSYMBOL_NIL = 42,                       /* NIL  */
  YYSYMBOL_FUNCTION = 43,                  /* FUNCTION  */
  YYSYMBOL_VAR = 44,                       /* VAR  */
  YYSYMBOL_TYPE = 45,                      /* TYPE  */
  YYSYMBOL_TRUE = 46,                      /* TRUE  */
  YYSYMBOL_FALSE = 47,                     /* FALSE  */
  YYSYMBOL_LPREC = 48,                     /* LPREC  */
  YYSYMBOL_UMINUS = 49,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_exp = 52,                       /* exp  */
  YYSYMBOL_argseq = 53,                    /* argseq  */
  YYSYMBOL_largseq = 54,                   /* largseq  */
  YYSYMBOL_expseq = 55,                    /* expseq  */
  YYSYMBOL_lexpseq = 56,                   /* lexpseq  */
  YYSYMBOL_lvalue = 57,                    /* lvalue  */
  YYSYMBOL_recordfields = 58,              /* recordfields  */
  YYSYMBOL_lrecordfields = 59,             /* lrecordfields  */
  YYSYMBOL_decs = 60,                      /* decs  */
  YYSYMBOL_dec = 61,                       /* dec  */
  YYSYMBOL_tydecs = 62,                    /* tydecs  */
  YYSYMBOL_tydec = 63,                     /* tydec  */
  YYSYMBOL_ty = 64,                        /* ty  */
  YYSYMBOL_tyfields = 65,                  /* tyfields  */
  YYSYMBOL_ltyfields = 66,                 /* ltyfields  */
  YYSYMBOL_tyfield = 67,                   /* tyfield  */
  YYSYMBOL_vardec = 68,                    /* vardec  */
  YYSYMBOL_fundecs = 69,                   /* fundecs  */
  YYSYMBOL_fundec = 70                     /* fundec  */
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   314

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    78,    79,    80,    81,    82,    83,    84,
      85,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    99,   100,   102,   103,   104,   105,   106,   108,
     109,   111,   112,   115,   116,   119,   120,   123,   124,   127,
     128,   131,   132,   133,   134,   137,   138,   141,   142,   146,
     147,   150,   151,   152,   156,   157,   160,   163,   164,   165,
     168,   169,   172,   173,   176,   180,   181,   184,   185,   188,
     189
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "STRING", "INT",
  "COMMA", "COLON", "SEMICOLON", "LPAREN", "RPAREN", "LBRACK", "RBRACK",
  "LBRACE", "RBRACE", "DOT", "PLUS", "MINUS", "TIMES", "DIVIDE", "EQ",
  "NEQ", "LT", "LE", "GT", "GE", "AND", "OR", "ASSIGN", "ARRAY", "IF",
  "THEN", "ELSE", "WHILE", "FOR", "TO", "DO", "LET", "IN", "END", "OF",
  "BREAK", "NIL", "FUNCTION", "VAR", "TYPE", "TRUE", "FALSE", "LPREC",
  "UMINUS", "$accept", "program", "exp", "argseq", "largseq", "expseq",
  "lexpseq", "lvalue", "recordfields", "lrecordfields", "decs", "dec",
  "tydecs", "tydec", "ty", "tyfields", "ltyfields", "tyfield", "vardec",
  "fundecs", "fundec", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
#endif

#define YYPACT_NINF (-22)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      49,     1,   -22,   -22,    49,    49,    49,    49,     6,   -19,
     -22,   -22,   -22,   -22,    13,   256,    -7,    49,    49,    12,
     163,     9,   -22,   212,    51,    -8,    19,    27,    28,    -6,
     -19,   -22,   -12,   -22,   -22,    -9,   -22,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      32,    49,    92,    26,   228,    30,    41,    49,   -22,   -22,
      49,    49,    49,    47,    -5,    39,    49,   -22,   -22,   -22,
      10,    10,   -22,   -22,   279,   279,   279,   279,   279,   279,
     289,   268,   244,   -22,   256,    49,   -22,   -22,    23,    49,
     -22,   163,   195,   256,   175,    61,    62,    49,    -2,    42,
     -22,    92,    49,   130,   -22,    49,    49,    73,    74,    82,
      64,   256,   -22,    61,    53,   -22,   -22,   -22,   256,    91,
     -22,   256,   142,    96,    -4,    61,   -22,    49,    86,    98,
      83,    49,   -22,   101,    49,    82,   256,   -22,   -22,    49,
     256,    87,   256,   -22,   130,    49,   -22,   256
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    41,     9,     6,    37,     0,     0,     0,     0,    49,
      31,     4,     7,     8,     0,     2,     3,    33,     0,    45,
      39,     0,    11,     0,     0,     0,     0,     0,     0,     0,
      49,    51,    54,    52,    53,    67,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,    38,     5,
       0,     0,     0,     0,     0,     0,    37,    50,    55,    68,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    42,    26,     0,    34,    10,    44,     0,
      24,    39,    27,    29,     0,    60,     0,     0,     0,     0,
      43,    35,     0,    47,    40,     0,     0,     0,     0,    62,
       0,    65,    57,    60,     0,    56,    32,    36,    25,     0,
      46,    28,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,    64,     0,     0,    62,    66,    58,    59,     0,
      30,     0,    69,    63,    47,     0,    48,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -22,   -22,     0,   -22,    20,    54,    31,   -22,   -22,   -21,
      94,   -22,    93,   -22,   -22,    15,    -3,     4,   -22,    95,
     -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    14,    20,    53,    86,    21,    58,    16,    56,   120,
      29,    30,    31,    32,   115,   108,   126,   109,    33,    34,
      35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   112,    96,   133,    49,    22,    23,    24,    50,    25,
      17,   113,    18,    36,    19,    55,   134,    52,    54,    59,
      62,    51,    63,    97,    26,    27,    28,   114,    39,    40,
      64,    65,    66,    28,    26,    83,    87,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      89,    84,     1,     2,     3,    90,    95,    91,     4,    98,
      92,    93,    94,   102,   107,   110,     5,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     6,
     123,   116,     7,     8,   124,   101,     9,    61,   125,   103,
      10,    11,   127,   129,   130,    12,    13,   111,    85,   132,
     137,   138,   118,   139,   141,   121,   122,   145,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      99,   117,   104,   146,    67,    68,     0,   136,   128,   135,
      69,   140,   143,     0,   142,     0,   119,     0,     0,   144,
       0,     0,     0,     0,     0,   147,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    57,     0,     0,     0,     0,     0,     0,   131,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,     0,     0,
     106,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,     0,     0,     0,   105,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      88,     0,     0,    60,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   100,     0,     0,     0,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46
};

static const yytype_int16 yycheck[] =
{
       0,     3,     7,     7,    11,     5,     6,     7,    15,     3,
       9,    13,    11,     0,    13,     3,    20,    17,    18,    10,
      28,    28,     3,    28,    43,    44,    45,    29,    18,    19,
       3,     3,    38,    45,    43,     3,    10,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      20,    51,     3,     4,     5,    14,     9,    57,     9,    20,
      60,    61,    62,    40,     3,     3,    17,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    30,
       7,    39,    33,    34,    10,    85,    37,    36,     6,    89,
      41,    42,    28,    40,     3,    46,    47,    97,     6,     3,
      14,     3,   102,    20,     3,   105,   106,    20,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      66,   101,    91,   144,    30,    32,    -1,   127,   113,   125,
      35,   131,   135,    -1,   134,    -1,     6,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,   145,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    36,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      12,    -1,    -1,    31,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    12,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     9,    17,    30,    33,    34,    37,
      41,    42,    46,    47,    51,    52,    57,     9,    11,    13,
      52,    55,    52,    52,    52,     3,    43,    44,    45,    60,
      61,    62,    63,    68,    69,    70,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    11,
      15,    28,    52,    53,    52,     3,    58,     8,    56,    10,
      31,    36,    28,     3,     3,     3,    38,    60,    62,    69,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,     3,    52,     6,    54,    10,    12,    20,
      14,    52,    52,    52,    52,     9,     7,    28,    20,    55,
      12,    52,    40,    52,    56,    32,    35,     3,    65,    67,
       3,    52,     3,    13,    29,    64,    39,    54,    52,     6,
      59,    52,    52,     7,    10,     6,    66,    28,    65,    40,
       3,    36,     3,     7,    20,    67,    52,    14,     3,    20,
      52,     3,    52,    66,    52,    20,    59,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    62,    62,    63,    64,    64,    64,
      65,    65,    66,    66,    67,    68,    68,    69,    69,    70,
      70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     6,     3,     4,     6,     4,
       8,     1,     5,     0,     2,     0,     3,     0,     2,     0,
       3,     1,     3,     4,     4,     0,     4,     0,     5,     0,
       2,     1,     1,     1,     1,     2,     4,     1,     3,     3,
       0,     2,     0,     3,     3,     4,     6,     1,     2,     7,
       9
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
  case 2: /* program: exp  */
#line 75 "src/tiger.y"
                   {absyn_root=(yyvsp[0].exp);}
#line 1283 "src/y.tab.c"
    break;

  case 3: /* exp: lvalue  */
#line 78 "src/tiger.y"
                                          {(yyval.exp)=A_VarExp(EM_tokPos, (yyvsp[0].var));}
#line 1289 "src/y.tab.c"
    break;

  case 4: /* exp: NIL  */
#line 79 "src/tiger.y"
                                          {(yyval.exp)=A_NilExp(EM_tokPos);}
#line 1295 "src/y.tab.c"
    break;

  case 5: /* exp: LPAREN expseq RPAREN  */
#line 80 "src/tiger.y"
                                          {(yyval.exp)=A_SeqExp(EM_tokPos, (yyvsp[-1].expseq));}
#line 1301 "src/y.tab.c"
    break;

  case 6: /* exp: INT  */
#line 81 "src/tiger.y"
                                          {(yyval.exp)=A_IntExp(EM_tokPos, (yyvsp[0].ival));}
#line 1307 "src/y.tab.c"
    break;

  case 7: /* exp: TRUE  */
#line 82 "src/tiger.y"
                                          {(yyval.exp)=A_BoolExp(EM_tokPos, 1);}
#line 1313 "src/y.tab.c"
    break;

  case 8: /* exp: FALSE  */
#line 83 "src/tiger.y"
                                          {(yyval.exp)=A_BoolExp(EM_tokPos, 0);}
#line 1319 "src/y.tab.c"
    break;

  case 9: /* exp: STRING  */
#line 84 "src/tiger.y"
                                          {(yyval.exp)=A_StringExp(EM_tokPos, (yyvsp[0].sval));}
#line 1325 "src/y.tab.c"
    break;

  case 10: /* exp: ID LPAREN argseq RPAREN  */
#line 85 "src/tiger.y"
                                          {(yyval.exp)=A_CallExp(EM_tokPos, S_Symbol((yyvsp[-3].sval)), (yyvsp[-1].expseq));}
#line 1331 "src/y.tab.c"
    break;

  case 11: /* exp: MINUS exp  */
#line 87 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_minusOp, A_IntExp(EM_tokPos, 0), (yyvsp[0].exp));}
#line 1337 "src/y.tab.c"
    break;

  case 12: /* exp: exp PLUS exp  */
#line 88 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_plusOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1343 "src/y.tab.c"
    break;

  case 13: /* exp: exp MINUS exp  */
#line 89 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_minusOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1349 "src/y.tab.c"
    break;

  case 14: /* exp: exp TIMES exp  */
#line 90 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_timesOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1355 "src/y.tab.c"
    break;

  case 15: /* exp: exp DIVIDE exp  */
#line 91 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_divideOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1361 "src/y.tab.c"
    break;

  case 16: /* exp: exp EQ exp  */
#line 92 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_eqOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1367 "src/y.tab.c"
    break;

  case 17: /* exp: exp NEQ exp  */
#line 93 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_neqOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1373 "src/y.tab.c"
    break;

  case 18: /* exp: exp LT exp  */
#line 94 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_ltOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1379 "src/y.tab.c"
    break;

  case 19: /* exp: exp LE exp  */
#line 95 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_leOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1385 "src/y.tab.c"
    break;

  case 20: /* exp: exp GT exp  */
#line 96 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_gtOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1391 "src/y.tab.c"
    break;

  case 21: /* exp: exp GE exp  */
#line 97 "src/tiger.y"
                                          {(yyval.exp)=A_OpExp(EM_tokPos, A_geOp, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1397 "src/y.tab.c"
    break;

  case 22: /* exp: exp AND exp  */
#line 99 "src/tiger.y"
                                          {(yyval.exp)=A_IfExp(EM_tokPos, (yyvsp[-2].exp), (yyvsp[0].exp), A_IntExp(EM_tokPos, 0));}
#line 1403 "src/y.tab.c"
    break;

  case 23: /* exp: exp OR exp  */
#line 100 "src/tiger.y"
                                          {(yyval.exp)=A_IfExp(EM_tokPos, (yyvsp[-2].exp), A_IntExp(EM_tokPos, 1), (yyvsp[0].exp));}
#line 1409 "src/y.tab.c"
    break;

  case 24: /* exp: ID LBRACE recordfields RBRACE  */
#line 102 "src/tiger.y"
                                          {(yyval.exp)=A_RecordExp(EM_tokPos, S_Symbol((yyvsp[-3].sval)), (yyvsp[-1].recordfields));}
#line 1415 "src/y.tab.c"
    break;

  case 25: /* exp: ID LBRACK exp RBRACK OF exp  */
#line 103 "src/tiger.y"
                                          {(yyval.exp)=A_ArrayExp(EM_tokPos, S_Symbol((yyvsp[-5].sval)), (yyvsp[-3].exp), (yyvsp[0].exp));}
#line 1421 "src/y.tab.c"
    break;

  case 26: /* exp: lvalue ASSIGN exp  */
#line 104 "src/tiger.y"
                                          {(yyval.exp)=A_AssignExp(EM_tokPos, (yyvsp[-2].var), (yyvsp[0].exp));}
#line 1427 "src/y.tab.c"
    break;

  case 27: /* exp: IF exp THEN exp  */
#line 105 "src/tiger.y"
                                          {(yyval.exp)=A_IfExp(EM_tokPos, (yyvsp[-2].exp), (yyvsp[0].exp), NULL);}
#line 1433 "src/y.tab.c"
    break;

  case 28: /* exp: IF exp THEN exp ELSE exp  */
#line 106 "src/tiger.y"
                                          {(yyval.exp)=A_IfExp(EM_tokPos, (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1439 "src/y.tab.c"
    break;

  case 29: /* exp: WHILE exp DO exp  */
#line 108 "src/tiger.y"
                                          {(yyval.exp)=A_WhileExp(EM_tokPos, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1445 "src/y.tab.c"
    break;

  case 30: /* exp: FOR ID ASSIGN exp TO exp DO exp  */
#line 109 "src/tiger.y"
                                            {(yyval.exp)=A_ForExp(EM_tokPos, S_Symbol((yyvsp[-6].sval)), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1451 "src/y.tab.c"
    break;

  case 31: /* exp: BREAK  */
#line 111 "src/tiger.y"
                                          {(yyval.exp)=A_BreakExp(EM_tokPos);}
#line 1457 "src/y.tab.c"
    break;

  case 32: /* exp: LET decs IN expseq END  */
#line 112 "src/tiger.y"
                                          {(yyval.exp)=A_LetExp(EM_tokPos, (yyvsp[-3].decs), A_SeqExp(EM_tokPos, (yyvsp[-1].expseq)));}
#line 1463 "src/y.tab.c"
    break;

  case 33: /* argseq: %empty  */
#line 115 "src/tiger.y"
                                          {(yyval.expseq)=NULL;}
#line 1469 "src/y.tab.c"
    break;

  case 34: /* argseq: exp largseq  */
#line 116 "src/tiger.y"
                                          {(yyval.expseq)=A_ExpList((yyvsp[-1].exp), (yyvsp[0].expseq));}
#line 1475 "src/y.tab.c"
    break;

  case 35: /* largseq: %empty  */
#line 119 "src/tiger.y"
                                          {(yyval.expseq)=NULL;}
#line 1481 "src/y.tab.c"
    break;

  case 36: /* largseq: COMMA exp largseq  */
#line 120 "src/tiger.y"
                                          {(yyval.expseq)=A_ExpList((yyvsp[-1].exp), (yyvsp[0].expseq));}
#line 1487 "src/y.tab.c"
    break;

  case 37: /* expseq: %empty  */
#line 123 "src/tiger.y"
                                          {(yyval.expseq)=NULL;}
#line 1493 "src/y.tab.c"
    break;

  case 38: /* expseq: exp lexpseq  */
#line 124 "src/tiger.y"
                                          {(yyval.expseq)=A_ExpList((yyvsp[-1].exp), (yyvsp[0].expseq));}
#line 1499 "src/y.tab.c"
    break;

  case 39: /* lexpseq: %empty  */
#line 127 "src/tiger.y"
                                          {(yyval.expseq)=NULL;}
#line 1505 "src/y.tab.c"
    break;

  case 40: /* lexpseq: SEMICOLON exp lexpseq  */
#line 128 "src/tiger.y"
                                          {(yyval.expseq)=A_ExpList((yyvsp[-1].exp), (yyvsp[0].expseq));}
#line 1511 "src/y.tab.c"
    break;

  case 41: /* lvalue: ID  */
#line 131 "src/tiger.y"
                                          {(yyval.var)=A_SimpleVar(EM_tokPos, S_Symbol((yyvsp[0].sval)));}
#line 1517 "src/y.tab.c"
    break;

  case 42: /* lvalue: lvalue DOT ID  */
#line 132 "src/tiger.y"
                                          {(yyval.var)=A_FieldVar(EM_tokPos, (yyvsp[-2].var), S_Symbol((yyvsp[0].sval)));}
#line 1523 "src/y.tab.c"
    break;

  case 43: /* lvalue: lvalue LBRACK exp RBRACK  */
#line 133 "src/tiger.y"
                                          {(yyval.var)=A_SubscriptVar(EM_tokPos, (yyvsp[-3].var), (yyvsp[-1].exp));}
#line 1529 "src/y.tab.c"
    break;

  case 44: /* lvalue: ID LBRACK exp RBRACK  */
#line 134 "src/tiger.y"
                                          {(yyval.var)=A_SubscriptVar(EM_tokPos, A_SimpleVar(EM_tokPos, S_Symbol((yyvsp[-3].sval))), (yyvsp[-1].exp));}
#line 1535 "src/y.tab.c"
    break;

  case 45: /* recordfields: %empty  */
#line 137 "src/tiger.y"
                                          {(yyval.recordfields)=NULL;}
#line 1541 "src/y.tab.c"
    break;

  case 46: /* recordfields: ID EQ exp lrecordfields  */
#line 138 "src/tiger.y"
                                          {(yyval.recordfields)=A_EfieldList(A_Efield(S_Symbol((yyvsp[-3].sval)), (yyvsp[-1].exp)), (yyvsp[0].recordfields));}
#line 1547 "src/y.tab.c"
    break;

  case 47: /* lrecordfields: %empty  */
#line 141 "src/tiger.y"
                                          {(yyval.recordfields)=NULL;}
#line 1553 "src/y.tab.c"
    break;

  case 48: /* lrecordfields: COMMA ID EQ exp lrecordfields  */
#line 142 "src/tiger.y"
                                            {(yyval.recordfields)=A_EfieldList(A_Efield(S_Symbol((yyvsp[-3].sval)), (yyvsp[-1].exp)), (yyvsp[0].recordfields));}
#line 1559 "src/y.tab.c"
    break;

  case 49: /* decs: %empty  */
#line 146 "src/tiger.y"
                                          {(yyval.decs)=NULL;}
#line 1565 "src/y.tab.c"
    break;

  case 50: /* decs: dec decs  */
#line 147 "src/tiger.y"
                                          {(yyval.decs)=A_DecList((yyvsp[-1].dec), (yyvsp[0].decs));}
#line 1571 "src/y.tab.c"
    break;

  case 51: /* dec: tydecs  */
#line 150 "src/tiger.y"
                                          {(yyval.dec)=A_TypeDec(EM_tokPos, (yyvsp[0].tydecs));}
#line 1577 "src/y.tab.c"
    break;

  case 52: /* dec: vardec  */
#line 151 "src/tiger.y"
                                          {(yyval.dec)=(yyvsp[0].dec);}
#line 1583 "src/y.tab.c"
    break;

  case 53: /* dec: fundecs  */
#line 152 "src/tiger.y"
                                          {(yyval.dec)=A_FunctionDec(EM_tokPos, (yyvsp[0].fundecs));}
#line 1589 "src/y.tab.c"
    break;

  case 54: /* tydecs: tydec  */
#line 156 "src/tiger.y"
                                          {(yyval.tydecs)=A_NametyList((yyvsp[0].tydec), NULL);}
#line 1595 "src/y.tab.c"
    break;

  case 55: /* tydecs: tydec tydecs  */
#line 157 "src/tiger.y"
                                          {(yyval.tydecs)=A_NametyList((yyvsp[-1].tydec), (yyvsp[0].tydecs));}
#line 1601 "src/y.tab.c"
    break;

  case 56: /* tydec: TYPE ID EQ ty  */
#line 160 "src/tiger.y"
                                          {(yyval.tydec)=A_Namety(S_Symbol((yyvsp[-2].sval)), (yyvsp[0].ty));}
#line 1607 "src/y.tab.c"
    break;

  case 57: /* ty: ID  */
#line 163 "src/tiger.y"
                                          {(yyval.ty)=A_NameTy(EM_tokPos, S_Symbol((yyvsp[0].sval)));}
#line 1613 "src/y.tab.c"
    break;

  case 58: /* ty: LBRACE tyfields RBRACE  */
#line 164 "src/tiger.y"
                                          {(yyval.ty)=A_RecordTy(EM_tokPos, (yyvsp[-1].tyfields));}
#line 1619 "src/y.tab.c"
    break;

  case 59: /* ty: ARRAY OF ID  */
#line 165 "src/tiger.y"
                                          {(yyval.ty)=A_ArrayTy(EM_tokPos, S_Symbol((yyvsp[0].sval)));}
#line 1625 "src/y.tab.c"
    break;

  case 60: /* tyfields: %empty  */
#line 168 "src/tiger.y"
                                          {(yyval.tyfields)=NULL;}
#line 1631 "src/y.tab.c"
    break;

  case 61: /* tyfields: tyfield ltyfields  */
#line 169 "src/tiger.y"
                                          {(yyval.tyfields)=A_FieldList((yyvsp[-1].tyfield), (yyvsp[0].tyfields));}
#line 1637 "src/y.tab.c"
    break;

  case 62: /* ltyfields: %empty  */
#line 172 "src/tiger.y"
                                          {(yyval.tyfields)=NULL;}
#line 1643 "src/y.tab.c"
    break;

  case 63: /* ltyfields: COMMA tyfield ltyfields  */
#line 173 "src/tiger.y"
                                          {(yyval.tyfields)=A_FieldList((yyvsp[-1].tyfield), (yyvsp[0].tyfields));}
#line 1649 "src/y.tab.c"
    break;

  case 64: /* tyfield: ID COLON ID  */
#line 176 "src/tiger.y"
                                          {(yyval.tyfield)=A_Field(EM_tokPos, S_Symbol((yyvsp[-2].sval)), S_Symbol((yyvsp[0].sval)));}
#line 1655 "src/y.tab.c"
    break;

  case 65: /* vardec: VAR ID ASSIGN exp  */
#line 180 "src/tiger.y"
                                          {(yyval.dec)=A_VarDec(EM_tokPos, S_Symbol((yyvsp[-2].sval)), NULL, (yyvsp[0].exp));}
#line 1661 "src/y.tab.c"
    break;

  case 66: /* vardec: VAR ID COLON ID ASSIGN exp  */
#line 181 "src/tiger.y"
                                          {(yyval.dec)=A_VarDec(EM_tokPos, S_Symbol((yyvsp[-4].sval)), S_Symbol((yyvsp[-2].sval)), (yyvsp[0].exp));}
#line 1667 "src/y.tab.c"
    break;

  case 67: /* fundecs: fundec  */
#line 184 "src/tiger.y"
                                          {(yyval.fundecs)=A_FundecList((yyvsp[0].fundec), NULL);}
#line 1673 "src/y.tab.c"
    break;

  case 68: /* fundecs: fundec fundecs  */
#line 185 "src/tiger.y"
                                          {(yyval.fundecs)=A_FundecList((yyvsp[-1].fundec), (yyvsp[0].fundecs));}
#line 1679 "src/y.tab.c"
    break;

  case 69: /* fundec: FUNCTION ID LPAREN tyfields RPAREN EQ exp  */
#line 188 "src/tiger.y"
                                                      {(yyval.fundec)=A_Fundec(EM_tokPos, S_Symbol((yyvsp[-5].sval)), (yyvsp[-3].tyfields), NULL, (yyvsp[0].exp));}
#line 1685 "src/y.tab.c"
    break;

  case 70: /* fundec: FUNCTION ID LPAREN tyfields RPAREN COLON ID EQ exp  */
#line 189 "src/tiger.y"
                                                               {(yyval.fundec)=A_Fundec(EM_tokPos, S_Symbol((yyvsp[-7].sval)), (yyvsp[-5].tyfields), S_Symbol((yyvsp[-2].sval)), (yyvsp[0].exp));}
#line 1691 "src/y.tab.c"
    break;


#line 1695 "src/y.tab.c"

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
      yyerror (YY_("syntax error"));
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


#if !defined yyoverflow
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

  return yyresult;
}

