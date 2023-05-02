#include "lists.h"
/**
 * get_nodeint_at_index -  returns nth node of the linked list
 * @head: fist node of linked list
 * @index: value of node to return
 *
 * Return: pointer to node, if it does not exist (NULL)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *x = head;

	while (x && a < index)
	{
		x = x->next;
		a++;
	}
	return (x ? x : NULL);
}
