#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		printf("%i", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	
	va_end(args);

	putchar('\n');

}


