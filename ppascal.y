%{
#include  <stdio.h>
#include  <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "PPutils.h"

int yylex();
void yyerror(const char*);

int line = 1;
%}

%error-verbose

%union{
  struct noeud* node;
  char* str;
  int integer;
}

%start MP
%token T_boo T_int T_ar
%token<str> I V NFon NPro NewAr true false Var openPar closePar openCro closeCro openAco closeAco DPoint Vir
%token<node> Mp Def Dep Af Se If Th El Wh Do Pl Mo Mu And Or Not Lt Eq Sk Ind Afc AfInd Jp Jz St Param Call Ret
%type<integer> TP
%type<node> MP E Et C L_argsnn L_argtnn Argt

%left Vir
%left Af
%left If Th El Wh Do
%left Mo Mu Pl
%left And
%left Se
%nonassoc Or Lt Eq
%right openPar openCro openAco

%nonassoc Not

%%
MP: L_vart LD C {
  $$ = Nalloc();
  $$ = create_Node("Mp", Mp, $3, NULL);
}

E: E Pl E {$$ = create_Node("Pl",$2,$1,$3);}
 | E Mo E {$$ = create_Node("Mo",$2,$1,$3);}
 | E Or E {$$ = create_Node("Or",$2,$1,$3);}
 | E Lt E {$$ = create_Node("Lt",$2,$1,$3);}
 | E Eq E {$$ = create_Node("Eq",$2,$1,$3);}
 | E And E {$$ = create_Node("And",$2,$1,$3);}
 | E Mu E {$$ = create_Node("Mu",$2,$1,$3);}
 | Not E
 | V openPar L_args closePar
 | Et
 | openPar E closePar
 | I  {$$ = create_Node()}
 | Mo I
 | V
 | true
 | false
 | NewAr TP openCro E closeCro

 Et: V openCro E closeCro
   | Et openCro E closeCro

C: Et Af E
 | V Af E
 | Sk
 | openAco C closeAco
 | If E Th C El C
 | Wh E Do C
 | V openPar L_args closePar
 | C Se C

L_args: %empty
        | L_argsnn

L_argsnn: E
        | E Vir L_argsnn

L_argt: %empty
        | L_argtnn

L_argtnn: Argt
        | L_argtnn Vir Argt

Argt : V DPoint TP

TP: T_boo  {$$ = T_boo;}
  | T_int  {$$ = T_int;}
  | T_ar TP {;}

L_vart: %empty
        |L_vartnn

L_vartnn: Var Argt
        | L_vartnn Vir Var Argt

D_entp: Dep V openPar L_argt closePar

D_entf: Def V openPar L_argt closePar DPoint TP

D: D_entp L_vart C
 | D_entf L_vart C

LD: %empty
  | LD D

%%

void yyerror(const char *s){
  fprintf( stderr, "Erreur l%d: %s\n", line, s );
  exit(0);
}

int main(int argn, char **argv){
  /*int token;
   while ((token = yylex()) != 0)
       printf("Token: %d (%s)\n", token, yytext);
   return 0;*/
  yyparse();
}
