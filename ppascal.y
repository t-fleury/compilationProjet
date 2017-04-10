%{
#include  <stdio.h>
#include  <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "PPutils.h"
#include "util.h"

int yylex();
void yyerror(const char*);


Node defVar; //Arbre des définitions des variables
Node defFP; //Arbre des définitions des fonctions et procédures
Node temp; //Utilisé pour enregistrer un noeud
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
  Node def = create_Node("", NULL, $1, $2);
  $$ = create_Node("Mp", NULL, def, $3);
  printNode($$);
  printf("\n");
}

E: E Pl E {$$ = create_Node("Pl",create_Type(0,1),$1,$3);}
 | E Mo E {$$ = create_Node("Mo",create_Type(0,1),$1,$3);}
 | E Mu E {$$ = create_Node("Mu",create_Type(0,1),$1,$3);}
 | E Or E {$$ = create_Node("Or",create_Type(0,2),$1,$3);}
 | E Lt E {$$ = create_Node("Lt",create_Type(0,2),$1,$3);}
 | E Eq E {$$ = create_Node("Eq",create_Type(0,2),$1,$3);}
 | E And E {$$ = create_Node("And",create_Type(0,2),$1,$3);}
 | Not E  {$$ = create_Node("Not",create_Type(0,2),$2,NULL);}
 | openPar E closePar {$$ = $2;}
 | I {$$ = create_Node($1,create_Type(0,1), NULL,NULL);}
 | V {
    if((temp = searchVar(create_Node($1,NULL, NULL,NULL),defVar)) == NULL){
      printf("Variable non définie\n") ;
      exit(0);
    }else{
      temp = getVarType(temp, defVar);
      $$ = create_Node($1, temp->m_type, NULL,NULL);
    }
   }
 | true {$$ = create_Node("true",create_Type(0,2),NULL,NULL);}
 | false {$$ = create_Node("false",create_Type(0,2),NULL,NULL);}
 | V openPar L_args closePar {
   Node nameFunc = create_Node($1,NULL,  NULL, NULL);
   $$ = create_Node("callFunc",NULL,nameFunc,$3);
 }
 | NewAr TP openCro E closeCro {
   $$ = create_Node($1, NULL, $2, $4);
 }
 | Et {$$ = $1;}

 Et: V openCro E closeCro {
     Node var = create_Node($1,NULL,  NULL, NULL);
     if(searchVar(var,defVar)!=NULL){
       $$ = create_Node("tabSimple", NULL,var, $3);
     }else{
      printf("Variable non définie\n") ;
      exit(0);
    }

  }
   | Et openCro E  closeCro {
     $$ = create_Node("tab", NULL,$1, $3);
   }

C: C Se C {$$ = create_Node("Se",NULL,$1,$3);}
 | Et Af E  {
   temp = getVarType($1,defVar);
   if(temp != NULL && temp->m_type->def == $3->m_type->def){
     $$ = create_Node("Af", NULL,$1, $3);
   }else{
     printf("Erreur typage\n");
     exit(0);
  }
 }
 | V Af E {
    Node variable = create_Node($1,NULL,  NULL, NULL);
    printf("%s\n", $3->value);
    if(!strcmp($3->value,"NewAr")){
      printf("COUCOU\n");
      if(searchVar(variable,defVar) != NULL || searchVar(variable,defFP)!= NULL){
        $$ = create_Node("Af", NULL,variable, $3);
        }else{
          printf("Variable non définie\n") ;
          exit(0);
        }
      }else{
        if(searchVar(variable,defVar) != NULL || searchVar(variable,defFP)!= NULL){
          temp = getVarType(variable,defVar);
          if(temp != NULL && temp->m_type->def == $3->m_type->def){
            $$ = create_Node("Af", NULL,variable, $3);
            }else{
              printf("Erreur typage\n");
              exit(0);
            }
          }else{
            printf("Variable non définie\n") ;
            exit(0);
          }
      }
  }
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
        | L_argtnn {defVar = fusionNode(NULL, defVar, create_Node("",NULL, $1, NULL));}

L_argtnn: Argt {$$ = $1;}
        | L_argtnn Vir Argt {$$ = create_Node("argt", NULL,$1, $3);}

Argt : V DPoint TP {
    $$ = create_Node($1, NULL,NULL, $3);
}

TP: T_boo  {$$ = create_Node("boolean",create_Type(0,2), NULL, NULL);}
  | T_int  {$$ = create_Node("int",create_Type(0,1), NULL, NULL);}
  | T_ar TP {$$ = create_Node("array of ",create_Type(0,3), $2, NULL);}

L_vart: %empty {$$ = NULL;}
        |L_vartnn  {
          $$ = create_Node("defVar",NULL, $1, NULL);
          if(defVar == NULL){
            defVar = $$;
          }else{
            defVar = fusionNode(NULL, defVar, $$);
          }
        }

L_vartnn: Var Argt {$$ = $2;}
        | L_vartnn Vir Var Argt {$$ = create_Node("defVar1", NULL,$1, $4);}

D_entp: Dep V openPar L_argt closePar {
  Node name = create_Node($2,NULL, NULL,NULL);
  $$ = create_Node($1,NULL, name,$4);
  if(defFP == NULL){
      defFP = $$;
    }else{
      defFP = fusionNode(NULL,defFP, $$);
    }
}

D_entf: Def V openPar L_argt closePar DPoint TP {
  Node name = create_Node($2,NULL, NULL,NULL);
  Node def = create_Node("", NULL,name, $4);
  $$ = create_Node($1,NULL,  def, $7);
  if(defFP == NULL){
      defFP = $$;
    }else{
      defFP = fusionNode(NULL,defFP, $$);
    }
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
