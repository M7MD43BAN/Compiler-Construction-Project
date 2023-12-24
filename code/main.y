%{
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
%}

/* bison declarations */

%token NUM VAR IF ELSE MAIN INT FLOAT DOUBLE BOOL CHAR BRACKETSTART BRACKETEND FOR WHILE PRINT CASE DEFAULT SWITCH

%left '<' '>'
%left '+' '-'
%left '*' '/'

/* Grammar rules and actions follow.  */

%%

program: MAIN '('  ')' BRACKETSTART line BRACKETEND
	;

line: /* NULL */
	| line statement
	;
statement: ';'
	| declaration ';'
	| expression ';' 	{
		$$ = $1;
	}
	| VAR '=' expression ';'	{
		fprintf(yyout, " >>  Value of the variable : %d\n", $3);
		sym[$1] = $3;
		$$ = $3;
	}
	| WHILE '(' NUM '<' NUM ')' BRACKETSTART statement BRACKETEND  {
		int i;
		for (i = $3; i < $5; i++) {
			fprintf(yyout, "While loop %d: %d\n", i, $8);
		}
		fprintf(yyout, "While loop:  %d\n", $8);
	}
	| IF '(' expression ')' BRACKETSTART statement BRACKETEND	{
		if ($3) {
			fprintf(yyout, "value of expression in IF: %d\n", $6);
		}
		else {
			fprintf(yyout, "condition value zero in IF block\n");
		}
	}
	| IF '(' expression ')' BRACKETSTART statement BRACKETEND ELSE BRACKETSTART statement BRACKETEND	{
		if ($3) {
			fprintf(yyout, "value of expression in IF: %d\n", $6);
		}
		else {
			fprintf(yyout, "value of expression in ELSE: %d\n", $10);
		}
	}
	| PRINT '(' expression ')' ';'	{
		fprintf(yyout, "\nPrint %d\n", $3);
	}
	| SWITCH '(' NUM ')' BRACKETSTART SWITCHCASE BRACKETEND {
		int switchValue = $3;
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
	| FOR '(' NUM ',' NUM ',' NUM ')' BRACKETSTART statement BRACKETEND	{
		int i;
		for (i = $3; i < $5; i = i + $7) {
			fprintf(yyout, "For loop %d: %d\n", i, $10);
		}
		fprintf(yyout, "For loop:  %d\n", $10);
	}
	;

declaration: TYPE ID1
;

TYPE: INT   	{ fprintf(yyout, "\ninterger declaration: "); }
	 | FLOAT  	{ fprintf(yyout, "\nfloat declaration: "); }
	 | CHAR   	{ fprintf(yyout, "\nchar declaration: "); }
	 | DOUBLE 	{ fprintf(yyout, "\ndouble declaration: "); }
	 | BOOL   	{ fprintf(yyout, "\nbool declaration: "); }
;

ID1: ID1 ',' VAR
    | VAR
    ;

SWITCHCASE: casegrammer
    | casegrammer defaultgrammer
    ;

casegrammer: /*empty*/
    | casegrammer casenumber
		;

casenumber: CASE NUM ':' expression ';' {
    if (switchCasesCount < 1000) {
        switchCases[switchCasesCount].caseValue = $2;
        switchCases[switchCasesCount].expressionValue = $4;
        switchCasesCount++;
    }
}
    ;

defaultgrammer: DEFAULT ':' expression ';' {
    sym[0] = $3; // Store the value in sym for the default case
}
    ;

expression: NUM                    { $$ = $1; }
    | VAR                        { $$ = sym[$1]; }
    | expression '+' expression    {
        $$ = $1 + $3;
    }
    | expression '-' expression    {
        $$ = $1 - $3;
    }
    | expression '*' expression    {
        $$ = $1 * $3;
    }
    | expression '/' expression    {
        if ($3) {
            $$ = $1 / $3;
        }
        else {
            $$ = 0;
			yyerror("Error!, Division by 0!!");
        }
    }
    | expression '%' expression    {
        if ($3) {
            $$ = $1 % $3;
        }
        else {
            $$ = 0;
			yyerror("Error!, Mod by 0!!");
        }
    }
    | expression '^' expression    {
        $$ = pow($1, $3);
    }
    | expression '<' expression    {
        $$ = $1 < $3;
    }
    | expression '>' expression    {
        $$ = $1 > $3;
    }
    | '(' expression ')'        { $$ = $2; }
    ;
%%

void yyerror(char *s) {
    printf("%s\n", s);
}

int yywrap() {
    return 1;
}

int main(void) {
    yyin = fopen("input.txt", "r");
    yyout = fopen("output.txt", "w");
    yyError = fopen("outputError.txt", "w");

    // Initialize switchCases array
    switchCases = (SwitchCase *)malloc(1000 * sizeof(SwitchCase));

	fprintf(yyout, "\nMain Function Start\n");
    yyparse();
	fprintf(yyout, "\nMain Function End\n");

    // Free switchCases array
    free(switchCases);

    fclose(yyin);
    fclose(yyout);

    return 0;
}
