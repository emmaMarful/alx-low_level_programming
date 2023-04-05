#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at
 * index of a listint_t linked list.
 *
 * @head: pointer
 * @index: this is the indexx of the list where node should
 * be added. index starts at ero(0)
 *
 * Return: return -1 if it fails, else return 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head, *el;
	unsigned int i = 0;

	if (!c)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}
	while (i < index - 1)
	{
		if (!c->next)
			return (-1);
		c = c->next;
		i++;
	}
	el = c->next;
	c->next = el->next;
	free(el);
	return (1);
}
