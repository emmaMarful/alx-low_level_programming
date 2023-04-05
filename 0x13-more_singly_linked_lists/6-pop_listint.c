#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: pointer
 * Return: 0 if the link is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *elements = *head;
	int number;

	if (!*head)
		return (0);
	elements = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(elements);

	return (number);
}
