#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints SLL content
 * @h: pointer to SLL head
 * Return: Integer
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	unsigned int count = 0;

	node = h;

	while (node)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}

	return (count);

}


