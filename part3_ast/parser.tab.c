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

/* "%code top" blocks.  */
#line 1 "parser.y" /* yacc.c:316  */

    #include "TypesInclude.hh"

#line 67 "parser.tab.c" /* yacc.c:316  */



/* Copy the first part of user declarations.  */
#line 5 "parser.y" /* yacc.c:339  */



extern void* arvore;
extern char* yytext;
extern int get_line_number();

int yylex(void);

void yyerror (char const *s);


#line 85 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    TK_PR_INT = 258,
    TK_PR_FLOAT = 259,
    TK_PR_BOOL = 260,
    TK_PR_CHAR = 261,
    TK_PR_STRING = 262,
    TK_PR_IF = 263,
    TK_PR_THEN = 264,
    TK_PR_ELSE = 265,
    TK_PR_WHILE = 266,
    TK_PR_DO = 267,
    TK_PR_INPUT = 268,
    TK_PR_OUTPUT = 269,
    TK_PR_RETURN = 270,
    TK_PR_CONST = 271,
    TK_PR_STATIC = 272,
    TK_PR_FOREACH = 273,
    TK_PR_FOR = 274,
    TK_PR_SWITCH = 275,
    TK_PR_CASE = 276,
    TK_PR_BREAK = 277,
    TK_PR_CONTINUE = 278,
    TK_PR_CLASS = 279,
    TK_PR_PRIVATE = 280,
    TK_PR_PUBLIC = 281,
    TK_PR_PROTECTED = 282,
    TK_OC_LE = 283,
    TK_OC_GE = 284,
    TK_OC_EQ = 285,
    TK_OC_NE = 286,
    TK_OC_AND = 287,
    TK_OC_OR = 288,
    TK_OC_SL = 289,
    TK_OC_SR = 290,
    TK_OC_FORWARD_PIPE = 291,
    TK_OC_BASH_PIPE = 292,
    TK_LIT_INT = 293,
    TK_LIT_FLOAT = 294,
    TK_LIT_FALSE = 295,
    TK_LIT_TRUE = 296,
    TK_LIT_CHAR = 297,
    TK_LIT_STRING = 298,
    TK_IDENTIFICADOR = 299,
    TOKEN_ERRO = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "parser.y" /* yacc.c:355  */

    LexicalValue lexicalValue;
    Node* node;

#line 176 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   483

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    59,     2,    50,    58,     2,
      67,    68,    48,    47,    66,    46,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    63,
      53,    62,    54,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    60,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    51,    65,     2,     2,     2,     2,
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
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   175,   179,   180,   181,   182,   186,   191,
     196,   197,   201,   202,   206,   212,   213,   217,   218,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     237,   242,   243,   244,   248,   249,   253,   257,   258,   265,
     266,   267,   275,   279,   287,   291,   292,   300,   301,   309,
     313,   314,   315,   324,   325,   329,   334,   341,   346,   347,
     351,   352,   353,   359,   365,   366,   370,   371,   372,   376,
     377,   381,   382,   386,   387,   391,   392,   393,   394,   395,
     399,   400,   401,   402,   403,   404,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   420,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   447,   451,   455
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_PR_INT", "TK_PR_FLOAT", "TK_PR_BOOL",
  "TK_PR_CHAR", "TK_PR_STRING", "TK_PR_IF", "TK_PR_THEN", "TK_PR_ELSE",
  "TK_PR_WHILE", "TK_PR_DO", "TK_PR_INPUT", "TK_PR_OUTPUT", "TK_PR_RETURN",
  "TK_PR_CONST", "TK_PR_STATIC", "TK_PR_FOREACH", "TK_PR_FOR",
  "TK_PR_SWITCH", "TK_PR_CASE", "TK_PR_BREAK", "TK_PR_CONTINUE",
  "TK_PR_CLASS", "TK_PR_PRIVATE", "TK_PR_PUBLIC", "TK_PR_PROTECTED",
  "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ", "TK_OC_NE", "TK_OC_AND", "TK_OC_OR",
  "TK_OC_SL", "TK_OC_SR", "TK_OC_FORWARD_PIPE", "TK_OC_BASH_PIPE",
  "TK_LIT_INT", "TK_LIT_FLOAT", "TK_LIT_FALSE", "TK_LIT_TRUE",
  "TK_LIT_CHAR", "TK_LIT_STRING", "TK_IDENTIFICADOR", "TOKEN_ERRO", "'-'",
  "'+'", "'*'", "'/'", "'%'", "'|'", "'!'", "'<'", "'>'", "'?'", "':'",
  "'^'", "'&'", "'#'", "']'", "'['", "'='", "';'", "'{'", "'}'", "','",
  "'('", "')'", "$accept", "programa", "declarations",
  "global_var_declaration", "function_declaration",
  "list_of_parameters_declaration", "parameters_declaration_list",
  "parameter_declaration", "command_block", "list_of_commands",
  "valid_command", "local_var_declaration", "local_var_attribute",
  "is_local_var_init", "local_var_init", "local_var_init_valid_values",
  "assignment_command", "input_command", "output_command",
  "function_call_command", "function_call_parameters_command",
  "shift_command", "break_flow_command", "break_flow_valid_commands",
  "if_then_else_command", "if_then_only_command",
  "if_then_else_too_command", "for_command", "for_list",
  "for_list_parameter", "while_command", "parameters_list", "parameter",
  "is_const", "identifier", "is_static", "declaration_type",
  "literal_values", "expression", "reference_access_value",
  "get_reference_address", "get_table_value", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,    45,    43,    42,    47,
      37,   124,    33,    60,    62,    63,    58,    94,    38,    35,
      93,    91,    61,    59,   123,   125,    44,    40,    41
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      70,  -110,   -42,    21,    76,  -110,  -110,    22,   144,   416,
    -110,  -110,  -110,   144,  -110,  -110,  -110,  -110,  -110,    20,
    -110,  -110,  -110,  -110,   -35,   416,   416,    28,   416,    29,
      33,   416,  -110,  -110,   209,  -110,  -110,  -110,    27,    16,
     325,  -110,   357,   357,  -110,    47,  -110,  -110,   106,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,  -110,  -110,    -9,    30,
    -110,  -110,  -110,    17,    18,   304,  -110,    47,    47,    47,
      47,    47,    47,   357,   357,   190,   190,   190,   190,    47,
      47,   242,   -49,   -49,  -110,  -110,    23,    26,   144,    14,
    -110,  -110,   378,   416,  -110,    81,    54,    39,    40,   416,
     378,   416,    84,    43,  -110,  -110,  -110,  -110,    52,    49,
    -110,   144,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,   -24,    97,  -110,   -49,  -110,  -110,
     416,   416,   304,  -110,   304,    -4,  -110,    56,  -110,    71,
     416,   416,   400,  -110,   147,   178,  -110,  -110,  -110,    65,
      57,  -110,    94,   304,   304,  -110,  -110,   304,   116,   114,
     416,    -4,   143,  -110,  -110,    30,    30,   273,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,   118,  -110,
      -4,    30,    61,  -110,    30,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      74,    73,    72,     0,    74,     6,     7,    74,     0,     0,
       1,     4,     5,     0,    75,    76,    77,    78,    79,     0,
      90,    91,    92,    93,    72,     0,     0,     0,     0,     0,
       0,     0,    94,    89,     0,    88,    87,    86,     0,     0,
       0,    44,   102,   101,   116,   103,   117,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     8,    70,     0,
      67,    68,    46,     0,    65,    66,    95,   109,   110,   111,
     112,   113,   114,    97,    96,    99,    98,   100,   104,   107,
     108,     0,   106,   105,    69,    11,     0,    13,     0,    33,
       9,    45,     0,     0,    10,    70,     0,     0,     0,     0,
       0,     0,    32,     0,    51,    52,    16,    21,    33,     0,
      19,     0,    20,    22,    23,    24,    25,    26,    49,    27,
      53,    54,    28,    29,     0,     0,    64,   115,    12,    14,
       0,     0,    42,    43,    50,    33,    15,     0,    18,     0,
       0,     0,     0,    31,     0,     0,    60,    61,    62,     0,
      59,    17,    35,    47,    48,    40,    41,    39,     0,     0,
       0,    33,     0,    30,    34,     0,     0,     0,    58,    80,
      81,    83,    82,    84,    85,    38,    36,    37,    55,    63,
      33,     0,     0,    56,     0,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -110,  -110,  -110,   126,   127,  -110,    35,  -110,   -67,  -110,
      48,   -94,  -110,  -110,  -110,  -110,   -84,  -110,  -110,   -83,
    -110,   -38,  -110,  -110,  -110,  -110,  -110,  -110,  -109,  -110,
    -110,   -96,  -110,  -110,     0,    82,   -10,  -110,    -8,  -110,
    -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    69,    96,    97,   117,   118,
     119,   156,   121,   173,   174,   186,   157,   123,   124,    32,
      41,   158,   127,   128,   129,   130,   131,   132,   159,   160,
     133,    73,    74,    98,    33,   135,    19,   187,    75,    35,
      36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    34,   100,    38,     7,   120,   136,    94,    64,    65,
     150,   151,   -74,   112,   143,   122,   125,    42,    43,     9,
      45,    10,   107,    48,   120,   108,     9,   109,   110,   111,
     -74,   112,    40,   113,   122,   125,   114,   115,   152,     1,
       2,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    24,    95,
     107,   126,   178,   108,    39,   109,   110,   111,   -74,   112,
      -3,   113,    44,    46,   114,   115,    -2,    47,    99,   116,
     126,   192,     8,    68,   102,   101,     8,     1,   106,    13,
      67,   104,   105,     1,    99,   137,    24,    94,   139,   134,
     -73,   142,    63,   144,    64,    65,   140,   141,   188,   189,
     145,   149,   148,   153,     2,   162,    99,   146,   134,   161,
       2,   170,   172,   171,   193,   175,   176,   195,   191,   194,
      11,    12,   154,   155,    49,    50,    51,    52,    53,    54,
     138,     0,   163,   164,   167,   134,     0,    14,    15,    16,
      17,    18,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,   177,    64,    65,     0,   147,     0,     0,     0,
       0,   134,     0,     0,    76,    49,    50,    51,    52,    53,
      54,   179,   180,   181,   182,   183,   184,   185,     0,     0,
     134,     0,     0,    55,    56,    57,    58,    59,    60,     0,
      61,    62,    63,     0,    64,    65,    49,    50,    51,    52,
      53,    54,     0,     0,     0,   168,     0,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,     0,    64,    65,    49,    50,    51,
      52,    53,    54,    61,    62,    63,   169,    64,    65,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,    61,    62,    63,     0,    64,    65,     0,    66,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,     0,    61,    62,    63,   103,    64,
      65,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,     0,    61,    62,    63,   190,
      64,    65,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,     0,    61,    62,    63,
       0,    64,    65,    20,    21,    22,    23,    70,    71,    24,
       0,    25,    26,    27,     0,     0,     0,    28,     0,     0,
       0,     0,     0,    29,    30,    49,    50,    51,    52,    53,
      54,     0,    31,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,    60,     0,
      61,    62,    63,     0,    64,    65,    20,    21,    22,    23,
      70,    71,    24,     0,    25,    26,    27,     0,     0,     0,
      28,     0,     0,     0,     0,     0,    29,    30,    20,    21,
      22,    23,   165,   166,    24,    31,    25,    26,    27,     0,
       0,     0,    28,     0,    20,    21,    22,    23,    29,    30,
      24,     0,    25,    26,    27,     0,     0,    31,    28,     0,
       0,     0,     0,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    31
};

static const yytype_int16 yycheck[] =
{
       0,     9,    69,    13,     4,    99,   102,    16,    57,    58,
      34,    35,    16,    17,   110,    99,    99,    25,    26,    61,
      28,     0,     8,    31,   118,    11,    61,    13,    14,    15,
      16,    17,    67,    19,   118,   118,    22,    23,    62,    17,
      44,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    44,    68,
       8,    99,   171,    11,    44,    13,    14,    15,    16,    17,
       0,    19,    44,    44,    22,    23,     0,    44,    64,    65,
     118,   190,     0,    67,    66,    68,     4,    17,    98,     7,
      63,    68,    66,    17,    64,   103,    44,    16,    44,    99,
      16,   109,    55,   111,    57,    58,    67,    67,   175,   176,
      67,   121,    63,    16,    44,    44,    64,    65,   118,    63,
      44,    56,    28,    66,   191,     9,    12,   194,    10,    68,
       4,     4,   140,   141,    28,    29,    30,    31,    32,    33,
     105,    -1,   150,   151,   152,   145,    -1,     3,     4,     5,
       6,     7,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    55,   170,    57,    58,    -1,   118,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    68,    28,    29,    30,    31,    32,
      33,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
     190,    -1,    -1,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    -1,    57,    58,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    68,    -1,    -1,    28,    29,
      30,    31,    32,    33,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    55,    -1,    57,    58,    28,    29,    30,
      31,    32,    33,    53,    54,    55,    68,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    -1,    57,    58,    -1,    60,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    55,
      -1,    57,    58,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    47,    48,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    28,    29,    30,    31,    32,
      33,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,
      53,    54,    55,    -1,    57,    58,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    38,    39,
      40,    41,    42,    43,    44,    67,    46,    47,    48,    -1,
      -1,    -1,    52,    -1,    38,    39,    40,    41,    58,    59,
      44,    -1,    46,    47,    48,    -1,    -1,    67,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    44,    70,    71,    72,    73,   103,   104,    61,
       0,    72,    73,   104,     3,     4,     5,     6,     7,   105,
      38,    39,    40,    41,    44,    46,    47,    48,    52,    58,
      59,    67,    88,   103,   107,   108,   109,   110,   105,    44,
      67,    89,   107,   107,    44,   107,    44,    44,   107,    28,
      29,    30,    31,    32,    33,    46,    47,    48,    49,    50,
      51,    53,    54,    55,    57,    58,    60,    63,    67,    74,
      42,    43,    68,   100,   101,   107,    68,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,    16,    68,    75,    76,   102,    64,
      77,    68,    66,    56,    68,    66,   105,     8,    11,    13,
      14,    15,    17,    19,    22,    23,    65,    77,    78,    79,
      80,    81,    85,    86,    87,    88,    90,    91,    92,    93,
      94,    95,    96,    99,   103,   104,   100,   107,    75,    44,
      67,    67,   107,   100,   107,    67,    65,    79,    63,   105,
      34,    35,    62,    16,   107,   107,    80,    85,    90,    97,
      98,    63,    44,   107,   107,    42,    43,   107,    68,    68,
      56,    66,    28,    82,    83,     9,    12,   107,    97,    38,
      39,    40,    41,    42,    43,    44,    84,   106,    77,    77,
      56,    10,    97,    77,    68,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    72,    73,
      74,    74,    75,    75,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    81,    81,    81,    82,    82,    83,    84,    84,    85,
      85,    85,    86,    87,    88,    89,    89,    90,    90,    91,
      92,    92,    92,    93,    93,    94,    95,    96,    97,    97,
      98,    98,    98,    99,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   106,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   109,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     4,     5,
       3,     2,     3,     1,     3,     3,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     1,     0,     1,     0,     2,     1,     1,     3,
       3,     3,     2,     2,     2,     3,     2,     3,     3,     1,
       2,     1,     1,     1,     1,     6,     8,     9,     3,     1,
       1,     1,     1,     6,     3,     1,     1,     1,     1,     1,
       0,     4,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     2,     2,     2
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
#line 174 "parser.y" /* yacc.c:1646  */
    { arvore = (yyvsp[0].node); (yyval.node) = (yyvsp[0].node); }
#line 1488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 175 "parser.y" /* yacc.c:1646  */
    { arvore = NULL; (yyval.node) = NULL; }
#line 1494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ListOfDeclarations((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ListOfDeclarations((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new GlobalVariableDeclaration((yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 192 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionDeclarationNode((yyvsp[-2].lexicalValue), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 197 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ParametersDeclarationList((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ParameterDeclaration((yyvsp[0].lexicalValue), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new CommandBlockNode((yyvsp[-1].node)); }
#line 1566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new CommandBlockNode(NULL); }
#line 1572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 217 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ListOfCommandsNode((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 224 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 229 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LocalVariableDeclarationNode((yyvsp[-1].lexicalValue), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LocalVariableDeclarationAttributeNode((yyvsp[0].lexicalValue), (yyvsp[-1].node)); }
#line 1662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new GenericNode((yyvsp[-1].lexicalValue), { (yyvsp[0].node) }); }
#line 1692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 265 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new InputCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new OutputCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionCallCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 291 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 292 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ShiftCommand((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ShiftCommand((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new GenericNode((yyvsp[-1].lexicalValue), { (yyvsp[0].node) }); }
#line 1776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IfThenCommandNode((yyvsp[-5].lexicalValue), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IfThenElseCommandNode((yyvsp[-7].lexicalValue), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ForCommandNode((yyvsp[-8].lexicalValue), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1818 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ParametersDeclarationList((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 351 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 353 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new WhileCommandNode((yyvsp[-5].lexicalValue), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 365 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ParametersListNode((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 366 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 370 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 371 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 372 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IdentifierNode((yyvsp[-3].lexicalValue), (yyvsp[-1].node)); }
#line 1902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 382 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 386 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 387 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 392 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 393 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 403 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 408 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 409 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 411 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 412 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 413 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 414 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 416 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 420 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 424 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 425 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 426 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 427 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 428 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 429 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 430 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 431 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 432 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 433 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 434 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 435 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 436 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 437 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 438 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 439 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 440 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 441 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 442 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 443 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new TernaryExpressionNode((yyvsp[-3].lexicalValue), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 447 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 451 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2188 "parser.tab.c" /* yacc.c:1646  */
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
#line 458 "parser.y" /* yacc.c:1906  */


void yyerror (char const *s) {
    printf("ERROR =>> Line %d: %s, Last token: %s\n", get_line_number(), s, yytext);
}


