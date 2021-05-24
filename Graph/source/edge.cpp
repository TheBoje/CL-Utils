#include <iostream>
#include "edge.h"


Edge::Edge(int dest, int weight) {
    this->dest = dest;
    this->weight = weight;
}

Edge::Edge(int weight){
    this->dest = -1;
    this->weight = weight;
}

// Copy

Edge Edge::copy(){
    return Edge(get_dest(), get_weight());
}

// GETTERS

int Edge::get_dest(){
    return dest;
}

int Edge::get_weight(){
    return weight;
}

// SETTERS

void Edge::set_dest(int _dest) {
    this->dest = _dest;
}

void Edge::set_weight(int _weight) {
    this->weight = _weight;
}

// DEBUG

void Edge::print() {
    std::cout << "\t\tEdge - [d:" << get_dest() << "|w:" << get_weight() << "]\n";
}