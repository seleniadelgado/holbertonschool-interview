#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**Insert in sorted linked list**/
listint_t *insert_node(listint_t **head, int number) {
    /** check if list is null, if so return null
     * if not, malloc space for new node, go through list
     * and find the correct spot for new node
     * each node has a pointer, for previous node point to new node,
     * new node point to previous and next node.
     * return the new node.
     **/
    int new_node;

    if (**head == "/0")
        return null;
    new_node = malloc(n * sizeof(int));
}