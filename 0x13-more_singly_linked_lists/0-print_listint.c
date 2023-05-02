#include "lists.h"
/**
 * print_listint -  prints all elements of a listint_t list
 * @h: listint_t type used to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		printf("%d\n", h->n);
				nodenum++;
				h = h->next;
	}
	return (nodenum);
}
