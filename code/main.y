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

%token 	NUM VAR IF ELSE MAIN INT FLOAT DOUBLE CHAR BOOLEAN
		BRACKETSTART BRACKETEND FOR WHILE PRINT CASE DEFAULT SWITCH
		IS_EQUAL IS_NOT_EQUAL GREATER_THAN_OR_EQUAL LESS_THAN_OR_EQUAL
		AND OR NOT PRINTL

%right '='
%left '<' '>'
%left '+' '-'
%left '*' '/'

/* Grammar rules and actions follow.  */

%%

program: MAIN '('  ')' BRACKETSTART body BRACKETEND
	;

body: /* NULL */
	| body statement
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
	| WHILE '(' NUM '>' NUM ')' BRACKETSTART statement BRACKETEND  {
		int i = 0;
		int loopExecuted = 0;
		fprintf(yyout, "\n");
		for (i = $3; i > $5; i--) {
			fprintf(yyout, "While loop %d\n", i);
			loopExecuted = 1;
		}
		if (loopExecuted) {
        	fprintf(yyout, "While loop result:  %d\n", $8);
    	}
	}
	| WHILE '(' NUM '<' NUM ')' BRACKETSTART statement BRACKETEND  {
		int i = 0;
		int loopExecuted = 0;
		fprintf(yyout, "\n");
		for (i = $3; i < $5; i++) {
			fprintf(yyout, "While loop %d\n", i);
			loopExecuted = 1;
		}
		if (loopExecuted) {
			fprintf(yyout, "While loop result:  %d\n", $8);
		}
	}
	| WHILE '(' NUM GREATER_THAN_OR_EQUAL NUM ')' BRACKETSTART statement BRACKETEND  {
		int i = 0;
		int loopExecuted = 0;
		fprintf(yyout, "\n");
		for (i = $3; i >= $5; i--) {
			fprintf(yyout, "While loop %d\n", i);
			loopExecuted = 1;
		}
		if (loopExecuted) {
			fprintf(yyout, "While loop result:  %d\n", $8);
		}
	}
	| WHILE '(' NUM LESS_THAN_OR_EQUAL NUM ')' BRACKETSTART statement BRACKETEND  {
		int i = 0;
		int loopExecuted = 0;
		fprintf(yyout, "\n");
		for (i = $3; i <= $5; i++) {
			fprintf(yyout, "While loop %d\n", i);
			loopExecuted = 1;
		}
		if (loopExecuted) {
			fprintf(yyout, "While loop result:  %d\n", $8);
		}
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
		fprintf(yyout, "Print %d\n", $3);
	}
	| PRINTL '(' NUM ')' ';'	{
		for (int i = 0; i < $3; i++) {
			fprintf(yyout, "\n");
		}
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
			fprintf(yyout, "For loop %d\n", i);
		}
		fprintf(yyout, "For loop result:  %d\n", $10);
	}
	;

declaration: TYPE ID1
;

TYPE: INT   	{ fprintf(yyout, "\ninterger declaration: "); }
	 | FLOAT  	{ fprintf(yyout, "\nfloat declaration: "); }
	 | CHAR   	{ fprintf(yyout, "\nchar declaration: "); }
	 | DOUBLE 	{ fprintf(yyout, "\ndouble declaration: "); }
	 | BOOLEAN  { fprintf(yyout, "\nbool declaration: "); }
;

ID1: VAR
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

expression: NUM						{ $$ = $1; }
    | VAR                       	{ $$ = sym[$1]; }
    | expression '+' expression    	{ $$ = $1 + $3; }
    | expression '-' expression    	{ $$ = $1 - $3; }
    | expression '*' expression    	{ $$ = $1 * $3; }
    | expression '/' expression	{
        if ($3 != 0) {
            $$ = $1 / $3;
        } else {
            yyerror("Error! Division by zero");
            YYABORT;
        }
    }
    | expression '%' expression	{
        if ($3 != 0) {
            $$ = $1 % $3;
        } else {
            yyerror("Error! Modulo by zero");
            YYABORT;
        }
    }
    | expression '^' expression							{ $$ = pow($1, $3); }
    | expression '<' expression    						{ $$ = ($1 < $3) ? 1 : 0; }
    | expression '>' expression    						{ $$ = ($1 > $3) ? 1 : 0; }
    | expression IS_EQUAL expression   					{ $$ = ($1 == $3) ? 1 : 0; }
    | expression IS_NOT_EQUAL expression   				{ $$ = ($1 != $3) ? 1 : 0; }
    | expression GREATER_THAN_OR_EQUAL expression		{ $$ = ($1 >= $3) ? 1 : 0; }
    | expression LESS_THAN_OR_EQUAL expression   		{ $$ = ($1 <= $3) ? 1 : 0; }
    | expression AND expression    						{ $$ = ($1 && $3) ? 1 : 0; }
    | expression OR expression    						{ $$ = ($1 || $3) ? 1 : 0; }
    | NOT expression    								{ $$ = !$2; }
    | '(' expression ')'    							{ $$ = $2; }
    ;
%%

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
