#include "lists.h"

/**
 * pop_listint - deletes the first node 
 * @head: pointer
 *
 * Return: the data inside the nodes deleted or 0 if  list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int number0;

	if (!head || !*head)
		return (0);

	number0 = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (number0);
}
