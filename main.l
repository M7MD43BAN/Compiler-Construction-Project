%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "main.tab.h"
%}

variable [A-Z][A-Za-z0-9]*
digit [0-9]
Comment		#.*
	

%%
"CASE" 			{return CASE;}
"SWITCH" 		{return SWITCH;}
"DEFAULT" 		{return DEFAULT;}
{digit}+	{yylval = atoi(yytext); return NUM; }
"PRINTFUNCTION" 	{return PRINTFUNCTION; } 
"IF" 			   {return IF;   }
"ELSE" 		   {return ELSE; }
"{" 		   {return BRACKETSTART;  }
"}"  		   {return BRACKETEND;	}
"FOR" 		   {return FOR;}
"WHILE"		   {return WHILE;}
"INTEGER"  		{return INT;}
"CHAR" 		     {return CHAR;}
"FLOAT"			 {return FLOAT;}
"DOUBLE"                 {return DOUBLE;}
"BOOL"                   {return BOOL;}   
"Main"	   {printf("\nMain Function Start\n"); return MAIN; }
{Comment}		{printf("\nSingle line Comment found :: ");ECHO;printf("\n");}
[-+/*<>=,():;%^]     {yylval = yytext[0];	return *yytext;	}
{variable}	    {ECHO;printf("\n"); yylval = *yytext - 'a'; return	VAR; }

[ ]*	    			{}
[\n]*					{}
[\t]*					{}
.						{printf("\nUnknown Syntax : %s\n",yytext);}


%%