#include "main.h"

/** _memset - fill a block of memory with a specific value
 *  @s: starting address of memory to be filled
 *  @b: the value desired
 *  @n: number of bytes to be changed
 * 
 *  Return: array new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);

{
        unsigned int x;

        for(x = 0 ; n > 0 ; x++ , n--)
        {
            s[x] = b;

        }
        return (s);
}
