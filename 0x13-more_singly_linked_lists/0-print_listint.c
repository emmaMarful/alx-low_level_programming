#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	for (nodes; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
