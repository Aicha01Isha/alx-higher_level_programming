#include "lists.h"

/**
 * reverse_listint - Reverses a singly-linked listint_t list.
 * @head: parameter
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nod = *head, *next, *pr = NULL;

	while (nod)
	{
		next = nod->next;
		nod->next = pr;
		pr = nod;
		nod = next;
	}
	*head = pr;
	return (*head);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: parameter
 * Return: 1 on success, 0 on failure
 */

int is_palindrome(listint_t **head)
{
	listint_t *t, *r, *m;
	size_t size = 0, a;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	t = *head;
	while (t)
	{
		size++;
		t = t->next;
	}
	t = *head;
	for (a = 0; a < (size / 2) - 1; a++)
		t = t->next;

	if ((size % 2) == 0 && t->n != t->next->n)
		return (0);
	t = t->next->next;
	r = reverse_listint(&t);
	m = r;
	t = *head;
	while (r)
	{
		if (t->n != r->n)
			return (0);
		t = t->next;
		r = r->next;
	}
	reverse_listint(&m);
	return (1);
}
