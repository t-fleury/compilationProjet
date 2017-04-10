#ifndef PPUTILS_H
#define PPUTILS_H
#include "environ.h"

typedef struct _type{
  int dim;
  int def;
} *Type;

typedef struct noeud{
  char* value;
  Type m_type;
  struct noeud *rightChild, *leftChild;
} *Node;

Node create_Node(char *value, Type mtype, Node rightChild, Node leftChild);
Node fusionNode(Type type, Node nodeLC, Node nodeRC);
Type create_Type(int dim, int mtype);
Node searchVar(Node varSearched, Node def);
Node getVarType(Node child, Node def);
void printNode(Node node);
int eval(char* op, int arg1, int arg2);

#endif
