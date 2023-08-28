#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
