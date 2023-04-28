#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of a list_t list
 * @h: for a singly linked list
 * Return: the number of elements within list
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
