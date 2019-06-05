/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.5"

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


extern SymbolTable* getCurrentTable();
extern SymbolTable* getNewSymbolTable();
extern SymbolTable* popAndGetPrevious();
extern void* arvore;
extern char* yytext;
extern int get_line_number();

int yylex(void);

void yyerror (char const *s);


#line 87 "parser.tab.c" /* yacc.c:339  */

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
#line 20 "parser.y" /* yacc.c:355  */

    LexicalValue lexicalValue;
    Node* node;

#line 178 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

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
       0,   176,   176,   177,   181,   182,   183,   184,   188,   190,
     196,   201,   202,   206,   208,   215,   216,   220,   221,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     240,   245,   246,   247,   251,   252,   256,   260,   261,   268,
     269,   270,   278,   282,   290,   294,   295,   303,   304,   312,
     316,   317,   318,   327,   328,   332,   337,   344,   349,   350,
     354,   355,   356,   362,   368,   369,   373,   374,   375,   379,
     380,   384,   385,   389,   390,   394,   395,   396,   397,   398,
     402,   403,   404,   405,   406,   407,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   423,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   450,   454,   458
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
  "command_block", "list_of_commands", "valid_command",
  "local_var_declaration", "local_var_attribute", "is_local_var_init",
  "local_var_init", "local_var_init_valid_values", "assignment_command",
  "input_command", "output_command", "function_call_command",
  "function_call_parameters_command", "shift_command",
  "break_flow_command", "break_flow_valid_commands",
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

#define YYPACT_NINF -161

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-161)))

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -161,    -9,     3,    56,  -161,  -161,   163,   -27,   163,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   -13,    18,
      36,     2,    84,  -161,   -11,    38,   163,  -161,  -161,    42,
     163,     6,  -161,    49,  -161,    70,    50,    51,   398,   360,
     398,   100,    53,  -161,  -161,     1,  -161,  -161,    32,    64,
    -161,   163,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,   -28,   118,  -161,    71,   398,   398,
    -161,  -161,  -161,  -161,   398,   398,    92,   398,    94,    95,
     398,  -161,  -161,   286,  -161,  -161,  -161,  -161,  -161,  -161,
      86,   286,   286,    20,   398,   307,  -161,  -161,    78,  -161,
     111,   398,   398,   382,  -161,   140,    75,   129,   339,   339,
    -161,    17,  -161,  -161,   160,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   360,   102,  -161,  -161,  -161,   108,   106,   191,
    -161,   105,  -161,   153,   286,   286,  -161,  -161,   286,  -161,
     176,   182,  -161,    17,    17,    17,    17,    17,    17,   339,
     339,   172,   172,   172,   172,    17,    17,   224,   -42,   -42,
    -161,   398,    20,  -161,  -161,   107,  -161,  -161,    38,    38,
     398,   255,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,   185,  -161,   -42,    20,    38,   128,  -161,    38,
    -161
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      74,    73,    74,     0,    74,     6,     7,     0,     0,     0,
       1,     4,     5,    75,    76,    77,    78,    79,     0,     0,
       0,     0,    74,     8,    70,     0,     0,    69,    12,     0,
       0,    33,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    32,     0,    51,    52,    72,    16,    21,    33,     0,
      19,     0,    20,    22,    23,    24,    25,    26,    49,    27,
      53,    54,    28,    29,     0,     0,     9,    14,     0,     0,
      90,    91,    92,    93,     0,     0,     0,     0,     0,     0,
       0,    94,    89,    42,    88,    87,    86,    67,    68,    43,
      65,    66,    50,    33,     0,     0,    44,    15,     0,    18,
       0,     0,     0,     0,    31,    70,     0,     0,   102,   101,
     116,   103,   117,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    60,    61,    62,     0,    59,     0,
      46,     0,    17,    35,    47,    48,    40,    41,    39,    13,
       0,     0,    95,   109,   110,   111,   112,   113,   114,    97,
      96,    99,    98,   100,   104,   107,   108,     0,   106,   105,
      64,     0,    33,    71,    45,     0,    30,    34,     0,     0,
       0,     0,    58,    80,    81,    83,    82,    84,    85,    38,
      36,    37,    55,    63,   115,    33,     0,     0,    56,     0,
      57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,  -161,   194,   195,  -161,   126,   -25,  -161,   164,
     -21,  -161,  -161,  -161,  -161,   -18,  -161,  -161,    11,  -161,
      29,  -161,  -161,  -161,  -161,  -161,  -161,  -160,  -161,  -161,
     -71,  -161,  -161,   -30,   109,    89,  -161,   -36,  -161,  -161,
    -161
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    25,    29,    47,    48,    49,
     134,    51,   176,   177,   190,   135,    53,    54,    81,    96,
     136,    57,    58,    59,    60,    61,    62,   137,   138,    63,
      89,    90,    30,    82,    65,    18,   191,    91,    84,    85,
      86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    64,    83,    10,    92,    27,   101,   102,     1,    -3,
      50,    19,   182,    52,    36,   130,   131,    37,    64,    38,
      39,    40,   -74,    41,   141,    42,     1,    50,    43,    44,
      52,    21,   106,   107,   103,   197,   -74,    41,   108,   109,
      36,   111,    55,    37,   114,    38,    39,    40,   -74,    41,
      45,    42,     8,     2,    43,    44,    -2,    28,   139,    55,
      56,   170,    94,    64,   133,   144,   145,   148,    95,    24,
      31,    46,   129,     1,   130,   131,    45,    56,    22,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,    31,    97,    20,    23,
       2,     1,    31,   115,   116,   117,   118,   119,   120,     7,
      34,     9,    66,     7,    67,    33,   -73,    68,    69,    35,
      93,   121,   122,   123,   124,   125,   126,    99,   127,   128,
     129,    26,   130,   131,   104,   181,   110,   105,   112,   113,
     100,   142,    64,   150,   194,   183,   184,   185,   186,   187,
     188,   189,   132,   192,   193,   143,    27,   115,   116,   117,
     118,   119,   120,    94,   171,    64,    13,    14,    15,    16,
      17,   198,   172,   174,   200,   121,   122,   123,   124,   125,
     126,   175,   127,   128,   129,   178,   130,   131,   115,   116,
     117,   118,   119,   120,   179,   196,   199,   151,    11,    12,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    98,   127,   128,   129,     0,   130,   131,   115,
     116,   117,   118,   119,   120,   127,   128,   129,   152,   130,
     131,   149,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,     0,   127,   128,   129,     0,   130,   131,
       0,   173,   115,   116,   117,   118,   119,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,     0,   127,   128,   129,
     180,   130,   131,   115,   116,   117,   118,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,     0,   127,   128,
     129,   195,   130,   131,   115,   116,   117,   118,   119,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,     0,   127,
     128,   129,     0,   130,   131,    70,    71,    72,    73,    87,
      88,    45,     0,    74,    75,    76,     0,     0,     0,    77,
       0,     0,     0,     0,     0,    78,    79,   115,   116,   117,
     118,   119,   120,     0,    80,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,   124,   125,
     126,     0,   127,   128,   129,     0,   130,   131,    70,    71,
      72,    73,    87,    88,    45,     0,    74,    75,    76,     0,
       0,     0,    77,     0,     0,     0,     0,     0,    78,    79,
      70,    71,    72,    73,   146,   147,    45,    80,    74,    75,
      76,     0,     0,     0,    77,     0,    70,    71,    72,    73,
      78,    79,    45,     0,    74,    75,    76,     0,     0,    80,
      77,     0,     0,     0,     0,     0,    78,    79,     0,     0,
       0,     0,     0,     0,     0,    80
};

static const yytype_int16 yycheck[] =
{
      25,    31,    38,     0,    40,    16,    34,    35,    17,     0,
      31,    38,   172,    31,     8,    57,    58,    11,    48,    13,
      14,    15,    16,    17,    95,    19,    17,    48,    22,    23,
      48,    44,    68,    69,    62,   195,    16,    17,    74,    75,
       8,    77,    31,    11,    80,    13,    14,    15,    16,    17,
      44,    19,    61,    44,    22,    23,     0,    68,    94,    48,
      31,   132,    61,    93,    44,   101,   102,   103,    67,    67,
      64,    65,    55,    17,    57,    58,    44,    48,    60,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,    64,    65,     9,    63,
      44,    17,    64,    28,    29,    30,    31,    32,    33,     0,
      68,     2,    63,     4,    44,    26,    16,    67,    67,    30,
      67,    46,    47,    48,    49,    50,    51,    63,    53,    54,
      55,    22,    57,    58,    16,   171,    44,    66,    44,    44,
      51,    63,   172,    68,   180,    38,    39,    40,    41,    42,
      43,    44,    66,   178,   179,    44,    16,    28,    29,    30,
      31,    32,    33,    61,    56,   195,     3,     4,     5,     6,
       7,   196,    66,    68,   199,    46,    47,    48,    49,    50,
      51,    28,    53,    54,    55,     9,    57,    58,    28,    29,
      30,    31,    32,    33,    12,    10,    68,    68,     4,     4,
      28,    29,    30,    31,    32,    33,    46,    47,    48,    49,
      50,    51,    48,    53,    54,    55,    -1,    57,    58,    28,
      29,    30,    31,    32,    33,    53,    54,    55,    68,    57,
      58,   105,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    -1,    57,    58,
      -1,    60,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    28,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    -1,    53,    54,
      55,    56,    57,    58,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    55,    -1,    57,    58,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    28,    29,    30,
      31,    32,    33,    -1,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    53,    54,    55,    -1,    57,    58,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,
      38,    39,    40,    41,    42,    43,    44,    67,    46,    47,
      48,    -1,    -1,    -1,    52,    -1,    38,    39,    40,    41,
      58,    59,    44,    -1,    46,    47,    48,    -1,    -1,    67,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    44,    70,    71,    72,    73,   103,    61,   103,
       0,    72,    73,     3,     4,     5,     6,     7,   104,    38,
     104,    44,    60,    63,    67,    74,   103,    16,    68,    75,
     101,    64,    76,   104,    68,   104,     8,    11,    13,    14,
      15,    17,    19,    22,    23,    44,    65,    76,    77,    78,
      79,    80,    84,    85,    86,    87,    89,    90,    91,    92,
      93,    94,    95,    98,   102,   103,    63,    44,    67,    67,
      38,    39,    40,    41,    46,    47,    48,    52,    58,    59,
      67,    87,   102,   106,   107,   108,   109,    42,    43,    99,
     100,   106,   106,    67,    61,    67,    88,    65,    78,    63,
     104,    34,    35,    62,    16,    66,   106,   106,   106,   106,
      44,   106,    44,    44,   106,    28,    29,    30,    31,    32,
      33,    46,    47,    48,    49,    50,    51,    53,    54,    55,
      57,    58,    66,    44,    79,    84,    89,    96,    97,   106,
      68,    99,    63,    44,   106,   106,    42,    43,   106,    75,
      68,    68,    68,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
      99,    56,    66,    60,    68,    28,    81,    82,     9,    12,
      56,   106,    96,    38,    39,    40,    41,    42,    43,    44,
      83,   105,    76,    76,   106,    56,    10,    96,    76,    68,
      76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    80,    80,    80,    81,    81,    82,    83,    83,    84,
      84,    84,    85,    86,    87,    88,    88,    89,    89,    90,
      91,    91,    91,    92,    92,    93,    94,    95,    96,    96,
      97,    97,    97,    98,    99,    99,   100,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   108,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     4,     7,
       5,     3,     2,     5,     3,     3,     2,     3,     2,     1,
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
    default: /* Avoid compiler warnings. */
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
#line 176 "parser.y" /* yacc.c:1648  */
    { arvore = (yyvsp[0].node); (yyval.node) = (yyvsp[0].node); }
#line 1490 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 3:
#line 177 "parser.y" /* yacc.c:1648  */
    { arvore = NULL; (yyval.node) = NULL; }
#line 1496 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 4:
#line 181 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ListOfDeclarations((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1502 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 5:
#line 182 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ListOfDeclarations((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1508 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 6:
#line 183 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1514 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 7:
#line 184 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1520 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 8:
#line 189 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new GlobalVariableDeclaration((yyvsp[-3].lexicalValue), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1526 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 9:
#line 191 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new GlobalVectorVariableDeclaration((yyvsp[-6].lexicalValue), new LiteralNode((yyvsp[-4].lexicalValue)), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1532 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 10:
#line 197 "parser.y" /* yacc.c:1648  */
    {  (yyval.node) = new FunctionDeclarationNode((yyvsp[-2].lexicalValue), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1538 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 11:
#line 201 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1544 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 12:
#line 202 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1550 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 13:
#line 207 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ParametersDeclarationList((yyvsp[-2].lexicalValue), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1556 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 14:
#line 209 "parser.y" /* yacc.c:1648  */
    { pushTempTableAndClear(); (yyval.node) = new ParameterDeclaration((yyvsp[0].lexicalValue), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1562 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 15:
#line 215 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new CommandBlockNode((yyvsp[-1].node)); popAndGetPrevious(); }
#line 1568 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 16:
#line 216 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new CommandBlockNode(NULL); popAndGetPrevious(); }
#line 1574 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 17:
#line 220 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ListOfCommandsNode((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1580 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 18:
#line 221 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1586 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 19:
#line 225 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1592 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 20:
#line 226 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1598 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 21:
#line 227 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1604 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 22:
#line 228 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1610 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 23:
#line 229 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1616 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 24:
#line 230 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1622 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 25:
#line 231 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1628 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 26:
#line 232 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1634 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 27:
#line 233 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1640 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 28:
#line 234 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1646 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 29:
#line 235 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1652 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 30:
#line 241 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LocalVariableDeclarationNode((yyvsp[-1].lexicalValue), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1658 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 31:
#line 245 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LocalVariableDeclarationAttributeNode((yyvsp[0].lexicalValue), (yyvsp[-1].node)); }
#line 1664 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 32:
#line 246 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1670 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 33:
#line 247 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1676 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 34:
#line 251 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1682 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 35:
#line 252 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1688 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 36:
#line 256 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new GenericNode((yyvsp[-1].lexicalValue), { (yyvsp[0].node) }); }
#line 1694 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 37:
#line 260 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1700 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 38:
#line 261 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1706 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 39:
#line 268 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1712 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 40:
#line 269 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1718 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 41:
#line 270 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1724 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 42:
#line 278 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new InputCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1730 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 43:
#line 282 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new OutputCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1736 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 44:
#line 290 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new FunctionCallCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1742 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 45:
#line 294 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1748 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 46:
#line 295 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1754 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 47:
#line 303 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ShiftCommand((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1760 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 48:
#line 304 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ShiftCommand((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1766 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 49:
#line 312 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1772 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 50:
#line 316 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new GenericNode((yyvsp[-1].lexicalValue), { (yyvsp[0].node) }); }
#line 1778 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 51:
#line 317 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1784 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 52:
#line 318 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1790 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 53:
#line 327 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1796 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 54:
#line 328 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1802 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 55:
#line 333 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new IfThenCommandNode((yyvsp[-5].lexicalValue), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1808 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 56:
#line 338 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new IfThenElseCommandNode((yyvsp[-7].lexicalValue), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1814 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 57:
#line 345 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ForCommandNode((yyvsp[-8].lexicalValue), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1820 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 58:
#line 349 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ForParametersDeclarationList((yyvsp[-2].node)->value, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1826 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 59:
#line 350 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1832 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 60:
#line 354 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1838 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 61:
#line 355 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1844 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 62:
#line 356 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1850 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 63:
#line 362 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new WhileCommandNode((yyvsp[-5].lexicalValue), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1856 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 64:
#line 368 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ParametersListNode((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1862 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 65:
#line 369 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1868 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 66:
#line 373 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1874 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 67:
#line 374 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1880 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 68:
#line 375 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1886 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 69:
#line 379 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1892 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 70:
#line 380 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1898 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 71:
#line 384 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new IdentifierVectorNode((yyvsp[-3].lexicalValue), (yyvsp[-1].node)); }
#line 1904 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 72:
#line 385 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new IdentifierNode((yyvsp[0].lexicalValue)); }
#line 1910 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 73:
#line 389 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1916 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 74:
#line 390 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1922 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 75:
#line 394 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1928 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 76:
#line 395 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1934 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 77:
#line 396 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1940 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 78:
#line 397 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1946 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 79:
#line 398 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1952 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 80:
#line 402 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1958 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 81:
#line 403 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1964 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 82:
#line 404 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1970 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 83:
#line 405 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1976 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 84:
#line 406 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1982 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 85:
#line 407 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1988 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 86:
#line 411 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1994 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 87:
#line 412 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2000 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 88:
#line 413 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2006 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 89:
#line 414 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2012 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 90:
#line 415 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2018 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 91:
#line 416 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2024 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 92:
#line 417 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2030 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 93:
#line 418 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2036 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 94:
#line 419 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2042 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 95:
#line 423 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2048 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 96:
#line 427 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2054 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 97:
#line 428 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2060 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 98:
#line 429 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2066 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 99:
#line 430 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2072 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 100:
#line 431 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2078 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 101:
#line 432 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2084 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 102:
#line 433 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2090 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 103:
#line 434 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2096 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 104:
#line 435 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2102 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 105:
#line 436 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2108 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 106:
#line 437 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2114 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 107:
#line 438 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2120 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 108:
#line 439 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2126 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 109:
#line 440 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2132 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 110:
#line 441 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2138 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 111:
#line 442 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2144 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 112:
#line 443 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2150 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 113:
#line 444 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2156 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 114:
#line 445 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2162 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 115:
#line 446 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new TernaryExpressionNode((yyvsp[-3].lexicalValue), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2168 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 116:
#line 450 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2174 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 117:
#line 454 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2180 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 118:
#line 458 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2186 "parser.tab.c" /* yacc.c:1648  */
    break;


#line 2190 "parser.tab.c" /* yacc.c:1648  */
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
#line 461 "parser.y" /* yacc.c:1907  */


void yyerror (char const *s) {
    printf("ERROR =>> Line %d: %s, Last token: %s\n", get_line_number(), s, yytext);
}
