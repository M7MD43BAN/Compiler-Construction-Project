%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	int yylex(void);
	void yyerror(char *);
	extern FILE *yyin;
	extern FILE *yyout;
	FILE *yyError;
	int sym[26];
%}

/* bison declarations */

%token NUM VAR IF ELSE MAIN INT FLOAT DOUBLE BOOL CHAR BRACKETSTART BRACKETEND FOR WHILE PRINT CASE DEFAULT SWITCH

%left '<' '>'
%left '+' '-'
%left '*' '/'

/* Grammar rules and actions follow.  */

%%

program: MAIN '('  ')' BRACKETSTART line BRACKETEND { printf("Main Function END\n"); }
	;

line: /* NULL */
	| line statement
	;

statement: ';'
	| declaration ';'	{ printf("Declaration\n"); }

	| expression ';' 	{
		printf("\nvalue of expression: %d\n", $1); $$ = $1;
	}

	| VAR '=' expression ';'	{
		fprintf(yyout, "Value of the variable: %d\n", $3);
		sym[$1] = $3;
	}

	| WHILE '(' NUM '<' NUM ')' BRACKETSTART statement BRACKETEND  {
	    int i;
	    for(i = $3; i < $5; i++) {
			fprintf(yyout, "While loop: %d expression value: %d\n", i, $8);
		}
	}

	| IF '(' expression ')' BRACKETSTART statement BRACKETEND	{
		if($3) {
			fprintf(yyout, "value of expression in IF: %d\n", $6);
		}
		else {
			fprintf(yyout, "condition value zero in IF block\n");
		}
	}

	| IF '(' expression ')' BRACKETSTART statement BRACKETEND ELSE BRACKETSTART statement BRACKETEND	{
		if($3) {
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
		fprintf(yyout, "Case number -> %d\n", $3);
	}

	| FOR '(' NUM ',' NUM ',' NUM ')' BRACKETSTART statement BRACKETEND	{
	    int i;
	    for(i = $3; i < $5; i = i + $7 ) {
			fprintf(yyout, "For loop: %d expression value : %d\n", i, $10);
		}
	}
	;


declaration : TYPE ID1 {
		printf("\nvariable Declaration\n");
		printf("\n.........................................\n");
	}
    ;


TYPE : INT   	{ printf("interger declaration\n"); }
     | FLOAT  	{ printf("float declaration\n"); }
     | CHAR   	{ printf("char declaration\n"); }
	 | DOUBLE   { printf("double declaration\n"); }
     ;



ID1 : ID1 ',' VAR
    | VAR
    ;

SWITCHCASE: casegrammer
 			| casegrammer defaultgrammer
 			;

casegrammer: /*empty*/
			| casegrammer casenumber
 			;

casenumber: CASE NUM ':' expression ';' {
				fprintf(yyout, "Case No : %d & expression value :%d \n", $2, $4);
			}
 			;
defaultgrammer: DEFAULT ':' expression ';' {
 				fprintf(yyout, "\nDefault case -> : %d\n", $3);
			}
 			;

expression: NUM					{ $$ = $1; }

	| VAR						{ $$ = sym[$1]; }

	| expression '+' expression	{
		printf("\nAddition : %d + %d = %d \n", $1, $3, $1 + $3);
		$$ = $1 + $3;
	}

	| expression '-' expression	{
		printf("\nSubtraction : %d - %d = %d \n", $1, $3, $1 - $3);
		 $$ = $1 - $3;
	}

	| expression '*' expression	{
		printf("\nMultiplication : %d * %d \n", $1, $3, $1 * $3);
		$$ = $1 * $3;
	}

	| expression '/' expression	{
		if($3){
			printf("\nDivision : %d / %d \n ", $1, $3, $1 / $3);
			$$ = $1 / $3;
		}
		else{
			$$ = 0;
			printf("\nDivision by zero\n\t");
		}
	}

	| expression '%' expression	{
		if($3) {
			printf("\nMod : %d % %d \n", $1, $3, $1 % $3);
			$$ = $1 % $3;
		}
		else {
			$$ = 0;
			printf("\nMOD by zero\n");
		}
	}

	| expression '^' expression	{
		printf("\nPower : %d ^ %d \n", $1, $3, $1 ^ $3);
		$$ = pow($1, $3);
	}

	| expression '<' expression	{
		printf("\nLess Than : %d < %d \n", $1, $3, $1 < $3);
		$$ = $1 < $3;
	}

	| expression '>' expression	{
		printf("\nGreater than : %d > %d \n ", $1, $3, $1 > $3);
		$$ = $1 > $3;
	}

	| '(' expression ')'		{ $$ = $2; }
	;
%%


void yyerror(char *s) {
	printf( "%s\n", s);
}

int main(void) {
	yyin = fopen( "input.txt", "r" );
	yyout = fopen( "output.txt", "w" );
	yyError = fopen( "outputError.txt", "w" );

	yyparse();

	printf("All the input parsing complete \n");
	printf("\n**********************************\n");

	fclose(yyin);
	fclose(yyout);

	return 0;
}