/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELSE = 261,
     MAIN = 262,
     INT = 263,
     FLOAT = 264,
     DOUBLE=265,
     CHAR = 266,
     BOOL=267,
     BRACKETSTART = 268,
     BRACKETEND = 269,
     FOR = 270,
     WHILE = 271,
     PRINTFUNCTION = 272,
     CASE = 273,
     DEFAULT = 274,
     SWITCH = 275,
     CLASS = 276,
     IFX = 277
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;