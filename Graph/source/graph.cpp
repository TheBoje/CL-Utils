// For malloc
#include <cstdlib>
#include <iostream>

#include "graph.h"

Graph::Graph() {
    this->nodes = nullptr;
    this->length = 0;
}

// TODO(Louis): Faire une copy de nodes ?
Graph::Graph(Node *nodes, int length) {
    this->nodes = nodes;
    this->length = length;
}

Graph Graph::copy() {
    Node * _nodes = (Node *)malloc(sizeof(Node) * get_length());
    for (int i = 0; i < get_length(); i++) {
        _nodes[i] = get_node(i).copy();
    }
    return Graph(_nodes, get_length());
}

Node * Graph::get_nodes() {
    return nodes;
}

Node Graph::get_node(int index) {
    return nodes[index];
}

int Graph::get_length() {
    return length;
}

// TODO(Louis): Add null and length checks
void Graph::set_nodes(Node * _nodes, int _length) {
    this->nodes = _nodes;
    this->length = _length;
}

void Graph::add_node(Node node) {
    nodes = (Node *)realloc(nodes, sizeof(Node) * (get_length() + 1));
    length++;
    nodes[get_length() - 1] = node;
}

void Graph::remove_node(int index) {
    nodes[index].~Node();
    for(int i = index; i < get_length() - 1; i++) {
        nodes[i] = nodes[i + 1];
    }
    nodes = (Node *)realloc(nodes, sizeof(Node) * (get_length() - 1));
    length--;
}

void Graph::print() {
    std::cout << "Graph - [l:" << get_length() << "]\n";
    for (int i = 0; i < get_length(); i++) {
        nodes[i].print();
    }
}