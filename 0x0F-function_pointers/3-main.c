#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result
 * @argc: The number of arguments
 * @argv: arg vector
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	opr = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(opr) == NULL || opr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opr == '/' && y == 0) || (*opr == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opr)(x, y));
	return (0);
}
