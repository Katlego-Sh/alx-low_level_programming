#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: listint_t list that will be freed
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
