#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the linked list that will be searched for
 * Return:  address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *e = head;
	listint_t *f = head;

	if (!head)
	{
		return (NULL);
	}
	while (e && f && f->next)
	{
		f = f->next->next;
		e = e->next;
		if (f == e)
		{
			e = head;
			while (e != f)
			{
				e = e->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
