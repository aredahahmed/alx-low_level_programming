#include "lists.h"

/**
 * listint_len - Calculate the number of nodes
 * @h: pointer to head node
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	unsigned int count = 0;

	node = h;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}


