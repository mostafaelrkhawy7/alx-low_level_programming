#include "main.h"

/**
 * print_binary - prints the binary number
 * @n: number to print
 * 
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
    int printed = 0;
	
    while (bits)
    {
        if ((1 << --bits & n))
        {
            _putchar('1');
            printed++;
        }
        else if (printed)
            _putchar('0');
    }
    if (!printed)
        _putchar('0');
}
