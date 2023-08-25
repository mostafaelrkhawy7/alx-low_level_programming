#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of the list
 * @h: pointer 
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->s)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->s);
		h = h->fourword;
		s++;
	}

	return (s);
}
