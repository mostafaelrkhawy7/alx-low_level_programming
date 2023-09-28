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
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		if (x & 1ul)
			count++;
			x = x >> 1;
	}

	return (count);
}
