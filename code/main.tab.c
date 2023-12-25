/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "main.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	#include <string.h>

	typedef struct {
		int caseValue;
		int expressionValue;
	} SwitchCase;

	int yylex(void);
	void yyerror(char *);
	extern FILE *yyin;
	extern FILE *yyout;
	FILE *yyError;
	int sym[1000];
	SwitchCase *switchCases; // Array to store switch cases
	int switchCasesCount = 0; // Number of switch cases

#line 92 "main.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    VAR = 259,                     /* VAR  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    MAIN = 262,                    /* MAIN  */
    INT = 263,                     /* INT  */
    FLOAT = 264,                   /* FLOAT  */
    DOUBLE = 265,                  /* DOUBLE  */
    CHAR = 266,                    /* CHAR  */
    BOOLEAN = 267,                 /* BOOLEAN  */
    BRACKETSTART = 268,            /* BRACKETSTART  */
    BRACKETEND = 269,              /* BRACKETEND  */
    FOR = 270,                     /* FOR  */
    WHILE = 271,                   /* WHILE  */
    PRINT = 272,                   /* PRINT  */
    CASE = 273,                    /* CASE  */
    DEFAULT = 274,                 /* DEFAULT  */
    SWITCH = 275,                  /* SWITCH  */
    IS_EQUAL = 276,                /* IS_EQUAL  */
    IS_NOT_EQUAL = 277,            /* IS_NOT_EQUAL  */
    GREATER_THAN_OR_EQUAL = 278,   /* GREATER_THAN_OR_EQUAL  */
    LESS_THAN_OR_EQUAL = 279,      /* LESS_THAN_OR_EQUAL  */
    AND = 280,                     /* AND  */
    OR = 281,                      /* OR  */
    NOT = 282,                     /* NOT  */
    PRINTL = 283                   /* PRINTL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_VAR = 4,                        /* VAR  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_FLOAT = 9,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 10,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 11,                      /* CHAR  */
  YYSYMBOL_BOOLEAN = 12,                   /* BOOLEAN  */
  YYSYMBOL_BRACKETSTART = 13,              /* BRACKETSTART  */
  YYSYMBOL_BRACKETEND = 14,                /* BRACKETEND  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_PRINT = 17,                     /* PRINT  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_DEFAULT = 19,                   /* DEFAULT  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_IS_EQUAL = 21,                  /* IS_EQUAL  */
  YYSYMBOL_IS_NOT_EQUAL = 22,              /* IS_NOT_EQUAL  */
  YYSYMBOL_GREATER_THAN_OR_EQUAL = 23,     /* GREATER_THAN_OR_EQUAL  */
  YYSYMBOL_LESS_THAN_OR_EQUAL = 24,        /* LESS_THAN_OR_EQUAL  */
  YYSYMBOL_AND = 25,                       /* AND  */
  YYSYMBOL_OR = 26,                        /* OR  */
  YYSYMBOL_NOT = 27,                       /* NOT  */
  YYSYMBOL_PRINTL = 28,                    /* PRINTL  */
  YYSYMBOL_29_ = 29,                       /* '='  */
  YYSYMBOL_30_ = 30,                       /* '<'  */
  YYSYMBOL_31_ = 31,                       /* '>'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_36_ = 36,                       /* '('  */
  YYSYMBOL_37_ = 37,                       /* ')'  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* ':'  */
  YYSYMBOL_41_ = 41,                       /* '%'  */
  YYSYMBOL_42_ = 42,                       /* '^'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_body = 45,                      /* body  */
  YYSYMBOL_statement = 46,                 /* statement  */
  YYSYMBOL_declaration = 47,               /* declaration  */
  YYSYMBOL_TYPE = 48,                      /* TYPE  */
  YYSYMBOL_ID1 = 49,                       /* ID1  */
  YYSYMBOL_SWITCHCASE = 50,                /* SWITCHCASE  */
  YYSYMBOL_casegrammer = 51,               /* casegrammer  */
  YYSYMBOL_casenumber = 52,                /* casenumber  */
  YYSYMBOL_defaultgrammer = 53,            /* defaultgrammer  */
  YYSYMBOL_expression = 54                 /* expression  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


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
       2,     2,     2,     2,     2,     2,     2,    41,     2,     2,
      36,    37,    34,    32,    39,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    38,
      30,    29,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    41,    42,    44,    45,    46,    49,    54,
      66,    78,    90,   102,   110,   118,   121,   126,   147,   156,
     159,   160,   161,   162,   163,   166,   169,   170,   173,   174,
     177,   186,   191,   192,   193,   194,   195,   196,   204,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "VAR", "IF",
  "ELSE", "MAIN", "INT", "FLOAT", "DOUBLE", "CHAR", "BOOLEAN",
  "BRACKETSTART", "BRACKETEND", "FOR", "WHILE", "PRINT", "CASE", "DEFAULT",
  "SWITCH", "IS_EQUAL", "IS_NOT_EQUAL", "GREATER_THAN_OR_EQUAL",
  "LESS_THAN_OR_EQUAL", "AND", "OR", "NOT", "PRINTL", "'='", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'('", "')'", "';'", "','", "':'", "'%'",
  "'^'", "$accept", "program", "body", "statement", "declaration", "TYPE",
  "ID1", "SWITCHCASE", "casegrammer", "casenumber", "defaultgrammer",
  "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,   -29,    13,   -23,   -73,     2,   -73,    47,   -73,   -11,
     -17,   -73,   -73,   -73,   -73,   -73,   -73,   -16,    -3,     4,
       5,    41,     6,    41,   -73,   -73,   -22,    39,    93,    41,
      41,    43,    44,    41,    45,   -73,   247,    46,   115,   -73,
     -73,   -73,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,   -73,    41,    41,   137,   159,    21,
     -20,   181,    28,    29,   -73,   247,   247,   247,   247,   247,
     247,   269,   269,   291,   291,   297,   297,   247,   247,   -73,
      56,    67,    68,    69,    70,    73,    40,    66,    42,    84,
      51,    49,    54,    60,    61,   -73,   -73,   -73,    88,    78,
      71,    92,    94,    95,    99,   -13,    76,    72,    84,    84,
      84,    84,   -73,   103,    81,   -73,   -73,   116,   117,   118,
     119,   128,   129,   104,    41,    84,    84,   -73,   -73,   -73,
     -73,    41,   203,   139,   140,   225,   -73,   -73,   -73,   -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    32,    33,
       0,    20,    21,    23,    22,    24,     2,     0,     0,     0,
       0,     0,     0,     0,     5,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    48,     0,     0,     6,
      25,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    42,    43,    44,    45,    46,
      47,    40,    41,    34,    35,    36,    37,    38,    39,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    28,    16,     0,     0,
       0,     0,     0,     0,     0,    26,    13,     0,     0,     0,
       0,     0,    17,     0,     0,    29,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    10,
       9,     0,     0,     0,     0,     0,    31,    14,    18,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -73,   -72,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     7,    25,    26,    27,    41,   104,   105,   115,
     116,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,     1,    38,    82,    83,   113,   114,     3,    57,    58,
      84,    85,    61,     4,     5,     6,    39,    98,    29,    30,
      31,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    32,    77,    78,   119,   120,   121,   122,
      33,    34,    37,    40,     8,    35,    59,    60,    62,    63,
       8,     9,    10,   133,   134,    11,    12,    13,    14,    15,
      81,    16,    17,    18,    19,    87,    88,    20,    21,    89,
      90,    91,    92,    93,    21,    22,    94,    23,    95,    96,
      97,   107,   117,    23,   108,    24,   100,     8,     9,    10,
      99,   101,    11,    12,    13,    14,    15,   102,   103,    17,
      18,    19,   106,   132,    20,   109,   123,   110,   111,   118,
     135,    21,    22,   112,    42,    43,    44,    45,    46,    47,
      23,   124,    24,    48,    49,    50,    51,    52,    53,   125,
     126,    54,   127,   128,    55,    56,    42,    43,    44,    45,
      46,    47,   129,   130,   131,    48,    49,    50,    51,    52,
      53,     0,    64,   137,   138,     0,    55,    56,    42,    43,
      44,    45,    46,    47,     0,     0,     0,    48,    49,    50,
      51,    52,    53,     0,     0,    79,     0,     0,    55,    56,
      42,    43,    44,    45,    46,    47,     0,     0,     0,    48,
      49,    50,    51,    52,    53,     0,    80,     0,     0,     0,
      55,    56,    42,    43,    44,    45,    46,    47,     0,     0,
       0,    48,    49,    50,    51,    52,    53,     0,    86,     0,
       0,     0,    55,    56,    42,    43,    44,    45,    46,    47,
       0,     0,     0,    48,    49,    50,    51,    52,    53,     0,
       0,   136,     0,     0,    55,    56,    42,    43,    44,    45,
      46,    47,     0,     0,     0,    48,    49,    50,    51,    52,
      53,     0,     0,   139,     0,     0,    55,    56,    42,    43,
      44,    45,    46,    47,     0,     0,     0,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,    55,    56,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,    50,    51,    52,    53,     0,     0,     0,     0,     0,
      55,    56,    42,    43,    44,    45,    46,    47,    42,    43,
      44,    45,    46,    47,     0,    52,    53,     0,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,    55,    56
};

static const yytype_int16 yycheck[] =
{
      21,     7,    23,    23,    24,    18,    19,    36,    29,    30,
      30,    31,    33,     0,    37,    13,    38,    89,    29,    36,
      36,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    36,    55,    56,   108,   109,   110,   111,
      36,    36,    36,     4,     3,     4,     3,     3,     3,     3,
       3,     4,     5,   125,   126,     8,     9,    10,    11,    12,
      39,    14,    15,    16,    17,    37,    37,    20,    27,    13,
       3,     3,     3,     3,    27,    28,     3,    36,    38,    13,
      38,     3,     6,    36,    13,    38,    37,     3,     4,     5,
      39,    37,     8,     9,    10,    11,    12,    37,    37,    15,
      16,    17,    14,   124,    20,    13,     3,    13,    13,    37,
     131,    27,    28,    14,    21,    22,    23,    24,    25,    26,
      36,    40,    38,    30,    31,    32,    33,    34,    35,    13,
      13,    38,    14,    14,    41,    42,    21,    22,    23,    24,
      25,    26,    14,    14,    40,    30,    31,    32,    33,    34,
      35,    -1,    37,    14,    14,    -1,    41,    42,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    -1,    -1,    41,    42,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    -1,    37,    -1,    -1,    -1,
      41,    42,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    -1,    37,    -1,
      -1,    -1,    41,    42,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    -1,    -1,    41,    42,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    38,    -1,    -1,    41,    42,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    21,    22,    23,    24,    25,    26,    21,    22,
      23,    24,    25,    26,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    41,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    44,    36,     0,    37,    13,    45,     3,     4,
       5,     8,     9,    10,    11,    12,    14,    15,    16,    17,
      20,    27,    28,    36,    38,    46,    47,    48,    54,    29,
      36,    36,    36,    36,    36,     4,    54,    36,    54,    38,
       4,    49,    21,    22,    23,    24,    25,    26,    30,    31,
      32,    33,    34,    35,    38,    41,    42,    54,    54,     3,
       3,    54,     3,     3,    37,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    38,
      37,    39,    23,    24,    30,    31,    37,    37,    37,    13,
       3,     3,     3,     3,     3,    38,    13,    38,    46,    39,
      37,    37,    37,    37,    50,    51,    14,     3,    13,    13,
      13,    13,    14,    18,    19,    52,    53,     6,    37,    46,
      46,    46,    46,     3,    40,    13,    13,    14,    14,    14,
      14,    40,    54,    46,    46,    54,    38,    14,    14,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      48,    48,    48,    48,    48,    49,    50,    50,    51,    51,
      52,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     2,     2,     4,     9,
       9,     9,     9,     7,    11,     5,     5,     7,    11,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     2,
       5,     4,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 7: /* statement: expression ';'  */
#line 46 "main.y"
                                {
		yyval = yyvsp[-1];
	}
#line 1312 "main.tab.c"
    break;

  case 8: /* statement: VAR '=' expression ';'  */
#line 49 "main.y"
                                        {
		fprintf(yyout, " >>  Value of the variable : %d\n", yyvsp[-1]);
		sym[yyvsp[-3]] = yyvsp[-1];
		yyval = yyvsp[-1];
	}
#line 1322 "main.tab.c"
    break;

  case 9: /* statement: WHILE '(' NUM '>' NUM ')' BRACKETSTART statement BRACKETEND  */
#line 54 "main.y"
                                                                       {
		int i = 0;
		int loopExecuted = 0;
		fprintf(yyout, "\n");
		for (i = yyvsp[-6]; i > yyvsp[-4]; i--) {
			fprintf(yyout, "While loop %d\n", i);
			loopExecuted = 1;
		}
		if (loopExecuted) {
        	fprintf(yyout, "While loop result:  %d\n", yyvsp[-1]);
    	}
	}
#line 1339 "main.tab.c"
    break;

  case 10: /* statement: WHILE '(' NUM '<' NUM ')' BRACKETSTART statement BRACKETEND  */
#line 66 "main.y"
                                                                       {
		int i = 0;
		int loopExecuted = 0;
		fprintf(yyout, "\n");
		for (i = yyvsp[-6]; i < yyvsp[-4]; i++) {
			fprintf(yyout, "While loop %d\n", i);
			loopExecuted = 1;
		}
		if (loopExecuted) {
			fprintf(yyout, "While loop result:  %d\n", yyvsp[-1]);
		}
	}
#line 1356 "main.tab.c"
    break;

  case 11: /* statement: WHILE '(' NUM GREATER_THAN_OR_EQUAL NUM ')' BRACKETSTART statement BRACKETEND  */
#line 78 "main.y"
                                                                                         {
		int i = 0;
		int loopExecuted = 0;
		fprintf(yyout, "\n");
		for (i = yyvsp[-6]; i >= yyvsp[-4]; i--) {
			fprintf(yyout, "While loop %d\n", i);
			loopExecuted = 1;
		}
		if (loopExecuted) {
			fprintf(yyout, "While loop result:  %d\n", yyvsp[-1]);
		}
	}
#line 1373 "main.tab.c"
    break;

  case 12: /* statement: WHILE '(' NUM LESS_THAN_OR_EQUAL NUM ')' BRACKETSTART statement BRACKETEND  */
#line 90 "main.y"
                                                                                      {
		int i = 0;
		int loopExecuted = 0;
		fprintf(yyout, "\n");
		for (i = yyvsp[-6]; i <= yyvsp[-4]; i++) {
			fprintf(yyout, "While loop %d\n", i);
			loopExecuted = 1;
		}
		if (loopExecuted) {
			fprintf(yyout, "While loop result:  %d\n", yyvsp[-1]);
		}
	}
#line 1390 "main.tab.c"
    break;

  case 13: /* statement: IF '(' expression ')' BRACKETSTART statement BRACKETEND  */
#line 102 "main.y"
                                                                        {
		if (yyvsp[-4]) {
			fprintf(yyout, "value of expression in IF: %d\n", yyvsp[-1]);
		}
		else {
			fprintf(yyout, "condition value zero in IF block\n");
		}
	}
#line 1403 "main.tab.c"
    break;

  case 14: /* statement: IF '(' expression ')' BRACKETSTART statement BRACKETEND ELSE BRACKETSTART statement BRACKETEND  */
#line 110 "main.y"
                                                                                                                {
		if (yyvsp[-8]) {
			fprintf(yyout, "value of expression in IF: %d\n", yyvsp[-5]);
		}
		else {
			fprintf(yyout, "value of expression in ELSE: %d\n", yyvsp[-1]);
		}
	}
#line 1416 "main.tab.c"
    break;

  case 15: /* statement: PRINT '(' expression ')' ';'  */
#line 118 "main.y"
                                        {
		fprintf(yyout, "Print %d\n", yyvsp[-2]);
	}
#line 1424 "main.tab.c"
    break;

  case 16: /* statement: PRINTL '(' NUM ')' ';'  */
#line 121 "main.y"
                                        {
		for (int i = 0; i < yyvsp[-2]; i++) {
			fprintf(yyout, "\n");
		}
	}
#line 1434 "main.tab.c"
    break;

  case 17: /* statement: SWITCH '(' NUM ')' BRACKETSTART SWITCHCASE BRACKETEND  */
#line 126 "main.y"
                                                                {
		int switchValue = yyvsp[-4];
		int matched = 0;

		// Check each case dynamically
		int i;
		for (i = 0; i < switchCasesCount; i++) {
			if (switchCases[i].caseValue == switchValue) {
				fprintf(yyout, "Case matched : %d\n", switchValue);
				fprintf(yyout, "Value of the matched case: %d\n", switchCases[i].expressionValue);
				matched = 1;
				break;
			}
		}

		// Print default value if no matching case is found
		if (!matched) {
			fprintf(yyout, "No matching case found for value: %d\n", switchValue);
			fprintf(yyout, "Value of the default case: %d\n", sym[0]); // Adjust if needed
		}
	}
#line 1460 "main.tab.c"
    break;

  case 18: /* statement: FOR '(' NUM ',' NUM ',' NUM ')' BRACKETSTART statement BRACKETEND  */
#line 147 "main.y"
                                                                                {
		int i;
		for (i = yyvsp[-8]; i < yyvsp[-6]; i = i + yyvsp[-4]) {
			fprintf(yyout, "For loop %d\n", i);
		}
		fprintf(yyout, "For loop result:  %d\n", yyvsp[-1]);
	}
#line 1472 "main.tab.c"
    break;

  case 20: /* TYPE: INT  */
#line 159 "main.y"
                { fprintf(yyout, "\ninterger declaration: "); }
#line 1478 "main.tab.c"
    break;

  case 21: /* TYPE: FLOAT  */
#line 160 "main.y"
                        { fprintf(yyout, "\nfloat declaration: "); }
#line 1484 "main.tab.c"
    break;

  case 22: /* TYPE: CHAR  */
#line 161 "main.y"
                        { fprintf(yyout, "\nchar declaration: "); }
#line 1490 "main.tab.c"
    break;

  case 23: /* TYPE: DOUBLE  */
#line 162 "main.y"
                        { fprintf(yyout, "\ndouble declaration: "); }
#line 1496 "main.tab.c"
    break;

  case 24: /* TYPE: BOOLEAN  */
#line 163 "main.y"
                    { fprintf(yyout, "\nbool declaration: "); }
#line 1502 "main.tab.c"
    break;

  case 30: /* casenumber: CASE NUM ':' expression ';'  */
#line 177 "main.y"
                                        {
    if (switchCasesCount < 1000) {
        switchCases[switchCasesCount].caseValue = yyvsp[-3];
        switchCases[switchCasesCount].expressionValue = yyvsp[-1];
        switchCasesCount++;
    }
}
#line 1514 "main.tab.c"
    break;

  case 31: /* defaultgrammer: DEFAULT ':' expression ';'  */
#line 186 "main.y"
                                           {
    sym[0] = yyvsp[-1]; // Store the value in sym for the default case
}
#line 1522 "main.tab.c"
    break;

  case 32: /* expression: NUM  */
#line 191 "main.y"
                                                        { yyval = yyvsp[0]; }
#line 1528 "main.tab.c"
    break;

  case 33: /* expression: VAR  */
#line 192 "main.y"
                                        { yyval = sym[yyvsp[0]]; }
#line 1534 "main.tab.c"
    break;

  case 34: /* expression: expression '+' expression  */
#line 193 "main.y"
                                        { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1540 "main.tab.c"
    break;

  case 35: /* expression: expression '-' expression  */
#line 194 "main.y"
                                        { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1546 "main.tab.c"
    break;

  case 36: /* expression: expression '*' expression  */
#line 195 "main.y"
                                        { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1552 "main.tab.c"
    break;

  case 37: /* expression: expression '/' expression  */
#line 196 "main.y"
                                {
        if (yyvsp[0] != 0) {
            yyval = yyvsp[-2] / yyvsp[0];
        } else {
            yyerror("Error! Division by zero");
            YYABORT;
        }
    }
#line 1565 "main.tab.c"
    break;

  case 38: /* expression: expression '%' expression  */
#line 204 "main.y"
                                {
        if (yyvsp[0] != 0) {
            yyval = yyvsp[-2] % yyvsp[0];
        } else {
            yyerror("Error! Modulo by zero");
            YYABORT;
        }
    }
#line 1578 "main.tab.c"
    break;

  case 39: /* expression: expression '^' expression  */
#line 212 "main.y"
                                                                                { yyval = pow(yyvsp[-2], yyvsp[0]); }
#line 1584 "main.tab.c"
    break;

  case 40: /* expression: expression '<' expression  */
#line 213 "main.y"
                                                                                { yyval = (yyvsp[-2] < yyvsp[0]) ? 1 : 0; }
#line 1590 "main.tab.c"
    break;

  case 41: /* expression: expression '>' expression  */
#line 214 "main.y"
                                                                                { yyval = (yyvsp[-2] > yyvsp[0]) ? 1 : 0; }
#line 1596 "main.tab.c"
    break;

  case 42: /* expression: expression IS_EQUAL expression  */
#line 215 "main.y"
                                                                        { yyval = (yyvsp[-2] == yyvsp[0]) ? 1 : 0; }
#line 1602 "main.tab.c"
    break;

  case 43: /* expression: expression IS_NOT_EQUAL expression  */
#line 216 "main.y"
                                                                        { yyval = (yyvsp[-2] != yyvsp[0]) ? 1 : 0; }
#line 1608 "main.tab.c"
    break;

  case 44: /* expression: expression GREATER_THAN_OR_EQUAL expression  */
#line 217 "main.y"
                                                                { yyval = (yyvsp[-2] >= yyvsp[0]) ? 1 : 0; }
#line 1614 "main.tab.c"
    break;

  case 45: /* expression: expression LESS_THAN_OR_EQUAL expression  */
#line 218 "main.y"
                                                                { yyval = (yyvsp[-2] <= yyvsp[0]) ? 1 : 0; }
#line 1620 "main.tab.c"
    break;

  case 46: /* expression: expression AND expression  */
#line 219 "main.y"
                                                                                { yyval = (yyvsp[-2] && yyvsp[0]) ? 1 : 0; }
#line 1626 "main.tab.c"
    break;

  case 47: /* expression: expression OR expression  */
#line 220 "main.y"
                                                                                { yyval = (yyvsp[-2] || yyvsp[0]) ? 1 : 0; }
#line 1632 "main.tab.c"
    break;

  case 48: /* expression: NOT expression  */
#line 221 "main.y"
                                                                                        { yyval = !yyvsp[0]; }
#line 1638 "main.tab.c"
    break;

  case 49: /* expression: '(' expression ')'  */
#line 222 "main.y"
                                                                                { yyval = yyvsp[-1]; }
#line 1644 "main.tab.c"
    break;


#line 1648 "main.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 224 "main.y"


void yyerror(char *s) {
    fprintf(yyError, "%s\n", s);
}

int yywrap() {
    return 1;
}

int main(void) {
    yyin = fopen("input.txt", "r");
    yyout = fopen("output.txt", "w");
    yyError = fopen("outputError.txt", "w");

    // Initialize switchCases array
    switchCases = (SwitchCase *)malloc(100 * sizeof(SwitchCase));

	fprintf(yyout, "\nMain Function Start\n");
    yyparse();
	fprintf(yyout, "\nMain Function End\n");

    // Free switchCases array
    free(switchCases);

    fclose(yyin);
    fclose(yyout);
	fclose(yyError);

    return 0;
}
