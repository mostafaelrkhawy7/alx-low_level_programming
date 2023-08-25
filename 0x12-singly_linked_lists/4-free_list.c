#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: list_t list to free 
 */
void free_list(list_t *head)
{
	list_t *n, *n2;
	n = head;
	while (n)
	{
		n2 = n->next;
		free(n->str);
		free(n);
		n = n2;
	}
}
