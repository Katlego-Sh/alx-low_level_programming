#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node within
 * linked list at particular index
 * @head: pointer to first element
 * @index: index to be deleted
 *
 * Return: 1 if it succeeded alternatively -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *value = NULL;
	unsigned int a = 0;

	if (*head == 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);

	}
	while (a < index - 1)
	{
		if (!x || !(x->next))
		{
			return (-1);
		}
			x = x->next;
			a++;
	}
		value = x->next;
		x->next = value->next;
		free(value);
		return (1);
}
