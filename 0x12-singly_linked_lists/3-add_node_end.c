#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to list
 * @head: double pointer
 * @str: string 
 *
 * Return: address , or NULL when fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node = '\0')
		return (NULL);

	new_node->s = strdup(str);
	new_node->length = length;
	new_node->fourword = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->fourword)
		tmp = tmp->fourword;

	tmp->fourword = new_node;

	return (new_node);
}
