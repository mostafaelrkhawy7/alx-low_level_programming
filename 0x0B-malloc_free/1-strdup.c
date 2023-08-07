#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - retutn pointer to new memory allocated space
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
    int size;
    int j = 0;
    char *n;
    
    if (str == NULL)
    
        return (NULL);
    
    for (size = 0; str[size] != '\0';)
        size++;
    
    n = malloc((sizeof(*n))*(size +1));

    if (n == NULL)
        return (NULL);
        
    for (; j < size; j++)
    
        n[j] = str[j];

    return (n);
       
}
