#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new
 * node at a given position.
 *
 * @head: pointer
 * @idx: this is the indexx of the list where node should
 * be added. index starts at ero(0)
 *
 * @n: number
 * Return: address of the new node else return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c = *head, *el;
	unsigned int i = 0;

	el = malloc(sizeof(listint_t));
	if (el == NULL)
		return (NULL);

	el->n = n;

	if (idx == 0)
	{
		el->next = c;
		*head = el;
		return (el);
	}
	while (i < idx - 1)
	{
		if (c == NULL || c->next == NULL)
			return (NULL);
		c = c->next;
		i++;
	}

	el->next = c->next;
	c->next = el;

	return (el);
}
