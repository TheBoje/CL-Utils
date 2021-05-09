/**
 * @authors Vincent COMMIN & Louis LEENART
 * 
 * A module used as nodes for the graph's adjacency lists. 
 * One node is one of the cell of the adjacency list but the head
 * is in the graph.
 * 
 * **/

#ifndef NODE_H
#define NODE_H

// Adjacency list structures
struct NodeP;
typedef struct NodeP * Node;
typedef const struct NodeP * const_Node; 

/*#######################
    NODE CONSTRUCTORS
#########################*/


/**
 * Create a new node without embedding unlinked
 * 
 * @warning the list is created without embedding by default
 * 
 * @param dest : index of the vertex 
 * 
 * @return Node : return the new list
 * */
Node node_create(int dest);

/**
 * Create a new node with embedding unlinked
 * 
 * @warning the list is created without embedding by default
 * 
 * @param dest : index of the vertex
 * @param embedding : node's datas
 * 
 * @return Node : return the new list
 * */
Node node_create(int dest, void * embedding);

/**
 * Create a new list copied from another
 * 
 * @param node : list to copy
 * 
 * @return Node : a new copied list
 * */
Node node_createCopy(Node node);


/*#######################
    NODE GETTERS
#########################*/

/**
 * Get the next node in the list
 * 
 * @param node : the current node
 * 
 * @return Node : the next node, NULL if it's in the end of the list
 * */
Node node_getNext(Node node);


/*#######################
    NODE SETTERS
#########################*/

/**
 * Set the next node of this node.
 * Allow inserting nodes everywhere in the list.
 * 
 * @param src : source node
 * @param inserted : node inserted
 * */
void node_setNext(Node src, Node inserted);

#endif