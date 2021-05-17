/**
 * @authors Vincent COMMIN & Louis LEENART
 *
 *
 * **/

#ifndef NODE_H
#define NODE_H

#include "edge.h"

struct NodeP;
typedef struct NodeP * Node;
typedef const struct NodeP * const_Node;

Node node_createEmpty();

Node node_create(Edge *edges, int length);

void node_print(Node node);

#endif