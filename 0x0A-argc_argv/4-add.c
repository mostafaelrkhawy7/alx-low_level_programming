#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of money to change the amount
 * @argc: size of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; c++)
			if (*c < '0' || *c '9')
				return (printf("failed\n"), 1)
				sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}	
