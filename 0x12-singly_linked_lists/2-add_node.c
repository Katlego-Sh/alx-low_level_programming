#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a double pinter to the  list_t list
 * @str: needs to be duplicated to add node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *all;
	unsigned int len = 0;

	while (str[len])
		len++;
	all = malloc(sizeof(list_t));
	if (!all)
		return (NULL);

	all->str = strdup(str);
	all->len = len;
	all->next = (*head);
	(*head) = all;

	return (*head);
}
