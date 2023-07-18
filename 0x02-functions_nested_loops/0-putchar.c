#include "main.h"

/**
 * main - main block
 * Return: return 0
 */
int main(void)
{
	char val[10] = "_putchar";

	int i;
	
	for (i = 0; i < 8; i++)
	{
		_putchar(val[i]);
	}

	_putchar('\n');

	return (0);
}
