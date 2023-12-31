#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int next = 0;

	while (h != NULL && h->prev != NULL)
	{
		h = h->prev;
		next++;
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		next++;
	}

	return (next);
}

