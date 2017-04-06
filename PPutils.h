#ifndef PPUTILS_H
#define PPUTILS_H
#include "environ.h"
#include "util.h"

Node create_Node(char *value, Node rightChild, Node leftChild);
void printNode(Node node);
int eval(char* op, int arg1, int arg2);

#endif
