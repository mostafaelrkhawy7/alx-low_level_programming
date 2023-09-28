#include "main.h"

/**
 * get_bit - returns value of a bit in a decimal number
 * @n: number
 * @index: index
 *
 * Return: bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) *8)
		return(-1);
	return (n >> index & 1);
}
