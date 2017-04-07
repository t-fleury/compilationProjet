%{
#include  "y.tab.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fileno(FILE*);
char* strdup(const char *s);
%}

%s Comment

V [a-zA-Z]+[a-zA-Z0-9]*
I [1-9][0-9]*

%%
<INITIAL>{
	boolean	{return T_boo;}
	integer	{return T_int;}
	array\ of	{return T_ar;}
	new\ array\ of {return NewAr;}
	var {return Var;}
	defun	{return Def;}
	defpro	{return Dep;}
	0|{I} {yylval.str = strdup(yytext);return I;}
	skip  {return Sk;}
	if  {return If;}
	then {return Th;}
	else {return El;}
	while {return Wh;}
	do  {return Do;}
	true {return true;}
	false {return false;}
	":="  {return Af;}
	";" {return Se;}
	"+" {return Pl;}
	"-" {return Mo;}
	"*" {return Mu;}
	"="	{return Eq;}
	"<"	{return Lt;}
	"(" {return openPar;}
	")" {return closePar;}
	"[" {return openCro;}
	"]" {return closeCro;}
	"{" {return openAco;}
	"}" {return closeAco;}
	":" {return DPoint;}
	","	{return Vir;}
	"and" {return And;}
	"or" {return Or;}
	"not" {return Not;}
	{V} {yylval.str = strdup(yytext);return V;}
	"/*" {BEGIN Comment;}
	[ /t]  {;}
	\/n	{;}
	. {;}
}
<Comment>{
	"*/" {BEGIN INITIAL;}
	\/n	{;}
	. {;}
}
%%
int yywrap(){
	return    1;
}
