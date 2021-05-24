#include <iostream>
#include "edge.h"
#include "node.h"
#include "graph.h"

int main()
{
    Edge e1(1, 3);
    Edge e2(0, 2);
    Edge e3(0, 1);
    Edge e4(1, 2);
    Edge e5(2, 1);

    Node node1;
    Node node2;
    node1.add_edge(e1);
    node1.add_edge(e2);
    node2.add_edge(e3);
    node2.add_edge(e4);
    node2.add_edge(e5);

    Graph graph;

    graph.add_node(node1);
    graph.add_node(node2);

    graph.print();
}