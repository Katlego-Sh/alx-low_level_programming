#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: it points to first element of list
 * @n: data to add the new element within
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *x = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (x->next)
		x = x->next;
	x->next = new;
	return (new);
}
