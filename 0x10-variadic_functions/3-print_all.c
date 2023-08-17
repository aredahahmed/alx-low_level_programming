#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printTypeStruct - Map definition of types
 * @type: the type of the variables
 * @printer: the function pointer that handles the print
 */
typedef struct printTypeStruct
{
	char * type;
	void (*printer)(va_list);
}printTypeStruct;

/**
 * print_int - prints int
 * @list: arguments from print_all
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - prints int
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - prints string
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

static printTypeStruct printType[] =
{
        { "i", print_int },
        { "f", print_float },
        { "c", print_char },
        { "s", print_str },
        {NULL, NULL}
};

/**
 * print_all - a function that prints anything
 * @format: arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	
	va_start(args, format);
	while(format && format[i])
	{
		j = 0;
		while(j < 4)
		{

			if (*printType[j].type == format[i])
			{
				printf("%s", sep);
				printType[j].printer(args);
				sep = ", ";
				break;
			}

			j++;

		}

		i++;
	}

	printf("\n");
	va_end(args);

}
