/* Tokens */
#ifndef YYTOKENTYPE
#define YYTOKENTYPE
  /* Put the tokens into the symbol table, so that GDB and other debuggers know about them. */
  enum yytokentype {
    NUM = 258,
    VAR = 259,
    IF = 260,
    ELSE = 261,
    MAIN = 262,
    INT = 263,
    FLOAT = 264,
    DOUBLE = 265,
    CHAR = 266,
    BOOL = 267,
    BRACKETSTART = 268,
    BRACKETEND = 269,
    FOR = 270,
    WHILE = 271,
    PRINT = 272,
    CASE = 273,
    DEFAULT = 274,
    SWITCH = 275,
    COMMENT = 276,
  };
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
extern YYSTYPE yylval;
