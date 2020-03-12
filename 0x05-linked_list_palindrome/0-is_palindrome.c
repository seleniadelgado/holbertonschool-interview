#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_new_node - inserts a node where needed
* @head: parameter for lists.
* @n: value inside node.
* return new head
**/
void insert_new_node(listint_t **head, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		new_node->next = *head;
		*head = new_node;
	}
}
/**
 * reverse_copy - reverses a copy of a linked list.
 * @head: head of list
 * Return: reverse head.
 */
listint_t *reverse_copy(listint_t **head)
{
	listint_t *reverse_head = NULL;
	listint_t *cur = *head;

	while (cur != NULL)
	{
		insert_new_node(&reverse_head, cur->n);
		cur = cur->next;
	}
	return (reverse_head);
}
/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: head of lists.
 * Return: 0 if not a palindrom, 1 if it is a palindrome
 **/
int is_palindrome(listint_t **head)
{
	listint_t *rev_list = reverse_copy(head);
	listint_t *cur = *head;

	if ((*head) == NULL)
		return (1);
	if ((*head)->next == NULL)
		return (1);

	while (rev_list != NULL && cur != NULL)
	{
		if (rev_list->n != cur->n)
			return (0);
		rev_list = rev_list->next;
		cur = cur->next;
	}
	return (1);
}
