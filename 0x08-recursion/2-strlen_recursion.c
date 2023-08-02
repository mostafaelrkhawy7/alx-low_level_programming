#include "main.h"
/** 
*_strlen_recursion -function to return the length of the string
*@s: The string
*Return: the length of the string (int i)
*/     
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);

}
