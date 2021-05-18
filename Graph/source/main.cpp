#include <iostream>
#include "edge.h"
#include "node.h"

int main()
{
    Edge e1(1, 3);
    Edge e2(0, 2);
    Node node;
    node.add_edge(e1);
    node.add_edge(e2);

    node.print();
}