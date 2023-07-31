#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory to be stored
 *@src: memoryto be copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	for (int j = 0; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
