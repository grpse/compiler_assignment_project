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
#define YYLAST   548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  199

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
       0,   177,   177,   178,   182,   183,   184,   185,   189,   195,
     200,   201,   205,   207,   214,   215,   219,   220,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   239,
     244,   245,   246,   250,   251,   255,   259,   260,   267,   268,
     269,   277,   281,   289,   293,   294,   302,   303,   311,   315,
     316,   317,   326,   327,   331,   336,   343,   348,   349,   353,
     354,   355,   361,   367,   368,   372,   373,   374,   378,   379,
     383,   384,   388,   389,   393,   394,   398,   399,   400,   401,
     402,   406,   407,   408,   409,   410,   411,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   427,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   454,   458,   462
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
  "is_const", "identifier", "is_static", "is_vector", "declaration_type",
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

#define YYPACT_NINF -160

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define YYTABLE_NINF -74

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,  -160,   -49,    14,    20,  -160,  -160,   109,   481,    22,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,    -4,  -160,
    -160,  -160,  -160,   -37,   481,   481,    16,   481,    17,    23,
     481,  -160,  -160,   241,  -160,  -160,  -160,   109,     6,   481,
     390,  -160,   422,   422,  -160,    25,  -160,  -160,   138,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   481,  -160,    13,    -9,    21,
     274,  -160,  -160,  -160,    28,    15,   369,  -160,    25,    25,
      25,    25,    25,    25,   422,   422,   191,   191,   191,   191,
      25,    25,   307,   -32,   -32,  -160,  -160,  -160,    30,   109,
      55,  -160,  -160,  -160,   443,   481,  -160,    42,    33,    34,
     481,   443,   481,    87,    38,  -160,  -160,  -160,  -160,   137,
      44,  -160,   109,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,   -29,    92,  -160,   -32,    43,
     481,   481,   369,  -160,   369,    -6,  -160,    54,  -160,    74,
     481,   481,   465,  -160,   105,   179,   210,    61,  -160,  -160,
    -160,    67,    58,  -160,    97,   369,   369,  -160,  -160,   369,
    -160,   118,   116,   481,    -6,    51,  -160,  -160,    21,    21,
     338,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,   120,  -160,    -6,    21,    63,  -160,    21,  -160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      73,    72,    75,     0,    73,     6,     7,     0,     0,    73,
       1,     4,     5,    76,    77,    78,    79,    80,     0,    91,
      92,    93,    94,    71,     0,     0,     0,     0,     0,     0,
       0,    95,    90,     0,    89,    88,    87,     0,     0,     0,
       0,    43,   103,   102,   117,   104,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,    69,     0,
       0,    66,    67,    45,     0,    64,    65,    96,   110,   111,
     112,   113,   114,   115,    98,    97,   100,    99,   101,   105,
     108,   109,     0,   107,   106,     8,    68,    11,     0,     0,
      32,     9,    70,    44,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    31,     0,    50,    51,    15,    20,    32,
       0,    18,     0,    19,    21,    22,    23,    24,    25,    48,
      26,    52,    53,    27,    28,     0,     0,    63,   116,    13,
       0,     0,    41,    42,    49,    32,    14,     0,    17,     0,
       0,     0,     0,    30,    69,     0,     0,    71,    59,    60,
      61,     0,    58,    16,    34,    46,    47,    39,    40,    38,
      12,     0,     0,     0,    32,     0,    29,    33,     0,     0,
       0,    57,    81,    82,    84,    83,    85,    86,    37,    35,
      36,    54,    62,    32,     0,     0,    55,     0,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,   130,   131,  -160,   -18,   -68,  -160,    19,
     -98,  -160,  -160,  -160,  -160,   -96,  -160,  -160,   -92,  -160,
     -91,  -160,  -160,  -160,  -160,  -160,  -160,  -159,  -160,  -160,
     -75,  -160,  -160,   -87,    75,  -160,   -34,  -160,    -8,  -160,
    -160,  -160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    69,    98,   118,   119,   120,
     158,   122,   176,   177,   189,   159,   124,   125,    31,    41,
     160,   128,   129,   130,   131,   132,   133,   161,   162,   134,
      74,    75,    99,    32,   136,     9,    18,   190,    76,    34,
      35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   101,   121,    67,   123,   150,   151,    96,   126,   127,
     -73,   113,     8,   135,    10,   181,    42,    43,    -3,    45,
      -2,   121,    48,   123,    39,    64,    65,   126,   127,   137,
      40,    70,   135,   152,   195,     1,   143,     1,   157,     1,
      38,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,   135,    97,
      44,    46,     2,   108,     2,   107,   109,    47,   110,   111,
     112,   -73,   113,    68,   114,     7,    95,   115,   116,     7,
      63,   104,    64,    65,    37,   100,   139,   135,   149,   182,
     183,   184,   185,   186,   187,   188,   103,   138,   106,    23,
     140,   141,   142,   -72,   144,   145,   135,   148,   153,   154,
     191,   192,    13,    14,    15,    16,    17,   163,   164,   100,
     117,    96,    39,   173,   174,   175,   196,   178,   179,   198,
     194,   197,   155,   156,    11,    12,   170,     0,   147,     0,
       0,     0,   165,   166,   169,   108,     0,     0,   109,     0,
     110,   111,   112,   -73,   113,     0,   114,     0,     0,   115,
     116,     0,     0,     0,     0,   180,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,     0,    64,    65,     0,     0,     0,
       0,   100,   146,     0,     0,     0,    77,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     0,    61,    62,    63,     0,    64,    65,    49,    50,
      51,    52,    53,    54,    61,    62,    63,   171,    64,    65,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,     0,    61,    62,    63,     0,    64,    65,    49,
      50,    51,    52,    53,    54,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,     0,    61,    62,    63,     0,    64,    65,
       0,    66,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,     0,    61,    62,    63,
       0,    64,    65,     0,   102,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,     0,
      61,    62,    63,   105,    64,    65,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,   193,    64,    65,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,    61,    62,    63,     0,    64,    65,    19,    20,
      21,    22,    71,    72,    23,     0,    24,    25,    26,     0,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
      49,    50,    51,    52,    53,    54,     0,    30,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,    59,    60,     0,    61,    62,    63,     0,    64,
      65,    19,    20,    21,    22,    71,    72,    23,     0,    24,
      25,    26,     0,     0,     0,    27,     0,     0,     0,     0,
       0,    28,    29,    19,    20,    21,    22,   167,   168,    23,
      30,    24,    25,    26,     0,     0,     0,    27,     0,    19,
      20,    21,    22,    28,    29,    23,     0,    24,    25,    26,
       0,     0,    30,    27,     0,     0,     0,     0,     0,    28,
      29,     0,     0,     0,     0,     0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
       8,    69,   100,    37,   100,    34,    35,    16,   100,   100,
      16,    17,    61,   100,     0,   174,    24,    25,     0,    27,
       0,   119,    30,   119,    61,    57,    58,   119,   119,   104,
      67,    39,   119,    62,   193,    17,   111,    17,    44,    17,
      44,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,   145,    68,
      44,    44,    44,     8,    44,    99,    11,    44,    13,    14,
      15,    16,    17,    67,    19,     0,    63,    22,    23,     4,
      55,    66,    57,    58,     9,    64,    44,   174,   122,    38,
      39,    40,    41,    42,    43,    44,    68,   105,    68,    44,
      67,    67,   110,    16,   112,    67,   193,    63,    16,    66,
     178,   179,     3,     4,     5,     6,     7,    63,    44,    64,
      65,    16,    61,    56,    66,    28,   194,     9,    12,   197,
      10,    68,   140,   141,     4,     4,   154,    -1,   119,    -1,
      -1,    -1,   150,   151,   152,     8,    -1,    -1,    11,    -1,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    -1,   173,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    55,    -1,    57,    58,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,    -1,    68,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    -1,    57,    58,    28,    29,
      30,    31,    32,    33,    53,    54,    55,    68,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    55,    -1,    57,    58,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    -1,    57,    58,
      -1,    60,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    55,
      -1,    57,    58,    -1,    60,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    -1,    57,    58,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,
      28,    29,    30,    31,    32,    33,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    -1,    53,    54,    55,    -1,    57,
      58,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    38,    39,    40,    41,    42,    43,    44,
      67,    46,    47,    48,    -1,    -1,    -1,    52,    -1,    38,
      39,    40,    41,    58,    59,    44,    -1,    46,    47,    48,
      -1,    -1,    67,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    44,    70,    71,    72,    73,   103,    61,   104,
       0,    72,    73,     3,     4,     5,     6,     7,   105,    38,
      39,    40,    41,    44,    46,    47,    48,    52,    58,    59,
      67,    87,   102,   107,   108,   109,   110,   103,    44,    61,
      67,    88,   107,   107,    44,   107,    44,    44,   107,    28,
      29,    30,    31,    32,    33,    46,    47,    48,    49,    50,
      51,    53,    54,    55,    57,    58,    60,   105,    67,    74,
     107,    42,    43,    68,    99,   100,   107,    68,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,    63,    16,    68,    75,   101,
      64,    76,    60,    68,    66,    56,    68,   105,     8,    11,
      13,    14,    15,    17,    19,    22,    23,    65,    76,    77,
      78,    79,    80,    84,    85,    86,    87,    89,    90,    91,
      92,    93,    94,    95,    98,   102,   103,    99,   107,    44,
      67,    67,   107,    99,   107,    67,    65,    78,    63,   105,
      34,    35,    62,    16,    66,   107,   107,    44,    79,    84,
      89,    96,    97,    63,    44,   107,   107,    42,    43,   107,
      75,    68,    68,    56,    66,    28,    81,    82,     9,    12,
     107,    96,    38,    39,    40,    41,    42,    43,    44,    83,
     106,    76,    76,    56,    10,    96,    76,    68,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    72,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      80,    80,    80,    81,    81,    82,    83,    83,    84,    84,
      84,    85,    86,    87,    88,    88,    89,    89,    90,    91,
      91,    91,    92,    92,    93,    94,    95,    96,    96,    97,
      97,    97,    98,    99,    99,   100,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   106,   106,   106,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   109,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     5,     5,
       3,     2,     5,     3,     3,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       2,     1,     0,     1,     0,     2,     1,     1,     3,     3,
       3,     2,     2,     2,     3,     2,     3,     3,     1,     2,
       1,     1,     1,     1,     6,     8,     9,     3,     1,     1,
       1,     1,     6,     3,     1,     1,     1,     1,     1,     0,
       4,     1,     1,     0,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     2,     2,     2
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
#line 177 "parser.y" /* yacc.c:1648  */
    { arvore = (yyvsp[0].node); (yyval.node) = (yyvsp[0].node); }
#line 1503 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 3:
#line 178 "parser.y" /* yacc.c:1648  */
    { arvore = NULL; (yyval.node) = NULL; }
#line 1509 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 4:
#line 182 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ListOfDeclarations((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1515 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 5:
#line 183 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ListOfDeclarations((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1521 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 6:
#line 184 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1527 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 7:
#line 185 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1533 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 8:
#line 190 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new GlobalVariableDeclaration((yyvsp[-4].lexicalValue), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1539 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 9:
#line 196 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new FunctionDeclarationNode((yyvsp[-2].lexicalValue), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1545 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 10:
#line 200 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1551 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 11:
#line 201 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1557 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 12:
#line 206 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ParametersDeclarationList((yyvsp[-2].lexicalValue), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1563 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 13:
#line 208 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ParameterDeclaration((yyvsp[0].lexicalValue), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1569 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 14:
#line 214 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new CommandBlockNode((yyvsp[-1].node)); }
#line 1575 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 15:
#line 215 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new CommandBlockNode(NULL); }
#line 1581 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 16:
#line 219 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ListOfCommandsNode((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1587 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 17:
#line 220 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1593 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 18:
#line 224 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1599 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 19:
#line 225 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1605 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 20:
#line 226 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1611 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 21:
#line 227 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1617 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 22:
#line 228 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1623 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 23:
#line 229 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1629 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 24:
#line 230 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1635 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 25:
#line 231 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1641 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 26:
#line 232 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1647 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 27:
#line 233 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1653 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 28:
#line 234 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ValidCommandNode((yyvsp[0].node)); }
#line 1659 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 29:
#line 240 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LocalVariableDeclarationNode((yyvsp[-1].lexicalValue), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1665 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 30:
#line 244 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LocalVariableDeclarationAttributeNode((yyvsp[0].lexicalValue), (yyvsp[-1].node)); }
#line 1671 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 31:
#line 245 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1677 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 32:
#line 246 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1683 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 33:
#line 250 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1689 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 34:
#line 251 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1695 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 35:
#line 255 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new GenericNode((yyvsp[-1].lexicalValue), { (yyvsp[0].node) }); }
#line 1701 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 36:
#line 259 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1707 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 37:
#line 260 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1713 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 38:
#line 267 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1719 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 39:
#line 268 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1725 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 40:
#line 269 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new AssignmentCommandNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), new LiteralNode((yyvsp[0].lexicalValue))); }
#line 1731 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 41:
#line 277 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new InputCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1737 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 42:
#line 281 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new OutputCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1743 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 43:
#line 289 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new FunctionCallCommandNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 1749 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 44:
#line 293 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1755 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 45:
#line 294 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1761 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 46:
#line 302 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ShiftCommand((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1767 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 47:
#line 303 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ShiftCommand((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1773 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 48:
#line 311 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1779 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 49:
#line 315 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new GenericNode((yyvsp[-1].lexicalValue), { (yyvsp[0].node) }); }
#line 1785 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 50:
#line 316 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1791 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 51:
#line 317 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1797 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 52:
#line 326 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1803 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 53:
#line 327 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1809 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 54:
#line 332 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new IfThenCommandNode((yyvsp[-5].lexicalValue), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1815 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 55:
#line 337 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new IfThenElseCommandNode((yyvsp[-7].lexicalValue), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1821 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 56:
#line 344 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ForCommandNode((yyvsp[-8].lexicalValue), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1827 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 57:
#line 348 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ForParametersDeclarationList((yyvsp[-2].node)->value, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1833 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 58:
#line 349 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1839 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 59:
#line 353 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1845 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 60:
#line 354 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1851 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 61:
#line 355 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1857 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 62:
#line 361 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new WhileCommandNode((yyvsp[-5].lexicalValue), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1863 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 63:
#line 367 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new ParametersListNode((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1869 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 64:
#line 368 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1875 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 65:
#line 372 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1881 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 66:
#line 373 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1887 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 67:
#line 374 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1893 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 68:
#line 378 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1899 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 69:
#line 379 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1905 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 70:
#line 383 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new IdentifierNode((yyvsp[-3].lexicalValue), (yyvsp[-1].node)); }
#line 1911 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 71:
#line 384 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1917 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 72:
#line 388 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1923 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 73:
#line 389 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1929 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 74:
#line 393 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1935 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 75:
#line 394 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = NULL; }
#line 1941 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 76:
#line 398 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1947 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 77:
#line 399 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1953 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 78:
#line 400 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1959 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 79:
#line 401 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1965 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 80:
#line 402 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LeafNode((yyvsp[0].lexicalValue)); }
#line 1971 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 81:
#line 406 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1977 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 82:
#line 407 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1983 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 83:
#line 408 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1989 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 84:
#line 409 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 1995 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 85:
#line 410 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2001 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 86:
#line 411 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2007 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 87:
#line 415 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2013 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 88:
#line 416 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2019 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 89:
#line 417 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2025 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 90:
#line 418 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2031 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 91:
#line 419 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2037 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 92:
#line 420 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2043 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 93:
#line 421 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2049 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 94:
#line 422 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new LiteralNode((yyvsp[0].lexicalValue)); }
#line 2055 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 95:
#line 423 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2061 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 96:
#line 427 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2067 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 97:
#line 431 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2073 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 98:
#line 432 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2079 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 99:
#line 433 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2085 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 100:
#line 434 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2091 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 101:
#line 435 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2097 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 102:
#line 436 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2103 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 103:
#line 437 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2109 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 104:
#line 438 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[0].node)); }
#line 2115 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 105:
#line 439 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2121 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 106:
#line 440 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2127 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 107:
#line 441 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2133 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 108:
#line 442 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2139 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 109:
#line 443 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2145 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 110:
#line 444 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2151 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 111:
#line 445 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2157 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 112:
#line 446 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2163 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 113:
#line 447 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2169 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 114:
#line 448 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2175 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 115:
#line 449 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new BinaryExpressionNode((yyvsp[-1].lexicalValue), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2181 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 116:
#line 450 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new TernaryExpressionNode((yyvsp[-3].lexicalValue), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2187 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 117:
#line 454 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2193 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 118:
#line 458 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2199 "parser.tab.c" /* yacc.c:1648  */
    break;

  case 119:
#line 462 "parser.y" /* yacc.c:1648  */
    { (yyval.node) = new UnaryExpressionNode((yyvsp[-1].lexicalValue), new LeafNode((yyvsp[0].lexicalValue))); }
#line 2205 "parser.tab.c" /* yacc.c:1648  */
    break;


#line 2209 "parser.tab.c" /* yacc.c:1648  */
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
#line 465 "parser.y" /* yacc.c:1907  */


void yyerror (char const *s) {
    printf("ERROR =>> Line %d: %s, Last token: %s\n", get_line_number(), s, yytext);
}
