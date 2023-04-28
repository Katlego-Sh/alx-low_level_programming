#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints the number of elements in list_t list
 * @h: a pointer to list_t list
 * Return: the number of elements of list_t list
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
