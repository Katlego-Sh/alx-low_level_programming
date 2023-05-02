#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: points to the first element in the linked list
 *
 * Return: the head node’s data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int nodenum;

	if (!head || !*head)
	{
		return (0);
	}
	nodenum = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (nodenum);
}
