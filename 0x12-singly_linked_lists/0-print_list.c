#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all elements in a list
 * @h: pointer to a list
 * return: the number of printer nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while(h)
	{
		if (!h->str)
		{
			print("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			n++;
		}

		return (n);
	}
}
