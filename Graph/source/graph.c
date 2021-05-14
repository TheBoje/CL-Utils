#include <stdlib.h>

#include "edge.h"
#include "graph.h"

struct GraphP
{
    int length;
    Edge * adjListArray;
};

// CONSTRUCTORS

Graph graph_createNew(int nbEdges)
{
    Graph graph = (Graph)malloc(sizeof(struct GraphP));

    graph->length = nbEdges;
    graph->adjListArray = (Edge *) malloc(sizeof(Edge) * nbEdges);

    return graph;
}

Graph graph_createCopy(Graph src)
{
    if(src != NULL)
    {
        Graph newGraph = (Graph)malloc(sizeof(struct GraphP));

        // Initialising parameters to copy datas from src
        newGraph->length = src->length;
        newGraph->adjListArray = (Edge *) malloc(sizeof(Edge) * src->length);

        for(int i = 0; i < src->length; i++)
            newGraph->adjListArray[i] = edge_createCopy(src->adjListArray[i]);

        return newGraph;
    }
    else
    {
        return NULL;
    }
}

// DESTRUCTORS

void graph_clear(Graph graph)
{
    if(graph != NULL)
    {
        for(int i = 0; i < graph->length; i++)
        {
            // Créer fonction pour clear une liste d'edges
        }

        graph->length = 0;
    }
}

void graph_destruct(Graph graph)
{
    if(graph != NULL)
    {
        for(int i = 0; i < graph->length; i++)
        {
            // Créer fonction pour clear une liste d'edges
        }

        free(graph->adjListArray);
        free(graph);
    }
}