#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * @n: number1
 * @m: number2
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int c;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = x >> i;
		if (c & 1)
			count++;
	}

	return (count);
}
