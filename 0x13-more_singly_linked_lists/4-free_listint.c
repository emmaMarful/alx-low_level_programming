#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer
 * Return: returns anothing
 */

void free_listint(listint_t *head)
{
	listint_t *freeme;

	while (head)
	{
		freeme = head;
		head = head->next;
		free(freeme);
	}
}
