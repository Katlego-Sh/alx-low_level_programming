#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: it will free the list_t list
 */
void free_list(list_t *head)
{
	list_t *n;

	while (head)
	{
	n = head->next;
	free(head->str);
	free(head);
	head = n;
	}
}
