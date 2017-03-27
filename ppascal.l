%{
#include  "y.tab.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fileno(FILE*);
char* strdup(const char *s);
%}

V [a-zA-Z][a-zA-Z0-9]*
I [1-9][0-9]*
FP [a-zA-Z]*

%%
boolean	{yylval.str = strdup(yytext);return T_boo;}
integer	{yylval.str = strdup(yytext);return T_int;}
array\ of	{yylval.str = strdup(yytext);return T_ar;}
new\ array\ of {yylval.str = strdup(yytext);return NewAr;}
var {return Var;}
defun	{
	return Def;
	printf("COUCOU JE PASSE 1");
	REJECT;}
{FP}"("	{yylval.str = strdup(yytext);return NFon;}
defpro	{
	return Dep;
	printf("COUCOU JE PASSE 2");
	REJECT;}
{FP}"("	{yylval.str = strdup(yytext);return NPro;}
0|{I} {yylval.str = strdup(yytext);return I;}
{V} {yylval.str = strdup(yytext);return V;}
skip  {yylval.str = strdup(yytext);return Sk;}
if  {yylval.str = strdup(yytext);return If;}
then {yylval.str = strdup(yytext);return Th;}
else {yylval.str = strdup(yytext);return El;}
while {yylval.str = strdup(yytext);return Wh;}
do  {yylval.str = strdup(yytext);return Do;}
true  {yylval.str = strdup(yytext);return true;}
false  {yylval.str = strdup(yytext);return false;}
":="  {yylval.str = strdup(yytext);return Af;}
";" {yylval.str = strdup(yytext);return Se;}
"+" {yylval.str = strdup(yytext);return Pl;}
"-" {yylval.str = strdup(yytext);return Mo;}
"*" {yylval.str = strdup(yytext);return Mu;}
"="	{yylval.str = strdup(yytext);return Eq;}
"<="	{yylval.str = strdup(yytext);return Lt;}
"(" {return openPar;}
")" {return closePar;}
"[" {return openCro;}
"]" {return closeCro;}
"{" {return openAco;}
"}" {return closeAco;}
":" {return DPoint;}
","	{return Vir;}
and {return And;}
or {return Or;}
not {return Not;}
[/t]+ {;}
[/n]  {;}
. {}
%%
int yywrap(){
	return    1;
}
