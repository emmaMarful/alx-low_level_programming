#include "lists.h"

/**
 * listint_len -  function that returns the number of elements
 * in a linked listint_t list
 * @h: pointer
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
