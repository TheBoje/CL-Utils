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

// Adjacency list structures
struct EdgeP;
typedef struct EdgeP * Edge;
typedef const struct EdgeP * const_Edge; 

/*#######################
    EDGE CONSTRUCTORS
#########################*/


/**
 * Create a new edge without embedding unlinked
 * 
 * @warning the list is created without embedding by default
 * 
 * @param dest : index of the vertex 
 * 
 * @return Edge : return the new list
 * */
Edge edge_create(int dest);

/**
 * Create a new edge with embedding unlinked
 * 
 * @warning the list is created without embedding by default
 * 
 * @param dest : index of the vertex
 * @param embedding : edge's datas
 * 
 * @return Edge : return the new list
 * */
Edge edge_create_embedding(int dest, void * embedding);

/**
 * Create a new list copied from another
 * 
 * @param edge : list to copy
 * 
 * @return Edge : a new copied list
 * */
Edge edge_createCopy(Edge edge);


/*#######################
    EDGE GETTERS
#########################*/

/**
 * Get the next edge in the list
 * 
 * @param edge : the current edge
 * 
 * @return Edge : the next edge, NULL if it's in the end of the list
 * */
Edge edge_getNext(Edge edge);


/*#######################
    EDGE SETTERS
#########################*/

/**
 * Set the next edge of this edge.
 * Allow inserting edges everywhere in the list.
 * 
 * @param src : source edge
 * @param inserted : edge inserted
 * */
void edge_setNext(Edge src, Edge inserted);

#endif