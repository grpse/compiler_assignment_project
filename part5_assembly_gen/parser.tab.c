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


extern SymbolTable* getTempTable();
extern SymbolTable* popAndGetPrevious();
extern void forcePushTableAsCurrent(SymbolTable* someTable);
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
#define YYLAST   530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

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
     196,   197,   196,   224,   225,   229,   231,   238,   238,   239,
     239,   243,   244,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   263,   268,   269,   270,   274,   275,
     279,   283,   284,   291,   292,   293,   301,   302,   306,   314,
     318,   319,   327,   328,   336,   340,   341,   342,   343,   344,
     353,   354,   358,   363,   370,   370,   375,   376,   380,   381,
     382,   388,   394,   395,   399,   400,   401,   405,   406,   410,
     411,   415,   416,   420,   421,   422,   423,   424,   428,   429,
     430,   431,   432,   433,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   449,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   476,   480,   484
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
  "global_var_declaration", "function_declaration", "@1", "@2",
  "list_of_parameters_declaration", "parameters_declaration_list",
  "command_block", "@3", "@4", "list_of_commands", "valid_command",
  "local_var_declaration", "local_var_attribute", "is_local_var_init",
  "local_var_init", "local_var_init_valid_values", "assignment_command",
  "input_command", "output_command", "function_call_command",
  "function_call_parameters_command", "shift_command",
  "break_flow_command", "break_flow_valid_commands",
  "if_then_else_command", "if_then_only_command",
  "if_then_else_too_command", "for_command", "@5", "for_list",
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

#define YYPACT_NINF -178

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-178)))

#define YYTABLE_NINF -83

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,  -178,   -12,    16,    13,  -178,  -178,   118,    -1,   118,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,     2,    -7,
     -15,  -178,    39,  -178,    -4,   118,   -13,  -178,     9,  -178,
    -178,     8,   118,    10,  -178,  -178,    35,    45,  -178,    -2,
      90,    46,    92,    59,    60,   447,   381,   403,   112,    62,
    -178,  -178,   -49,  -178,     6,    67,  -178,   118,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
     -26,   115,  -178,  -178,   463,   463,  -178,  -178,  -178,  -178,
    -178,   463,   463,    88,   463,    89,    91,   463,  -178,  -178,
     307,  -178,  -178,  -178,  -178,  -178,  -178,    70,   307,  -178,
    -178,   307,  -178,   463,   328,  -178,  -178,    82,  -178,   102,
     463,   463,   425,  -178,   109,   150,   360,   360,  -178,    42,
    -178,  -178,   181,   463,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   463,   463,   463,   463,
     381,    18,   212,  -178,    79,  -178,   120,   307,   307,  -178,
    -178,   307,   141,   149,  -178,    42,    42,    42,    42,    42,
      42,   360,   360,   162,   162,   162,   162,    42,    42,   245,
      20,    20,  -178,   107,  -178,  -178,  -178,    97,   103,  -178,
    -178,    76,  -178,  -178,    10,    10,   463,   463,    18,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,   161,  -178,
      20,   276,  -178,    10,    18,  -178,   104,    10,  -178
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      82,    81,    82,     0,    82,     6,     7,     0,     0,     0,
       1,     4,     5,    83,    84,    85,    86,    87,     0,     0,
       0,    10,    82,     8,     0,     0,    78,    11,     0,    77,
      14,     0,     0,     0,     9,    13,     0,    17,    12,    16,
      37,     0,    78,     0,     0,     0,     0,     0,    36,     0,
      58,    59,    80,    25,    37,     0,    23,     0,    24,    26,
      27,    28,    29,    30,    54,    31,    60,    61,    32,    33,
       0,     0,    20,    15,     0,     0,    98,    99,   100,   101,
      47,     0,     0,     0,     0,     0,     0,     0,   102,    97,
      46,    96,    95,    94,    75,    76,    48,    73,    74,    57,
      56,    55,    64,     0,     0,    49,    18,     0,    22,     0,
       0,     0,     0,    35,     0,     0,   110,   109,   124,   111,
     125,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    51,     0,    21,    39,    52,    53,    44,
      45,    43,     0,     0,   103,   117,   118,   119,   120,   121,
     122,   105,   104,   107,   106,   108,   112,   115,   116,     0,
     114,   113,    72,    80,    68,    69,    70,     0,    67,    79,
      50,     0,    34,    38,     0,     0,     0,     0,    37,    88,
      89,    91,    90,    92,    93,    42,    40,    41,    62,    71,
     123,     0,    66,     0,    37,    63,     0,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,  -178,   169,   171,  -178,  -178,  -178,   134,   -33,
    -178,  -178,  -178,   130,     0,  -178,  -178,  -178,  -178,    12,
    -178,  -178,    19,  -178,    21,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -177,  -178,  -178,   -98,  -178,  -178,   -39,    43,
       1,  -178,   -43,  -178,  -178,  -178
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    24,    33,    27,    31,    53,
      40,    41,    54,    55,   174,    57,   182,   183,   196,   175,
      59,    60,    88,   105,   176,    63,    64,    65,    66,    67,
      68,   141,   177,   178,    69,    96,    97,    32,    89,    71,
      18,   197,    98,    91,    92,    93
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    70,    90,    29,   101,     1,   144,    -3,   110,   111,
      20,   202,   103,    -2,    43,    70,    10,    44,   104,    45,
      46,    47,   -82,    48,     1,    49,    28,   206,    50,    51,
       1,   114,   115,    36,   -82,    48,   112,    19,   116,   117,
      56,   119,   172,     7,   122,     9,    21,     7,    23,     8,
      52,     2,    58,    22,    56,    30,     1,     2,   109,    61,
     142,    62,   173,    26,    42,    25,    58,   147,   148,   151,
      37,   106,    34,    61,    37,    62,    35,   138,   139,    39,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   137,    43,   138,
     139,    44,    70,    45,    46,    47,   -82,    48,    29,    49,
     -19,    72,    50,    51,   189,   190,   191,   192,   193,   194,
     195,    13,    14,    15,    16,    17,    74,    75,   -81,   102,
     108,   113,   118,   120,    52,   121,   140,   123,   124,   125,
     126,   127,   128,   200,   201,   145,   146,   180,   181,    70,
     184,   198,   199,   187,    37,   129,   130,   131,   132,   133,
     134,   185,   135,   136,   137,    70,   138,   139,   103,   188,
     205,   203,   207,    11,   208,    12,    73,   152,   123,   124,
     125,   126,   127,   128,   107,     0,     0,     0,     0,     0,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     0,   135,   136,   137,     0,   138,   139,   123,
     124,   125,   126,   127,   128,   135,   136,   137,   153,   138,
     139,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,     0,   135,   136,   137,     0,   138,   139,
     123,   124,   125,   126,   127,   128,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,     0,   135,   136,   137,     0,   138,
     139,     0,   179,   123,   124,   125,   126,   127,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,     0,   135,   136,
     137,   186,   138,   139,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,     0,   135,
     136,   137,   204,   138,   139,   123,   124,   125,   126,   127,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,     0,
     135,   136,   137,     0,   138,   139,    76,    77,    78,    79,
      94,    95,    52,     0,    81,    82,    83,     0,     0,     0,
      84,     0,     0,     0,     0,     0,    85,    86,   123,   124,
     125,   126,   127,   128,     0,    87,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   132,
     133,   134,     0,   135,   136,   137,     0,   138,   139,    76,
      77,    78,    79,    94,    95,    52,     0,    81,    82,    83,
       0,     0,     0,    84,     0,     0,     0,     0,     0,    85,
      86,    76,    77,    78,    79,    99,   100,    52,    87,    81,
      82,    83,     0,     0,     0,    84,     0,     0,     0,     0,
       0,    85,    86,    76,    77,    78,    79,   149,   150,    52,
      87,    81,    82,    83,     0,     0,     0,    84,     0,     0,
       0,     0,     0,    85,    86,    76,    77,    78,    79,     0,
      80,    52,    87,    81,    82,    83,     0,     0,     0,    84,
       0,    76,    77,    78,    79,    85,    86,    52,     0,    81,
      82,    83,     0,     0,    87,    84,     0,     0,     0,     0,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
      87
};

static const yytype_int16 yycheck[] =
{
      33,    40,    45,    16,    47,    17,   104,     0,    34,    35,
       9,   188,    61,     0,     8,    54,     0,    11,    67,    13,
      14,    15,    16,    17,    17,    19,    25,   204,    22,    23,
      17,    74,    75,    32,    16,    17,    62,    38,    81,    82,
      40,    84,   140,     0,    87,     2,    44,     4,    63,    61,
      44,    44,    40,    60,    54,    68,    17,    44,    57,    40,
     103,    40,    44,    67,    66,    22,    54,   110,   111,   112,
      64,    65,    63,    54,    64,    54,    68,    57,    58,    44,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    55,     8,    57,
      58,    11,   141,    13,    14,    15,    16,    17,    16,    19,
      65,    65,    22,    23,    38,    39,    40,    41,    42,    43,
      44,     3,     4,     5,     6,     7,    67,    67,    16,    67,
      63,    16,    44,    44,    44,    44,    66,    28,    29,    30,
      31,    32,    33,   186,   187,    63,    44,    68,    28,   188,
       9,   184,   185,    56,    64,    46,    47,    48,    49,    50,
      51,    12,    53,    54,    55,   204,    57,    58,    61,    66,
     203,    10,    68,     4,   207,     4,    42,    68,    28,    29,
      30,    31,    32,    33,    54,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    55,    -1,    57,    58,    28,
      29,    30,    31,    32,    33,    53,    54,    55,    68,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    -1,    57,    58,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    55,    -1,    57,
      58,    -1,    60,    28,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    -1,    53,    54,
      55,    56,    57,    58,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    55,    56,    57,    58,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    -1,    57,    58,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    28,    29,
      30,    31,    32,    33,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    -1,    53,    54,    55,    -1,    57,    58,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    38,    39,    40,    41,    42,    43,    44,    67,    46,
      47,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    38,    39,    40,    41,    42,    43,    44,
      67,    46,    47,    48,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    38,    39,    40,    41,    -1,
      43,    44,    67,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    38,    39,    40,    41,    58,    59,    44,    -1,    46,
      47,    48,    -1,    -1,    67,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    44,    70,    71,    72,    73,   108,    61,   108,
       0,    72,    73,     3,     4,     5,     6,     7,   109,    38,
     109,    44,    60,    63,    74,   108,    67,    76,   109,    16,
      68,    77,   106,    75,    63,    68,   109,    64,    78,    44,
      79,    80,    66,     8,    11,    13,    14,    15,    17,    19,
      22,    23,    44,    78,    81,    82,    83,    84,    88,    89,
      90,    91,    93,    94,    95,    96,    97,    98,    99,   103,
     107,   108,    65,    77,    67,    67,    38,    39,    40,    41,
      43,    46,    47,    48,    52,    58,    59,    67,    91,   107,
     111,   112,   113,   114,    42,    43,   104,   105,   111,    42,
      43,   111,    67,    61,    67,    92,    65,    82,    63,   109,
      34,    35,    62,    16,   111,   111,   111,   111,    44,   111,
      44,    44,   111,    28,    29,    30,    31,    32,    33,    46,
      47,    48,    49,    50,    51,    53,    54,    55,    57,    58,
      66,   100,   111,    68,   104,    63,    44,   111,   111,    42,
      43,   111,    68,    68,    68,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   104,    44,    83,    88,    93,   101,   102,    60,
      68,    28,    85,    86,     9,    12,    56,    56,    66,    38,
      39,    40,    41,    42,    43,    44,    87,   110,    78,    78,
     111,   111,   101,    10,    56,    78,   101,    68,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      74,    75,    73,    76,    76,    77,    77,    79,    78,    80,
      78,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    84,    84,    84,    85,    85,
      86,    87,    87,    88,    88,    88,    89,    89,    90,    91,
      92,    92,    93,    93,    94,    95,    95,    95,    95,    95,
      96,    96,    97,    98,   100,    99,   101,   101,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   112,   113,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     4,     7,
       0,     0,     7,     3,     2,     5,     3,     0,     4,     0,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     1,     0,     1,     0,
       2,     1,     1,     3,     3,     3,     2,     2,     2,     2,
       3,     2,     3,     3,     1,     2,     2,     2,     1,     1,
       1,     1,     6,     8,     0,    10,     3,     1,     1,     1,
       1,     6,     3,     1,     1,     1,     1,     1,     0,     4,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     2,     2,     2
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
#line 176 "parser.y" /* yacc.c:1646  */
    { arvore = (yyvsp[0].node); (yyval.node) = (yyvsp[0].node); }
#line 1506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 177 "parser.y" /* yacc.c:1646  */
    { arvore = NULL; (yyval.node) = NULL; }
#line 1512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ListOfDeclarations((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ListOfDeclarations((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new GlobalVariableDeclaration((yyvsp[-3].lexicalValue), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new GlobalVectorVariableDeclaration((yyvsp[-6].lexicalValue), new LiteralNode((yyvsp[-4].lexicalValue)), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.lexicalValue) = (yyvsp[0].lexicalValue); }
#line 1554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 197 "parser.y" /* yacc.c:1646  */
    { 
            SymbolTable* tableWithFunctionParametersDeclaration = getTempTable();

            // GO BACK TO GLOBAL SCOPE TO ADD FUNCTION DECLARATION TO GLOBAL SCOPE
            

            Node* declarationType = (yyvsp[-3].node);
            LexicalValue identifier = (yyvsp[-2].lexicalValue);
            Node* listOfParametersDeclaration = (yyvsp[0].node);
            int type = getTempTable()->getTypeOfDeclaration(declarationType->value);
            auto functionParameters = Node::getFunctionParametersList(listOfParametersDeclaration);
            getTempTable()->insertFunctionDeclaration(identifier, type, functionParameters);

            // Insert function activation registry to inner scopes            
            std::shared_ptr<ActivationRegistry> ar = std::make_shared<ActivationRegistry>();
            ar->function = getTempTable()->getEntry(identifier.tokenValue.s);
            ar->shiftAmount = 0;
            tableWithFunctionParametersDeclaration->activationRegistry = ar;

            // FORCE INSERT PARAMETERS DECLARATION AS PART OF INNER SCOPE OF THE COMMAND BLOCK
            forcePushTableAsCurrent(tableWithFunctionParametersDeclaration);
            (yyval.node) = (yyvsp[0].node); 
        }
#line 1582 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 220 "parser.y" /* yacc.c:1646  */
    {  (yyval.node) = new FunctionDeclarationNode((yyvsp[-4].lexicalValue), (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 224 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1600 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ParametersDeclarationList((yyvsp[-2].lexicalValue), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1606 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 232 "parser.y" /* yacc.c:1646  */
    { pushTempTableAndClear(); (yyval.node) = new ParameterDeclaration((yyvsp[0].lexicalValue), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 238 "parser.y" /* yacc.c:1646  */
    { pushTempTableAndClear(); (yyval.node) = (yyvsp[0].node); }
#line 1618 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new CommandBlockNode((yyvsp[-1].node)); popAndGetPrevious(); }
#line 1624 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 239 "parser.y" /* yacc.c:1646  */
    { pushTempTableAndClear(); (yyval.node) = (yyvsp[0].node); }
#line 1630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 239 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new CommandBlockNode(NULL); popAndGetPrevious(); }
#line 1636 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ListOfCommandsNode((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LocalVariableDeclarationNode((yyvsp[-1].lexicalValue), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LocalVariableDeclarationAttributeNode((yyvsp[0].lexicalValue), (yyvsp[-1].node)); }
#line 1726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new GenericNode((yyvsp[-1].lexicalValue), { (yyvsp[0].node) }); }
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 291 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 292 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new InputCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new InputCommandNode((yyvsp[-1].lexicalValue), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new OutputCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionCallCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 319 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ShiftCommand((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ShiftCommand((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 336 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ReturnCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 341 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ReturnCommandNode((yyvsp[-1].lexicalValue), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ReturnCommandNode((yyvsp[-1].lexicalValue), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 343 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 344 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 353 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 354 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IfThenCommandNode((yyvsp[-5].lexicalValue), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IfThenElseCommandNode((yyvsp[-7].lexicalValue), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 370 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); pushTempTableAndClear(); }
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 371 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ForCommandNode((yyvsp[-9].lexicalValue), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); popAndGetPrevious();}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ForParametersDeclarationList((yyvsp[-2].node)->value, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 380 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 382 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 388 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new WhileCommandNode((yyvsp[-5].lexicalValue), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new ParametersListNode((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 405 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 406 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IdentifierVectorNode((yyvsp[-3].lexicalValue), (yyvsp[-1].node)); }
#line 1990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 411 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new IdentifierNode((yyvsp[0].lexicalValue)); }
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 2002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 416 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 420 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 2014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 421 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 422 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 423 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 424 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 428 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 429 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 430 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 431 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 432 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 433 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 437 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 438 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 439 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 440 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 441 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 442 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 443 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 444 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 445 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 449 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 454 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 457 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 458 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 459 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 460 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 461 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 462 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 463 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 464 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 465 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 466 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 467 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 468 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 469 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 470 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 471 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 472 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new TernaryExpressionNode((yyvsp[-3].lexicalValue), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 476 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 480 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 484 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2272 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2276 "parser.tab.c" /* yacc.c:1646  */
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
#line 487 "parser.y" /* yacc.c:1906  */


void yyerror (char const *s) {
    printf("ERROR =>> Line %d: %s, Last token: %s\n", get_line_number(), s, yytext);
}
