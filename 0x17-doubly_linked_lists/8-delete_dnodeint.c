#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * of a dlistint_t linked list
 *
 * @head: a double pointer to the head of the list
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index)
	{
		if (current == NULL)
			return (-1);
		prev = current;
		current = current->next;
		i++;
	}

	prev->next = current->next;
	if (current->next)
		current->next->prev = prev;
	free(current);

	return (1);
}
