#include "main.h"

/**
* prints the abs value of a number
* @i: the number
* Return: returns 0
*/
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
