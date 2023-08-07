#include "main.h"
#include <stdlib.h>
/**
 * len - lenght of the string
 * @s: string
 * Return: int size
 */
int len(char *s)
{
    int size;
    
    for ( size = 0; s[size] != '\0'; size++)
        ;
        return (size);  
}
/**
 * str_concat - concatenates tow string
 * @c1: string1 
 * @c2: string2
 * Return : pointer from concatenation
*/
char *str_concat( char *c1,  char *c2)
{
    int j;
    int size1;
    int size2;
    char *r;

    size1 = len(c1);
    size2 = len(c2);
    r = malloc((size1 + size2) *sizeof(char) +1);

    if (r == NULL)
    
        return (0);
    
    for ( j = 0; j <= size1 + size2; j++)
    {
        if (j < size1)
        
            r[j] = c1[j];
        
        else
            r[j] = c2[j - size1];
        
    }
    r[j] = '\0';
    return (r); 
}
