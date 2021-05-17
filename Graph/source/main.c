#include <stdio.h>
#include <stdlib.h>

#include "../headers/graph.h"
#include "../headers/edge.h"

int main(int argc, char const *argv[])
{
    Edge edge = edge_create(0, 1);
    edge_print(edge);
    return EXIT_SUCCESS;
}
