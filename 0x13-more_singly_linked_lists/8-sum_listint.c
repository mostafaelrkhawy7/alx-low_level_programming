#include "lists.h"

/**
 * sum_listint - returns the result of all data in the list
 * @head: first node
 *
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tp = head;

	while (tp)
	{
		sum += tp->n;
		tp = tp->next;
	}

	return (sum);
}
