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
Type create_Type(int dim, int mtype);
Type searchType(Node typeSearched, Node def);
int searchVar(Node varSearched, Node def);
void printNode(Node node);
int eval(char* op, int arg1, int arg2);

#endif
