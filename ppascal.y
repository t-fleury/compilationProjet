%{
#include  <stdio.h>
#include  <ctype.h>

int yylex();
void yyerror(const char*);

int line = 1;
%}

%error-verbose

%start start
%token Not And Or Imp Equiv Var True False Def Id

%left And
%left Or Imp Equiv
%nonassoc Not
%%

start: Progr ;

Progr : VarLoc FuncDef_L Instr_L Expr
VarLoc : %empty
       | Var Arg_L ';'
Instr_L : %empty
        | Instr_L Instr
Instr : Affect ';'
Affect : Id '=' Expr
FuncDef_L : %empty
          | FuncDef_L FuncDef
FuncDef : Def Id '(' Arg_L ')' VarLoc Instr_L Expr ';'
Arg_L : %empty
      | Id
      | Arg_L ',' Id
Expr_L : %empty
       | Expr
       | Expr_L ',' Expr
Expr : True | False
     | Id
     | Id '(' Expr_L ')'
     | Expr And Expr
     | Expr Or Expr
     | Expr Imp Expr
     | Expr Equiv Expr
     | Not Expr
     | '(' Expr ')'

%%

void yyerror(const char *s){
  fprintf( stderr, "Erreur l%d: %s\n", line, s );
}

int main(int argn, char **argv){
  yyparse();
}
