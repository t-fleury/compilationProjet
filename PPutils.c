#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PPutils.h"
#include "environ.h"
#include "util.h"
#include <stdbool.h>
char* strdup(const char *s);
int isdigit(int c);

Node create_Node(char *value, Node leftChild, Node rightChild){
  Node node = (Node)malloc(sizeof(struct noeud));
  node->value = strdup(value);
  node->rightChild = rightChild;
  node->leftChild = leftChild;
  return node;
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
