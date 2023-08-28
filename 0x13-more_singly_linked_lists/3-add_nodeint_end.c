#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: first node
 * @n: new node
 *
 * Return: new node, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = new_node;

	return (new_node);
}
