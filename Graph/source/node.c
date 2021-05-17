#include <stdlib.h>
#include <stdio.h>

#include "node.h"

struct NodeP
{
    Edge * edges;
    int length;
};

Node node_createEmpty()
{
    Node node = (Node)malloc(sizeof(struct NodeP));

    node->edges = NULL;
    node->length = 0;

    return node;
}

Node node_create(Edge * edges, int length)
{
    Node node = (Node)malloc(sizeof(struct NodeP));

    if (edges != NULL && length > 0)
    {
        node->edges = (Edge *) malloc(sizeof(Edge) * length);
        for (int i = 0; i < length; ++i) {
            node->edges[i] = edge_createCopy(edges[i]);
        }
        node->length = length;
    }
    else
    {
        node = node_createEmpty();
    }
    return node;
}

void node_print(Node node)
{
    printf("Node - [l:%d]", node->length);
    for (int i = 0; i < node->length; ++i) {
        edge_print(node->edges[i]);
    }
}