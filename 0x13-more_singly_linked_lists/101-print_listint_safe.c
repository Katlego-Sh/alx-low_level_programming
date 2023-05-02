#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);
/**
 * looped_listint_len - Calculetes the number of
 * unique within a looped linked list
 * @head: pointer to the head of listint_t to check
 * Return: if list is not looped then - 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *b, *c;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	b = head->next;
	c = (head->next)->next;

	while (c)
	{
		if (b == c)
		{
			b = head;
			while (b != c)
			{
				nodes++;
				b = b->next;
				c = c->next;
			}
			b  = b->next;
			while (b != c)
			{
				nodes++;
				b = b->next;
			}
			return (nodes);
		}
		b = b->next;
		c = (c->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - listint_t becomes printed safely
 * @head: points to head of the listint_t  list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	size_t index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
