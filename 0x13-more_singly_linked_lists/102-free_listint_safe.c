#include "lists.h"
/**
 * free_listint_safe - functions to free a linked list
 * @h: points to first node in the linked list
 * Return: number of elements in free list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d;
	listint_t *x;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			x = (*h)->next;
			free(*h);
			*h = x;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
