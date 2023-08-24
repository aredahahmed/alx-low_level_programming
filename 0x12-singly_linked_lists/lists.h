#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_t - singly linked list
 * @str: The string to be saved
 * @len: The length of the string
 * @next: The pointer to the next node
 */
typedef struct list_t
{
	char *str;
	unsigned int len;
	strcut list_t *next;
} list_t;


size_t print_list(const list_t *h);




#endif
