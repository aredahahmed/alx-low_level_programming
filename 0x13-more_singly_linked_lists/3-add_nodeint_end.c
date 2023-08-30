#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a SLL.
 * @head: Pointer of the head
 * @n: Integer to add as content
 * Return: Pointer of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}


	node = *head;

	while (node->next)
	{
		node = node->next;
	}
	
	node->next = new_node;

	return (new_node);
}
