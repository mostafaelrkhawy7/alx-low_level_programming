#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all 
 * @format: list of args
 * 
 * Return : void
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *s1 = "";

	va_list li;

	va_start(li, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", s1, va_arg(li, int));
					break;
				case 'i':
					printf("%s%d", s1, va_arg(li, int));
					break;
				case 'f':
					printf("%s%f", s1, va_arg(li, double));
					break;
				case 's':
					s = va_arg(li, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", s1, s);
					break;
				default:
					x++;
					continue;
			}
			s1 = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(li);
}
