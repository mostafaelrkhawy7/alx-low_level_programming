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
	unsigned long int curent;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curent = exc >> i;
		if (curent & 1)
			count++;
	}

	return (count);
}
