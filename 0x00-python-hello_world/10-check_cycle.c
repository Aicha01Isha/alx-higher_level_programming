#include "lists.h"

/**
 * check_cycle - functio that checks if a linked list contains a cycle
 * @list: parameter
 * Return: 1 on success, 0 on failure
 */

int check_cycle(listint_t *list)
{
	listint_t *s = list;
	listint_t *f = list;

	if (!list)
		return (0);
	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (1);
	}
	return (0);
}
