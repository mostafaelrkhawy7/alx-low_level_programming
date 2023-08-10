#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of the allocated memory for ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer or NULL if new_size = 0 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr = NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 = NULL)
		
			return (NULL);
		return (ptr1);
	}
	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 = NULL)

			return (NULL);
		
		for ( x = 0; x < old_size && x < new_size; x++)

			*((char *)ptr1 + x) = *((char *)ptr + x);

		free(ptr);
	}

	return (ptr1);
}
