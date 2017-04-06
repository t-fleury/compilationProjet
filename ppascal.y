%{
#include  <stdio.h>
#include  <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "PPutils.h"

int yylex();
void yyerror(const char*);

int line = 1;

char* iToC(int character){
  char* tmp = malloc(sizeof(char));
  sprintf(tmp, "", character);
  return tmp;
}
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

%type<node> MP E Et C L_argsnn L_argtnn Argt LD L_vart L_vartnn L_args L_argt D D_entp D_entf TP

%left Vir
%left Af
%left If Th El Wh Do
%left Mo Mu Pl
%left And
%left Se
%nonassoc Or Lt Eq

%nonassoc Not

%%
MP: L_vart LD C {
  $$ = Nalloc();
  Node def = Nalloc();
  def = create_Node("def", $1, $2);
  $$ = create_Node("Mp", def, $3);
  printNode($$);
  printf("\n");
}

E: E Pl E {$$ = create_Node("Pl",$1,$3);}
 | E Mo E {$$ = create_Node("Mo",$1,$3);}
 | E Or E {$$ = create_Node("Or",$1,$3);}
 | E Lt E {$$ = create_Node("Lt",$1,$3);}
 | E Eq E {$$ = create_Node("Eq",$1,$3);}
 | E And E {$$ = create_Node("And",$1,$3);}
 | E Mu E {$$ = create_Node("Mu",$1,$3);}
 | Not E
 | V openPar L_args closePar {
   Node nameFunc = create_Node($1, NULL, NULL);
   $$ = create_Node("callFunc",nameFunc,$3);
 }
 | Et {$$ = $1;}
 | openPar E closePar {$$ = $2;}
 | I  {$$ = create_Node($1,NULL,NULL);}
 | Mo I {
   char* tmp = malloc(sizeof(char));
   strcpy(tmp, "-");
   strcat(tmp, $2);
   $$ = create_Node(tmp,NULL,NULL);
 }
 | V {$$ = create_Node($1,NULL,NULL);}
 | true {$$ = create_Node("true",NULL,NULL);}
 | false {$$ = create_Node("false",NULL,NULL);}
 | NewAr TP openCro E closeCro {
   printNode($2);
   $$ = create_Node($1, $2, $4);
   printf("\n");
 }

 Et: V openCro E closeCro {
   Node var = create_Node($1, NULL, NULL);
   $$ = create_Node("tabSimple", var, $3);
  }
   | Et openCro E closeCro  {
     $$ = create_Node("tab", $1, $3);
   }

C: Et Af E  {
  $$ = create_Node("Af", $1, $3);}
 | V Af E {
  Node variable = create_Node($1, NULL, NULL);
  $$ = create_Node("Af", variable, $3);}
 | Sk {$$ = create_Node("skip", NULL, NULL);}
 | openAco C closeAco {$$ = $2;}
 | If E Th C El C {
    Node result = create_Node("", $4, $6);
    $$  = create_Node("If", $2, result);
  }
 | Wh E Do C {$$ = create_Node("Wh", $2,$4);}
 | V openPar L_args closePar {
   Node nameFunc = create_Node($1, NULL, NULL);
   $$ = create_Node("callFunc",nameFunc,$3);
 }
 | C Se C {$$ = create_Node("Se",$1,$3);}

L_args: %empty {$$ = NULL;}
        | L_argsnn {$$ = $1;}

L_argsnn: E {$$ = $1;}
        | E Vir L_argsnn {$$ = create_Node("args", $1, $3);}

L_argt: %empty {$$ = NULL;}
        | L_argtnn {$$ = $1;}

L_argtnn: Argt {$$ = $1;}
        | L_argtnn Vir Argt {$$ = create_Node("argt", $1, $3);}

Argt : V DPoint TP {
  Node var = create_Node($1, NULL, NULL);
  $$ = create_Node("Var", var, $3);
}

TP: T_boo  {$$ = create_Node(iToC(T_boo), NULL, NULL);}
  | T_int  {$$ = create_Node(iToC(T_int), NULL, NULL);}
  | T_ar TP {printf("%s\n", iToC(T_ar));$$ = create_Node(iToC(T_ar), $2, NULL);}

L_vart: %empty {$$ = NULL;}
        |L_vartnn  {$$ = $1;}

L_vartnn: Var Argt {$$ = $2;}
        | L_vartnn Vir Var Argt {$$ = create_Node("vart", $1, $4);}

D_entp: Dep V openPar L_argt closePar

D_entf: Def V openPar L_argt closePar DPoint TP

D: D_entp L_vart C
 | D_entf L_vart C

LD: %empty {$$ = NULL;}
  | LD D  {$$ = create_Node("LD", $1, $2);}

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
