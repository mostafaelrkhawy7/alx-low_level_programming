#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string
 *
 * Return: address, or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->length = length;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = n;
	return (n);
}
