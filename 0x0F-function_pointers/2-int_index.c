#include "function_pointers.h"
/**
 * int_index - return int
 * @array: array
 * @size: number of elements 
 * @cmp: pointer to func
 * Return: int 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
//If size <= 0, array = NULL , cmp = NULL return -1
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	int x;
//int x returns the index of the first element for which the cmp function does not return 0	
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
