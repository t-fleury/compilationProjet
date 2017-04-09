#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PPutils.h"
#include "environ.h"
#include "util.h"
#include <stdbool.h>
char* strdup(const char *s);
int isdigit(int c);
int strcmp(const char *str1, const char *str2);

Node create_Node(char *value, Type mtype, Node leftChild, Node rightChild){
  Node node = (Node)malloc(sizeof(struct noeud));
  node->value = strdup(value);
  node->m_type = mtype;
  node->rightChild = rightChild;
  node->leftChild = leftChild;
  return node;
}

Node fusionNode(Type type, Node nodeLC, Node nodeRC){
  return create_Node("",type, nodeLC, nodeRC);
}

Type create_Type(int dim, int mtype){
  Type newType = (Type)malloc(sizeof(struct _type));
  newType->dim = dim;
  newType->def = mtype;
  return newType;
}

Node searchVar(Node varSearched, Node def){
  if(def == NULL){return def;}  
  //printf("%s : %s\n", varSearched->value, def->value);
  if(!strcmp(varSearched->value, def->value)){
    return def;
  }
  Node tmp = searchVar(varSearched, def->leftChild);
  if(tmp != NULL){
    return tmp;
  }
  tmp = searchVar(varSearched, def->rightChild);
  if(tmp != NULL){
    return tmp;
  }
  return NULL;
}

Node myFather(Node child, Node def){
  if(def == NULL) {return NULL;}
  if(def->rightChild != NULL && !strcmp(child->value, def->rightChild->value)){
    return def;
  }
  if(def->leftChild != NULL && !strcmp(child->value,def->leftChild->value)){
    printf("return Normal\n");
    return def;
  }
  Node tmp = myFather(child, def->leftChild);
  if(tmp != NULL){
    printf("return filsGauche\n");
    return tmp;
  }
  tmp = myFather(child, def->rightChild);
  if(tmp != NULL){
    printf("return filsDroit\n");
    return tmp;
  }
  printf("return macouilles\n");
  return NULL; 
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
