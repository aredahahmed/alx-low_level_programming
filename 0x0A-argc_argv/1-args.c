#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: arguments counter
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
