#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* create a new node.
*/
void insert_new_node(listint_t **head, int n){
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return;

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
        *head = new_node;
    else {
        new_node->next = *head;
        *head = new_node;
    }
}
/**
 * reverses a copy of a linked list.
 * return reverse head.
 */
listint_t *reverse_copy(listint_t **head) {
    listint_t *reverse_head = NULL;
    listint_t *cur = *head;

    while(cur != NULL){
        insert_new_node(&reverse_head, cur->n);
        cur = cur->next;
    }
    return reverse_head;
}
/**
 * Write a function in C that checks if a singly linked list is a palindrome.
 *  Return 0 if not a palindrom, 1 if it is a palindrome
 **/
int is_palindrome(listint_t **head){
    listint_t *rev_list = reverse_copy(head);
    listint_t *cur = *head;

    if ((*head) == NULL)
        return 1;
    if ((*head)->next == NULL)
        return 1;

    while(rev_list != NULL && cur != NULL){
        if (rev_list->n != cur->n)
            return 0;
        rev_list = rev_list->next;
        cur = cur->next;
    }
    return 1;
}

/**
 * testing, testing.
 **/
// int main(void) {
//     listint_t *head;
//     listint_t *list;

//     head = NULL;
//     insert_new_node(&head, 5);
//     insert_new_node(&head, 7);
//     insert_new_node(&head, 7);
//     print_listint(head);
//     list = reverse_copy(&head);
//     print_listint(list);

//     return 0;
// }





