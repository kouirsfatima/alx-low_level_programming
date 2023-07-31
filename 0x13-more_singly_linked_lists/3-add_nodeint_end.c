#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *str, *tmp = *head;

	str = malloc(sizeof(listint_t));
	if (str == NULL)
		return (NULL);

	str->n = n;
	str->next = NULL;

	if (*head == NULL)
	{
		*head = str;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = str;
	}

	return (*head);
}
