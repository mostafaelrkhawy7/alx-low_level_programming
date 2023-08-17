#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums args
 * @n: The number of args
 * @...: ints to sum
 *
 * Return: If n == 0 return 0, or - the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int x, s = 0;

	if (n == 0) 
		return (0);
		
	va_start(ap, n);

	for (x = 0; x < n; x++)
		s += va_arg(ap, int);

	va_end(ap);

	return (s);
}
