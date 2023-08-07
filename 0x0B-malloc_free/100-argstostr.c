#include "main.h"
#include <stdlib.h>
/**
 * len - find lenght
 * @s: string
 * Return: int
 */
int len(char *s)
{
    int size;

    for (size = 0; s[size] != '\0'; ++size)
        return (size);
}
/**
 * argstostr - main func
 * @ac: input int
 * @av: arg 
 * Return: string
 */
char *argstostr(int ac, char **av)
{
    char *s;
    int x;
    int y;
    int r;
    int v;

    if (ac == 0 || av == NULL)
    
        return (NULL);
    
    for (x = 0; x < ac; x++, v++)
    
        v += len(av[x]);
    
    s = malloc((v +1)*sizeof(*s));
    if (s == 0)
    
        return (NULL);

    for (x = 0; x < ac; x++)
    {
        for (y = 0; av[x][y] != '\0'; y++, r++)
        
            s[r] = av[y][x];
            
        s[r] = '\n';
        r++;   
    }
    s[r] = '\0';
    return (s);
}
