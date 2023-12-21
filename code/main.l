%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <math.h>
	#include "main.tab.h"
	void yyerror(char *);
%}

VARIABLE	[A-Za-z]
DIGIT 		[0-9]
COMMENT		#.*
SYMBOLS		[-+/*<>=,():;%^]
WHITESPACE	[ \t\n\r]

%%
"CASE"				{ return CASE; }
"SWITCH" 			{ return SWITCH; }
"DEFAULT" 			{ return DEFAULT; }
{DIGIT}+			{ yylval = atoi(yytext); return NUM; }
"PRINT" 			{ return PRINT; }
"IF"				{ return IF; }
"ELSE" 		   		{ return ELSE; }
"{" 		   		{ return BRACKETSTART; }
"}"  		   		{ return BRACKETEND; }
"FOR" 		   		{ return FOR; }
"WHILE"		   		{ return WHILE; }
"INTEGER"  			{ return INT; }
"CHAR" 		     	{ return CHAR; }
"FLOAT"			 	{ return FLOAT; }
"DOUBLE"			{ return DOUBLE; }
"BOOL"              { return BOOL; }
"Main"	   			{ printf("\nMain Function Start\n"); return MAIN; }
{COMMENT}			{ printf("\nSingle line Comment found :: "); ECHO; }
{SYMBOLS}    		{ yylval = yytext[0]; return *yytext; }
{VARIABLE}	 		{
 						yylval = *yytext - 'a';
						return VAR;
					}

{WHITESPACE}*	    { /* Ignore whitespace */ }
.					{ yyerror("Invalid syntax"); }
%%

int yywrap() {
	return 1;
}