#include "lists.h"
/**
 * sum_listint - finds sum of all  data (n) of the linked list
 * @head: first node of listint_t linked list
 *
 * Return: total of calculation
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x = head;

	while (x)
	{
		sum += x->n;
		x = x->next;
	}
	return (sum);
}
