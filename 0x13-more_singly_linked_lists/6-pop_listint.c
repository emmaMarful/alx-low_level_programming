#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a node and returns the head node's data(n)
 * @head: pointer
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *el = *head;
	int num;

	if (!*head)
		return (0);

	el = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(el);

	return (num);
}
