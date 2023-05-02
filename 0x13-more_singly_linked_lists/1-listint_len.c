#include "lists.h"

/**
 * listint_len - return number of elements in a linked listint_t list
 * @h: type listint_t used to print
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		nodenum++;
		h = h->next;
	}

	return (nodenum);
}
