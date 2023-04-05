#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer
 * @index: this is the index of the node, starting at 0
 * Return: return NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
