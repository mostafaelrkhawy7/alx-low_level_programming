#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: list  to free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->fourword;
		free(head->s);
		free(head);
		head = tmp;
	}
}
