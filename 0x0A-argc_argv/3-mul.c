#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints sum 
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success) - not 0 fail
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n" , sum);
	}
	else
	{
		printf("failed\n");
		return (1);
	}
	return (0);
}
