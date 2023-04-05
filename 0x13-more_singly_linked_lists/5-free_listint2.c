#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *freeme;

	if (!head)
		return;
	while (*head)
	{
		freeme = *head;
		*head = (*head)->next;
		free(freeme);
	}
	*head = NULL;
}
