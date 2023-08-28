#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * @head: pointer to the first node 
 * @n: new node
 *
 * Return: new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new_node;

	return (new_node);
}
