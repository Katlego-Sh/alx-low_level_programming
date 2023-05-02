#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: points to listint_t list that will be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
