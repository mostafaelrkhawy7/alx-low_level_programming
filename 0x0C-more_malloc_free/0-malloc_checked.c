#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if p = NULL (failed)
 * @b: size of bytes (int)
 * Return: a pointer to the  memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
