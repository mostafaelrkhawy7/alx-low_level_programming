#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return 2d array
 * @width: width input
 * @height: height input
 * Return: 2 dim. array
 */
int **alloc_grid(int width,  int height)
{
    int x;
    int y;
    int **s;
    
    s = malloc((sizeof(*s)) * height);
    if (s == 0 || width <= 0 || height <= 0)
    {
        return (NULL);
    }
    else
    {
        for (x = 0; x < height; x++)
        {
            s[x] = malloc ((sizeof(**s)) * width);
            if (s[x] == 0)
            {
                while (x--)
                
                    free(s[x]);
            free(s);
            return (NULL); 
            }
            for ( y = 0; y < width; y++)
            
                s[x][y] = 0;
        }
    }
    return (s);
}
