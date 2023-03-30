#include "lists.h"

/**
 * print_list - is a function that prints all the elements of a list_t list.
 * @h: list of list_t
 * Return: number of nodes in the list_t
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
