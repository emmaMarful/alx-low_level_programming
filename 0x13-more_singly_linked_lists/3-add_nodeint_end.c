include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list.
 * @head: pointer
 * @n: the number ot be added
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *elements, *l;

	elements = malloc(sizeof(listint_t));

	if (elements == NULL)
		return (NULL);
	elements->n = n;
	elements->next = NULL;

	if (*head == NULL)
		*head = elements;
	else
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l->next = elements;
	}
	return (*head);
}
