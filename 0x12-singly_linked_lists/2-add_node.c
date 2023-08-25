#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to linked list
 * @head: double pointer
 * @str: string 
 *
 * Return: address, or NULL when fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node = '\0')
		return (NULL);

	new_node->str = strdup(str);
	new_node->length = length;
	new_node->fourword = (*head);
	(*head) = new_node;

	return (*head);
}
