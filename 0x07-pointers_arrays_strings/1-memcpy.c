#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory to be stored
 *@src: memory to be copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	

	for (int j; j < n ,j++,n--)
	{
		dest[j] = src[j];
		
	}
	return (dest);
}
