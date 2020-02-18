#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    // Case: Normal Insert 27 normally
    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);

    printf("-----------------\n");

    insert_node(&head, 27);
    print_listint(head);

    free_listint(head);

    // Case: null case


    // insert_node(NULL, 20);
    printf("-----------------\n");
    head = NULL;
    add_nodeint_end(&head, 20);
    add_nodeint_end(&head, 30);
    print_listint(head);
    insert_node(&head, 4);
    print_listint(head);
    return (0);
}