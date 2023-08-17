#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: separate numbers
 * @n: int, number of undefined arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	char *c;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char*);

		if (c != NULL)
		{
			printf("%s", c);
		}
		else
		{
			printf("(nil)");
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	
	va_end(args);

	putchar('\n');
}
