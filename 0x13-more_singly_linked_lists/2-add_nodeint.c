#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list
 * @head: pointer
 * @n: number to be summed up
 * Return: the address of the new element else null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *elements;

	elements = malloc(sizeof(listint_t));
	if (elements == NULL)
		return (NULL);
	elements->n = n;
	elements->next = *head;
	*head = elements;

	return (*head);
}
