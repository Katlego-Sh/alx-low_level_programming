#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list_t list
 * @str: string to be duplicated to put new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *all;
	list_t *n = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	all = malloc(sizeof(list_t));
	if (!all)
		return (NULL);

	all->str = strdup(str);
	all->len = len;
	all->next = NULL;

	if (*head == NULL)
	{
		*head = all;
		return (all);
	}

	while (n->next)
		n = n->next;
	n->next = all;

	return (all);
}


