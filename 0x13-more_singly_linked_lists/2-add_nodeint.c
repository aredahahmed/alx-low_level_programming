#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of the SLL
 * @head: Pointer of the head node
 * @n: Integer to insert in new head
 * Return: Pointer to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}


