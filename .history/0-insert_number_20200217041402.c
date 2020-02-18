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
    listint_t *new_node;
    listint_t *current = *head;

    if (**head == NULL) {
        printf("Returning null");
        return NULL;
    }
    new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
            return NULL;
    new_node->n = number;
    new_node->next = NULL;

    while (current != NULL)
    {
        if (current->next->n > new_node->n)
        {
            new_node->next = current->next;
            current->next = new_node;
            return new_node;
        }
        current = current->next;
    }
    return new_node;
}
