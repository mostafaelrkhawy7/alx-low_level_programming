#include "main.h"

/**
 * set_bit - sets a bit  to 1
 * @n: pointer number to change
 * @index: index 
 *
 * Return: 1  success, -1  failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
