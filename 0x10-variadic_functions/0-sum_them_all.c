#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums all passed int values
 *
 * @n: int, number of undefined arguments
 *
 * Return: sum of args
 * On error, 0 is returned
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, unsigned int);
		}
	}
	va_end(args);
	
	return (sum);
}	
