/**
 * @authors Vincent COMMIN & Louis LEENART
 * 
 * A module used as edges for the graph's adjacency lists. 
 * One edge is one of the cell of the adjacency list but the head
 * is in the graph.
 * 
 * **/

#ifndef EDGE_H
#define EDGE_H

class Edge {
    private:
        int dest;
        int weight;

    public:
        // Constructor

        Edge(int dest, int weight);

        Edge(int weight);

        // Copy

        Edge copy();

        // GETTERS

        int get_dest();

        int get_weight();

        // SETTERS

        void set_dest(int dest);

        void set_weight(int weight);

        // DEBUG

        void print();
};

#endif