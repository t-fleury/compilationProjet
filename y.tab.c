/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ppascal.y" /* yacc.c:339  */

#include  <stdio.h>
#include  <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "PPutils.h"
#include "util.h"

int yylex();
void yyerror(const char*);


Node defVar; //Arbre des définitions des variables
Node defFP; //Arbre des définitions des fonctions et procédures
Node temp; //Utilisé pour enregistrer un noeud

#line 83 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_boo = 258,
    T_int = 259,
    T_ar = 260,
    I = 261,
    V = 262,
    Dep = 263,
    Def = 264,
    NewAr = 265,
    true = 266,
    false = 267,
    Var = 268,
    openPar = 269,
    closePar = 270,
    openCro = 271,
    closeCro = 272,
    openAco = 273,
    closeAco = 274,
    DPoint = 275,
    Vir = 276,
    Mp = 277,
    Af = 278,
    Se = 279,
    If = 280,
    Th = 281,
    El = 282,
    Wh = 283,
    Do = 284,
    Pl = 285,
    Mo = 286,
    Mu = 287,
    And = 288,
    Or = 289,
    Not = 290,
    Lt = 291,
    Eq = 292,
    Sk = 293,
    Ind = 294,
    Afc = 295,
    AfInd = 296,
    Jp = 297,
    Jz = 298,
    St = 299,
    Param = 300,
    Call = 301,
    Ret = 302
  };
#endif
/* Tokens.  */
#define T_boo 258
#define T_int 259
#define T_ar 260
#define I 261
#define V 262
#define Dep 263
#define Def 264
#define NewAr 265
#define true 266
#define false 267
#define Var 268
#define openPar 269
#define closePar 270
#define openCro 271
#define closeCro 272
#define openAco 273
#define closeAco 274
#define DPoint 275
#define Vir 276
#define Mp 277
#define Af 278
#define Se 279
#define If 280
#define Th 281
#define El 282
#define Wh 283
#define Do 284
#define Pl 285
#define Mo 286
#define Mu 287
#define And 288
#define Or 289
#define Not 290
#define Lt 291
#define Eq 292
#define Sk 293
#define Ind 294
#define Afc 295
#define AfInd 296
#define Jp 297
#define Jz 298
#define St 299
#define Param 300
#define Call 301
#define Ret 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "ppascal.y" /* yacc.c:355  */

  struct noeud* node;
  char* str;
  int integer;

#line 220 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 237 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  109

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
       0,    45,    45,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    71,    72,    73,    77,    80,    82,
      92,    96,    97,    98,   116,   117,   118,   122,   123,   129,
     130,   132,   133,   135,   136,   138,   139,   141,   145,   146,
     147,   149,   150,   159,   160,   162,   172,   183,   187,   192,
     193
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_boo", "T_int", "T_ar", "I", "V",
  "Dep", "Def", "NewAr", "true", "false", "Var", "openPar", "closePar",
  "openCro", "closeCro", "openAco", "closeAco", "DPoint", "Vir", "Mp",
  "Af", "Se", "If", "Th", "El", "Wh", "Do", "Pl", "Mo", "Mu", "And", "Or",
  "Not", "Lt", "Eq", "Sk", "Ind", "Afc", "AfInd", "Jp", "Jz", "St",
  "Param", "Call", "Ret", "$accept", "MP", "E", "Et", "C", "L_args",
  "L_argsnn", "L_argt", "L_argtnn", "Argt", "TP", "L_vart", "L_vartnn",
  "D_entp", "D_entf", "D", "LD", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -24

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-24)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    20,    30,   -24,    16,    34,   -24,   -24,    37,    65,
     131,    15,    59,    76,    56,    14,    14,   -24,     0,    62,
       4,     4,   -24,    20,   -24,   -24,   131,   -24,    14,    14,
      14,    79,   102,    33,   -24,    83,   131,   -24,   -24,    14,
      14,   -22,   101,   119,    14,    14,    56,    56,    56,   -24,
     -24,   110,    77,   -24,    78,   127,    20,    20,   -24,    14,
     107,    70,   -24,    56,    14,    14,    14,    14,    14,    14,
      14,    56,    88,   127,   -24,    62,    62,    14,   -24,   -24,
     122,   117,   -24,   124,   130,    14,   -24,    26,    43,    43,
      43,    24,    53,    53,    53,    62,   -24,   -24,   -24,    20,
     134,   -24,    96,    56,   -24,   131,   -24,    62,   -24
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      41,     0,     0,    49,    42,     0,    43,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     2,
      41,    41,    50,     0,    38,    39,     0,    37,    29,     0,
       0,     0,     0,     0,    12,    13,     0,    14,    15,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    44,
      40,    31,     0,    30,     0,    23,    33,    33,    25,    29,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    21,    47,    48,     0,    28,    19,
       0,    34,    35,     0,     0,     0,    11,     0,     3,     4,
       5,     9,     6,     7,     8,    27,    20,    32,    45,     0,
       0,    16,     0,     0,    36,     0,    17,    26,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -24,   -24,     3,    -7,   -12,   103,    89,   108,   -24,    -1,
     -23,   -15,   -24,   -24,   -24,   -24,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    51,    42,    19,    52,    53,    80,    81,    82,
      27,     3,     4,    20,    21,    22,     8
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       6,    18,    33,    50,    63,    47,    48,    18,    64,    65,
      66,    67,    68,    60,    69,    70,    44,     1,    41,    43,
      34,    35,    49,    45,    36,    37,    38,     5,    39,    28,
       7,    29,    54,    55,    74,    75,    76,     9,    30,    18,
      18,    18,    61,    62,    11,    12,    13,    72,    73,    40,
      46,    87,    58,   103,    10,    14,    18,    46,    68,    95,
      69,    70,    15,    11,    18,    16,    31,    88,    89,    90,
      91,    92,    93,    94,    14,    17,    67,    68,    23,    69,
      70,    15,   108,    32,    16,    86,    46,    -1,   102,    -1,
      -1,   107,    78,    56,    17,    79,    18,    59,   104,    29,
      64,    65,    66,    67,    68,    96,    69,    70,    64,    65,
      66,    67,    68,   106,    69,    70,    57,    44,    64,    65,
      66,    67,    68,    85,    69,    70,    64,    65,    66,    67,
      68,    77,    69,    70,    24,    25,    26,    98,    99,   100,
      64,    65,    66,    67,    68,   101,    69,    70,    71,    64,
      65,    66,    67,    68,   105,    69,    70,    64,    65,    66,
      67,    68,    84,    69,    70,    83,    97
};

static const yytype_uint8 yycheck[] =
{
       1,     8,    14,    26,    26,    20,    21,    14,    30,    31,
      32,    33,    34,    36,    36,    37,    16,    13,    15,    16,
       6,     7,    23,    23,    10,    11,    12,     7,    14,    14,
       0,    16,    29,    30,    46,    47,    48,    21,    23,    46,
      47,    48,    39,    40,     7,     8,     9,    44,    45,    35,
      24,    63,    19,    27,    20,    18,    63,    24,    34,    71,
      36,    37,    25,     7,    71,    28,     7,    64,    65,    66,
      67,    68,    69,    70,    18,    38,    33,    34,    13,    36,
      37,    25,   105,     7,    28,    15,    24,    34,    85,    36,
      37,   103,    15,    14,    38,    17,   103,    14,    99,    16,
      30,    31,    32,    33,    34,    17,    36,    37,    30,    31,
      32,    33,    34,    17,    36,    37,    14,    16,    30,    31,
      32,    33,    34,    16,    36,    37,    30,    31,    32,    33,
      34,    21,    36,    37,     3,     4,     5,    15,    21,    15,
      30,    31,    32,    33,    34,    15,    36,    37,    29,    30,
      31,    32,    33,    34,    20,    36,    37,    30,    31,    32,
      33,    34,    59,    36,    37,    57,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    49,    59,    60,     7,    57,     0,    64,    21,
      20,     7,     8,     9,    18,    25,    28,    38,    51,    52,
      61,    62,    63,    13,     3,     4,     5,    58,    14,    16,
      23,     7,     7,    52,     6,     7,    10,    11,    12,    14,
      35,    50,    51,    50,    16,    23,    24,    59,    59,    57,
      58,    50,    53,    54,    50,    50,    14,    14,    19,    14,
      58,    50,    50,    26,    30,    31,    32,    33,    34,    36,
      37,    29,    50,    50,    52,    52,    52,    21,    15,    17,
      55,    56,    57,    55,    53,    16,    15,    52,    50,    50,
      50,    50,    50,    50,    50,    52,    17,    54,    15,    21,
      15,    15,    50,    27,    57,    20,    17,    52,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    51,
      51,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    58,    58,
      58,    59,    59,    60,    60,    61,    62,    63,    63,    64,
      64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     1,     1,     1,     1,     4,     5,     1,     4,
       4,     3,     3,     3,     1,     3,     6,     4,     4,     0,
       1,     1,     3,     0,     1,     1,     3,     3,     1,     1,
       2,     0,     1,     2,     4,     5,     7,     3,     3,     0,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 45 "ppascal.y" /* yacc.c:1646  */
    {
  Node def = create_Node("", NULL, (yyvsp[-2].node), (yyvsp[-1].node));
  (yyval.node) = create_Node("Mp", NULL, def, (yyvsp[0].node));
  printNode((yyval.node));
  printf("\n");
}
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Pl",create_Type(0,1),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 53 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Mo",create_Type(0,1),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Mu",create_Type(0,1),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 55 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Or",create_Type(0,2),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 56 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Lt",create_Type(0,2),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Eq",create_Type(0,2),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 58 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("And",create_Type(0,2),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 59 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Not",create_Type(0,2),(yyvsp[0].node),NULL);}
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 60 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 61 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node((yyvsp[0].str),create_Type(0,1), NULL,NULL);}
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 62 "ppascal.y" /* yacc.c:1646  */
    {
    if((temp = searchVar(create_Node((yyvsp[0].str),NULL, NULL,NULL),defVar)) == NULL){
      printf("Variable non définie\n") ;
      exit(0);
    }else{
      temp = getVarType(temp, defVar);
      (yyval.node) = create_Node((yyvsp[0].str), temp->m_type, NULL,NULL);
    }
   }
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 71 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("true",create_Type(0,2),NULL,NULL);}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 72 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("false",create_Type(0,2),NULL,NULL);}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "ppascal.y" /* yacc.c:1646  */
    {
   Node nameFunc = create_Node((yyvsp[-3].str),NULL,  NULL, NULL);
   (yyval.node) = create_Node("callFunc",NULL,nameFunc,(yyvsp[-1].node));
 }
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 77 "ppascal.y" /* yacc.c:1646  */
    {
   (yyval.node) = create_Node((yyvsp[-4].str), NULL, (yyvsp[-3].node), (yyvsp[-1].node));
 }
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 80 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 82 "ppascal.y" /* yacc.c:1646  */
    {
     Node var = create_Node((yyvsp[-3].str),NULL,  NULL, NULL);
     if(searchVar(var,defVar)!=NULL){
       (yyval.node) = create_Node("tabSimple", create_Type(0, 3),var, (yyvsp[-1].node));
     }else{
      printf("Variable non définie\n") ;
      exit(0);
    }

  }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 92 "ppascal.y" /* yacc.c:1646  */
    {
     (yyval.node) = create_Node("tab", create_Type(0, 3),(yyvsp[-3].node), (yyvsp[-1].node));
   }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 96 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Se",NULL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 97 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Af", NULL,(yyvsp[-2].node), (yyvsp[0].node));}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "ppascal.y" /* yacc.c:1646  */
    {
    Node variable = create_Node((yyvsp[-2].str),NULL,  NULL, NULL);
    if(!strcmp((yyvsp[0].node)->value,(yyvsp[-2].str))){
      if(searchVar(variable,defVar) != NULL || searchVar(variable,defFP)!= NULL){
        (yyval.node) = create_Node("Af", NULL,variable, (yyvsp[0].node));
        }else{
          printf("Variable non définie\n") ;
          exit(0);
        }
      }else{
        if(searchVar(variable,defVar) != NULL || searchVar(variable,defFP)!= NULL){
          (yyval.node) = create_Node("Af", NULL,variable, (yyvsp[0].node));
        }else{
          printf("Variable non définie\n") ;
          exit(0);
        }
      }
  }
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 116 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("skip", NULL,NULL, NULL);}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 117 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 118 "ppascal.y" /* yacc.c:1646  */
    {
    Node result = create_Node("", NULL,(yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)  = create_Node("If", NULL,(yyvsp[-4].node), result);
  }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 122 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("Wh", NULL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 123 "ppascal.y" /* yacc.c:1646  */
    {
    Node nameFunc = create_Node((yyvsp[-3].str),NULL,  NULL, NULL);
    (yyval.node) = create_Node("callFunc",NULL,nameFunc,(yyvsp[-1].node));
 }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 129 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 130 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 132 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 133 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("args", NULL,(yyvsp[-2].node), (yyvsp[0].node));}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 135 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 136 "ppascal.y" /* yacc.c:1646  */
    {defVar = fusionNode(NULL, defVar, create_Node("",NULL, (yyvsp[0].node), NULL));}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("argt", NULL,(yyvsp[-2].node), (yyvsp[0].node));}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 141 "ppascal.y" /* yacc.c:1646  */
    {
    (yyval.node) = create_Node((yyvsp[-2].str), NULL,NULL, (yyvsp[0].node));
}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 145 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("boolean",create_Type(0,2), NULL, NULL);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 146 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("int",create_Type(0,1), NULL, NULL);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 147 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("array of ",create_Type(0,3), (yyvsp[0].node), NULL);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 149 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 150 "ppascal.y" /* yacc.c:1646  */
    {
          (yyval.node) = create_Node("defVar",NULL, (yyvsp[0].node), NULL);
          if(defVar == NULL){
            defVar = (yyval.node);
          }else{
            defVar = fusionNode(NULL, defVar, (yyval.node));
          }
        }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 159 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 160 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("defVar1", NULL,(yyvsp[-3].node), (yyvsp[0].node));}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 162 "ppascal.y" /* yacc.c:1646  */
    {
  Node name = create_Node((yyvsp[-3].str),NULL, NULL,NULL);
  (yyval.node) = create_Node((yyvsp[-4].str),NULL, name,(yyvsp[-1].node));
  if(defFP == NULL){
      defFP = (yyval.node);
    }else{
      defFP = fusionNode(NULL,defFP, (yyval.node));
    }
}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 172 "ppascal.y" /* yacc.c:1646  */
    {
  Node name = create_Node((yyvsp[-5].str),NULL, NULL,NULL);
  Node def = create_Node("", NULL,name, (yyvsp[-3].node));
  (yyval.node) = create_Node((yyvsp[-6].str),NULL,  def, (yyvsp[0].node));
  if(defFP == NULL){
      defFP = (yyval.node);
    }else{
      defFP = fusionNode(NULL,defFP, (yyval.node));
    }
}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 183 "ppascal.y" /* yacc.c:1646  */
    {
  Node node = create_Node("", NULL,(yyvsp[-1].node), (yyvsp[0].node));
  (yyval.node) = create_Node("defproc", NULL,(yyvsp[-2].node), node);
}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 187 "ppascal.y" /* yacc.c:1646  */
    {
   Node node = create_Node("", NULL,(yyvsp[-1].node), (yyvsp[0].node));
   (yyval.node) = create_Node("defproc", NULL,(yyvsp[-2].node), node);
 }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 192 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 193 "ppascal.y" /* yacc.c:1646  */
    {(yyval.node) = create_Node("LD", NULL,(yyvsp[-1].node), (yyvsp[0].node));}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1772 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 195 "ppascal.y" /* yacc.c:1906  */


void yyerror(const char *s){
  fprintf( stderr, "Erreur : %s\n", s);
  exit(0);
}

void printToken(){
  int token;
   while ((token = yylex()) != 0)
       printf("Token: %d (%s)\n", token, yytext);
}

int main(int argn, char **argv){
  //printToken();
  yyparse();
}
