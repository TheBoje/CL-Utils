/**
 * @authors Vincent COMMIN & Louis LEENART
 * 
 * A simple graph library
 * 
 * **/

#ifndef GRAPH_H
#define GRAPH_H

#include "node.h"

class Graph {
    private:
        Node * nodes;
        int length;

    public:
        // Constructor

        Graph();

        Graph(Node * nodes, int length);

        // Copy

        Graph copy();

        // Getters

        Node * get_nodes();

        Node get_node(int index);

        int get_length();

        // Setters

        void set_nodes(Node * _nodes, int _length);

        void add_node(Node node);

        void remove_node(int index);

        // Debug

        void print();
};

#endif