#include "main.h"

/**
 * get_endianness - checks if a machine is little or big 
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *s = (char *) &x;

	return (*s);
}
