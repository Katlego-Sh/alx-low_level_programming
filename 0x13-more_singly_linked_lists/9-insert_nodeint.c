#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first nodein the list
 * @idx: index for new node
 * @n: data to add in new node
 *
 * Return: pointer to the node, alternatively NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *x = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (a = 0; x && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = x->next;
			x->next = new;
			return (new);
		}
		else
		x = x->next;
	}
return (NULL);
}
