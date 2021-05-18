/**
 * @authors Vincent COMMIN & Louis LEENART
 *
 *
 * **/

#ifndef NODE_H
#define NODE_H

#include "edge.h"

class Node {
    private:
        Edge * edges;
        int length;

    public:
        // Constructor

        Node(Edge * edges, int length);

        Node();

        // Copy

        Node copy();

        // GETTERS

        Edge * get_edges();

        Edge get_edge(int index);

        int get_length();

        // SETTERS

        void set_edges(Edge * edges, int lenght);

        void add_edge(Edge edge);

        void remove_edge(int index);

        // DEBUG

        void print();
};
#endif