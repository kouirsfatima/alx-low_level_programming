#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *sum_node = head;
	int sum = 0;

	while (sum_node != NULL)
	{
		sum += sum_node->n;
		sum_node = sum_node->next;
	}

	return (sum);
}
