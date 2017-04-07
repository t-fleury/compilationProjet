%{
#include  <stdio.h>
#include  <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "PPutils.h"
#include "util.h"

int yylex();
void yyerror(const char*);

char* iToC(int character){
  char* tmp = malloc(sizeof(char));
  sprintf(tmp, "", character);
  return tmp;
}

Node defVar; //Arbre des définitions des variables
%}

%error-verbose

%union{
  struct noeud* node;
  char* str;
  int integer;
}

%start MP
%token T_boo T_int T_ar
%token<str> I V Dep Def NewAr true false Var openPar closePar openCro closeCro openAco closeAco DPoint Vir
%token<node> Mp Af Se If Th El Wh Do Pl Mo Mu And Or Not Lt Eq Sk Ind Afc AfInd Jp Jz St Param Call Ret

%type<node> MP E Et C L_argsnn L_argtnn Argt LD L_vart L_vartnn L_args L_argt D D_entp D_entf TP

%left Vir
%left Af
%left If Th El Wh Do
%left Mo Mu Pl
%left And
%left Se
%right openPar openCro openAco
%nonassoc Or Lt Eq

%nonassoc Not

%%
MP: L_vart LD C {
  defVar = create_Node("defVar",NULL, $1, NULL);
  Node def = create_Node("def", NULL,$1, $2);
  $$ = create_Node("Mp", NULL,def, $3);
  printNode($$);
  printf("\n");
}

E: E Pl E {$$ = create_Node("Pl",create_Type(1,0),$1,$3);}
 | E Mo E {$$ = create_Node("Mo",create_Type(1,0),$1,$3);}
 | E Mu E {$$ = create_Node("Mu",create_Type(1,0),$1,$3);}
 | E Or E {$$ = create_Node("Or",create_Type(2,0),$1,$3);}
 | E Lt E {$$ = create_Node("Lt",create_Type(2,0),$1,$3);}
 | E Eq E {$$ = create_Node("Eq",create_Type(2,0),$1,$3);}
 | E And E {$$ = create_Node("And",create_Type(2,0),$1,$3);}
 | Not E  {$$ = create_Node("Not",create_Type(2,0),$2,NULL);}
 | openPar E closePar {$$ = $2;}
 | I {$$ = create_Node($1,create_Type(1,0), NULL,NULL);}
 | V {$$ = create_Node($1,NULL, NULL,NULL);}
 | true {$$ = create_Node("true",create_Type(2,0),NULL,NULL);}
 | false {$$ = create_Node("false",create_Type(2,0),NULL,NULL);}
 | V openPar L_args closePar {
   Node nameFunc = create_Node($1,NULL,  NULL, NULL);
   $$ = create_Node("callFunc",NULL,nameFunc,$3);
 }
 | NewAr TP openCro E closeCro {
   $$ = create_Node($1,NULL,  $2, $4);
 }
 | Et {$$ = $1;}

 Et: V openCro E closeCro {
   Node var = create_Node($1,NULL,  NULL, NULL);
   $$ = create_Node("tabSimple", NULL,var, $3);
  }
   | Et openCro E  closeCro {
     $$ = create_Node("tab", NULL,$1, $3);
   }

C: C Se C {$$ = create_Node("Se",NULL,$1,$3);}
 | Et Af E  {
  $$ = create_Node("Af", NULL,$1, $3);}
 | V Af E {
  Node variable = create_Node($1,NULL,  NULL, NULL);
  $$ = create_Node("Af", NULL,variable, $3);}
 | Sk {$$ = create_Node("skip", NULL,NULL, NULL);}
 | openAco C closeAco {$$ = $2;}
 | If E Th C El C {
    Node result = create_Node("", NULL,$4, $6);
    $$  = create_Node("If", NULL,$2, result);
  }
 | Wh E Do C {$$ = create_Node("Wh", NULL,$2,$4);}
 | V openPar L_args closePar {
   Node nameFunc = create_Node($1,NULL,  NULL, NULL);
   $$ = create_Node("callFunc",NULL,nameFunc,$3);
 }


L_args: %empty {$$ = NULL;}
        | L_argsnn {$$ = $1;}

L_argsnn: E {$$ = $1;}
        | E Vir L_argsnn {$$ = create_Node("args", NULL,$1, $3);}

L_argt: %empty {$$ = NULL;}
        | L_argtnn {$$ = $1;}

L_argtnn: Argt {$$ = $1;}
        | L_argtnn Vir Argt {$$ = create_Node("argt", NULL,$1, $3);}

Argt : V DPoint TP {
  Node var = create_Node($1,NULL,  NULL, NULL);
  $$ = create_Node("Var", NULL,var, $3);
}

TP: T_boo  {$$ = create_Node(iToC(T_boo),NULL, NULL, NULL);}
  | T_int  {$$ = create_Node(iToC(T_int),NULL, NULL, NULL);}
  | T_ar TP {$$ = create_Node(iToC(T_ar),NULL, $2, NULL);printNode($$);}

L_vart: %empty {$$ = NULL;}
        |L_vartnn  {$$ = $1;}

L_vartnn: Var Argt {$$ = $2;}
        | L_vartnn Vir Var Argt {$$ = create_Node("", NULL,$1, $4);}

D_entp: Dep V openPar L_argt closePar {
  Node name = create_Node($2,NULL, NULL,NULL);
  $$ = create_Node($1,NULL, name,$4);
}

D_entf: Def V openPar L_argt closePar DPoint TP {
  Node name = create_Node($2,NULL, NULL,NULL);
  Node def = create_Node("", NULL,name, $4);
  $$ = create_Node($1,NULL,  def, $7);
}

D: D_entp L_vart C  {
  Node node = create_Node("", NULL,$2, $3);
  $$ = create_Node("defproc", NULL,$1, node);
}
 | D_entf L_vart C  {
   Node node = create_Node("", NULL,$2, $3);
   $$ = create_Node("defproc", NULL,$1, node);
 }

LD: %empty {$$ = NULL;}
  | LD D  {$$ = create_Node("LD", NULL,$1, $2);}

%%

void yyerror(const char *s){
  fprintf( stderr, "Erreur : %s\n", s);
  exit(0);
}

void printToken(){
  int token;
   while ((token = yylex()) != 0)
       printf("Token: %d (%s)\n", token, yytext);
}

int main(int argn, char **argv){
  //printToken();
  yyparse();
}
