#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by new line
 * @separator: The string
 * @n: The number of args
 * @...: strings to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *s;
	int x;

	va_start(strs, n);

	for (x = 0; x < n; x++)
	{
		s = va_arg(strs, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strs);
}
