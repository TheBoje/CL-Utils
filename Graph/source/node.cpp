// For malloc
#include <cstdlib>
#include <iostream>

#include "node.h"

// Constructor

// TODO(Louis): Faire une copy de edges ?
Node::Node(Edge * edges, int length){
    this->edges = edges;
    this->length = length;
}

Node::Node(){
    this->edges = nullptr;
    this->length = 0;
}

// Copy

Node Node::copy(){
    Edge * _edges = (Edge *)malloc(sizeof(Edge) * get_length());
    for (int i = 0; i < get_length(); i++) {
        _edges[i] = this->get_edge(i).copy();
    }
    return Node(_edges, get_length());
}

// GETTERS

Edge * Node::get_edges(){
    return edges;
}

Edge Node::get_edge(int index){
    return edges[index];
}

int Node::get_length(){
    return length;
}

// SETTERS

// TODO(Louis): Add length and null checks
void Node::set_edges(Edge * _edges, int _length){
    this->edges = _edges;
    this->length = _length;
}

// TODO(Louis): Add null check
void Node::add_edge(Edge edge){
    edges = (Edge *)realloc(edges, sizeof(Edge) * (get_length() + 1)); // Resize edges array by 1
    length++;
    edges[length - 1] = edge; // Adds new edge as last in array
}

void Node::remove_edge(int index){
    edges[index].~Edge(); // Destroy edge
    for (int i = index; i < get_length() - 1; i++) {
        edges[i] = edges[i + 1]; // Move each edge back by one
    }
    edges = (Edge *)realloc(edges, sizeof(Edge) * (length - 1)); // Resize edges array by -1
    length--;
}

// DEBUG

void Node::print(){
    std::cout << "\tNode - [l:" << get_length() << "]\n";
    for (int i = 0; i < get_length(); i++) {
        edges[i].print();
    }
}