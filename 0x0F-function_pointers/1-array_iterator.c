#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints array using func pointer
 * @array: array
 * @size: size of array(elements number)
 * @action: pointer
 * Return: void(nothing)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j;
	
	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
