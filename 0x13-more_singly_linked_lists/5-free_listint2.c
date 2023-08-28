#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;

	while (*head)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}

	*head = NULL;
}
