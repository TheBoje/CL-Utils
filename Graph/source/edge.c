#include <stdlib.h>
#include <stdio.h>

#include "edge.h"

struct EdgeP
{
    int dest;
    int weight;
};

Edge edge_create(int dest, int weight)
{
    Edge edge = (Edge)malloc(sizeof(struct EdgeP));

    edge->dest = dest;
    edge->weight = weight;

    return edge;
}

Edge edge_createCopy(Edge src)
{
    if (src != NULL)
    {
        Edge edge = (Edge)malloc(sizeof(struct EdgeP));

        edge->dest = src->dest;
        edge->weight = src->weight;

        return edge;
    }
    else
    {
        return NULL;
    }
}

void edge_print(Edge src)
{
    if (src != NULL)
    {
        printf("Edge - [d:%d|w:%d]", src->dest, src->weight);
    }
    else
    {
        printf("Edge - NULL");
    }
}