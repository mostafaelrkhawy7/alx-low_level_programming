#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer 
 * @b: const char
 * @n: number of bytes
 *
 * Return: pointer into area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	
		*s++ = b;
	
	return (p);
}

/**
 * *_calloc - allocates memory for an array whith malloc
 * @nmemb: lenght of array
 * @size: size of elements 
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(size * nmemb);

	if (r == NULL)
		return (NULL);

	_memset(r, 0, nmemb * size);

	return (r);
}
