%{
#include  "exo2.yacc.h"

extern int line;
%}

V [a-zA-Z][a-zA-Z0-9]*
I [1-9][0-9]*

%%
	{V} {yylval.string = strdup(yytext);return V;}
	0|{I} {yylval.string = strdup(yytext);return I;}
	boolean	{yylval.string = strdup(yytext);return T_boo;}
	interger	{yylval.string = strdup(yytext);return T_int;}
	new array of {yylval.string = strdup(yytext);return NewAr;}
	array of	{yylval.string = strdup(yytext);return T_ar;}
	defun	{return NFon;}
	defpro	{return NPro;}
	skip  {yylval.string = strdup(yytext);return Sk;}
	if  {yylval.string = strdup(yytext);return If;}
	then {yylval.string = strdup(yytext);return Th;}
	else {yylval.string = strdup(yytext);return El;}
	while {yylval.string = strdup(yytext);return Wh;}
	do  {yylval.string = strdup(yytext);return Do;}
	":="  {yylval.string = strdup(yytext);return Af;}
	";" {yylval.string = strdup(yytext);return Se;}
	"+" {yylval.string = strdup(yytext);return Pl;}
	"-" {yylval.string = strdup(yytext);return Mo;}
	"*" {yylval.string = strdup(yytext);return Mu;}
	"(" {return Open;}
	")" {return Close;}
	[\t]+ {;}
	[\n]  {;}
	. {;}
}
%%
int yywrap(){
	return    1;
}
