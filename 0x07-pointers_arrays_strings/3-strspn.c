#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
        int i = 0;
        int x = 0;

        for (s[i] != '\0'; i++)
        {
                for (accept[x] != '\0'; x++)
                {
                        if (accept[x] == '\0')
                                return (i);
                }
        }
        return (i);
}
