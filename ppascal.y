%{
#include  <stdio.h>
#include  <ctype.h>

int yylex();
void yyerror(const char*);

int line = 1;
%}

%error-verbose

%union{
  char* str;
  int integer;
}

%start MP
%token <string>I V T_ar NFon NPro NewAr T_boo T_int Def Dep Sk Af true false Se If Th El Var Wh Do Pl Mo Mu And Or Not Lt Eq openPar closePar openCro closeCro openAco closeAco

%left And
%left Or Lt Eq
%nonassoc Not
%%

MP: L_vart LD C

E: E Pl E
 | E Mo E
 | E Mu E
 | E Or E
 | E Lt E
 | E Eq E
 | E And E
 | Not E
 | openPar E closePar
 | I
 | V
 | true
 | false
 | V openPar L_args closePar
 | NewAr TP openCro E closeCro
 | Et

 Et: V openCro E closeCro
   | Et openCro E closeCro

C: C Se C
 | Et Af E
 | V Af E
 | Sk
 | openAco C closeAco
 | If E Th C El C
 | Wh E Do C
 | V openPar L_args closePar

 L_args: %empty
       | L_argsnn

L_argsnn: E
        | E ',' L_argsnn

L_argt: %empty
      | L_argtnn

L_argtnn: Argt
        | L_argtnn ',' Argt

Argt : V ':' TP

TP: T_boo
  | T_int
  | T_ar TP

L_vart: %empty
      | L_vartnn

L_vartnn: Var Argt
        | L_vartnn ',' Var Argt

D_entp: Dep NPro openPar L_argt closePar

D_entf: Def NFon openPar L_argt closePar ':' TP

D: D_entp L_vart C
 | D_entf L_vart C

LD: %empty
  | LD D

%%

void yyerror(const char *s){
  fprintf( stderr, "Erreur l%d: %s\n", line, s );
}

int main(int argn, char **argv){
  yyparse();
}
