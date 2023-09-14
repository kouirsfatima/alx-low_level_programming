#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *sum_node = head;
	int sum = 0;

	while (sum_node != NULL)
	{
		sum += sum_node->n;
		sum_node = sum_node->next;
	}

	return (sum);
}