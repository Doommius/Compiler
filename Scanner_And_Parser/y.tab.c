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
#line 1 "bison/exp.y" /* yacc.c:339  */

#include <stdio.h>
#include "tree.h"
#include "y.tab.h"


extern char *yytext;
//extern EXP *theexpression;
extern body *theprogram;

void yyerror() {
   printf("syntax error before %s\n",yytext);
}

#line 81 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    tINTCONST = 258,
    tIDENTIFIER = 259,
    EQ = 260,
    NEQ = 261,
    LEQ = 262,
    GEQ = 263,
    LT = 264,
    GT = 265,
    IF = 266,
    ELSE = 267,
    WHILE = 268,
    FOR = 269,
    IN = 270,
    FUNCTION = 271,
    TYPEINT = 272,
    TYPESTRING = 273,
    TYPEBOOLEAN = 274,
    SEMICOLON = 275,
    RETURN = 276,
    AND = 277,
    OR = 278,
    ASSIGN = 279,
    TRUE = 280,
    FALSE = 281,
    _NULL = 282,
    FUNC = 283,
    END = 284,
    INT = 285,
    BOOL = 286,
    ARRAY_OF = 287,
    RECORD_OF = 288,
    TYPE = 289,
    VAR = 290,
    OF_LENGTH = 291,
    THEN = 292,
    WRITE = 293,
    ALLOCATE = 294,
    DO = 295
  };
#endif
/* Tokens.  */
#define tINTCONST 258
#define tIDENTIFIER 259
#define EQ 260
#define NEQ 261
#define LEQ 262
#define GEQ 263
#define LT 264
#define GT 265
#define IF 266
#define ELSE 267
#define WHILE 268
#define FOR 269
#define IN 270
#define FUNCTION 271
#define TYPEINT 272
#define TYPESTRING 273
#define TYPEBOOLEAN 274
#define SEMICOLON 275
#define RETURN 276
#define AND 277
#define OR 278
#define ASSIGN 279
#define TRUE 280
#define FALSE 281
#define _NULL 282
#define FUNC 283
#define END 284
#define INT 285
#define BOOL 286
#define ARRAY_OF 287
#define RECORD_OF 288
#define TYPE 289
#define VAR 290
#define OF_LENGTH 291
#define THEN 292
#define WRITE 293
#define ALLOCATE 294
#define DO 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "bison/exp.y" /* yacc.c:355  */

    int intconst;
    char *stringconst;
    struct EXP *exp;
    struct function *function;
    struct head *head;
    struct tail *tail;
    struct type *type;
    struct par_decl_list *par_decl_list;
    struct var_decl_list *var_decl_list;
    struct var_type *var_type;
    struct body *body;
    struct decl_list *decl_list;
    struct declaration *declaration;
    struct statement_list *statement_list;
    struct statement *statement;
    struct variable *variable;
    struct expression *expression;
    struct term *term;
    struct act_list *act_list;
    struct exp_list *exp_list;

#line 224 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   392

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,     2,     2,     2,
      45,    46,    43,    41,    50,    42,    55,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    52,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,    57,    49,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   111,   115,   119,   123,   125,   127,   129,
     131,   135,   138,   141,   143,   147,   151,   156,   159,   162,
     164,   166,   170,   172,   176,   178,   180,   182,   184,   186,
     188,   190,   192,   196,   198,   200,   204,   206,   208,   210,
     212,   214,   216,   218,   220,   222,   224,   226,   228,   230,
     234,   236,   238,   240,   242,   244,   246,   248,   250,   254,
     257,   260,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINTCONST", "tIDENTIFIER", "EQ", "NEQ",
  "LEQ", "GEQ", "LT", "GT", "IF", "ELSE", "WHILE", "FOR", "IN", "FUNCTION",
  "TYPEINT", "TYPESTRING", "TYPEBOOLEAN", "SEMICOLON", "RETURN", "AND",
  "OR", "ASSIGN", "TRUE", "FALSE", "_NULL", "FUNC", "END", "INT", "BOOL",
  "ARRAY_OF", "RECORD_OF", "TYPE", "VAR", "OF_LENGTH", "THEN", "WRITE",
  "ALLOCATE", "DO", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "':'", "'{'",
  "'}'", "','", "'='", "';'", "'['", "']'", "'.'", "'!'", "'|'", "$accept",
  "program", "function", "head", "tail", "type", "par_decl_list",
  "var_decl_list", "var_type", "body", "decl_list", "declaration",
  "statement_list", "statement", "variable", "expression", "term",
  "act_list", "exp_list", YY_NULLPTR
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
     295,    43,    45,    42,    47,    40,    41,    58,   123,   125,
      44,    61,    59,    91,    93,    46,    33,   124
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,    19,    26,    31,     9,   -72,    -2,   -72,   246,    -2,
      10,   -10,    17,    21,    29,   -72,    40,   -72,    25,    25,
      25,    25,    71,   246,   -72,   246,   -31,   -72,    31,    12,
      12,   -72,    31,    76,   -72,   -72,    38,   -72,   -72,   -72,
      25,    74,    25,   -43,   306,   -72,   329,   133,   156,   -34,
      35,   -72,    25,    25,    88,    47,   -72,   -72,   -72,   -72,
      12,    46,    43,   -72,   -72,   -72,    25,   255,    25,   -72,
      80,    25,    25,    25,    25,    25,    25,    25,    25,   246,
      25,    25,    25,    25,   246,   -72,   -72,    25,   -72,   -72,
     181,   103,   -72,    49,   -72,    31,   -72,   229,    51,   -72,
     -72,   281,   -72,   126,   126,     5,     5,     5,     5,   348,
     348,    86,    -4,    -4,   -72,   -72,   -72,   204,   -72,   -72,
      12,    55,    25,   -72,   -72,   246,   -72,   -72,   -72,   -72,
     -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      18,     0,     0,     0,     0,    20,    18,     2,     0,    18,
       0,     0,     0,     0,    14,     1,     0,    33,     0,     0,
       0,     0,     0,     0,    16,    22,     0,    17,    12,     0,
       0,    21,     0,     0,     3,    50,    33,    54,    55,    56,
       0,     0,     0,    57,     0,    49,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,    11,     6,     7,     8,
       0,     0,     0,    15,    13,     5,    60,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,     0,    26,    32,
       0,     0,    35,     0,     9,     0,    19,    61,     0,    59,
      40,     0,    53,    41,    42,    46,    45,    44,    43,    47,
      48,    29,    36,    37,    38,    39,    31,     0,    28,    34,
       0,     0,     0,    58,    51,     0,    27,     4,    10,    62,
      30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,   -72,   -72,   -72,   -29,   -72,   -21,   -72,    99,
      97,   -72,    11,   -71,    -8,   -15,    66,   -72,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    34,    62,    55,    13,    14,     7,
       8,     9,    24,    25,    43,    97,    45,    98,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      26,    63,    87,    44,    46,    47,    48,    56,   111,    15,
      53,    64,    54,   116,    49,    26,    57,    26,    88,    53,
      52,    54,    53,    10,    54,    67,     1,    70,    35,    36,
      11,    94,     2,     3,    50,    12,    51,    90,    91,    82,
      83,    29,    58,    59,    60,    61,    80,    81,    82,    83,
      37,    38,    39,   101,   130,    28,   103,   104,   105,   106,
     107,   108,   109,   110,    30,   112,   113,   114,   115,    33,
      40,    26,   117,    31,   121,    17,    26,    35,    36,    32,
      65,    41,    42,    66,    89,    71,    72,    73,    74,    75,
      76,   127,    92,    93,    95,    96,   120,   123,   125,    37,
      38,    39,    77,    78,   128,    16,    27,    69,    71,    72,
      73,    74,    75,    76,     0,   129,     0,    26,     0,    68,
       0,    80,    81,    82,    83,    77,    78,     0,     0,     0,
      41,    42,     0,    73,    74,    75,    76,   102,    71,    72,
      73,    74,    75,    76,    80,    81,    82,    83,     0,     0,
       0,     0,     0,     0,     0,    77,    78,   119,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    80,    81,    82,
      83,     0,     0,     0,    80,    81,    82,    83,    77,    78,
       0,     0,     0,     0,     0,    85,    71,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     0,    80,    81,    82,
      83,     0,     0,    77,    78,     0,     0,     0,    86,    71,
      72,    73,    74,    75,    76,     0,     0,     0,     0,     0,
       0,     0,    80,    81,    82,    83,    77,    78,     0,     0,
       0,     0,     0,   118,    71,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     0,    80,    81,    82,    83,     0,
      17,    77,    78,     0,     0,     0,   126,    18,     0,    19,
      71,    72,    73,    74,    75,    76,     0,    20,     0,     0,
      80,    81,    82,    83,     0,     0,     0,    77,    78,   122,
       0,     0,     0,     0,    21,    22,    71,    72,    73,    74,
      75,    76,     0,     0,    23,     0,    80,    81,    82,    83,
       0,   100,     0,    77,    78,     0,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,     0,     0,     0,
       0,     0,    80,    81,    82,    83,     0,   124,    77,    78,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
       0,     0,     0,    79,     0,     0,     0,    80,    81,    82,
      83,    77,    78,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      80,    81,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83
};

static const yytype_int8 yycheck[] =
{
       8,    30,    36,    18,    19,    20,    21,    28,    79,     0,
      53,    32,    55,    84,    22,    23,     4,    25,    52,    53,
      51,    55,    53,     4,    55,    40,    28,    42,     3,     4,
       4,    60,    34,    35,    23,     4,    25,    52,    53,    43,
      44,    51,    30,    31,    32,    33,    41,    42,    43,    44,
      25,    26,    27,    68,   125,    45,    71,    72,    73,    74,
      75,    76,    77,    78,    47,    80,    81,    82,    83,    29,
      45,    79,    87,    52,    95,     4,    84,     3,     4,    50,
       4,    56,    57,    45,    49,     5,     6,     7,     8,     9,
      10,   120,     4,    46,    48,    52,    47,    46,    12,    25,
      26,    27,    22,    23,    49,     6,     9,    41,     5,     6,
       7,     8,     9,    10,    -1,   122,    -1,   125,    -1,    45,
      -1,    41,    42,    43,    44,    22,    23,    -1,    -1,    -1,
      56,    57,    -1,     7,     8,     9,    10,    57,     5,     6,
       7,     8,     9,    10,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    54,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    41,    42,    43,
      44,    -1,    -1,    -1,    41,    42,    43,    44,    22,    23,
      -1,    -1,    -1,    -1,    -1,    52,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    -1,    22,    23,    -1,    -1,    -1,    52,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    22,    23,    -1,    -1,
      -1,    -1,    -1,    52,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,
       4,    22,    23,    -1,    -1,    -1,    52,    11,    -1,    13,
       5,     6,     7,     8,     9,    10,    -1,    21,    -1,    -1,
      41,    42,    43,    44,    -1,    -1,    -1,    22,    23,    50,
      -1,    -1,    -1,    -1,    38,    39,     5,     6,     7,     8,
       9,    10,    -1,    -1,    48,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    22,    23,
      -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    22,    23,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    34,    35,    59,    60,    61,    67,    68,    69,
       4,     4,     4,    65,    66,     0,    67,     4,    11,    13,
      21,    38,    39,    48,    70,    71,    72,    68,    45,    51,
      47,    52,    50,    29,    62,     3,     4,    25,    26,    27,
      45,    56,    57,    72,    73,    74,    73,    73,    73,    72,
      70,    70,    51,    53,    55,    64,    65,     4,    30,    31,
      32,    33,    63,    63,    65,     4,    45,    73,    45,    74,
      73,     5,     6,     7,     8,     9,    10,    22,    23,    37,
      41,    42,    43,    44,    40,    52,    52,    36,    52,    49,
      73,    73,     4,    46,    63,    48,    52,    73,    75,    76,
      46,    73,    57,    73,    73,    73,    73,    73,    73,    73,
      73,    71,    73,    73,    73,    73,    71,    73,    52,    54,
      47,    65,    50,    46,    46,    12,    52,    63,    49,    76,
      71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    61,    62,    63,    63,    63,    63,
      63,    64,    64,    65,    65,    66,    67,    68,    68,    69,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     7,     2,     1,     1,     1,     2,
       4,     1,     0,     3,     1,     3,     2,     2,     0,     5,
       1,     3,     1,     2,     3,     3,     3,     5,     4,     4,
       6,     4,     3,     1,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     2,     3,     1,     1,     1,     1,     4,     1,
       0,     1,     3
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
#line 108 "bison/exp.y" /* yacc.c:1646  */
    { theprogram = (yyvsp[0].body);}
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 112 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.function) = make_Func((yyvsp[-2].head), (yyvsp[-1].body), (yyvsp[0].tail));}
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 116 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.head) = make_Head((yyvsp[-5].stringconst), (yyvsp[-3].par_decl_list), (yyvsp[0].type));}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 120 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.tail) = make_Tail((yyvsp[0].stringconst));}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 124 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.type) = make_Type_id((yyvsp[0].stringconst));}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 126 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.type) = make_Type_int();}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 128 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.type) = make_Type_bool();}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 130 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.type) = make_Type_array((yyvsp[0].type));}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 132 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.type) = make_Type_record((yyvsp[-1].var_decl_list));}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 136 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.par_decl_list) = make_PDL_list((yyvsp[0].var_decl_list));}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 138 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.par_decl_list) = make_PDL_empty();}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 142 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.var_decl_list) = make_VDL_list((yyvsp[-2].var_type), (yyvsp[0].var_decl_list));}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 144 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.var_decl_list) = make_VDL_type((yyvsp[0].var_type));}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 148 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.var_type) = make_VType_id((yyvsp[-2].stringconst), (yyvsp[0].type));}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 152 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.body) = make_Body((yyvsp[-1].decl_list), (yyvsp[0].statement_list));}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 157 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.decl_list) = make_DL_list((yyvsp[-1].declaration), (yyvsp[0].decl_list));}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 159 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.decl_list) = make_DL_empty();}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 163 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.declaration) = make_Decl_type((yyvsp[-3].stringconst), (yyvsp[-1].type));}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 165 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.declaration) = make_Decl_func((yyvsp[0].function));}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 167 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.declaration) = make_Decl_list((yyvsp[-1].var_decl_list));}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 171 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement_list) = make_SL_statement((yyvsp[0].statement));}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 173 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement_list) = make_SL_list((yyvsp[-1].statement), (yyvsp[0].statement_list));}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 177 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_ret((yyvsp[-1].expression));}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 179 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_wrt((yyvsp[-1].expression));}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 181 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_allocate_var((yyvsp[-1].variable));}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 183 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_allocate_length((yyvsp[-3].variable), (yyvsp[-1].expression));}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 185 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_assign((yyvsp[-3].variable), (yyvsp[-1].expression));}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 187 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_if((yyvsp[-2].expression), (yyvsp[0].statement));}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 189 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_if_else((yyvsp[-4].expression), (yyvsp[-2].statement), (yyvsp[0].statement));}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 191 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_while((yyvsp[-2].expression), (yyvsp[0].statement));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 193 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.statement) = make_STMT_list((yyvsp[-1].statement_list));}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 197 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.variable) = make_Var_id((yyvsp[0].stringconst));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 199 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.variable) = make_Var_exp((yyvsp[-3].variable), (yyvsp[-1].expression));}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 201 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.variable) = make_Var_varid((yyvsp[-2].variable), (yyvsp[0].stringconst));}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 205 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 207 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_MIN, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 209 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_MULT, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 211 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_DIV, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 213 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = (yyvsp[-1].expression);}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 215 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 217 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 219 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_GT, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 221 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_LT, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 223 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_GEQ, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 225 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_LEQ, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 227 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_AND, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 229 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP(exp_OR, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 231 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.expression) = make_EXP_term((yyvsp[0].term));}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 235 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_num((yyvsp[0].intconst));}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 237 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_par((yyvsp[-1].expression));}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 239 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_not((yyvsp[0].term));}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 241 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_abs((yyvsp[-1].expression));}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 243 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_boolean(1);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 245 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_boolean(0);}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 247 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_null();}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 249 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_variable((yyvsp[0].variable));}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 251 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.term) = make_Term_list((yyvsp[-3].stringconst), (yyvsp[-1].act_list));}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 255 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.act_list) = make_Act_list((yyvsp[0].exp_list));}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 257 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.act_list) = make_Act_empty();}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 261 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.exp_list) = make_ExpL_exp((yyvsp[0].expression));}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 263 "bison/exp.y" /* yacc.c:1646  */
    {(yyval.exp_list) = make_ExpL_list((yyvsp[-2].expression), (yyvsp[0].exp_list));}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1825 "y.tab.c" /* yacc.c:1646  */
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
#line 266 "bison/exp.y" /* yacc.c:1906  */
