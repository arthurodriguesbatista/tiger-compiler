/* A Bison parser, made by GNU Bison 3.7.3.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./frontend/tiger.y"

#include <stdio.h>
#include "util/util.h"
#include "errormsg.h"
#include "absyn.h"
#include "symbol.h"

int yylex(void); /* function prototype */

void yyerror(char *s) {
  EM_error(EM_tokPos, "%s", s);
}

A_exp absyn_root;


#line 88 "tiger.tab.c"

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

#include "tiger.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LOW = 3,                        /* LOW  */
  YYSYMBOL_UMINUS = 4,                     /* UMINUS  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_COMMA = 8,                      /* COMMA  */
  YYSYMBOL_COLON = 9,                      /* COLON  */
  YYSYMBOL_SEMICOLON = 10,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 11,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 12,                    /* RPAREN  */
  YYSYMBOL_LBRACK = 13,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 14,                    /* RBRACK  */
  YYSYMBOL_LBRACE = 15,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 16,                    /* RBRACE  */
  YYSYMBOL_DOT = 17,                       /* DOT  */
  YYSYMBOL_PLUS = 18,                      /* PLUS  */
  YYSYMBOL_MINUS = 19,                     /* MINUS  */
  YYSYMBOL_TIMES = 20,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 21,                    /* DIVIDE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_LT = 24,                        /* LT  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_GT = 26,                        /* GT  */
  YYSYMBOL_GE = 27,                        /* GE  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_ASSIGN = 30,                    /* ASSIGN  */
  YYSYMBOL_ARRAY = 31,                     /* ARRAY  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_THEN = 33,                      /* THEN  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_TO = 37,                        /* TO  */
  YYSYMBOL_DO = 38,                        /* DO  */
  YYSYMBOL_LET = 39,                       /* LET  */
  YYSYMBOL_IN = 40,                        /* IN  */
  YYSYMBOL_END = 41,                       /* END  */
  YYSYMBOL_OF = 42,                        /* OF  */
  YYSYMBOL_BREAK = 43,                     /* BREAK  */
  YYSYMBOL_NIL = 44,                       /* NIL  */
  YYSYMBOL_FUNCTION = 45,                  /* FUNCTION  */
  YYSYMBOL_VAR = 46,                       /* VAR  */
  YYSYMBOL_TYPE = 47,                      /* TYPE  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_exp = 50,                       /* exp  */
  YYSYMBOL_lvalue = 51,                    /* lvalue  */
  YYSYMBOL_func_call = 52,                 /* func_call  */
  YYSYMBOL_explist = 53,                   /* explist  */
  YYSYMBOL_explist_nonempty = 54,          /* explist_nonempty  */
  YYSYMBOL_arith_exp = 55,                 /* arith_exp  */
  YYSYMBOL_cmp_exp = 56,                   /* cmp_exp  */
  YYSYMBOL_bool_exp = 57,                  /* bool_exp  */
  YYSYMBOL_record_create = 58,             /* record_create  */
  YYSYMBOL_record_create_list = 59,        /* record_create_list  */
  YYSYMBOL_record_create_list_nonempty = 60, /* record_create_list_nonempty  */
  YYSYMBOL_record_create_field = 61,       /* record_create_field  */
  YYSYMBOL_array_create = 62,              /* array_create  */
  YYSYMBOL_decs = 63,                      /* decs  */
  YYSYMBOL_dec = 64,                       /* dec  */
  YYSYMBOL_tydeclist = 65,                 /* tydeclist  */
  YYSYMBOL_tydec = 66,                     /* tydec  */
  YYSYMBOL_ty = 67,                        /* ty  */
  YYSYMBOL_tyfields = 68,                  /* tyfields  */
  YYSYMBOL_tyfields_nonempty = 69,         /* tyfields_nonempty  */
  YYSYMBOL_tyfield = 70,                   /* tyfield  */
  YYSYMBOL_vardec = 71,                    /* vardec  */
  YYSYMBOL_fundeclist = 72,                /* fundeclist  */
  YYSYMBOL_fundec = 73,                    /* fundec  */
  YYSYMBOL_expseq = 74                     /* expseq  */
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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    82,    82,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   104,   105,   106,   107,   109,   111,   112,   114,
     115,   117,   118,   119,   120,   122,   123,   124,   125,   126,
     127,   129,   130,   132,   134,   135,   137,   138,   140,   142,
     144,   145,   147,   148,   149,   151,   152,   154,   156,   157,
     158,   160,   161,   163,   164,   166,   168,   169,   171,   172,
     174,   175,   177,   178,   179
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
  "\"end of file\"", "error", "\"invalid token\"", "LOW", "UMINUS", "ID",
  "STRING", "INT", "COMMA", "COLON", "SEMICOLON", "LPAREN", "RPAREN",
  "LBRACK", "RBRACK", "LBRACE", "RBRACE", "DOT", "PLUS", "MINUS", "TIMES",
  "DIVIDE", "EQ", "NEQ", "LT", "LE", "GT", "GE", "AND", "OR", "ASSIGN",
  "ARRAY", "IF", "THEN", "ELSE", "WHILE", "FOR", "TO", "DO", "LET", "IN",
  "END", "OF", "BREAK", "NIL", "FUNCTION", "VAR", "TYPE", "$accept",
  "program", "exp", "lvalue", "func_call", "explist", "explist_nonempty",
  "arith_exp", "cmp_exp", "bool_exp", "record_create",
  "record_create_list", "record_create_list_nonempty",
  "record_create_field", "array_create", "decs", "dec", "tydeclist",
  "tydec", "ty", "tyfields", "tyfields_nonempty", "tyfield", "vardec",
  "fundeclist", "fundec", "expseq", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302
};
#endif

#define YYPACT_NINF (-28)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      55,    13,   -28,   -28,    55,    55,    55,    55,    -1,   -28,
     -28,   -28,    29,   228,    -5,   -28,   -28,   -28,   -28,   -28,
     -28,    55,    55,    25,   228,     5,   -28,   184,    94,     1,
     -27,   -28,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    42,    55,   228,    36,    41,
     200,    28,    35,    44,   -28,    55,   -28,    55,    55,    55,
      55,    48,    49,    51,   -28,   -28,    16,   -28,   -28,    19,
     -11,   -11,   -28,   -28,   240,   240,   240,   240,   240,   240,
     250,    57,   216,   -28,   228,   -28,    55,    23,    55,   -28,
      25,   228,   167,   228,   147,     4,    56,    -7,    46,   -28,
     -28,   -28,   228,    55,   228,   -28,    55,    55,   -28,    64,
      65,    55,    -4,   228,   228,   126,    62,    60,    81,   -28,
      43,   228,   -28,    64,    50,   -28,    55,    88,    -6,    64,
      55,    79,    91,   228,   -28,    92,    55,   -28,   228,   -28,
     -28,    78,   228,    55,   228
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,     6,     5,    72,     0,     0,     0,     0,    50,
      19,     4,     0,     2,     3,     8,     9,    10,    11,    12,
      13,    27,     0,    44,    73,     0,     7,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    28,
       0,     0,     0,    45,    46,     0,    21,     0,     0,     0,
      72,     0,     0,     0,    51,    52,    55,    53,    54,    68,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,    25,    14,    26,     0,    23,     0,    43,
       0,    74,    16,    17,     0,     0,     0,     0,     0,    56,
      69,    24,    30,     0,    48,    47,     0,     0,    20,    61,
       0,     0,     0,    49,    15,     0,     0,     0,    62,    63,
       0,    66,    58,    61,     0,    57,     0,     0,     0,     0,
       0,     0,     0,    18,    65,     0,     0,    64,    67,    59,
      60,     0,    70,     0,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,    11,   -28,   -28,   -28,    38,   -28,   -28,
     -21,   -28,   -24,   -28,    39,   -28,    67
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    24,    14,    15,    48,    49,    16,    17,    18,
      19,    52,    53,    54,    20,    30,    64,    65,    66,   125,
     117,   118,   119,    67,    68,    69,    25
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,   122,   110,   135,    29,    26,    27,    28,    44,    34,
      35,   123,    45,    60,    55,    55,   136,    56,    61,    62,
      63,    47,    50,   111,    21,    46,    22,   124,    23,    31,
      51,    59,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,   108,    84,    83,    85,    86,
      88,    89,    90,    96,    97,    91,    98,    92,    93,    94,
       1,     2,     3,    63,    61,   103,     4,   109,   112,   116,
     120,   127,   128,   130,     5,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   102,     6,   104,   129,
       7,     8,   132,   134,     9,   139,   140,   141,    10,    11,
     143,   105,   131,   113,    99,   137,   114,   115,   100,     0,
       0,   121,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,     0,     0,   133,    95,     0,     0,
     138,     0,    58,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,   144,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,   126,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,   107,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     0,     0,     0,
       0,   106,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    87,     0,     0,    57,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     101,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41
};

static const yytype_int16 yycheck[] =
{
       0,     5,     9,     9,     5,     5,     6,     7,    13,    20,
      21,    15,    17,    40,    10,    10,    22,    12,    45,    46,
      47,    21,    22,    30,    11,    30,    13,    31,    15,     0,
       5,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    41,    46,     5,    12,     8,
      22,    16,     8,     5,     5,    55,     5,    57,    58,    59,
       5,     6,     7,    47,    45,    42,    11,    11,    22,     5,
       5,     9,    12,    30,    19,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    86,    32,    88,     8,
      35,    36,    42,     5,    39,    16,     5,     5,    43,    44,
      22,    90,   123,   103,    66,   129,   106,   107,    69,    -1,
      -1,   111,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,   126,    60,    -1,    -1,
     130,    -1,    38,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    14,    -1,    -1,    33,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      14,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,    11,    19,    32,    35,    36,    39,
      43,    44,    49,    50,    51,    52,    55,    56,    57,    58,
      62,    11,    13,    15,    50,    74,    50,    50,    50,     5,
      63,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    13,    17,    30,    50,    53,    54,
      50,     5,    59,    60,    61,    10,    12,    33,    38,    30,
      40,    45,    46,    47,    64,    65,    66,    71,    72,    73,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,     5,    50,    12,     8,    14,    22,    16,
       8,    50,    50,    50,    50,    74,     5,     5,     5,    65,
      72,    14,    50,    42,    50,    61,    34,    37,    41,    11,
       9,    30,    22,    50,    50,    50,     5,    68,    69,    70,
       5,    50,     5,    15,    31,    67,    38,     9,    12,     8,
      30,    68,    42,    50,     5,     9,    22,    70,    50,    16,
       5,     5,    50,    22,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    51,    51,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      56,    57,    57,    58,    59,    59,    60,    60,    61,    62,
      63,    63,    64,    64,    64,    65,    65,    66,    67,    67,
      67,    68,    68,    69,    69,    70,    71,    71,    72,    72,
      73,    73,    74,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     6,     4,     4,     8,     1,
       5,     3,     1,     4,     4,     3,     4,     0,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     0,     1,     1,     3,     3,     6,
       0,     2,     1,     1,     1,     1,     2,     4,     1,     3,
       3,     0,     1,     1,     3,     3,     4,     6,     1,     2,
       7,     9,     0,     1,     3
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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
#line 82 "./frontend/tiger.y"
             { absyn_root = (yyvsp[0].exp); }
#line 1270 "tiger.tab.c"
    break;

  case 3: /* exp: lvalue  */
#line 84 "./frontend/tiger.y"
            { (yyval.exp) = A_VarExp(EM_tokPos, (yyvsp[0].var)); }
#line 1276 "tiger.tab.c"
    break;

  case 4: /* exp: NIL  */
#line 85 "./frontend/tiger.y"
            { (yyval.exp) = A_NilExp(EM_tokPos); }
#line 1282 "tiger.tab.c"
    break;

  case 5: /* exp: INT  */
#line 86 "./frontend/tiger.y"
                   { (yyval.exp) = A_IntExp(EM_tokPos, (yyvsp[0].ival)); }
#line 1288 "tiger.tab.c"
    break;

  case 6: /* exp: STRING  */
#line 87 "./frontend/tiger.y"
                   { (yyval.exp) = A_StringExp(EM_tokPos, (yyvsp[0].sval)); }
#line 1294 "tiger.tab.c"
    break;

  case 7: /* exp: MINUS exp  */
#line 88 "./frontend/tiger.y"
                            { (yyval.exp) = A_OpExp(EM_tokPos, A_minusOp, A_IntExp(EM_tokPos, 0), (yyvsp[0].exp)); }
#line 1300 "tiger.tab.c"
    break;

  case 8: /* exp: func_call  */
#line 89 "./frontend/tiger.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 1306 "tiger.tab.c"
    break;

  case 9: /* exp: arith_exp  */
#line 90 "./frontend/tiger.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 1312 "tiger.tab.c"
    break;

  case 10: /* exp: cmp_exp  */
#line 91 "./frontend/tiger.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 1318 "tiger.tab.c"
    break;

  case 11: /* exp: bool_exp  */
#line 92 "./frontend/tiger.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 1324 "tiger.tab.c"
    break;

  case 12: /* exp: record_create  */
#line 93 "./frontend/tiger.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 1330 "tiger.tab.c"
    break;

  case 13: /* exp: array_create  */
#line 94 "./frontend/tiger.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 1336 "tiger.tab.c"
    break;

  case 14: /* exp: lvalue ASSIGN exp  */
#line 95 "./frontend/tiger.y"
                       { (yyval.exp) = A_AssignExp(EM_tokPos, (yyvsp[-2].var), (yyvsp[0].exp)); }
#line 1342 "tiger.tab.c"
    break;

  case 15: /* exp: IF exp THEN exp ELSE exp  */
#line 96 "./frontend/tiger.y"
                              { (yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1348 "tiger.tab.c"
    break;

  case 16: /* exp: IF exp THEN exp  */
#line 97 "./frontend/tiger.y"
                     { (yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[-2].exp), (yyvsp[0].exp), NULL); }
#line 1354 "tiger.tab.c"
    break;

  case 17: /* exp: WHILE exp DO exp  */
#line 98 "./frontend/tiger.y"
                      { (yyval.exp) = A_WhileExp(EM_tokPos, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1360 "tiger.tab.c"
    break;

  case 18: /* exp: FOR ID ASSIGN exp TO exp DO exp  */
#line 99 "./frontend/tiger.y"
                                     { (yyval.exp) = A_ForExp(EM_tokPos, S_Symbol((yyvsp[-6].sval)), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1366 "tiger.tab.c"
    break;

  case 19: /* exp: BREAK  */
#line 100 "./frontend/tiger.y"
           { (yyval.exp) = A_BreakExp(EM_tokPos); }
#line 1372 "tiger.tab.c"
    break;

  case 20: /* exp: LET decs IN expseq END  */
#line 101 "./frontend/tiger.y"
                            { (yyval.exp) = A_LetExp(EM_tokPos, (yyvsp[-3].declist), A_SeqExp(EM_tokPos, (yyvsp[-1].explist))); }
#line 1378 "tiger.tab.c"
    break;

  case 21: /* exp: LPAREN expseq RPAREN  */
#line 102 "./frontend/tiger.y"
                          { (yyval.exp) = A_SeqExp(EM_tokPos, (yyvsp[-1].explist)); }
#line 1384 "tiger.tab.c"
    break;

  case 22: /* lvalue: ID  */
#line 104 "./frontend/tiger.y"
                                 { (yyval.var) = A_SimpleVar(EM_tokPos, S_Symbol((yyvsp[0].sval))); }
#line 1390 "tiger.tab.c"
    break;

  case 23: /* lvalue: ID LBRACK exp RBRACK  */
#line 105 "./frontend/tiger.y"
                                 { (yyval.var) = A_SubscriptVar(EM_tokPos, A_SimpleVar(EM_tokPos, S_Symbol((yyvsp[-3].sval))), (yyvsp[-1].exp)); }
#line 1396 "tiger.tab.c"
    break;

  case 24: /* lvalue: lvalue LBRACK exp RBRACK  */
#line 106 "./frontend/tiger.y"
                                 { (yyval.var) = A_SubscriptVar(EM_tokPos, (yyvsp[-3].var), (yyvsp[-1].exp)); }
#line 1402 "tiger.tab.c"
    break;

  case 25: /* lvalue: lvalue DOT ID  */
#line 107 "./frontend/tiger.y"
                                 { (yyval.var) = A_FieldVar(EM_tokPos, (yyvsp[-2].var), S_Symbol((yyvsp[0].sval))); }
#line 1408 "tiger.tab.c"
    break;

  case 26: /* func_call: ID LPAREN explist RPAREN  */
#line 109 "./frontend/tiger.y"
                                    { (yyval.exp) = A_CallExp(EM_tokPos, S_Symbol((yyvsp[-3].sval)), (yyvsp[-1].explist)); }
#line 1414 "tiger.tab.c"
    break;

  case 27: /* explist: %empty  */
#line 111 "./frontend/tiger.y"
                          { (yyval.explist) = NULL; }
#line 1420 "tiger.tab.c"
    break;

  case 28: /* explist: explist_nonempty  */
#line 112 "./frontend/tiger.y"
                          { (yyval.explist) = (yyvsp[0].explist); }
#line 1426 "tiger.tab.c"
    break;

  case 29: /* explist_nonempty: exp  */
#line 114 "./frontend/tiger.y"
                                             { (yyval.explist) = A_ExpList((yyvsp[0].exp), NULL); }
#line 1432 "tiger.tab.c"
    break;

  case 30: /* explist_nonempty: explist_nonempty COMMA exp  */
#line 115 "./frontend/tiger.y"
                                             { (yyval.explist) = A_ExpList((yyvsp[0].exp), (yyvsp[-2].explist)); }
#line 1438 "tiger.tab.c"
    break;

  case 31: /* arith_exp: exp PLUS exp  */
#line 117 "./frontend/tiger.y"
                          { (yyval.exp) = A_OpExp(EM_tokPos, A_plusOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1444 "tiger.tab.c"
    break;

  case 32: /* arith_exp: exp MINUS exp  */
#line 118 "./frontend/tiger.y"
                          { (yyval.exp) = A_OpExp(EM_tokPos, A_minusOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1450 "tiger.tab.c"
    break;

  case 33: /* arith_exp: exp TIMES exp  */
#line 119 "./frontend/tiger.y"
                          { (yyval.exp) = A_OpExp(EM_tokPos, A_timesOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1456 "tiger.tab.c"
    break;

  case 34: /* arith_exp: exp DIVIDE exp  */
#line 120 "./frontend/tiger.y"
                          { (yyval.exp) = A_OpExp(EM_tokPos, A_divideOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1462 "tiger.tab.c"
    break;

  case 35: /* cmp_exp: exp EQ exp  */
#line 122 "./frontend/tiger.y"
                     { (yyval.exp) = A_OpExp(EM_tokPos, A_eqOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1468 "tiger.tab.c"
    break;

  case 36: /* cmp_exp: exp NEQ exp  */
#line 123 "./frontend/tiger.y"
                     { (yyval.exp) = A_OpExp(EM_tokPos, A_neqOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1474 "tiger.tab.c"
    break;

  case 37: /* cmp_exp: exp LT exp  */
#line 124 "./frontend/tiger.y"
                     { (yyval.exp) = A_OpExp(EM_tokPos, A_ltOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1480 "tiger.tab.c"
    break;

  case 38: /* cmp_exp: exp LE exp  */
#line 125 "./frontend/tiger.y"
                     { (yyval.exp) = A_OpExp(EM_tokPos, A_leOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1486 "tiger.tab.c"
    break;

  case 39: /* cmp_exp: exp GT exp  */
#line 126 "./frontend/tiger.y"
                     { (yyval.exp) = A_OpExp(EM_tokPos, A_gtOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1492 "tiger.tab.c"
    break;

  case 40: /* cmp_exp: exp GE exp  */
#line 127 "./frontend/tiger.y"
                     { (yyval.exp) = A_OpExp(EM_tokPos, A_geOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1498 "tiger.tab.c"
    break;

  case 41: /* bool_exp: exp AND exp  */
#line 129 "./frontend/tiger.y"
                      { (yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[-2].exp), (yyvsp[0].exp), A_IntExp(EM_tokPos, 0)); }
#line 1504 "tiger.tab.c"
    break;

  case 42: /* bool_exp: exp OR exp  */
#line 130 "./frontend/tiger.y"
                      { (yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[-2].exp), A_IntExp(EM_tokPos, 1), (yyvsp[0].exp)); }
#line 1510 "tiger.tab.c"
    break;

  case 43: /* record_create: ID LBRACE record_create_list RBRACE  */
#line 132 "./frontend/tiger.y"
                                                   { (yyval.exp) = A_RecordExp(EM_tokPos, S_Symbol((yyvsp[-3].sval)), (yyvsp[-1].efieldlist)); }
#line 1516 "tiger.tab.c"
    break;

  case 44: /* record_create_list: %empty  */
#line 134 "./frontend/tiger.y"
                    { (yyval.efieldlist) = NULL; }
#line 1522 "tiger.tab.c"
    break;

  case 45: /* record_create_list: record_create_list_nonempty  */
#line 135 "./frontend/tiger.y"
                                                { (yyval.efieldlist) = (yyvsp[0].efieldlist); }
#line 1528 "tiger.tab.c"
    break;

  case 46: /* record_create_list_nonempty: record_create_field  */
#line 137 "./frontend/tiger.y"
                                                 { (yyval.efieldlist) = A_EfieldList((yyvsp[0].efield), NULL); }
#line 1534 "tiger.tab.c"
    break;

  case 47: /* record_create_list_nonempty: record_create_list_nonempty COMMA record_create_field  */
#line 138 "./frontend/tiger.y"
                                                                                   { (yyval.efieldlist) = A_EfieldList((yyvsp[0].efield), (yyvsp[-2].efieldlist)); }
#line 1540 "tiger.tab.c"
    break;

  case 48: /* record_create_field: ID EQ exp  */
#line 140 "./frontend/tiger.y"
                               { (yyval.efield) = A_Efield(S_Symbol((yyvsp[-2].sval)), (yyvsp[0].exp)); }
#line 1546 "tiger.tab.c"
    break;

  case 49: /* array_create: ID LBRACK exp RBRACK OF exp  */
#line 142 "./frontend/tiger.y"
                                          { (yyval.exp) = A_ArrayExp(EM_tokPos, S_Symbol((yyvsp[-5].sval)), (yyvsp[-3].exp), (yyvsp[0].exp)); }
#line 1552 "tiger.tab.c"
    break;

  case 50: /* decs: %empty  */
#line 144 "./frontend/tiger.y"
               { (yyval.declist) = NULL; }
#line 1558 "tiger.tab.c"
    break;

  case 51: /* decs: decs dec  */
#line 145 "./frontend/tiger.y"
               { (yyval.declist) = A_DecList((yyvsp[0].dec), (yyvsp[-1].declist)); }
#line 1564 "tiger.tab.c"
    break;

  case 52: /* dec: tydeclist  */
#line 147 "./frontend/tiger.y"
                { (yyval.dec) = (yyvsp[0].dec); }
#line 1570 "tiger.tab.c"
    break;

  case 53: /* dec: vardec  */
#line 148 "./frontend/tiger.y"
                { (yyval.dec) = (yyvsp[0].dec); }
#line 1576 "tiger.tab.c"
    break;

  case 54: /* dec: fundeclist  */
#line 149 "./frontend/tiger.y"
                { (yyval.dec) = (yyvsp[0].dec); }
#line 1582 "tiger.tab.c"
    break;

  case 55: /* tydeclist: tydec  */
#line 151 "./frontend/tiger.y"
                           { (yyval.dec) = A_TypeDec(EM_tokPos, A_NametyList((yyvsp[0].namety), NULL)); }
#line 1588 "tiger.tab.c"
    break;

  case 56: /* tydeclist: tydec tydeclist  */
#line 152 "./frontend/tiger.y"
                           { (yyval.dec) = A_TypeDec(EM_tokPos, A_NametyList((yyvsp[-1].namety), (yyvsp[0].dec)->u.type)); }
#line 1594 "tiger.tab.c"
    break;

  case 57: /* tydec: TYPE ID EQ ty  */
#line 154 "./frontend/tiger.y"
                           { (yyval.namety) = A_Namety(S_Symbol((yyvsp[-2].sval)), (yyvsp[0].ty)); }
#line 1600 "tiger.tab.c"
    break;

  case 58: /* ty: ID  */
#line 156 "./frontend/tiger.y"
                           { (yyval.ty) = A_NameTy(EM_tokPos, S_Symbol((yyvsp[0].sval))); }
#line 1606 "tiger.tab.c"
    break;

  case 59: /* ty: LBRACE tyfields RBRACE  */
#line 157 "./frontend/tiger.y"
                           { (yyval.ty) = A_RecordTy(EM_tokPos, (yyvsp[-1].fieldlist)); }
#line 1612 "tiger.tab.c"
    break;

  case 60: /* ty: ARRAY OF ID  */
#line 158 "./frontend/tiger.y"
                           { (yyval.ty) = A_ArrayTy(EM_tokPos, S_Symbol((yyvsp[0].sval))); }
#line 1618 "tiger.tab.c"
    break;

  case 61: /* tyfields: %empty  */
#line 160 "./frontend/tiger.y"
                            { (yyval.fieldlist) = NULL; }
#line 1624 "tiger.tab.c"
    break;

  case 62: /* tyfields: tyfields_nonempty  */
#line 161 "./frontend/tiger.y"
                            { (yyval.fieldlist) = (yyvsp[0].fieldlist); }
#line 1630 "tiger.tab.c"
    break;

  case 63: /* tyfields_nonempty: tyfield  */
#line 163 "./frontend/tiger.y"
                                                   { (yyval.fieldlist) = A_FieldList((yyvsp[0].field), NULL); }
#line 1636 "tiger.tab.c"
    break;

  case 64: /* tyfields_nonempty: tyfields_nonempty COMMA tyfield  */
#line 164 "./frontend/tiger.y"
                                                   { (yyval.fieldlist) = A_FieldList((yyvsp[0].field), (yyvsp[-2].fieldlist)); }
#line 1642 "tiger.tab.c"
    break;

  case 65: /* tyfield: ID COLON ID  */
#line 166 "./frontend/tiger.y"
                     { (yyval.field) = A_Field(EM_tokPos, S_Symbol((yyvsp[-2].sval)), S_Symbol((yyvsp[0].sval))); }
#line 1648 "tiger.tab.c"
    break;

  case 66: /* vardec: VAR ID ASSIGN exp  */
#line 168 "./frontend/tiger.y"
                                   { (yyval.dec) = A_VarDec(EM_tokPos, S_Symbol((yyvsp[-2].sval)), NULL, (yyvsp[0].exp)); }
#line 1654 "tiger.tab.c"
    break;

  case 67: /* vardec: VAR ID COLON ID ASSIGN exp  */
#line 169 "./frontend/tiger.y"
                                   { (yyval.dec) = A_VarDec(EM_tokPos, S_Symbol((yyvsp[-4].sval)), S_Symbol((yyvsp[-2].sval)), (yyvsp[0].exp)); }
#line 1660 "tiger.tab.c"
    break;

  case 68: /* fundeclist: fundec  */
#line 171 "./frontend/tiger.y"
                              { (yyval.dec) = A_FunctionDec(EM_tokPos, A_FundecList((yyvsp[0].fundec), NULL)); }
#line 1666 "tiger.tab.c"
    break;

  case 69: /* fundeclist: fundec fundeclist  */
#line 172 "./frontend/tiger.y"
                              { (yyval.dec) = A_FunctionDec(EM_tokPos, A_FundecList((yyvsp[-1].fundec), (yyvsp[0].dec)->u.function)); }
#line 1672 "tiger.tab.c"
    break;

  case 70: /* fundec: FUNCTION ID LPAREN tyfields RPAREN EQ exp  */
#line 174 "./frontend/tiger.y"
                                                           { (yyval.fundec) = A_Fundec(EM_tokPos, S_Symbol((yyvsp[-5].sval)), (yyvsp[-3].fieldlist), NULL, (yyvsp[0].exp)); }
#line 1678 "tiger.tab.c"
    break;

  case 71: /* fundec: FUNCTION ID LPAREN tyfields RPAREN COLON ID EQ exp  */
#line 175 "./frontend/tiger.y"
                                                           { (yyval.fundec) = A_Fundec(EM_tokPos, S_Symbol((yyvsp[-7].sval)), (yyvsp[-5].fieldlist), S_Symbol((yyvsp[-2].sval)), (yyvsp[0].exp)); }
#line 1684 "tiger.tab.c"
    break;

  case 72: /* expseq: %empty  */
#line 177 "./frontend/tiger.y"
        {(yyval.explist)=NULL;}
#line 1690 "tiger.tab.c"
    break;

  case 73: /* expseq: exp  */
#line 178 "./frontend/tiger.y"
                             { (yyval.explist) = A_ExpList((yyvsp[0].exp), NULL); }
#line 1696 "tiger.tab.c"
    break;

  case 74: /* expseq: expseq SEMICOLON exp  */
#line 179 "./frontend/tiger.y"
                             { (yyval.explist) = A_ExpList((yyvsp[0].exp), (yyvsp[-2].explist)); }
#line 1702 "tiger.tab.c"
    break;


#line 1706 "tiger.tab.c"

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

