#include "lists.h"

/**
 * list_len - is a function that returns the number of
 * elements in a linked list_t list.
 * @h: list of list_t
 * Return: the number elements (el)
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
