/**
 * @authors Vincent COMMIN & Louis LEENART
 * 
 * A simple graph library
 * 
 * **/

#ifndef GRAPH_H
#define GRAPH_H

#include "node.h";

// Graph structures 
struct GraphP;
typedef struct GraphP * Graph;
typedef const struct GraphP * const_Graph;


/*#######################
    GRAPH CONSTRUCTORS
#########################*/

/**
 * Create a new graph with nbNodes nodes edgeless
 * 
 * @param nbNodes : number of nodes of the graph
 * @return Graph : a nbNodes graph edgeless
 * */
Graph graph_createNew(int nbNodes);

/**
 * Create a copy of a graph
 * 
 * @param src : graph to copy
 * @return Graph : the graph copied
 * */
Graph graph_createCopy(Graph src);


/*#######################
    GRAPH DESTRUCTORS
#########################*/

/**
 * Clear vertices and edges of the graph
 * 
 * @warning Cost a lot
 * 
 * @param graph : the graph you want to clear
 * */
void graph_clear(Graph graph);

/**
 * Destruct the graph, clear vertices and edges and free memory
 *
 * @warning Cost a lot
 * 
 * @param graph : the graph you want to destruct
 * */
void graph_destruct(Graph graph);

/*#######################
    GRAPH CORE FUNCTIONS
#########################*/

/**
 * Add an oriented edge between vertices src and dest
 * 
 * @param graph : graph where you put an edge
 * @param src : index of the source vertex
 * @param dest : index of the destination vertex
 * 
 * @return int : return -1 if src or dest does not exist in graph, else 0
 * */
int graph_addEdge(Graph graph, int src, int dest);

/**
 * Add a vertex without any connection to the graph
 * It will automatically be added at the end of the array
 * 
 * @param graph : graph where you add the vertex
 * 
 * @return int : index of the new vertex
 * */
int graph_addVertex(Graph graph);

/**
 * Delete an edge of the graph
 * 
 * @param graph : the graph where you delete the edge
 * @param src : the index of the source vertex
 * @param dest : the index of the destination vertex
 * 
 * @return int : return -1 if src or dest does not exist in the graph, else 0
 * */
int graph_delEdge(Graph graph, int src, int dest);

/**
 * delete a vertex, it will automatically clear all edges connected to him
 *  
 * @warning Cost a lot 
 * 
 * @param graph : graph where you delete the vertex
 * @param vertex : the index of the node
 * 
 * @return int : return -1 if the node doesn't exist, else 0
 * */
int graph_delVertex(Graph graph, int vertex);


/*#######################
    GRAPH GETTERS
#########################*/

/**
 * Get the adjacency list of the vertex
 * 
 * @param vertex : index of the node
 * 
 * @return Node : the adjacency list of the node
 * */
Node graph_getAdjList(int vertex);


/*#######################
    GRAPH SETTERS
#########################*/

/**
 * Set the adjacency list of the vertex
 * 
 * @param vertex : index of the node
 * 
 * @return int : return -1 if the vertex does not exist else, 0
 * */
int graph_setAdjList(int vertex);

#endif