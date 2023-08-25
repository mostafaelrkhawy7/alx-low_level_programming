#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in list
 * @h: pointer
 *
 * Return: number of elements in the pointer
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->fourword;
	}
	return (num);
}
