#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
<<<<<<< HEAD
  int n;
  struct listint_s *next;
=======
    int n;
    struct listint_s *next;
>>>>>>> 9929f1514cd02e3e354a06f6c6ee187e1c5ef2ec
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

<<<<<<< HEAD
#endif /* LISTS_H */
=======
#endif /* LISTS_H */
>>>>>>> 9929f1514cd02e3e354a06f6c6ee187e1c5ef2ec
