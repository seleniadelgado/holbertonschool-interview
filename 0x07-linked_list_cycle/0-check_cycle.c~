#include "lists.h"
/**
 * check_cycle - function checks if a singly linked list has a cycle in it.
 * @list: parameter for linked list.
 * Return: 0.
 */
int check_cycle(listint_t *list)
{
  listint_t *one = list;
  listint_t *two = list;

  if (list == NULL)
    return (0);
  while (one != NULL && one->next != NULL)
    {
      one = one->next->next;
      two = two->next;
      if (one == two)
	return (1);
    }
  return (0);
}
