#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PPutils.h"
#include "environ.h"
#include "util.h"
#include <stdbool.h>
char* strdup(const char *s);
int isdigit(int c);

Node create_Node(char *value, Type mtype, Node leftChild, Node rightChild){
  Node node = (Node)malloc(sizeof(struct noeud));
  node->value = strdup(value);
  node->m_type = mtype;
  node->rightChild = rightChild;
  node->leftChild = leftChild;
  return node;
}

Type create_Type(int dim, int mtype){
  Type newType = (Type)malloc(sizeof(struct _type));
  newType->dim = dim;
  newType->def = mtype;
  return newType;
}


Type searchType(Node typeSearched, Node def){
  if(typeSearched == NULL){return NULL;}
  if(!strcmp(typeSearched->value, def->value)){
    return def->m_type;
  }
  Type FGType = searchType(typeSearched, def->leftChild);
  Type FDType = searchType(typeSearched, def->rightChild);
  if(FGType->def == typeSearched->m_type->def){
    return  FGType;
  }else if(FDType->def == typeSearched->m_type->def){
    return  FDType;
  }
  return NULL;
}

int searchVar(Node varSearched, Node def){
  if(varSearched == NULL){return 0;}
  if(!strcmp(varSearched->value, def->value)){
    return 1;
  }
  int tmp = searchVar(varSearched, def->leftChild);
  if(tmp){
    return tmp;
  }
  tmp = searchVar(varSearched, def->rightChild);
  if(tmp){
    return tmp;
  }
  return 0;
}

void printNode(Node node){
  if(node == NULL){printf("NULL\n");return;}
  printf("%s ", node->value);
  if(node->leftChild != NULL){
    printNode(node->leftChild);
    if(node->rightChild != NULL){
        printNode(node->rightChild);
    }
  }
}

int eval(char *op, int arg1, int arg2)
{
  if(!strcmp("Pl", op)){
      return(arg1 + arg2);
  }else if(!strcmp("Mo", op)){
      return(arg1 - arg2);
  }else if(!strcmp("Mu", op)){
      return(arg1 * arg2);
  }
  return(0);
}
