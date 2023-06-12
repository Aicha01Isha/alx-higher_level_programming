#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: parameter
 * Return: i
 */

size_t print_listint(const listint_t *h)
{
    const listint_t *cur;
    unsigned int i;

    cur = h;
    i = 0;
    while (cur != NULL)
    {
	printf("%i\n", cur->n);
	cur = cur->next;
	i++;
    }
    return (i);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: parameter
 * @n: parameter
 * Return: ne
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *ne;
    listint_t *cur;

    cur = *head;
    ne = malloc(sizeof(listint_t));
    if (ne == NULL)
	return (NULL);
    ne->n = n;
    ne->next = NULL;
    if (*head == NULL)
	*head = ne;
    else
    {
	while (cur->next != NULL)
	    cur = cur->next;
	cur->next = ne;
    }
    return (ne);
}

/**
 * free_listint - frees a listint_t list
 * @head: parameter
 * Return: 0 on success
 */

void free_listint(listint_t *head)
{
    listint_t *cur;

    while (head != NULL)
    {
	cur = head;
	head = head->next;
	free(cur);
    }
}
